// Lean compiler output
// Module: Lean.Elab.Do.Switch
// Imports: public import Lean.Elab.Term.TermElabM import Lean.Elab.Do.Basic import Lean.Elab.Do.Legacy
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setKind(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Do_elabDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabNestedAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNestedAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__0_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__0_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__0_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__2_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "legacy"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__2_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__2_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__0_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(51, 126, 45, 195, 115, 115, 51, 135)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__2_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(119, 232, 139, 88, 91, 137, 183, 76)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__4_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "Use the legacy `do` elaborator instead of the new, extensible implementation."};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__4_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__4_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__5_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__4_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__5_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__5_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__0_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(246, 119, 213, 61, 119, 26, 225, 248)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(76, 69, 170, 166, 145, 126, 34, 117)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__2_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(116, 140, 133, 118, 51, 249, 1, 254)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_backward_do_legacy;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__7 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__7_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__9 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__9_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandTermFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Term_expandTermFor___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Term_expandTermFor___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandTermFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermFor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermFor___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termFor"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(97, 224, 91, 133, 33, 161, 189, 246)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expandTermFor"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(231, 67, 19, 221, 19, 241, 218, 200)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1805) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1805) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__1_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1805) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1805) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__4_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandTermTry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Term_expandTermTry___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermTry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Term_expandTermTry___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandTermTry___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermTry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermTry___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termTry"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 80, 182, 167, 150, 154, 214, 88)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expandTermTry"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(129, 94, 241, 17, 100, 182, 152, 84)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1808) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1808) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__1_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1808) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1808) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__4_value),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandTermUnless___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Term_expandTermUnless___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermUnless___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Term_expandTermUnless___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandTermUnless___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermUnless(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermUnless___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termUnless"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 93, 2, 77, 146, 4, 53, 233)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "expandTermUnless"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 215, 22, 211, 57, 247, 242, 171)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1811) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1811) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__1_value),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1811) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1811) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__4_value),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_expandTermReturn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Term_expandTermReturn___closed__0 = (const lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_expandTermReturn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Term_expandTermReturn___closed__1 = (const lean_object*)&l_Lean_Elab_Term_expandTermReturn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermReturn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermReturn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termReturn"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 245, 184, 22, 191, 152, 219, 48)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "expandTermReturn"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 153, 4, 104, 223, 208, 206, 177)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1814) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1814) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__1_value),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1814) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1814) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__4_value),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "elabDo"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 179, 33, 138, 106, 169, 223, 171)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "elabTermNestedAction"};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__6_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__7_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__8_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(10, 212, 28, 198, 91, 183, 85, 112)}};
static const lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__3_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_));
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__5_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_));
v___x_60_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__9_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_));
v___x_61_ = l_Lean_Option_register___at___00__private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4__spec__0(v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_();
return v_res_63_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Array_mkArray0(lean_box(0));
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(lean_object* v_newKind_92_, lean_object* v_stx_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_ref_96_; lean_object* v_stx_97_; lean_object* v_ref_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_ref_96_ = lean_ctor_get(v_a_94_, 5);
v_stx_97_ = l_Lean_Syntax_setKind(v_stx_93_, v_newKind_92_);
v_ref_98_ = l_Lean_replaceRef(v_stx_97_, v_ref_96_);
v___x_99_ = 0;
v___x_100_ = l_Lean_SourceInfo_fromRef(v_ref_98_, v___x_99_);
lean_dec(v_ref_98_);
v___x_101_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn___closed__1_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_));
v___x_102_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1));
lean_inc_n(v___x_100_, 6);
v___x_103_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_100_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
v___x_104_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__3));
v___x_105_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__5));
v___x_106_ = lean_obj_once(&l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6, &l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6_once, _init_l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__6);
v___x_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_100_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_106_);
lean_inc_ref(v___x_107_);
v___x_108_ = l_Lean_Syntax_node1(v___x_100_, v___x_104_, v___x_107_);
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__8));
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__10));
v___x_111_ = l_Lean_Syntax_node2(v___x_100_, v___x_110_, v_stx_97_, v___x_107_);
v___x_112_ = l_Lean_Syntax_node1(v___x_100_, v___x_105_, v___x_111_);
v___x_113_ = l_Lean_Syntax_node1(v___x_100_, v___x_109_, v___x_112_);
v___x_114_ = l_Lean_Syntax_node3(v___x_100_, v___x_102_, v___x_103_, v___x_108_, v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v_a_95_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___boxed(lean_object* v_newKind_116_, lean_object* v_stx_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(v_newKind_116_, v_stx_117_, v_a_118_, v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermFor(lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l_Lean_Elab_Term_expandTermFor___closed__1));
v___x_131_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(v___x_130_, v_a_127_, v_a_128_, v_a_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermFor___boxed(lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lean_Elab_Term_expandTermFor(v_a_132_, v_a_133_, v_a_134_);
lean_dec_ref(v_a_133_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1(){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_149_ = l_Lean_Elab_macroAttribute;
v___x_150_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__1));
v___x_151_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3));
v___x_152_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandTermFor___boxed), 3, 0);
v___x_153_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_149_, v___x_150_, v___x_151_, v___x_152_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___boxed(lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1();
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3(){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1___closed__3));
v___x_183_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___closed__6));
v___x_184_ = l_Lean_addBuiltinDeclarationRanges(v___x_182_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3___boxed(lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3();
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermTry(lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = ((lean_object*)(l_Lean_Elab_Term_expandTermTry___closed__1));
v___x_197_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(v___x_196_, v_a_193_, v_a_194_, v_a_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermTry___boxed(lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Elab_Term_expandTermTry(v_a_198_, v_a_199_, v_a_200_);
lean_dec_ref(v_a_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1(){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_215_ = l_Lean_Elab_macroAttribute;
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__1));
v___x_217_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3));
v___x_218_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandTermTry___boxed), 3, 0);
v___x_219_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_215_, v___x_216_, v___x_217_, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___boxed(lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1();
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3(){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1___closed__3));
v___x_249_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___closed__6));
v___x_250_ = l_Lean_addBuiltinDeclarationRanges(v___x_248_, v___x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3___boxed(lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3();
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermUnless(lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lean_Elab_Term_expandTermUnless___closed__1));
v___x_263_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(v___x_262_, v_a_259_, v_a_260_, v_a_261_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermUnless___boxed(lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Elab_Term_expandTermUnless(v_a_264_, v_a_265_, v_a_266_);
lean_dec_ref(v_a_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1(){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_281_ = l_Lean_Elab_macroAttribute;
v___x_282_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__1));
v___x_283_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3));
v___x_284_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandTermUnless___boxed), 3, 0);
v___x_285_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_281_, v___x_282_, v___x_283_, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___boxed(lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1();
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3(){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1___closed__3));
v___x_315_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___closed__6));
v___x_316_ = l_Lean_addBuiltinDeclarationRanges(v___x_314_, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3___boxed(lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3();
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermReturn(lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = ((lean_object*)(l_Lean_Elab_Term_expandTermReturn___closed__1));
v___x_329_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem(v___x_328_, v_a_325_, v_a_326_, v_a_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandTermReturn___boxed(lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_Elab_Term_expandTermReturn(v_a_330_, v_a_331_, v_a_332_);
lean_dec_ref(v_a_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1(){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_347_ = l_Lean_Elab_macroAttribute;
v___x_348_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__1));
v___x_349_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3));
v___x_350_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandTermReturn___boxed), 3, 0);
v___x_351_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_347_, v___x_348_, v___x_349_, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1();
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3(){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1___closed__3));
v___x_381_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___closed__6));
v___x_382_ = l_Lean_addBuiltinDeclarationRanges(v___x_380_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3___boxed(lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3();
return v_res_384_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0(lean_object* v_opts_385_, lean_object* v_opt_386_){
_start:
{
lean_object* v_name_387_; lean_object* v_defValue_388_; lean_object* v_map_389_; lean_object* v___x_390_; 
v_name_387_ = lean_ctor_get(v_opt_386_, 0);
v_defValue_388_ = lean_ctor_get(v_opt_386_, 1);
v_map_389_ = lean_ctor_get(v_opts_385_, 0);
v___x_390_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_389_, v_name_387_);
if (lean_obj_tag(v___x_390_) == 0)
{
uint8_t v___x_391_; 
v___x_391_ = lean_unbox(v_defValue_388_);
return v___x_391_;
}
else
{
lean_object* v_val_392_; 
v_val_392_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_val_392_);
lean_dec_ref_known(v___x_390_, 1);
if (lean_obj_tag(v_val_392_) == 1)
{
uint8_t v_v_393_; 
v_v_393_ = lean_ctor_get_uint8(v_val_392_, 0);
lean_dec_ref_known(v_val_392_, 0);
return v_v_393_;
}
else
{
uint8_t v___x_394_; 
lean_dec(v_val_392_);
v___x_394_ = lean_unbox(v_defValue_388_);
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0___boxed(lean_object* v_opts_395_, lean_object* v_opt_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0(v_opts_395_, v_opt_396_);
lean_dec_ref(v_opt_396_);
lean_dec_ref(v_opts_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDo(lean_object* v_stx_399_, lean_object* v_expectedType_x3f_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_options_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_options_408_ = lean_ctor_get(v_a_405_, 2);
v___x_409_ = l_Lean_Elab_Term_backward_do_legacy;
v___x_410_ = l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0(v_options_408_, v___x_409_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Elab_Do_elabDo(v_stx_399_, v_expectedType_x3f_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
return v___x_411_;
}
else
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Elab_Term_Do_elabDo(v_stx_399_, v_expectedType_x3f_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDo___boxed(lean_object* v_stx_413_, lean_object* v_expectedType_x3f_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Elab_Term_elabDo(v_stx_413_, v_expectedType_x3f_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1(){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_430_ = l_Lean_Elab_Term_termElabAttribute;
v___x_431_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_toDoElem___closed__1));
v___x_432_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___closed__1));
v___x_433_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabDo___boxed), 9, 0);
v___x_434_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_430_, v___x_431_, v___x_432_, v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1___boxed(lean_object* v_a_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1();
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___redArg(lean_object* v_stx_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_options_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v_options_445_ = lean_ctor_get(v_a_442_, 2);
v___x_446_ = l_Lean_Elab_Term_backward_do_legacy;
v___x_447_ = l_Lean_Option_get___at___00Lean_Elab_Term_elabDo_spec__0(v_options_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Elab_Do_elabNestedAction___redArg(v_stx_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_Elab_Term_elabNestedAction___redArg(v_stx_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
lean_dec(v_stx_437_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___redArg___boxed(lean_object* v_stx_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Elab_Term_elabTermNestedAction___redArg(v_stx_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction(lean_object* v_stx_459_, lean_object* v_ty_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_Elab_Term_elabTermNestedAction___redArg(v_stx_459_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermNestedAction___boxed(lean_object* v_stx_469_, lean_object* v_ty_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Elab_Term_elabTermNestedAction(v_stx_469_, v_ty_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_a_474_);
lean_dec_ref(v_a_473_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
lean_dec(v_ty_470_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1(){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_492_ = l_Lean_Elab_Term_termElabAttribute;
v___x_493_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__1));
v___x_494_ = ((lean_object*)(l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___closed__3));
v___x_495_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermNestedAction___boxed), 9, 0);
v___x_496_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_492_, v___x_493_, v___x_494_, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1___boxed(lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1();
return v_res_498_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Legacy(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_Switch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Legacy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_initFn_00___x40_Lean_Elab_Do_Switch_1835640568____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_backward_do_legacy = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_backward_do_legacy);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermFor___regBuiltin_Lean_Elab_Term_expandTermFor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermTry___regBuiltin_Lean_Elab_Term_expandTermTry_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermUnless___regBuiltin_Lean_Elab_Term_expandTermUnless_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_expandTermReturn___regBuiltin_Lean_Elab_Term_expandTermReturn_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabDo___regBuiltin_Lean_Elab_Term_elabDo__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_Switch_0__Lean_Elab_Term_elabTermNestedAction___regBuiltin_Lean_Elab_Term_elabTermNestedAction__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_Switch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Legacy(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_Switch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Legacy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Switch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_Switch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_Switch(builtin);
}
#ifdef __cplusplus
}
#endif
