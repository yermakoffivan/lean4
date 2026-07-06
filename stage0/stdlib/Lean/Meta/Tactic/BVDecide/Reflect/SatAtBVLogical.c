// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Reflect.SatAtBVLogical
// Imports: public import Lean.Meta.Tactic.BVDecide.Reflect.Basic import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVLogical import Lean.Meta.Tactic.BVDecide.Reflect.Reify import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS import Std.Tactic.BVDecide.Reflect
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_M_atomsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_evalsAtAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkRefl(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "BVLogicalExpr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sat_and"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BoolExpr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "gate"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(78, 254, 9, 142, 35, 136, 25, 70)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(65, 48, 52, 229, 233, 139, 247, 222)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BVPred"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(12, 253, 4, 25, 159, 236, 140, 252)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Gate"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__10_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(217, 25, 243, 65, 109, 17, 59, 185)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(191, 125, 195, 121, 220, 103, 239, 120)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eval"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 137, 185, 0, 130, 201, 136, 210)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 172, 123, 74, 237, 247, 157, 191)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "false_of_eq_true_of_eq_false"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 74, 55, 212, 47, 213, 221, 101)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value_aux_4),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(214, 107, 11, 53, 155, 200, 122, 195)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Unable to identify any relevant atoms."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0(lean_object* v_expr_1_, lean_object* v_val_2_, lean_object* v___x_3_, lean_object* v_arg_4_, lean_object* v_value_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkEvalExpr(v_expr_1_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v___x_15_, 1);
v___x_17_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_evalsAtAtoms(v_val_2_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_32_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_32_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_32_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_32_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_32_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___y_23_; 
if (lean_obj_tag(v_a_18_) == 0)
{
lean_object* v___x_30_; 
lean_inc(v_a_16_);
v___x_30_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkRefl(v_a_16_);
v___y_23_ = v___x_30_;
goto v___jp_22_;
}
else
{
lean_object* v_val_31_; 
v_val_31_ = lean_ctor_get(v_a_18_, 0);
lean_inc(v_val_31_);
lean_dec_ref_known(v_a_18_, 1);
v___y_23_ = v_val_31_;
goto v___jp_22_;
}
v___jp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_24_ = lean_box(0);
v___x_25_ = l_Lean_mkConst(v___x_3_, v___x_24_);
v___x_26_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkTrans(v_a_16_, v_arg_4_, v___x_25_, v___y_23_, v_value_5_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v___x_26_);
v___x_28_ = v___x_20_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
else
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_40_; 
lean_dec(v_a_16_);
lean_dec_ref(v_value_5_);
lean_dec_ref(v_arg_4_);
lean_dec(v___x_3_);
v_a_33_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_40_ == 0)
{
v___x_35_ = v___x_17_;
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_17_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_38_; 
if (v_isShared_36_ == 0)
{
v___x_38_ = v___x_35_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_33_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
else
{
lean_dec_ref(v_value_5_);
lean_dec_ref(v_arg_4_);
lean_dec(v___x_3_);
lean_dec_ref(v_val_2_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0___boxed(lean_object* v_expr_41_, lean_object* v_val_42_, lean_object* v___x_43_, lean_object* v_arg_44_, lean_object* v_value_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0(v_expr_41_, v_val_42_, v___x_43_, v_arg_44_, v_value_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of(lean_object* v_hyp_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_type_77_; lean_object* v_value_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_158_; 
v_type_77_ = lean_ctor_get(v_hyp_66_, 1);
v_value_78_ = lean_ctor_get(v_hyp_66_, 2);
v_isSharedCheck_158_ = !lean_is_exclusive(v_hyp_66_);
if (v_isSharedCheck_158_ == 0)
{
lean_object* v_unused_159_; 
v_unused_159_ = lean_ctor_get(v_hyp_66_, 0);
lean_dec(v_unused_159_);
v___x_80_ = v_hyp_66_;
v_isShared_81_ = v_isSharedCheck_158_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_value_78_);
lean_inc(v_type_77_);
lean_dec(v_hyp_66_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_158_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_type_77_, v_a_73_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_149_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_149_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_149_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_149_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = l_Lean_Expr_cleanupAnnotations(v_a_83_);
v___x_93_ = l_Lean_Expr_isApp(v___x_92_);
if (v___x_93_ == 0)
{
lean_dec_ref(v___x_92_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
goto v___jp_87_;
}
else
{
lean_object* v_arg_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v_arg_94_ = lean_ctor_get(v___x_92_, 1);
lean_inc_ref(v_arg_94_);
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_92_);
v___x_96_ = l_Lean_Expr_isApp(v___x_95_);
if (v___x_96_ == 0)
{
lean_dec_ref(v___x_95_);
lean_dec_ref(v_arg_94_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
goto v___jp_87_;
}
else
{
lean_object* v_arg_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v_arg_97_ = lean_ctor_get(v___x_95_, 1);
lean_inc_ref(v_arg_97_);
v___x_98_ = l_Lean_Expr_appFnCleanup___redArg(v___x_95_);
v___x_99_ = l_Lean_Expr_isApp(v___x_98_);
if (v___x_99_ == 0)
{
lean_dec_ref(v___x_98_);
lean_dec_ref(v_arg_97_);
lean_dec_ref(v_arg_94_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
goto v___jp_87_;
}
else
{
lean_object* v_arg_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_arg_100_ = lean_ctor_get(v___x_98_, 1);
lean_inc_ref(v_arg_100_);
v___x_101_ = l_Lean_Expr_appFnCleanup___redArg(v___x_98_);
v___x_102_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__1));
v___x_103_ = l_Lean_Expr_isConstOf(v___x_101_, v___x_102_);
lean_dec_ref(v___x_101_);
if (v___x_103_ == 0)
{
lean_dec_ref(v_arg_100_);
lean_dec_ref(v_arg_97_);
lean_dec_ref(v_arg_94_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
goto v___jp_87_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
lean_del_object(v___x_85_);
v___x_104_ = l_Lean_Expr_cleanupAnnotations(v_arg_100_);
v___x_105_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__3));
v___x_106_ = l_Lean_Expr_isConstOf(v___x_104_, v___x_105_);
lean_dec_ref(v___x_104_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; 
lean_dec_ref(v_arg_97_);
lean_dec_ref(v_arg_94_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
v___x_107_ = lean_box(0);
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_109_ = l_Lean_Expr_cleanupAnnotations(v_arg_94_);
v___x_110_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___closed__5));
v___x_111_ = l_Lean_Expr_isConstOf(v___x_109_, v___x_110_);
lean_dec_ref(v___x_109_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec_ref(v_arg_97_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
v___x_112_ = lean_box(0);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
else
{
lean_object* v___x_114_; 
lean_inc_ref(v_arg_97_);
v___x_114_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(v_arg_97_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_140_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_140_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_140_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_140_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
if (lean_obj_tag(v_a_115_) == 1)
{
lean_object* v_val_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_135_; 
v_val_119_ = lean_ctor_get(v_a_115_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v_a_115_);
if (v_isSharedCheck_135_ == 0)
{
v___x_121_ = v_a_115_;
v_isShared_122_ = v_isSharedCheck_135_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_val_119_);
lean_dec(v_a_115_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_135_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v_bvExpr_123_; lean_object* v_expr_124_; lean_object* v___f_125_; lean_object* v___x_127_; 
v_bvExpr_123_ = lean_ctor_get(v_val_119_, 0);
lean_inc_ref(v_bvExpr_123_);
v_expr_124_ = lean_ctor_get(v_val_119_, 3);
lean_inc_ref_n(v_expr_124_, 2);
v___f_125_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___lam__0___boxed), 14, 5);
lean_closure_set(v___f_125_, 0, v_expr_124_);
lean_closure_set(v___f_125_, 1, v_val_119_);
lean_closure_set(v___f_125_, 2, v___x_110_);
lean_closure_set(v___f_125_, 3, v_arg_97_);
lean_closure_set(v___f_125_, 4, v_value_78_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 2, v_expr_124_);
lean_ctor_set(v___x_80_, 1, v___f_125_);
lean_ctor_set(v___x_80_, 0, v_bvExpr_123_);
v___x_127_ = v___x_80_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_bvExpr_123_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v___f_125_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_expr_124_);
v___x_127_ = v_reuseFailAlloc_134_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_129_; 
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_127_);
v___x_129_ = v___x_121_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_133_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_131_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v___x_129_);
v___x_131_ = v___x_117_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
else
{
lean_object* v___x_136_; lean_object* v___x_138_; 
lean_dec(v_a_115_);
lean_dec_ref(v_arg_97_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
v___x_136_ = lean_box(0);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v___x_136_);
v___x_138_ = v___x_117_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
lean_dec_ref(v_arg_97_);
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
v_a_141_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_114_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_114_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
}
}
}
}
v___jp_87_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = lean_box(0);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_88_);
v___x_90_ = v___x_85_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_del_object(v___x_80_);
lean_dec_ref(v_value_78_);
v_a_150_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_82_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_82_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___boxed(lean_object* v_hyp_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of(v_hyp_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
lean_dec(v_a_161_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0(lean_object* v_satAtAtoms_174_, lean_object* v_satAtAtoms_175_, lean_object* v___x_176_, lean_object* v___x_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_expr_180_, lean_object* v_expr_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_Tactic_BVDecide_M_atomsAssignment(v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
lean_inc(v___y_189_);
lean_inc_ref(v___y_188_);
lean_inc(v___y_187_);
lean_inc_ref(v___y_186_);
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
lean_inc(v___y_183_);
lean_inc_ref(v___y_182_);
v___x_193_ = lean_apply_9(v_satAtAtoms_174_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, lean_box(0));
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
lean_inc(v___y_189_);
lean_inc_ref(v___y_188_);
lean_inc(v___y_187_);
lean_inc_ref(v___y_186_);
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
lean_inc(v___y_183_);
lean_inc_ref(v___y_182_);
v___x_195_ = lean_apply_9(v_satAtAtoms_175_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, lean_box(0));
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_208_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_208_ == 0)
{
v___x_198_ = v___x_195_;
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_195_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_200_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__0));
v___x_201_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___closed__1));
v___x_202_ = l_Lean_Name_mkStr5(v___x_176_, v___x_177_, v___x_178_, v___x_200_, v___x_201_);
v___x_203_ = l_Lean_mkConst(v___x_202_, v___x_179_);
v___x_204_ = l_Lean_mkApp5(v___x_203_, v_expr_180_, v_expr_181_, v_a_192_, v_a_194_, v_a_196_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_204_);
v___x_206_ = v___x_198_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
else
{
lean_dec(v_a_194_);
lean_dec(v_a_192_);
lean_dec_ref(v_expr_181_);
lean_dec_ref(v_expr_180_);
lean_dec(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
lean_dec_ref(v___x_176_);
return v___x_195_;
}
}
else
{
lean_dec(v_a_192_);
lean_dec_ref(v_expr_181_);
lean_dec_ref(v_expr_180_);
lean_dec(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
lean_dec_ref(v___x_176_);
lean_dec_ref(v_satAtAtoms_175_);
return v___x_193_;
}
}
else
{
lean_dec_ref(v_expr_181_);
lean_dec_ref(v_expr_180_);
lean_dec(v___x_179_);
lean_dec_ref(v___x_178_);
lean_dec_ref(v___x_177_);
lean_dec_ref(v___x_176_);
lean_dec_ref(v_satAtAtoms_175_);
lean_dec_ref(v_satAtAtoms_174_);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_satAtAtoms_209_ = _args[0];
lean_object* v_satAtAtoms_210_ = _args[1];
lean_object* v___x_211_ = _args[2];
lean_object* v___x_212_ = _args[3];
lean_object* v___x_213_ = _args[4];
lean_object* v___x_214_ = _args[5];
lean_object* v_expr_215_ = _args[6];
lean_object* v_expr_216_ = _args[7];
lean_object* v___y_217_ = _args[8];
lean_object* v___y_218_ = _args[9];
lean_object* v___y_219_ = _args[10];
lean_object* v___y_220_ = _args[11];
lean_object* v___y_221_ = _args[12];
lean_object* v___y_222_ = _args[13];
lean_object* v___y_223_ = _args[14];
lean_object* v___y_224_ = _args[15];
lean_object* v___y_225_ = _args[16];
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0(v_satAtAtoms_209_, v_satAtAtoms_210_, v___x_211_, v___x_212_, v___x_213_, v___x_214_, v_expr_215_, v_expr_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
return v_res_226_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_box(0);
v___x_239_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__5));
v___x_240_ = l_Lean_mkConst(v___x_239_, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_box(0);
v___x_248_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__8));
v___x_249_ = l_Lean_mkConst(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = lean_box(0);
v___x_259_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__12));
v___x_260_ = l_Lean_mkConst(v___x_259_, v___x_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(lean_object* v_x_261_, lean_object* v_y_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_bvExpr_270_; lean_object* v_satAtAtoms_271_; lean_object* v_expr_272_; lean_object* v_bvExpr_273_; lean_object* v_satAtAtoms_274_; lean_object* v_expr_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_305_; 
v___x_265_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__0));
v___x_266_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__1));
v___x_267_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__2));
v___x_268_ = lean_box(0);
v___x_269_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__6);
v_bvExpr_270_ = lean_ctor_get(v_x_261_, 0);
lean_inc_ref(v_bvExpr_270_);
v_satAtAtoms_271_ = lean_ctor_get(v_x_261_, 1);
lean_inc_ref(v_satAtAtoms_271_);
v_expr_272_ = lean_ctor_get(v_x_261_, 2);
lean_inc_ref(v_expr_272_);
lean_dec_ref(v_x_261_);
v_bvExpr_273_ = lean_ctor_get(v_y_262_, 0);
v_satAtAtoms_274_ = lean_ctor_get(v_y_262_, 1);
v_expr_275_ = lean_ctor_get(v_y_262_, 2);
v_isSharedCheck_305_ = !lean_is_exclusive(v_y_262_);
if (v_isSharedCheck_305_ == 0)
{
v___x_277_ = v_y_262_;
v_isShared_278_ = v_isSharedCheck_305_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_expr_275_);
lean_inc(v_satAtAtoms_274_);
lean_inc(v_bvExpr_273_);
lean_dec(v_y_262_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_305_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_279_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__9);
v___x_280_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___closed__13);
lean_inc_ref(v_expr_275_);
lean_inc_ref(v_expr_272_);
v___x_281_ = l_Lean_mkApp4(v___x_269_, v___x_279_, v___x_280_, v_expr_272_, v_expr_275_);
v___x_282_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_281_, v_a_263_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_296_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_296_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___f_287_; uint8_t v___x_288_; lean_object* v_bvExpr_289_; lean_object* v___x_291_; 
v___f_287_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___lam__0___boxed), 17, 8);
lean_closure_set(v___f_287_, 0, v_satAtAtoms_271_);
lean_closure_set(v___f_287_, 1, v_satAtAtoms_274_);
lean_closure_set(v___f_287_, 2, v___x_265_);
lean_closure_set(v___f_287_, 3, v___x_266_);
lean_closure_set(v___f_287_, 4, v___x_267_);
lean_closure_set(v___f_287_, 5, v___x_268_);
lean_closure_set(v___f_287_, 6, v_expr_272_);
lean_closure_set(v___f_287_, 7, v_expr_275_);
v___x_288_ = 0;
v_bvExpr_289_ = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(v_bvExpr_289_, 0, v_bvExpr_270_);
lean_ctor_set(v_bvExpr_289_, 1, v_bvExpr_273_);
lean_ctor_set_uint8(v_bvExpr_289_, sizeof(void*)*2, v___x_288_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 2, v_a_283_);
lean_ctor_set(v___x_277_, 1, v___f_287_);
lean_ctor_set(v___x_277_, 0, v_bvExpr_289_);
v___x_291_ = v___x_277_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_bvExpr_289_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___f_287_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_a_283_);
v___x_291_ = v_reuseFailAlloc_295_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_293_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_291_);
v___x_293_ = v___x_285_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_del_object(v___x_277_);
lean_dec_ref(v_expr_275_);
lean_dec_ref(v_satAtAtoms_274_);
lean_dec_ref(v_bvExpr_273_);
lean_dec_ref(v_expr_272_);
lean_dec_ref(v_satAtAtoms_271_);
lean_dec_ref(v_bvExpr_270_);
v_a_297_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_282_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_282_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg___boxed(lean_object* v_x_306_, lean_object* v_y_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(v_x_306_, v_y_307_, v_a_308_);
lean_dec(v_a_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and(lean_object* v_x_311_, lean_object* v_y_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(v_x_311_, v_y_312_, v_a_316_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___boxed(lean_object* v_x_323_, lean_object* v_y_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and(v_x_323_, v_y_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0(lean_object* v_msgData_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v___x_341_; lean_object* v_env_342_; lean_object* v___x_343_; lean_object* v_mctx_344_; lean_object* v_lctx_345_; lean_object* v_options_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_341_ = lean_st_ref_get(v___y_339_);
v_env_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc_ref(v_env_342_);
lean_dec(v___x_341_);
v___x_343_ = lean_st_ref_get(v___y_337_);
v_mctx_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc_ref(v_mctx_344_);
lean_dec(v___x_343_);
v_lctx_345_ = lean_ctor_get(v___y_336_, 2);
v_options_346_ = lean_ctor_get(v___y_338_, 2);
lean_inc_ref(v_options_346_);
lean_inc_ref(v_lctx_345_);
v___x_347_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_347_, 0, v_env_342_);
lean_ctor_set(v___x_347_, 1, v_mctx_344_);
lean_ctor_set(v___x_347_, 2, v_lctx_345_);
lean_ctor_set(v___x_347_, 3, v_options_346_);
v___x_348_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v_msgData_335_);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0___boxed(lean_object* v_msgData_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0(v_msgData_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg(lean_object* v_msg_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_ref_363_; lean_object* v___x_364_; lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_373_; 
v_ref_363_ = lean_ctor_get(v___y_360_, 5);
v___x_364_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0_spec__0(v_msg_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_373_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_373_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
lean_inc(v_ref_363_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_ref_363_);
lean_ctor_set(v___x_369_, 1, v_a_365_);
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 1);
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_371_ = v___x_367_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg___boxed(lean_object* v_msg_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg(v_msg_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_380_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_388_ = lean_box(0);
v___x_389_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__1));
v___x_390_ = l_Lean_mkConst(v___x_389_, v___x_388_);
return v___x_390_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_box(0);
v___x_401_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__5));
v___x_402_ = l_Lean_mkConst(v___x_401_, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__7));
v___x_405_ = l_Lean_stringToMessageData(v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(lean_object* v_x_406_, lean_object* v_h_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v___x_417_; lean_object* v_atoms_418_; lean_object* v_size_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_417_ = lean_st_ref_get(v_a_409_);
v_atoms_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc_ref(v_atoms_418_);
lean_dec(v___x_417_);
v_size_419_ = lean_ctor_get(v_atoms_418_, 0);
lean_inc(v_size_419_);
lean_dec_ref(v_atoms_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_nat_dec_eq(v_size_419_, v___x_420_);
lean_dec(v_size_419_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Meta_Tactic_BVDecide_M_atomsAssignment(v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v_satAtAtoms_424_; lean_object* v_expr_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc_n(v_a_423_, 2);
lean_dec_ref_known(v___x_422_, 1);
v_satAtAtoms_424_ = lean_ctor_get(v_x_406_, 1);
lean_inc_ref(v_satAtAtoms_424_);
v_expr_425_ = lean_ctor_get(v_x_406_, 2);
lean_inc_ref(v_expr_425_);
lean_dec_ref(v_x_406_);
v___x_426_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__2);
v___x_427_ = l_Lean_mkAppB(v___x_426_, v_a_423_, v_expr_425_);
v___x_428_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_427_, v_a_411_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
lean_inc(v_a_415_);
lean_inc_ref(v_a_414_);
lean_inc(v_a_413_);
lean_inc_ref(v_a_412_);
lean_inc(v_a_411_);
lean_inc_ref(v_a_410_);
lean_inc(v_a_409_);
lean_inc_ref(v_a_408_);
v___x_430_ = lean_apply_9(v_satAtAtoms_424_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, lean_box(0));
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_441_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_441_ == 0)
{
v___x_433_ = v___x_430_;
v_isShared_434_ = v_isSharedCheck_441_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_441_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_435_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__6);
v___x_436_ = l_Lean_Expr_app___override(v_h_407_, v_a_423_);
v___x_437_ = l_Lean_mkApp3(v___x_435_, v_a_429_, v_a_431_, v___x_436_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v___x_437_);
v___x_439_ = v___x_433_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_437_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_dec(v_a_429_);
lean_dec(v_a_423_);
lean_dec_ref(v_h_407_);
return v___x_430_;
}
}
else
{
lean_dec_ref(v_satAtAtoms_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_h_407_);
return v___x_428_;
}
}
else
{
lean_dec_ref(v_h_407_);
lean_dec_ref(v_x_406_);
return v___x_422_;
}
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec_ref(v_h_407_);
lean_dec_ref(v_x_406_);
v___x_442_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8, &l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___closed__8);
v___x_443_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg(v___x_442_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___boxed(lean_object* v_x_444_, lean_object* v_h_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_x_444_, v_h_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
lean_dec(v_a_449_);
lean_dec_ref(v_a_448_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0(lean_object* v_00_u03b1_456_, lean_object* v_msg_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___redArg(v_msg_457_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0___boxed(lean_object* v_00_u03b1_468_, lean_object* v_msg_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse_spec__0(v_00_u03b1_468_, v_msg_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
return v_res_479_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Reflect_SatAtBVLogical(builtin);
}
#ifdef __cplusplus
}
#endif
