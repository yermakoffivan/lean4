// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Misc
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoConfig_checkNoCapture(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVarsM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_declareLabel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_withDuplicableCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoSkip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoSkip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoSkip___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_elabDoSkip___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoSkip___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoSkip___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_elabDoSkip___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoSkip"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 10, 110, 145, 7, 15, 250, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_elabDoExpr___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_elabDoExpr___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoExpr"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(159, 200, 228, 172, 227, 32, 11, 22)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoNested___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_elabDoNested___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_elabDoNested___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoNested___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Do_elabDoNested___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoNested___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l_Lean_Elab_Do_elabDoNested___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoNested___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoNested"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 1, 47, 68, 131, 32, 43, 94)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfProp"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__5_value),LEAN_SCALAR_PTR_LITERAL(55, 147, 210, 58, 86, 191, 41, 151)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__9;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__11_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUnless___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__13_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__14_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUnless___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Lean_Elab_Do_elabDoUnless___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoUnless___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoUnless"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 150, 43, 228, 51, 25, 139, 111)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dbgTrace"};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dbg_trace"};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoDbgTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoDbgTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dbg_trace body"};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoDbgTrace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__2_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoDbgTrace___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoDbgTrace"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 164, 10, 186, 155, 223, 105, 130)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "assert!"};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoAssert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoAssert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoAssert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "assert! body"};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoAssert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__2_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoAssert___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoAssert___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoAssert"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 163, 6, 149, 129, 216, 204, 171)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "debugAssert"};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "debug_assert!"};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoDebugAssert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoDebugAssert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "debug_assert! body"};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoDebugAssert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__2_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoDebugAssert___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "elabDoDebugAssert"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoSkip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 134, 27, 234, 76, 75, 178, 233)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(v_00_u03b1_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip(lean_object* v_stx_40_, lean_object* v_dec_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__5));
lean_inc(v_stx_40_);
v___x_51_ = l_Lean_Syntax_isOfKind(v_stx_40_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; 
lean_dec_ref(v_dec_41_);
lean_dec(v_stx_40_);
v___x_52_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_52_;
}
else
{
lean_object* v___x_53_; lean_object* v_tk_54_; lean_object* v___x_55_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v_tk_54_ = l_Lean_Syntax_getArg(v_stx_40_, v___x_53_);
lean_dec(v_stx_40_);
v___x_55_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_41_, v_tk_54_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
lean_dec(v_tk_54_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; lean_object* v___x_57_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_55_, 1);
v___x_57_ = l_Lean_Elab_Do_DoElemCont_continueWithUnit(v_a_56_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_57_;
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_55_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_55_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip___boxed(lean_object* v_stx_66_, lean_object* v_dec_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Elab_Do_elabDoSkip(v_stx_66_, v_dec_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec_ref(v_a_68_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1(){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_87_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__5));
v___x_88_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3));
v___x_89_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSkip___boxed), 10, 0);
v___x_90_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_86_, v___x_87_, v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___boxed(lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr(lean_object* v_stx_99_, lean_object* v_dec_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lean_Elab_Do_elabDoExpr___closed__1));
lean_inc(v_stx_99_);
v___x_110_ = l_Lean_Syntax_isOfKind(v_stx_99_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
lean_dec_ref(v_dec_100_);
lean_dec(v_stx_99_);
v___x_111_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_111_;
}
else
{
lean_object* v_resultType_112_; lean_object* v___x_113_; 
v_resultType_112_ = lean_ctor_get(v_dec_100_, 1);
lean_inc_ref(v_resultType_112_);
v___x_113_ = l_Lean_Elab_Do_mkMonadApp(v_resultType_112_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_127_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_127_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_127_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_127_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = l_Lean_Syntax_getArg(v_stx_99_, v___x_118_);
lean_dec(v_stx_99_);
if (v_isShared_117_ == 0)
{
lean_ctor_set_tag(v___x_116_, 1);
v___x_121_ = v___x_116_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_114_);
v___x_121_ = v_reuseFailAlloc_126_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_box(0);
v___x_123_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_119_, v___x_121_, v___x_110_, v___x_110_, v___x_122_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_125_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref_known(v___x_123_, 1);
v___x_125_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v_dec_100_, v_a_124_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
return v___x_125_;
}
else
{
lean_dec_ref(v_dec_100_);
return v___x_123_;
}
}
}
}
else
{
lean_dec_ref(v_dec_100_);
lean_dec(v_stx_99_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr___boxed(lean_object* v_stx_128_, lean_object* v_dec_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Elab_Do_elabDoExpr(v_stx_128_, v_dec_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec_ref(v_a_130_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1(){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_146_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_147_ = ((lean_object*)(l_Lean_Elab_Do_elabDoExpr___closed__1));
v___x_148_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1));
v___x_149_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoExpr___boxed), 10, 0);
v___x_150_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_146_, v___x_147_, v___x_148_, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___boxed(lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__0(lean_object* v_k_153_, lean_object* v_x_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v___x_163_; 
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
lean_inc(v___y_159_);
lean_inc_ref(v___y_158_);
lean_inc(v___y_157_);
lean_inc_ref(v___y_156_);
lean_inc_ref(v___y_155_);
v___x_163_ = lean_apply_8(v_k_153_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, lean_box(0));
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__0___boxed(lean_object* v_k_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_Elab_Do_elabDoNested___lam__0(v_k_164_, v_x_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec_ref(v_x_165_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0(lean_object* v_k_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v_b_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v___x_185_; 
lean_inc(v___y_183_);
lean_inc_ref(v___y_182_);
lean_inc(v___y_181_);
lean_inc_ref(v___y_180_);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc_ref(v___y_176_);
v___x_185_ = lean_apply_9(v_k_175_, v_b_179_, v___y_176_, v___y_177_, v___y_178_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, lean_box(0));
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v_b_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0(v_k_186_, v___y_187_, v___y_188_, v___y_189_, v_b_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec_ref(v___y_187_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg(lean_object* v_name_197_, lean_object* v_type_198_, lean_object* v_val_199_, lean_object* v_k_200_, uint8_t v_nondep_201_, uint8_t v_kind_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v___f_211_; lean_object* v___x_212_; 
lean_inc(v___y_205_);
lean_inc_ref(v___y_204_);
lean_inc_ref(v___y_203_);
v___f_211_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_211_, 0, v_k_200_);
lean_closure_set(v___f_211_, 1, v___y_203_);
lean_closure_set(v___f_211_, 2, v___y_204_);
lean_closure_set(v___f_211_, 3, v___y_205_);
v___x_212_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_197_, v_type_198_, v_val_199_, v___f_211_, v_nondep_201_, v_kind_202_, v___y_206_, v___y_207_, v___y_208_, v___y_209_);
if (lean_obj_tag(v___x_212_) == 0)
{
return v___x_212_;
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_212_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_212_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg___boxed(lean_object* v_name_221_, lean_object* v_type_222_, lean_object* v_val_223_, lean_object* v_k_224_, lean_object* v_nondep_225_, lean_object* v_kind_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v_nondep_boxed_235_; uint8_t v_kind_boxed_236_; lean_object* v_res_237_; 
v_nondep_boxed_235_ = lean_unbox(v_nondep_225_);
v_kind_boxed_236_ = lean_unbox(v_kind_226_);
v_res_237_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg(v_name_221_, v_type_222_, v_val_223_, v_k_224_, v_nondep_boxed_235_, v_kind_boxed_236_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec_ref(v___y_227_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0(lean_object* v_k_238_, lean_object* v_rhs_239_, lean_object* v_x_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v___x_249_; 
lean_inc(v___y_247_);
lean_inc_ref(v___y_246_);
lean_inc(v___y_245_);
lean_inc_ref(v___y_244_);
lean_inc(v___y_243_);
lean_inc_ref(v___y_242_);
lean_inc_ref(v___y_241_);
lean_inc_ref(v_x_240_);
v___x_249_ = lean_apply_9(v_k_238_, v_x_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, lean_box(0));
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = lean_unsigned_to_nat(1u);
v___x_252_ = lean_mk_empty_array_with_capacity(v___x_251_);
lean_inc_ref(v___x_252_);
v___x_253_ = lean_array_push(v___x_252_, v_x_240_);
v___x_254_ = lean_array_push(v___x_252_, v_rhs_239_);
v___x_255_ = l_Lean_Expr_replaceFVarsM(v_a_250_, v___x_253_, v___x_254_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
lean_dec_ref(v___x_254_);
lean_dec_ref(v___x_253_);
return v___x_255_;
}
else
{
lean_dec_ref(v_x_240_);
lean_dec_ref(v_rhs_239_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0___boxed(lean_object* v_k_256_, lean_object* v_rhs_257_, lean_object* v_x_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0(v_k_256_, v_rhs_257_, v_x_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0(lean_object* v_name_268_, lean_object* v_type_269_, lean_object* v_rhs_270_, lean_object* v_k_271_, uint8_t v_nondep_272_, uint8_t v_kind_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___f_282_; lean_object* v___x_283_; 
lean_inc_ref(v_rhs_270_);
v___f_282_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___lam__0___boxed), 11, 2);
lean_closure_set(v___f_282_, 0, v_k_271_);
lean_closure_set(v___f_282_, 1, v_rhs_270_);
v___x_283_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg(v_name_268_, v_type_269_, v_rhs_270_, v___f_282_, v_nondep_272_, v_kind_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0___boxed(lean_object* v_name_284_, lean_object* v_type_285_, lean_object* v_rhs_286_, lean_object* v_k_287_, lean_object* v_nondep_288_, lean_object* v_kind_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
uint8_t v_nondep_boxed_298_; uint8_t v_kind_boxed_299_; lean_object* v_res_300_; 
v_nondep_boxed_298_ = lean_unbox(v_nondep_288_);
v_kind_boxed_299_ = lean_unbox(v_kind_289_);
v_res_300_ = l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0(v_name_284_, v_type_285_, v_rhs_286_, v_k_287_, v_nondep_boxed_298_, v_kind_boxed_299_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__1(lean_object* v_resultName_301_, lean_object* v___f_302_, uint8_t v___x_303_, lean_object* v_e_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
lean_inc(v___y_311_);
lean_inc_ref(v___y_310_);
lean_inc(v___y_309_);
lean_inc_ref(v___y_308_);
lean_inc_ref(v_e_304_);
v___x_313_ = lean_infer_type(v_e_304_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; uint8_t v___x_315_; lean_object* v___x_316_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = l_Lean_LocalDeclKind_ofBinderName(v_resultName_301_);
v___x_316_ = l_Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0(v_resultName_301_, v_a_314_, v_e_304_, v___f_302_, v___x_303_, v___x_315_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
return v___x_316_;
}
else
{
lean_dec_ref(v_e_304_);
lean_dec_ref(v___f_302_);
lean_dec(v_resultName_301_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__1___boxed(lean_object* v_resultName_317_, lean_object* v___f_318_, lean_object* v___x_319_, lean_object* v_e_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
uint8_t v___x_5770__boxed_329_; lean_object* v_res_330_; 
v___x_5770__boxed_329_ = lean_unbox(v___x_319_);
v_res_330_ = l_Lean_Elab_Do_elabDoNested___lam__1(v_resultName_317_, v___f_318_, v___x_5770__boxed_329_, v_e_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__2(uint8_t v___x_331_, lean_object* v___x_332_, lean_object* v_val_333_, lean_object* v_dec_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_resultName_343_; lean_object* v_resultType_344_; lean_object* v_k_345_; lean_object* v___f_346_; lean_object* v___x_347_; lean_object* v___f_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_resultName_343_ = lean_ctor_get(v_dec_334_, 0);
v_resultType_344_ = lean_ctor_get(v_dec_334_, 1);
v_k_345_ = lean_ctor_get(v_dec_334_, 2);
lean_inc_ref(v_k_345_);
v___f_346_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoNested___lam__0___boxed), 10, 1);
lean_closure_set(v___f_346_, 0, v_k_345_);
v___x_347_ = lean_box(v___x_331_);
lean_inc(v_resultName_343_);
v___f_348_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoNested___lam__1___boxed), 12, 3);
lean_closure_set(v___f_348_, 0, v_resultName_343_);
lean_closure_set(v___f_348_, 1, v___f_346_);
lean_closure_set(v___f_348_, 2, v___x_347_);
lean_inc_ref(v_resultType_344_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v_resultType_344_);
lean_ctor_set(v___x_349_, 1, v___f_348_);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
v___x_351_ = lean_box(v___x_331_);
v___x_352_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_352_, 0, v___x_332_);
lean_closure_set(v___x_352_, 1, v_dec_334_);
lean_closure_set(v___x_352_, 2, v___x_351_);
v___x_353_ = l_Lean_Elab_Do_declareLabel___redArg(v_val_333_, v___x_350_, v___x_352_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___lam__2___boxed(lean_object* v___x_354_, lean_object* v___x_355_, lean_object* v_val_356_, lean_object* v_dec_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
uint8_t v___x_5808__boxed_366_; lean_object* v_res_367_; 
v___x_5808__boxed_366_ = lean_unbox(v___x_354_);
v_res_367_ = l_Lean_Elab_Do_elabDoNested___lam__2(v___x_5808__boxed_366_, v___x_355_, v_val_356_, v_dec_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec_ref(v___y_358_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(lean_object* v_k_368_, lean_object* v_t_369_){
_start:
{
if (lean_obj_tag(v_t_369_) == 0)
{
lean_object* v_k_370_; lean_object* v_v_371_; lean_object* v_l_372_; lean_object* v_r_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_1027_; 
v_k_370_ = lean_ctor_get(v_t_369_, 1);
v_v_371_ = lean_ctor_get(v_t_369_, 2);
v_l_372_ = lean_ctor_get(v_t_369_, 3);
v_r_373_ = lean_ctor_get(v_t_369_, 4);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_t_369_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v_t_369_, 0);
lean_dec(v_unused_1028_);
v___x_375_ = v_t_369_;
v_isShared_376_ = v_isSharedCheck_1027_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_r_373_);
lean_inc(v_l_372_);
lean_inc(v_v_371_);
lean_inc(v_k_370_);
lean_dec(v_t_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_1027_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
uint8_t v___x_377_; 
v___x_377_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_368_, v_k_370_);
switch(v___x_377_)
{
case 0:
{
lean_object* v_impl_378_; lean_object* v___x_379_; 
v_impl_378_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(v_k_368_, v_l_372_);
v___x_379_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_378_) == 0)
{
if (lean_obj_tag(v_r_373_) == 0)
{
lean_object* v_size_380_; lean_object* v_size_381_; lean_object* v_k_382_; lean_object* v_v_383_; lean_object* v_l_384_; lean_object* v_r_385_; lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_size_380_ = lean_ctor_get(v_impl_378_, 0);
lean_inc(v_size_380_);
v_size_381_ = lean_ctor_get(v_r_373_, 0);
v_k_382_ = lean_ctor_get(v_r_373_, 1);
v_v_383_ = lean_ctor_get(v_r_373_, 2);
v_l_384_ = lean_ctor_get(v_r_373_, 3);
lean_inc(v_l_384_);
v_r_385_ = lean_ctor_get(v_r_373_, 4);
v___x_386_ = lean_unsigned_to_nat(3u);
v___x_387_ = lean_nat_mul(v___x_386_, v_size_380_);
v___x_388_ = lean_nat_dec_lt(v___x_387_, v_size_381_);
lean_dec(v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
lean_dec(v_l_384_);
v___x_389_ = lean_nat_add(v___x_379_, v_size_380_);
lean_dec(v_size_380_);
v___x_390_ = lean_nat_add(v___x_389_, v_size_381_);
lean_dec(v___x_389_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 3, v_impl_378_);
lean_ctor_set(v___x_375_, 0, v___x_390_);
v___x_392_ = v___x_375_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_393_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_393_, 3, v_impl_378_);
lean_ctor_set(v_reuseFailAlloc_393_, 4, v_r_373_);
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
lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_457_; 
lean_inc(v_r_385_);
lean_inc(v_v_383_);
lean_inc(v_k_382_);
lean_inc(v_size_381_);
v_isSharedCheck_457_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; lean_object* v_unused_459_; lean_object* v_unused_460_; lean_object* v_unused_461_; lean_object* v_unused_462_; 
v_unused_458_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_r_373_, 2);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_r_373_, 1);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_462_);
v___x_395_ = v_r_373_;
v_isShared_396_ = v_isSharedCheck_457_;
goto v_resetjp_394_;
}
else
{
lean_dec(v_r_373_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_457_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_size_397_; lean_object* v_k_398_; lean_object* v_v_399_; lean_object* v_l_400_; lean_object* v_r_401_; lean_object* v_size_402_; lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v_size_397_ = lean_ctor_get(v_l_384_, 0);
v_k_398_ = lean_ctor_get(v_l_384_, 1);
v_v_399_ = lean_ctor_get(v_l_384_, 2);
v_l_400_ = lean_ctor_get(v_l_384_, 3);
v_r_401_ = lean_ctor_get(v_l_384_, 4);
v_size_402_ = lean_ctor_get(v_r_385_, 0);
v___x_403_ = lean_unsigned_to_nat(2u);
v___x_404_ = lean_nat_mul(v___x_403_, v_size_402_);
v___x_405_ = lean_nat_dec_lt(v_size_397_, v___x_404_);
lean_dec(v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_433_; 
lean_inc(v_r_401_);
lean_inc(v_l_400_);
lean_inc(v_v_399_);
lean_inc(v_k_398_);
v_isSharedCheck_433_ = !lean_is_exclusive(v_l_384_);
if (v_isSharedCheck_433_ == 0)
{
lean_object* v_unused_434_; lean_object* v_unused_435_; lean_object* v_unused_436_; lean_object* v_unused_437_; lean_object* v_unused_438_; 
v_unused_434_ = lean_ctor_get(v_l_384_, 4);
lean_dec(v_unused_434_);
v_unused_435_ = lean_ctor_get(v_l_384_, 3);
lean_dec(v_unused_435_);
v_unused_436_ = lean_ctor_get(v_l_384_, 2);
lean_dec(v_unused_436_);
v_unused_437_ = lean_ctor_get(v_l_384_, 1);
lean_dec(v_unused_437_);
v_unused_438_ = lean_ctor_get(v_l_384_, 0);
lean_dec(v_unused_438_);
v___x_407_ = v_l_384_;
v_isShared_408_ = v_isSharedCheck_433_;
goto v_resetjp_406_;
}
else
{
lean_dec(v_l_384_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_433_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_423_; 
v___x_409_ = lean_nat_add(v___x_379_, v_size_380_);
lean_dec(v_size_380_);
v___x_410_ = lean_nat_add(v___x_409_, v_size_381_);
lean_dec(v_size_381_);
if (lean_obj_tag(v_l_400_) == 0)
{
lean_object* v_size_431_; 
v_size_431_ = lean_ctor_get(v_l_400_, 0);
lean_inc(v_size_431_);
v___y_423_ = v_size_431_;
goto v___jp_422_;
}
else
{
lean_object* v___x_432_; 
v___x_432_ = lean_unsigned_to_nat(0u);
v___y_423_ = v___x_432_;
goto v___jp_422_;
}
v___jp_411_:
{
lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_415_ = lean_nat_add(v___y_412_, v___y_414_);
lean_dec(v___y_414_);
lean_dec(v___y_412_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 4, v_r_385_);
lean_ctor_set(v___x_407_, 3, v_r_401_);
lean_ctor_set(v___x_407_, 2, v_v_383_);
lean_ctor_set(v___x_407_, 1, v_k_382_);
lean_ctor_set(v___x_407_, 0, v___x_415_);
v___x_417_ = v___x_407_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_k_382_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_v_383_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_r_401_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v_r_385_);
v___x_417_ = v_reuseFailAlloc_421_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_419_; 
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 4, v___x_417_);
lean_ctor_set(v___x_395_, 3, v___y_413_);
lean_ctor_set(v___x_395_, 2, v_v_399_);
lean_ctor_set(v___x_395_, 1, v_k_398_);
lean_ctor_set(v___x_395_, 0, v___x_410_);
v___x_419_ = v___x_395_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_410_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_k_398_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_v_399_);
lean_ctor_set(v_reuseFailAlloc_420_, 3, v___y_413_);
lean_ctor_set(v_reuseFailAlloc_420_, 4, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
v___jp_422_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = lean_nat_add(v___x_409_, v___y_423_);
lean_dec(v___y_423_);
lean_dec(v___x_409_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_l_400_);
lean_ctor_set(v___x_375_, 3, v_impl_378_);
lean_ctor_set(v___x_375_, 0, v___x_424_);
v___x_426_ = v___x_375_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_430_, 3, v_impl_378_);
lean_ctor_set(v_reuseFailAlloc_430_, 4, v_l_400_);
v___x_426_ = v_reuseFailAlloc_430_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; 
v___x_427_ = lean_nat_add(v___x_379_, v_size_402_);
if (lean_obj_tag(v_r_401_) == 0)
{
lean_object* v_size_428_; 
v_size_428_ = lean_ctor_get(v_r_401_, 0);
lean_inc(v_size_428_);
v___y_412_ = v___x_427_;
v___y_413_ = v___x_426_;
v___y_414_ = v_size_428_;
goto v___jp_411_;
}
else
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(0u);
v___y_412_ = v___x_427_;
v___y_413_ = v___x_426_;
v___y_414_ = v___x_429_;
goto v___jp_411_;
}
}
}
}
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
lean_del_object(v___x_375_);
v___x_439_ = lean_nat_add(v___x_379_, v_size_380_);
lean_dec(v_size_380_);
v___x_440_ = lean_nat_add(v___x_439_, v_size_381_);
lean_dec(v_size_381_);
v___x_441_ = lean_nat_add(v___x_439_, v_size_397_);
lean_dec(v___x_439_);
lean_inc_ref(v_impl_378_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 4, v_l_384_);
lean_ctor_set(v___x_395_, 3, v_impl_378_);
lean_ctor_set(v___x_395_, 2, v_v_371_);
lean_ctor_set(v___x_395_, 1, v_k_370_);
lean_ctor_set(v___x_395_, 0, v___x_441_);
v___x_443_ = v___x_395_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v_impl_378_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v_l_384_);
v___x_443_ = v_reuseFailAlloc_456_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_isSharedCheck_450_ = !lean_is_exclusive(v_impl_378_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; lean_object* v_unused_452_; lean_object* v_unused_453_; lean_object* v_unused_454_; lean_object* v_unused_455_; 
v_unused_451_ = lean_ctor_get(v_impl_378_, 4);
lean_dec(v_unused_451_);
v_unused_452_ = lean_ctor_get(v_impl_378_, 3);
lean_dec(v_unused_452_);
v_unused_453_ = lean_ctor_get(v_impl_378_, 2);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v_impl_378_, 1);
lean_dec(v_unused_454_);
v_unused_455_ = lean_ctor_get(v_impl_378_, 0);
lean_dec(v_unused_455_);
v___x_445_ = v_impl_378_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_dec(v_impl_378_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 4, v_r_385_);
lean_ctor_set(v___x_445_, 3, v___x_443_);
lean_ctor_set(v___x_445_, 2, v_v_383_);
lean_ctor_set(v___x_445_, 1, v_k_382_);
lean_ctor_set(v___x_445_, 0, v___x_440_);
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_440_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_k_382_);
lean_ctor_set(v_reuseFailAlloc_449_, 2, v_v_383_);
lean_ctor_set(v_reuseFailAlloc_449_, 3, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_449_, 4, v_r_385_);
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
}
}
else
{
lean_object* v_size_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v_size_463_ = lean_ctor_get(v_impl_378_, 0);
lean_inc(v_size_463_);
v___x_464_ = lean_nat_add(v___x_379_, v_size_463_);
lean_dec(v_size_463_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 3, v_impl_378_);
lean_ctor_set(v___x_375_, 0, v___x_464_);
v___x_466_ = v___x_375_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_impl_378_);
lean_ctor_set(v_reuseFailAlloc_467_, 4, v_r_373_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
else
{
if (lean_obj_tag(v_r_373_) == 0)
{
lean_object* v_l_468_; 
v_l_468_ = lean_ctor_get(v_r_373_, 3);
lean_inc(v_l_468_);
if (lean_obj_tag(v_l_468_) == 0)
{
lean_object* v_r_469_; 
v_r_469_ = lean_ctor_get(v_r_373_, 4);
lean_inc(v_r_469_);
if (lean_obj_tag(v_r_469_) == 0)
{
lean_object* v_size_470_; lean_object* v_k_471_; lean_object* v_v_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_485_; 
v_size_470_ = lean_ctor_get(v_r_373_, 0);
v_k_471_ = lean_ctor_get(v_r_373_, 1);
v_v_472_ = lean_ctor_get(v_r_373_, 2);
v_isSharedCheck_485_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; lean_object* v_unused_487_; 
v_unused_486_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_487_);
v___x_474_ = v_r_373_;
v_isShared_475_ = v_isSharedCheck_485_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_v_472_);
lean_inc(v_k_471_);
lean_inc(v_size_470_);
lean_dec(v_r_373_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_485_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v_size_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v_size_476_ = lean_ctor_get(v_l_468_, 0);
v___x_477_ = lean_nat_add(v___x_379_, v_size_470_);
lean_dec(v_size_470_);
v___x_478_ = lean_nat_add(v___x_379_, v_size_476_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 4, v_l_468_);
lean_ctor_set(v___x_474_, 3, v_impl_378_);
lean_ctor_set(v___x_474_, 2, v_v_371_);
lean_ctor_set(v___x_474_, 1, v_k_370_);
lean_ctor_set(v___x_474_, 0, v___x_478_);
v___x_480_ = v___x_474_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_484_, 3, v_impl_378_);
lean_ctor_set(v_reuseFailAlloc_484_, 4, v_l_468_);
v___x_480_ = v_reuseFailAlloc_484_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_482_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_r_469_);
lean_ctor_set(v___x_375_, 3, v___x_480_);
lean_ctor_set(v___x_375_, 2, v_v_472_);
lean_ctor_set(v___x_375_, 1, v_k_471_);
lean_ctor_set(v___x_375_, 0, v___x_477_);
v___x_482_ = v___x_375_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_k_471_);
lean_ctor_set(v_reuseFailAlloc_483_, 2, v_v_472_);
lean_ctor_set(v_reuseFailAlloc_483_, 3, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_483_, 4, v_r_469_);
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
lean_object* v_k_488_; lean_object* v_v_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_512_; 
v_k_488_ = lean_ctor_get(v_r_373_, 1);
v_v_489_ = lean_ctor_get(v_r_373_, 2);
v_isSharedCheck_512_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; lean_object* v_unused_514_; lean_object* v_unused_515_; 
v_unused_513_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_515_);
v___x_491_ = v_r_373_;
v_isShared_492_ = v_isSharedCheck_512_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_v_489_);
lean_inc(v_k_488_);
lean_dec(v_r_373_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_512_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_k_493_; lean_object* v_v_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_508_; 
v_k_493_ = lean_ctor_get(v_l_468_, 1);
v_v_494_ = lean_ctor_get(v_l_468_, 2);
v_isSharedCheck_508_ = !lean_is_exclusive(v_l_468_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; lean_object* v_unused_510_; lean_object* v_unused_511_; 
v_unused_509_ = lean_ctor_get(v_l_468_, 4);
lean_dec(v_unused_509_);
v_unused_510_ = lean_ctor_get(v_l_468_, 3);
lean_dec(v_unused_510_);
v_unused_511_ = lean_ctor_get(v_l_468_, 0);
lean_dec(v_unused_511_);
v___x_496_ = v_l_468_;
v_isShared_497_ = v_isSharedCheck_508_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_v_494_);
lean_inc(v_k_493_);
lean_dec(v_l_468_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_508_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_498_ = lean_unsigned_to_nat(3u);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 4, v_r_469_);
lean_ctor_set(v___x_496_, 3, v_r_469_);
lean_ctor_set(v___x_496_, 2, v_v_371_);
lean_ctor_set(v___x_496_, 1, v_k_370_);
lean_ctor_set(v___x_496_, 0, v___x_379_);
v___x_500_ = v___x_496_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_r_469_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_r_469_);
v___x_500_ = v_reuseFailAlloc_507_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_502_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 3, v_r_469_);
lean_ctor_set(v___x_491_, 0, v___x_379_);
v___x_502_ = v___x_491_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_k_488_);
lean_ctor_set(v_reuseFailAlloc_506_, 2, v_v_489_);
lean_ctor_set(v_reuseFailAlloc_506_, 3, v_r_469_);
lean_ctor_set(v_reuseFailAlloc_506_, 4, v_r_469_);
v___x_502_ = v_reuseFailAlloc_506_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_504_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v___x_502_);
lean_ctor_set(v___x_375_, 3, v___x_500_);
lean_ctor_set(v___x_375_, 2, v_v_494_);
lean_ctor_set(v___x_375_, 1, v_k_493_);
lean_ctor_set(v___x_375_, 0, v___x_498_);
v___x_504_ = v___x_375_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_k_493_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_v_494_);
lean_ctor_set(v_reuseFailAlloc_505_, 3, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_505_, 4, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_516_; 
v_r_516_ = lean_ctor_get(v_r_373_, 4);
lean_inc(v_r_516_);
if (lean_obj_tag(v_r_516_) == 0)
{
lean_object* v_k_517_; lean_object* v_v_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_529_; 
v_k_517_ = lean_ctor_get(v_r_373_, 1);
v_v_518_ = lean_ctor_get(v_r_373_, 2);
v_isSharedCheck_529_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; lean_object* v_unused_531_; lean_object* v_unused_532_; 
v_unused_530_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_531_);
v_unused_532_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_532_);
v___x_520_ = v_r_373_;
v_isShared_521_ = v_isSharedCheck_529_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_v_518_);
lean_inc(v_k_517_);
lean_dec(v_r_373_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_529_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_522_ = lean_unsigned_to_nat(3u);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 4, v_l_468_);
lean_ctor_set(v___x_520_, 2, v_v_371_);
lean_ctor_set(v___x_520_, 1, v_k_370_);
lean_ctor_set(v___x_520_, 0, v___x_379_);
v___x_524_ = v___x_520_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_528_, 3, v_l_468_);
lean_ctor_set(v_reuseFailAlloc_528_, 4, v_l_468_);
v___x_524_ = v_reuseFailAlloc_528_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_526_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_r_516_);
lean_ctor_set(v___x_375_, 3, v___x_524_);
lean_ctor_set(v___x_375_, 2, v_v_518_);
lean_ctor_set(v___x_375_, 1, v_k_517_);
lean_ctor_set(v___x_375_, 0, v___x_522_);
v___x_526_ = v___x_375_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_k_517_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_v_518_);
lean_ctor_set(v_reuseFailAlloc_527_, 3, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_527_, 4, v_r_516_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
lean_object* v_size_533_; lean_object* v_k_534_; lean_object* v_v_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_546_; 
v_size_533_ = lean_ctor_get(v_r_373_, 0);
v_k_534_ = lean_ctor_get(v_r_373_, 1);
v_v_535_ = lean_ctor_get(v_r_373_, 2);
v_isSharedCheck_546_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; lean_object* v_unused_548_; 
v_unused_547_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_548_);
v___x_537_ = v_r_373_;
v_isShared_538_ = v_isSharedCheck_546_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_v_535_);
lean_inc(v_k_534_);
lean_inc(v_size_533_);
lean_dec(v_r_373_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_546_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 3, v_r_516_);
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_size_533_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_k_534_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_v_535_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v_r_516_);
lean_ctor_set(v_reuseFailAlloc_545_, 4, v_r_516_);
v___x_540_ = v_reuseFailAlloc_545_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_541_ = lean_unsigned_to_nat(2u);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v___x_540_);
lean_ctor_set(v___x_375_, 3, v_r_516_);
lean_ctor_set(v___x_375_, 0, v___x_541_);
v___x_543_ = v___x_375_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_r_516_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v___x_540_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
}
else
{
lean_object* v___x_550_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 3, v_r_373_);
lean_ctor_set(v___x_375_, 0, v___x_379_);
v___x_550_ = v___x_375_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v_r_373_);
lean_ctor_set(v_reuseFailAlloc_551_, 4, v_r_373_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
case 1:
{
lean_del_object(v___x_375_);
lean_dec(v_v_371_);
lean_dec(v_k_370_);
if (lean_obj_tag(v_l_372_) == 0)
{
if (lean_obj_tag(v_r_373_) == 0)
{
lean_object* v_size_552_; lean_object* v_k_553_; lean_object* v_v_554_; lean_object* v_l_555_; lean_object* v_r_556_; lean_object* v_size_557_; lean_object* v_k_558_; lean_object* v_v_559_; lean_object* v_l_560_; lean_object* v_r_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v_size_552_ = lean_ctor_get(v_l_372_, 0);
v_k_553_ = lean_ctor_get(v_l_372_, 1);
v_v_554_ = lean_ctor_get(v_l_372_, 2);
v_l_555_ = lean_ctor_get(v_l_372_, 3);
v_r_556_ = lean_ctor_get(v_l_372_, 4);
lean_inc(v_r_556_);
v_size_557_ = lean_ctor_get(v_r_373_, 0);
v_k_558_ = lean_ctor_get(v_r_373_, 1);
v_v_559_ = lean_ctor_get(v_r_373_, 2);
v_l_560_ = lean_ctor_get(v_r_373_, 3);
lean_inc(v_l_560_);
v_r_561_ = lean_ctor_get(v_r_373_, 4);
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = lean_nat_dec_lt(v_size_552_, v_size_557_);
if (v___x_563_ == 0)
{
lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_699_; 
lean_inc(v_l_555_);
lean_inc(v_v_554_);
lean_inc(v_k_553_);
v_isSharedCheck_699_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; lean_object* v_unused_701_; lean_object* v_unused_702_; lean_object* v_unused_703_; lean_object* v_unused_704_; 
v_unused_700_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_700_);
v_unused_701_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_701_);
v_unused_702_ = lean_ctor_get(v_l_372_, 2);
lean_dec(v_unused_702_);
v_unused_703_ = lean_ctor_get(v_l_372_, 1);
lean_dec(v_unused_703_);
v_unused_704_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_704_);
v___x_565_ = v_l_372_;
v_isShared_566_ = v_isSharedCheck_699_;
goto v_resetjp_564_;
}
else
{
lean_dec(v_l_372_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_699_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v_tree_568_; 
v___x_567_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_553_, v_v_554_, v_l_555_, v_r_556_);
v_tree_568_ = lean_ctor_get(v___x_567_, 2);
lean_inc(v_tree_568_);
if (lean_obj_tag(v_tree_568_) == 0)
{
lean_object* v_k_569_; lean_object* v_v_570_; lean_object* v_size_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_k_569_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_k_569_);
v_v_570_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_v_570_);
lean_dec_ref(v___x_567_);
v_size_571_ = lean_ctor_get(v_tree_568_, 0);
v___x_572_ = lean_unsigned_to_nat(3u);
v___x_573_ = lean_nat_mul(v___x_572_, v_size_571_);
v___x_574_ = lean_nat_dec_lt(v___x_573_, v_size_557_);
lean_dec(v___x_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
lean_dec(v_l_560_);
v___x_575_ = lean_nat_add(v___x_562_, v_size_571_);
v___x_576_ = lean_nat_add(v___x_575_, v_size_557_);
lean_dec(v___x_575_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_r_373_);
lean_ctor_set(v___x_565_, 3, v_tree_568_);
lean_ctor_set(v___x_565_, 2, v_v_570_);
lean_ctor_set(v___x_565_, 1, v_k_569_);
lean_ctor_set(v___x_565_, 0, v___x_576_);
v___x_578_ = v___x_565_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_569_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_570_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v_tree_568_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v_r_373_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
else
{
lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_634_; 
lean_inc(v_r_561_);
lean_inc(v_v_559_);
lean_inc(v_k_558_);
lean_inc(v_size_557_);
v_isSharedCheck_634_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; lean_object* v_unused_636_; lean_object* v_unused_637_; lean_object* v_unused_638_; lean_object* v_unused_639_; 
v_unused_635_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_636_);
v_unused_637_ = lean_ctor_get(v_r_373_, 2);
lean_dec(v_unused_637_);
v_unused_638_ = lean_ctor_get(v_r_373_, 1);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_639_);
v___x_581_ = v_r_373_;
v_isShared_582_ = v_isSharedCheck_634_;
goto v_resetjp_580_;
}
else
{
lean_dec(v_r_373_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_634_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v_size_583_; lean_object* v_k_584_; lean_object* v_v_585_; lean_object* v_l_586_; lean_object* v_r_587_; lean_object* v_size_588_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v_size_583_ = lean_ctor_get(v_l_560_, 0);
v_k_584_ = lean_ctor_get(v_l_560_, 1);
v_v_585_ = lean_ctor_get(v_l_560_, 2);
v_l_586_ = lean_ctor_get(v_l_560_, 3);
v_r_587_ = lean_ctor_get(v_l_560_, 4);
v_size_588_ = lean_ctor_get(v_r_561_, 0);
v___x_589_ = lean_unsigned_to_nat(2u);
v___x_590_ = lean_nat_mul(v___x_589_, v_size_588_);
v___x_591_ = lean_nat_dec_lt(v_size_583_, v___x_590_);
lean_dec(v___x_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_619_; 
lean_inc(v_r_587_);
lean_inc(v_l_586_);
lean_inc(v_v_585_);
lean_inc(v_k_584_);
v_isSharedCheck_619_ = !lean_is_exclusive(v_l_560_);
if (v_isSharedCheck_619_ == 0)
{
lean_object* v_unused_620_; lean_object* v_unused_621_; lean_object* v_unused_622_; lean_object* v_unused_623_; lean_object* v_unused_624_; 
v_unused_620_ = lean_ctor_get(v_l_560_, 4);
lean_dec(v_unused_620_);
v_unused_621_ = lean_ctor_get(v_l_560_, 3);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_l_560_, 2);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v_l_560_, 1);
lean_dec(v_unused_623_);
v_unused_624_ = lean_ctor_get(v_l_560_, 0);
lean_dec(v_unused_624_);
v___x_593_ = v_l_560_;
v_isShared_594_ = v_isSharedCheck_619_;
goto v_resetjp_592_;
}
else
{
lean_dec(v_l_560_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_619_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_609_; 
v___x_595_ = lean_nat_add(v___x_562_, v_size_571_);
v___x_596_ = lean_nat_add(v___x_595_, v_size_557_);
lean_dec(v_size_557_);
if (lean_obj_tag(v_l_586_) == 0)
{
lean_object* v_size_617_; 
v_size_617_ = lean_ctor_get(v_l_586_, 0);
lean_inc(v_size_617_);
v___y_609_ = v_size_617_;
goto v___jp_608_;
}
else
{
lean_object* v___x_618_; 
v___x_618_ = lean_unsigned_to_nat(0u);
v___y_609_ = v___x_618_;
goto v___jp_608_;
}
v___jp_597_:
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_nat_add(v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec(v___y_599_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 4, v_r_561_);
lean_ctor_set(v___x_593_, 3, v_r_587_);
lean_ctor_set(v___x_593_, 2, v_v_559_);
lean_ctor_set(v___x_593_, 1, v_k_558_);
lean_ctor_set(v___x_593_, 0, v___x_601_);
v___x_603_ = v___x_593_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_607_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_607_, 3, v_r_587_);
lean_ctor_set(v_reuseFailAlloc_607_, 4, v_r_561_);
v___x_603_ = v_reuseFailAlloc_607_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_605_; 
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 4, v___x_603_);
lean_ctor_set(v___x_581_, 3, v___y_598_);
lean_ctor_set(v___x_581_, 2, v_v_585_);
lean_ctor_set(v___x_581_, 1, v_k_584_);
lean_ctor_set(v___x_581_, 0, v___x_596_);
v___x_605_ = v___x_581_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_k_584_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v_v_585_);
lean_ctor_set(v_reuseFailAlloc_606_, 3, v___y_598_);
lean_ctor_set(v_reuseFailAlloc_606_, 4, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
v___jp_608_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = lean_nat_add(v___x_595_, v___y_609_);
lean_dec(v___y_609_);
lean_dec(v___x_595_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_l_586_);
lean_ctor_set(v___x_565_, 3, v_tree_568_);
lean_ctor_set(v___x_565_, 2, v_v_570_);
lean_ctor_set(v___x_565_, 1, v_k_569_);
lean_ctor_set(v___x_565_, 0, v___x_610_);
v___x_612_ = v___x_565_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_k_569_);
lean_ctor_set(v_reuseFailAlloc_616_, 2, v_v_570_);
lean_ctor_set(v_reuseFailAlloc_616_, 3, v_tree_568_);
lean_ctor_set(v_reuseFailAlloc_616_, 4, v_l_586_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; 
v___x_613_ = lean_nat_add(v___x_562_, v_size_588_);
if (lean_obj_tag(v_r_587_) == 0)
{
lean_object* v_size_614_; 
v_size_614_ = lean_ctor_get(v_r_587_, 0);
lean_inc(v_size_614_);
v___y_598_ = v___x_612_;
v___y_599_ = v___x_613_;
v___y_600_ = v_size_614_;
goto v___jp_597_;
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_unsigned_to_nat(0u);
v___y_598_ = v___x_612_;
v___y_599_ = v___x_613_;
v___y_600_ = v___x_615_;
goto v___jp_597_;
}
}
}
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_629_; 
v___x_625_ = lean_nat_add(v___x_562_, v_size_571_);
v___x_626_ = lean_nat_add(v___x_625_, v_size_557_);
lean_dec(v_size_557_);
v___x_627_ = lean_nat_add(v___x_625_, v_size_583_);
lean_dec(v___x_625_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 4, v_l_560_);
lean_ctor_set(v___x_581_, 3, v_tree_568_);
lean_ctor_set(v___x_581_, 2, v_v_570_);
lean_ctor_set(v___x_581_, 1, v_k_569_);
lean_ctor_set(v___x_581_, 0, v___x_627_);
v___x_629_ = v___x_581_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_k_569_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v_v_570_);
lean_ctor_set(v_reuseFailAlloc_633_, 3, v_tree_568_);
lean_ctor_set(v_reuseFailAlloc_633_, 4, v_l_560_);
v___x_629_ = v_reuseFailAlloc_633_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_r_561_);
lean_ctor_set(v___x_565_, 3, v___x_629_);
lean_ctor_set(v___x_565_, 2, v_v_559_);
lean_ctor_set(v___x_565_, 1, v_k_558_);
lean_ctor_set(v___x_565_, 0, v___x_626_);
v___x_631_ = v___x_565_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_632_, 4, v_r_561_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
}
else
{
lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_693_; 
lean_inc(v_r_561_);
lean_inc(v_v_559_);
lean_inc(v_k_558_);
lean_inc(v_size_557_);
v_isSharedCheck_693_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; lean_object* v_unused_695_; lean_object* v_unused_696_; lean_object* v_unused_697_; lean_object* v_unused_698_; 
v_unused_694_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_695_);
v_unused_696_ = lean_ctor_get(v_r_373_, 2);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v_r_373_, 1);
lean_dec(v_unused_697_);
v_unused_698_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_698_);
v___x_641_ = v_r_373_;
v_isShared_642_ = v_isSharedCheck_693_;
goto v_resetjp_640_;
}
else
{
lean_dec(v_r_373_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_693_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
if (lean_obj_tag(v_l_560_) == 0)
{
if (lean_obj_tag(v_r_561_) == 0)
{
lean_object* v_k_643_; lean_object* v_v_644_; lean_object* v_size_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_649_; 
v_k_643_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_k_643_);
v_v_644_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_v_644_);
lean_dec_ref(v___x_567_);
v_size_645_ = lean_ctor_get(v_l_560_, 0);
v___x_646_ = lean_nat_add(v___x_562_, v_size_557_);
lean_dec(v_size_557_);
v___x_647_ = lean_nat_add(v___x_562_, v_size_645_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 4, v_l_560_);
lean_ctor_set(v___x_641_, 3, v_tree_568_);
lean_ctor_set(v___x_641_, 2, v_v_644_);
lean_ctor_set(v___x_641_, 1, v_k_643_);
lean_ctor_set(v___x_641_, 0, v___x_647_);
v___x_649_ = v___x_641_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_647_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_k_643_);
lean_ctor_set(v_reuseFailAlloc_653_, 2, v_v_644_);
lean_ctor_set(v_reuseFailAlloc_653_, 3, v_tree_568_);
lean_ctor_set(v_reuseFailAlloc_653_, 4, v_l_560_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_651_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_r_561_);
lean_ctor_set(v___x_565_, 3, v___x_649_);
lean_ctor_set(v___x_565_, 2, v_v_559_);
lean_ctor_set(v___x_565_, 1, v_k_558_);
lean_ctor_set(v___x_565_, 0, v___x_646_);
v___x_651_ = v___x_565_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_r_561_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_object* v_k_654_; lean_object* v_v_655_; lean_object* v_k_656_; lean_object* v_v_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_671_; 
lean_dec(v_size_557_);
v_k_654_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_k_654_);
v_v_655_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_v_655_);
lean_dec_ref(v___x_567_);
v_k_656_ = lean_ctor_get(v_l_560_, 1);
v_v_657_ = lean_ctor_get(v_l_560_, 2);
v_isSharedCheck_671_ = !lean_is_exclusive(v_l_560_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; lean_object* v_unused_673_; lean_object* v_unused_674_; 
v_unused_672_ = lean_ctor_get(v_l_560_, 4);
lean_dec(v_unused_672_);
v_unused_673_ = lean_ctor_get(v_l_560_, 3);
lean_dec(v_unused_673_);
v_unused_674_ = lean_ctor_get(v_l_560_, 0);
lean_dec(v_unused_674_);
v___x_659_ = v_l_560_;
v_isShared_660_ = v_isSharedCheck_671_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_v_657_);
lean_inc(v_k_656_);
lean_dec(v_l_560_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_671_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = lean_unsigned_to_nat(3u);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 4, v_r_561_);
lean_ctor_set(v___x_659_, 3, v_r_561_);
lean_ctor_set(v___x_659_, 2, v_v_655_);
lean_ctor_set(v___x_659_, 1, v_k_654_);
lean_ctor_set(v___x_659_, 0, v___x_562_);
v___x_663_ = v___x_659_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_k_654_);
lean_ctor_set(v_reuseFailAlloc_670_, 2, v_v_655_);
lean_ctor_set(v_reuseFailAlloc_670_, 3, v_r_561_);
lean_ctor_set(v_reuseFailAlloc_670_, 4, v_r_561_);
v___x_663_ = v_reuseFailAlloc_670_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 3, v_r_561_);
lean_ctor_set(v___x_641_, 0, v___x_562_);
v___x_665_ = v___x_641_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_r_561_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v_r_561_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v___x_665_);
lean_ctor_set(v___x_565_, 3, v___x_663_);
lean_ctor_set(v___x_565_, 2, v_v_657_);
lean_ctor_set(v___x_565_, 1, v_k_656_);
lean_ctor_set(v___x_565_, 0, v___x_661_);
v___x_667_ = v___x_565_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_k_656_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_v_657_);
lean_ctor_set(v_reuseFailAlloc_668_, 3, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_668_, 4, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_561_) == 0)
{
lean_object* v_k_675_; lean_object* v_v_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
lean_dec(v_size_557_);
v_k_675_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_k_675_);
v_v_676_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_v_676_);
lean_dec_ref(v___x_567_);
v___x_677_ = lean_unsigned_to_nat(3u);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 4, v_l_560_);
lean_ctor_set(v___x_641_, 2, v_v_676_);
lean_ctor_set(v___x_641_, 1, v_k_675_);
lean_ctor_set(v___x_641_, 0, v___x_562_);
v___x_679_ = v___x_641_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_k_675_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_v_676_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_l_560_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_l_560_);
v___x_679_ = v_reuseFailAlloc_683_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_681_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_r_561_);
lean_ctor_set(v___x_565_, 3, v___x_679_);
lean_ctor_set(v___x_565_, 2, v_v_559_);
lean_ctor_set(v___x_565_, 1, v_k_558_);
lean_ctor_set(v___x_565_, 0, v___x_677_);
v___x_681_ = v___x_565_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_682_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_682_, 3, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_682_, 4, v_r_561_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
else
{
lean_object* v_k_684_; lean_object* v_v_685_; lean_object* v___x_687_; 
v_k_684_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_k_684_);
v_v_685_ = lean_ctor_get(v___x_567_, 1);
lean_inc(v_v_685_);
lean_dec_ref(v___x_567_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 3, v_r_561_);
v___x_687_ = v___x_641_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_size_557_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_k_558_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_v_559_);
lean_ctor_set(v_reuseFailAlloc_692_, 3, v_r_561_);
lean_ctor_set(v_reuseFailAlloc_692_, 4, v_r_561_);
v___x_687_ = v_reuseFailAlloc_692_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_unsigned_to_nat(2u);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v___x_687_);
lean_ctor_set(v___x_565_, 3, v_r_561_);
lean_ctor_set(v___x_565_, 2, v_v_685_);
lean_ctor_set(v___x_565_, 1, v_k_684_);
lean_ctor_set(v___x_565_, 0, v___x_688_);
v___x_690_ = v___x_565_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_k_684_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_v_685_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_r_561_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v___x_687_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_857_; 
lean_inc(v_r_561_);
lean_inc(v_v_559_);
lean_inc(v_k_558_);
v_isSharedCheck_857_ = !lean_is_exclusive(v_r_373_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; lean_object* v_unused_859_; lean_object* v_unused_860_; lean_object* v_unused_861_; lean_object* v_unused_862_; 
v_unused_858_ = lean_ctor_get(v_r_373_, 4);
lean_dec(v_unused_858_);
v_unused_859_ = lean_ctor_get(v_r_373_, 3);
lean_dec(v_unused_859_);
v_unused_860_ = lean_ctor_get(v_r_373_, 2);
lean_dec(v_unused_860_);
v_unused_861_ = lean_ctor_get(v_r_373_, 1);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v_r_373_, 0);
lean_dec(v_unused_862_);
v___x_706_ = v_r_373_;
v_isShared_707_ = v_isSharedCheck_857_;
goto v_resetjp_705_;
}
else
{
lean_dec(v_r_373_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_857_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v_tree_709_; 
v___x_708_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_558_, v_v_559_, v_l_560_, v_r_561_);
v_tree_709_ = lean_ctor_get(v___x_708_, 2);
lean_inc(v_tree_709_);
if (lean_obj_tag(v_tree_709_) == 0)
{
lean_object* v_k_710_; lean_object* v_v_711_; lean_object* v_size_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v_k_710_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_k_710_);
v_v_711_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_v_711_);
lean_dec_ref(v___x_708_);
v_size_712_ = lean_ctor_get(v_tree_709_, 0);
v___x_713_ = lean_unsigned_to_nat(3u);
v___x_714_ = lean_nat_mul(v___x_713_, v_size_712_);
v___x_715_ = lean_nat_dec_lt(v___x_714_, v_size_552_);
lean_dec(v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
lean_dec(v_r_556_);
v___x_716_ = lean_nat_add(v___x_562_, v_size_552_);
v___x_717_ = lean_nat_add(v___x_716_, v_size_712_);
lean_dec(v___x_716_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_tree_709_);
lean_ctor_set(v___x_706_, 3, v_l_372_);
lean_ctor_set(v___x_706_, 2, v_v_711_);
lean_ctor_set(v___x_706_, 1, v_k_710_);
lean_ctor_set(v___x_706_, 0, v___x_717_);
v___x_719_ = v___x_706_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_k_710_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_v_711_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_tree_709_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
else
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_786_; 
lean_inc(v_l_555_);
lean_inc(v_v_554_);
lean_inc(v_k_553_);
lean_inc(v_size_552_);
v_isSharedCheck_786_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_786_ == 0)
{
lean_object* v_unused_787_; lean_object* v_unused_788_; lean_object* v_unused_789_; lean_object* v_unused_790_; lean_object* v_unused_791_; 
v_unused_787_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_787_);
v_unused_788_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_788_);
v_unused_789_ = lean_ctor_get(v_l_372_, 2);
lean_dec(v_unused_789_);
v_unused_790_ = lean_ctor_get(v_l_372_, 1);
lean_dec(v_unused_790_);
v_unused_791_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_791_);
v___x_722_ = v_l_372_;
v_isShared_723_ = v_isSharedCheck_786_;
goto v_resetjp_721_;
}
else
{
lean_dec(v_l_372_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_786_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v_size_724_; lean_object* v_size_725_; lean_object* v_k_726_; lean_object* v_v_727_; lean_object* v_l_728_; lean_object* v_r_729_; lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v_size_724_ = lean_ctor_get(v_l_555_, 0);
v_size_725_ = lean_ctor_get(v_r_556_, 0);
v_k_726_ = lean_ctor_get(v_r_556_, 1);
v_v_727_ = lean_ctor_get(v_r_556_, 2);
v_l_728_ = lean_ctor_get(v_r_556_, 3);
v_r_729_ = lean_ctor_get(v_r_556_, 4);
v___x_730_ = lean_unsigned_to_nat(2u);
v___x_731_ = lean_nat_mul(v___x_730_, v_size_724_);
v___x_732_ = lean_nat_dec_lt(v_size_725_, v___x_731_);
lean_dec(v___x_731_);
if (v___x_732_ == 0)
{
lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_770_; 
lean_inc(v_r_729_);
lean_inc(v_l_728_);
lean_inc(v_v_727_);
lean_inc(v_k_726_);
lean_del_object(v___x_722_);
v_isSharedCheck_770_ = !lean_is_exclusive(v_r_556_);
if (v_isSharedCheck_770_ == 0)
{
lean_object* v_unused_771_; lean_object* v_unused_772_; lean_object* v_unused_773_; lean_object* v_unused_774_; lean_object* v_unused_775_; 
v_unused_771_ = lean_ctor_get(v_r_556_, 4);
lean_dec(v_unused_771_);
v_unused_772_ = lean_ctor_get(v_r_556_, 3);
lean_dec(v_unused_772_);
v_unused_773_ = lean_ctor_get(v_r_556_, 2);
lean_dec(v_unused_773_);
v_unused_774_ = lean_ctor_get(v_r_556_, 1);
lean_dec(v_unused_774_);
v_unused_775_ = lean_ctor_get(v_r_556_, 0);
lean_dec(v_unused_775_);
v___x_734_ = v_r_556_;
v_isShared_735_ = v_isSharedCheck_770_;
goto v_resetjp_733_;
}
else
{
lean_dec(v_r_556_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_770_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___x_758_; lean_object* v___y_760_; 
v___x_736_ = lean_nat_add(v___x_562_, v_size_552_);
lean_dec(v_size_552_);
v___x_737_ = lean_nat_add(v___x_736_, v_size_712_);
lean_dec(v___x_736_);
v___x_758_ = lean_nat_add(v___x_562_, v_size_724_);
if (lean_obj_tag(v_l_728_) == 0)
{
lean_object* v_size_768_; 
v_size_768_ = lean_ctor_get(v_l_728_, 0);
lean_inc(v_size_768_);
v___y_760_ = v_size_768_;
goto v___jp_759_;
}
else
{
lean_object* v___x_769_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___y_760_ = v___x_769_;
goto v___jp_759_;
}
v___jp_738_:
{
lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_742_ = lean_nat_add(v___y_739_, v___y_741_);
lean_dec(v___y_741_);
lean_dec(v___y_739_);
lean_inc_ref(v_tree_709_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v_tree_709_);
lean_ctor_set(v___x_734_, 3, v_r_729_);
lean_ctor_set(v___x_734_, 2, v_v_711_);
lean_ctor_set(v___x_734_, 1, v_k_710_);
lean_ctor_set(v___x_734_, 0, v___x_742_);
v___x_744_ = v___x_734_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_742_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_k_710_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_v_711_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_r_729_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v_tree_709_);
v___x_744_ = v_reuseFailAlloc_757_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
v_isSharedCheck_751_ = !lean_is_exclusive(v_tree_709_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; lean_object* v_unused_753_; lean_object* v_unused_754_; lean_object* v_unused_755_; lean_object* v_unused_756_; 
v_unused_752_ = lean_ctor_get(v_tree_709_, 4);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v_tree_709_, 3);
lean_dec(v_unused_753_);
v_unused_754_ = lean_ctor_get(v_tree_709_, 2);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v_tree_709_, 1);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_tree_709_, 0);
lean_dec(v_unused_756_);
v___x_746_ = v_tree_709_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_dec(v_tree_709_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 4, v___x_744_);
lean_ctor_set(v___x_746_, 3, v___y_740_);
lean_ctor_set(v___x_746_, 2, v_v_727_);
lean_ctor_set(v___x_746_, 1, v_k_726_);
lean_ctor_set(v___x_746_, 0, v___x_737_);
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_k_726_);
lean_ctor_set(v_reuseFailAlloc_750_, 2, v_v_727_);
lean_ctor_set(v_reuseFailAlloc_750_, 3, v___y_740_);
lean_ctor_set(v_reuseFailAlloc_750_, 4, v___x_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
v___jp_759_:
{
lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_761_ = lean_nat_add(v___x_758_, v___y_760_);
lean_dec(v___y_760_);
lean_dec(v___x_758_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_l_728_);
lean_ctor_set(v___x_706_, 3, v_l_555_);
lean_ctor_set(v___x_706_, 2, v_v_554_);
lean_ctor_set(v___x_706_, 1, v_k_553_);
lean_ctor_set(v___x_706_, 0, v___x_761_);
v___x_763_ = v___x_706_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v_k_553_);
lean_ctor_set(v_reuseFailAlloc_767_, 2, v_v_554_);
lean_ctor_set(v_reuseFailAlloc_767_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_767_, 4, v_l_728_);
v___x_763_ = v_reuseFailAlloc_767_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; 
v___x_764_ = lean_nat_add(v___x_562_, v_size_712_);
if (lean_obj_tag(v_r_729_) == 0)
{
lean_object* v_size_765_; 
v_size_765_ = lean_ctor_get(v_r_729_, 0);
lean_inc(v_size_765_);
v___y_739_ = v___x_764_;
v___y_740_ = v___x_763_;
v___y_741_ = v_size_765_;
goto v___jp_738_;
}
else
{
lean_object* v___x_766_; 
v___x_766_ = lean_unsigned_to_nat(0u);
v___y_739_ = v___x_764_;
v___y_740_ = v___x_763_;
v___y_741_ = v___x_766_;
goto v___jp_738_;
}
}
}
}
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_776_ = lean_nat_add(v___x_562_, v_size_552_);
lean_dec(v_size_552_);
v___x_777_ = lean_nat_add(v___x_776_, v_size_712_);
lean_dec(v___x_776_);
v___x_778_ = lean_nat_add(v___x_562_, v_size_712_);
v___x_779_ = lean_nat_add(v___x_778_, v_size_725_);
lean_dec(v___x_778_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_tree_709_);
lean_ctor_set(v___x_706_, 3, v_r_556_);
lean_ctor_set(v___x_706_, 2, v_v_711_);
lean_ctor_set(v___x_706_, 1, v_k_710_);
lean_ctor_set(v___x_706_, 0, v___x_779_);
v___x_781_ = v___x_706_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_779_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_k_710_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_v_711_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v_r_556_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v_tree_709_);
v___x_781_ = v_reuseFailAlloc_785_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_783_; 
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 4, v___x_781_);
lean_ctor_set(v___x_722_, 0, v___x_777_);
v___x_783_ = v___x_722_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_777_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_k_553_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_v_554_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_555_) == 0)
{
lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_815_; 
lean_inc_ref(v_l_555_);
lean_inc(v_v_554_);
lean_inc(v_k_553_);
lean_inc(v_size_552_);
v_isSharedCheck_815_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; lean_object* v_unused_817_; lean_object* v_unused_818_; lean_object* v_unused_819_; lean_object* v_unused_820_; 
v_unused_816_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_816_);
v_unused_817_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_817_);
v_unused_818_ = lean_ctor_get(v_l_372_, 2);
lean_dec(v_unused_818_);
v_unused_819_ = lean_ctor_get(v_l_372_, 1);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_820_);
v___x_793_ = v_l_372_;
v_isShared_794_ = v_isSharedCheck_815_;
goto v_resetjp_792_;
}
else
{
lean_dec(v_l_372_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_815_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
if (lean_obj_tag(v_r_556_) == 0)
{
lean_object* v_k_795_; lean_object* v_v_796_; lean_object* v_size_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v_k_795_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_k_795_);
v_v_796_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_v_796_);
lean_dec_ref(v___x_708_);
v_size_797_ = lean_ctor_get(v_r_556_, 0);
v___x_798_ = lean_nat_add(v___x_562_, v_size_552_);
lean_dec(v_size_552_);
v___x_799_ = lean_nat_add(v___x_562_, v_size_797_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_tree_709_);
lean_ctor_set(v___x_706_, 3, v_r_556_);
lean_ctor_set(v___x_706_, 2, v_v_796_);
lean_ctor_set(v___x_706_, 1, v_k_795_);
lean_ctor_set(v___x_706_, 0, v___x_799_);
v___x_801_ = v___x_706_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_k_795_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v_v_796_);
lean_ctor_set(v_reuseFailAlloc_805_, 3, v_r_556_);
lean_ctor_set(v_reuseFailAlloc_805_, 4, v_tree_709_);
v___x_801_ = v_reuseFailAlloc_805_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_803_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 4, v___x_801_);
lean_ctor_set(v___x_793_, 0, v___x_798_);
v___x_803_ = v___x_793_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_k_553_);
lean_ctor_set(v_reuseFailAlloc_804_, 2, v_v_554_);
lean_ctor_set(v_reuseFailAlloc_804_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_804_, 4, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
else
{
lean_object* v_k_806_; lean_object* v_v_807_; lean_object* v___x_808_; lean_object* v___x_810_; 
lean_dec(v_size_552_);
v_k_806_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_k_806_);
v_v_807_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_v_807_);
lean_dec_ref(v___x_708_);
v___x_808_ = lean_unsigned_to_nat(3u);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_r_556_);
lean_ctor_set(v___x_706_, 3, v_r_556_);
lean_ctor_set(v___x_706_, 2, v_v_807_);
lean_ctor_set(v___x_706_, 1, v_k_806_);
lean_ctor_set(v___x_706_, 0, v___x_562_);
v___x_810_ = v___x_706_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_k_806_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v_v_807_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v_r_556_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v_r_556_);
v___x_810_ = v_reuseFailAlloc_814_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_812_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 4, v___x_810_);
lean_ctor_set(v___x_793_, 0, v___x_808_);
v___x_812_ = v___x_793_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_k_553_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v_v_554_);
lean_ctor_set(v_reuseFailAlloc_813_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_813_, 4, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_556_) == 0)
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_845_; 
lean_inc(v_l_555_);
lean_inc(v_v_554_);
lean_inc(v_k_553_);
v_isSharedCheck_845_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; lean_object* v_unused_847_; lean_object* v_unused_848_; lean_object* v_unused_849_; lean_object* v_unused_850_; 
v_unused_846_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_846_);
v_unused_847_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_847_);
v_unused_848_ = lean_ctor_get(v_l_372_, 2);
lean_dec(v_unused_848_);
v_unused_849_ = lean_ctor_get(v_l_372_, 1);
lean_dec(v_unused_849_);
v_unused_850_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_850_);
v___x_822_ = v_l_372_;
v_isShared_823_ = v_isSharedCheck_845_;
goto v_resetjp_821_;
}
else
{
lean_dec(v_l_372_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_845_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_k_824_; lean_object* v_v_825_; lean_object* v_k_826_; lean_object* v_v_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_841_; 
v_k_824_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_k_824_);
v_v_825_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_v_825_);
lean_dec_ref(v___x_708_);
v_k_826_ = lean_ctor_get(v_r_556_, 1);
v_v_827_ = lean_ctor_get(v_r_556_, 2);
v_isSharedCheck_841_ = !lean_is_exclusive(v_r_556_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_842_ = lean_ctor_get(v_r_556_, 4);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v_r_556_, 3);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_r_556_, 0);
lean_dec(v_unused_844_);
v___x_829_ = v_r_556_;
v_isShared_830_ = v_isSharedCheck_841_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_v_827_);
lean_inc(v_k_826_);
lean_dec(v_r_556_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_841_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_831_ = lean_unsigned_to_nat(3u);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 4, v_l_555_);
lean_ctor_set(v___x_829_, 3, v_l_555_);
lean_ctor_set(v___x_829_, 2, v_v_554_);
lean_ctor_set(v___x_829_, 1, v_k_553_);
lean_ctor_set(v___x_829_, 0, v___x_562_);
v___x_833_ = v___x_829_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v_k_553_);
lean_ctor_set(v_reuseFailAlloc_840_, 2, v_v_554_);
lean_ctor_set(v_reuseFailAlloc_840_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_840_, 4, v_l_555_);
v___x_833_ = v_reuseFailAlloc_840_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
lean_object* v___x_835_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_l_555_);
lean_ctor_set(v___x_706_, 3, v_l_555_);
lean_ctor_set(v___x_706_, 2, v_v_825_);
lean_ctor_set(v___x_706_, 1, v_k_824_);
lean_ctor_set(v___x_706_, 0, v___x_562_);
v___x_835_ = v___x_706_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_562_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_k_824_);
lean_ctor_set(v_reuseFailAlloc_839_, 2, v_v_825_);
lean_ctor_set(v_reuseFailAlloc_839_, 3, v_l_555_);
lean_ctor_set(v_reuseFailAlloc_839_, 4, v_l_555_);
v___x_835_ = v_reuseFailAlloc_839_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_837_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 4, v___x_835_);
lean_ctor_set(v___x_822_, 3, v___x_833_);
lean_ctor_set(v___x_822_, 2, v_v_827_);
lean_ctor_set(v___x_822_, 1, v_k_826_);
lean_ctor_set(v___x_822_, 0, v___x_831_);
v___x_837_ = v___x_822_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_831_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_k_826_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_v_827_);
lean_ctor_set(v_reuseFailAlloc_838_, 3, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_838_, 4, v___x_835_);
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
}
}
else
{
lean_object* v_k_851_; lean_object* v_v_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v_k_851_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_k_851_);
v_v_852_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_v_852_);
lean_dec_ref(v___x_708_);
v___x_853_ = lean_unsigned_to_nat(2u);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 4, v_r_556_);
lean_ctor_set(v___x_706_, 3, v_l_372_);
lean_ctor_set(v___x_706_, 2, v_v_852_);
lean_ctor_set(v___x_706_, 1, v_k_851_);
lean_ctor_set(v___x_706_, 0, v___x_853_);
v___x_855_ = v___x_706_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_k_851_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v_v_852_);
lean_ctor_set(v_reuseFailAlloc_856_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_856_, 4, v_r_556_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
}
else
{
return v_l_372_;
}
}
else
{
return v_r_373_;
}
}
default: 
{
lean_object* v_impl_863_; lean_object* v___x_864_; 
v_impl_863_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(v_k_368_, v_r_373_);
v___x_864_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_863_) == 0)
{
if (lean_obj_tag(v_l_372_) == 0)
{
lean_object* v_size_865_; lean_object* v_size_866_; lean_object* v_k_867_; lean_object* v_v_868_; lean_object* v_l_869_; lean_object* v_r_870_; lean_object* v___x_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v_size_865_ = lean_ctor_get(v_impl_863_, 0);
lean_inc(v_size_865_);
v_size_866_ = lean_ctor_get(v_l_372_, 0);
v_k_867_ = lean_ctor_get(v_l_372_, 1);
v_v_868_ = lean_ctor_get(v_l_372_, 2);
v_l_869_ = lean_ctor_get(v_l_372_, 3);
v_r_870_ = lean_ctor_get(v_l_372_, 4);
lean_inc(v_r_870_);
v___x_871_ = lean_unsigned_to_nat(3u);
v___x_872_ = lean_nat_mul(v___x_871_, v_size_865_);
v___x_873_ = lean_nat_dec_lt(v___x_872_, v_size_866_);
lean_dec(v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_877_; 
lean_dec(v_r_870_);
v___x_874_ = lean_nat_add(v___x_864_, v_size_866_);
v___x_875_ = lean_nat_add(v___x_874_, v_size_865_);
lean_dec(v_size_865_);
lean_dec(v___x_874_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_impl_863_);
lean_ctor_set(v___x_375_, 0, v___x_875_);
v___x_877_ = v___x_375_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_878_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_878_, 4, v_impl_863_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
else
{
lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_944_; 
lean_inc(v_l_869_);
lean_inc(v_v_868_);
lean_inc(v_k_867_);
lean_inc(v_size_866_);
v_isSharedCheck_944_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_944_ == 0)
{
lean_object* v_unused_945_; lean_object* v_unused_946_; lean_object* v_unused_947_; lean_object* v_unused_948_; lean_object* v_unused_949_; 
v_unused_945_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_945_);
v_unused_946_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_946_);
v_unused_947_ = lean_ctor_get(v_l_372_, 2);
lean_dec(v_unused_947_);
v_unused_948_ = lean_ctor_get(v_l_372_, 1);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_949_);
v___x_880_ = v_l_372_;
v_isShared_881_ = v_isSharedCheck_944_;
goto v_resetjp_879_;
}
else
{
lean_dec(v_l_372_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_944_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v_size_882_; lean_object* v_size_883_; lean_object* v_k_884_; lean_object* v_v_885_; lean_object* v_l_886_; lean_object* v_r_887_; lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v_size_882_ = lean_ctor_get(v_l_869_, 0);
v_size_883_ = lean_ctor_get(v_r_870_, 0);
v_k_884_ = lean_ctor_get(v_r_870_, 1);
v_v_885_ = lean_ctor_get(v_r_870_, 2);
v_l_886_ = lean_ctor_get(v_r_870_, 3);
v_r_887_ = lean_ctor_get(v_r_870_, 4);
v___x_888_ = lean_unsigned_to_nat(2u);
v___x_889_ = lean_nat_mul(v___x_888_, v_size_882_);
v___x_890_ = lean_nat_dec_lt(v_size_883_, v___x_889_);
lean_dec(v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_919_; 
lean_inc(v_r_887_);
lean_inc(v_l_886_);
lean_inc(v_v_885_);
lean_inc(v_k_884_);
v_isSharedCheck_919_ = !lean_is_exclusive(v_r_870_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; lean_object* v_unused_921_; lean_object* v_unused_922_; lean_object* v_unused_923_; lean_object* v_unused_924_; 
v_unused_920_ = lean_ctor_get(v_r_870_, 4);
lean_dec(v_unused_920_);
v_unused_921_ = lean_ctor_get(v_r_870_, 3);
lean_dec(v_unused_921_);
v_unused_922_ = lean_ctor_get(v_r_870_, 2);
lean_dec(v_unused_922_);
v_unused_923_ = lean_ctor_get(v_r_870_, 1);
lean_dec(v_unused_923_);
v_unused_924_ = lean_ctor_get(v_r_870_, 0);
lean_dec(v_unused_924_);
v___x_892_ = v_r_870_;
v_isShared_893_ = v_isSharedCheck_919_;
goto v_resetjp_891_;
}
else
{
lean_dec(v_r_870_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_919_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___x_907_; lean_object* v___y_909_; 
v___x_894_ = lean_nat_add(v___x_864_, v_size_866_);
lean_dec(v_size_866_);
v___x_895_ = lean_nat_add(v___x_894_, v_size_865_);
lean_dec(v___x_894_);
v___x_907_ = lean_nat_add(v___x_864_, v_size_882_);
if (lean_obj_tag(v_l_886_) == 0)
{
lean_object* v_size_917_; 
v_size_917_ = lean_ctor_get(v_l_886_, 0);
lean_inc(v_size_917_);
v___y_909_ = v_size_917_;
goto v___jp_908_;
}
else
{
lean_object* v___x_918_; 
v___x_918_ = lean_unsigned_to_nat(0u);
v___y_909_ = v___x_918_;
goto v___jp_908_;
}
v___jp_896_:
{
lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_900_ = lean_nat_add(v___y_897_, v___y_899_);
lean_dec(v___y_899_);
lean_dec(v___y_897_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 4, v_impl_863_);
lean_ctor_set(v___x_892_, 3, v_r_887_);
lean_ctor_set(v___x_892_, 2, v_v_371_);
lean_ctor_set(v___x_892_, 1, v_k_370_);
lean_ctor_set(v___x_892_, 0, v___x_900_);
v___x_902_ = v___x_892_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_900_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_r_887_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v_impl_863_);
v___x_902_ = v_reuseFailAlloc_906_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_904_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v___x_902_);
lean_ctor_set(v___x_880_, 3, v___y_898_);
lean_ctor_set(v___x_880_, 2, v_v_885_);
lean_ctor_set(v___x_880_, 1, v_k_884_);
lean_ctor_set(v___x_880_, 0, v___x_895_);
v___x_904_ = v___x_880_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_895_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_k_884_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_v_885_);
lean_ctor_set(v_reuseFailAlloc_905_, 3, v___y_898_);
lean_ctor_set(v_reuseFailAlloc_905_, 4, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
v___jp_908_:
{
lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_910_ = lean_nat_add(v___x_907_, v___y_909_);
lean_dec(v___y_909_);
lean_dec(v___x_907_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_l_886_);
lean_ctor_set(v___x_375_, 3, v_l_869_);
lean_ctor_set(v___x_375_, 2, v_v_868_);
lean_ctor_set(v___x_375_, 1, v_k_867_);
lean_ctor_set(v___x_375_, 0, v___x_910_);
v___x_912_ = v___x_375_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_910_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_k_867_);
lean_ctor_set(v_reuseFailAlloc_916_, 2, v_v_868_);
lean_ctor_set(v_reuseFailAlloc_916_, 3, v_l_869_);
lean_ctor_set(v_reuseFailAlloc_916_, 4, v_l_886_);
v___x_912_ = v_reuseFailAlloc_916_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_nat_add(v___x_864_, v_size_865_);
lean_dec(v_size_865_);
if (lean_obj_tag(v_r_887_) == 0)
{
lean_object* v_size_914_; 
v_size_914_ = lean_ctor_get(v_r_887_, 0);
lean_inc(v_size_914_);
v___y_897_ = v___x_913_;
v___y_898_ = v___x_912_;
v___y_899_ = v_size_914_;
goto v___jp_896_;
}
else
{
lean_object* v___x_915_; 
v___x_915_ = lean_unsigned_to_nat(0u);
v___y_897_ = v___x_913_;
v___y_898_ = v___x_912_;
v___y_899_ = v___x_915_;
goto v___jp_896_;
}
}
}
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
lean_del_object(v___x_375_);
v___x_925_ = lean_nat_add(v___x_864_, v_size_866_);
lean_dec(v_size_866_);
v___x_926_ = lean_nat_add(v___x_925_, v_size_865_);
lean_dec(v___x_925_);
v___x_927_ = lean_nat_add(v___x_864_, v_size_865_);
lean_dec(v_size_865_);
v___x_928_ = lean_nat_add(v___x_927_, v_size_883_);
lean_dec(v___x_927_);
lean_inc_ref(v_impl_863_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v_impl_863_);
lean_ctor_set(v___x_880_, 3, v_r_870_);
lean_ctor_set(v___x_880_, 2, v_v_371_);
lean_ctor_set(v___x_880_, 1, v_k_370_);
lean_ctor_set(v___x_880_, 0, v___x_928_);
v___x_930_ = v___x_880_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_928_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_943_, 3, v_r_870_);
lean_ctor_set(v_reuseFailAlloc_943_, 4, v_impl_863_);
v___x_930_ = v_reuseFailAlloc_943_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
v_isSharedCheck_937_ = !lean_is_exclusive(v_impl_863_);
if (v_isSharedCheck_937_ == 0)
{
lean_object* v_unused_938_; lean_object* v_unused_939_; lean_object* v_unused_940_; lean_object* v_unused_941_; lean_object* v_unused_942_; 
v_unused_938_ = lean_ctor_get(v_impl_863_, 4);
lean_dec(v_unused_938_);
v_unused_939_ = lean_ctor_get(v_impl_863_, 3);
lean_dec(v_unused_939_);
v_unused_940_ = lean_ctor_get(v_impl_863_, 2);
lean_dec(v_unused_940_);
v_unused_941_ = lean_ctor_get(v_impl_863_, 1);
lean_dec(v_unused_941_);
v_unused_942_ = lean_ctor_get(v_impl_863_, 0);
lean_dec(v_unused_942_);
v___x_932_ = v_impl_863_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_dec(v_impl_863_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 4, v___x_930_);
lean_ctor_set(v___x_932_, 3, v_l_869_);
lean_ctor_set(v___x_932_, 2, v_v_868_);
lean_ctor_set(v___x_932_, 1, v_k_867_);
lean_ctor_set(v___x_932_, 0, v___x_926_);
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_k_867_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v_v_868_);
lean_ctor_set(v_reuseFailAlloc_936_, 3, v_l_869_);
lean_ctor_set(v_reuseFailAlloc_936_, 4, v___x_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_950_; lean_object* v___x_951_; lean_object* v___x_953_; 
v_size_950_ = lean_ctor_get(v_impl_863_, 0);
lean_inc(v_size_950_);
v___x_951_ = lean_nat_add(v___x_864_, v_size_950_);
lean_dec(v_size_950_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_impl_863_);
lean_ctor_set(v___x_375_, 0, v___x_951_);
v___x_953_ = v___x_375_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v_impl_863_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
else
{
if (lean_obj_tag(v_l_372_) == 0)
{
lean_object* v_l_955_; 
v_l_955_ = lean_ctor_get(v_l_372_, 3);
if (lean_obj_tag(v_l_955_) == 0)
{
lean_object* v_r_956_; 
lean_inc_ref(v_l_955_);
v_r_956_ = lean_ctor_get(v_l_372_, 4);
lean_inc(v_r_956_);
if (lean_obj_tag(v_r_956_) == 0)
{
lean_object* v_size_957_; lean_object* v_k_958_; lean_object* v_v_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_972_; 
v_size_957_ = lean_ctor_get(v_l_372_, 0);
v_k_958_ = lean_ctor_get(v_l_372_, 1);
v_v_959_ = lean_ctor_get(v_l_372_, 2);
v_isSharedCheck_972_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; lean_object* v_unused_974_; 
v_unused_973_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_973_);
v_unused_974_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_974_);
v___x_961_ = v_l_372_;
v_isShared_962_ = v_isSharedCheck_972_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_v_959_);
lean_inc(v_k_958_);
lean_inc(v_size_957_);
lean_dec(v_l_372_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_972_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v_size_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v_size_963_ = lean_ctor_get(v_r_956_, 0);
v___x_964_ = lean_nat_add(v___x_864_, v_size_957_);
lean_dec(v_size_957_);
v___x_965_ = lean_nat_add(v___x_864_, v_size_963_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 4, v_impl_863_);
lean_ctor_set(v___x_961_, 3, v_r_956_);
lean_ctor_set(v___x_961_, 2, v_v_371_);
lean_ctor_set(v___x_961_, 1, v_k_370_);
lean_ctor_set(v___x_961_, 0, v___x_965_);
v___x_967_ = v___x_961_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_965_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_971_, 3, v_r_956_);
lean_ctor_set(v_reuseFailAlloc_971_, 4, v_impl_863_);
v___x_967_ = v_reuseFailAlloc_971_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_969_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v___x_967_);
lean_ctor_set(v___x_375_, 3, v_l_955_);
lean_ctor_set(v___x_375_, 2, v_v_959_);
lean_ctor_set(v___x_375_, 1, v_k_958_);
lean_ctor_set(v___x_375_, 0, v___x_964_);
v___x_969_ = v___x_375_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_k_958_);
lean_ctor_set(v_reuseFailAlloc_970_, 2, v_v_959_);
lean_ctor_set(v_reuseFailAlloc_970_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_970_, 4, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
else
{
lean_object* v_k_975_; lean_object* v_v_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_987_; 
v_k_975_ = lean_ctor_get(v_l_372_, 1);
v_v_976_ = lean_ctor_get(v_l_372_, 2);
v_isSharedCheck_987_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_987_ == 0)
{
lean_object* v_unused_988_; lean_object* v_unused_989_; lean_object* v_unused_990_; 
v_unused_988_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_990_);
v___x_978_ = v_l_372_;
v_isShared_979_ = v_isSharedCheck_987_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_v_976_);
lean_inc(v_k_975_);
lean_dec(v_l_372_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_987_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(3u);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 3, v_r_956_);
lean_ctor_set(v___x_978_, 2, v_v_371_);
lean_ctor_set(v___x_978_, 1, v_k_370_);
lean_ctor_set(v___x_978_, 0, v___x_864_);
v___x_982_ = v___x_978_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_986_, 3, v_r_956_);
lean_ctor_set(v_reuseFailAlloc_986_, 4, v_r_956_);
v___x_982_ = v_reuseFailAlloc_986_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v___x_982_);
lean_ctor_set(v___x_375_, 3, v_l_955_);
lean_ctor_set(v___x_375_, 2, v_v_976_);
lean_ctor_set(v___x_375_, 1, v_k_975_);
lean_ctor_set(v___x_375_, 0, v___x_980_);
v___x_984_ = v___x_375_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_k_975_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v_v_976_);
lean_ctor_set(v_reuseFailAlloc_985_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_985_, 4, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
else
{
lean_object* v_r_991_; 
v_r_991_ = lean_ctor_get(v_l_372_, 4);
lean_inc(v_r_991_);
if (lean_obj_tag(v_r_991_) == 0)
{
lean_object* v_k_992_; lean_object* v_v_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1016_; 
lean_inc(v_l_955_);
v_k_992_ = lean_ctor_get(v_l_372_, 1);
v_v_993_ = lean_ctor_get(v_l_372_, 2);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_l_372_);
if (v_isSharedCheck_1016_ == 0)
{
lean_object* v_unused_1017_; lean_object* v_unused_1018_; lean_object* v_unused_1019_; 
v_unused_1017_ = lean_ctor_get(v_l_372_, 4);
lean_dec(v_unused_1017_);
v_unused_1018_ = lean_ctor_get(v_l_372_, 3);
lean_dec(v_unused_1018_);
v_unused_1019_ = lean_ctor_get(v_l_372_, 0);
lean_dec(v_unused_1019_);
v___x_995_ = v_l_372_;
v_isShared_996_ = v_isSharedCheck_1016_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_v_993_);
lean_inc(v_k_992_);
lean_dec(v_l_372_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1016_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v_k_997_; lean_object* v_v_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1012_; 
v_k_997_ = lean_ctor_get(v_r_991_, 1);
v_v_998_ = lean_ctor_get(v_r_991_, 2);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_r_991_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; lean_object* v_unused_1014_; lean_object* v_unused_1015_; 
v_unused_1013_ = lean_ctor_get(v_r_991_, 4);
lean_dec(v_unused_1013_);
v_unused_1014_ = lean_ctor_get(v_r_991_, 3);
lean_dec(v_unused_1014_);
v_unused_1015_ = lean_ctor_get(v_r_991_, 0);
lean_dec(v_unused_1015_);
v___x_1000_ = v_r_991_;
v_isShared_1001_ = v_isSharedCheck_1012_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_v_998_);
lean_inc(v_k_997_);
lean_dec(v_r_991_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1012_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1004_; 
v___x_1002_ = lean_unsigned_to_nat(3u);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 4, v_l_955_);
lean_ctor_set(v___x_1000_, 3, v_l_955_);
lean_ctor_set(v___x_1000_, 2, v_v_993_);
lean_ctor_set(v___x_1000_, 1, v_k_992_);
lean_ctor_set(v___x_1000_, 0, v___x_864_);
v___x_1004_ = v___x_1000_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_k_992_);
lean_ctor_set(v_reuseFailAlloc_1011_, 2, v_v_993_);
lean_ctor_set(v_reuseFailAlloc_1011_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_1011_, 4, v_l_955_);
v___x_1004_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1006_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 4, v_l_955_);
lean_ctor_set(v___x_995_, 2, v_v_371_);
lean_ctor_set(v___x_995_, 1, v_k_370_);
lean_ctor_set(v___x_995_, 0, v___x_864_);
v___x_1006_ = v___x_995_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_1010_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_1010_, 3, v_l_955_);
lean_ctor_set(v_reuseFailAlloc_1010_, 4, v_l_955_);
v___x_1006_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v___x_1006_);
lean_ctor_set(v___x_375_, 3, v___x_1004_);
lean_ctor_set(v___x_375_, 2, v_v_998_);
lean_ctor_set(v___x_375_, 1, v_k_997_);
lean_ctor_set(v___x_375_, 0, v___x_1002_);
v___x_1008_ = v___x_375_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_k_997_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v_v_998_);
lean_ctor_set(v_reuseFailAlloc_1009_, 3, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1009_, 4, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = lean_unsigned_to_nat(2u);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_r_991_);
lean_ctor_set(v___x_375_, 0, v___x_1020_);
v___x_1022_ = v___x_375_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_1023_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_1023_, 4, v_r_991_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v___x_1025_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 4, v_l_372_);
lean_ctor_set(v___x_375_, 0, v___x_864_);
v___x_1025_ = v___x_375_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_k_370_);
lean_ctor_set(v_reuseFailAlloc_1026_, 2, v_v_371_);
lean_ctor_set(v_reuseFailAlloc_1026_, 3, v_l_372_);
lean_ctor_set(v_reuseFailAlloc_1026_, 4, v_l_372_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
}
}
else
{
return v_t_369_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg___boxed(lean_object* v_k_1029_, lean_object* v_t_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(v_k_1029_, v_t_1030_);
lean_dec(v_k_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg(lean_object* v_t_1032_, lean_object* v_k_1033_, lean_object* v_fallback_1034_){
_start:
{
if (lean_obj_tag(v_t_1032_) == 0)
{
lean_object* v_k_1035_; lean_object* v_v_1036_; lean_object* v_l_1037_; lean_object* v_r_1038_; uint8_t v___x_1039_; 
v_k_1035_ = lean_ctor_get(v_t_1032_, 1);
v_v_1036_ = lean_ctor_get(v_t_1032_, 2);
v_l_1037_ = lean_ctor_get(v_t_1032_, 3);
v_r_1038_ = lean_ctor_get(v_t_1032_, 4);
v___x_1039_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1033_, v_k_1035_);
switch(v___x_1039_)
{
case 0:
{
v_t_1032_ = v_l_1037_;
goto _start;
}
case 1:
{
lean_inc(v_v_1036_);
return v_v_1036_;
}
default: 
{
v_t_1032_ = v_r_1038_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_1034_);
return v_fallback_1034_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg___boxed(lean_object* v_t_1042_, lean_object* v_k_1043_, lean_object* v_fallback_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg(v_t_1042_, v_k_1043_, v_fallback_1044_);
lean_dec(v_fallback_1044_);
lean_dec(v_k_1043_);
lean_dec(v_t_1042_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested(lean_object* v_stx_1058_, lean_object* v_dec_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
lean_object* v___x_1068_; uint8_t v___x_1069_; 
v___x_1068_ = ((lean_object*)(l_Lean_Elab_Do_elabDoNested___closed__1));
lean_inc(v_stx_1058_);
v___x_1069_ = l_Lean_Syntax_isOfKind(v_stx_1058_, v___x_1068_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; 
lean_dec_ref(v_dec_1059_);
lean_dec(v_stx_1058_);
v___x_1070_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1071_ = lean_unsigned_to_nat(1u);
v___x_1072_ = l_Lean_Syntax_getArg(v_stx_1058_, v___x_1071_);
v___x_1073_ = ((lean_object*)(l_Lean_Elab_Do_elabDoNested___closed__3));
lean_inc(v___x_1072_);
v___x_1074_ = l_Lean_Syntax_isOfKind(v___x_1072_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
lean_dec(v___x_1072_);
lean_dec_ref(v_dec_1059_);
lean_dec(v_stx_1058_);
v___x_1075_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1075_;
}
else
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_Elab_Do_elabDoConfig(v___x_1072_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
lean_dec(v___x_1072_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1076_, 1);
v___x_1078_ = l_Lean_Elab_Do_DoConfig_checkNoCapture(v_a_1077_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_label_x3f_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
lean_dec_ref_known(v___x_1078_, 1);
v_label_x3f_1079_ = lean_ctor_get(v_a_1077_, 0);
lean_inc(v_label_x3f_1079_);
lean_dec(v_a_1077_);
v___x_1080_ = lean_unsigned_to_nat(2u);
v___x_1081_ = l_Lean_Syntax_getArg(v_stx_1058_, v___x_1080_);
lean_dec(v_stx_1058_);
if (lean_obj_tag(v_label_x3f_1079_) == 1)
{
lean_object* v_val_1082_; lean_object* v___x_1083_; 
v_val_1082_ = lean_ctor_get(v_label_x3f_1079_, 0);
lean_inc(v_val_1082_);
lean_dec_ref_known(v_label_x3f_1079_, 1);
lean_inc(v___x_1081_);
v___x_1083_ = l_Lean_Elab_Do_inferControlInfoSeq(v___x_1081_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v_breaks_1085_; lean_object* v_continues_1086_; lean_object* v_returns_1087_; lean_object* v_numRegularExits_1088_; uint8_t v_noFallthrough_1089_; lean_object* v_reassigns_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1108_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v_breaks_1085_ = lean_ctor_get(v_a_1084_, 0);
v_continues_1086_ = lean_ctor_get(v_a_1084_, 1);
v_returns_1087_ = lean_ctor_get(v_a_1084_, 2);
v_numRegularExits_1088_ = lean_ctor_get(v_a_1084_, 3);
v_noFallthrough_1089_ = lean_ctor_get_uint8(v_a_1084_, sizeof(void*)*5);
v_reassigns_1090_ = lean_ctor_get(v_a_1084_, 4);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_a_1084_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1092_ = v_a_1084_;
v_isShared_1093_ = v_isSharedCheck_1108_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_reassigns_1090_);
lean_inc(v_numRegularExits_1088_);
lean_inc(v_returns_1087_);
lean_inc(v_continues_1086_);
lean_inc(v_breaks_1085_);
lean_dec(v_a_1084_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1108_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___f_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; uint8_t v___y_1102_; 
v___x_1094_ = lean_box(v___x_1074_);
lean_inc(v_val_1082_);
v___f_1095_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoNested___lam__2___boxed), 12, 3);
lean_closure_set(v___f_1095_, 0, v___x_1094_);
lean_closure_set(v___f_1095_, 1, v___x_1081_);
lean_closure_set(v___f_1095_, 2, v_val_1082_);
v___x_1096_ = lean_unsigned_to_nat(0u);
v___x_1097_ = l_Lean_TSyntax_getId(v_val_1082_);
lean_dec(v_val_1082_);
v___x_1098_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg(v_returns_1087_, v___x_1097_, v___x_1096_);
v___x_1099_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(v___x_1097_, v_returns_1087_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_nat_add(v_numRegularExits_1088_, v___x_1098_);
lean_dec(v_numRegularExits_1088_);
if (v_noFallthrough_1089_ == 0)
{
lean_dec(v___x_1098_);
v___y_1102_ = v_noFallthrough_1089_;
goto v___jp_1101_;
}
else
{
uint8_t v___x_1107_; 
v___x_1107_ = lean_nat_dec_eq(v___x_1098_, v___x_1096_);
lean_dec(v___x_1098_);
v___y_1102_ = v___x_1107_;
goto v___jp_1101_;
}
v___jp_1101_:
{
lean_object* v___x_1104_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 3, v___x_1100_);
lean_ctor_set(v___x_1092_, 2, v___x_1099_);
v___x_1104_ = v___x_1092_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_breaks_1085_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_continues_1086_);
lean_ctor_set(v_reuseFailAlloc_1106_, 2, v___x_1099_);
lean_ctor_set(v_reuseFailAlloc_1106_, 3, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1106_, 4, v_reassigns_1090_);
v___x_1104_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; 
lean_ctor_set_uint8(v___x_1104_, sizeof(void*)*5, v___y_1102_);
v___x_1105_ = l_Lean_Elab_Do_DoElemCont_withDuplicableCont(v_dec_1059_, v___x_1104_, v___f_1095_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
return v___x_1105_;
}
}
}
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
lean_dec(v_val_1082_);
lean_dec(v___x_1081_);
lean_dec_ref(v_dec_1059_);
v_a_1109_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1083_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1083_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
else
{
lean_object* v___x_1117_; 
lean_dec(v_label_x3f_1079_);
v___x_1117_ = l_Lean_Elab_Do_elabDoSeq(v___x_1081_, v_dec_1059_, v___x_1074_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
return v___x_1117_;
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec(v_a_1077_);
lean_dec_ref(v_dec_1059_);
lean_dec(v_stx_1058_);
v_a_1118_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1078_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1078_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
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
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
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
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v_dec_1059_);
lean_dec(v_stx_1058_);
v_a_1126_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1076_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1076_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___boxed(lean_object* v_stx_1134_, lean_object* v_dec_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Elab_Do_elabDoNested(v_stx_1134_, v_dec_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
lean_dec_ref(v_a_1136_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0(lean_object* v_00_u03b1_1145_, lean_object* v_name_1146_, lean_object* v_type_1147_, lean_object* v_val_1148_, lean_object* v_k_1149_, uint8_t v_nondep_1150_, uint8_t v_kind_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___redArg(v_name_1146_, v_type_1147_, v_val_1148_, v_k_1149_, v_nondep_1150_, v_kind_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1161_, lean_object* v_name_1162_, lean_object* v_type_1163_, lean_object* v_val_1164_, lean_object* v_k_1165_, lean_object* v_nondep_1166_, lean_object* v_kind_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
uint8_t v_nondep_boxed_1176_; uint8_t v_kind_boxed_1177_; lean_object* v_res_1178_; 
v_nondep_boxed_1176_ = lean_unbox(v_nondep_1166_);
v_kind_boxed_1177_ = lean_unbox(v_kind_1167_);
v_res_1178_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDeclZeta___at___00Lean_Elab_Do_elabDoNested_spec__0_spec__0(v_00_u03b1_1161_, v_name_1162_, v_type_1163_, v_val_1164_, v_k_1165_, v_nondep_boxed_1176_, v_kind_boxed_1177_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1(lean_object* v_00_u03b4_1179_, lean_object* v_t_1180_, lean_object* v_k_1181_, lean_object* v_fallback_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___redArg(v_t_1180_, v_k_1181_, v_fallback_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1___boxed(lean_object* v_00_u03b4_1184_, lean_object* v_t_1185_, lean_object* v_k_1186_, lean_object* v_fallback_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Elab_Do_elabDoNested_spec__1(v_00_u03b4_1184_, v_t_1185_, v_k_1186_, v_fallback_1187_);
lean_dec(v_fallback_1187_);
lean_dec(v_k_1186_);
lean_dec(v_t_1185_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2(lean_object* v_00_u03b2_1189_, lean_object* v_k_1190_, lean_object* v_t_1191_, lean_object* v_h_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___redArg(v_k_1190_, v_t_1191_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2___boxed(lean_object* v_00_u03b2_1194_, lean_object* v_k_1195_, lean_object* v_t_1196_, lean_object* v_h_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Elab_Do_elabDoNested_spec__2(v_00_u03b2_1194_, v_k_1195_, v_t_1196_, v_h_1197_);
lean_dec(v_k_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1(){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1206_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1207_ = ((lean_object*)(l_Lean_Elab_Do_elabDoNested___closed__1));
v___x_1208_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1));
v___x_1209_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoNested___boxed), 10, 0);
v___x_1210_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1206_, v___x_1207_, v___x_1208_, v___x_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___boxed(lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
return v_res_1212_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__9(void){
_start:
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Array_mkArray0(lean_box(0));
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless(lean_object* v_stx_1251_, lean_object* v_dec_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1261_; uint8_t v___x_1262_; 
v___x_1261_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__1));
lean_inc(v_stx_1251_);
v___x_1262_ = l_Lean_Syntax_isOfKind(v_stx_1251_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
lean_dec_ref(v_dec_1252_);
lean_dec(v_stx_1251_);
v___x_1263_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1263_;
}
else
{
lean_object* v_ref_1264_; lean_object* v___x_1265_; lean_object* v_tk_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_ref_1264_ = lean_ctor_get(v_a_1258_, 5);
v___x_1265_ = lean_unsigned_to_nat(0u);
v_tk_1266_ = l_Lean_Syntax_getArg(v_stx_1251_, v___x_1265_);
v___x_1267_ = lean_unsigned_to_nat(1u);
v___x_1268_ = l_Lean_Syntax_getArg(v_stx_1251_, v___x_1267_);
v___x_1269_ = lean_unsigned_to_nat(3u);
v___x_1270_ = l_Lean_Syntax_getArg(v_stx_1251_, v___x_1269_);
lean_dec(v_stx_1251_);
v___x_1271_ = 0;
v___x_1272_ = l_Lean_SourceInfo_fromRef(v_ref_1264_, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__3));
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__4));
lean_inc_n(v___x_1272_, 10);
v___x_1275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1272_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__6));
v___x_1277_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__8));
v___x_1278_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__9, &l_Lean_Elab_Do_elabDoUnless___closed__9_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__9);
v___x_1279_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1272_);
lean_ctor_set(v___x_1279_, 1, v___x_1277_);
lean_ctor_set(v___x_1279_, 2, v___x_1278_);
lean_inc_ref_n(v___x_1279_, 2);
v___x_1280_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1276_, v___x_1279_, v___x_1268_);
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__10));
v___x_1282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1272_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__12));
v___x_1284_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__14));
v___x_1285_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__5));
v___x_1286_ = l_Lean_SourceInfo_fromRef(v_tk_1266_, v___x_1262_);
lean_dec(v_tk_1266_);
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__15));
v___x_1288_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1285_, v___x_1288_);
v___x_1290_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1284_, v___x_1289_, v___x_1279_);
v___x_1291_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1277_, v___x_1290_);
v___x_1292_ = l_Lean_Syntax_node1(v___x_1272_, v___x_1283_, v___x_1291_);
v___x_1293_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__16));
v___x_1294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1272_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = l_Lean_Syntax_node2(v___x_1272_, v___x_1277_, v___x_1294_, v___x_1270_);
v___x_1296_ = l_Lean_Syntax_node6(v___x_1272_, v___x_1273_, v___x_1275_, v___x_1280_, v___x_1282_, v___x_1292_, v___x_1279_, v___x_1295_);
v___x_1297_ = l_Lean_Elab_Do_elabDoElem(v___x_1296_, v_dec_1252_, v___x_1262_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_);
return v___x_1297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless___boxed(lean_object* v_stx_1298_, lean_object* v_dec_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_Elab_Do_elabDoUnless(v_stx_1298_, v_dec_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_a_1301_);
lean_dec_ref(v_a_1300_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1(){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1316_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1317_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUnless___closed__1));
v___x_1318_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1));
v___x_1319_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoUnless___boxed), 10, 0);
v___x_1320_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1316_, v___x_1317_, v___x_1318_, v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___boxed(lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0(lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v___x_1328_, lean_object* v___x_1329_, lean_object* v_a_1330_, uint8_t v___x_1331_, lean_object* v_body_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_ref_1341_; uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_ref_1341_ = lean_ctor_get(v___y_1338_, 5);
v___x_1342_ = 0;
v___x_1343_ = l_Lean_SourceInfo_fromRef(v_ref_1341_, v___x_1342_);
v___x_1344_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0));
v___x_1345_ = l_Lean_Name_mkStr4(v___x_1326_, v___x_1327_, v___x_1328_, v___x_1344_);
v___x_1346_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1));
lean_inc_n(v___x_1343_, 2);
v___x_1347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1343_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2));
v___x_1349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1343_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = l_Lean_Syntax_node4(v___x_1343_, v___x_1345_, v___x_1347_, v___x_1329_, v___x_1349_, v_body_1332_);
v___x_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1351_, 0, v_a_1330_);
v___x_1352_ = l_Lean_Elab_Term_elabTerm(v___x_1350_, v___x_1351_, v___x_1331_, v___x_1331_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed(lean_object* v___x_1353_, lean_object* v___x_1354_, lean_object* v___x_1355_, lean_object* v___x_1356_, lean_object* v_a_1357_, lean_object* v___x_1358_, lean_object* v_body_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
uint8_t v___x_3724__boxed_1368_; lean_object* v_res_1369_; 
v___x_3724__boxed_1368_ = lean_unbox(v___x_1358_);
v_res_1369_ = l_Lean_Elab_Do_elabDoDbgTrace___lam__0(v___x_1353_, v___x_1354_, v___x_1355_, v___x_1356_, v_a_1357_, v___x_3724__boxed_1368_, v_body_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1369_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__4(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___closed__3));
v___x_1380_ = l_Lean_MessageData_ofFormat(v___x_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace(lean_object* v_stx_1381_, lean_object* v_dec_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1391_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__0));
v___x_1392_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__1));
v___x_1393_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__2));
v___x_1394_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___closed__1));
lean_inc(v_stx_1381_);
v___x_1395_ = l_Lean_Syntax_isOfKind(v_stx_1381_, v___x_1394_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; 
lean_dec_ref(v_dec_1382_);
lean_dec(v_stx_1381_);
v___x_1396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1396_;
}
else
{
lean_object* v_doBlockResultType_1397_; lean_object* v___x_1398_; 
v_doBlockResultType_1397_ = lean_ctor_get(v_a_1383_, 3);
lean_inc_ref(v_doBlockResultType_1397_);
v___x_1398_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1397_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; lean_object* v_tk_1401_; lean_object* v___x_1402_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = lean_unsigned_to_nat(0u);
v_tk_1401_ = l_Lean_Syntax_getArg(v_stx_1381_, v___x_1400_);
v___x_1402_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_1382_, v_tk_1401_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
lean_dec(v_tk_1401_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = l_Lean_Syntax_getArg(v_stx_1381_, v___x_1404_);
lean_dec(v_stx_1381_);
v___x_1406_ = lean_box(v___x_1395_);
v___f_1407_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed), 15, 6);
lean_closure_set(v___f_1407_, 0, v___x_1391_);
lean_closure_set(v___f_1407_, 1, v___x_1392_);
lean_closure_set(v___f_1407_, 2, v___x_1393_);
lean_closure_set(v___f_1407_, 3, v___x_1405_);
lean_closure_set(v___f_1407_, 4, v_a_1399_);
lean_closure_set(v___f_1407_, 5, v___x_1406_);
v___x_1408_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__4, &l_Lean_Elab_Do_elabDoDbgTrace___closed__4_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__4);
v___x_1409_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1409_, 0, v_a_1403_);
v___x_1410_ = lean_box(0);
v___x_1411_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1408_, v___x_1409_, v___f_1407_, v___x_1410_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
return v___x_1411_;
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec(v_a_1399_);
lean_dec(v_stx_1381_);
v_a_1412_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1402_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1402_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
else
{
lean_dec_ref(v_dec_1382_);
lean_dec(v_stx_1381_);
return v___x_1398_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___boxed(lean_object* v_stx_1420_, lean_object* v_dec_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_Elab_Do_elabDoDbgTrace(v_stx_1420_, v_dec_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1(){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1438_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1439_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___closed__1));
v___x_1440_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1));
v___x_1441_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDbgTrace___boxed), 10, 0);
v___x_1442_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1438_, v___x_1439_, v___x_1440_, v___x_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___boxed(lean_object* v_a_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0(lean_object* v___x_1447_, lean_object* v___x_1448_, lean_object* v___x_1449_, lean_object* v___x_1450_, lean_object* v_a_1451_, uint8_t v___x_1452_, lean_object* v_body_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_ref_1462_; uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_ref_1462_ = lean_ctor_get(v___y_1459_, 5);
v___x_1463_ = 0;
v___x_1464_ = l_Lean_SourceInfo_fromRef(v_ref_1462_, v___x_1463_);
v___x_1465_ = ((lean_object*)(l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0));
v___x_1466_ = l_Lean_Name_mkStr4(v___x_1447_, v___x_1448_, v___x_1449_, v___x_1465_);
v___x_1467_ = ((lean_object*)(l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1));
lean_inc_n(v___x_1464_, 2);
v___x_1468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1464_);
lean_ctor_set(v___x_1468_, 1, v___x_1467_);
v___x_1469_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2));
v___x_1470_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1464_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
v___x_1471_ = l_Lean_Syntax_node4(v___x_1464_, v___x_1466_, v___x_1468_, v___x_1450_, v___x_1470_, v_body_1453_);
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_a_1451_);
v___x_1473_ = l_Lean_Elab_Term_elabTerm(v___x_1471_, v___x_1472_, v___x_1452_, v___x_1452_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___boxed(lean_object* v___x_1474_, lean_object* v___x_1475_, lean_object* v___x_1476_, lean_object* v___x_1477_, lean_object* v_a_1478_, lean_object* v___x_1479_, lean_object* v_body_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
uint8_t v___x_3713__boxed_1489_; lean_object* v_res_1490_; 
v___x_3713__boxed_1489_ = lean_unbox(v___x_1479_);
v_res_1490_ = l_Lean_Elab_Do_elabDoAssert___lam__0(v___x_1474_, v___x_1475_, v___x_1476_, v___x_1477_, v_a_1478_, v___x_3713__boxed_1489_, v_body_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec_ref(v___y_1481_);
return v_res_1490_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__4(void){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = ((lean_object*)(l_Lean_Elab_Do_elabDoAssert___closed__3));
v___x_1501_ = l_Lean_MessageData_ofFormat(v___x_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert(lean_object* v_stx_1502_, lean_object* v_dec_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1512_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__0));
v___x_1513_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__1));
v___x_1514_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__2));
v___x_1515_ = ((lean_object*)(l_Lean_Elab_Do_elabDoAssert___closed__1));
lean_inc(v_stx_1502_);
v___x_1516_ = l_Lean_Syntax_isOfKind(v_stx_1502_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; 
lean_dec_ref(v_dec_1503_);
lean_dec(v_stx_1502_);
v___x_1517_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1517_;
}
else
{
lean_object* v_doBlockResultType_1518_; lean_object* v___x_1519_; 
v_doBlockResultType_1518_ = lean_ctor_get(v_a_1504_, 3);
lean_inc_ref(v_doBlockResultType_1518_);
v___x_1519_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1518_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; lean_object* v_tk_1522_; lean_object* v___x_1523_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___x_1521_ = lean_unsigned_to_nat(0u);
v_tk_1522_ = l_Lean_Syntax_getArg(v_stx_1502_, v___x_1521_);
v___x_1523_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_1503_, v_tk_1522_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
lean_dec(v_tk_1522_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___f_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = lean_unsigned_to_nat(1u);
v___x_1526_ = l_Lean_Syntax_getArg(v_stx_1502_, v___x_1525_);
lean_dec(v_stx_1502_);
v___x_1527_ = lean_box(v___x_1516_);
v___f_1528_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoAssert___lam__0___boxed), 15, 6);
lean_closure_set(v___f_1528_, 0, v___x_1512_);
lean_closure_set(v___f_1528_, 1, v___x_1513_);
lean_closure_set(v___f_1528_, 2, v___x_1514_);
lean_closure_set(v___f_1528_, 3, v___x_1526_);
lean_closure_set(v___f_1528_, 4, v_a_1520_);
lean_closure_set(v___f_1528_, 5, v___x_1527_);
v___x_1529_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__4, &l_Lean_Elab_Do_elabDoAssert___closed__4_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__4);
v___x_1530_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1530_, 0, v_a_1524_);
v___x_1531_ = lean_box(0);
v___x_1532_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1529_, v___x_1530_, v___f_1528_, v___x_1531_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
return v___x_1532_;
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_a_1520_);
lean_dec(v_stx_1502_);
v_a_1533_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1523_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1523_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
else
{
lean_dec_ref(v_dec_1503_);
lean_dec(v_stx_1502_);
return v___x_1519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___boxed(lean_object* v_stx_1541_, lean_object* v_dec_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_Elab_Do_elabDoAssert(v_stx_1541_, v_dec_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec_ref(v_a_1543_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1(){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1559_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1560_ = ((lean_object*)(l_Lean_Elab_Do_elabDoAssert___closed__1));
v___x_1561_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1));
v___x_1562_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoAssert___boxed), 10, 0);
v___x_1563_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1559_, v___x_1560_, v___x_1561_, v___x_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___boxed(lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0(lean_object* v___x_1568_, lean_object* v___x_1569_, lean_object* v___x_1570_, lean_object* v___x_1571_, lean_object* v_a_1572_, uint8_t v___x_1573_, lean_object* v_body_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_ref_1583_; uint8_t v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v_ref_1583_ = lean_ctor_get(v___y_1580_, 5);
v___x_1584_ = 0;
v___x_1585_ = l_Lean_SourceInfo_fromRef(v_ref_1583_, v___x_1584_);
v___x_1586_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0));
v___x_1587_ = l_Lean_Name_mkStr4(v___x_1568_, v___x_1569_, v___x_1570_, v___x_1586_);
v___x_1588_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1));
lean_inc_n(v___x_1585_, 2);
v___x_1589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1585_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2));
v___x_1591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1585_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = l_Lean_Syntax_node4(v___x_1585_, v___x_1587_, v___x_1589_, v___x_1571_, v___x_1591_, v_body_1574_);
v___x_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1593_, 0, v_a_1572_);
v___x_1594_ = l_Lean_Elab_Term_elabTerm(v___x_1592_, v___x_1593_, v___x_1573_, v___x_1573_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed(lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v___x_1598_, lean_object* v_a_1599_, lean_object* v___x_1600_, lean_object* v_body_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
uint8_t v___x_3713__boxed_1610_; lean_object* v_res_1611_; 
v___x_3713__boxed_1610_ = lean_unbox(v___x_1600_);
v_res_1611_ = l_Lean_Elab_Do_elabDoDebugAssert___lam__0(v___x_1595_, v___x_1596_, v___x_1597_, v___x_1598_, v_a_1599_, v___x_3713__boxed_1610_, v_body_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v_res_1611_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__4(void){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDebugAssert___closed__3));
v___x_1622_ = l_Lean_MessageData_ofFormat(v___x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert(lean_object* v_stx_1623_, lean_object* v_dec_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1633_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__0));
v___x_1634_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__1));
v___x_1635_ = ((lean_object*)(l_Lean_Elab_Do_elabDoSkip___closed__2));
v___x_1636_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDebugAssert___closed__1));
lean_inc(v_stx_1623_);
v___x_1637_ = l_Lean_Syntax_isOfKind(v_stx_1623_, v___x_1636_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; 
lean_dec_ref(v_dec_1624_);
lean_dec(v_stx_1623_);
v___x_1638_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_1638_;
}
else
{
lean_object* v_doBlockResultType_1639_; lean_object* v___x_1640_; 
v_doBlockResultType_1639_ = lean_ctor_get(v_a_1625_, 3);
lean_inc_ref(v_doBlockResultType_1639_);
v___x_1640_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1639_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; lean_object* v_tk_1643_; lean_object* v___x_1644_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = lean_unsigned_to_nat(0u);
v_tk_1643_ = l_Lean_Syntax_getArg(v_stx_1623_, v___x_1642_);
v___x_1644_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_1624_, v_tk_1643_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
lean_dec(v_tk_1643_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___f_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1644_, 1);
v___x_1646_ = lean_unsigned_to_nat(1u);
v___x_1647_ = l_Lean_Syntax_getArg(v_stx_1623_, v___x_1646_);
lean_dec(v_stx_1623_);
v___x_1648_ = lean_box(v___x_1637_);
v___f_1649_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed), 15, 6);
lean_closure_set(v___f_1649_, 0, v___x_1633_);
lean_closure_set(v___f_1649_, 1, v___x_1634_);
lean_closure_set(v___f_1649_, 2, v___x_1635_);
lean_closure_set(v___f_1649_, 3, v___x_1647_);
lean_closure_set(v___f_1649_, 4, v_a_1641_);
lean_closure_set(v___f_1649_, 5, v___x_1648_);
v___x_1650_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__4, &l_Lean_Elab_Do_elabDoDebugAssert___closed__4_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__4);
v___x_1651_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_1651_, 0, v_a_1645_);
v___x_1652_ = lean_box(0);
v___x_1653_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1650_, v___x_1651_, v___f_1649_, v___x_1652_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
return v___x_1653_;
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v_a_1641_);
lean_dec(v_stx_1623_);
v_a_1654_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1644_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1644_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
else
{
lean_dec_ref(v_dec_1624_);
lean_dec(v_stx_1623_);
return v___x_1640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___boxed(lean_object* v_stx_1662_, lean_object* v_dec_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Elab_Do_elabDoDebugAssert(v_stx_1662_, v_dec_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
lean_dec(v_a_1666_);
lean_dec_ref(v_a_1665_);
lean_dec_ref(v_a_1664_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1(){
_start:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1680_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1681_ = ((lean_object*)(l_Lean_Elab_Do_elabDoDebugAssert___closed__1));
v___x_1682_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1));
v___x_1683_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDebugAssert___boxed), 10, 0);
v___x_1684_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1680_, v___x_1681_, v___x_1682_, v___x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___boxed(lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
return v_res_1686_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Misc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Misc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Misc(builtin);
}
#ifdef __cplusplus
}
#endif
