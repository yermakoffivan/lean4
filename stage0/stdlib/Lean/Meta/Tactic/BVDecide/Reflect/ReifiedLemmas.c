// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Reflect.ReifiedLemmas
// Imports: public import Lean.Meta.Tactic.BVDecide.Reflect.Basic import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVLogical import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVPred import Lean.Meta.AppBuilder import Std.Tactic.BVDecide.Reflect
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkNot___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkGate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_evalsAtAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkRefl(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_addLemma___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lemma_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cond_true"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(71, 253, 9, 241, 22, 101, 244, 64)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cond_false"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 177, 250, 0, 252, 101, 138, 220)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0(lean_object* v_expr_2_, lean_object* v_a_3_, lean_object* v_lhs_4_, lean_object* v_lemmaName_5_, lean_object* v___x_6_, lean_object* v_discrExpr_7_, lean_object* v_lhsExpr_8_, lean_object* v_rhsExpr_9_, lean_object* v___x_10_, lean_object* v___x_11_, lean_object* v___x_12_, lean_object* v___x_13_, lean_object* v___x_14_, lean_object* v___x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkEvalExpr(v_expr_2_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
if (lean_obj_tag(v___x_25_) == 0)
{
lean_object* v_a_26_; lean_object* v___x_27_; 
v_a_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_a_26_);
lean_dec_ref_known(v___x_25_, 1);
v___x_27_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_evalsAtAtoms(v_a_3_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_47_; 
v_a_28_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_47_ == 0)
{
v___x_30_ = v___x_27_;
v_isShared_31_ = v_isSharedCheck_47_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_27_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_47_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___y_33_; 
if (lean_obj_tag(v_a_28_) == 0)
{
lean_object* v___x_45_; 
lean_inc(v_a_26_);
v___x_45_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkRefl(v_a_26_);
v___y_33_ = v___x_45_;
goto v___jp_32_;
}
else
{
lean_object* v_val_46_; 
v_val_46_ = lean_ctor_get(v_a_28_, 0);
lean_inc(v_val_46_);
lean_dec_ref_known(v_a_28_, 1);
v___y_33_ = v_val_46_;
goto v___jp_32_;
}
v___jp_32_:
{
lean_object* v_width_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v_width_34_ = lean_ctor_get(v_lhs_4_, 0);
lean_inc(v_width_34_);
lean_dec_ref(v_lhs_4_);
lean_inc(v___x_6_);
v___x_35_ = l_Lean_mkConst(v_lemmaName_5_, v___x_6_);
v___x_36_ = l_Lean_mkNatLit(v_width_34_);
v___x_37_ = l_Lean_mkApp4(v___x_35_, v___x_36_, v_discrExpr_7_, v_lhsExpr_8_, v_rhsExpr_9_);
v___x_38_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___closed__0));
v___x_39_ = l_Lean_Name_mkStr6(v___x_10_, v___x_11_, v___x_12_, v___x_13_, v___x_14_, v___x_38_);
v___x_40_ = l_Lean_mkConst(v___x_39_, v___x_6_);
v___x_41_ = l_Lean_mkApp4(v___x_40_, v___x_15_, v_a_26_, v___y_33_, v___x_37_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_41_);
v___x_43_ = v___x_30_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
else
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
lean_dec(v_a_26_);
lean_dec_ref(v___x_15_);
lean_dec_ref(v___x_14_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v___x_12_);
lean_dec_ref(v___x_11_);
lean_dec_ref(v___x_10_);
lean_dec_ref(v_rhsExpr_9_);
lean_dec_ref(v_lhsExpr_8_);
lean_dec_ref(v_discrExpr_7_);
lean_dec(v___x_6_);
lean_dec(v_lemmaName_5_);
lean_dec_ref(v_lhs_4_);
v_a_48_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_27_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_27_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
else
{
lean_dec_ref(v___x_15_);
lean_dec_ref(v___x_14_);
lean_dec_ref(v___x_13_);
lean_dec_ref(v___x_12_);
lean_dec_ref(v___x_11_);
lean_dec_ref(v___x_10_);
lean_dec_ref(v_rhsExpr_9_);
lean_dec_ref(v_lhsExpr_8_);
lean_dec_ref(v_discrExpr_7_);
lean_dec(v___x_6_);
lean_dec(v_lemmaName_5_);
lean_dec_ref(v_lhs_4_);
lean_dec_ref(v_a_3_);
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_expr_56_ = _args[0];
lean_object* v_a_57_ = _args[1];
lean_object* v_lhs_58_ = _args[2];
lean_object* v_lemmaName_59_ = _args[3];
lean_object* v___x_60_ = _args[4];
lean_object* v_discrExpr_61_ = _args[5];
lean_object* v_lhsExpr_62_ = _args[6];
lean_object* v_rhsExpr_63_ = _args[7];
lean_object* v___x_64_ = _args[8];
lean_object* v___x_65_ = _args[9];
lean_object* v___x_66_ = _args[10];
lean_object* v___x_67_ = _args[11];
lean_object* v___x_68_ = _args[12];
lean_object* v___x_69_ = _args[13];
lean_object* v___y_70_ = _args[14];
lean_object* v___y_71_ = _args[15];
lean_object* v___y_72_ = _args[16];
lean_object* v___y_73_ = _args[17];
lean_object* v___y_74_ = _args[18];
lean_object* v___y_75_ = _args[19];
lean_object* v___y_76_ = _args[20];
lean_object* v___y_77_ = _args[21];
lean_object* v___y_78_ = _args[22];
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0(v_expr_56_, v_a_57_, v_lhs_58_, v_lemmaName_59_, v___x_60_, v_discrExpr_61_, v_lhsExpr_62_, v_rhsExpr_63_, v___x_64_, v___x_65_, v___x_66_, v___x_67_, v___x_68_, v___x_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_79_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_box(0);
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__2));
v___x_87_ = l_Lean_mkConst(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_box(0);
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__8));
v___x_99_ = l_Lean_mkConst(v___x_98_, v___x_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg(lean_object* v_discr_113_, lean_object* v_atom_114_, lean_object* v_lhs_115_, lean_object* v_discrExpr_116_, lean_object* v_atomExpr_117_, lean_object* v_lhsExpr_118_, lean_object* v_rhsExpr_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0));
v___x_127_ = lean_box(0);
v___x_128_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__3);
lean_inc_ref(v_discrExpr_116_);
v___x_129_ = l_Lean_Expr_app___override(v___x_128_, v_discrExpr_116_);
v___x_130_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_129_, v_a_120_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_132_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc_n(v_a_131_, 2);
lean_dec_ref_known(v___x_130_, 1);
lean_inc_ref(v_discrExpr_116_);
v___x_132_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkNot___redArg(v_discr_113_, v_discrExpr_116_, v_a_131_, v_a_120_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_a_133_);
lean_dec_ref_known(v___x_132_, 1);
v___x_134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6));
v___x_135_ = lean_unsigned_to_nat(2u);
v___x_136_ = lean_mk_empty_array_with_capacity(v___x_135_);
lean_inc_ref(v_atomExpr_117_);
v___x_137_ = lean_array_push(v___x_136_, v_atomExpr_117_);
lean_inc_ref(v_lhsExpr_118_);
v___x_138_ = lean_array_push(v___x_137_, v_lhsExpr_118_);
v___x_139_ = l_Lean_Meta_mkAppM(v___x_134_, v___x_138_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_141_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_140_);
lean_dec_ref_known(v___x_139_, 1);
v___x_141_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_a_140_, v_a_120_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; uint8_t v___x_143_; lean_object* v___x_144_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc_n(v_a_142_, 2);
lean_dec_ref_known(v___x_141_, 1);
v___x_143_ = 0;
lean_inc_ref(v_lhsExpr_118_);
lean_inc_ref(v_lhs_115_);
v___x_144_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(v_atom_114_, v_lhs_115_, v_atomExpr_117_, v_lhsExpr_118_, v___x_143_, v_a_142_, v_a_120_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_210_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_210_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_210_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_210_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
if (lean_obj_tag(v_a_145_) == 1)
{
lean_object* v_val_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_205_; 
lean_del_object(v___x_147_);
v_val_149_ = lean_ctor_get(v_a_145_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v_a_145_);
if (v_isSharedCheck_205_ == 0)
{
v___x_151_ = v_a_145_;
v_isShared_152_ = v_isSharedCheck_205_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_val_149_);
lean_dec(v_a_145_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_205_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(v_val_149_, v_a_120_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_a_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v___x_153_, 1);
v___x_155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9);
lean_inc(v_a_142_);
lean_inc(v_a_131_);
v___x_156_ = l_Lean_mkAppB(v___x_155_, v_a_131_, v_a_142_);
lean_inc_ref(v___x_156_);
v___x_157_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_156_, v_a_120_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; uint8_t v___x_159_; lean_object* v___x_160_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
v___x_159_ = 3;
v___x_160_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkGate___redArg(v_a_133_, v_a_154_, v_a_131_, v_a_142_, v___x_159_, v_a_158_, v_a_120_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_180_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_180_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_180_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_180_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_bvExpr_165_; lean_object* v_expr_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v_lemmaName_171_; lean_object* v___f_172_; lean_object* v___x_173_; lean_object* v___x_175_; 
v_bvExpr_165_ = lean_ctor_get(v_a_161_, 0);
lean_inc_ref(v_bvExpr_165_);
v_expr_166_ = lean_ctor_get(v_a_161_, 3);
lean_inc_ref_n(v_expr_166_, 2);
v___x_167_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10));
v___x_168_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11));
v___x_169_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12));
v___x_170_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13));
v_lemmaName_171_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__16));
v___f_172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___boxed), 23, 14);
lean_closure_set(v___f_172_, 0, v_expr_166_);
lean_closure_set(v___f_172_, 1, v_a_161_);
lean_closure_set(v___f_172_, 2, v_lhs_115_);
lean_closure_set(v___f_172_, 3, v_lemmaName_171_);
lean_closure_set(v___f_172_, 4, v___x_127_);
lean_closure_set(v___f_172_, 5, v_discrExpr_116_);
lean_closure_set(v___f_172_, 6, v_lhsExpr_118_);
lean_closure_set(v___f_172_, 7, v_rhsExpr_119_);
lean_closure_set(v___f_172_, 8, v___x_167_);
lean_closure_set(v___f_172_, 9, v___x_168_);
lean_closure_set(v___f_172_, 10, v___x_169_);
lean_closure_set(v___f_172_, 11, v___x_170_);
lean_closure_set(v___f_172_, 12, v___x_126_);
lean_closure_set(v___f_172_, 13, v___x_156_);
v___x_173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_173_, 0, v_bvExpr_165_);
lean_ctor_set(v___x_173_, 1, v___f_172_);
lean_ctor_set(v___x_173_, 2, v_expr_166_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_173_);
v___x_175_ = v___x_151_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_173_);
v___x_175_ = v_reuseFailAlloc_179_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_177_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_175_);
v___x_177_ = v___x_163_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
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
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref(v___x_156_);
lean_del_object(v___x_151_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
v_a_181_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_160_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_160_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v___x_156_);
lean_dec(v_a_154_);
lean_del_object(v___x_151_);
lean_dec(v_a_142_);
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
v_a_189_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_157_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_157_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_del_object(v___x_151_);
lean_dec(v_a_142_);
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
v_a_197_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_153_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_153_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
else
{
lean_object* v___x_206_; lean_object* v___x_208_; 
lean_dec(v_a_145_);
lean_dec(v_a_142_);
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
v___x_206_ = lean_box(0);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_206_);
v___x_208_ = v___x_147_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
lean_dec(v_a_142_);
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
v_a_211_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_144_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_144_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_atomExpr_117_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
lean_dec_ref(v_atom_114_);
v_a_219_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_141_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_141_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_dec(v_a_133_);
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_atomExpr_117_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
lean_dec_ref(v_atom_114_);
v_a_227_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_139_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_139_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec(v_a_131_);
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_atomExpr_117_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
lean_dec_ref(v_atom_114_);
v_a_235_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_132_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_132_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_rhsExpr_119_);
lean_dec_ref(v_lhsExpr_118_);
lean_dec_ref(v_atomExpr_117_);
lean_dec_ref(v_discrExpr_116_);
lean_dec_ref(v_lhs_115_);
lean_dec_ref(v_atom_114_);
lean_dec_ref(v_discr_113_);
v_a_243_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_130_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_130_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___boxed(lean_object* v_discr_251_, lean_object* v_atom_252_, lean_object* v_lhs_253_, lean_object* v_discrExpr_254_, lean_object* v_atomExpr_255_, lean_object* v_lhsExpr_256_, lean_object* v_rhsExpr_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg(v_discr_251_, v_atom_252_, v_lhs_253_, v_discrExpr_254_, v_atomExpr_255_, v_lhsExpr_256_, v_rhsExpr_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_a_258_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma(lean_object* v_discr_265_, lean_object* v_atom_266_, lean_object* v_lhs_267_, lean_object* v_discrExpr_268_, lean_object* v_atomExpr_269_, lean_object* v_lhsExpr_270_, lean_object* v_rhsExpr_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg(v_discr_265_, v_atom_266_, v_lhs_267_, v_discrExpr_268_, v_atomExpr_269_, v_lhsExpr_270_, v_rhsExpr_271_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___boxed(lean_object* v_discr_282_, lean_object* v_atom_283_, lean_object* v_lhs_284_, lean_object* v_discrExpr_285_, lean_object* v_atomExpr_286_, lean_object* v_lhsExpr_287_, lean_object* v_rhsExpr_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma(v_discr_282_, v_atom_283_, v_lhs_284_, v_discrExpr_285_, v_atomExpr_286_, v_lhsExpr_287_, v_rhsExpr_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0(lean_object* v_expr_299_, lean_object* v_a_300_, lean_object* v_rhs_301_, lean_object* v_lemmaName_302_, lean_object* v___x_303_, lean_object* v_discrExpr_304_, lean_object* v_lhsExpr_305_, lean_object* v_rhsExpr_306_, lean_object* v___x_307_, lean_object* v___x_308_, lean_object* v___x_309_, lean_object* v___x_310_, lean_object* v___x_311_, lean_object* v___x_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkEvalExpr(v_expr_299_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_324_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_evalsAtAtoms(v_a_300_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_344_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_344_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_344_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_344_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___y_330_; 
if (lean_obj_tag(v_a_325_) == 0)
{
lean_object* v___x_342_; 
lean_inc(v_a_323_);
v___x_342_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkRefl(v_a_323_);
v___y_330_ = v___x_342_;
goto v___jp_329_;
}
else
{
lean_object* v_val_343_; 
v_val_343_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_val_343_);
lean_dec_ref_known(v_a_325_, 1);
v___y_330_ = v_val_343_;
goto v___jp_329_;
}
v___jp_329_:
{
lean_object* v_width_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v_width_331_ = lean_ctor_get(v_rhs_301_, 0);
lean_inc(v_width_331_);
lean_dec_ref(v_rhs_301_);
lean_inc(v___x_303_);
v___x_332_ = l_Lean_mkConst(v_lemmaName_302_, v___x_303_);
v___x_333_ = l_Lean_mkNatLit(v_width_331_);
v___x_334_ = l_Lean_mkApp4(v___x_332_, v___x_333_, v_discrExpr_304_, v_lhsExpr_305_, v_rhsExpr_306_);
v___x_335_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___lam__0___closed__0));
v___x_336_ = l_Lean_Name_mkStr6(v___x_307_, v___x_308_, v___x_309_, v___x_310_, v___x_311_, v___x_335_);
v___x_337_ = l_Lean_mkConst(v___x_336_, v___x_303_);
v___x_338_ = l_Lean_mkApp4(v___x_337_, v___x_312_, v_a_323_, v___y_330_, v___x_334_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_338_);
v___x_340_ = v___x_327_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
lean_dec(v_a_323_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_311_);
lean_dec_ref(v___x_310_);
lean_dec_ref(v___x_309_);
lean_dec_ref(v___x_308_);
lean_dec_ref(v___x_307_);
lean_dec_ref(v_rhsExpr_306_);
lean_dec_ref(v_lhsExpr_305_);
lean_dec_ref(v_discrExpr_304_);
lean_dec(v___x_303_);
lean_dec(v_lemmaName_302_);
lean_dec_ref(v_rhs_301_);
v_a_345_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_324_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_324_);
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
else
{
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_311_);
lean_dec_ref(v___x_310_);
lean_dec_ref(v___x_309_);
lean_dec_ref(v___x_308_);
lean_dec_ref(v___x_307_);
lean_dec_ref(v_rhsExpr_306_);
lean_dec_ref(v_lhsExpr_305_);
lean_dec_ref(v_discrExpr_304_);
lean_dec(v___x_303_);
lean_dec(v_lemmaName_302_);
lean_dec_ref(v_rhs_301_);
lean_dec_ref(v_a_300_);
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_expr_353_ = _args[0];
lean_object* v_a_354_ = _args[1];
lean_object* v_rhs_355_ = _args[2];
lean_object* v_lemmaName_356_ = _args[3];
lean_object* v___x_357_ = _args[4];
lean_object* v_discrExpr_358_ = _args[5];
lean_object* v_lhsExpr_359_ = _args[6];
lean_object* v_rhsExpr_360_ = _args[7];
lean_object* v___x_361_ = _args[8];
lean_object* v___x_362_ = _args[9];
lean_object* v___x_363_ = _args[10];
lean_object* v___x_364_ = _args[11];
lean_object* v___x_365_ = _args[12];
lean_object* v___x_366_ = _args[13];
lean_object* v___y_367_ = _args[14];
lean_object* v___y_368_ = _args[15];
lean_object* v___y_369_ = _args[16];
lean_object* v___y_370_ = _args[17];
lean_object* v___y_371_ = _args[18];
lean_object* v___y_372_ = _args[19];
lean_object* v___y_373_ = _args[20];
lean_object* v___y_374_ = _args[21];
lean_object* v___y_375_ = _args[22];
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0(v_expr_353_, v_a_354_, v_rhs_355_, v_lemmaName_356_, v___x_357_, v_discrExpr_358_, v_lhsExpr_359_, v_rhsExpr_360_, v___x_361_, v___x_362_, v___x_363_, v___x_364_, v___x_365_, v___x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg(lean_object* v_discr_385_, lean_object* v_atom_386_, lean_object* v_rhs_387_, lean_object* v_discrExpr_388_, lean_object* v_atomExpr_389_, lean_object* v_lhsExpr_390_, lean_object* v_rhsExpr_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_398_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__6));
v___x_399_ = lean_unsigned_to_nat(2u);
v___x_400_ = lean_mk_empty_array_with_capacity(v___x_399_);
lean_inc_ref(v_atomExpr_389_);
v___x_401_ = lean_array_push(v___x_400_, v_atomExpr_389_);
lean_inc_ref(v_rhsExpr_391_);
v___x_402_ = lean_array_push(v___x_401_, v_rhsExpr_391_);
v___x_403_ = l_Lean_Meta_mkAppM(v___x_398_, v___x_402_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_405_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v___x_405_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_a_404_, v_a_392_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; uint8_t v___x_407_; lean_object* v___x_408_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc_n(v_a_406_, 2);
lean_dec_ref_known(v___x_405_, 1);
v___x_407_ = 0;
lean_inc_ref(v_rhsExpr_391_);
lean_inc_ref(v_rhs_387_);
v___x_408_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(v_atom_386_, v_rhs_387_, v_atomExpr_389_, v_rhsExpr_391_, v___x_407_, v_a_406_, v_a_392_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_476_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_476_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_476_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_476_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
if (lean_obj_tag(v_a_409_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_471_; 
lean_del_object(v___x_411_);
v_val_413_ = lean_ctor_get(v_a_409_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v_a_409_);
if (v_isSharedCheck_471_ == 0)
{
v___x_415_ = v_a_409_;
v_isShared_416_ = v_isSharedCheck_471_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_val_413_);
lean_dec(v_a_409_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_471_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(v_val_413_, v_a_392_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__0));
v___x_420_ = lean_box(0);
v___x_421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__9);
lean_inc(v_a_406_);
lean_inc_ref(v_discrExpr_388_);
v___x_422_ = l_Lean_mkAppB(v___x_421_, v_discrExpr_388_, v_a_406_);
lean_inc_ref(v___x_422_);
v___x_423_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_422_, v_a_392_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
v___x_425_ = 3;
lean_inc_ref(v_discrExpr_388_);
v___x_426_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkGate___redArg(v_discr_385_, v_a_418_, v_discrExpr_388_, v_a_406_, v___x_425_, v_a_424_, v_a_392_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_446_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_446_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_446_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_446_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_bvExpr_431_; lean_object* v_expr_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v_lemmaName_437_; lean_object* v___f_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v_bvExpr_431_ = lean_ctor_get(v_a_427_, 0);
lean_inc_ref(v_bvExpr_431_);
v_expr_432_ = lean_ctor_get(v_a_427_, 3);
lean_inc_ref_n(v_expr_432_, 2);
v___x_433_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__10));
v___x_434_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__11));
v___x_435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__12));
v___x_436_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg___closed__13));
v_lemmaName_437_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___closed__1));
v___f_438_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___lam__0___boxed), 23, 14);
lean_closure_set(v___f_438_, 0, v_expr_432_);
lean_closure_set(v___f_438_, 1, v_a_427_);
lean_closure_set(v___f_438_, 2, v_rhs_387_);
lean_closure_set(v___f_438_, 3, v_lemmaName_437_);
lean_closure_set(v___f_438_, 4, v___x_420_);
lean_closure_set(v___f_438_, 5, v_discrExpr_388_);
lean_closure_set(v___f_438_, 6, v_lhsExpr_390_);
lean_closure_set(v___f_438_, 7, v_rhsExpr_391_);
lean_closure_set(v___f_438_, 8, v___x_433_);
lean_closure_set(v___f_438_, 9, v___x_434_);
lean_closure_set(v___f_438_, 10, v___x_435_);
lean_closure_set(v___f_438_, 11, v___x_436_);
lean_closure_set(v___f_438_, 12, v___x_419_);
lean_closure_set(v___f_438_, 13, v___x_422_);
v___x_439_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_439_, 0, v_bvExpr_431_);
lean_ctor_set(v___x_439_, 1, v___f_438_);
lean_ctor_set(v___x_439_, 2, v_expr_432_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_439_);
v___x_441_ = v___x_415_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_445_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_443_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_441_);
v___x_443_ = v___x_429_;
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
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref(v___x_422_);
lean_del_object(v___x_415_);
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
v_a_447_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_426_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_426_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
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
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_dec_ref(v___x_422_);
lean_dec(v_a_418_);
lean_del_object(v___x_415_);
lean_dec(v_a_406_);
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_discr_385_);
v_a_455_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_423_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_423_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
lean_del_object(v___x_415_);
lean_dec(v_a_406_);
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_discr_385_);
v_a_463_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_417_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_417_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
else
{
lean_object* v___x_472_; lean_object* v___x_474_; 
lean_dec(v_a_409_);
lean_dec(v_a_406_);
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_discr_385_);
v___x_472_ = lean_box(0);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_472_);
v___x_474_ = v___x_411_;
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
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec(v_a_406_);
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_discr_385_);
v_a_477_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_408_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_408_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_atomExpr_389_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_atom_386_);
lean_dec_ref(v_discr_385_);
v_a_485_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_405_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_405_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
lean_dec_ref(v_rhsExpr_391_);
lean_dec_ref(v_lhsExpr_390_);
lean_dec_ref(v_atomExpr_389_);
lean_dec_ref(v_discrExpr_388_);
lean_dec_ref(v_rhs_387_);
lean_dec_ref(v_atom_386_);
lean_dec_ref(v_discr_385_);
v_a_493_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_403_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_403_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg___boxed(lean_object* v_discr_501_, lean_object* v_atom_502_, lean_object* v_rhs_503_, lean_object* v_discrExpr_504_, lean_object* v_atomExpr_505_, lean_object* v_lhsExpr_506_, lean_object* v_rhsExpr_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg(v_discr_501_, v_atom_502_, v_rhs_503_, v_discrExpr_504_, v_atomExpr_505_, v_lhsExpr_506_, v_rhsExpr_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
lean_dec(v_a_512_);
lean_dec_ref(v_a_511_);
lean_dec(v_a_510_);
lean_dec_ref(v_a_509_);
lean_dec(v_a_508_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma(lean_object* v_discr_515_, lean_object* v_atom_516_, lean_object* v_rhs_517_, lean_object* v_discrExpr_518_, lean_object* v_atomExpr_519_, lean_object* v_lhsExpr_520_, lean_object* v_rhsExpr_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg(v_discr_515_, v_atom_516_, v_rhs_517_, v_discrExpr_518_, v_atomExpr_519_, v_lhsExpr_520_, v_rhsExpr_521_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___boxed(lean_object* v_discr_532_, lean_object* v_atom_533_, lean_object* v_rhs_534_, lean_object* v_discrExpr_535_, lean_object* v_atomExpr_536_, lean_object* v_lhsExpr_537_, lean_object* v_rhsExpr_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma(v_discr_532_, v_atom_533_, v_rhs_534_, v_discrExpr_535_, v_atomExpr_536_, v_lhsExpr_537_, v_rhsExpr_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(lean_object* v_discr_549_, lean_object* v_atom_550_, lean_object* v_lhs_551_, lean_object* v_rhs_552_, lean_object* v_discrExpr_553_, lean_object* v_atomExpr_554_, lean_object* v_lhsExpr_555_, lean_object* v_rhsExpr_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
lean_object* v___x_564_; 
lean_inc_ref(v_rhsExpr_556_);
lean_inc_ref(v_lhsExpr_555_);
lean_inc_ref(v_atomExpr_554_);
lean_inc_ref(v_discrExpr_553_);
lean_inc_ref(v_atom_550_);
lean_inc_ref(v_discr_549_);
v___x_564_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondTrueLemma___redArg(v_discr_549_, v_atom_550_, v_lhs_551_, v_discrExpr_553_, v_atomExpr_554_, v_lhsExpr_555_, v_rhsExpr_556_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_595_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_595_ == 0)
{
v___x_567_ = v___x_564_;
v_isShared_568_ = v_isSharedCheck_595_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_564_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_595_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
if (lean_obj_tag(v_a_565_) == 1)
{
lean_object* v_val_569_; lean_object* v___x_570_; 
lean_del_object(v___x_567_);
v_val_569_ = lean_ctor_get(v_a_565_, 0);
lean_inc(v_val_569_);
lean_dec_ref_known(v_a_565_, 1);
v___x_570_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_addLemma___redArg(v_val_569_, v_a_557_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v___x_571_; 
lean_dec_ref_known(v___x_570_, 1);
v___x_571_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas_0__Lean_Meta_Tactic_BVDecide_addCondLemmas_mkCondFalseLemma___redArg(v_discr_549_, v_atom_550_, v_rhs_552_, v_discrExpr_553_, v_atomExpr_554_, v_lhsExpr_555_, v_rhsExpr_556_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_582_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_582_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
if (lean_obj_tag(v_a_572_) == 1)
{
lean_object* v_val_576_; lean_object* v___x_577_; 
lean_del_object(v___x_574_);
v_val_576_ = lean_ctor_get(v_a_572_, 0);
lean_inc(v_val_576_);
lean_dec_ref_known(v_a_572_, 1);
v___x_577_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_addLemma___redArg(v_val_576_, v_a_557_);
return v___x_577_;
}
else
{
lean_object* v___x_578_; lean_object* v___x_580_; 
lean_dec(v_a_572_);
v___x_578_ = lean_box(0);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_578_);
v___x_580_ = v___x_574_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_a_583_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_571_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_571_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
else
{
lean_dec_ref(v_rhsExpr_556_);
lean_dec_ref(v_lhsExpr_555_);
lean_dec_ref(v_atomExpr_554_);
lean_dec_ref(v_discrExpr_553_);
lean_dec_ref(v_rhs_552_);
lean_dec_ref(v_atom_550_);
lean_dec_ref(v_discr_549_);
return v___x_570_;
}
}
else
{
lean_object* v___x_591_; lean_object* v___x_593_; 
lean_dec(v_a_565_);
lean_dec_ref(v_rhsExpr_556_);
lean_dec_ref(v_lhsExpr_555_);
lean_dec_ref(v_atomExpr_554_);
lean_dec_ref(v_discrExpr_553_);
lean_dec_ref(v_rhs_552_);
lean_dec_ref(v_atom_550_);
lean_dec_ref(v_discr_549_);
v___x_591_ = lean_box(0);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_591_);
v___x_593_ = v___x_567_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec_ref(v_rhsExpr_556_);
lean_dec_ref(v_lhsExpr_555_);
lean_dec_ref(v_atomExpr_554_);
lean_dec_ref(v_discrExpr_553_);
lean_dec_ref(v_rhs_552_);
lean_dec_ref(v_atom_550_);
lean_dec_ref(v_discr_549_);
v_a_596_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_564_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_564_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg___boxed(lean_object* v_discr_604_, lean_object* v_atom_605_, lean_object* v_lhs_606_, lean_object* v_rhs_607_, lean_object* v_discrExpr_608_, lean_object* v_atomExpr_609_, lean_object* v_lhsExpr_610_, lean_object* v_rhsExpr_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(v_discr_604_, v_atom_605_, v_lhs_606_, v_rhs_607_, v_discrExpr_608_, v_atomExpr_609_, v_lhsExpr_610_, v_rhsExpr_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec(v_a_613_);
lean_dec(v_a_612_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas(lean_object* v_discr_620_, lean_object* v_atom_621_, lean_object* v_lhs_622_, lean_object* v_rhs_623_, lean_object* v_discrExpr_624_, lean_object* v_atomExpr_625_, lean_object* v_lhsExpr_626_, lean_object* v_rhsExpr_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(v_discr_620_, v_atom_621_, v_lhs_622_, v_rhs_623_, v_discrExpr_624_, v_atomExpr_625_, v_lhsExpr_626_, v_rhsExpr_627_, v_a_628_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___boxed(lean_object** _args){
lean_object* v_discr_639_ = _args[0];
lean_object* v_atom_640_ = _args[1];
lean_object* v_lhs_641_ = _args[2];
lean_object* v_rhs_642_ = _args[3];
lean_object* v_discrExpr_643_ = _args[4];
lean_object* v_atomExpr_644_ = _args[5];
lean_object* v_lhsExpr_645_ = _args[6];
lean_object* v_rhsExpr_646_ = _args[7];
lean_object* v_a_647_ = _args[8];
lean_object* v_a_648_ = _args[9];
lean_object* v_a_649_ = _args[10];
lean_object* v_a_650_ = _args[11];
lean_object* v_a_651_ = _args[12];
lean_object* v_a_652_ = _args[13];
lean_object* v_a_653_ = _args[14];
lean_object* v_a_654_ = _args[15];
lean_object* v_a_655_ = _args[16];
lean_object* v_a_656_ = _args[17];
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Meta_Tactic_BVDecide_addCondLemmas(v_discr_639_, v_atom_640_, v_lhs_641_, v_rhs_642_, v_discrExpr_643_, v_atomExpr_644_, v_lhsExpr_645_, v_rhsExpr_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
lean_dec(v_a_655_);
lean_dec_ref(v_a_654_);
lean_dec(v_a_653_);
lean_dec_ref(v_a_652_);
lean_dec(v_a_651_);
lean_dec_ref(v_a_650_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
lean_dec(v_a_647_);
return v_res_657_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(builtin);
}
#ifdef __cplusplus
}
#endif
