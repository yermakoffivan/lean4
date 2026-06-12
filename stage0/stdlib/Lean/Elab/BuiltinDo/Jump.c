// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Jump
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
lean_object* l_Lean_Elab_Do_DoElemCont_elabAsSyntacticallyDeadCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkPUnitUnit___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoConfig_checkNoCapture(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getReturnCont___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_getContinueCont___redArg(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getBreakCont___redArg(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoReturn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(104, 186, 248, 230, 72, 158, 210, 227)}};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Unknown label `"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReturn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReturn___closed__8;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReturn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReturn___closed__10;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Cannot `return` to label `"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReturn___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReturn___closed__12;
static const lean_string_object l_Lean_Elab_Do_elabDoReturn___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "`: it names a loop, not a `do` block"};
static const lean_object* l_Lean_Elab_Do_elabDoReturn___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReturn___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReturn___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReturn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoReturn"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(171, 125, 33, 30, 123, 109, 189, 115)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoBreak___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_elabDoBreak___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoBreak___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_elabDoBreak___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoBreak___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "`break` must be nested inside a loop"};
static const lean_object* l_Lean_Elab_Do_elabDoBreak___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoBreak___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoBreak___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoBreak___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Cannot `break` to label `"};
static const lean_object* l_Lean_Elab_Do_elabDoBreak___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoBreak___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoBreak___closed__5;
static const lean_string_object l_Lean_Elab_Do_elabDoBreak___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "`: it names a `do` block, not a loop"};
static const lean_object* l_Lean_Elab_Do_elabDoBreak___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoBreak___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoBreak___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoBreak___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBreak(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBreak___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabDoBreak"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 189, 232, 124, 184, 58, 94, 132)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoContinue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_elabDoContinue___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoContinue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_elabDoContinue___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoContinue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`continue` must be nested inside a loop"};
static const lean_object* l_Lean_Elab_Do_elabDoContinue___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoContinue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoContinue___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoContinue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Cannot `continue` to label `"};
static const lean_object* l_Lean_Elab_Do_elabDoContinue___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoContinue___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoContinue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoContinue___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoContinue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoContinue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabDoContinue"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoReturn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 204, 183, 144, 89, 241, 195, 190)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0(v_00_u03b1_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2(lean_object* v_msgData_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___x_35_; lean_object* v_env_36_; lean_object* v___x_37_; lean_object* v_mctx_38_; lean_object* v_lctx_39_; lean_object* v_options_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_35_ = lean_st_ref_get(v___y_33_);
v_env_36_ = lean_ctor_get(v___x_35_, 0);
lean_inc_ref(v_env_36_);
lean_dec(v___x_35_);
v___x_37_ = lean_st_ref_get(v___y_31_);
v_mctx_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc_ref(v_mctx_38_);
lean_dec(v___x_37_);
v_lctx_39_ = lean_ctor_get(v___y_30_, 2);
v_options_40_ = lean_ctor_get(v___y_32_, 2);
lean_inc_ref(v_options_40_);
lean_inc_ref(v_lctx_39_);
v___x_41_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_41_, 0, v_env_36_);
lean_ctor_set(v___x_41_, 1, v_mctx_38_);
lean_ctor_set(v___x_41_, 2, v_lctx_39_);
lean_ctor_set(v___x_41_, 3, v_options_40_);
v___x_42_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v_msgData_29_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2(v_msgData_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(lean_object* v_msg_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_ref_57_; lean_object* v___x_58_; lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_67_; 
v_ref_57_ = lean_ctor_get(v___y_54_, 5);
v___x_58_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1_spec__2(v_msg_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
v_a_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_67_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_67_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_67_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v___x_65_; 
lean_inc(v_ref_57_);
v___x_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_63_, 0, v_ref_57_);
lean_ctor_set(v___x_63_, 1, v_a_59_);
if (v_isShared_62_ == 0)
{
lean_ctor_set_tag(v___x_61_, 1);
lean_ctor_set(v___x_61_, 0, v___x_63_);
v___x_65_ = v___x_61_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_63_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg___boxed(lean_object* v_msg_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(v_msg_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(lean_object* v_ref_75_, lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_fileName_85_; lean_object* v_fileMap_86_; lean_object* v_options_87_; lean_object* v_currRecDepth_88_; lean_object* v_maxRecDepth_89_; lean_object* v_ref_90_; lean_object* v_currNamespace_91_; lean_object* v_openDecls_92_; lean_object* v_initHeartbeats_93_; lean_object* v_maxHeartbeats_94_; lean_object* v_quotContext_95_; lean_object* v_currMacroScope_96_; uint8_t v_diag_97_; lean_object* v_cancelTk_x3f_98_; uint8_t v_suppressElabErrors_99_; lean_object* v_inheritedTraceOptions_100_; lean_object* v_ref_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_fileName_85_ = lean_ctor_get(v___y_82_, 0);
v_fileMap_86_ = lean_ctor_get(v___y_82_, 1);
v_options_87_ = lean_ctor_get(v___y_82_, 2);
v_currRecDepth_88_ = lean_ctor_get(v___y_82_, 3);
v_maxRecDepth_89_ = lean_ctor_get(v___y_82_, 4);
v_ref_90_ = lean_ctor_get(v___y_82_, 5);
v_currNamespace_91_ = lean_ctor_get(v___y_82_, 6);
v_openDecls_92_ = lean_ctor_get(v___y_82_, 7);
v_initHeartbeats_93_ = lean_ctor_get(v___y_82_, 8);
v_maxHeartbeats_94_ = lean_ctor_get(v___y_82_, 9);
v_quotContext_95_ = lean_ctor_get(v___y_82_, 10);
v_currMacroScope_96_ = lean_ctor_get(v___y_82_, 11);
v_diag_97_ = lean_ctor_get_uint8(v___y_82_, sizeof(void*)*14);
v_cancelTk_x3f_98_ = lean_ctor_get(v___y_82_, 12);
v_suppressElabErrors_99_ = lean_ctor_get_uint8(v___y_82_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_100_ = lean_ctor_get(v___y_82_, 13);
v_ref_101_ = l_Lean_replaceRef(v_ref_75_, v_ref_90_);
lean_inc_ref(v_inheritedTraceOptions_100_);
lean_inc(v_cancelTk_x3f_98_);
lean_inc(v_currMacroScope_96_);
lean_inc(v_quotContext_95_);
lean_inc(v_maxHeartbeats_94_);
lean_inc(v_initHeartbeats_93_);
lean_inc(v_openDecls_92_);
lean_inc(v_currNamespace_91_);
lean_inc(v_maxRecDepth_89_);
lean_inc(v_currRecDepth_88_);
lean_inc_ref(v_options_87_);
lean_inc_ref(v_fileMap_86_);
lean_inc_ref(v_fileName_85_);
v___x_102_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_102_, 0, v_fileName_85_);
lean_ctor_set(v___x_102_, 1, v_fileMap_86_);
lean_ctor_set(v___x_102_, 2, v_options_87_);
lean_ctor_set(v___x_102_, 3, v_currRecDepth_88_);
lean_ctor_set(v___x_102_, 4, v_maxRecDepth_89_);
lean_ctor_set(v___x_102_, 5, v_ref_101_);
lean_ctor_set(v___x_102_, 6, v_currNamespace_91_);
lean_ctor_set(v___x_102_, 7, v_openDecls_92_);
lean_ctor_set(v___x_102_, 8, v_initHeartbeats_93_);
lean_ctor_set(v___x_102_, 9, v_maxHeartbeats_94_);
lean_ctor_set(v___x_102_, 10, v_quotContext_95_);
lean_ctor_set(v___x_102_, 11, v_currMacroScope_96_);
lean_ctor_set(v___x_102_, 12, v_cancelTk_x3f_98_);
lean_ctor_set(v___x_102_, 13, v_inheritedTraceOptions_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*14, v_diag_97_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*14 + 1, v_suppressElabErrors_99_);
v___x_103_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(v_msg_76_, v___y_80_, v___y_81_, v___x_102_, v___y_83_);
lean_dec_ref_known(v___x_102_, 14);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg___boxed(lean_object* v_ref_104_, lean_object* v_msg_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_ref_104_, v_msg_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec(v___y_110_);
lean_dec_ref(v___y_109_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v_ref_104_);
return v_res_114_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReturn___closed__8(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__7));
v___x_132_ = l_Lean_stringToMessageData(v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReturn___closed__10(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__9));
v___x_135_ = l_Lean_stringToMessageData(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReturn___closed__12(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__11));
v___x_138_ = l_Lean_stringToMessageData(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReturn___closed__14(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__13));
v___x_141_ = l_Lean_stringToMessageData(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReturn(lean_object* v_stx_142_, lean_object* v_dec_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v___y_153_; lean_object* v_e_154_; lean_object* v___y_155_; lean_object* v___y_156_; lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v___y_159_; lean_object* v___y_160_; lean_object* v___y_161_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__4));
lean_inc(v_stx_142_);
v___x_174_ = l_Lean_Syntax_isOfKind(v_stx_142_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec_ref(v_dec_143_);
lean_dec(v_stx_142_);
v___x_175_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_175_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; lean_object* v___y_181_; lean_object* v_returnCont_182_; lean_object* v___y_183_; lean_object* v___y_184_; lean_object* v___y_185_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v_e_x3f_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v___y_223_; 
v___x_176_ = lean_unsigned_to_nat(1u);
v___x_177_ = l_Lean_Syntax_getArg(v_stx_142_, v___x_176_);
v___x_178_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__6));
lean_inc(v___x_177_);
v___x_179_ = l_Lean_Syntax_isOfKind(v___x_177_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_313_; 
lean_dec(v___x_177_);
lean_dec_ref(v_dec_143_);
lean_dec(v_stx_142_);
v___x_313_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_314_ = lean_unsigned_to_nat(2u);
v___x_315_ = l_Lean_Syntax_getArg(v_stx_142_, v___x_314_);
lean_dec(v_stx_142_);
v___x_316_ = l_Lean_Syntax_isNone(v___x_315_);
if (v___x_316_ == 0)
{
uint8_t v___x_317_; 
lean_inc(v___x_315_);
v___x_317_ = l_Lean_Syntax_matchesNull(v___x_315_, v___x_176_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; 
lean_dec(v___x_315_);
lean_dec(v___x_177_);
lean_dec_ref(v_dec_143_);
v___x_318_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_318_;
}
else
{
lean_object* v___x_319_; lean_object* v_e_x3f_320_; lean_object* v___x_321_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v_e_x3f_320_ = l_Lean_Syntax_getArg(v___x_315_, v___x_319_);
lean_dec(v___x_315_);
v___x_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_321_, 0, v_e_x3f_320_);
v_e_x3f_216_ = v___x_321_;
v___y_217_ = v_a_144_;
v___y_218_ = v_a_145_;
v___y_219_ = v_a_146_;
v___y_220_ = v_a_147_;
v___y_221_ = v_a_148_;
v___y_222_ = v_a_149_;
v___y_223_ = v_a_150_;
goto v___jp_215_;
}
}
else
{
lean_object* v___x_322_; 
lean_dec(v___x_315_);
v___x_322_ = lean_box(0);
v_e_x3f_216_ = v___x_322_;
v___y_217_ = v_a_144_;
v___y_218_ = v_a_145_;
v___y_219_ = v_a_146_;
v___y_220_ = v_a_147_;
v___y_221_ = v_a_148_;
v___y_222_ = v_a_149_;
v___y_223_ = v_a_150_;
goto v___jp_215_;
}
}
v___jp_180_:
{
if (lean_obj_tag(v___y_181_) == 0)
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_Elab_Do_mkPUnitUnit___redArg(v___y_183_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_202_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_202_ == 0)
{
v___x_193_ = v___x_190_;
v_isShared_194_ = v_isSharedCheck_202_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_190_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_202_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v_resultType_195_; lean_object* v___x_197_; 
v_resultType_195_ = lean_ctor_get(v_returnCont_182_, 0);
lean_inc_ref(v_resultType_195_);
if (v_isShared_194_ == 0)
{
lean_ctor_set_tag(v___x_193_, 1);
lean_ctor_set(v___x_193_, 0, v_resultType_195_);
v___x_197_ = v___x_193_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_resultType_195_);
v___x_197_ = v_reuseFailAlloc_201_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_Lean_Elab_Term_ensureHasType(v___x_197_, v_a_191_, v___x_198_, v___x_198_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_a_200_; 
v_a_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc(v_a_200_);
lean_dec_ref_known(v___x_199_, 1);
v___y_153_ = v_returnCont_182_;
v_e_154_ = v_a_200_;
v___y_155_ = v___y_183_;
v___y_156_ = v___y_184_;
v___y_157_ = v___y_185_;
v___y_158_ = v___y_186_;
v___y_159_ = v___y_187_;
v___y_160_ = v___y_188_;
v___y_161_ = v___y_189_;
goto v___jp_152_;
}
else
{
lean_dec_ref(v_returnCont_182_);
lean_dec_ref(v_dec_143_);
return v___x_199_;
}
}
}
}
else
{
lean_dec_ref(v_returnCont_182_);
lean_dec_ref(v_dec_143_);
return v___x_190_;
}
}
else
{
lean_object* v_val_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_214_; 
v_val_203_ = lean_ctor_get(v___y_181_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___y_181_);
if (v_isSharedCheck_214_ == 0)
{
v___x_205_ = v___y_181_;
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_val_203_);
lean_dec(v___y_181_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_resultType_207_; lean_object* v___x_209_; 
v_resultType_207_ = lean_ctor_get(v_returnCont_182_, 0);
lean_inc_ref(v_resultType_207_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v_resultType_207_);
v___x_209_ = v___x_205_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_resultType_207_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_box(0);
v___x_211_ = l_Lean_Elab_Term_elabTermEnsuringType(v_val_203_, v___x_209_, v___x_179_, v___x_179_, v___x_210_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
v___y_153_ = v_returnCont_182_;
v_e_154_ = v_a_212_;
v___y_155_ = v___y_183_;
v___y_156_ = v___y_184_;
v___y_157_ = v___y_185_;
v___y_158_ = v___y_186_;
v___y_159_ = v___y_187_;
v___y_160_ = v___y_188_;
v___y_161_ = v___y_189_;
goto v___jp_152_;
}
else
{
lean_dec_ref(v_returnCont_182_);
lean_dec_ref(v_dec_143_);
return v___x_211_;
}
}
}
}
}
v___jp_215_:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_Elab_Do_elabDoConfig(v___x_177_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___x_177_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Elab_Do_DoConfig_checkNoCapture(v_a_225_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_label_x3f_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_295_; 
lean_dec_ref_known(v___x_226_, 1);
v_label_x3f_227_ = lean_ctor_get(v_a_225_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v_a_225_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v_a_225_, 1);
lean_dec(v_unused_296_);
v___x_229_ = v_a_225_;
v_isShared_230_ = v_isSharedCheck_295_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_label_x3f_227_);
lean_dec(v_a_225_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_295_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
if (lean_obj_tag(v_label_x3f_227_) == 0)
{
lean_object* v___x_231_; 
lean_del_object(v___x_229_);
v___x_231_ = l_Lean_Elab_Do_getReturnCont___redArg(v___y_217_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___y_181_ = v_e_x3f_216_;
v_returnCont_182_ = v_a_232_;
v___y_183_ = v___y_217_;
v___y_184_ = v___y_218_;
v___y_185_ = v___y_219_;
v___y_186_ = v___y_220_;
v___y_187_ = v___y_221_;
v___y_188_ = v___y_222_;
v___y_189_ = v___y_223_;
goto v___jp_180_;
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v_a_233_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_231_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_231_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v_val_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_val_241_ = lean_ctor_get(v_label_x3f_227_, 0);
lean_inc(v_val_241_);
lean_dec_ref_known(v_label_x3f_227_, 1);
v___x_242_ = l_Lean_TSyntax_getId(v_val_241_);
v___x_243_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v___x_242_, v___y_217_);
lean_dec(v___x_242_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_243_, 1);
if (lean_obj_tag(v_a_244_) == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v___x_245_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__8, &l_Lean_Elab_Do_elabDoReturn___closed__8_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__8);
lean_inc(v_val_241_);
v___x_246_ = l_Lean_MessageData_ofSyntax(v_val_241_);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 7);
lean_ctor_set(v___x_229_, 1, v___x_246_);
lean_ctor_set(v___x_229_, 0, v___x_245_);
v___x_248_ = v___x_229_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v___x_246_);
v___x_248_ = v_reuseFailAlloc_260_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v___x_249_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__10, &l_Lean_Elab_Do_elabDoReturn___closed__10_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__10);
v___x_250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_241_, v___x_250_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v_val_241_);
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
else
{
lean_object* v_val_261_; 
v_val_261_ = lean_ctor_get(v_a_244_, 0);
lean_inc(v_val_261_);
lean_dec_ref_known(v_a_244_, 1);
if (lean_obj_tag(v_val_261_) == 0)
{
lean_object* v_returnCont_262_; 
lean_dec(v_val_241_);
lean_del_object(v___x_229_);
v_returnCont_262_ = lean_ctor_get(v_val_261_, 0);
lean_inc_ref(v_returnCont_262_);
lean_dec_ref_known(v_val_261_, 1);
v___y_181_ = v_e_x3f_216_;
v_returnCont_182_ = v_returnCont_262_;
v___y_183_ = v___y_217_;
v___y_184_ = v___y_218_;
v___y_185_ = v___y_219_;
v___y_186_ = v___y_220_;
v___y_187_ = v___y_221_;
v___y_188_ = v___y_222_;
v___y_189_ = v___y_223_;
goto v___jp_180_;
}
else
{
lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_284_; 
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v_isSharedCheck_284_ = !lean_is_exclusive(v_val_261_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; lean_object* v_unused_286_; 
v_unused_285_ = lean_ctor_get(v_val_261_, 1);
lean_dec(v_unused_285_);
v_unused_286_ = lean_ctor_get(v_val_261_, 0);
lean_dec(v_unused_286_);
v___x_264_ = v_val_261_;
v_isShared_265_ = v_isSharedCheck_284_;
goto v_resetjp_263_;
}
else
{
lean_dec(v_val_261_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_284_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_266_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__12, &l_Lean_Elab_Do_elabDoReturn___closed__12_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__12);
lean_inc(v_val_241_);
v___x_267_ = l_Lean_MessageData_ofSyntax(v_val_241_);
if (v_isShared_265_ == 0)
{
lean_ctor_set_tag(v___x_264_, 7);
lean_ctor_set(v___x_264_, 1, v___x_267_);
lean_ctor_set(v___x_264_, 0, v___x_266_);
v___x_269_ = v___x_264_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_267_);
v___x_269_ = v_reuseFailAlloc_283_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__14, &l_Lean_Elab_Do_elabDoReturn___closed__14_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__14);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 7);
lean_ctor_set(v___x_229_, 1, v___x_270_);
lean_ctor_set(v___x_229_, 0, v___x_269_);
v___x_272_ = v___x_229_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_269_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_270_);
v___x_272_ = v_reuseFailAlloc_282_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v___x_273_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_241_, v___x_272_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v_val_241_);
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
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
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec(v_val_241_);
lean_del_object(v___x_229_);
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v_a_287_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_243_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_243_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
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
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec(v_a_225_);
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v_a_297_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_226_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_226_);
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
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_dec(v_e_x3f_216_);
lean_dec_ref(v_dec_143_);
v_a_305_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_224_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_224_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
v___jp_152_:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Elab_Do_DoElemCont_elabAsSyntacticallyDeadCode(v_dec_143_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_k_163_; lean_object* v___x_164_; 
lean_dec_ref_known(v___x_162_, 1);
v_k_163_ = lean_ctor_get(v___y_153_, 1);
lean_inc_ref(v_k_163_);
lean_dec_ref(v___y_153_);
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
lean_inc(v___y_159_);
lean_inc_ref(v___y_158_);
lean_inc(v___y_157_);
lean_inc_ref(v___y_156_);
lean_inc_ref(v___y_155_);
v___x_164_ = lean_apply_9(v_k_163_, v_e_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, lean_box(0));
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec_ref(v_e_154_);
lean_dec_ref(v___y_153_);
v_a_165_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_162_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_162_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReturn___boxed(lean_object* v_stx_323_, lean_object* v_dec_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_Elab_Do_elabDoReturn(v_stx_323_, v_dec_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1(lean_object* v_00_u03b1_334_, lean_object* v_ref_335_, lean_object* v_msg_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_ref_335_, v_msg_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___boxed(lean_object* v_00_u03b1_346_, lean_object* v_ref_347_, lean_object* v_msg_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1(v_00_u03b1_346_, v_ref_347_, v_msg_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec(v_ref_347_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1(lean_object* v_00_u03b1_358_, lean_object* v_msg_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(v_msg_359_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___boxed(lean_object* v_00_u03b1_369_, lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1(v_00_u03b1_369_, v_msg_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec_ref(v___y_371_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1(){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_389_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_390_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__4));
v___x_391_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___closed__3));
v___x_392_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReturn___boxed), 10, 0);
v___x_393_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_389_, v___x_390_, v___x_391_, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1___boxed(lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1();
return v_res_395_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoBreak___closed__3(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBreak___closed__2));
v___x_404_ = l_Lean_stringToMessageData(v___x_403_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoBreak___closed__5(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBreak___closed__4));
v___x_407_ = l_Lean_stringToMessageData(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoBreak___closed__7(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBreak___closed__6));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBreak(lean_object* v_stx_411_, lean_object* v_dec_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_breakCont_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___y_428_; lean_object* v___y_429_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBreak___closed__1));
lean_inc(v_stx_411_);
v___x_441_ = l_Lean_Syntax_isOfKind(v_stx_411_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
lean_dec_ref(v_dec_412_);
lean_dec(v_stx_411_);
v___x_442_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_442_;
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_443_ = lean_unsigned_to_nat(1u);
v___x_444_ = l_Lean_Syntax_getArg(v_stx_411_, v___x_443_);
lean_dec(v_stx_411_);
v___x_445_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__6));
lean_inc(v___x_444_);
v___x_446_ = l_Lean_Syntax_isOfKind(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_dec(v___x_444_);
lean_dec_ref(v_dec_412_);
v___x_447_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_447_;
}
else
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Elab_Do_elabDoConfig(v___x_444_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v___x_444_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
v___x_450_ = l_Lean_Elab_Do_DoConfig_checkNoCapture(v_a_449_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_label_x3f_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_522_; 
lean_dec_ref_known(v___x_450_, 1);
v_label_x3f_451_ = lean_ctor_get(v_a_449_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v_a_449_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v_a_449_, 1);
lean_dec(v_unused_523_);
v___x_453_ = v_a_449_;
v_isShared_454_ = v_isSharedCheck_522_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_label_x3f_451_);
lean_dec(v_a_449_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_522_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
if (lean_obj_tag(v_label_x3f_451_) == 0)
{
lean_object* v___x_455_; 
lean_del_object(v___x_453_);
v___x_455_ = l_Lean_Elab_Do_getBreakCont___redArg(v_a_413_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_456_);
lean_dec_ref_known(v___x_455_, 1);
if (lean_obj_tag(v_a_456_) == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec_ref(v_dec_412_);
v___x_457_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBreak___closed__3, &l_Lean_Elab_Do_elabDoBreak___closed__3_once, _init_l_Lean_Elab_Do_elabDoBreak___closed__3);
v___x_458_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(v___x_457_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
v_a_459_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_458_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_458_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
else
{
lean_object* v_val_467_; 
v_val_467_ = lean_ctor_get(v_a_456_, 0);
lean_inc(v_val_467_);
lean_dec_ref_known(v_a_456_, 1);
v_breakCont_422_ = v_val_467_;
v___y_423_ = v_a_413_;
v___y_424_ = v_a_414_;
v___y_425_ = v_a_415_;
v___y_426_ = v_a_416_;
v___y_427_ = v_a_417_;
v___y_428_ = v_a_418_;
v___y_429_ = v_a_419_;
goto v___jp_421_;
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec_ref(v_dec_412_);
v_a_468_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_455_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_455_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
else
{
lean_object* v_val_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_val_476_ = lean_ctor_get(v_label_x3f_451_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v_label_x3f_451_, 1);
v___x_477_ = l_Lean_TSyntax_getId(v_val_476_);
v___x_478_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v___x_477_, v_a_413_);
lean_dec(v___x_477_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
if (lean_obj_tag(v_a_479_) == 0)
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
lean_dec_ref(v_dec_412_);
v___x_480_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__8, &l_Lean_Elab_Do_elabDoReturn___closed__8_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__8);
lean_inc(v_val_476_);
v___x_481_ = l_Lean_MessageData_ofSyntax(v_val_476_);
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 7);
lean_ctor_set(v___x_453_, 1, v___x_481_);
lean_ctor_set(v___x_453_, 0, v___x_480_);
v___x_483_ = v___x_453_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_481_);
v___x_483_ = v_reuseFailAlloc_495_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v___x_484_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__10, &l_Lean_Elab_Do_elabDoReturn___closed__10_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__10);
v___x_485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_476_, v___x_485_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_val_476_);
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_object* v_val_496_; 
v_val_496_ = lean_ctor_get(v_a_479_, 0);
lean_inc(v_val_496_);
lean_dec_ref_known(v_a_479_, 1);
if (lean_obj_tag(v_val_496_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
lean_dec_ref_known(v_val_496_, 1);
lean_dec_ref(v_dec_412_);
v___x_497_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBreak___closed__5, &l_Lean_Elab_Do_elabDoBreak___closed__5_once, _init_l_Lean_Elab_Do_elabDoBreak___closed__5);
lean_inc(v_val_476_);
v___x_498_ = l_Lean_MessageData_ofSyntax(v_val_476_);
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 7);
lean_ctor_set(v___x_453_, 1, v___x_498_);
lean_ctor_set(v___x_453_, 0, v___x_497_);
v___x_500_ = v___x_453_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_498_);
v___x_500_ = v_reuseFailAlloc_512_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
v___x_501_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBreak___closed__7, &l_Lean_Elab_Do_elabDoBreak___closed__7_once, _init_l_Lean_Elab_Do_elabDoBreak___closed__7);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_476_, v___x_502_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_val_476_);
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
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
lean_object* v_breakCont_513_; 
lean_dec(v_val_476_);
lean_del_object(v___x_453_);
v_breakCont_513_ = lean_ctor_get(v_val_496_, 0);
lean_inc_ref(v_breakCont_513_);
lean_dec_ref_known(v_val_496_, 2);
v_breakCont_422_ = v_breakCont_513_;
v___y_423_ = v_a_413_;
v___y_424_ = v_a_414_;
v___y_425_ = v_a_415_;
v___y_426_ = v_a_416_;
v___y_427_ = v_a_417_;
v___y_428_ = v_a_418_;
v___y_429_ = v_a_419_;
goto v___jp_421_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec(v_val_476_);
lean_del_object(v___x_453_);
lean_dec_ref(v_dec_412_);
v_a_514_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_478_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_478_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec(v_a_449_);
lean_dec_ref(v_dec_412_);
v_a_524_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_450_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_450_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
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
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_dec_412_);
v_a_532_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_448_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_448_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
v___jp_421_:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Elab_Do_DoElemCont_elabAsSyntacticallyDeadCode(v_dec_412_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; 
lean_dec_ref_known(v___x_430_, 1);
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
lean_inc_ref(v___y_423_);
v___x_431_ = lean_apply_8(v_breakCont_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, lean_box(0));
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v_breakCont_422_);
v_a_432_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_430_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBreak___boxed(lean_object* v_stx_540_, lean_object* v_dec_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Elab_Do_elabDoBreak(v_stx_540_, v_dec_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec_ref(v_a_542_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1(){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_558_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_559_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBreak___closed__1));
v___x_560_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___closed__1));
v___x_561_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoBreak___boxed), 10, 0);
v___x_562_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_558_, v___x_559_, v___x_560_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1___boxed(lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1();
return v_res_564_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoContinue___closed__3(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l_Lean_Elab_Do_elabDoContinue___closed__2));
v___x_573_ = l_Lean_stringToMessageData(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoContinue___closed__5(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Lean_Elab_Do_elabDoContinue___closed__4));
v___x_576_ = l_Lean_stringToMessageData(v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoContinue(lean_object* v_stx_577_, lean_object* v_dec_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_continueCont_588_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_591_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_606_ = ((lean_object*)(l_Lean_Elab_Do_elabDoContinue___closed__1));
lean_inc(v_stx_577_);
v___x_607_ = l_Lean_Syntax_isOfKind(v_stx_577_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_dec_ref(v_dec_578_);
lean_dec(v_stx_577_);
v___x_608_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_608_;
}
else
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = l_Lean_Syntax_getArg(v_stx_577_, v___x_609_);
lean_dec(v_stx_577_);
v___x_611_ = ((lean_object*)(l_Lean_Elab_Do_elabDoReturn___closed__6));
lean_inc(v___x_610_);
v___x_612_ = l_Lean_Syntax_isOfKind(v___x_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; 
lean_dec(v___x_610_);
lean_dec_ref(v_dec_578_);
v___x_613_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoReturn_spec__0___redArg();
return v___x_613_;
}
else
{
lean_object* v___x_614_; 
v___x_614_ = l_Lean_Elab_Do_elabDoConfig(v___x_610_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v___x_610_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = l_Lean_Elab_Do_DoConfig_checkNoCapture(v_a_615_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_label_x3f_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_688_; 
lean_dec_ref_known(v___x_616_, 1);
v_label_x3f_617_ = lean_ctor_get(v_a_615_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_a_615_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v_a_615_, 1);
lean_dec(v_unused_689_);
v___x_619_ = v_a_615_;
v_isShared_620_ = v_isSharedCheck_688_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_label_x3f_617_);
lean_dec(v_a_615_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_688_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
if (lean_obj_tag(v_label_x3f_617_) == 0)
{
lean_object* v___x_621_; 
lean_del_object(v___x_619_);
v___x_621_ = l_Lean_Elab_Do_getContinueCont___redArg(v_a_579_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
if (lean_obj_tag(v_a_622_) == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref(v_dec_578_);
v___x_623_ = lean_obj_once(&l_Lean_Elab_Do_elabDoContinue___closed__3, &l_Lean_Elab_Do_elabDoContinue___closed__3_once, _init_l_Lean_Elab_Do_elabDoContinue___closed__3);
v___x_624_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1_spec__1___redArg(v___x_623_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
else
{
lean_object* v_val_633_; 
v_val_633_ = lean_ctor_get(v_a_622_, 0);
lean_inc(v_val_633_);
lean_dec_ref_known(v_a_622_, 1);
v_continueCont_588_ = v_val_633_;
v___y_589_ = v_a_579_;
v___y_590_ = v_a_580_;
v___y_591_ = v_a_581_;
v___y_592_ = v_a_582_;
v___y_593_ = v_a_583_;
v___y_594_ = v_a_584_;
v___y_595_ = v_a_585_;
goto v___jp_587_;
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_dec_578_);
v_a_634_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_621_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_621_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
else
{
lean_object* v_val_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v_val_642_ = lean_ctor_get(v_label_x3f_617_, 0);
lean_inc(v_val_642_);
lean_dec_ref_known(v_label_x3f_617_, 1);
v___x_643_ = l_Lean_TSyntax_getId(v_val_642_);
v___x_644_ = l_Lean_Elab_Do_getLabeledTarget_x3f___redArg(v___x_643_, v_a_579_);
lean_dec(v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_649_; 
lean_dec_ref(v_dec_578_);
v___x_646_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__8, &l_Lean_Elab_Do_elabDoReturn___closed__8_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__8);
lean_inc(v_val_642_);
v___x_647_ = l_Lean_MessageData_ofSyntax(v_val_642_);
if (v_isShared_620_ == 0)
{
lean_ctor_set_tag(v___x_619_, 7);
lean_ctor_set(v___x_619_, 1, v___x_647_);
lean_ctor_set(v___x_619_, 0, v___x_646_);
v___x_649_ = v___x_619_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___x_647_);
v___x_649_ = v_reuseFailAlloc_661_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
v___x_650_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReturn___closed__10, &l_Lean_Elab_Do_elabDoReturn___closed__10_once, _init_l_Lean_Elab_Do_elabDoReturn___closed__10);
v___x_651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_649_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_642_, v___x_651_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_val_642_);
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_652_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
else
{
lean_object* v_val_662_; 
v_val_662_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_val_662_);
lean_dec_ref_known(v_a_645_, 1);
if (lean_obj_tag(v_val_662_) == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
lean_dec_ref_known(v_val_662_, 1);
lean_dec_ref(v_dec_578_);
v___x_663_ = lean_obj_once(&l_Lean_Elab_Do_elabDoContinue___closed__5, &l_Lean_Elab_Do_elabDoContinue___closed__5_once, _init_l_Lean_Elab_Do_elabDoContinue___closed__5);
lean_inc(v_val_642_);
v___x_664_ = l_Lean_MessageData_ofSyntax(v_val_642_);
if (v_isShared_620_ == 0)
{
lean_ctor_set_tag(v___x_619_, 7);
lean_ctor_set(v___x_619_, 1, v___x_664_);
lean_ctor_set(v___x_619_, 0, v___x_663_);
v___x_666_ = v___x_619_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_664_);
v___x_666_ = v_reuseFailAlloc_678_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
v___x_667_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBreak___closed__7, &l_Lean_Elab_Do_elabDoBreak___closed__7_once, _init_l_Lean_Elab_Do_elabDoBreak___closed__7);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_Lean_throwErrorAt___at___00Lean_Elab_Do_elabDoReturn_spec__1___redArg(v_val_642_, v___x_668_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_val_642_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
else
{
lean_object* v_continueCont_679_; 
lean_dec(v_val_642_);
lean_del_object(v___x_619_);
v_continueCont_679_ = lean_ctor_get(v_val_662_, 1);
lean_inc_ref(v_continueCont_679_);
lean_dec_ref_known(v_val_662_, 2);
v_continueCont_588_ = v_continueCont_679_;
v___y_589_ = v_a_579_;
v___y_590_ = v_a_580_;
v___y_591_ = v_a_581_;
v___y_592_ = v_a_582_;
v___y_593_ = v_a_583_;
v___y_594_ = v_a_584_;
v___y_595_ = v_a_585_;
goto v___jp_587_;
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_val_642_);
lean_del_object(v___x_619_);
lean_dec_ref(v_dec_578_);
v_a_680_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_644_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_644_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec(v_a_615_);
lean_dec_ref(v_dec_578_);
v_a_690_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_616_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_616_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec_ref(v_dec_578_);
v_a_698_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_614_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_614_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
v___jp_587_:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Elab_Do_DoElemCont_elabAsSyntacticallyDeadCode(v_dec_578_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v___x_597_; 
lean_dec_ref_known(v___x_596_, 1);
lean_inc(v___y_595_);
lean_inc_ref(v___y_594_);
lean_inc(v___y_593_);
lean_inc_ref(v___y_592_);
lean_inc(v___y_591_);
lean_inc_ref(v___y_590_);
lean_inc_ref(v___y_589_);
v___x_597_ = lean_apply_8(v_continueCont_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, lean_box(0));
return v___x_597_;
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
lean_dec_ref(v_continueCont_588_);
v_a_598_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_596_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_596_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoContinue___boxed(lean_object* v_stx_706_, lean_object* v_dec_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Elab_Do_elabDoContinue(v_stx_706_, v_dec_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1(){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_724_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_725_ = ((lean_object*)(l_Lean_Elab_Do_elabDoContinue___closed__1));
v___x_726_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___closed__1));
v___x_727_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoContinue___boxed), 10, 0);
v___x_728_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_724_, v___x_725_, v___x_726_, v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1___boxed(lean_object* v_a_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1();
return v_res_730_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Jump(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoReturn___regBuiltin_Lean_Elab_Do_elabDoReturn__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoBreak___regBuiltin_Lean_Elab_Do_elabDoBreak__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Jump_0__Lean_Elab_Do_elabDoContinue___regBuiltin_Lean_Elab_Do_elabDoContinue__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Jump(uint8_t builtin) {
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
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Jump(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Jump(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Jump(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Jump(builtin);
}
#ifdef __cplusplus
}
#endif
