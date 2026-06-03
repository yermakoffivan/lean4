// Lean compiler output
// Module: Std.Internal.Do.Triple.SpecLemmas
// Imports: public import Std.Internal.Do.Triple.Basic public import Std.Do.Triple.SpecLemmas public import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic public import Init.Data.Slice.Array public import Init.Data.Iterators.Lemmas.Combinators.FilterMap public import Init.Data.Range import Init.Data.Iterators.Lemmas import Init.Data.List.Nat.Range import Init.Data.List.Nat.TakeDrop import Init.Data.List.Range import Init.Data.List.TakeDrop import Init.Data.Nat.Mod import Init.Data.Slice.Lemmas import Init.Omega public import Init.Data.String.Defs public import Init.Data.String.Iterate import Init.Data.String.Lemmas.Splits import Init.Data.String.Termination import Init.Data.String.Lemmas.Iterate
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Except_instWPMonad_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Except_instWPMonad_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 17, .m_data = "termInvariant⟨_;⟩"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__3 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__3_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_0),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_1),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value_aux_2),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(125, 176, 80, 209, 118, 86, 118, 44)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__5 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__5_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__6 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__6_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 10, .m_data = "invariant⟨"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__7 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__7_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__7_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__8 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__8_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__9 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__9_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__10 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__10_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__11 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__11_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__12 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__12_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__12_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__13 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__13_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__11_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__12_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__13_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__14 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__14_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__6_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__8_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__14_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__15 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__15_value;
static const lean_string_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__16 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__16_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__16_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__17 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__17_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__6_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__15_value),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__17_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__18 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__18_value;
static const lean_ctor_object l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__18_value)}};
static const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__19 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__19_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9 = (const lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__19_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__0 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__0_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__1 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__1_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__2 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__2_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__3 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__3_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_0),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_1),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Invariant.mk"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__5 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__5_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Invariant"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__7 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__7_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__8 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__8_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 94, 27, 125, 141, 40, 67, 142)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9_value_aux_0),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(101, 210, 143, 148, 243, 96, 64, 196)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_0),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_1),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(87, 179, 166, 143, 253, 13, 207, 153)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value_aux_3),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(251, 32, 15, 63, 217, 81, 138, 150)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__11 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__11_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__10_value)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__12 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__12_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__13 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__13_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__11_value),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__13_value)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__14 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__14_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__15 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__15_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__16 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__16_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 12, .m_data = "termEpost⟨_⟩"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__17 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__17_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_0),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_1),((lean_object*)&l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(212, 191, 145, 121, 242, 68, 46, 80)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 6, .m_data = "epost⟨"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__19 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__19_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__21 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__21_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Order.bot"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__22 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__22_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__24 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__24_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bot"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__25 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__25_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value_aux_0),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value_aux_1),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(89, 51, 159, 172, 220, 225, 54, 137)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__27 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__27_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__28 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__28_value;
static const lean_array_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__29 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__29_value;
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__List_forIn_x27__cons_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__List_forIn_x27__cons_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Spec_forIn_x27__list_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Spec_forIn_x27__list_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Lean_Loop_forIn_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Lean_Loop_forIn_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Except_instWPMonad_match__1_splitter___redArg(lean_object* v_x_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_5_; 
lean_dec(v_h__1_2_);
v_a_4_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_a_4_);
lean_dec_ref_known(v_x_1_, 1);
v___x_5_ = lean_apply_1(v_h__2_3_, v_a_4_);
return v___x_5_;
}
else
{
lean_object* v_a_6_; lean_object* v___x_7_; 
lean_dec(v_h__2_3_);
v_a_6_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_a_6_);
lean_dec_ref_known(v_x_1_, 1);
v___x_7_ = lean_apply_1(v_h__1_2_, v_a_6_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Except_instWPMonad_match__1_splitter(lean_object* v_00_u03b5_8_, lean_object* v_00_u03b1_9_, lean_object* v_motive_10_, lean_object* v_x_11_, lean_object* v_h__1_12_, lean_object* v_h__2_13_){
_start:
{
if (lean_obj_tag(v_x_11_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
lean_dec(v_h__1_12_);
v_a_14_ = lean_ctor_get(v_x_11_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v_x_11_, 1);
v___x_15_ = lean_apply_1(v_h__2_13_, v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v___x_17_; 
lean_dec(v_h__2_13_);
v_a_16_ = lean_ctor_get(v_x_11_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v_x_11_, 1);
v___x_17_ = lean_apply_1(v_h__1_12_, v_a_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0(size_t v_sz_63_, size_t v_i_64_, lean_object* v_bs_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = lean_usize_dec_lt(v_i_64_, v_sz_63_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v_bs_65_);
return v___x_67_;
}
else
{
lean_object* v_v_68_; lean_object* v___x_69_; lean_object* v_bs_x27_70_; size_t v___x_71_; size_t v___x_72_; lean_object* v___x_73_; 
v_v_68_ = lean_array_uget(v_bs_65_, v_i_64_);
v___x_69_ = lean_unsigned_to_nat(0u);
v_bs_x27_70_ = lean_array_uset(v_bs_65_, v_i_64_, v___x_69_);
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_add(v_i_64_, v___x_71_);
v___x_73_ = lean_array_uset(v_bs_x27_70_, v_i_64_, v_v_68_);
v_i_64_ = v___x_72_;
v_bs_65_ = v___x_73_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0___boxed(lean_object* v_sz_75_, lean_object* v_i_76_, lean_object* v_bs_77_){
_start:
{
size_t v_sz_boxed_78_; size_t v_i_boxed_79_; lean_object* v_res_80_; 
v_sz_boxed_78_ = lean_unbox_usize(v_sz_75_);
lean_dec(v_sz_75_);
v_i_boxed_79_ = lean_unbox_usize(v_i_76_);
lean_dec(v_i_76_);
v_res_80_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0(v_sz_boxed_78_, v_i_boxed_79_, v_bs_77_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1(uint8_t v___x_81_, lean_object* v_as_82_, size_t v_i_83_, size_t v_stop_84_, lean_object* v_b_85_){
_start:
{
lean_object* v___y_87_; uint8_t v___x_91_; 
v___x_91_ = lean_usize_dec_eq(v_i_83_, v_stop_84_);
if (v___x_91_ == 0)
{
lean_object* v_fst_92_; uint8_t v___x_93_; 
v_fst_92_ = lean_ctor_get(v_b_85_, 0);
v___x_93_ = lean_unbox(v_fst_92_);
if (v___x_93_ == 0)
{
lean_object* v_snd_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_102_; 
v_snd_94_ = lean_ctor_get(v_b_85_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v_b_85_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; 
v_unused_103_ = lean_ctor_get(v_b_85_, 0);
lean_dec(v_unused_103_);
v___x_96_ = v_b_85_;
v_isShared_97_ = v_isSharedCheck_102_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_snd_94_);
lean_dec(v_b_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_102_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_98_ = lean_box(v___x_81_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v___x_98_);
v___x_100_ = v___x_96_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_snd_94_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
v___y_87_ = v___x_100_;
goto v___jp_86_;
}
}
}
else
{
lean_object* v_snd_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_114_; 
v_snd_104_ = lean_ctor_get(v_b_85_, 1);
v_isSharedCheck_114_ = !lean_is_exclusive(v_b_85_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v_b_85_, 0);
lean_dec(v_unused_115_);
v___x_106_ = v_b_85_;
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_snd_104_);
lean_dec(v_b_85_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_112_; 
v___x_108_ = lean_array_uget_borrowed(v_as_82_, v_i_83_);
lean_inc(v___x_108_);
v___x_109_ = lean_array_push(v_snd_104_, v___x_108_);
v___x_110_ = lean_box(v___x_91_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_109_);
lean_ctor_set(v___x_106_, 0, v___x_110_);
v___x_112_ = v___x_106_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_109_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
v___y_87_ = v___x_112_;
goto v___jp_86_;
}
}
}
}
else
{
return v_b_85_;
}
v___jp_86_:
{
size_t v___x_88_; size_t v___x_89_; 
v___x_88_ = ((size_t)1ULL);
v___x_89_ = lean_usize_add(v_i_83_, v___x_88_);
v_i_83_ = v___x_89_;
v_b_85_ = v___y_87_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1___boxed(lean_object* v___x_116_, lean_object* v_as_117_, lean_object* v_i_118_, lean_object* v_stop_119_, lean_object* v_b_120_){
_start:
{
uint8_t v___x_4611__boxed_121_; size_t v_i_boxed_122_; size_t v_stop_boxed_123_; lean_object* v_res_124_; 
v___x_4611__boxed_121_ = lean_unbox(v___x_116_);
v_i_boxed_122_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_stop_boxed_123_ = lean_unbox_usize(v_stop_119_);
lean_dec(v_stop_119_);
v_res_124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1(v___x_4611__boxed_121_, v_as_117_, v_i_boxed_122_, v_stop_boxed_123_, v_b_120_);
lean_dec_ref(v_as_117_);
return v_res_124_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__5));
v___x_136_ = l_String_toRawSubstring_x27(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Array_mkArray0(lean_box(0));
return v___x_169_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__22));
v___x_173_ = l_String_toRawSubstring_x27(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1(lean_object* v_x_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = ((lean_object*)(l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__4));
lean_inc(v_x_188_);
v___x_192_ = l_Lean_Syntax_isOfKind(v_x_188_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v_x_188_);
v___x_193_ = lean_box(1);
v___x_194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set(v___x_194_, 1, v_a_190_);
return v___x_194_;
}
else
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___y_198_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_unsigned_to_nat(1u);
v___x_257_ = l_Lean_Syntax_getArg(v_x_188_, v___x_196_);
lean_dec(v_x_188_);
v___x_258_ = l_Lean_Syntax_getArgs(v___x_257_);
lean_dec(v___x_257_);
v___x_259_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__29));
v___x_260_ = lean_array_get_size(v___x_258_);
v___x_261_ = lean_nat_dec_lt(v___x_195_, v___x_260_);
if (v___x_261_ == 0)
{
lean_dec_ref(v___x_258_);
v___y_198_ = v___x_259_;
goto v___jp_197_;
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_262_ = lean_box(v___x_192_);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_259_);
v___x_264_ = lean_nat_dec_le(v___x_260_, v___x_260_);
if (v___x_264_ == 0)
{
if (v___x_261_ == 0)
{
lean_dec_ref_known(v___x_263_, 2);
lean_dec_ref(v___x_258_);
v___y_198_ = v___x_259_;
goto v___jp_197_;
}
else
{
size_t v___x_265_; size_t v___x_266_; lean_object* v___x_267_; lean_object* v_snd_268_; 
v___x_265_ = ((size_t)0ULL);
v___x_266_ = lean_usize_of_nat(v___x_260_);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1(v___x_192_, v___x_258_, v___x_265_, v___x_266_, v___x_263_);
lean_dec_ref(v___x_258_);
v_snd_268_ = lean_ctor_get(v___x_267_, 1);
lean_inc(v_snd_268_);
lean_dec_ref(v___x_267_);
v___y_198_ = v_snd_268_;
goto v___jp_197_;
}
}
else
{
size_t v___x_269_; size_t v___x_270_; lean_object* v___x_271_; lean_object* v_snd_272_; 
v___x_269_ = ((size_t)0ULL);
v___x_270_ = lean_usize_of_nat(v___x_260_);
v___x_271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__1(v___x_192_, v___x_258_, v___x_269_, v___x_270_, v___x_263_);
lean_dec_ref(v___x_258_);
v_snd_272_ = lean_ctor_get(v___x_271_, 1);
lean_inc(v_snd_272_);
lean_dec_ref(v___x_271_);
v___y_198_ = v_snd_272_;
goto v___jp_197_;
}
}
v___jp_197_:
{
size_t v_sz_199_; size_t v___x_200_; lean_object* v___x_201_; 
v_sz_199_ = lean_array_size(v___y_198_);
v___x_200_ = ((size_t)0ULL);
v___x_201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1_spec__0(v_sz_199_, v___x_200_, v___y_198_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(1);
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v_a_190_);
return v___x_203_;
}
else
{
lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v_P_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_Qs_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_val_204_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_201_, 1);
v___x_205_ = lean_box(0);
v_P_206_ = lean_array_get(v___x_205_, v_val_204_, v___x_195_);
v___x_207_ = lean_array_to_list(v_val_204_);
v___x_208_ = l_List_drop___redArg(v___x_196_, v___x_207_);
lean_dec(v___x_207_);
v_Qs_209_ = lean_array_mk(v___x_208_);
v___x_210_ = lean_array_get_size(v_Qs_209_);
v___x_211_ = lean_nat_dec_eq(v___x_210_, v___x_195_);
if (v___x_211_ == 0)
{
lean_object* v_quotContext_212_; lean_object* v_currMacroScope_213_; lean_object* v_ref_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_quotContext_212_ = lean_ctor_get(v_a_189_, 1);
v_currMacroScope_213_ = lean_ctor_get(v_a_189_, 2);
v_ref_214_ = lean_ctor_get(v_a_189_, 5);
v___x_215_ = l_Lean_SourceInfo_fromRef(v_ref_214_, v___x_211_);
v___x_216_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4));
v___x_217_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6);
v___x_218_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9));
lean_inc(v_currMacroScope_213_);
lean_inc(v_quotContext_212_);
v___x_219_ = l_Lean_addMacroScope(v_quotContext_212_, v___x_218_, v_currMacroScope_213_);
v___x_220_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__14));
lean_inc_n(v___x_215_, 6);
v___x_221_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_221_, 0, v___x_215_);
lean_ctor_set(v___x_221_, 1, v___x_217_);
lean_ctor_set(v___x_221_, 2, v___x_219_);
lean_ctor_set(v___x_221_, 3, v___x_220_);
v___x_222_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__16));
v___x_223_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__18));
v___x_224_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__19));
v___x_225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_215_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__20);
v___x_227_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__21));
v___x_228_ = l_Lean_Syntax_SepArray_ofElems(v___x_227_, v_Qs_209_);
lean_dec_ref(v_Qs_209_);
v___x_229_ = l_Array_append___redArg(v___x_226_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_230_, 0, v___x_215_);
lean_ctor_set(v___x_230_, 1, v___x_222_);
lean_ctor_set(v___x_230_, 2, v___x_229_);
v___x_231_ = ((lean_object*)(l_Std_Internal_Do_termInvariant_u27e8___x3b_u27e9___closed__16));
v___x_232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_215_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = l_Lean_Syntax_node3(v___x_215_, v___x_223_, v___x_225_, v___x_230_, v___x_232_);
v___x_234_ = l_Lean_Syntax_node2(v___x_215_, v___x_222_, v_P_206_, v___x_233_);
v___x_235_ = l_Lean_Syntax_node2(v___x_215_, v___x_216_, v___x_221_, v___x_234_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_a_190_);
return v___x_236_;
}
else
{
lean_object* v_quotContext_237_; lean_object* v_currMacroScope_238_; lean_object* v_ref_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec_ref(v_Qs_209_);
v_quotContext_237_ = lean_ctor_get(v_a_189_, 1);
v_currMacroScope_238_ = lean_ctor_get(v_a_189_, 2);
v_ref_239_ = lean_ctor_get(v_a_189_, 5);
v___x_240_ = 0;
v___x_241_ = l_Lean_SourceInfo_fromRef(v_ref_239_, v___x_240_);
v___x_242_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__4));
v___x_243_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__6);
v___x_244_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__9));
lean_inc_n(v_currMacroScope_238_, 2);
lean_inc_n(v_quotContext_237_, 2);
v___x_245_ = l_Lean_addMacroScope(v_quotContext_237_, v___x_244_, v_currMacroScope_238_);
v___x_246_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__14));
lean_inc_n(v___x_241_, 3);
v___x_247_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_247_, 0, v___x_241_);
lean_ctor_set(v___x_247_, 1, v___x_243_);
lean_ctor_set(v___x_247_, 2, v___x_245_);
lean_ctor_set(v___x_247_, 3, v___x_246_);
v___x_248_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__16));
v___x_249_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__23);
v___x_250_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__26));
v___x_251_ = l_Lean_addMacroScope(v_quotContext_237_, v___x_250_, v_currMacroScope_238_);
v___x_252_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___closed__28));
v___x_253_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_253_, 0, v___x_241_);
lean_ctor_set(v___x_253_, 1, v___x_249_);
lean_ctor_set(v___x_253_, 2, v___x_251_);
lean_ctor_set(v___x_253_, 3, v___x_252_);
v___x_254_ = l_Lean_Syntax_node2(v___x_241_, v___x_248_, v_P_206_, v___x_253_);
v___x_255_ = l_Lean_Syntax_node2(v___x_241_, v___x_242_, v___x_247_, v___x_254_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v_a_190_);
return v___x_256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1___boxed(lean_object* v_x_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Std_Internal_Do___aux__Std__Internal__Do__Triple__SpecLemmas______macroRules__Std__Internal__Do__termInvariant_u27e8___x3b_u27e9__1(v_x_273_, v_a_274_, v_a_275_);
lean_dec_ref(v_a_274_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__List_forIn_x27__cons_match__1_splitter___redArg(lean_object* v_x_277_, lean_object* v_h__1_278_, lean_object* v_h__2_279_){
_start:
{
if (lean_obj_tag(v_x_277_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_281_; 
lean_dec(v_h__2_279_);
v_a_280_ = lean_ctor_get(v_x_277_, 0);
lean_inc(v_a_280_);
lean_dec_ref_known(v_x_277_, 1);
v___x_281_ = lean_apply_1(v_h__1_278_, v_a_280_);
return v___x_281_;
}
else
{
lean_object* v_a_282_; lean_object* v___x_283_; 
lean_dec(v_h__1_278_);
v_a_282_ = lean_ctor_get(v_x_277_, 0);
lean_inc(v_a_282_);
lean_dec_ref_known(v_x_277_, 1);
v___x_283_ = lean_apply_1(v_h__2_279_, v_a_282_);
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__List_forIn_x27__cons_match__1_splitter(lean_object* v_00_u03b2_284_, lean_object* v_motive_285_, lean_object* v_x_286_, lean_object* v_h__1_287_, lean_object* v_h__2_288_){
_start:
{
if (lean_obj_tag(v_x_286_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_290_; 
lean_dec(v_h__2_288_);
v_a_289_ = lean_ctor_get(v_x_286_, 0);
lean_inc(v_a_289_);
lean_dec_ref_known(v_x_286_, 1);
v___x_290_ = lean_apply_1(v_h__1_287_, v_a_289_);
return v___x_290_;
}
else
{
lean_object* v_a_291_; lean_object* v___x_292_; 
lean_dec(v_h__1_287_);
v_a_291_ = lean_ctor_get(v_x_286_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v_x_286_, 1);
v___x_292_ = lean_apply_1(v_h__2_288_, v_a_291_);
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Spec_forIn_x27__list_match__1_splitter___redArg(lean_object* v_r_293_, lean_object* v_h__1_294_, lean_object* v_h__2_295_){
_start:
{
if (lean_obj_tag(v_r_293_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_297_; 
lean_dec(v_h__1_294_);
v_a_296_ = lean_ctor_get(v_r_293_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v_r_293_, 1);
v___x_297_ = lean_apply_1(v_h__2_295_, v_a_296_);
return v___x_297_;
}
else
{
lean_object* v_a_298_; lean_object* v___x_299_; 
lean_dec(v_h__2_295_);
v_a_298_ = lean_ctor_get(v_r_293_, 0);
lean_inc(v_a_298_);
lean_dec_ref_known(v_r_293_, 1);
v___x_299_ = lean_apply_1(v_h__1_294_, v_a_298_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Std_Internal_Do_Spec_forIn_x27__list_match__1_splitter(lean_object* v_00_u03b2_300_, lean_object* v_motive_301_, lean_object* v_r_302_, lean_object* v_h__1_303_, lean_object* v_h__2_304_){
_start:
{
if (lean_obj_tag(v_r_302_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_306_; 
lean_dec(v_h__1_303_);
v_a_305_ = lean_ctor_get(v_r_302_, 0);
lean_inc(v_a_305_);
lean_dec_ref_known(v_r_302_, 1);
v___x_306_ = lean_apply_1(v_h__2_304_, v_a_305_);
return v___x_306_;
}
else
{
lean_object* v_a_307_; lean_object* v___x_308_; 
lean_dec(v_h__2_304_);
v_a_307_ = lean_ctor_get(v_r_302_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v_r_302_, 1);
v___x_308_ = lean_apply_1(v_h__1_303_, v_a_307_);
return v___x_308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Lean_Loop_forIn_match__1_splitter___redArg(lean_object* v_____do__lift_309_, lean_object* v_h__1_310_, lean_object* v_h__2_311_){
_start:
{
if (lean_obj_tag(v_____do__lift_309_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; 
lean_dec(v_h__2_311_);
v_a_312_ = lean_ctor_get(v_____do__lift_309_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v_____do__lift_309_, 1);
v___x_313_ = lean_apply_1(v_h__1_310_, v_a_312_);
return v___x_313_;
}
else
{
lean_object* v_a_314_; lean_object* v___x_315_; 
lean_dec(v_h__1_310_);
v_a_314_ = lean_ctor_get(v_____do__lift_309_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v_____do__lift_309_, 1);
v___x_315_ = lean_apply_1(v_h__2_311_, v_a_314_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_SpecLemmas_0__Lean_Loop_forIn_match__1_splitter(lean_object* v_00_u03b2_316_, lean_object* v_motive_317_, lean_object* v_____do__lift_318_, lean_object* v_h__1_319_, lean_object* v_h__2_320_){
_start:
{
if (lean_obj_tag(v_____do__lift_318_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_322_; 
lean_dec(v_h__2_320_);
v_a_321_ = lean_ctor_get(v_____do__lift_318_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v_____do__lift_318_, 1);
v___x_322_ = lean_apply_1(v_h__1_319_, v_a_321_);
return v___x_322_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_324_; 
lean_dec(v_h__1_319_);
v_a_323_ = lean_ctor_get(v_____do__lift_318_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v_____do__lift_318_, 1);
v___x_324_ = lean_apply_1(v_h__2_320_, v_a_323_);
return v___x_324_;
}
}
}
lean_object* runtime_initialize_Std_Internal_Do_Triple_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Do_Triple_SpecLemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Lemmas_Combinators_FilterMap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Range(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Mod(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Slice_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lemmas_Splits(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Termination(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lemmas_Iterate(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Internal_Do_Triple_SpecLemmas(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Internal_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Lemmas_Combinators_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Mod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Slice_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lemmas_Splits(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Termination(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lemmas_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Internal_Do_Triple_SpecLemmas(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Do_Triple_Basic(uint8_t builtin);
lean_object* initialize_Std_Do_Triple_SpecLemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic(uint8_t builtin);
lean_object* initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Lemmas_Combinators_FilterMap(uint8_t builtin);
lean_object* initialize_Init_Data_Range(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_Range(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_List_Range(uint8_t builtin);
lean_object* initialize_Init_Data_List_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Mod(uint8_t builtin);
lean_object* initialize_Init_Data_Slice_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lemmas_Splits(uint8_t builtin);
lean_object* initialize_Init_Data_String_Termination(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lemmas_Iterate(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Do_Triple_SpecLemmas(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Lemmas_Combinators_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Mod(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Slice_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lemmas_Splits(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Termination(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lemmas_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Internal_Do_Triple_SpecLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Internal_Do_Triple_SpecLemmas(builtin);
}
#ifdef __cplusplus
}
#endif
