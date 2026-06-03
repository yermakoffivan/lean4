// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache
// Imports: public import Lean.Elab.Tactic.Do.Internal.VCGen.Types public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Logic public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Match public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Spec public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Simp
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
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_LogicOp_toApplyLemma(uint8_t);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_LogicOp_mkBackwardRule(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_k_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object* v_k_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(v_k_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object* v_k_29_, uint8_t v_allowLevelAssignments_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_k_29_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_30_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object* v_k_53_, lean_object* v_allowLevelAssignments_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_67_; lean_object* v_res_68_; 
v_allowLevelAssignments_boxed_67_ = lean_unbox(v_allowLevelAssignments_54_);
v_res_68_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_53_, v_allowLevelAssignments_boxed_67_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object* v_00_u03b1_69_, lean_object* v_k_70_, uint8_t v_allowLevelAssignments_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_70_, v_allowLevelAssignments_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object* v_00_u03b1_85_, lean_object* v_k_86_, lean_object* v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_100_; lean_object* v_res_101_; 
v_allowLevelAssignments_boxed_100_ = lean_unbox(v_allowLevelAssignments_87_);
v_res_101_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(v_00_u03b1_85_, v_k_86_, v_allowLevelAssignments_boxed_100_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object* v_kind_102_, lean_object* v_specThm_103_, lean_object* v_info_104_, lean_object* v_stateArgNames_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
if (lean_obj_tag(v_kind_102_) == 0)
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(v_specThm_103_, v_info_104_, v_stateArgNames_105_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_127_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_127_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v_a_119_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_a_128_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_118_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_118_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_159_; 
lean_dec_ref(v_stateArgNames_105_);
v_isSharedCheck_159_ = !lean_is_exclusive(v_kind_102_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; 
v_unused_160_ = lean_ctor_get(v_kind_102_, 0);
lean_dec(v_unused_160_);
v___x_137_ = v_kind_102_;
v_isShared_138_ = v_isSharedCheck_159_;
goto v_resetjp_136_;
}
else
{
lean_dec(v_kind_102_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_159_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(v_specThm_103_, v_info_104_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_150_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_150_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 0, v_a_140_);
v___x_145_ = v___x_137_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_149_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_147_; 
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_del_object(v___x_137_);
v_a_151_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_139_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_139_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object* v_kind_161_, lean_object* v_specThm_162_, lean_object* v_info_163_, lean_object* v_stateArgNames_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(v_kind_161_, v_specThm_162_, v_info_163_, v_stateArgNames_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec_ref(v_info_163_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object* v_a_178_, lean_object* v_x_179_){
_start:
{
if (lean_obj_tag(v_x_179_) == 0)
{
lean_object* v___x_180_; 
v___x_180_ = lean_box(0);
return v___x_180_;
}
else
{
lean_object* v_key_181_; lean_object* v_value_182_; lean_object* v_tail_183_; uint8_t v___y_185_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v_fst_190_; lean_object* v_snd_191_; uint8_t v___x_192_; 
v_key_181_ = lean_ctor_get(v_x_179_, 0);
v_value_182_ = lean_ctor_get(v_x_179_, 1);
v_tail_183_ = lean_ctor_get(v_x_179_, 2);
v_fst_188_ = lean_ctor_get(v_key_181_, 0);
v_snd_189_ = lean_ctor_get(v_key_181_, 1);
v_fst_190_ = lean_ctor_get(v_a_178_, 0);
v_snd_191_ = lean_ctor_get(v_a_178_, 1);
v___x_192_ = lean_name_eq(v_fst_188_, v_fst_190_);
if (v___x_192_ == 0)
{
v___y_185_ = v___x_192_;
goto v___jp_184_;
}
else
{
lean_object* v_fst_193_; lean_object* v_snd_194_; lean_object* v_fst_195_; lean_object* v_snd_196_; uint8_t v___x_197_; 
v_fst_193_ = lean_ctor_get(v_snd_189_, 0);
v_snd_194_ = lean_ctor_get(v_snd_189_, 1);
v_fst_195_ = lean_ctor_get(v_snd_191_, 0);
v_snd_196_ = lean_ctor_get(v_snd_191_, 1);
v___x_197_ = lean_expr_eqv(v_fst_193_, v_fst_195_);
if (v___x_197_ == 0)
{
v___y_185_ = v___x_197_;
goto v___jp_184_;
}
else
{
uint8_t v___x_198_; 
v___x_198_ = lean_nat_dec_eq(v_snd_194_, v_snd_196_);
v___y_185_ = v___x_198_;
goto v___jp_184_;
}
}
v___jp_184_:
{
if (v___y_185_ == 0)
{
v_x_179_ = v_tail_183_;
goto _start;
}
else
{
lean_object* v___x_187_; 
lean_inc(v_value_182_);
v___x_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_187_, 0, v_value_182_);
return v___x_187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_199_, lean_object* v_x_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_199_, v_x_200_);
lean_dec(v_x_200_);
lean_dec_ref(v_a_199_);
return v_res_201_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_202_; uint64_t v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(1723u);
v___x_203_ = lean_uint64_of_nat(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object* v_m_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_buckets_206_; lean_object* v_fst_207_; lean_object* v_snd_208_; lean_object* v___x_209_; uint64_t v___y_211_; 
v_buckets_206_ = lean_ctor_get(v_m_204_, 1);
v_fst_207_ = lean_ctor_get(v_a_205_, 0);
v_snd_208_ = lean_ctor_get(v_a_205_, 1);
v___x_209_ = lean_array_get_size(v_buckets_206_);
if (lean_obj_tag(v_fst_207_) == 0)
{
uint64_t v___x_231_; 
v___x_231_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_211_ = v___x_231_;
goto v___jp_210_;
}
else
{
uint64_t v_hash_232_; 
v_hash_232_ = lean_ctor_get_uint64(v_fst_207_, sizeof(void*)*2);
v___y_211_ = v_hash_232_;
goto v___jp_210_;
}
v___jp_210_:
{
lean_object* v_fst_212_; lean_object* v_snd_213_; uint64_t v___x_214_; uint64_t v___x_215_; uint64_t v___x_216_; uint64_t v___x_217_; uint64_t v___x_218_; uint64_t v___x_219_; uint64_t v_fold_220_; uint64_t v___x_221_; uint64_t v___x_222_; uint64_t v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v___x_226_; size_t v___x_227_; size_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_fst_212_ = lean_ctor_get(v_snd_208_, 0);
v_snd_213_ = lean_ctor_get(v_snd_208_, 1);
v___x_214_ = l_Lean_Expr_hash(v_fst_212_);
v___x_215_ = lean_uint64_of_nat(v_snd_213_);
v___x_216_ = lean_uint64_mix_hash(v___x_214_, v___x_215_);
v___x_217_ = lean_uint64_mix_hash(v___y_211_, v___x_216_);
v___x_218_ = 32ULL;
v___x_219_ = lean_uint64_shift_right(v___x_217_, v___x_218_);
v_fold_220_ = lean_uint64_xor(v___x_217_, v___x_219_);
v___x_221_ = 16ULL;
v___x_222_ = lean_uint64_shift_right(v_fold_220_, v___x_221_);
v___x_223_ = lean_uint64_xor(v_fold_220_, v___x_222_);
v___x_224_ = lean_uint64_to_usize(v___x_223_);
v___x_225_ = lean_usize_of_nat(v___x_209_);
v___x_226_ = ((size_t)1ULL);
v___x_227_ = lean_usize_sub(v___x_225_, v___x_226_);
v___x_228_ = lean_usize_land(v___x_224_, v___x_227_);
v___x_229_ = lean_array_uget_borrowed(v_buckets_206_, v___x_228_);
v___x_230_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_205_, v___x_229_);
return v___x_230_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object* v_m_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_233_, v_a_234_);
lean_dec_ref(v_a_234_);
lean_dec_ref(v_m_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_236_, lean_object* v_x_237_){
_start:
{
if (lean_obj_tag(v_x_237_) == 0)
{
return v_x_236_;
}
else
{
lean_object* v_key_238_; lean_object* v_value_239_; lean_object* v_tail_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_274_; 
v_key_238_ = lean_ctor_get(v_x_237_, 0);
v_value_239_ = lean_ctor_get(v_x_237_, 1);
v_tail_240_ = lean_ctor_get(v_x_237_, 2);
v_isSharedCheck_274_ = !lean_is_exclusive(v_x_237_);
if (v_isSharedCheck_274_ == 0)
{
v___x_242_ = v_x_237_;
v_isShared_243_ = v_isSharedCheck_274_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_tail_240_);
lean_inc(v_value_239_);
lean_inc(v_key_238_);
lean_dec(v_x_237_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_274_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v_fst_244_; lean_object* v_snd_245_; lean_object* v___x_246_; uint64_t v___y_248_; 
v_fst_244_ = lean_ctor_get(v_key_238_, 0);
v_snd_245_ = lean_ctor_get(v_key_238_, 1);
v___x_246_ = lean_array_get_size(v_x_236_);
if (lean_obj_tag(v_fst_244_) == 0)
{
uint64_t v___x_272_; 
v___x_272_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_248_ = v___x_272_;
goto v___jp_247_;
}
else
{
uint64_t v_hash_273_; 
v_hash_273_ = lean_ctor_get_uint64(v_fst_244_, sizeof(void*)*2);
v___y_248_ = v_hash_273_;
goto v___jp_247_;
}
v___jp_247_:
{
lean_object* v_fst_249_; lean_object* v_snd_250_; uint64_t v___x_251_; uint64_t v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; uint64_t v___x_255_; uint64_t v___x_256_; uint64_t v_fold_257_; uint64_t v___x_258_; uint64_t v___x_259_; uint64_t v___x_260_; size_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; size_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v_fst_249_ = lean_ctor_get(v_snd_245_, 0);
v_snd_250_ = lean_ctor_get(v_snd_245_, 1);
v___x_251_ = l_Lean_Expr_hash(v_fst_249_);
v___x_252_ = lean_uint64_of_nat(v_snd_250_);
v___x_253_ = lean_uint64_mix_hash(v___x_251_, v___x_252_);
v___x_254_ = lean_uint64_mix_hash(v___y_248_, v___x_253_);
v___x_255_ = 32ULL;
v___x_256_ = lean_uint64_shift_right(v___x_254_, v___x_255_);
v_fold_257_ = lean_uint64_xor(v___x_254_, v___x_256_);
v___x_258_ = 16ULL;
v___x_259_ = lean_uint64_shift_right(v_fold_257_, v___x_258_);
v___x_260_ = lean_uint64_xor(v_fold_257_, v___x_259_);
v___x_261_ = lean_uint64_to_usize(v___x_260_);
v___x_262_ = lean_usize_of_nat(v___x_246_);
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_sub(v___x_262_, v___x_263_);
v___x_265_ = lean_usize_land(v___x_261_, v___x_264_);
v___x_266_ = lean_array_uget_borrowed(v_x_236_, v___x_265_);
lean_inc(v___x_266_);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 2, v___x_266_);
v___x_268_ = v___x_242_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_key_238_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_value_239_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v___x_266_);
v___x_268_ = v_reuseFailAlloc_271_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; 
v___x_269_ = lean_array_uset(v_x_236_, v___x_265_, v___x_268_);
v_x_236_ = v___x_269_;
v_x_237_ = v_tail_240_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object* v_i_275_, lean_object* v_source_276_, lean_object* v_target_277_){
_start:
{
lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_278_ = lean_array_get_size(v_source_276_);
v___x_279_ = lean_nat_dec_lt(v_i_275_, v___x_278_);
if (v___x_279_ == 0)
{
lean_dec_ref(v_source_276_);
lean_dec(v_i_275_);
return v_target_277_;
}
else
{
lean_object* v_es_280_; lean_object* v___x_281_; lean_object* v_source_282_; lean_object* v_target_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v_es_280_ = lean_array_fget(v_source_276_, v_i_275_);
v___x_281_ = lean_box(0);
v_source_282_ = lean_array_fset(v_source_276_, v_i_275_, v___x_281_);
v_target_283_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_target_277_, v_es_280_);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_nat_add(v_i_275_, v___x_284_);
lean_dec(v_i_275_);
v_i_275_ = v___x_285_;
v_source_276_ = v_source_282_;
v_target_277_ = v_target_283_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object* v_data_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_nbuckets_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_288_ = lean_array_get_size(v_data_287_);
v___x_289_ = lean_unsigned_to_nat(2u);
v_nbuckets_290_ = lean_nat_mul(v___x_288_, v___x_289_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_box(0);
v___x_293_ = lean_mk_array(v_nbuckets_290_, v___x_292_);
v___x_294_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v___x_291_, v_data_287_, v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object* v_a_295_, lean_object* v_x_296_){
_start:
{
if (lean_obj_tag(v_x_296_) == 0)
{
uint8_t v___x_297_; 
v___x_297_ = 0;
return v___x_297_;
}
else
{
lean_object* v_key_298_; lean_object* v_tail_299_; uint8_t v___y_301_; lean_object* v_fst_303_; lean_object* v_snd_304_; lean_object* v_fst_305_; lean_object* v_snd_306_; uint8_t v___x_307_; 
v_key_298_ = lean_ctor_get(v_x_296_, 0);
v_tail_299_ = lean_ctor_get(v_x_296_, 2);
v_fst_303_ = lean_ctor_get(v_key_298_, 0);
v_snd_304_ = lean_ctor_get(v_key_298_, 1);
v_fst_305_ = lean_ctor_get(v_a_295_, 0);
v_snd_306_ = lean_ctor_get(v_a_295_, 1);
v___x_307_ = lean_name_eq(v_fst_303_, v_fst_305_);
if (v___x_307_ == 0)
{
v___y_301_ = v___x_307_;
goto v___jp_300_;
}
else
{
lean_object* v_fst_308_; lean_object* v_snd_309_; lean_object* v_fst_310_; lean_object* v_snd_311_; uint8_t v___x_312_; 
v_fst_308_ = lean_ctor_get(v_snd_304_, 0);
v_snd_309_ = lean_ctor_get(v_snd_304_, 1);
v_fst_310_ = lean_ctor_get(v_snd_306_, 0);
v_snd_311_ = lean_ctor_get(v_snd_306_, 1);
v___x_312_ = lean_expr_eqv(v_fst_308_, v_fst_310_);
if (v___x_312_ == 0)
{
v___y_301_ = v___x_312_;
goto v___jp_300_;
}
else
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_eq(v_snd_309_, v_snd_311_);
v___y_301_ = v___x_313_;
goto v___jp_300_;
}
}
v___jp_300_:
{
if (v___y_301_ == 0)
{
v_x_296_ = v_tail_299_;
goto _start;
}
else
{
return v___y_301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object* v_a_314_, lean_object* v_x_315_){
_start:
{
uint8_t v_res_316_; lean_object* v_r_317_; 
v_res_316_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_314_, v_x_315_);
lean_dec(v_x_315_);
lean_dec_ref(v_a_314_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object* v_a_318_, lean_object* v_b_319_, lean_object* v_x_320_){
_start:
{
if (lean_obj_tag(v_x_320_) == 0)
{
lean_dec(v_b_319_);
lean_dec_ref(v_a_318_);
return v_x_320_;
}
else
{
lean_object* v_key_321_; lean_object* v_value_322_; lean_object* v_tail_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_347_; 
v_key_321_ = lean_ctor_get(v_x_320_, 0);
v_value_322_ = lean_ctor_get(v_x_320_, 1);
v_tail_323_ = lean_ctor_get(v_x_320_, 2);
v_isSharedCheck_347_ = !lean_is_exclusive(v_x_320_);
if (v_isSharedCheck_347_ == 0)
{
v___x_325_ = v_x_320_;
v_isShared_326_ = v_isSharedCheck_347_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_tail_323_);
lean_inc(v_value_322_);
lean_inc(v_key_321_);
lean_dec(v_x_320_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_347_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
uint8_t v___y_328_; lean_object* v_fst_336_; lean_object* v_snd_337_; lean_object* v_fst_338_; lean_object* v_snd_339_; uint8_t v___x_340_; 
v_fst_336_ = lean_ctor_get(v_key_321_, 0);
v_snd_337_ = lean_ctor_get(v_key_321_, 1);
v_fst_338_ = lean_ctor_get(v_a_318_, 0);
v_snd_339_ = lean_ctor_get(v_a_318_, 1);
v___x_340_ = lean_name_eq(v_fst_336_, v_fst_338_);
if (v___x_340_ == 0)
{
v___y_328_ = v___x_340_;
goto v___jp_327_;
}
else
{
lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v_fst_343_; lean_object* v_snd_344_; uint8_t v___x_345_; 
v_fst_341_ = lean_ctor_get(v_snd_337_, 0);
v_snd_342_ = lean_ctor_get(v_snd_337_, 1);
v_fst_343_ = lean_ctor_get(v_snd_339_, 0);
v_snd_344_ = lean_ctor_get(v_snd_339_, 1);
v___x_345_ = lean_expr_eqv(v_fst_341_, v_fst_343_);
if (v___x_345_ == 0)
{
v___y_328_ = v___x_345_;
goto v___jp_327_;
}
else
{
uint8_t v___x_346_; 
v___x_346_ = lean_nat_dec_eq(v_snd_342_, v_snd_344_);
v___y_328_ = v___x_346_;
goto v___jp_327_;
}
}
v___jp_327_:
{
if (v___y_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_329_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_318_, v_b_319_, v_tail_323_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 2, v___x_329_);
v___x_331_ = v___x_325_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_key_321_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_value_322_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
else
{
lean_object* v___x_334_; 
lean_dec(v_value_322_);
lean_dec(v_key_321_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 1, v_b_319_);
lean_ctor_set(v___x_325_, 0, v_a_318_);
v___x_334_ = v___x_325_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_318_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_b_319_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_tail_323_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object* v_m_348_, lean_object* v_a_349_, lean_object* v_b_350_){
_start:
{
lean_object* v_size_351_; lean_object* v_buckets_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_406_; 
v_size_351_ = lean_ctor_get(v_m_348_, 0);
v_buckets_352_ = lean_ctor_get(v_m_348_, 1);
v_isSharedCheck_406_ = !lean_is_exclusive(v_m_348_);
if (v_isSharedCheck_406_ == 0)
{
v___x_354_ = v_m_348_;
v_isShared_355_ = v_isSharedCheck_406_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_buckets_352_);
lean_inc(v_size_351_);
lean_dec(v_m_348_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_406_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v_fst_356_; lean_object* v_snd_357_; lean_object* v___x_358_; uint64_t v___y_360_; 
v_fst_356_ = lean_ctor_get(v_a_349_, 0);
v_snd_357_ = lean_ctor_get(v_a_349_, 1);
v___x_358_ = lean_array_get_size(v_buckets_352_);
if (lean_obj_tag(v_fst_356_) == 0)
{
uint64_t v___x_404_; 
v___x_404_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_360_ = v___x_404_;
goto v___jp_359_;
}
else
{
uint64_t v_hash_405_; 
v_hash_405_ = lean_ctor_get_uint64(v_fst_356_, sizeof(void*)*2);
v___y_360_ = v_hash_405_;
goto v___jp_359_;
}
v___jp_359_:
{
lean_object* v_fst_361_; lean_object* v_snd_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v_fold_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; size_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; size_t v___x_377_; lean_object* v_bkt_378_; uint8_t v___x_379_; 
v_fst_361_ = lean_ctor_get(v_snd_357_, 0);
v_snd_362_ = lean_ctor_get(v_snd_357_, 1);
v___x_363_ = l_Lean_Expr_hash(v_fst_361_);
v___x_364_ = lean_uint64_of_nat(v_snd_362_);
v___x_365_ = lean_uint64_mix_hash(v___x_363_, v___x_364_);
v___x_366_ = lean_uint64_mix_hash(v___y_360_, v___x_365_);
v___x_367_ = 32ULL;
v___x_368_ = lean_uint64_shift_right(v___x_366_, v___x_367_);
v_fold_369_ = lean_uint64_xor(v___x_366_, v___x_368_);
v___x_370_ = 16ULL;
v___x_371_ = lean_uint64_shift_right(v_fold_369_, v___x_370_);
v___x_372_ = lean_uint64_xor(v_fold_369_, v___x_371_);
v___x_373_ = lean_uint64_to_usize(v___x_372_);
v___x_374_ = lean_usize_of_nat(v___x_358_);
v___x_375_ = ((size_t)1ULL);
v___x_376_ = lean_usize_sub(v___x_374_, v___x_375_);
v___x_377_ = lean_usize_land(v___x_373_, v___x_376_);
v_bkt_378_ = lean_array_uget_borrowed(v_buckets_352_, v___x_377_);
v___x_379_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_349_, v_bkt_378_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v_size_x27_381_; lean_object* v___x_382_; lean_object* v_buckets_x27_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_380_ = lean_unsigned_to_nat(1u);
v_size_x27_381_ = lean_nat_add(v_size_351_, v___x_380_);
lean_dec(v_size_351_);
lean_inc(v_bkt_378_);
v___x_382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_382_, 0, v_a_349_);
lean_ctor_set(v___x_382_, 1, v_b_350_);
lean_ctor_set(v___x_382_, 2, v_bkt_378_);
v_buckets_x27_383_ = lean_array_uset(v_buckets_352_, v___x_377_, v___x_382_);
v___x_384_ = lean_unsigned_to_nat(4u);
v___x_385_ = lean_nat_mul(v_size_x27_381_, v___x_384_);
v___x_386_ = lean_unsigned_to_nat(3u);
v___x_387_ = lean_nat_div(v___x_385_, v___x_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_array_get_size(v_buckets_x27_383_);
v___x_389_ = lean_nat_dec_le(v___x_387_, v___x_388_);
lean_dec(v___x_387_);
if (v___x_389_ == 0)
{
lean_object* v_val_390_; lean_object* v___x_392_; 
v_val_390_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_buckets_x27_383_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_val_390_);
lean_ctor_set(v___x_354_, 0, v_size_x27_381_);
v___x_392_ = v___x_354_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_size_x27_381_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_val_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
else
{
lean_object* v___x_395_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_buckets_x27_383_);
lean_ctor_set(v___x_354_, 0, v_size_x27_381_);
v___x_395_ = v___x_354_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_size_x27_381_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_buckets_x27_383_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v___x_397_; lean_object* v_buckets_x27_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
lean_inc(v_bkt_378_);
v___x_397_ = lean_box(0);
v_buckets_x27_398_ = lean_array_uset(v_buckets_352_, v___x_377_, v___x_397_);
v___x_399_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_349_, v_b_350_, v_bkt_378_);
v___x_400_ = lean_array_uset(v_buckets_x27_398_, v___x_377_, v___x_399_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v___x_400_);
v___x_402_ = v___x_354_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_size_351_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_400_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object* v_specThm_407_, lean_object* v_info_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_421_; lean_object* v_proof_422_; lean_object* v_kind_423_; lean_object* v_excessArgs_424_; lean_object* v_specBackwardRuleCache_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v_key_430_; lean_object* v___x_431_; 
v___x_421_ = lean_st_ref_get(v_a_410_);
v_proof_422_ = lean_ctor_get(v_specThm_407_, 1);
v_kind_423_ = lean_ctor_get(v_specThm_407_, 2);
lean_inc(v_kind_423_);
v_excessArgs_424_ = lean_ctor_get(v_info_408_, 2);
v_specBackwardRuleCache_425_ = lean_ctor_get(v___x_421_, 0);
lean_inc_ref(v_specBackwardRuleCache_425_);
lean_dec(v___x_421_);
v___x_426_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_proof_422_);
v___x_427_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_408_);
v___x_428_ = lean_array_get_size(v_excessArgs_424_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v_key_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_430_, 0, v___x_426_);
lean_ctor_set(v_key_430_, 1, v___x_429_);
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_specBackwardRuleCache_425_, v_key_430_);
lean_dec_ref(v_specBackwardRuleCache_425_);
if (lean_obj_tag(v___x_431_) == 1)
{
lean_object* v___x_432_; 
lean_dec_ref_known(v_key_430_, 2);
lean_dec(v_kind_423_);
lean_dec_ref(v_info_408_);
lean_dec_ref(v_specThm_407_);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
else
{
lean_object* v_stateArgNames_433_; lean_object* v___y_434_; uint8_t v___x_435_; lean_object* v___x_436_; 
lean_dec(v___x_431_);
v_stateArgNames_433_ = lean_ctor_get(v_a_409_, 6);
lean_inc_ref(v_stateArgNames_433_);
v___y_434_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed), 16, 4);
lean_closure_set(v___y_434_, 0, v_kind_423_);
lean_closure_set(v___y_434_, 1, v_specThm_407_);
lean_closure_set(v___y_434_, 2, v_info_408_);
lean_closure_set(v___y_434_, 3, v_stateArgNames_433_);
v___x_435_ = 0;
v___x_436_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v___y_434_, v___x_435_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_474_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_474_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_474_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_474_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
if (lean_obj_tag(v_a_437_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_443_; 
lean_dec_ref_known(v_key_430_, 2);
v___x_441_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
else
{
lean_object* v_val_445_; 
v_val_445_ = lean_ctor_get(v_a_437_, 0);
lean_inc(v_val_445_);
lean_dec_ref_known(v_a_437_, 1);
if (lean_obj_tag(v_val_445_) == 1)
{
lean_object* v_val_446_; lean_object* v___x_447_; lean_object* v_specBackwardRuleCache_448_; lean_object* v_splitBackwardRuleCache_449_; lean_object* v_logicBackwardRuleCache_450_; lean_object* v_invariants_451_; lean_object* v_vcs_452_; lean_object* v_simpState_453_; lean_object* v_jps_454_; lean_object* v_fuel_455_; lean_object* v_inlineHandledInvariants_456_; uint8_t v_dischTacFailed_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_469_; 
v_val_446_ = lean_ctor_get(v_val_445_, 0);
v___x_447_ = lean_st_ref_take(v_a_410_);
v_specBackwardRuleCache_448_ = lean_ctor_get(v___x_447_, 0);
v_splitBackwardRuleCache_449_ = lean_ctor_get(v___x_447_, 1);
v_logicBackwardRuleCache_450_ = lean_ctor_get(v___x_447_, 2);
v_invariants_451_ = lean_ctor_get(v___x_447_, 3);
v_vcs_452_ = lean_ctor_get(v___x_447_, 4);
v_simpState_453_ = lean_ctor_get(v___x_447_, 5);
v_jps_454_ = lean_ctor_get(v___x_447_, 6);
v_fuel_455_ = lean_ctor_get(v___x_447_, 7);
v_inlineHandledInvariants_456_ = lean_ctor_get(v___x_447_, 8);
v_dischTacFailed_457_ = lean_ctor_get_uint8(v___x_447_, sizeof(void*)*9);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_469_ == 0)
{
v___x_459_ = v___x_447_;
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_inlineHandledInvariants_456_);
lean_inc(v_fuel_455_);
lean_inc(v_jps_454_);
lean_inc(v_simpState_453_);
lean_inc(v_vcs_452_);
lean_inc(v_invariants_451_);
lean_inc(v_logicBackwardRuleCache_450_);
lean_inc(v_splitBackwardRuleCache_449_);
lean_inc(v_specBackwardRuleCache_448_);
lean_dec(v___x_447_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v___x_463_; 
lean_inc(v_val_446_);
v___x_461_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_specBackwardRuleCache_448_, v_key_430_, v_val_446_);
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 0, v___x_461_);
v___x_463_ = v___x_459_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_461_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_splitBackwardRuleCache_449_);
lean_ctor_set(v_reuseFailAlloc_468_, 2, v_logicBackwardRuleCache_450_);
lean_ctor_set(v_reuseFailAlloc_468_, 3, v_invariants_451_);
lean_ctor_set(v_reuseFailAlloc_468_, 4, v_vcs_452_);
lean_ctor_set(v_reuseFailAlloc_468_, 5, v_simpState_453_);
lean_ctor_set(v_reuseFailAlloc_468_, 6, v_jps_454_);
lean_ctor_set(v_reuseFailAlloc_468_, 7, v_fuel_455_);
lean_ctor_set(v_reuseFailAlloc_468_, 8, v_inlineHandledInvariants_456_);
lean_ctor_set_uint8(v_reuseFailAlloc_468_, sizeof(void*)*9, v_dischTacFailed_457_);
v___x_463_ = v_reuseFailAlloc_468_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_464_ = lean_st_ref_set(v_a_410_, v___x_463_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v_val_445_);
v___x_466_ = v___x_439_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_val_445_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
else
{
lean_object* v___x_470_; lean_object* v___x_472_; 
lean_dec(v_val_445_);
lean_dec_ref_known(v_key_430_, 2);
v___x_470_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_470_);
v___x_472_ = v___x_439_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec_ref_known(v_key_430_, 2);
v_a_475_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_436_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_436_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object* v_specThm_483_, lean_object* v_info_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(v_specThm_483_, v_info_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object* v_00_u03b2_498_, lean_object* v_m_499_, lean_object* v_a_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_499_, v_a_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object* v_00_u03b2_502_, lean_object* v_m_503_, lean_object* v_a_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(v_00_u03b2_502_, v_m_503_, v_a_504_);
lean_dec_ref(v_a_504_);
lean_dec_ref(v_m_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object* v_00_u03b2_506_, lean_object* v_m_507_, lean_object* v_a_508_, lean_object* v_b_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_m_507_, v_a_508_, v_b_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object* v_00_u03b2_511_, lean_object* v_a_512_, lean_object* v_x_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_512_, v_x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_515_, lean_object* v_a_516_, lean_object* v_x_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(v_00_u03b2_515_, v_a_516_, v_x_517_);
lean_dec(v_x_517_);
lean_dec_ref(v_a_516_);
return v_res_518_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object* v_00_u03b2_519_, lean_object* v_a_520_, lean_object* v_x_521_){
_start:
{
uint8_t v___x_522_; 
v___x_522_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_520_, v_x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object* v_00_u03b2_523_, lean_object* v_a_524_, lean_object* v_x_525_){
_start:
{
uint8_t v_res_526_; lean_object* v_r_527_; 
v_res_526_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(v_00_u03b2_523_, v_a_524_, v_x_525_);
lean_dec(v_x_525_);
lean_dec_ref(v_a_524_);
v_r_527_ = lean_box(v_res_526_);
return v_r_527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object* v_00_u03b2_528_, lean_object* v_data_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_data_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object* v_00_u03b2_531_, lean_object* v_a_532_, lean_object* v_b_533_, lean_object* v_x_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_532_, v_b_533_, v_x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_536_, lean_object* v_i_537_, lean_object* v_source_538_, lean_object* v_target_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v_i_537_, v_source_538_, v_target_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_x_542_, v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object* v_splitInfo_551_, lean_object* v_info_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v___y_562_; 
switch(lean_obj_tag(v_splitInfo_551_))
{
case 0:
{
lean_object* v___x_608_; 
v___x_608_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1));
v___y_562_ = v___x_608_;
goto v___jp_561_;
}
case 1:
{
lean_object* v___x_609_; 
v___x_609_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3));
v___y_562_ = v___x_609_;
goto v___jp_561_;
}
default: 
{
lean_object* v_matcherApp_610_; lean_object* v_matcherName_611_; 
v_matcherApp_610_ = lean_ctor_get(v_splitInfo_551_, 0);
v_matcherName_611_ = lean_ctor_get(v_matcherApp_610_, 1);
lean_inc(v_matcherName_611_);
v___y_562_ = v_matcherName_611_;
goto v___jp_561_;
}
}
v___jp_561_:
{
lean_object* v___x_563_; lean_object* v_excessArgs_564_; lean_object* v_splitBackwardRuleCache_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v_key_569_; lean_object* v___x_570_; 
v___x_563_ = lean_st_ref_get(v_a_553_);
v_excessArgs_564_ = lean_ctor_get(v_info_552_, 2);
v_splitBackwardRuleCache_565_ = lean_ctor_get(v___x_563_, 1);
lean_inc_ref(v_splitBackwardRuleCache_565_);
lean_dec(v___x_563_);
v___x_566_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_552_);
v___x_567_ = lean_array_get_size(v_excessArgs_564_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v_key_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_569_, 0, v___y_562_);
lean_ctor_set(v_key_569_, 1, v___x_568_);
v___x_570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_splitBackwardRuleCache_565_, v_key_569_);
lean_dec_ref(v_splitBackwardRuleCache_565_);
if (lean_obj_tag(v___x_570_) == 1)
{
lean_object* v_val_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec_ref_known(v_key_569_, 2);
lean_dec_ref(v_info_552_);
lean_dec_ref(v_splitInfo_551_);
v_val_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_val_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 0);
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_val_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v___x_579_; 
lean_dec(v___x_570_);
v___x_579_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(v_splitInfo_551_, v_info_552_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_607_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_607_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_607_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_607_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v_specBackwardRuleCache_585_; lean_object* v_splitBackwardRuleCache_586_; lean_object* v_logicBackwardRuleCache_587_; lean_object* v_invariants_588_; lean_object* v_vcs_589_; lean_object* v_simpState_590_; lean_object* v_jps_591_; lean_object* v_fuel_592_; lean_object* v_inlineHandledInvariants_593_; uint8_t v_dischTacFailed_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_606_; 
v___x_584_ = lean_st_ref_take(v_a_553_);
v_specBackwardRuleCache_585_ = lean_ctor_get(v___x_584_, 0);
v_splitBackwardRuleCache_586_ = lean_ctor_get(v___x_584_, 1);
v_logicBackwardRuleCache_587_ = lean_ctor_get(v___x_584_, 2);
v_invariants_588_ = lean_ctor_get(v___x_584_, 3);
v_vcs_589_ = lean_ctor_get(v___x_584_, 4);
v_simpState_590_ = lean_ctor_get(v___x_584_, 5);
v_jps_591_ = lean_ctor_get(v___x_584_, 6);
v_fuel_592_ = lean_ctor_get(v___x_584_, 7);
v_inlineHandledInvariants_593_ = lean_ctor_get(v___x_584_, 8);
v_dischTacFailed_594_ = lean_ctor_get_uint8(v___x_584_, sizeof(void*)*9);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_606_ == 0)
{
v___x_596_ = v___x_584_;
v_isShared_597_ = v_isSharedCheck_606_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_inlineHandledInvariants_593_);
lean_inc(v_fuel_592_);
lean_inc(v_jps_591_);
lean_inc(v_simpState_590_);
lean_inc(v_vcs_589_);
lean_inc(v_invariants_588_);
lean_inc(v_logicBackwardRuleCache_587_);
lean_inc(v_splitBackwardRuleCache_586_);
lean_inc(v_specBackwardRuleCache_585_);
lean_dec(v___x_584_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_606_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
lean_inc(v_a_580_);
v___x_598_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_splitBackwardRuleCache_586_, v_key_569_, v_a_580_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_598_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_specBackwardRuleCache_585_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___x_598_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v_logicBackwardRuleCache_587_);
lean_ctor_set(v_reuseFailAlloc_605_, 3, v_invariants_588_);
lean_ctor_set(v_reuseFailAlloc_605_, 4, v_vcs_589_);
lean_ctor_set(v_reuseFailAlloc_605_, 5, v_simpState_590_);
lean_ctor_set(v_reuseFailAlloc_605_, 6, v_jps_591_);
lean_ctor_set(v_reuseFailAlloc_605_, 7, v_fuel_592_);
lean_ctor_set(v_reuseFailAlloc_605_, 8, v_inlineHandledInvariants_593_);
lean_ctor_set_uint8(v_reuseFailAlloc_605_, sizeof(void*)*9, v_dischTacFailed_594_);
v___x_600_ = v_reuseFailAlloc_605_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_st_ref_set(v_a_553_, v___x_600_);
if (v_isShared_583_ == 0)
{
v___x_603_ = v___x_582_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_580_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_569_, 2);
return v___x_579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object* v_splitInfo_612_, lean_object* v_info_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_612_, v_info_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
lean_dec(v_a_618_);
lean_dec_ref(v_a_617_);
lean_dec(v_a_616_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(lean_object* v_splitInfo_623_, lean_object* v_info_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_623_, v_info_624_, v_a_626_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object* v_splitInfo_638_, lean_object* v_info_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(v_splitInfo_638_, v_info_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec(v_a_642_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
return v_res_652_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(lean_object* v_as_653_, size_t v_i_654_, size_t v_stop_655_, uint64_t v_b_656_){
_start:
{
uint8_t v___x_657_; 
v___x_657_ = lean_usize_dec_eq(v_i_654_, v_stop_655_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; uint64_t v___x_659_; uint64_t v___x_660_; size_t v___x_661_; size_t v___x_662_; 
v___x_658_ = lean_array_uget_borrowed(v_as_653_, v_i_654_);
v___x_659_ = l_Lean_Expr_hash(v___x_658_);
v___x_660_ = lean_uint64_mix_hash(v_b_656_, v___x_659_);
v___x_661_ = ((size_t)1ULL);
v___x_662_ = lean_usize_add(v_i_654_, v___x_661_);
v_i_654_ = v___x_662_;
v_b_656_ = v___x_660_;
goto _start;
}
else
{
return v_b_656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2___boxed(lean_object* v_as_664_, lean_object* v_i_665_, lean_object* v_stop_666_, lean_object* v_b_667_){
_start:
{
size_t v_i_boxed_668_; size_t v_stop_boxed_669_; uint64_t v_b_boxed_670_; uint64_t v_res_671_; lean_object* v_r_672_; 
v_i_boxed_668_ = lean_unbox_usize(v_i_665_);
lean_dec(v_i_665_);
v_stop_boxed_669_ = lean_unbox_usize(v_stop_666_);
lean_dec(v_stop_666_);
v_b_boxed_670_ = lean_unbox_uint64(v_b_667_);
lean_dec_ref(v_b_667_);
v_res_671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_as_664_, v_i_boxed_668_, v_stop_boxed_669_, v_b_boxed_670_);
lean_dec_ref(v_as_664_);
v_r_672_ = lean_box_uint64(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(lean_object* v_xs_673_, lean_object* v_ys_674_, lean_object* v_x_675_){
_start:
{
lean_object* v_zero_676_; uint8_t v_isZero_677_; 
v_zero_676_ = lean_unsigned_to_nat(0u);
v_isZero_677_ = lean_nat_dec_eq(v_x_675_, v_zero_676_);
if (v_isZero_677_ == 1)
{
lean_dec(v_x_675_);
return v_isZero_677_;
}
else
{
lean_object* v_one_678_; lean_object* v_n_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v_one_678_ = lean_unsigned_to_nat(1u);
v_n_679_ = lean_nat_sub(v_x_675_, v_one_678_);
lean_dec(v_x_675_);
v___x_680_ = lean_array_fget_borrowed(v_xs_673_, v_n_679_);
v___x_681_ = lean_array_fget_borrowed(v_ys_674_, v_n_679_);
v___x_682_ = lean_expr_eqv(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
lean_dec(v_n_679_);
return v___x_682_;
}
else
{
v_x_675_ = v_n_679_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_xs_684_, lean_object* v_ys_685_, lean_object* v_x_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(v_xs_684_, v_ys_685_, v_x_686_);
lean_dec_ref(v_ys_685_);
lean_dec_ref(v_xs_684_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg(lean_object* v_a_689_, lean_object* v_x_690_){
_start:
{
if (lean_obj_tag(v_x_690_) == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_box(0);
return v___x_691_;
}
else
{
lean_object* v_key_692_; lean_object* v_value_693_; lean_object* v_tail_694_; uint8_t v___y_696_; lean_object* v_fst_699_; lean_object* v_snd_700_; lean_object* v_fst_701_; lean_object* v_snd_702_; uint8_t v___x_703_; 
v_key_692_ = lean_ctor_get(v_x_690_, 0);
v_value_693_ = lean_ctor_get(v_x_690_, 1);
v_tail_694_ = lean_ctor_get(v_x_690_, 2);
v_fst_699_ = lean_ctor_get(v_key_692_, 0);
v_snd_700_ = lean_ctor_get(v_key_692_, 1);
v_fst_701_ = lean_ctor_get(v_a_689_, 0);
v_snd_702_ = lean_ctor_get(v_a_689_, 1);
v___x_703_ = lean_name_eq(v_fst_699_, v_fst_701_);
if (v___x_703_ == 0)
{
v___y_696_ = v___x_703_;
goto v___jp_695_;
}
else
{
lean_object* v_fst_704_; lean_object* v_snd_705_; lean_object* v_fst_706_; lean_object* v_snd_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v_fst_704_ = lean_ctor_get(v_snd_700_, 0);
v_snd_705_ = lean_ctor_get(v_snd_700_, 1);
v_fst_706_ = lean_ctor_get(v_snd_702_, 0);
v_snd_707_ = lean_ctor_get(v_snd_702_, 1);
v___x_708_ = lean_array_get_size(v_fst_704_);
v___x_709_ = lean_array_get_size(v_fst_706_);
v___x_710_ = lean_nat_dec_eq(v___x_708_, v___x_709_);
if (v___x_710_ == 0)
{
v_x_690_ = v_tail_694_;
goto _start;
}
else
{
uint8_t v___x_712_; 
v___x_712_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(v_fst_704_, v_fst_706_, v___x_708_);
if (v___x_712_ == 0)
{
v_x_690_ = v_tail_694_;
goto _start;
}
else
{
lean_object* v_fst_714_; lean_object* v_snd_715_; lean_object* v_fst_716_; lean_object* v_snd_717_; uint8_t v___x_718_; 
v_fst_714_ = lean_ctor_get(v_snd_705_, 0);
v_snd_715_ = lean_ctor_get(v_snd_705_, 1);
v_fst_716_ = lean_ctor_get(v_snd_707_, 0);
v_snd_717_ = lean_ctor_get(v_snd_707_, 1);
v___x_718_ = lean_nat_dec_eq(v_fst_714_, v_fst_716_);
if (v___x_718_ == 0)
{
v___y_696_ = v___x_718_;
goto v___jp_695_;
}
else
{
uint8_t v___x_719_; 
v___x_719_ = lean_unbox(v_snd_715_);
if (v___x_719_ == 0)
{
uint8_t v___x_720_; 
v___x_720_ = lean_unbox(v_snd_717_);
if (v___x_720_ == 0)
{
v___y_696_ = v___x_718_;
goto v___jp_695_;
}
else
{
v_x_690_ = v_tail_694_;
goto _start;
}
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_unbox(v_snd_717_);
v___y_696_ = v___x_722_;
goto v___jp_695_;
}
}
}
}
}
v___jp_695_:
{
if (v___y_696_ == 0)
{
v_x_690_ = v_tail_694_;
goto _start;
}
else
{
lean_object* v___x_698_; 
lean_inc(v_value_693_);
v___x_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_698_, 0, v_value_693_);
return v___x_698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg___boxed(lean_object* v_a_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg(v_a_723_, v_x_724_);
lean_dec(v_x_724_);
lean_dec_ref(v_a_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg(lean_object* v_m_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_buckets_728_; lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v___x_731_; uint64_t v___y_733_; uint64_t v___y_734_; uint64_t v___y_735_; uint64_t v___y_736_; uint64_t v___y_754_; lean_object* v___y_755_; uint64_t v___y_756_; uint64_t v___y_764_; 
v_buckets_728_ = lean_ctor_get(v_m_726_, 1);
v_fst_729_ = lean_ctor_get(v_a_727_, 0);
v_snd_730_ = lean_ctor_get(v_a_727_, 1);
v___x_731_ = lean_array_get_size(v_buckets_728_);
if (lean_obj_tag(v_fst_729_) == 0)
{
uint64_t v___x_778_; 
v___x_778_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_764_ = v___x_778_;
goto v___jp_763_;
}
else
{
uint64_t v_hash_779_; 
v_hash_779_ = lean_ctor_get_uint64(v_fst_729_, sizeof(void*)*2);
v___y_764_ = v_hash_779_;
goto v___jp_763_;
}
v___jp_732_:
{
uint64_t v___x_737_; uint64_t v___x_738_; uint64_t v___x_739_; uint64_t v___x_740_; uint64_t v___x_741_; uint64_t v_fold_742_; uint64_t v___x_743_; uint64_t v___x_744_; uint64_t v___x_745_; size_t v___x_746_; size_t v___x_747_; size_t v___x_748_; size_t v___x_749_; size_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_737_ = lean_uint64_mix_hash(v___y_733_, v___y_736_);
v___x_738_ = lean_uint64_mix_hash(v___y_735_, v___x_737_);
v___x_739_ = lean_uint64_mix_hash(v___y_734_, v___x_738_);
v___x_740_ = 32ULL;
v___x_741_ = lean_uint64_shift_right(v___x_739_, v___x_740_);
v_fold_742_ = lean_uint64_xor(v___x_739_, v___x_741_);
v___x_743_ = 16ULL;
v___x_744_ = lean_uint64_shift_right(v_fold_742_, v___x_743_);
v___x_745_ = lean_uint64_xor(v_fold_742_, v___x_744_);
v___x_746_ = lean_uint64_to_usize(v___x_745_);
v___x_747_ = lean_usize_of_nat(v___x_731_);
v___x_748_ = ((size_t)1ULL);
v___x_749_ = lean_usize_sub(v___x_747_, v___x_748_);
v___x_750_ = lean_usize_land(v___x_746_, v___x_749_);
v___x_751_ = lean_array_uget_borrowed(v_buckets_728_, v___x_750_);
v___x_752_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg(v_a_727_, v___x_751_);
return v___x_752_;
}
v___jp_753_:
{
lean_object* v_fst_757_; lean_object* v_snd_758_; uint64_t v___x_759_; uint8_t v___x_760_; 
v_fst_757_ = lean_ctor_get(v___y_755_, 0);
v_snd_758_ = lean_ctor_get(v___y_755_, 1);
v___x_759_ = lean_uint64_of_nat(v_fst_757_);
v___x_760_ = lean_unbox(v_snd_758_);
if (v___x_760_ == 0)
{
uint64_t v___x_761_; 
v___x_761_ = 13ULL;
v___y_733_ = v___x_759_;
v___y_734_ = v___y_754_;
v___y_735_ = v___y_756_;
v___y_736_ = v___x_761_;
goto v___jp_732_;
}
else
{
uint64_t v___x_762_; 
v___x_762_ = 11ULL;
v___y_733_ = v___x_759_;
v___y_734_ = v___y_754_;
v___y_735_ = v___y_756_;
v___y_736_ = v___x_762_;
goto v___jp_732_;
}
}
v___jp_763_:
{
lean_object* v_fst_765_; lean_object* v_snd_766_; uint64_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_fst_765_ = lean_ctor_get(v_snd_730_, 0);
v_snd_766_ = lean_ctor_get(v_snd_730_, 1);
v___x_767_ = 7ULL;
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = lean_array_get_size(v_fst_765_);
v___x_770_ = lean_nat_dec_lt(v___x_768_, v___x_769_);
if (v___x_770_ == 0)
{
v___y_754_ = v___y_764_;
v___y_755_ = v_snd_766_;
v___y_756_ = v___x_767_;
goto v___jp_753_;
}
else
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_le(v___x_769_, v___x_769_);
if (v___x_771_ == 0)
{
if (v___x_770_ == 0)
{
v___y_754_ = v___y_764_;
v___y_755_ = v_snd_766_;
v___y_756_ = v___x_767_;
goto v___jp_753_;
}
else
{
size_t v___x_772_; size_t v___x_773_; uint64_t v___x_774_; 
v___x_772_ = ((size_t)0ULL);
v___x_773_ = lean_usize_of_nat(v___x_769_);
v___x_774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_765_, v___x_772_, v___x_773_, v___x_767_);
v___y_754_ = v___y_764_;
v___y_755_ = v_snd_766_;
v___y_756_ = v___x_774_;
goto v___jp_753_;
}
}
else
{
size_t v___x_775_; size_t v___x_776_; uint64_t v___x_777_; 
v___x_775_ = ((size_t)0ULL);
v___x_776_ = lean_usize_of_nat(v___x_769_);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_765_, v___x_775_, v___x_776_, v___x_767_);
v___y_754_ = v___y_764_;
v___y_755_ = v_snd_766_;
v___y_756_ = v___x_777_;
goto v___jp_753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg___boxed(lean_object* v_m_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg(v_m_780_, v_a_781_);
lean_dec_ref(v_a_781_);
lean_dec_ref(v_m_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6___redArg(lean_object* v_a_783_, lean_object* v_b_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
lean_dec(v_b_784_);
lean_dec_ref(v_a_783_);
return v_x_785_;
}
else
{
lean_object* v_key_786_; lean_object* v_value_787_; lean_object* v_tail_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_821_; 
v_key_786_ = lean_ctor_get(v_x_785_, 0);
v_value_787_ = lean_ctor_get(v_x_785_, 1);
v_tail_788_ = lean_ctor_get(v_x_785_, 2);
v_isSharedCheck_821_ = !lean_is_exclusive(v_x_785_);
if (v_isSharedCheck_821_ == 0)
{
v___x_790_ = v_x_785_;
v_isShared_791_ = v_isSharedCheck_821_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_tail_788_);
lean_inc(v_value_787_);
lean_inc(v_key_786_);
lean_dec(v_x_785_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_821_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
uint8_t v___y_798_; lean_object* v_fst_800_; lean_object* v_snd_801_; lean_object* v_fst_802_; lean_object* v_snd_803_; uint8_t v___x_804_; 
v_fst_800_ = lean_ctor_get(v_key_786_, 0);
v_snd_801_ = lean_ctor_get(v_key_786_, 1);
v_fst_802_ = lean_ctor_get(v_a_783_, 0);
v_snd_803_ = lean_ctor_get(v_a_783_, 1);
v___x_804_ = lean_name_eq(v_fst_800_, v_fst_802_);
if (v___x_804_ == 0)
{
v___y_798_ = v___x_804_;
goto v___jp_797_;
}
else
{
lean_object* v_fst_805_; lean_object* v_snd_806_; lean_object* v_fst_807_; lean_object* v_snd_808_; lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v_fst_805_ = lean_ctor_get(v_snd_801_, 0);
v_snd_806_ = lean_ctor_get(v_snd_801_, 1);
v_fst_807_ = lean_ctor_get(v_snd_803_, 0);
v_snd_808_ = lean_ctor_get(v_snd_803_, 1);
v___x_809_ = lean_array_get_size(v_fst_805_);
v___x_810_ = lean_array_get_size(v_fst_807_);
v___x_811_ = lean_nat_dec_eq(v___x_809_, v___x_810_);
if (v___x_811_ == 0)
{
goto v___jp_792_;
}
else
{
uint8_t v___x_812_; 
v___x_812_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(v_fst_805_, v_fst_807_, v___x_809_);
if (v___x_812_ == 0)
{
goto v___jp_792_;
}
else
{
lean_object* v_fst_813_; lean_object* v_snd_814_; lean_object* v_fst_815_; lean_object* v_snd_816_; uint8_t v___x_817_; 
v_fst_813_ = lean_ctor_get(v_snd_806_, 0);
v_snd_814_ = lean_ctor_get(v_snd_806_, 1);
v_fst_815_ = lean_ctor_get(v_snd_808_, 0);
v_snd_816_ = lean_ctor_get(v_snd_808_, 1);
v___x_817_ = lean_nat_dec_eq(v_fst_813_, v_fst_815_);
if (v___x_817_ == 0)
{
v___y_798_ = v___x_817_;
goto v___jp_797_;
}
else
{
uint8_t v___x_818_; 
v___x_818_ = lean_unbox(v_snd_814_);
if (v___x_818_ == 0)
{
uint8_t v___x_819_; 
v___x_819_ = lean_unbox(v_snd_816_);
if (v___x_819_ == 0)
{
v___y_798_ = v___x_817_;
goto v___jp_797_;
}
else
{
goto v___jp_792_;
}
}
else
{
uint8_t v___x_820_; 
v___x_820_ = lean_unbox(v_snd_816_);
v___y_798_ = v___x_820_;
goto v___jp_797_;
}
}
}
}
}
v___jp_792_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6___redArg(v_a_783_, v_b_784_, v_tail_788_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 2, v___x_793_);
v___x_795_ = v___x_790_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_key_786_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_value_787_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v___x_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
v___jp_797_:
{
if (v___y_798_ == 0)
{
goto v___jp_792_;
}
else
{
lean_object* v___x_799_; 
lean_del_object(v___x_790_);
lean_dec(v_value_787_);
lean_dec(v_key_786_);
v___x_799_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_799_, 0, v_a_783_);
lean_ctor_set(v___x_799_, 1, v_b_784_);
lean_ctor_set(v___x_799_, 2, v_tail_788_);
return v___x_799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_823_) == 0)
{
return v_x_822_;
}
else
{
lean_object* v_key_824_; lean_object* v_value_825_; lean_object* v_tail_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_885_; 
v_key_824_ = lean_ctor_get(v_x_823_, 0);
v_value_825_ = lean_ctor_get(v_x_823_, 1);
v_tail_826_ = lean_ctor_get(v_x_823_, 2);
v_isSharedCheck_885_ = !lean_is_exclusive(v_x_823_);
if (v_isSharedCheck_885_ == 0)
{
v___x_828_ = v_x_823_;
v_isShared_829_ = v_isSharedCheck_885_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_tail_826_);
lean_inc(v_value_825_);
lean_inc(v_key_824_);
lean_dec(v_x_823_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_885_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v_fst_830_; lean_object* v_snd_831_; lean_object* v___x_832_; uint64_t v___y_834_; uint64_t v___y_835_; uint64_t v___y_836_; uint64_t v___y_837_; lean_object* v___y_859_; uint64_t v___y_860_; uint64_t v___y_861_; uint64_t v___y_869_; 
v_fst_830_ = lean_ctor_get(v_key_824_, 0);
v_snd_831_ = lean_ctor_get(v_key_824_, 1);
v___x_832_ = lean_array_get_size(v_x_822_);
if (lean_obj_tag(v_fst_830_) == 0)
{
uint64_t v___x_883_; 
v___x_883_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_869_ = v___x_883_;
goto v___jp_868_;
}
else
{
uint64_t v_hash_884_; 
v_hash_884_ = lean_ctor_get_uint64(v_fst_830_, sizeof(void*)*2);
v___y_869_ = v_hash_884_;
goto v___jp_868_;
}
v___jp_833_:
{
uint64_t v___x_838_; uint64_t v___x_839_; uint64_t v___x_840_; uint64_t v___x_841_; uint64_t v___x_842_; uint64_t v_fold_843_; uint64_t v___x_844_; uint64_t v___x_845_; uint64_t v___x_846_; size_t v___x_847_; size_t v___x_848_; size_t v___x_849_; size_t v___x_850_; size_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_838_ = lean_uint64_mix_hash(v___y_835_, v___y_837_);
v___x_839_ = lean_uint64_mix_hash(v___y_834_, v___x_838_);
v___x_840_ = lean_uint64_mix_hash(v___y_836_, v___x_839_);
v___x_841_ = 32ULL;
v___x_842_ = lean_uint64_shift_right(v___x_840_, v___x_841_);
v_fold_843_ = lean_uint64_xor(v___x_840_, v___x_842_);
v___x_844_ = 16ULL;
v___x_845_ = lean_uint64_shift_right(v_fold_843_, v___x_844_);
v___x_846_ = lean_uint64_xor(v_fold_843_, v___x_845_);
v___x_847_ = lean_uint64_to_usize(v___x_846_);
v___x_848_ = lean_usize_of_nat(v___x_832_);
v___x_849_ = ((size_t)1ULL);
v___x_850_ = lean_usize_sub(v___x_848_, v___x_849_);
v___x_851_ = lean_usize_land(v___x_847_, v___x_850_);
v___x_852_ = lean_array_uget_borrowed(v_x_822_, v___x_851_);
lean_inc(v___x_852_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 2, v___x_852_);
v___x_854_ = v___x_828_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_key_824_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_value_825_);
lean_ctor_set(v_reuseFailAlloc_857_, 2, v___x_852_);
v___x_854_ = v_reuseFailAlloc_857_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; 
v___x_855_ = lean_array_uset(v_x_822_, v___x_851_, v___x_854_);
v_x_822_ = v___x_855_;
v_x_823_ = v_tail_826_;
goto _start;
}
}
v___jp_858_:
{
lean_object* v_fst_862_; lean_object* v_snd_863_; uint64_t v___x_864_; uint8_t v___x_865_; 
v_fst_862_ = lean_ctor_get(v___y_859_, 0);
lean_inc(v_fst_862_);
v_snd_863_ = lean_ctor_get(v___y_859_, 1);
lean_inc(v_snd_863_);
lean_dec_ref(v___y_859_);
v___x_864_ = lean_uint64_of_nat(v_fst_862_);
lean_dec(v_fst_862_);
v___x_865_ = lean_unbox(v_snd_863_);
lean_dec(v_snd_863_);
if (v___x_865_ == 0)
{
uint64_t v___x_866_; 
v___x_866_ = 13ULL;
v___y_834_ = v___y_861_;
v___y_835_ = v___x_864_;
v___y_836_ = v___y_860_;
v___y_837_ = v___x_866_;
goto v___jp_833_;
}
else
{
uint64_t v___x_867_; 
v___x_867_ = 11ULL;
v___y_834_ = v___y_861_;
v___y_835_ = v___x_864_;
v___y_836_ = v___y_860_;
v___y_837_ = v___x_867_;
goto v___jp_833_;
}
}
v___jp_868_:
{
lean_object* v_fst_870_; lean_object* v_snd_871_; uint64_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; 
v_fst_870_ = lean_ctor_get(v_snd_831_, 0);
v_snd_871_ = lean_ctor_get(v_snd_831_, 1);
v___x_872_ = 7ULL;
v___x_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = lean_array_get_size(v_fst_870_);
v___x_875_ = lean_nat_dec_lt(v___x_873_, v___x_874_);
if (v___x_875_ == 0)
{
lean_inc(v_snd_871_);
v___y_859_ = v_snd_871_;
v___y_860_ = v___y_869_;
v___y_861_ = v___x_872_;
goto v___jp_858_;
}
else
{
uint8_t v___x_876_; 
v___x_876_ = lean_nat_dec_le(v___x_874_, v___x_874_);
if (v___x_876_ == 0)
{
if (v___x_875_ == 0)
{
lean_inc(v_snd_871_);
v___y_859_ = v_snd_871_;
v___y_860_ = v___y_869_;
v___y_861_ = v___x_872_;
goto v___jp_858_;
}
else
{
size_t v___x_877_; size_t v___x_878_; uint64_t v___x_879_; 
v___x_877_ = ((size_t)0ULL);
v___x_878_ = lean_usize_of_nat(v___x_874_);
v___x_879_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_870_, v___x_877_, v___x_878_, v___x_872_);
lean_inc(v_snd_871_);
v___y_859_ = v_snd_871_;
v___y_860_ = v___y_869_;
v___y_861_ = v___x_879_;
goto v___jp_858_;
}
}
else
{
size_t v___x_880_; size_t v___x_881_; uint64_t v___x_882_; 
v___x_880_ = ((size_t)0ULL);
v___x_881_ = lean_usize_of_nat(v___x_874_);
v___x_882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_870_, v___x_880_, v___x_881_, v___x_872_);
lean_inc(v_snd_871_);
v___y_859_ = v_snd_871_;
v___y_860_ = v___y_869_;
v___y_861_ = v___x_882_;
goto v___jp_858_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7___redArg(lean_object* v_i_886_, lean_object* v_source_887_, lean_object* v_target_888_){
_start:
{
lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_889_ = lean_array_get_size(v_source_887_);
v___x_890_ = lean_nat_dec_lt(v_i_886_, v___x_889_);
if (v___x_890_ == 0)
{
lean_dec_ref(v_source_887_);
lean_dec(v_i_886_);
return v_target_888_;
}
else
{
lean_object* v_es_891_; lean_object* v___x_892_; lean_object* v_source_893_; lean_object* v_target_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_es_891_ = lean_array_fget(v_source_887_, v_i_886_);
v___x_892_ = lean_box(0);
v_source_893_ = lean_array_fset(v_source_887_, v_i_886_, v___x_892_);
v_target_894_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8___redArg(v_target_888_, v_es_891_);
v___x_895_ = lean_unsigned_to_nat(1u);
v___x_896_ = lean_nat_add(v_i_886_, v___x_895_);
lean_dec(v_i_886_);
v_i_886_ = v___x_896_;
v_source_887_ = v_source_893_;
v_target_888_ = v_target_894_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5___redArg(lean_object* v_data_898_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_nbuckets_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_899_ = lean_array_get_size(v_data_898_);
v___x_900_ = lean_unsigned_to_nat(2u);
v_nbuckets_901_ = lean_nat_mul(v___x_899_, v___x_900_);
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_box(0);
v___x_904_ = lean_mk_array(v_nbuckets_901_, v___x_903_);
v___x_905_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7___redArg(v___x_902_, v_data_898_, v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg(lean_object* v_a_906_, lean_object* v_x_907_){
_start:
{
if (lean_obj_tag(v_x_907_) == 0)
{
uint8_t v___x_908_; 
v___x_908_ = 0;
return v___x_908_;
}
else
{
lean_object* v_key_909_; lean_object* v_tail_910_; uint8_t v___y_912_; lean_object* v_fst_914_; lean_object* v_snd_915_; lean_object* v_fst_916_; lean_object* v_snd_917_; uint8_t v___x_918_; 
v_key_909_ = lean_ctor_get(v_x_907_, 0);
v_tail_910_ = lean_ctor_get(v_x_907_, 2);
v_fst_914_ = lean_ctor_get(v_key_909_, 0);
v_snd_915_ = lean_ctor_get(v_key_909_, 1);
v_fst_916_ = lean_ctor_get(v_a_906_, 0);
v_snd_917_ = lean_ctor_get(v_a_906_, 1);
v___x_918_ = lean_name_eq(v_fst_914_, v_fst_916_);
if (v___x_918_ == 0)
{
v___y_912_ = v___x_918_;
goto v___jp_911_;
}
else
{
lean_object* v_fst_919_; lean_object* v_snd_920_; lean_object* v_fst_921_; lean_object* v_snd_922_; lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v_fst_919_ = lean_ctor_get(v_snd_915_, 0);
v_snd_920_ = lean_ctor_get(v_snd_915_, 1);
v_fst_921_ = lean_ctor_get(v_snd_917_, 0);
v_snd_922_ = lean_ctor_get(v_snd_917_, 1);
v___x_923_ = lean_array_get_size(v_fst_919_);
v___x_924_ = lean_array_get_size(v_fst_921_);
v___x_925_ = lean_nat_dec_eq(v___x_923_, v___x_924_);
if (v___x_925_ == 0)
{
v_x_907_ = v_tail_910_;
goto _start;
}
else
{
uint8_t v___x_927_; 
v___x_927_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(v_fst_919_, v_fst_921_, v___x_923_);
if (v___x_927_ == 0)
{
v_x_907_ = v_tail_910_;
goto _start;
}
else
{
lean_object* v_fst_929_; lean_object* v_snd_930_; lean_object* v_fst_931_; lean_object* v_snd_932_; uint8_t v___x_933_; 
v_fst_929_ = lean_ctor_get(v_snd_920_, 0);
v_snd_930_ = lean_ctor_get(v_snd_920_, 1);
v_fst_931_ = lean_ctor_get(v_snd_922_, 0);
v_snd_932_ = lean_ctor_get(v_snd_922_, 1);
v___x_933_ = lean_nat_dec_eq(v_fst_929_, v_fst_931_);
if (v___x_933_ == 0)
{
v___y_912_ = v___x_933_;
goto v___jp_911_;
}
else
{
uint8_t v___x_934_; 
v___x_934_ = lean_unbox(v_snd_930_);
if (v___x_934_ == 0)
{
uint8_t v___x_935_; 
v___x_935_ = lean_unbox(v_snd_932_);
if (v___x_935_ == 0)
{
v___y_912_ = v___x_933_;
goto v___jp_911_;
}
else
{
v_x_907_ = v_tail_910_;
goto _start;
}
}
else
{
uint8_t v___x_937_; 
v___x_937_ = lean_unbox(v_snd_932_);
v___y_912_ = v___x_937_;
goto v___jp_911_;
}
}
}
}
}
v___jp_911_:
{
if (v___y_912_ == 0)
{
v_x_907_ = v_tail_910_;
goto _start;
}
else
{
return v___y_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg___boxed(lean_object* v_a_938_, lean_object* v_x_939_){
_start:
{
uint8_t v_res_940_; lean_object* v_r_941_; 
v_res_940_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg(v_a_938_, v_x_939_);
lean_dec(v_x_939_);
lean_dec_ref(v_a_938_);
v_r_941_ = lean_box(v_res_940_);
return v_r_941_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2___redArg(lean_object* v_m_942_, lean_object* v_a_943_, lean_object* v_b_944_){
_start:
{
lean_object* v_size_945_; lean_object* v_buckets_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_1025_; 
v_size_945_ = lean_ctor_get(v_m_942_, 0);
v_buckets_946_ = lean_ctor_get(v_m_942_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_m_942_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_948_ = v_m_942_;
v_isShared_949_ = v_isSharedCheck_1025_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_buckets_946_);
lean_inc(v_size_945_);
lean_dec(v_m_942_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_1025_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_fst_950_; lean_object* v_snd_951_; lean_object* v___x_952_; uint64_t v___y_954_; uint64_t v___y_955_; uint64_t v___y_956_; uint64_t v___y_957_; uint64_t v___y_999_; lean_object* v___y_1000_; uint64_t v___y_1001_; uint64_t v___y_1009_; 
v_fst_950_ = lean_ctor_get(v_a_943_, 0);
v_snd_951_ = lean_ctor_get(v_a_943_, 1);
v___x_952_ = lean_array_get_size(v_buckets_946_);
if (lean_obj_tag(v_fst_950_) == 0)
{
uint64_t v___x_1023_; 
v___x_1023_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_1009_ = v___x_1023_;
goto v___jp_1008_;
}
else
{
uint64_t v_hash_1024_; 
v_hash_1024_ = lean_ctor_get_uint64(v_fst_950_, sizeof(void*)*2);
v___y_1009_ = v_hash_1024_;
goto v___jp_1008_;
}
v___jp_953_:
{
uint64_t v___x_958_; uint64_t v___x_959_; uint64_t v___x_960_; uint64_t v___x_961_; uint64_t v___x_962_; uint64_t v_fold_963_; uint64_t v___x_964_; uint64_t v___x_965_; uint64_t v___x_966_; size_t v___x_967_; size_t v___x_968_; size_t v___x_969_; size_t v___x_970_; size_t v___x_971_; lean_object* v_bkt_972_; uint8_t v___x_973_; 
v___x_958_ = lean_uint64_mix_hash(v___y_955_, v___y_957_);
v___x_959_ = lean_uint64_mix_hash(v___y_956_, v___x_958_);
v___x_960_ = lean_uint64_mix_hash(v___y_954_, v___x_959_);
v___x_961_ = 32ULL;
v___x_962_ = lean_uint64_shift_right(v___x_960_, v___x_961_);
v_fold_963_ = lean_uint64_xor(v___x_960_, v___x_962_);
v___x_964_ = 16ULL;
v___x_965_ = lean_uint64_shift_right(v_fold_963_, v___x_964_);
v___x_966_ = lean_uint64_xor(v_fold_963_, v___x_965_);
v___x_967_ = lean_uint64_to_usize(v___x_966_);
v___x_968_ = lean_usize_of_nat(v___x_952_);
v___x_969_ = ((size_t)1ULL);
v___x_970_ = lean_usize_sub(v___x_968_, v___x_969_);
v___x_971_ = lean_usize_land(v___x_967_, v___x_970_);
v_bkt_972_ = lean_array_uget_borrowed(v_buckets_946_, v___x_971_);
v___x_973_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg(v_a_943_, v_bkt_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v_size_x27_975_; lean_object* v___x_976_; lean_object* v_buckets_x27_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_974_ = lean_unsigned_to_nat(1u);
v_size_x27_975_ = lean_nat_add(v_size_945_, v___x_974_);
lean_dec(v_size_945_);
lean_inc(v_bkt_972_);
v___x_976_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_976_, 0, v_a_943_);
lean_ctor_set(v___x_976_, 1, v_b_944_);
lean_ctor_set(v___x_976_, 2, v_bkt_972_);
v_buckets_x27_977_ = lean_array_uset(v_buckets_946_, v___x_971_, v___x_976_);
v___x_978_ = lean_unsigned_to_nat(4u);
v___x_979_ = lean_nat_mul(v_size_x27_975_, v___x_978_);
v___x_980_ = lean_unsigned_to_nat(3u);
v___x_981_ = lean_nat_div(v___x_979_, v___x_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_array_get_size(v_buckets_x27_977_);
v___x_983_ = lean_nat_dec_le(v___x_981_, v___x_982_);
lean_dec(v___x_981_);
if (v___x_983_ == 0)
{
lean_object* v_val_984_; lean_object* v___x_986_; 
v_val_984_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5___redArg(v_buckets_x27_977_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v_val_984_);
lean_ctor_set(v___x_948_, 0, v_size_x27_975_);
v___x_986_ = v___x_948_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_size_x27_975_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_val_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
else
{
lean_object* v___x_989_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v_buckets_x27_977_);
lean_ctor_set(v___x_948_, 0, v_size_x27_975_);
v___x_989_ = v___x_948_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_size_x27_975_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_buckets_x27_977_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v___x_991_; lean_object* v_buckets_x27_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
lean_inc(v_bkt_972_);
v___x_991_ = lean_box(0);
v_buckets_x27_992_ = lean_array_uset(v_buckets_946_, v___x_971_, v___x_991_);
v___x_993_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6___redArg(v_a_943_, v_b_944_, v_bkt_972_);
v___x_994_ = lean_array_uset(v_buckets_x27_992_, v___x_971_, v___x_993_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_994_);
v___x_996_ = v___x_948_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_size_945_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
v___jp_998_:
{
lean_object* v_fst_1002_; lean_object* v_snd_1003_; uint64_t v___x_1004_; uint8_t v___x_1005_; 
v_fst_1002_ = lean_ctor_get(v___y_1000_, 0);
lean_inc(v_fst_1002_);
v_snd_1003_ = lean_ctor_get(v___y_1000_, 1);
lean_inc(v_snd_1003_);
lean_dec_ref(v___y_1000_);
v___x_1004_ = lean_uint64_of_nat(v_fst_1002_);
lean_dec(v_fst_1002_);
v___x_1005_ = lean_unbox(v_snd_1003_);
lean_dec(v_snd_1003_);
if (v___x_1005_ == 0)
{
uint64_t v___x_1006_; 
v___x_1006_ = 13ULL;
v___y_954_ = v___y_999_;
v___y_955_ = v___x_1004_;
v___y_956_ = v___y_1001_;
v___y_957_ = v___x_1006_;
goto v___jp_953_;
}
else
{
uint64_t v___x_1007_; 
v___x_1007_ = 11ULL;
v___y_954_ = v___y_999_;
v___y_955_ = v___x_1004_;
v___y_956_ = v___y_1001_;
v___y_957_ = v___x_1007_;
goto v___jp_953_;
}
}
v___jp_1008_:
{
lean_object* v_fst_1010_; lean_object* v_snd_1011_; uint64_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v_fst_1010_ = lean_ctor_get(v_snd_951_, 0);
v_snd_1011_ = lean_ctor_get(v_snd_951_, 1);
v___x_1012_ = 7ULL;
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = lean_array_get_size(v_fst_1010_);
v___x_1015_ = lean_nat_dec_lt(v___x_1013_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_inc(v_snd_1011_);
v___y_999_ = v___y_1009_;
v___y_1000_ = v_snd_1011_;
v___y_1001_ = v___x_1012_;
goto v___jp_998_;
}
else
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_nat_dec_le(v___x_1014_, v___x_1014_);
if (v___x_1016_ == 0)
{
if (v___x_1015_ == 0)
{
lean_inc(v_snd_1011_);
v___y_999_ = v___y_1009_;
v___y_1000_ = v_snd_1011_;
v___y_1001_ = v___x_1012_;
goto v___jp_998_;
}
else
{
size_t v___x_1017_; size_t v___x_1018_; uint64_t v___x_1019_; 
v___x_1017_ = ((size_t)0ULL);
v___x_1018_ = lean_usize_of_nat(v___x_1014_);
v___x_1019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_1010_, v___x_1017_, v___x_1018_, v___x_1012_);
lean_inc(v_snd_1011_);
v___y_999_ = v___y_1009_;
v___y_1000_ = v_snd_1011_;
v___y_1001_ = v___x_1019_;
goto v___jp_998_;
}
}
else
{
size_t v___x_1020_; size_t v___x_1021_; uint64_t v___x_1022_; 
v___x_1020_ = ((size_t)0ULL);
v___x_1021_ = lean_usize_of_nat(v___x_1014_);
v___x_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__2(v_fst_1010_, v___x_1020_, v___x_1021_, v___x_1012_);
lean_inc(v_snd_1011_);
v___y_999_ = v___y_1009_;
v___y_1000_ = v_snd_1011_;
v___y_1001_ = v___x_1022_;
goto v___jp_998_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg(size_t v_sz_1026_, size_t v_i_1027_, lean_object* v_bs_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
uint8_t v___x_1035_; 
v___x_1035_ = lean_usize_dec_lt(v_i_1027_, v_sz_1026_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_bs_1028_);
return v___x_1036_;
}
else
{
lean_object* v_v_1037_; lean_object* v___x_1038_; 
v_v_1037_ = lean_array_uget_borrowed(v_bs_1028_, v_i_1027_);
lean_inc(v_v_1037_);
v___x_1038_ = l_Lean_Meta_Sym_inferType___redArg(v_v_1037_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v_bs_x27_1041_; size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1040_ = lean_unsigned_to_nat(0u);
v_bs_x27_1041_ = lean_array_uset(v_bs_1028_, v_i_1027_, v___x_1040_);
v___x_1042_ = ((size_t)1ULL);
v___x_1043_ = lean_usize_add(v_i_1027_, v___x_1042_);
v___x_1044_ = lean_array_uset(v_bs_x27_1041_, v_i_1027_, v_a_1039_);
v_i_1027_ = v___x_1043_;
v_bs_1028_ = v___x_1044_;
goto _start;
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec_ref(v_bs_1028_);
v_a_1046_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1038_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1038_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg___boxed(lean_object* v_sz_1054_, lean_object* v_i_1055_, lean_object* v_bs_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
size_t v_sz_boxed_1063_; size_t v_i_boxed_1064_; lean_object* v_res_1065_; 
v_sz_boxed_1063_ = lean_unbox_usize(v_sz_1054_);
lean_dec(v_sz_1054_);
v_i_boxed_1064_ = lean_unbox_usize(v_i_1055_);
lean_dec(v_i_1055_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg(v_sz_boxed_1063_, v_i_boxed_1064_, v_bs_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(uint8_t v_lop_1066_, lean_object* v_as_1067_, lean_object* v_excessArgs_1068_, lean_object* v_resultType_x3f_1069_, uint8_t v_preIsTop_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v___x_1079_; size_t v_sz_1080_; size_t v___x_1081_; lean_object* v___x_1082_; 
v___x_1079_ = lean_st_ref_get(v_a_1071_);
v_sz_1080_ = lean_array_size(v_as_1067_);
v___x_1081_ = ((size_t)0ULL);
lean_inc_ref(v_as_1067_);
v___x_1082_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg(v_sz_1080_, v___x_1081_, v_as_1067_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1128_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1085_ = v___x_1082_;
v_isShared_1086_ = v_isSharedCheck_1128_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1128_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v_logicBackwardRuleCache_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_logicBackwardRuleCache_1087_ = lean_ctor_get(v___x_1079_, 2);
lean_inc_ref(v_logicBackwardRuleCache_1087_);
lean_dec(v___x_1079_);
v___x_1088_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_LogicOp_toApplyLemma(v_lop_1066_);
v___x_1089_ = lean_array_get_size(v_excessArgs_1068_);
v___x_1090_ = lean_box(v_preIsTop_1070_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_a_1083_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1088_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg(v_logicBackwardRuleCache_1087_, v___x_1093_);
lean_dec_ref(v_logicBackwardRuleCache_1087_);
if (lean_obj_tag(v___x_1094_) == 1)
{
lean_object* v_val_1095_; lean_object* v___x_1097_; 
lean_dec_ref_known(v___x_1093_, 2);
lean_dec(v_resultType_x3f_1069_);
lean_dec_ref(v_excessArgs_1068_);
lean_dec_ref(v_as_1067_);
v_val_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_val_1095_);
lean_dec_ref_known(v___x_1094_, 1);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v_val_1095_);
v___x_1097_ = v___x_1085_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_val_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
else
{
lean_object* v___x_1099_; 
lean_dec(v___x_1094_);
lean_del_object(v___x_1085_);
v___x_1099_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_LogicOp_mkBackwardRule(v_lop_1066_, v_as_1067_, v_excessArgs_1068_, v_resultType_x3f_1069_, v_preIsTop_1070_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1127_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1127_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1127_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v_specBackwardRuleCache_1105_; lean_object* v_splitBackwardRuleCache_1106_; lean_object* v_logicBackwardRuleCache_1107_; lean_object* v_invariants_1108_; lean_object* v_vcs_1109_; lean_object* v_simpState_1110_; lean_object* v_jps_1111_; lean_object* v_fuel_1112_; lean_object* v_inlineHandledInvariants_1113_; uint8_t v_dischTacFailed_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1126_; 
v___x_1104_ = lean_st_ref_take(v_a_1071_);
v_specBackwardRuleCache_1105_ = lean_ctor_get(v___x_1104_, 0);
v_splitBackwardRuleCache_1106_ = lean_ctor_get(v___x_1104_, 1);
v_logicBackwardRuleCache_1107_ = lean_ctor_get(v___x_1104_, 2);
v_invariants_1108_ = lean_ctor_get(v___x_1104_, 3);
v_vcs_1109_ = lean_ctor_get(v___x_1104_, 4);
v_simpState_1110_ = lean_ctor_get(v___x_1104_, 5);
v_jps_1111_ = lean_ctor_get(v___x_1104_, 6);
v_fuel_1112_ = lean_ctor_get(v___x_1104_, 7);
v_inlineHandledInvariants_1113_ = lean_ctor_get(v___x_1104_, 8);
v_dischTacFailed_1114_ = lean_ctor_get_uint8(v___x_1104_, sizeof(void*)*9);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1116_ = v___x_1104_;
v_isShared_1117_ = v_isSharedCheck_1126_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_inlineHandledInvariants_1113_);
lean_inc(v_fuel_1112_);
lean_inc(v_jps_1111_);
lean_inc(v_simpState_1110_);
lean_inc(v_vcs_1109_);
lean_inc(v_invariants_1108_);
lean_inc(v_logicBackwardRuleCache_1107_);
lean_inc(v_splitBackwardRuleCache_1106_);
lean_inc(v_specBackwardRuleCache_1105_);
lean_dec(v___x_1104_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1126_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1120_; 
lean_inc(v_a_1100_);
v___x_1118_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2___redArg(v_logicBackwardRuleCache_1107_, v___x_1093_, v_a_1100_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 2, v___x_1118_);
v___x_1120_ = v___x_1116_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_specBackwardRuleCache_1105_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v_splitBackwardRuleCache_1106_);
lean_ctor_set(v_reuseFailAlloc_1125_, 2, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1125_, 3, v_invariants_1108_);
lean_ctor_set(v_reuseFailAlloc_1125_, 4, v_vcs_1109_);
lean_ctor_set(v_reuseFailAlloc_1125_, 5, v_simpState_1110_);
lean_ctor_set(v_reuseFailAlloc_1125_, 6, v_jps_1111_);
lean_ctor_set(v_reuseFailAlloc_1125_, 7, v_fuel_1112_);
lean_ctor_set(v_reuseFailAlloc_1125_, 8, v_inlineHandledInvariants_1113_);
lean_ctor_set_uint8(v_reuseFailAlloc_1125_, sizeof(void*)*9, v_dischTacFailed_1114_);
v___x_1120_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = lean_st_ref_set(v_a_1071_, v___x_1120_);
if (v_isShared_1103_ == 0)
{
v___x_1123_ = v___x_1102_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1100_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_1093_, 2);
return v___x_1099_;
}
}
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec(v___x_1079_);
lean_dec(v_resultType_x3f_1069_);
lean_dec_ref(v_excessArgs_1068_);
lean_dec_ref(v_as_1067_);
v_a_1129_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1082_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1082_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg___boxed(lean_object* v_lop_1137_, lean_object* v_as_1138_, lean_object* v_excessArgs_1139_, lean_object* v_resultType_x3f_1140_, lean_object* v_preIsTop_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
uint8_t v_lop_boxed_1150_; uint8_t v_preIsTop_boxed_1151_; lean_object* v_res_1152_; 
v_lop_boxed_1150_ = lean_unbox(v_lop_1137_);
v_preIsTop_boxed_1151_ = lean_unbox(v_preIsTop_1141_);
v_res_1152_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(v_lop_boxed_1150_, v_as_1138_, v_excessArgs_1139_, v_resultType_x3f_1140_, v_preIsTop_boxed_1151_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec(v_a_1142_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached(uint8_t v_lop_1153_, lean_object* v_as_1154_, lean_object* v_excessArgs_1155_, lean_object* v_resultType_x3f_1156_, uint8_t v_preIsTop_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___redArg(v_lop_1153_, v_as_1154_, v_excessArgs_1155_, v_resultType_x3f_1156_, v_preIsTop_1157_, v_a_1159_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached___boxed(lean_object** _args){
lean_object* v_lop_1171_ = _args[0];
lean_object* v_as_1172_ = _args[1];
lean_object* v_excessArgs_1173_ = _args[2];
lean_object* v_resultType_x3f_1174_ = _args[3];
lean_object* v_preIsTop_1175_ = _args[4];
lean_object* v_a_1176_ = _args[5];
lean_object* v_a_1177_ = _args[6];
lean_object* v_a_1178_ = _args[7];
lean_object* v_a_1179_ = _args[8];
lean_object* v_a_1180_ = _args[9];
lean_object* v_a_1181_ = _args[10];
lean_object* v_a_1182_ = _args[11];
lean_object* v_a_1183_ = _args[12];
lean_object* v_a_1184_ = _args[13];
lean_object* v_a_1185_ = _args[14];
lean_object* v_a_1186_ = _args[15];
lean_object* v_a_1187_ = _args[16];
_start:
{
uint8_t v_lop_boxed_1188_; uint8_t v_preIsTop_boxed_1189_; lean_object* v_res_1190_; 
v_lop_boxed_1188_ = lean_unbox(v_lop_1171_);
v_preIsTop_boxed_1189_ = lean_unbox(v_preIsTop_1175_);
v_res_1190_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached(v_lop_boxed_1188_, v_as_1172_, v_excessArgs_1173_, v_resultType_x3f_1174_, v_preIsTop_boxed_1189_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
lean_dec(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec_ref(v_a_1176_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0(size_t v_sz_1191_, size_t v_i_1192_, lean_object* v_bs_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___redArg(v_sz_1191_, v_i_1192_, v_bs_1193_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0___boxed(lean_object* v_sz_1202_, lean_object* v_i_1203_, lean_object* v_bs_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
size_t v_sz_boxed_1212_; size_t v_i_boxed_1213_; lean_object* v_res_1214_; 
v_sz_boxed_1212_ = lean_unbox_usize(v_sz_1202_);
lean_dec(v_sz_1202_);
v_i_boxed_1213_ = lean_unbox_usize(v_i_1203_);
lean_dec(v_i_1203_);
v_res_1214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__0(v_sz_boxed_1212_, v_i_boxed_1213_, v_bs_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1(lean_object* v_00_u03b2_1215_, lean_object* v_m_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___redArg(v_m_1216_, v_a_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1___boxed(lean_object* v_00_u03b2_1219_, lean_object* v_m_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1(v_00_u03b2_1219_, v_m_1220_, v_a_1221_);
lean_dec_ref(v_a_1221_);
lean_dec_ref(v_m_1220_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2(lean_object* v_00_u03b2_1223_, lean_object* v_m_1224_, lean_object* v_a_1225_, lean_object* v_b_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2___redArg(v_m_1224_, v_a_1225_, v_b_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1(lean_object* v_00_u03b2_1228_, lean_object* v_a_1229_, lean_object* v_x_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___redArg(v_a_1229_, v_x_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1232_, lean_object* v_a_1233_, lean_object* v_x_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1(v_00_u03b2_1232_, v_a_1233_, v_x_1234_);
lean_dec(v_x_1234_);
lean_dec_ref(v_a_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4(lean_object* v_00_u03b2_1236_, lean_object* v_a_1237_, lean_object* v_x_1238_){
_start:
{
uint8_t v___x_1239_; 
v___x_1239_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___redArg(v_a_1237_, v_x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1240_, lean_object* v_a_1241_, lean_object* v_x_1242_){
_start:
{
uint8_t v_res_1243_; lean_object* v_r_1244_; 
v_res_1243_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__4(v_00_u03b2_1240_, v_a_1241_, v_x_1242_);
lean_dec(v_x_1242_);
lean_dec_ref(v_a_1241_);
v_r_1244_ = lean_box(v_res_1243_);
return v_r_1244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5(lean_object* v_00_u03b2_1245_, lean_object* v_data_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5___redArg(v_data_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6(lean_object* v_00_u03b2_1248_, lean_object* v_a_1249_, lean_object* v_b_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__6___redArg(v_a_1249_, v_b_1250_, v_x_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2(lean_object* v_xs_1253_, lean_object* v_ys_1254_, lean_object* v_hsz_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
uint8_t v___x_1258_; 
v___x_1258_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___redArg(v_xs_1253_, v_ys_1254_, v_x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2___boxed(lean_object* v_xs_1259_, lean_object* v_ys_1260_, lean_object* v_hsz_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_){
_start:
{
uint8_t v_res_1264_; lean_object* v_r_1265_; 
v_res_1264_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__1_spec__1_spec__2(v_xs_1259_, v_ys_1260_, v_hsz_1261_, v_x_1262_, v_x_1263_);
lean_dec_ref(v_ys_1260_);
lean_dec_ref(v_xs_1259_);
v_r_1265_ = lean_box(v_res_1264_);
return v_r_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_1266_, lean_object* v_i_1267_, lean_object* v_source_1268_, lean_object* v_target_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7___redArg(v_i_1267_, v_source_1268_, v_target_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLogicCached_spec__2_spec__5_spec__7_spec__8___redArg(v_x_1272_, v_x_1273_);
return v___x_1274_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Logic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Logic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Logic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Logic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
}
#ifdef __cplusplus
}
#endif
