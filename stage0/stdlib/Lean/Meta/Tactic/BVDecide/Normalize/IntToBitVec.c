// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.IntToBitVec
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.InstantiateMVarsS import Lean.Meta.Sym.LitValues
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
extern lean_object* l_Lean_Meta_Tactic_BVDecide_symIntToBitVecExt;
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getNatValue_x3f(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___redArg();
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "System"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Platform"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numBits"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(244, 7, 92, 194, 164, 177, 167, 52)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(128, 236, 129, 7, 244, 3, 115, 42)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(195, 13, 33, 186, 170, 198, 65, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__0_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "intToBitVec"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 217, 71, 86, 75, 235, 18, 78)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__3_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg(lean_object* v_e_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_6_; lean_object* v_relevantTerms_7_; lean_object* v_relevantHyps_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_21_; 
v___x_6_ = lean_st_ref_take(v_a_4_);
v_relevantTerms_7_ = lean_ctor_get(v___x_6_, 0);
v_relevantHyps_8_ = lean_ctor_get(v___x_6_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_6_);
if (v_isSharedCheck_21_ == 0)
{
v___x_10_ = v___x_6_;
v_isShared_11_ = v_isSharedCheck_21_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_relevantHyps_8_);
lean_inc(v_relevantTerms_7_);
lean_dec(v___x_6_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_21_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_12_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__0));
v___x_13_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__1));
v___x_14_ = lean_box(0);
v___x_15_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_12_, v___x_13_, v_relevantTerms_7_, v_e_3_, v___x_14_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_15_);
v___x_17_ = v___x_10_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v___x_15_);
lean_ctor_set(v_reuseFailAlloc_20_, 1, v_relevantHyps_8_);
v___x_17_ = v_reuseFailAlloc_20_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_st_ref_set(v_a_4_, v___x_17_);
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_14_);
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___boxed(lean_object* v_e_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg(v_e_22_, v_a_23_);
lean_dec(v_a_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm(lean_object* v_e_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_33_; lean_object* v_relevantTerms_34_; lean_object* v_relevantHyps_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_48_; 
v___x_33_ = lean_st_ref_take(v_a_27_);
v_relevantTerms_34_ = lean_ctor_get(v___x_33_, 0);
v_relevantHyps_35_ = lean_ctor_get(v___x_33_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_48_ == 0)
{
v___x_37_ = v___x_33_;
v_isShared_38_ = v_isSharedCheck_48_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_relevantHyps_35_);
lean_inc(v_relevantTerms_34_);
lean_dec(v___x_33_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_48_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__0));
v___x_40_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___redArg___closed__1));
v___x_41_ = lean_box(0);
v___x_42_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_39_, v___x_40_, v_relevantTerms_34_, v_e_26_, v___x_41_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v___x_42_);
v___x_44_ = v___x_37_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_42_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v_relevantHyps_35_);
v___x_44_ = v_reuseFailAlloc_47_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_st_ref_set(v_a_27_, v___x_44_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_41_);
return v___x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm___boxed(lean_object* v_e_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeTerm(v_e_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg(lean_object* v_f_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; lean_object* v_relevantTerms_63_; lean_object* v_relevantHyps_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_77_; 
v___x_62_ = lean_st_ref_take(v_a_60_);
v_relevantTerms_63_ = lean_ctor_get(v___x_62_, 0);
v_relevantHyps_64_ = lean_ctor_get(v___x_62_, 1);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_77_ == 0)
{
v___x_66_ = v___x_62_;
v_isShared_67_ = v_isSharedCheck_77_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_relevantHyps_64_);
lean_inc(v_relevantTerms_63_);
lean_dec(v___x_62_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_77_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__0));
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__1));
v___x_70_ = lean_box(0);
v___x_71_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_68_, v___x_69_, v_relevantHyps_64_, v_f_59_, v___x_70_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_71_);
v___x_73_ = v___x_66_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_relevantTerms_63_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v___x_71_);
v___x_73_ = v_reuseFailAlloc_76_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_st_ref_set(v_a_60_, v___x_73_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_70_);
return v___x_75_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___boxed(lean_object* v_f_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg(v_f_78_, v_a_79_);
lean_dec(v_a_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp(lean_object* v_f_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v___x_89_; lean_object* v_relevantTerms_90_; lean_object* v_relevantHyps_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_104_; 
v___x_89_ = lean_st_ref_take(v_a_83_);
v_relevantTerms_90_ = lean_ctor_get(v___x_89_, 0);
v_relevantHyps_91_ = lean_ctor_get(v___x_89_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_104_ == 0)
{
v___x_93_ = v___x_89_;
v_isShared_94_ = v_isSharedCheck_104_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_relevantHyps_91_);
lean_inc(v_relevantTerms_90_);
lean_dec(v___x_89_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_104_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_95_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__0));
v___x_96_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___redArg___closed__1));
v___x_97_ = lean_box(0);
v___x_98_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_95_, v___x_96_, v_relevantHyps_91_, v_f_82_, v___x_97_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___x_98_);
v___x_100_ = v___x_93_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_relevantTerms_90_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___x_98_);
v___x_100_ = v_reuseFailAlloc_103_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_st_ref_set(v_a_83_, v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_97_);
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp___boxed(lean_object* v_f_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_M_addSizeHyp(v_f_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg(lean_object* v_e_113_, lean_object* v___y_114_){
_start:
{
uint8_t v___x_116_; 
v___x_116_ = l_Lean_Expr_hasMVar(v_e_113_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v_e_113_);
return v___x_117_;
}
else
{
lean_object* v___x_118_; lean_object* v_mctx_119_; lean_object* v___x_120_; lean_object* v_fst_121_; lean_object* v_snd_122_; lean_object* v___x_123_; lean_object* v_cache_124_; lean_object* v_zetaDeltaFVarIds_125_; lean_object* v_postponed_126_; lean_object* v_diag_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_136_; 
v___x_118_ = lean_st_ref_get(v___y_114_);
v_mctx_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc_ref(v_mctx_119_);
lean_dec(v___x_118_);
v___x_120_ = l_Lean_instantiateMVarsCore(v_mctx_119_, v_e_113_);
v_fst_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_fst_121_);
v_snd_122_ = lean_ctor_get(v___x_120_, 1);
lean_inc(v_snd_122_);
lean_dec_ref(v___x_120_);
v___x_123_ = lean_st_ref_take(v___y_114_);
v_cache_124_ = lean_ctor_get(v___x_123_, 1);
v_zetaDeltaFVarIds_125_ = lean_ctor_get(v___x_123_, 2);
v_postponed_126_ = lean_ctor_get(v___x_123_, 3);
v_diag_127_ = lean_ctor_get(v___x_123_, 4);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_136_ == 0)
{
lean_object* v_unused_137_; 
v_unused_137_ = lean_ctor_get(v___x_123_, 0);
lean_dec(v_unused_137_);
v___x_129_ = v___x_123_;
v_isShared_130_ = v_isSharedCheck_136_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_diag_127_);
lean_inc(v_postponed_126_);
lean_inc(v_zetaDeltaFVarIds_125_);
lean_inc(v_cache_124_);
lean_dec(v___x_123_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_136_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v_snd_122_);
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_snd_122_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_cache_124_);
lean_ctor_set(v_reuseFailAlloc_135_, 2, v_zetaDeltaFVarIds_125_);
lean_ctor_set(v_reuseFailAlloc_135_, 3, v_postponed_126_);
lean_ctor_set(v_reuseFailAlloc_135_, 4, v_diag_127_);
v___x_132_ = v_reuseFailAlloc_135_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_st_ref_set(v___y_114_, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v_fst_121_);
return v___x_134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg___boxed(lean_object* v_e_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg(v_e_138_, v___y_139_);
lean_dec(v___y_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0(lean_object* v_e_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg(v_e_142_, v___y_144_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___boxed(lean_object* v_e_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0(v_e_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg(lean_object* v_mvarId_156_, lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_156_, v_x_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_163_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_163_);
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
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_163_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_163_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg___boxed(lean_object* v_mvarId_180_, lean_object* v_x_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg(v_mvarId_180_, v_x_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2(lean_object* v_00_u03b1_188_, lean_object* v_mvarId_189_, lean_object* v_x_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg(v_mvarId_189_, v_x_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___boxed(lean_object* v_00_u03b1_197_, lean_object* v_mvarId_198_, lean_object* v_x_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2(v_00_u03b1_197_, v_mvarId_198_, v_x_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
return v_res_205_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = l_Lean_Level_ofNat(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_box(0);
v___x_226_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__9);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
return v___x_227_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__10);
v___x_229_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__8));
v___x_230_ = l_Lean_mkConst(v___x_229_, v___x_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1(lean_object* v_as_236_, size_t v_sz_237_, size_t v_i_238_, lean_object* v_b_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = lean_usize_dec_lt(v_i_238_, v_sz_237_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_246_, 0, v_b_239_);
return v___x_246_;
}
else
{
lean_object* v_a_247_; lean_object* v___x_248_; 
lean_dec_ref(v_b_239_);
v_a_247_ = lean_array_uget_borrowed(v_as_236_, v_i_238_);
lean_inc(v_a_247_);
v___x_248_ = l_Lean_FVarId_getType___redArg(v_a_247_, v___y_240_, v___y_242_, v___y_243_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__0___redArg(v_a_249_, v___y_241_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_252_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v___x_250_, 1);
v___x_252_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_251_, v___y_241_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v_a_255_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
v___x_259_ = lean_box(0);
v___x_260_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__0));
v___x_261_ = l_Lean_Expr_cleanupAnnotations(v_a_253_);
v___x_262_ = l_Lean_Expr_isApp(v___x_261_);
if (v___x_262_ == 0)
{
lean_dec_ref(v___x_261_);
v_a_255_ = v___x_260_;
goto v___jp_254_;
}
else
{
lean_object* v_arg_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_arg_263_ = lean_ctor_get(v___x_261_, 1);
lean_inc_ref(v_arg_263_);
v___x_264_ = l_Lean_Expr_appFnCleanup___redArg(v___x_261_);
v___x_265_ = l_Lean_Expr_isApp(v___x_264_);
if (v___x_265_ == 0)
{
lean_dec_ref(v___x_264_);
lean_dec_ref(v_arg_263_);
v_a_255_ = v___x_260_;
goto v___jp_254_;
}
else
{
lean_object* v_arg_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v_arg_266_ = lean_ctor_get(v___x_264_, 1);
lean_inc_ref(v_arg_266_);
v___x_267_ = l_Lean_Expr_appFnCleanup___redArg(v___x_264_);
v___x_268_ = l_Lean_Expr_isApp(v___x_267_);
if (v___x_268_ == 0)
{
lean_dec_ref(v___x_267_);
lean_dec_ref(v_arg_266_);
lean_dec_ref(v_arg_263_);
v_a_255_ = v___x_260_;
goto v___jp_254_;
}
else
{
lean_object* v_arg_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v_arg_269_ = lean_ctor_get(v___x_267_, 1);
lean_inc_ref(v_arg_269_);
v___x_270_ = l_Lean_Expr_appFnCleanup___redArg(v___x_267_);
v___x_271_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__2));
v___x_272_ = l_Lean_Expr_isConstOf(v___x_270_, v___x_271_);
lean_dec_ref(v___x_270_);
if (v___x_272_ == 0)
{
lean_dec_ref(v_arg_269_);
lean_dec_ref(v_arg_266_);
lean_dec_ref(v_arg_263_);
v_a_255_ = v___x_260_;
goto v___jp_254_;
}
else
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6));
v___x_274_ = l_Lean_Expr_isConstOf(v_arg_266_, v___x_273_);
if (v___x_274_ == 0)
{
uint8_t v___x_275_; 
v___x_275_ = l_Lean_Expr_isConstOf(v_arg_263_, v___x_273_);
if (v___x_275_ == 0)
{
lean_dec_ref(v_arg_269_);
lean_dec_ref(v_arg_266_);
lean_dec_ref(v_arg_263_);
v_a_255_ = v___x_260_;
goto v___jp_254_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_Meta_getNatValue_x3f(v_arg_266_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_302_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_302_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_302_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_302_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_val_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_297_; 
v_val_281_ = lean_ctor_get(v_a_277_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_297_ == 0)
{
v___x_283_ = v_a_277_;
v_isShared_284_ = v_isSharedCheck_297_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_val_281_);
lean_dec(v_a_277_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_297_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_285_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__11);
lean_inc(v_a_247_);
v___x_286_ = l_Lean_mkFVar(v_a_247_);
v___x_287_ = l_Lean_mkApp4(v___x_285_, v_arg_269_, v_arg_266_, v_arg_263_, v___x_286_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v_val_281_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_288_);
v___x_290_ = v___x_283_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_296_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_259_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_292_);
v___x_294_ = v___x_279_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_object* v___x_298_; lean_object* v___x_300_; 
lean_dec(v_a_277_);
lean_dec_ref(v_arg_269_);
lean_dec_ref(v_arg_266_);
lean_dec_ref(v_arg_263_);
v___x_298_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__13));
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_298_);
v___x_300_ = v___x_279_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec_ref(v_arg_269_);
lean_dec_ref(v_arg_266_);
lean_dec_ref(v_arg_263_);
v_a_303_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_276_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_276_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
else
{
lean_object* v___x_311_; 
lean_dec_ref(v_arg_269_);
lean_dec_ref(v_arg_266_);
v___x_311_ = l_Lean_Meta_getNatValue_x3f(v_arg_263_, v___y_240_, v___y_241_, v___y_242_, v___y_243_);
lean_dec_ref(v_arg_263_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_335_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_335_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_335_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_335_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
if (lean_obj_tag(v_a_312_) == 1)
{
lean_object* v_val_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_330_; 
v_val_316_ = lean_ctor_get(v_a_312_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_a_312_);
if (v_isSharedCheck_330_ == 0)
{
v___x_318_ = v_a_312_;
v_isShared_319_ = v_isSharedCheck_330_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_val_316_);
lean_dec(v_a_312_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_330_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
lean_inc(v_a_247_);
v___x_320_ = l_Lean_mkFVar(v_a_247_);
v___x_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_321_, 0, v_val_316_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_321_);
v___x_323_ = v___x_318_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_329_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_259_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_325_);
v___x_327_ = v___x_314_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
else
{
lean_object* v___x_331_; lean_object* v___x_333_; 
lean_dec(v_a_312_);
v___x_331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__13));
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_331_);
v___x_333_ = v___x_314_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_311_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_311_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
}
}
v___jp_254_:
{
size_t v___x_256_; size_t v___x_257_; 
v___x_256_ = ((size_t)1ULL);
v___x_257_ = lean_usize_add(v_i_238_, v___x_256_);
lean_inc_ref(v_a_255_);
v_i_238_ = v___x_257_;
v_b_239_ = v_a_255_;
goto _start;
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_252_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_252_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
v_a_352_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_250_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_250_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v_a_360_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_248_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_248_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___boxed(lean_object* v_as_368_, lean_object* v_sz_369_, lean_object* v_i_370_, lean_object* v_b_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
size_t v_sz_boxed_377_; size_t v_i_boxed_378_; lean_object* v_res_379_; 
v_sz_boxed_377_ = lean_unbox_usize(v_sz_369_);
lean_dec(v_sz_369_);
v_i_boxed_378_ = lean_unbox_usize(v_i_370_);
lean_dec(v_i_370_);
v_res_379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1(v_as_368_, v_sz_boxed_377_, v_i_boxed_378_, v_b_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec_ref(v_as_368_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0(lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = l_Lean_Meta_getPropHyps(v___y_380_, v___y_381_, v___y_382_, v___y_383_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; lean_object* v___x_388_; size_t v_sz_389_; size_t v___x_390_; lean_object* v___x_391_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_385_, 1);
v___x_387_ = lean_box(0);
v___x_388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__0));
v_sz_389_ = lean_array_size(v_a_386_);
v___x_390_ = ((size_t)0ULL);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1(v_a_386_, v_sz_389_, v___x_390_, v___x_388_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v_a_386_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_404_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_404_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_404_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_404_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_fst_396_; 
v_fst_396_ = lean_ctor_get(v_a_392_, 0);
lean_inc(v_fst_396_);
lean_dec(v_a_392_);
if (lean_obj_tag(v_fst_396_) == 0)
{
lean_object* v___x_398_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_387_);
v___x_398_ = v___x_394_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_387_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
else
{
lean_object* v_val_400_; lean_object* v___x_402_; 
v_val_400_ = lean_ctor_get(v_fst_396_, 0);
lean_inc(v_val_400_);
lean_dec_ref_known(v_fst_396_, 1);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v_val_400_);
v___x_402_ = v___x_394_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_val_400_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
v_a_405_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_391_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_391_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
v_a_413_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_385_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_385_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0___boxed(lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___lam__0(v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq(lean_object* v_goal_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v___f_434_; lean_object* v___x_435_; 
v___f_434_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___closed__0));
v___x_435_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__2___redArg(v_goal_428_, v___f_434_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq___boxed(lean_object* v_goal_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq(v_goal_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0(lean_object* v_a_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
if (lean_obj_tag(v_a_445_) == 1)
{
lean_object* v_val_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_519_; 
v_val_457_ = lean_ctor_get(v_a_445_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v_a_445_);
if (v_isSharedCheck_519_ == 0)
{
v___x_459_ = v_a_445_;
v_isShared_460_ = v_isSharedCheck_519_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_val_457_);
lean_dec(v_a_445_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_519_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v_fst_461_; lean_object* v_snd_462_; lean_object* v___x_463_; 
v_fst_461_ = lean_ctor_get(v_val_457_, 0);
lean_inc(v_fst_461_);
v_snd_462_ = lean_ctor_get(v_val_457_, 1);
lean_inc(v_snd_462_);
lean_dec(v_val_457_);
v___x_463_ = l_Lean_Meta_Sym_instantiateMVarsS(v___y_446_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_510_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_510_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_510_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_510_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = l_Lean_Expr_cleanupAnnotations(v_a_464_);
v___x_474_ = l_Lean_Expr_isApp(v___x_473_);
if (v___x_474_ == 0)
{
lean_dec_ref(v___x_473_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
lean_del_object(v___x_459_);
goto v___jp_468_;
}
else
{
lean_object* v_arg_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v_arg_475_ = lean_ctor_get(v___x_473_, 1);
lean_inc_ref(v_arg_475_);
v___x_476_ = l_Lean_Expr_appFnCleanup___redArg(v___x_473_);
v___x_477_ = l_Lean_Expr_isApp(v___x_476_);
if (v___x_477_ == 0)
{
lean_dec_ref(v___x_476_);
lean_dec_ref(v_arg_475_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
lean_del_object(v___x_459_);
goto v___jp_468_;
}
else
{
lean_object* v_arg_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v_arg_478_ = lean_ctor_get(v___x_476_, 1);
lean_inc_ref(v_arg_478_);
v___x_479_ = l_Lean_Expr_appFnCleanup___redArg(v___x_476_);
v___x_480_ = l_Lean_Expr_isApp(v___x_479_);
if (v___x_480_ == 0)
{
lean_dec_ref(v___x_479_);
lean_dec_ref(v_arg_478_);
lean_dec_ref(v_arg_475_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
lean_del_object(v___x_459_);
goto v___jp_468_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_481_ = l_Lean_Expr_appFnCleanup___redArg(v___x_479_);
v___x_482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__2));
v___x_483_ = l_Lean_Expr_isConstOf(v___x_481_, v___x_482_);
lean_dec_ref(v___x_481_);
if (v___x_483_ == 0)
{
lean_dec_ref(v_arg_478_);
lean_dec_ref(v_arg_475_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
lean_del_object(v___x_459_);
goto v___jp_468_;
}
else
{
lean_object* v___x_484_; uint8_t v___x_485_; 
lean_del_object(v___x_466_);
v___x_484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq_spec__1___closed__6));
v___x_485_ = l_Lean_Expr_isConstOf(v_arg_478_, v___x_484_);
lean_dec_ref(v_arg_478_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_488_; 
lean_dec_ref(v_arg_475_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
v___x_486_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_486_, 0, v___x_485_);
if (v_isShared_460_ == 0)
{
lean_ctor_set_tag(v___x_459_, 0);
lean_ctor_set(v___x_459_, 0, v___x_486_);
v___x_488_ = v___x_459_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
else
{
lean_object* v___x_490_; 
v___x_490_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_475_);
if (lean_obj_tag(v___x_490_) == 1)
{
lean_object* v_val_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_505_; 
lean_del_object(v___x_459_);
v_val_491_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_505_ == 0)
{
v___x_493_ = v___x_490_;
v_isShared_494_ = v_isSharedCheck_505_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_val_491_);
lean_dec(v___x_490_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_505_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
uint8_t v___x_495_; 
v___x_495_ = lean_nat_dec_eq(v_fst_461_, v_val_491_);
lean_dec(v_val_491_);
lean_dec(v_fst_461_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; lean_object* v___x_498_; 
lean_dec(v_snd_462_);
v___x_496_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_496_, 0, v___x_495_);
if (v_isShared_494_ == 0)
{
lean_ctor_set_tag(v___x_493_, 0);
lean_ctor_set(v___x_493_, 0, v___x_496_);
v___x_498_ = v___x_493_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
else
{
uint8_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_500_ = 0;
v___x_501_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_501_, 0, v_snd_462_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*1, v___x_500_);
if (v_isShared_494_ == 0)
{
lean_ctor_set_tag(v___x_493_, 0);
lean_ctor_set(v___x_493_, 0, v___x_501_);
v___x_503_ = v___x_493_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
else
{
lean_object* v___x_506_; lean_object* v___x_508_; 
lean_dec(v___x_490_);
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
v___x_506_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___closed__0));
if (v_isShared_460_ == 0)
{
lean_ctor_set_tag(v___x_459_, 0);
lean_ctor_set(v___x_459_, 0, v___x_506_);
v___x_508_ = v___x_459_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
}
}
v___jp_468_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_469_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___closed__0));
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_469_);
v___x_471_ = v___x_466_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_snd_462_);
lean_dec(v_fst_461_);
lean_del_object(v___x_459_);
v_a_511_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_463_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_463_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
else
{
lean_object* v___x_520_; 
lean_dec_ref(v___y_446_);
lean_dec(v_a_445_);
v___x_520_ = l_Lean_Meta_Sym_Simp_dischargeNone___redArg();
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___boxed(lean_object* v_a_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0(v_a_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1(lean_object* v_pre_534_, lean_object* v_a_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___x_548_; 
lean_inc(v___y_546_);
lean_inc_ref(v___y_545_);
lean_inc(v___y_544_);
lean_inc_ref(v___y_543_);
lean_inc(v___y_542_);
lean_inc_ref(v___y_541_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
v___x_548_ = lean_apply_11(v_pre_534_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, lean_box(0));
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
if (lean_obj_tag(v_a_549_) == 0)
{
uint8_t v_done_550_; 
v_done_550_ = lean_ctor_get_uint8(v_a_549_, 0);
if (v_done_550_ == 0)
{
uint8_t v_contextDependent_551_; lean_object* v___x_552_; 
lean_dec_ref_known(v___x_548_, 1);
v_contextDependent_551_ = lean_ctor_get_uint8(v_a_549_, 1);
lean_dec_ref_known(v_a_549_, 0);
v___x_552_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; uint8_t v___y_555_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
if (v_contextDependent_551_ == 0)
{
lean_dec(v_a_553_);
return v___x_552_;
}
else
{
if (lean_obj_tag(v_a_553_) == 0)
{
uint8_t v_contextDependent_565_; 
v_contextDependent_565_ = lean_ctor_get_uint8(v_a_553_, 1);
v___y_555_ = v_contextDependent_565_;
goto v___jp_554_;
}
else
{
uint8_t v_contextDependent_566_; 
v_contextDependent_566_ = lean_ctor_get_uint8(v_a_553_, sizeof(void*)*2 + 1);
v___y_555_ = v_contextDependent_566_;
goto v___jp_554_;
}
}
v___jp_554_:
{
if (v___y_555_ == 0)
{
lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_563_; 
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_563_ == 0)
{
lean_object* v_unused_564_; 
v_unused_564_ = lean_ctor_get(v___x_552_, 0);
lean_dec(v_unused_564_);
v___x_557_ = v___x_552_;
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
else
{
lean_dec(v___x_552_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_553_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_559_);
v___x_561_ = v___x_557_;
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
else
{
lean_dec(v_a_553_);
return v___x_552_;
}
}
}
else
{
return v___x_552_;
}
}
else
{
lean_dec_ref_known(v_a_549_, 0);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v___y_536_);
return v___x_548_;
}
}
else
{
uint8_t v_done_567_; 
v_done_567_ = lean_ctor_get_uint8(v_a_549_, sizeof(void*)*2);
if (v_done_567_ == 0)
{
lean_object* v_e_x27_568_; lean_object* v_proof_569_; uint8_t v_contextDependent_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref_known(v___x_548_, 1);
v_e_x27_568_ = lean_ctor_get(v_a_549_, 0);
v_proof_569_ = lean_ctor_get(v_a_549_, 1);
v_contextDependent_570_ = lean_ctor_get_uint8(v_a_549_, sizeof(void*)*2 + 1);
v_isSharedCheck_620_ = !lean_is_exclusive(v_a_549_);
if (v_isSharedCheck_620_ == 0)
{
v___x_572_ = v_a_549_;
v_isShared_573_ = v_isSharedCheck_620_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_proof_569_);
lean_inc(v_e_x27_568_);
lean_dec(v_a_549_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_620_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; 
lean_inc_ref(v_e_x27_568_);
v___x_574_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_535_, v___y_536_, v_e_x27_568_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_619_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_619_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_619_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_619_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
if (lean_obj_tag(v_a_575_) == 0)
{
uint8_t v_done_579_; uint8_t v_contextDependent_580_; uint8_t v___y_582_; 
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_537_);
v_done_579_ = lean_ctor_get_uint8(v_a_575_, 0);
v_contextDependent_580_ = lean_ctor_get_uint8(v_a_575_, 1);
lean_dec_ref_known(v_a_575_, 0);
if (v_contextDependent_570_ == 0)
{
v___y_582_ = v_contextDependent_580_;
goto v___jp_581_;
}
else
{
v___y_582_ = v_contextDependent_570_;
goto v___jp_581_;
}
v___jp_581_:
{
lean_object* v___x_584_; 
if (v_isShared_573_ == 0)
{
v___x_584_ = v___x_572_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_e_x27_568_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_proof_569_);
v___x_584_ = v_reuseFailAlloc_588_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_586_; 
lean_ctor_set_uint8(v___x_584_, sizeof(void*)*2, v_done_579_);
lean_ctor_set_uint8(v___x_584_, sizeof(void*)*2 + 1, v___y_582_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_584_);
v___x_586_ = v___x_577_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_object* v_e_x27_589_; lean_object* v_proof_590_; uint8_t v_done_591_; uint8_t v_contextDependent_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_618_; 
lean_del_object(v___x_577_);
lean_del_object(v___x_572_);
v_e_x27_589_ = lean_ctor_get(v_a_575_, 0);
v_proof_590_ = lean_ctor_get(v_a_575_, 1);
v_done_591_ = lean_ctor_get_uint8(v_a_575_, sizeof(void*)*2);
v_contextDependent_592_ = lean_ctor_get_uint8(v_a_575_, sizeof(void*)*2 + 1);
v_isSharedCheck_618_ = !lean_is_exclusive(v_a_575_);
if (v_isSharedCheck_618_ == 0)
{
v___x_594_ = v_a_575_;
v_isShared_595_ = v_isSharedCheck_618_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_proof_590_);
lean_inc(v_e_x27_589_);
lean_dec(v_a_575_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_618_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_596_; 
lean_inc_ref(v_e_x27_589_);
v___x_596_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_537_, v_e_x27_568_, v_proof_569_, v_e_x27_589_, v_proof_590_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_609_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_609_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_609_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_609_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
uint8_t v___y_602_; 
if (v_contextDependent_570_ == 0)
{
v___y_602_ = v_contextDependent_592_;
goto v___jp_601_;
}
else
{
v___y_602_ = v_contextDependent_570_;
goto v___jp_601_;
}
v___jp_601_:
{
lean_object* v___x_604_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v_a_597_);
v___x_604_ = v___x_594_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_e_x27_589_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_597_);
lean_ctor_set_uint8(v_reuseFailAlloc_608_, sizeof(void*)*2, v_done_591_);
v___x_604_ = v_reuseFailAlloc_608_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
lean_ctor_set_uint8(v___x_604_, sizeof(void*)*2 + 1, v___y_602_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_604_);
v___x_606_ = v___x_599_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_del_object(v___x_594_);
lean_dec_ref(v_e_x27_589_);
v_a_610_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_596_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_596_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
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
return v___x_615_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_572_);
lean_dec_ref(v_proof_569_);
lean_dec_ref(v_e_x27_568_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_537_);
return v___x_574_;
}
}
}
else
{
lean_dec_ref_known(v_a_549_, 2);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v___y_536_);
return v___x_548_;
}
}
}
else
{
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v___y_536_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1___boxed(lean_object* v_pre_621_, lean_object* v_a_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1(v_pre_621_, v_a_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec_ref(v_a_622_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg(lean_object* v_goal_636_, lean_object* v_methods_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = l_Lean_Meta_Tactic_BVDecide_symIntToBitVecExt;
v___x_644_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_643_, v_a_641_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_646_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec_0__Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas_findNumBitsEq(v_goal_636_, v_a_638_, v_a_639_, v_a_640_, v_a_641_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_665_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_665_ == 0)
{
v___x_649_ = v___x_646_;
v_isShared_650_ = v_isSharedCheck_665_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_665_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v_pre_651_; lean_object* v_post_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_664_; 
v_pre_651_ = lean_ctor_get(v_methods_637_, 0);
v_post_652_ = lean_ctor_get(v_methods_637_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_methods_637_);
if (v_isSharedCheck_664_ == 0)
{
v___x_654_ = v_methods_637_;
v_isShared_655_ = v_isSharedCheck_664_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_post_652_);
lean_inc(v_pre_651_);
lean_dec(v_methods_637_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_664_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___y_656_; lean_object* v___f_657_; lean_object* v___x_659_; 
v___y_656_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___y_656_, 0, v_a_647_);
v___f_657_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___lam__1___boxed), 14, 3);
lean_closure_set(v___f_657_, 0, v_pre_651_);
lean_closure_set(v___f_657_, 1, v_a_645_);
lean_closure_set(v___f_657_, 2, v___y_656_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___f_657_);
v___x_659_ = v___x_654_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___f_657_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v_post_652_);
v___x_659_ = v_reuseFailAlloc_663_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_661_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_659_);
v___x_661_ = v___x_649_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec(v_a_645_);
lean_dec_ref(v_methods_637_);
v_a_666_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_646_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_646_);
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
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_methods_637_);
lean_dec(v_goal_636_);
v_a_674_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_644_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_644_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg___boxed(lean_object* v_goal_682_, lean_object* v_methods_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg(v_goal_682_, v_methods_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas(lean_object* v_goal_690_, lean_object* v_methods_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg(v_goal_690_, v_methods_691_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___boxed(lean_object* v_goal_700_, lean_object* v_methods_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas(v_goal_700_, v_methods_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
lean_dec(v_a_703_);
lean_dec_ref(v_a_702_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0(lean_object* v_x_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___x_720_; 
lean_inc(v___y_714_);
lean_inc_ref(v___y_713_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
v___x_720_ = lean_apply_9(v_x_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, lean_box(0));
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0___boxed(lean_object* v_x_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0(v_x_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg(lean_object* v_mvarId_732_, lean_object* v_x_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___f_743_; lean_object* v___x_744_; 
lean_inc(v___y_737_);
lean_inc_ref(v___y_736_);
lean_inc(v___y_735_);
lean_inc_ref(v___y_734_);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_743_, 0, v_x_733_);
lean_closure_set(v___f_743_, 1, v___y_734_);
lean_closure_set(v___f_743_, 2, v___y_735_);
lean_closure_set(v___f_743_, 3, v___y_736_);
lean_closure_set(v___f_743_, 4, v___y_737_);
v___x_744_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_732_, v___f_743_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
if (lean_obj_tag(v___x_744_) == 0)
{
return v___x_744_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg___boxed(lean_object* v_mvarId_753_, lean_object* v_x_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg(v_mvarId_753_, v_x_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3(lean_object* v_00_u03b1_765_, lean_object* v_mvarId_766_, lean_object* v_x_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg(v_mvarId_766_, v_x_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___boxed(lean_object* v_00_u03b1_778_, lean_object* v_mvarId_779_, lean_object* v_x_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3(v_00_u03b1_778_, v_mvarId_779_, v_x_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0(lean_object* v_x_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___closed__0));
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0___boxed(lean_object* v_x_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__0(v_x_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v_x_806_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_x_818_, lean_object* v_x_819_, lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
lean_object* v_ks_822_; lean_object* v_vs_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_847_; 
v_ks_822_ = lean_ctor_get(v_x_818_, 0);
v_vs_823_ = lean_ctor_get(v_x_818_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_818_);
if (v_isSharedCheck_847_ == 0)
{
v___x_825_ = v_x_818_;
v_isShared_826_ = v_isSharedCheck_847_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_vs_823_);
lean_inc(v_ks_822_);
lean_dec(v_x_818_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_847_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_array_get_size(v_ks_822_);
v___x_828_ = lean_nat_dec_lt(v_x_819_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_832_; 
lean_dec(v_x_819_);
v___x_829_ = lean_array_push(v_ks_822_, v_x_820_);
v___x_830_ = lean_array_push(v_vs_823_, v_x_821_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 1, v___x_830_);
lean_ctor_set(v___x_825_, 0, v___x_829_);
v___x_832_ = v___x_825_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_829_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
else
{
lean_object* v_k_x27_834_; uint8_t v___x_835_; 
v_k_x27_834_ = lean_array_fget_borrowed(v_ks_822_, v_x_819_);
v___x_835_ = l_Lean_instBEqMVarId_beq(v_x_820_, v_k_x27_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_837_; 
if (v_isShared_826_ == 0)
{
v___x_837_ = v___x_825_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_ks_822_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_vs_823_);
v___x_837_ = v_reuseFailAlloc_841_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = lean_nat_add(v_x_819_, v___x_838_);
lean_dec(v_x_819_);
v_x_818_ = v___x_837_;
v_x_819_ = v___x_839_;
goto _start;
}
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_842_ = lean_array_fset(v_ks_822_, v_x_819_, v_x_820_);
v___x_843_ = lean_array_fset(v_vs_823_, v_x_819_, v_x_821_);
lean_dec(v_x_819_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 1, v___x_843_);
lean_ctor_set(v___x_825_, 0, v___x_842_);
v___x_845_ = v___x_825_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_n_848_, lean_object* v_k_849_, lean_object* v_v_850_){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = lean_unsigned_to_nat(0u);
v___x_852_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_n_848_, v___x_851_, v_k_849_, v_v_850_);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(lean_object* v_x_854_, size_t v_x_855_, size_t v_x_856_, lean_object* v_x_857_, lean_object* v_x_858_){
_start:
{
if (lean_obj_tag(v_x_854_) == 0)
{
lean_object* v_es_859_; size_t v___x_860_; size_t v___x_861_; lean_object* v_j_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v_es_859_ = lean_ctor_get(v_x_854_, 0);
v___x_860_ = ((size_t)31ULL);
v___x_861_ = lean_usize_land(v_x_855_, v___x_860_);
v_j_862_ = lean_usize_to_nat(v___x_861_);
v___x_863_ = lean_array_get_size(v_es_859_);
v___x_864_ = lean_nat_dec_lt(v_j_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_dec(v_j_862_);
lean_dec(v_x_858_);
lean_dec(v_x_857_);
return v_x_854_;
}
else
{
lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_903_; 
lean_inc_ref(v_es_859_);
v_isSharedCheck_903_ = !lean_is_exclusive(v_x_854_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v_x_854_, 0);
lean_dec(v_unused_904_);
v___x_866_ = v_x_854_;
v_isShared_867_ = v_isSharedCheck_903_;
goto v_resetjp_865_;
}
else
{
lean_dec(v_x_854_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_903_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v_v_868_; lean_object* v___x_869_; lean_object* v_xs_x27_870_; lean_object* v___y_872_; 
v_v_868_ = lean_array_fget(v_es_859_, v_j_862_);
v___x_869_ = lean_box(0);
v_xs_x27_870_ = lean_array_fset(v_es_859_, v_j_862_, v___x_869_);
switch(lean_obj_tag(v_v_868_))
{
case 0:
{
lean_object* v_key_877_; lean_object* v_val_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_888_; 
v_key_877_ = lean_ctor_get(v_v_868_, 0);
v_val_878_ = lean_ctor_get(v_v_868_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_v_868_);
if (v_isSharedCheck_888_ == 0)
{
v___x_880_ = v_v_868_;
v_isShared_881_ = v_isSharedCheck_888_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_val_878_);
lean_inc(v_key_877_);
lean_dec(v_v_868_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_888_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
uint8_t v___x_882_; 
v___x_882_ = l_Lean_instBEqMVarId_beq(v_x_857_, v_key_877_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; lean_object* v___x_884_; 
lean_del_object(v___x_880_);
v___x_883_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_877_, v_val_878_, v_x_857_, v_x_858_);
v___x_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
v___y_872_ = v___x_884_;
goto v___jp_871_;
}
else
{
lean_object* v___x_886_; 
lean_dec(v_val_878_);
lean_dec(v_key_877_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 1, v_x_858_);
lean_ctor_set(v___x_880_, 0, v_x_857_);
v___x_886_ = v___x_880_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_x_857_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_x_858_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
v___y_872_ = v___x_886_;
goto v___jp_871_;
}
}
}
}
case 1:
{
lean_object* v_node_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_901_; 
v_node_889_ = lean_ctor_get(v_v_868_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v_v_868_);
if (v_isSharedCheck_901_ == 0)
{
v___x_891_ = v_v_868_;
v_isShared_892_ = v_isSharedCheck_901_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_node_889_);
lean_dec(v_v_868_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_901_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
size_t v___x_893_; size_t v___x_894_; size_t v___x_895_; size_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_893_ = ((size_t)5ULL);
v___x_894_ = lean_usize_shift_right(v_x_855_, v___x_893_);
v___x_895_ = ((size_t)1ULL);
v___x_896_ = lean_usize_add(v_x_856_, v___x_895_);
v___x_897_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(v_node_889_, v___x_894_, v___x_896_, v_x_857_, v_x_858_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_897_);
v___x_899_ = v___x_891_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
v___y_872_ = v___x_899_;
goto v___jp_871_;
}
}
}
default: 
{
lean_object* v___x_902_; 
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_x_857_);
lean_ctor_set(v___x_902_, 1, v_x_858_);
v___y_872_ = v___x_902_;
goto v___jp_871_;
}
}
v___jp_871_:
{
lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_873_ = lean_array_fset(v_xs_x27_870_, v_j_862_, v___y_872_);
lean_dec(v_j_862_);
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_873_);
v___x_875_ = v___x_866_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_873_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
}
else
{
lean_object* v_ks_905_; lean_object* v_vs_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_926_; 
v_ks_905_ = lean_ctor_get(v_x_854_, 0);
v_vs_906_ = lean_ctor_get(v_x_854_, 1);
v_isSharedCheck_926_ = !lean_is_exclusive(v_x_854_);
if (v_isSharedCheck_926_ == 0)
{
v___x_908_ = v_x_854_;
v_isShared_909_ = v_isSharedCheck_926_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_vs_906_);
lean_inc(v_ks_905_);
lean_dec(v_x_854_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_926_;
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
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_ks_905_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_vs_906_);
v___x_911_ = v_reuseFailAlloc_925_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v_newNode_912_; uint8_t v___y_914_; size_t v___x_920_; uint8_t v___x_921_; 
v_newNode_912_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6___redArg(v___x_911_, v_x_857_, v_x_858_);
v___x_920_ = ((size_t)7ULL);
v___x_921_ = lean_usize_dec_le(v___x_920_, v_x_856_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_912_);
v___x_923_ = lean_unsigned_to_nat(4u);
v___x_924_ = lean_nat_dec_lt(v___x_922_, v___x_923_);
lean_dec(v___x_922_);
v___y_914_ = v___x_924_;
goto v___jp_913_;
}
else
{
v___y_914_ = v___x_921_;
goto v___jp_913_;
}
v___jp_913_:
{
if (v___y_914_ == 0)
{
lean_object* v_ks_915_; lean_object* v_vs_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_ks_915_ = lean_ctor_get(v_newNode_912_, 0);
lean_inc_ref(v_ks_915_);
v_vs_916_ = lean_ctor_get(v_newNode_912_, 1);
lean_inc_ref(v_vs_916_);
lean_dec_ref(v_newNode_912_);
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_919_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg(v_x_856_, v_ks_915_, v_vs_916_, v___x_917_, v___x_918_);
lean_dec_ref(v_vs_916_);
lean_dec_ref(v_ks_915_);
return v___x_919_;
}
else
{
return v_newNode_912_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t v_depth_927_, lean_object* v_keys_928_, lean_object* v_vals_929_, lean_object* v_i_930_, lean_object* v_entries_931_){
_start:
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_array_get_size(v_keys_928_);
v___x_933_ = lean_nat_dec_lt(v_i_930_, v___x_932_);
if (v___x_933_ == 0)
{
lean_dec(v_i_930_);
return v_entries_931_;
}
else
{
lean_object* v_k_934_; lean_object* v_v_935_; uint64_t v___x_936_; size_t v_h_937_; size_t v___x_938_; lean_object* v___x_939_; size_t v___x_940_; size_t v___x_941_; size_t v___x_942_; size_t v_h_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_k_934_ = lean_array_fget_borrowed(v_keys_928_, v_i_930_);
v_v_935_ = lean_array_fget_borrowed(v_vals_929_, v_i_930_);
v___x_936_ = l_Lean_instHashableMVarId_hash(v_k_934_);
v_h_937_ = lean_uint64_to_usize(v___x_936_);
v___x_938_ = ((size_t)5ULL);
v___x_939_ = lean_unsigned_to_nat(1u);
v___x_940_ = ((size_t)1ULL);
v___x_941_ = lean_usize_sub(v_depth_927_, v___x_940_);
v___x_942_ = lean_usize_mul(v___x_938_, v___x_941_);
v_h_943_ = lean_usize_shift_right(v_h_937_, v___x_942_);
v___x_944_ = lean_nat_add(v_i_930_, v___x_939_);
lean_dec(v_i_930_);
lean_inc(v_v_935_);
lean_inc(v_k_934_);
v___x_945_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(v_entries_931_, v_h_943_, v_depth_927_, v_k_934_, v_v_935_);
v_i_930_ = v___x_944_;
v_entries_931_ = v___x_945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_depth_947_, lean_object* v_keys_948_, lean_object* v_vals_949_, lean_object* v_i_950_, lean_object* v_entries_951_){
_start:
{
size_t v_depth_boxed_952_; lean_object* v_res_953_; 
v_depth_boxed_952_ = lean_unbox_usize(v_depth_947_);
lean_dec(v_depth_947_);
v_res_953_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_boxed_952_, v_keys_948_, v_vals_949_, v_i_950_, v_entries_951_);
lean_dec_ref(v_vals_949_);
lean_dec_ref(v_keys_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
size_t v_x_26013__boxed_959_; size_t v_x_26014__boxed_960_; lean_object* v_res_961_; 
v_x_26013__boxed_959_ = lean_unbox_usize(v_x_955_);
lean_dec(v_x_955_);
v_x_26014__boxed_960_ = lean_unbox_usize(v_x_956_);
lean_dec(v_x_956_);
v_res_961_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(v_x_954_, v_x_26013__boxed_959_, v_x_26014__boxed_960_, v_x_957_, v_x_958_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2___redArg(lean_object* v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
uint64_t v___x_965_; size_t v___x_966_; size_t v___x_967_; lean_object* v___x_968_; 
v___x_965_ = l_Lean_instHashableMVarId_hash(v_x_963_);
v___x_966_ = lean_uint64_to_usize(v___x_965_);
v___x_967_ = ((size_t)1ULL);
v___x_968_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(v_x_962_, v___x_966_, v___x_967_, v_x_963_, v_x_964_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg(lean_object* v_mvarId_969_, lean_object* v_val_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; lean_object* v_mctx_974_; lean_object* v_cache_975_; lean_object* v_zetaDeltaFVarIds_976_; lean_object* v_postponed_977_; lean_object* v_diag_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_1006_; 
v___x_973_ = lean_st_ref_take(v___y_971_);
v_mctx_974_ = lean_ctor_get(v___x_973_, 0);
v_cache_975_ = lean_ctor_get(v___x_973_, 1);
v_zetaDeltaFVarIds_976_ = lean_ctor_get(v___x_973_, 2);
v_postponed_977_ = lean_ctor_get(v___x_973_, 3);
v_diag_978_ = lean_ctor_get(v___x_973_, 4);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_980_ = v___x_973_;
v_isShared_981_ = v_isSharedCheck_1006_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_diag_978_);
lean_inc(v_postponed_977_);
lean_inc(v_zetaDeltaFVarIds_976_);
lean_inc(v_cache_975_);
lean_inc(v_mctx_974_);
lean_dec(v___x_973_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_1006_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v_depth_982_; lean_object* v_levelAssignDepth_983_; lean_object* v_lmvarCounter_984_; lean_object* v_mvarCounter_985_; lean_object* v_lDecls_986_; lean_object* v_decls_987_; lean_object* v_userNames_988_; lean_object* v_lAssignment_989_; lean_object* v_eAssignment_990_; lean_object* v_dAssignment_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1005_; 
v_depth_982_ = lean_ctor_get(v_mctx_974_, 0);
v_levelAssignDepth_983_ = lean_ctor_get(v_mctx_974_, 1);
v_lmvarCounter_984_ = lean_ctor_get(v_mctx_974_, 2);
v_mvarCounter_985_ = lean_ctor_get(v_mctx_974_, 3);
v_lDecls_986_ = lean_ctor_get(v_mctx_974_, 4);
v_decls_987_ = lean_ctor_get(v_mctx_974_, 5);
v_userNames_988_ = lean_ctor_get(v_mctx_974_, 6);
v_lAssignment_989_ = lean_ctor_get(v_mctx_974_, 7);
v_eAssignment_990_ = lean_ctor_get(v_mctx_974_, 8);
v_dAssignment_991_ = lean_ctor_get(v_mctx_974_, 9);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_mctx_974_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_993_ = v_mctx_974_;
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_dAssignment_991_);
lean_inc(v_eAssignment_990_);
lean_inc(v_lAssignment_989_);
lean_inc(v_userNames_988_);
lean_inc(v_decls_987_);
lean_inc(v_lDecls_986_);
lean_inc(v_mvarCounter_985_);
lean_inc(v_lmvarCounter_984_);
lean_inc(v_levelAssignDepth_983_);
lean_inc(v_depth_982_);
lean_dec(v_mctx_974_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1005_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_995_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2___redArg(v_eAssignment_990_, v_mvarId_969_, v_val_970_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 8, v___x_995_);
v___x_997_ = v___x_993_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_depth_982_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_levelAssignDepth_983_);
lean_ctor_set(v_reuseFailAlloc_1004_, 2, v_lmvarCounter_984_);
lean_ctor_set(v_reuseFailAlloc_1004_, 3, v_mvarCounter_985_);
lean_ctor_set(v_reuseFailAlloc_1004_, 4, v_lDecls_986_);
lean_ctor_set(v_reuseFailAlloc_1004_, 5, v_decls_987_);
lean_ctor_set(v_reuseFailAlloc_1004_, 6, v_userNames_988_);
lean_ctor_set(v_reuseFailAlloc_1004_, 7, v_lAssignment_989_);
lean_ctor_set(v_reuseFailAlloc_1004_, 8, v___x_995_);
lean_ctor_set(v_reuseFailAlloc_1004_, 9, v_dAssignment_991_);
v___x_997_ = v_reuseFailAlloc_1004_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_999_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 0, v___x_997_);
v___x_999_ = v___x_980_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_cache_975_);
lean_ctor_set(v_reuseFailAlloc_1003_, 2, v_zetaDeltaFVarIds_976_);
lean_ctor_set(v_reuseFailAlloc_1003_, 3, v_postponed_977_);
lean_ctor_set(v_reuseFailAlloc_1003_, 4, v_diag_978_);
v___x_999_ = v_reuseFailAlloc_1003_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_st_ref_set(v___y_971_, v___x_999_);
v___x_1001_ = lean_box(0);
v___x_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
return v___x_1002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg___boxed(lean_object* v_mvarId_1007_, lean_object* v_val_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg(v_mvarId_1007_, v_val_1008_, v___y_1009_);
lean_dec(v___y_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0(lean_object* v_msgData_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v_env_1019_; lean_object* v___x_1020_; lean_object* v_mctx_1021_; lean_object* v_lctx_1022_; lean_object* v_options_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1018_ = lean_st_ref_get(v___y_1016_);
v_env_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc_ref(v_env_1019_);
lean_dec(v___x_1018_);
v___x_1020_ = lean_st_ref_get(v___y_1014_);
v_mctx_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc_ref(v_mctx_1021_);
lean_dec(v___x_1020_);
v_lctx_1022_ = lean_ctor_get(v___y_1013_, 2);
v_options_1023_ = lean_ctor_get(v___y_1015_, 2);
lean_inc_ref(v_options_1023_);
lean_inc_ref(v_lctx_1022_);
v___x_1024_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1024_, 0, v_env_1019_);
lean_ctor_set(v___x_1024_, 1, v_mctx_1021_);
lean_ctor_set(v___x_1024_, 2, v_lctx_1022_);
lean_ctor_set(v___x_1024_, 3, v_options_1023_);
v___x_1025_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
lean_ctor_set(v___x_1025_, 1, v_msgData_1012_);
v___x_1026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0___boxed(lean_object* v_msgData_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0(v_msgData_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1033_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1034_; double v___x_1035_; 
v___x_1034_ = lean_unsigned_to_nat(0u);
v___x_1035_ = lean_float_of_nat(v___x_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg(lean_object* v_cls_1039_, lean_object* v_msg_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_ref_1046_; lean_object* v___x_1047_; lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1092_; 
v_ref_1046_ = lean_ctor_get(v___y_1043_, 5);
v___x_1047_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0_spec__0(v_msg_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1092_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1092_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v_traceState_1053_; lean_object* v_env_1054_; lean_object* v_nextMacroScope_1055_; lean_object* v_ngen_1056_; lean_object* v_auxDeclNGen_1057_; lean_object* v_cache_1058_; lean_object* v_messages_1059_; lean_object* v_infoState_1060_; lean_object* v_snapshotTasks_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1091_; 
v___x_1052_ = lean_st_ref_take(v___y_1044_);
v_traceState_1053_ = lean_ctor_get(v___x_1052_, 4);
v_env_1054_ = lean_ctor_get(v___x_1052_, 0);
v_nextMacroScope_1055_ = lean_ctor_get(v___x_1052_, 1);
v_ngen_1056_ = lean_ctor_get(v___x_1052_, 2);
v_auxDeclNGen_1057_ = lean_ctor_get(v___x_1052_, 3);
v_cache_1058_ = lean_ctor_get(v___x_1052_, 5);
v_messages_1059_ = lean_ctor_get(v___x_1052_, 6);
v_infoState_1060_ = lean_ctor_get(v___x_1052_, 7);
v_snapshotTasks_1061_ = lean_ctor_get(v___x_1052_, 8);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1063_ = v___x_1052_;
v_isShared_1064_ = v_isSharedCheck_1091_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_snapshotTasks_1061_);
lean_inc(v_infoState_1060_);
lean_inc(v_messages_1059_);
lean_inc(v_cache_1058_);
lean_inc(v_traceState_1053_);
lean_inc(v_auxDeclNGen_1057_);
lean_inc(v_ngen_1056_);
lean_inc(v_nextMacroScope_1055_);
lean_inc(v_env_1054_);
lean_dec(v___x_1052_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1091_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint64_t v_tid_1065_; lean_object* v_traces_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1090_; 
v_tid_1065_ = lean_ctor_get_uint64(v_traceState_1053_, sizeof(void*)*1);
v_traces_1066_ = lean_ctor_get(v_traceState_1053_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_traceState_1053_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1068_ = v_traceState_1053_;
v_isShared_1069_ = v_isSharedCheck_1090_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_traces_1066_);
lean_dec(v_traceState_1053_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1090_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; double v___x_1071_; uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1080_; 
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__0);
v___x_1072_ = 0;
v___x_1073_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__1));
v___x_1074_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1074_, 0, v_cls_1039_);
lean_ctor_set(v___x_1074_, 1, v___x_1070_);
lean_ctor_set(v___x_1074_, 2, v___x_1073_);
lean_ctor_set_float(v___x_1074_, sizeof(void*)*3, v___x_1071_);
lean_ctor_set_float(v___x_1074_, sizeof(void*)*3 + 8, v___x_1071_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*3 + 16, v___x_1072_);
v___x_1075_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___closed__2));
v___x_1076_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v_a_1048_);
lean_ctor_set(v___x_1076_, 2, v___x_1075_);
lean_inc(v_ref_1046_);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v_ref_1046_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = l_Lean_PersistentArray_push___redArg(v_traces_1066_, v___x_1077_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1078_);
v___x_1080_ = v___x_1068_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1078_);
lean_ctor_set_uint64(v_reuseFailAlloc_1089_, sizeof(void*)*1, v_tid_1065_);
v___x_1080_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1082_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 4, v___x_1080_);
v___x_1082_ = v___x_1063_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_env_1054_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_nextMacroScope_1055_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_ngen_1056_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_auxDeclNGen_1057_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v___x_1080_);
lean_ctor_set(v_reuseFailAlloc_1088_, 5, v_cache_1058_);
lean_ctor_set(v_reuseFailAlloc_1088_, 6, v_messages_1059_);
lean_ctor_set(v_reuseFailAlloc_1088_, 7, v_infoState_1060_);
lean_ctor_set(v_reuseFailAlloc_1088_, 8, v_snapshotTasks_1061_);
v___x_1082_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1083_ = lean_st_ref_set(v___y_1044_, v___x_1082_);
v___x_1084_ = lean_box(0);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1084_);
v___x_1086_ = v___x_1050_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg___boxed(lean_object* v_cls_1093_, lean_object* v_msg_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg(v_cls_1093_, v_msg_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1(uint8_t v___x_1101_, lean_object* v___f_1102_, lean_object* v_____r_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___x_1113_; lean_object* v_rewriteCache_1114_; lean_object* v_acNfCache_1115_; lean_object* v_typeAnalysis_1116_; lean_object* v_goal_1117_; lean_object* v_hypotheses_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1128_; 
v___x_1113_ = lean_st_ref_take(v___y_1105_);
v_rewriteCache_1114_ = lean_ctor_get(v___x_1113_, 0);
v_acNfCache_1115_ = lean_ctor_get(v___x_1113_, 1);
v_typeAnalysis_1116_ = lean_ctor_get(v___x_1113_, 2);
v_goal_1117_ = lean_ctor_get(v___x_1113_, 3);
v_hypotheses_1118_ = lean_ctor_get(v___x_1113_, 4);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1120_ = v___x_1113_;
v_isShared_1121_ = v_isSharedCheck_1128_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_hypotheses_1118_);
lean_inc(v_goal_1117_);
lean_inc(v_typeAnalysis_1116_);
lean_inc(v_acNfCache_1115_);
lean_inc(v_rewriteCache_1114_);
lean_dec(v___x_1113_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1128_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_rewriteCache_1114_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_acNfCache_1115_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v_typeAnalysis_1116_);
lean_ctor_set(v_reuseFailAlloc_1127_, 3, v_goal_1117_);
lean_ctor_set(v_reuseFailAlloc_1127_, 4, v_hypotheses_1118_);
v___x_1123_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*5, v___x_1101_);
v___x_1124_ = lean_st_ref_set(v___y_1105_, v___x_1123_);
v___x_1125_ = lean_box(0);
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
lean_inc_ref(v___y_1108_);
lean_inc(v___y_1107_);
lean_inc_ref(v___y_1106_);
lean_inc(v___y_1105_);
lean_inc_ref(v___y_1104_);
v___x_1126_ = lean_apply_10(v___f_1102_, v___x_1125_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, lean_box(0));
return v___x_1126_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1___boxed(lean_object* v___x_1129_, lean_object* v___f_1130_, lean_object* v_____r_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
uint8_t v___x_26352__boxed_1141_; lean_object* v_res_1142_; 
v___x_26352__boxed_1141_ = lean_unbox(v___x_1129_);
v_res_1142_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1(v___x_26352__boxed_1141_, v___f_1130_, v_____r_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0(lean_object* v_snd_1143_, lean_object* v_a_1144_, lean_object* v___x_1145_, lean_object* v_____r_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1156_ = lean_array_push(v_snd_1143_, v_a_1144_);
v___x_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1145_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0___boxed(lean_object* v_snd_1160_, lean_object* v_a_1161_, lean_object* v___x_1162_, lean_object* v_____r_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0(v_snd_1160_, v_a_1161_, v___x_1162_, v_____r_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
return v_res_1173_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1184_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3));
v___x_1185_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__5));
v___x_1186_ = l_Lean_Name_append(v___x_1185_, v___x_1184_);
return v___x_1186_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__7));
v___x_1189_ = l_Lean_stringToMessageData(v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg(lean_object* v_upperBound_1190_, lean_object* v___x_1191_, lean_object* v_a_1192_, lean_object* v___x_1193_, lean_object* v_a_1194_, lean_object* v_b_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___y_1206_; uint8_t v___x_1228_; 
v___x_1228_ = lean_nat_dec_lt(v_a_1194_, v_upperBound_1190_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; 
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v___x_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1229_, 0, v_b_1195_);
return v___x_1229_;
}
else
{
lean_object* v___x_1230_; lean_object* v_type_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1230_ = lean_array_fget_borrowed(v___x_1191_, v_a_1194_);
v_type_1231_ = lean_ctor_get(v___x_1230_, 1);
lean_inc_ref(v_type_1231_);
v___x_1232_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_1232_, 0, v_type_1231_);
lean_inc_ref(v___x_1193_);
lean_inc_ref(v_a_1192_);
v___x_1233_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_1232_, v_a_1192_, v___x_1193_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
lean_inc(v___x_1230_);
v___x_1235_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_1230_, v_a_1234_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v_snd_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1299_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v_snd_1237_ = lean_ctor_get(v_b_1195_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_b_1195_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v_b_1195_, 0);
lean_dec(v_unused_1300_);
v___x_1239_ = v_b_1195_;
v_isShared_1240_ = v_isSharedCheck_1299_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_snd_1237_);
lean_dec(v_b_1195_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1299_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v_type_1241_; lean_object* v_value_1242_; uint8_t v___x_1243_; 
v_type_1241_ = lean_ctor_get(v_a_1236_, 1);
v_value_1242_ = lean_ctor_get(v_a_1236_, 2);
lean_inc_ref(v_type_1241_);
v___x_1243_ = l_Lean_Expr_isFalse(v_type_1241_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v___f_1245_; uint8_t v___x_1272_; 
lean_del_object(v___x_1239_);
v___x_1244_ = lean_box(0);
lean_inc(v_a_1236_);
lean_inc(v_snd_1237_);
v___f_1245_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0___boxed), 13, 3);
lean_closure_set(v___f_1245_, 0, v_snd_1237_);
lean_closure_set(v___f_1245_, 1, v_a_1236_);
lean_closure_set(v___f_1245_, 2, v___x_1244_);
v___x_1272_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_1230_, v_a_1236_);
if (v___x_1272_ == 0)
{
lean_inc_ref(v_type_1241_);
lean_dec(v_snd_1237_);
lean_dec(v_a_1236_);
goto v___jp_1249_;
}
else
{
if (v___x_1243_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_dec_ref(v___f_1245_);
v___x_1273_ = lean_box(0);
v___x_1274_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__0(v_snd_1237_, v_a_1236_, v___x_1244_, v___x_1273_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
v___y_1206_ = v___x_1274_;
goto v___jp_1205_;
}
else
{
lean_inc_ref(v_type_1241_);
lean_dec(v_snd_1237_);
lean_dec(v_a_1236_);
goto v___jp_1249_;
}
}
v___jp_1246_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1247_ = lean_box(0);
v___x_1248_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1(v___x_1228_, v___f_1245_, v___x_1247_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
v___y_1206_ = v___x_1248_;
goto v___jp_1205_;
}
v___jp_1249_:
{
lean_object* v_options_1250_; uint8_t v_hasTrace_1251_; 
v_options_1250_ = lean_ctor_get(v___y_1202_, 2);
v_hasTrace_1251_ = lean_ctor_get_uint8(v_options_1250_, sizeof(void*)*1);
if (v_hasTrace_1251_ == 0)
{
lean_dec_ref(v_type_1241_);
goto v___jp_1246_;
}
else
{
lean_object* v_inheritedTraceOptions_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v_inheritedTraceOptions_1252_ = lean_ctor_get(v___y_1202_, 13);
v___x_1253_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__3));
v___x_1254_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__6);
v___x_1255_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1252_, v_options_1250_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_dec_ref(v_type_1241_);
goto v___jp_1246_;
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_inc_ref(v_type_1231_);
v___x_1256_ = l_Lean_MessageData_ofExpr(v_type_1231_);
v___x_1257_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___closed__8);
v___x_1258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = l_Lean_MessageData_ofExpr(v_type_1241_);
v___x_1260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg(v___x_1253_, v___x_1260_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
v___x_1263_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___lam__1(v___x_1228_, v___f_1245_, v_a_1262_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
v___y_1206_ = v___x_1263_;
goto v___jp_1205_;
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec_ref(v___f_1245_);
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v_a_1264_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1261_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1261_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1275_; lean_object* v_goal_1276_; lean_object* v___x_1277_; 
lean_inc_ref(v_value_1242_);
lean_dec(v_a_1236_);
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v___x_1275_ = lean_st_ref_get(v___y_1197_);
v_goal_1276_ = lean_ctor_get(v___x_1275_, 3);
lean_inc(v_goal_1276_);
lean_dec(v___x_1275_);
v___x_1277_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg(v_goal_1276_, v_value_1242_, v___y_1201_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1289_; 
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1289_ == 0)
{
lean_object* v_unused_1290_; 
v_unused_1290_ = lean_ctor_get(v___x_1277_, 0);
lean_dec(v_unused_1290_);
v___x_1279_ = v___x_1277_;
v_isShared_1280_ = v_isSharedCheck_1289_;
goto v_resetjp_1278_;
}
else
{
lean_dec(v___x_1277_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1289_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = lean_box(v___x_1243_);
v___x_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1282_);
v___x_1284_ = v___x_1239_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v_snd_1237_);
v___x_1284_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1286_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1284_);
v___x_1286_ = v___x_1279_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_del_object(v___x_1239_);
lean_dec(v_snd_1237_);
v_a_1291_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1277_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1277_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v_b_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v_a_1301_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1235_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1235_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec_ref(v_b_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v_a_1309_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1233_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1233_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
v___jp_1205_:
{
if (lean_obj_tag(v___y_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1219_; 
v_a_1207_ = lean_ctor_get(v___y_1206_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___y_1206_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1209_ = v___y_1206_;
v_isShared_1210_ = v_isSharedCheck_1219_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___y_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1219_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
if (lean_obj_tag(v_a_1207_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1213_; 
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v_a_1211_ = lean_ctor_get(v_a_1207_, 0);
lean_inc(v_a_1211_);
lean_dec_ref_known(v_a_1207_, 1);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v_a_1211_);
v___x_1213_ = v___x_1209_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_del_object(v___x_1209_);
v_a_1215_ = lean_ctor_get(v_a_1207_, 0);
lean_inc(v_a_1215_);
lean_dec_ref_known(v_a_1207_, 1);
v___x_1216_ = lean_unsigned_to_nat(1u);
v___x_1217_ = lean_nat_add(v_a_1194_, v___x_1216_);
lean_dec(v_a_1194_);
v_a_1194_ = v___x_1217_;
v_b_1195_ = v_a_1215_;
goto _start;
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1194_);
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_a_1192_);
v_a_1220_ = lean_ctor_get(v___y_1206_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___y_1206_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___y_1206_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___y_1206_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg___boxed(lean_object* v_upperBound_1317_, lean_object* v___x_1318_, lean_object* v_a_1319_, lean_object* v___x_1320_, lean_object* v_a_1321_, lean_object* v_b_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg(v_upperBound_1317_, v___x_1318_, v_a_1319_, v___x_1320_, v_a_1321_, v_b_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec_ref(v___x_1318_);
lean_dec(v_upperBound_1317_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1(lean_object* v_a_1333_, lean_object* v___x_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v___x_1344_; lean_object* v_hypotheses_1345_; lean_object* v___x_1346_; lean_object* v_newHyps_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1344_ = lean_st_ref_get(v___y_1336_);
v_hypotheses_1345_ = lean_ctor_get(v___x_1344_, 4);
lean_inc_ref(v_hypotheses_1345_);
lean_dec(v___x_1344_);
v___x_1346_ = lean_array_get_size(v_hypotheses_1345_);
v_newHyps_1347_ = lean_mk_empty_array_with_capacity(v___x_1346_);
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = lean_box(0);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set(v___x_1350_, 1, v_newHyps_1347_);
v___x_1351_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg(v___x_1346_, v_hypotheses_1345_, v_a_1333_, v___x_1334_, v___x_1348_, v___x_1350_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
lean_dec_ref(v_hypotheses_1345_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1382_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1382_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1382_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v_fst_1356_; 
v_fst_1356_ = lean_ctor_get(v_a_1352_, 0);
if (lean_obj_tag(v_fst_1356_) == 0)
{
lean_object* v_snd_1357_; lean_object* v___x_1358_; lean_object* v_rewriteCache_1359_; lean_object* v_acNfCache_1360_; lean_object* v_typeAnalysis_1361_; lean_object* v_goal_1362_; uint8_t v_didChange_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1376_; 
v_snd_1357_ = lean_ctor_get(v_a_1352_, 1);
lean_inc(v_snd_1357_);
lean_dec(v_a_1352_);
v___x_1358_ = lean_st_ref_take(v___y_1336_);
v_rewriteCache_1359_ = lean_ctor_get(v___x_1358_, 0);
v_acNfCache_1360_ = lean_ctor_get(v___x_1358_, 1);
v_typeAnalysis_1361_ = lean_ctor_get(v___x_1358_, 2);
v_goal_1362_ = lean_ctor_get(v___x_1358_, 3);
v_didChange_1363_ = lean_ctor_get_uint8(v___x_1358_, sizeof(void*)*5);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1376_ == 0)
{
lean_object* v_unused_1377_; 
v_unused_1377_ = lean_ctor_get(v___x_1358_, 4);
lean_dec(v_unused_1377_);
v___x_1365_ = v___x_1358_;
v_isShared_1366_ = v_isSharedCheck_1376_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_goal_1362_);
lean_inc(v_typeAnalysis_1361_);
lean_inc(v_acNfCache_1360_);
lean_inc(v_rewriteCache_1359_);
lean_dec(v___x_1358_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1376_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 4, v_snd_1357_);
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_rewriteCache_1359_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_acNfCache_1360_);
lean_ctor_set(v_reuseFailAlloc_1375_, 2, v_typeAnalysis_1361_);
lean_ctor_set(v_reuseFailAlloc_1375_, 3, v_goal_1362_);
lean_ctor_set(v_reuseFailAlloc_1375_, 4, v_snd_1357_);
lean_ctor_set_uint8(v_reuseFailAlloc_1375_, sizeof(void*)*5, v_didChange_1363_);
v___x_1368_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1369_ = lean_st_ref_set(v___y_1336_, v___x_1368_);
v___x_1370_ = 0;
v___x_1371_ = lean_box(v___x_1370_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1371_);
v___x_1373_ = v___x_1354_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1371_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
else
{
lean_object* v_val_1378_; lean_object* v___x_1380_; 
lean_inc_ref(v_fst_1356_);
lean_dec(v_a_1352_);
v_val_1378_ = lean_ctor_get(v_fst_1356_, 0);
lean_inc(v_val_1378_);
lean_dec_ref_known(v_fst_1356_, 1);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v_val_1378_);
v___x_1380_ = v___x_1354_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_val_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
v_a_1383_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1351_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1351_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1___boxed(lean_object* v_a_1391_, lean_object* v___x_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1(v_a_1391_, v___x_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2(lean_object* v___f_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v_goal_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1413_ = lean_st_ref_get(v___y_1405_);
v_goal_1414_ = lean_ctor_get(v___x_1413_, 3);
lean_inc_n(v_goal_1414_, 2);
lean_dec(v___x_1413_);
lean_inc_ref(v___f_1403_);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___f_1403_);
lean_ctor_set(v___x_1415_, 1, v___f_1403_);
v___x_1416_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addIntToBitVecLemmas___redArg(v_goal_1414_, v___x_1415_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v_maxSteps_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___f_1421_; lean_object* v___x_1422_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v_maxSteps_1418_ = lean_ctor_get(v___y_1404_, 1);
v___x_1419_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_1418_);
v___x_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1420_, 0, v_maxSteps_1418_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
v___f_1421_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1421_, 0, v_a_1417_);
lean_closure_set(v___f_1421_, 1, v___x_1420_);
v___x_1422_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__3___redArg(v_goal_1414_, v___f_1421_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
return v___x_1422_;
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_goal_1414_);
v_a_1423_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1416_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1416_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2___boxed(lean_object* v___f_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass___lam__2(v___f_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0(lean_object* v_cls_1452_, lean_object* v_msg_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___redArg(v_cls_1452_, v_msg_1453_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0___boxed(lean_object* v_cls_1464_, lean_object* v_msg_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__0(v_cls_1464_, v_msg_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1(lean_object* v_mvarId_1476_, lean_object* v_val_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___redArg(v_mvarId_1476_, v_val_1477_, v___y_1483_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1___boxed(lean_object* v_mvarId_1488_, lean_object* v_val_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1(v_mvarId_1488_, v_val_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2(lean_object* v_upperBound_1500_, lean_object* v___x_1501_, lean_object* v_a_1502_, lean_object* v___x_1503_, lean_object* v_inst_1504_, lean_object* v_R_1505_, lean_object* v_a_1506_, lean_object* v_b_1507_, lean_object* v_c_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___redArg(v_upperBound_1500_, v___x_1501_, v_a_1502_, v___x_1503_, v_a_1506_, v_b_1507_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_1519_ = _args[0];
lean_object* v___x_1520_ = _args[1];
lean_object* v_a_1521_ = _args[2];
lean_object* v___x_1522_ = _args[3];
lean_object* v_inst_1523_ = _args[4];
lean_object* v_R_1524_ = _args[5];
lean_object* v_a_1525_ = _args[6];
lean_object* v_b_1526_ = _args[7];
lean_object* v_c_1527_ = _args[8];
lean_object* v___y_1528_ = _args[9];
lean_object* v___y_1529_ = _args[10];
lean_object* v___y_1530_ = _args[11];
lean_object* v___y_1531_ = _args[12];
lean_object* v___y_1532_ = _args[13];
lean_object* v___y_1533_ = _args[14];
lean_object* v___y_1534_ = _args[15];
lean_object* v___y_1535_ = _args[16];
lean_object* v___y_1536_ = _args[17];
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__2(v_upperBound_1519_, v___x_1520_, v_a_1521_, v___x_1522_, v_inst_1523_, v_R_1524_, v_a_1525_, v_b_1526_, v_c_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec_ref(v___x_1520_);
lean_dec(v_upperBound_1519_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2(lean_object* v_00_u03b2_1538_, lean_object* v_x_1539_, lean_object* v_x_1540_, lean_object* v_x_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2___redArg(v_x_1539_, v_x_1540_, v_x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1543_, lean_object* v_x_1544_, size_t v_x_1545_, size_t v_x_1546_, lean_object* v_x_1547_, lean_object* v_x_1548_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___redArg(v_x_1544_, v_x_1545_, v_x_1546_, v_x_1547_, v_x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1550_, lean_object* v_x_1551_, lean_object* v_x_1552_, lean_object* v_x_1553_, lean_object* v_x_1554_, lean_object* v_x_1555_){
_start:
{
size_t v_x_27061__boxed_1556_; size_t v_x_27062__boxed_1557_; lean_object* v_res_1558_; 
v_x_27061__boxed_1556_ = lean_unbox_usize(v_x_1552_);
lean_dec(v_x_1552_);
v_x_27062__boxed_1557_ = lean_unbox_usize(v_x_1553_);
lean_dec(v_x_1553_);
v_res_1558_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4(v_00_u03b2_1550_, v_x_1551_, v_x_27061__boxed_1556_, v_x_27062__boxed_1557_, v_x_1554_, v_x_1555_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_1559_, lean_object* v_n_1560_, lean_object* v_k_1561_, lean_object* v_v_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6___redArg(v_n_1560_, v_k_1561_, v_v_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_1564_, size_t v_depth_1565_, lean_object* v_keys_1566_, lean_object* v_vals_1567_, lean_object* v_heq_1568_, lean_object* v_i_1569_, lean_object* v_entries_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_1565_, v_keys_1566_, v_vals_1567_, v_i_1569_, v_entries_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1572_, lean_object* v_depth_1573_, lean_object* v_keys_1574_, lean_object* v_vals_1575_, lean_object* v_heq_1576_, lean_object* v_i_1577_, lean_object* v_entries_1578_){
_start:
{
size_t v_depth_boxed_1579_; lean_object* v_res_1580_; 
v_depth_boxed_1579_ = lean_unbox_usize(v_depth_1573_);
lean_dec(v_depth_1573_);
v_res_1580_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__7(v_00_u03b2_1572_, v_depth_boxed_1579_, v_keys_1574_, v_vals_1575_, v_heq_1576_, v_i_1577_, v_entries_1578_);
lean_dec_ref(v_vals_1575_);
lean_dec_ref(v_keys_1574_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_1581_, lean_object* v_x_1582_, lean_object* v_x_1583_, lean_object* v_x_1584_, lean_object* v_x_1585_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_x_1582_, v_x_1583_, v_x_1584_, v_x_1585_);
return v___x_1586_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
}
#ifdef __cplusplus
}
#endif
