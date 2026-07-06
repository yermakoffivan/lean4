// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVPred
// Imports: public import Lean.Meta.Tactic.BVDecide.Reflect.Basic import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVExpr import Lean.Meta.Sym.InferType
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
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkAtom(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ofBool_congr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofBool"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3_value),LEAN_SCALAR_PTR_LITERAL(121, 35, 113, 77, 117, 41, 40, 246)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BVPred"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__9_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getLsbD"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__9_value),LEAN_SCALAR_PTR_LITERAL(12, 253, 4, 25, 159, 236, 140, 252)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__10_value),LEAN_SCALAR_PTR_LITERAL(233, 227, 220, 143, 67, 138, 133, 64)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "beq_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 253, 163, 204, 112, 81, 92, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ult_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__2_value),LEAN_SCALAR_PTR_LITERAL(147, 192, 184, 158, 23, 221, 204, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_M_simplifyBinaryProof_x27___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bin"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__9_value),LEAN_SCALAR_PTR_LITERAL(12, 253, 4, 25, 159, 236, 140, 252)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 213, 64, 10, 224, 53, 8, 130)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "BVBinPred"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 174, 16, 156, 11, 3, 67, 199)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(110, 124, 151, 202, 173, 235, 72, 127)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ult"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 174, 16, 156, 11, 3, 67, 199)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(64, 63, 119, 185, 54, 210, 178, 92)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "getLsbD_congr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(lean_object* v_width_3_, lean_object* v_expr_4_, lean_object* v_a_5_, lean_object* v___x_6_, lean_object* v___x_7_, lean_object* v___x_8_, lean_object* v___x_9_, lean_object* v___x_10_, lean_object* v_origExpr_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v___x_21_; 
lean_inc(v_width_3_);
v___x_21_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_3_, v_expr_4_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v_a_22_; lean_object* v___x_23_; 
v_a_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc(v_a_22_);
lean_dec_ref_known(v___x_21_, 1);
v___x_23_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_a_5_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_);
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_41_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_41_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_41_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_41_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___y_29_; 
if (lean_obj_tag(v_a_24_) == 0)
{
lean_object* v___x_39_; 
lean_inc(v_a_22_);
v___x_39_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v_width_3_, v_a_22_);
v___y_29_ = v___x_39_;
goto v___jp_28_;
}
else
{
lean_object* v_val_40_; 
lean_dec(v_width_3_);
v_val_40_ = lean_ctor_get(v_a_24_, 0);
lean_inc(v_val_40_);
lean_dec_ref_known(v_a_24_, 1);
v___y_29_ = v_val_40_;
goto v___jp_28_;
}
v___jp_28_:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_30_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0));
v___x_31_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__1));
v___x_32_ = l_Lean_Name_mkStr6(v___x_6_, v___x_7_, v___x_8_, v___x_30_, v___x_9_, v___x_31_);
v___x_33_ = l_Lean_mkConst(v___x_32_, v___x_10_);
v___x_34_ = l_Lean_mkApp3(v___x_33_, v_origExpr_11_, v_a_22_, v___y_29_);
v___x_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 0, v___x_35_);
v___x_37_ = v___x_26_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
else
{
lean_dec(v_a_22_);
lean_dec_ref(v_origExpr_11_);
lean_dec(v___x_10_);
lean_dec_ref(v___x_9_);
lean_dec_ref(v___x_8_);
lean_dec_ref(v___x_7_);
lean_dec_ref(v___x_6_);
lean_dec(v_width_3_);
return v___x_23_;
}
}
else
{
lean_object* v_a_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_49_; 
lean_dec_ref(v_origExpr_11_);
lean_dec(v___x_10_);
lean_dec_ref(v___x_9_);
lean_dec_ref(v___x_8_);
lean_dec_ref(v___x_7_);
lean_dec_ref(v___x_6_);
lean_dec_ref(v_a_5_);
lean_dec(v_width_3_);
v_a_42_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_49_ == 0)
{
v___x_44_ = v___x_21_;
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_a_42_);
lean_dec(v___x_21_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_49_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_47_; 
if (v_isShared_45_ == 0)
{
v___x_47_ = v___x_44_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_a_42_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed(lean_object** _args){
lean_object* v_width_50_ = _args[0];
lean_object* v_expr_51_ = _args[1];
lean_object* v_a_52_ = _args[2];
lean_object* v___x_53_ = _args[3];
lean_object* v___x_54_ = _args[4];
lean_object* v___x_55_ = _args[5];
lean_object* v___x_56_ = _args[6];
lean_object* v___x_57_ = _args[7];
lean_object* v_origExpr_58_ = _args[8];
lean_object* v___y_59_ = _args[9];
lean_object* v___y_60_ = _args[10];
lean_object* v___y_61_ = _args[11];
lean_object* v___y_62_ = _args[12];
lean_object* v___y_63_ = _args[13];
lean_object* v___y_64_ = _args[14];
lean_object* v___y_65_ = _args[15];
lean_object* v___y_66_ = _args[16];
lean_object* v___y_67_ = _args[17];
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(v_width_50_, v_expr_51_, v_a_52_, v___x_53_, v___x_54_, v___x_55_, v___x_56_, v___x_57_, v_origExpr_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
return v_res_68_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_box(0);
v___x_78_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4));
v___x_79_ = l_Lean_mkConst(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = lean_box(0);
v___x_92_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__11));
v___x_93_ = l_Lean_mkConst(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = l_Lean_mkNatLit(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = l_Lean_mkNatLit(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(lean_object* v_origExpr_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_){
_start:
{
lean_object* v___x_108_; 
lean_inc_ref(v_origExpr_98_);
v___x_108_ = l_Lean_Meta_Sym_inferType___redArg(v_origExpr_98_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_178_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_178_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_178_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_178_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lean_Expr_cleanupAnnotations(v_a_109_);
v___x_114_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1));
v___x_115_ = l_Lean_Expr_isConstOf(v___x_113_, v___x_114_);
lean_dec_ref(v___x_113_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_118_; 
lean_dec_ref(v_origExpr_98_);
v___x_116_ = lean_box(0);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_116_);
v___x_118_ = v___x_111_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
lean_del_object(v___x_111_);
v___x_120_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2));
v___x_121_ = lean_box(0);
v___x_122_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5);
lean_inc_ref(v_origExpr_98_);
v___x_123_ = l_Lean_Expr_app___override(v___x_122_, v_origExpr_98_);
v___x_124_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_123_, v_a_102_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_126_; uint8_t v___x_127_; lean_object* v___x_128_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref_known(v___x_124_, 1);
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = 0;
v___x_128_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkAtom(v_a_125_, v___x_126_, v___x_127_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_object* v_a_129_; lean_object* v_width_130_; lean_object* v_bvExpr_131_; lean_object* v_expr_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_a_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_a_129_);
lean_dec_ref_known(v___x_128_, 1);
v_width_130_ = lean_ctor_get(v_a_129_, 0);
lean_inc_n(v_width_130_, 2);
v_bvExpr_131_ = lean_ctor_get(v_a_129_, 1);
v_expr_132_ = lean_ctor_get(v_a_129_, 4);
lean_inc_ref_n(v_expr_132_, 2);
v___x_133_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_bvExpr_131_);
v___x_134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_134_, 0, v_width_130_);
lean_ctor_set(v___x_134_, 1, v_bvExpr_131_);
lean_ctor_set(v___x_134_, 2, v___x_133_);
v___x_135_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6));
v___x_136_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7));
v___x_137_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8));
v___x_138_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12);
v___x_139_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__13);
v___x_140_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__14);
v___x_141_ = l_Lean_mkApp3(v___x_138_, v___x_139_, v_expr_132_, v___x_140_);
v___x_142_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_141_, v_a_102_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_153_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_153_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_153_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_153_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___f_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_151_; 
lean_inc_ref(v_origExpr_98_);
v___f_147_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed), 18, 9);
lean_closure_set(v___f_147_, 0, v_width_130_);
lean_closure_set(v___f_147_, 1, v_expr_132_);
lean_closure_set(v___f_147_, 2, v_a_129_);
lean_closure_set(v___f_147_, 3, v___x_135_);
lean_closure_set(v___f_147_, 4, v___x_136_);
lean_closure_set(v___f_147_, 5, v___x_137_);
lean_closure_set(v___f_147_, 6, v___x_120_);
lean_closure_set(v___f_147_, 7, v___x_121_);
lean_closure_set(v___f_147_, 8, v_origExpr_98_);
v___x_148_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_148_, 0, v___x_134_);
lean_ctor_set(v___x_148_, 1, v_origExpr_98_);
lean_ctor_set(v___x_148_, 2, v___f_147_);
lean_ctor_set(v___x_148_, 3, v_a_143_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_149_);
v___x_151_ = v___x_145_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref_known(v___x_134_, 3);
lean_dec_ref(v_expr_132_);
lean_dec(v_width_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_origExpr_98_);
v_a_154_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_142_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_142_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
lean_dec_ref(v_origExpr_98_);
v_a_162_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_128_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_128_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
lean_dec_ref(v_origExpr_98_);
v_a_170_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_124_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_124_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec_ref(v_origExpr_98_);
v_a_179_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_108_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_108_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___boxed(lean_object* v_origExpr_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(v_origExpr_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred(uint8_t v_pred_214_){
_start:
{
if (v_pred_214_ == 0)
{
lean_object* v___x_215_; 
v___x_215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__1));
return v___x_215_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___closed__3));
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred___boxed(lean_object* v_pred_217_){
_start:
{
uint8_t v_pred_boxed_218_; lean_object* v_res_219_; 
v_pred_boxed_218_ = lean_unbox(v_pred_217_);
v_res_219_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred(v_pred_boxed_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_M_simplifyBinaryProof_x27___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_spec__0(lean_object* v___x_220_, lean_object* v_fst_221_, lean_object* v_fproof_222_, lean_object* v_snd_223_, lean_object* v_sproof_224_){
_start:
{
if (lean_obj_tag(v_fproof_222_) == 0)
{
lean_dec_ref(v_snd_223_);
if (lean_obj_tag(v_sproof_224_) == 0)
{
lean_object* v___x_225_; 
lean_dec_ref(v_fst_221_);
lean_dec(v___x_220_);
v___x_225_ = lean_box(0);
return v___x_225_;
}
else
{
lean_object* v_val_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_235_; 
v_val_226_ = lean_ctor_get(v_sproof_224_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_sproof_224_);
if (v_isSharedCheck_235_ == 0)
{
v___x_228_ = v_sproof_224_;
v_isShared_229_ = v_isSharedCheck_235_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_val_226_);
lean_dec(v_sproof_224_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_235_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_230_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_220_, v_fst_221_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v_val_226_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_231_);
v___x_233_ = v___x_228_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
else
{
lean_dec_ref(v_fst_221_);
if (lean_obj_tag(v_sproof_224_) == 0)
{
lean_object* v_val_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_245_; 
v_val_236_ = lean_ctor_get(v_fproof_222_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_fproof_222_);
if (v_isSharedCheck_245_ == 0)
{
v___x_238_ = v_fproof_222_;
v_isShared_239_ = v_isSharedCheck_245_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_val_236_);
lean_dec(v_fproof_222_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_245_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_240_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_220_, v_snd_223_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_val_236_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_241_);
v___x_243_ = v___x_238_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
else
{
lean_object* v_val_246_; lean_object* v_val_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v_snd_223_);
lean_dec(v___x_220_);
v_val_246_ = lean_ctor_get(v_fproof_222_, 0);
lean_inc(v_val_246_);
lean_dec_ref_known(v_fproof_222_, 1);
v_val_247_ = lean_ctor_get(v_sproof_224_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_sproof_224_);
if (v_isSharedCheck_255_ == 0)
{
v___x_249_ = v_sproof_224_;
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_val_247_);
lean_dec(v_sproof_224_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v_val_246_);
lean_ctor_set(v___x_251_, 1, v_val_247_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_251_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0(lean_object* v_width_256_, lean_object* v_expr_257_, lean_object* v_width_258_, lean_object* v_expr_259_, lean_object* v_lhs_260_, lean_object* v_rhs_261_, lean_object* v_congrThm_262_, lean_object* v___x_263_, lean_object* v___x_264_, lean_object* v_lhsExpr_265_, lean_object* v_rhsExpr_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v___x_276_; 
lean_inc(v_width_256_);
v___x_276_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_256_, v_expr_257_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
v___x_278_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_258_, v_expr_259_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_280_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_278_, 1);
v___x_280_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_lhs_260_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_rhs_261_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_307_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_307_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_307_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_307_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; 
lean_inc(v_a_279_);
lean_inc(v_a_277_);
v___x_287_ = l_Lean_Meta_Tactic_BVDecide_M_simplifyBinaryProof_x27___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_spec__0(v_width_256_, v_a_277_, v_a_281_, v_a_279_, v_a_283_);
if (lean_obj_tag(v___x_287_) == 1)
{
lean_object* v_val_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_302_; 
v_val_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_302_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_302_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_val_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_302_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v_fst_292_; lean_object* v_snd_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v_fst_292_ = lean_ctor_get(v_val_288_, 0);
lean_inc(v_fst_292_);
v_snd_293_ = lean_ctor_get(v_val_288_, 1);
lean_inc(v_snd_293_);
lean_dec(v_val_288_);
v___x_294_ = l_Lean_mkConst(v_congrThm_262_, v___x_263_);
v___x_295_ = l_Lean_mkApp7(v___x_294_, v___x_264_, v_lhsExpr_265_, v_rhsExpr_266_, v_a_277_, v_a_279_, v_fst_292_, v_snd_293_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_295_);
v___x_297_ = v___x_290_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_301_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_299_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_297_);
v___x_299_ = v___x_285_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
else
{
lean_object* v___x_303_; lean_object* v___x_305_; 
lean_dec(v___x_287_);
lean_dec(v_a_279_);
lean_dec(v_a_277_);
lean_dec_ref(v_rhsExpr_266_);
lean_dec_ref(v_lhsExpr_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v_congrThm_262_);
v___x_303_ = lean_box(0);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_303_);
v___x_305_ = v___x_285_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_dec(v_a_281_);
lean_dec(v_a_279_);
lean_dec(v_a_277_);
lean_dec_ref(v_rhsExpr_266_);
lean_dec_ref(v_lhsExpr_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v_congrThm_262_);
lean_dec(v_width_256_);
return v___x_282_;
}
}
else
{
lean_dec(v_a_279_);
lean_dec(v_a_277_);
lean_dec_ref(v_rhsExpr_266_);
lean_dec_ref(v_lhsExpr_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v_congrThm_262_);
lean_dec_ref(v_rhs_261_);
lean_dec(v_width_256_);
return v___x_280_;
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_a_277_);
lean_dec_ref(v_rhsExpr_266_);
lean_dec_ref(v_lhsExpr_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v_congrThm_262_);
lean_dec_ref(v_rhs_261_);
lean_dec_ref(v_lhs_260_);
lean_dec(v_width_256_);
v_a_308_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_278_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_278_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec_ref(v_rhsExpr_266_);
lean_dec_ref(v_lhsExpr_265_);
lean_dec_ref(v___x_264_);
lean_dec(v___x_263_);
lean_dec(v_congrThm_262_);
lean_dec_ref(v_rhs_261_);
lean_dec_ref(v_lhs_260_);
lean_dec_ref(v_expr_259_);
lean_dec(v_width_258_);
lean_dec(v_width_256_);
v_a_316_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_276_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_276_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_width_324_ = _args[0];
lean_object* v_expr_325_ = _args[1];
lean_object* v_width_326_ = _args[2];
lean_object* v_expr_327_ = _args[3];
lean_object* v_lhs_328_ = _args[4];
lean_object* v_rhs_329_ = _args[5];
lean_object* v_congrThm_330_ = _args[6];
lean_object* v___x_331_ = _args[7];
lean_object* v___x_332_ = _args[8];
lean_object* v_lhsExpr_333_ = _args[9];
lean_object* v_rhsExpr_334_ = _args[10];
lean_object* v___y_335_ = _args[11];
lean_object* v___y_336_ = _args[12];
lean_object* v___y_337_ = _args[13];
lean_object* v___y_338_ = _args[14];
lean_object* v___y_339_ = _args[15];
lean_object* v___y_340_ = _args[16];
lean_object* v___y_341_ = _args[17];
lean_object* v___y_342_ = _args[18];
lean_object* v___y_343_ = _args[19];
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0(v_width_324_, v_expr_325_, v_width_326_, v_expr_327_, v_lhs_328_, v_rhs_329_, v_congrThm_330_, v___x_331_, v___x_332_, v_lhsExpr_333_, v_rhsExpr_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_344_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_box(0);
v___x_353_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__1));
v___x_354_ = l_Lean_mkConst(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = lean_box(0);
v___x_364_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__5));
v___x_365_ = l_Lean_mkConst(v___x_364_, v___x_363_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_box(0);
v___x_374_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__8));
v___x_375_ = l_Lean_mkConst(v___x_374_, v___x_373_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(lean_object* v_lhs_376_, lean_object* v_rhs_377_, lean_object* v_lhsExpr_378_, lean_object* v_rhsExpr_379_, uint8_t v_pred_380_, lean_object* v_origExpr_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_width_384_; lean_object* v_bvExpr_385_; lean_object* v_expr_386_; lean_object* v_width_387_; lean_object* v_bvExpr_388_; lean_object* v_expr_389_; uint8_t v___x_390_; 
v_width_384_ = lean_ctor_get(v_lhs_376_, 0);
lean_inc(v_width_384_);
v_bvExpr_385_ = lean_ctor_get(v_lhs_376_, 1);
v_expr_386_ = lean_ctor_get(v_lhs_376_, 4);
lean_inc_ref(v_expr_386_);
v_width_387_ = lean_ctor_get(v_rhs_377_, 0);
lean_inc(v_width_387_);
v_bvExpr_388_ = lean_ctor_get(v_rhs_377_, 1);
v_expr_389_ = lean_ctor_get(v_rhs_377_, 4);
lean_inc_ref(v_expr_389_);
v___x_390_ = lean_nat_dec_eq(v_width_384_, v_width_387_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; 
lean_dec_ref(v_expr_389_);
lean_dec(v_width_387_);
lean_dec_ref(v_expr_386_);
lean_dec(v_width_384_);
lean_dec_ref(v_origExpr_381_);
lean_dec_ref(v_rhsExpr_379_);
lean_dec_ref(v_lhsExpr_378_);
lean_dec_ref(v_rhs_377_);
lean_dec_ref(v_lhs_376_);
v___x_391_ = lean_box(0);
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
return v___x_392_;
}
else
{
lean_object* v_congrThm_393_; lean_object* v_bvExpr_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___f_398_; lean_object* v___y_400_; 
v_congrThm_393_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred_congrThmOfBinPred(v_pred_380_);
lean_inc_ref(v_bvExpr_388_);
lean_inc_ref(v_bvExpr_385_);
lean_inc_n(v_width_384_, 2);
v_bvExpr_394_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_bvExpr_394_, 0, v_width_384_);
lean_ctor_set(v_bvExpr_394_, 1, v_bvExpr_385_);
lean_ctor_set(v_bvExpr_394_, 2, v_bvExpr_388_);
lean_ctor_set_uint8(v_bvExpr_394_, sizeof(void*)*3, v_pred_380_);
v___x_395_ = lean_box(0);
v___x_396_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__2);
v___x_397_ = l_Lean_mkNatLit(v_width_384_);
lean_inc_ref(v___x_397_);
lean_inc_ref(v_expr_389_);
lean_inc_ref(v_expr_386_);
v___f_398_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___lam__0___boxed), 20, 11);
lean_closure_set(v___f_398_, 0, v_width_384_);
lean_closure_set(v___f_398_, 1, v_expr_386_);
lean_closure_set(v___f_398_, 2, v_width_387_);
lean_closure_set(v___f_398_, 3, v_expr_389_);
lean_closure_set(v___f_398_, 4, v_lhs_376_);
lean_closure_set(v___f_398_, 5, v_rhs_377_);
lean_closure_set(v___f_398_, 6, v_congrThm_393_);
lean_closure_set(v___f_398_, 7, v___x_395_);
lean_closure_set(v___f_398_, 8, v___x_397_);
lean_closure_set(v___f_398_, 9, v_lhsExpr_378_);
lean_closure_set(v___f_398_, 10, v_rhsExpr_379_);
if (v_pred_380_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__6);
v___y_400_ = v___x_421_;
goto v___jp_399_;
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___closed__9);
v___y_400_ = v___x_422_;
goto v___jp_399_;
}
v___jp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
lean_inc_ref(v___y_400_);
v___x_401_ = l_Lean_mkApp4(v___x_396_, v___x_397_, v_expr_386_, v___y_400_, v_expr_389_);
v___x_402_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_401_, v_a_382_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_412_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_412_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_412_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_412_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_407_, 0, v_bvExpr_394_);
lean_ctor_set(v___x_407_, 1, v_origExpr_381_);
lean_ctor_set(v___x_407_, 2, v___f_398_);
lean_ctor_set(v___x_407_, 3, v_a_403_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_408_);
v___x_410_ = v___x_405_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec_ref(v___f_398_);
lean_dec_ref_known(v_bvExpr_394_, 3);
lean_dec_ref(v_origExpr_381_);
v_a_413_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_402_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_402_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg___boxed(lean_object* v_lhs_423_, lean_object* v_rhs_424_, lean_object* v_lhsExpr_425_, lean_object* v_rhsExpr_426_, lean_object* v_pred_427_, lean_object* v_origExpr_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
uint8_t v_pred_boxed_431_; lean_object* v_res_432_; 
v_pred_boxed_431_ = lean_unbox(v_pred_427_);
v_res_432_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(v_lhs_423_, v_rhs_424_, v_lhsExpr_425_, v_rhsExpr_426_, v_pred_boxed_431_, v_origExpr_428_, v_a_429_);
lean_dec(v_a_429_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred(lean_object* v_lhs_433_, lean_object* v_rhs_434_, lean_object* v_lhsExpr_435_, lean_object* v_rhsExpr_436_, uint8_t v_pred_437_, lean_object* v_origExpr_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(v_lhs_433_, v_rhs_434_, v_lhsExpr_435_, v_rhsExpr_436_, v_pred_437_, v_origExpr_438_, v_a_442_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___boxed(lean_object* v_lhs_449_, lean_object* v_rhs_450_, lean_object* v_lhsExpr_451_, lean_object* v_rhsExpr_452_, lean_object* v_pred_453_, lean_object* v_origExpr_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_){
_start:
{
uint8_t v_pred_boxed_464_; lean_object* v_res_465_; 
v_pred_boxed_464_ = lean_unbox(v_pred_453_);
v_res_465_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred(v_lhs_449_, v_rhs_450_, v_lhsExpr_451_, v_rhsExpr_452_, v_pred_boxed_464_, v_origExpr_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_);
lean_dec(v_a_462_);
lean_dec_ref(v_a_461_);
lean_dec(v_a_460_);
lean_dec_ref(v_a_459_);
lean_dec(v_a_458_);
lean_dec_ref(v_a_457_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0(lean_object* v_sub_467_, lean_object* v_width_468_, lean_object* v_expr_469_, lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v___x_472_, lean_object* v___x_473_, lean_object* v_idxExpr_474_, lean_object* v___x_475_, lean_object* v_subExpr_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_sub_467_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_526_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_526_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_526_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_526_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
if (lean_obj_tag(v_a_487_) == 1)
{
lean_object* v_val_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_521_; 
lean_del_object(v___x_489_);
v_val_491_ = lean_ctor_get(v_a_487_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v_a_487_);
if (v_isSharedCheck_521_ == 0)
{
v___x_493_ = v_a_487_;
v_isShared_494_ = v_isSharedCheck_521_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_val_491_);
lean_dec(v_a_487_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_521_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_468_, v_expr_469_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_512_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_512_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_512_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_512_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_500_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0));
v___x_501_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2));
v___x_502_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___closed__0));
v___x_503_ = l_Lean_Name_mkStr6(v___x_470_, v___x_471_, v___x_472_, v___x_500_, v___x_501_, v___x_502_);
v___x_504_ = l_Lean_mkConst(v___x_503_, v___x_473_);
v___x_505_ = l_Lean_mkApp5(v___x_504_, v_idxExpr_474_, v___x_475_, v_subExpr_476_, v_a_496_, v_val_491_);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_505_);
v___x_507_ = v___x_493_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_511_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_507_);
v___x_509_ = v___x_498_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
lean_del_object(v___x_493_);
lean_dec(v_val_491_);
lean_dec_ref(v_subExpr_476_);
lean_dec_ref(v___x_475_);
lean_dec_ref(v_idxExpr_474_);
lean_dec(v___x_473_);
lean_dec_ref(v___x_472_);
lean_dec_ref(v___x_471_);
lean_dec_ref(v___x_470_);
v_a_513_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v___x_495_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_495_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
}
else
{
lean_object* v___x_522_; lean_object* v___x_524_; 
lean_dec(v_a_487_);
lean_dec_ref(v_subExpr_476_);
lean_dec_ref(v___x_475_);
lean_dec_ref(v_idxExpr_474_);
lean_dec(v___x_473_);
lean_dec_ref(v___x_472_);
lean_dec_ref(v___x_471_);
lean_dec_ref(v___x_470_);
lean_dec_ref(v_expr_469_);
lean_dec(v_width_468_);
v___x_522_ = lean_box(0);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_522_);
v___x_524_ = v___x_489_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
lean_dec_ref(v_subExpr_476_);
lean_dec_ref(v___x_475_);
lean_dec_ref(v_idxExpr_474_);
lean_dec(v___x_473_);
lean_dec_ref(v___x_472_);
lean_dec_ref(v___x_471_);
lean_dec_ref(v___x_470_);
lean_dec_ref(v_expr_469_);
lean_dec(v_width_468_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_sub_527_ = _args[0];
lean_object* v_width_528_ = _args[1];
lean_object* v_expr_529_ = _args[2];
lean_object* v___x_530_ = _args[3];
lean_object* v___x_531_ = _args[4];
lean_object* v___x_532_ = _args[5];
lean_object* v___x_533_ = _args[6];
lean_object* v_idxExpr_534_ = _args[7];
lean_object* v___x_535_ = _args[8];
lean_object* v_subExpr_536_ = _args[9];
lean_object* v___y_537_ = _args[10];
lean_object* v___y_538_ = _args[11];
lean_object* v___y_539_ = _args[12];
lean_object* v___y_540_ = _args[13];
lean_object* v___y_541_ = _args[14];
lean_object* v___y_542_ = _args[15];
lean_object* v___y_543_ = _args[16];
lean_object* v___y_544_ = _args[17];
lean_object* v___y_545_ = _args[18];
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0(v_sub_527_, v_width_528_, v_expr_529_, v___x_530_, v___x_531_, v___x_532_, v___x_533_, v_idxExpr_534_, v___x_535_, v_subExpr_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(lean_object* v_sub_547_, lean_object* v_subExpr_548_, lean_object* v_idx_549_, lean_object* v_origExpr_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_width_553_; lean_object* v_bvExpr_554_; lean_object* v_expr_555_; lean_object* v_bvExpr_556_; lean_object* v_idxExpr_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v_width_553_ = lean_ctor_get(v_sub_547_, 0);
lean_inc_n(v_width_553_, 3);
v_bvExpr_554_ = lean_ctor_get(v_sub_547_, 1);
v_expr_555_ = lean_ctor_get(v_sub_547_, 4);
lean_inc_ref_n(v_expr_555_, 2);
lean_inc(v_idx_549_);
lean_inc_ref(v_bvExpr_554_);
v_bvExpr_556_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_bvExpr_556_, 0, v_width_553_);
lean_ctor_set(v_bvExpr_556_, 1, v_bvExpr_554_);
lean_ctor_set(v_bvExpr_556_, 2, v_idx_549_);
v_idxExpr_557_ = l_Lean_mkNatLit(v_idx_549_);
v___x_558_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__6));
v___x_559_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__7));
v___x_560_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__8));
v___x_561_ = lean_box(0);
v___x_562_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__12);
v___x_563_ = l_Lean_mkNatLit(v_width_553_);
lean_inc_ref(v_idxExpr_557_);
lean_inc_ref(v___x_563_);
v___x_564_ = l_Lean_mkApp3(v___x_562_, v___x_563_, v_expr_555_, v_idxExpr_557_);
v___x_565_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_564_, v_a_551_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_575_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_575_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___f_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___f_570_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___lam__0___boxed), 19, 10);
lean_closure_set(v___f_570_, 0, v_sub_547_);
lean_closure_set(v___f_570_, 1, v_width_553_);
lean_closure_set(v___f_570_, 2, v_expr_555_);
lean_closure_set(v___f_570_, 3, v___x_558_);
lean_closure_set(v___f_570_, 4, v___x_559_);
lean_closure_set(v___f_570_, 5, v___x_560_);
lean_closure_set(v___f_570_, 6, v___x_561_);
lean_closure_set(v___f_570_, 7, v_idxExpr_557_);
lean_closure_set(v___f_570_, 8, v___x_563_);
lean_closure_set(v___f_570_, 9, v_subExpr_548_);
v___x_571_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_571_, 0, v_bvExpr_556_);
lean_ctor_set(v___x_571_, 1, v_origExpr_550_);
lean_ctor_set(v___x_571_, 2, v___f_570_);
lean_ctor_set(v___x_571_, 3, v_a_566_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_571_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref(v___x_563_);
lean_dec_ref(v_idxExpr_557_);
lean_dec_ref_known(v_bvExpr_556_, 3);
lean_dec_ref(v_expr_555_);
lean_dec(v_width_553_);
lean_dec_ref(v_origExpr_550_);
lean_dec_ref(v_subExpr_548_);
lean_dec_ref(v_sub_547_);
v_a_576_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_565_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_565_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg___boxed(lean_object* v_sub_584_, lean_object* v_subExpr_585_, lean_object* v_idx_586_, lean_object* v_origExpr_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(v_sub_584_, v_subExpr_585_, v_idx_586_, v_origExpr_587_, v_a_588_);
lean_dec(v_a_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD(lean_object* v_sub_591_, lean_object* v_subExpr_592_, lean_object* v_idx_593_, lean_object* v_origExpr_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(v_sub_591_, v_subExpr_592_, v_idx_593_, v_origExpr_594_, v_a_598_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___boxed(lean_object* v_sub_605_, lean_object* v_subExpr_606_, lean_object* v_idx_607_, lean_object* v_origExpr_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD(v_sub_605_, v_subExpr_606_, v_idx_607_, v_origExpr_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_);
lean_dec(v_a_616_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
return v_res_618_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
}
#ifdef __cplusplus
}
#endif
