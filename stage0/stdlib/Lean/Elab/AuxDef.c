// Lean compiler output
// Module: Lean.Elab.AuxDef
// Imports: public import Lean.Elab.Command
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
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_DeclNameGenerator_ofPrefix(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__2;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__3;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__4;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__5;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__6;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__7;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__8;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__9;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__10;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__11;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__12;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__13;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__14;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__15;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__16;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__17;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__18;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__19;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__20;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__21;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__22;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__23;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__24;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__25;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__26;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__27;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__28;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__29;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__30;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__31;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__32;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__33;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__34;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__35;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__36;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__37;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__38;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__39;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__40;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__41;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__42;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__43;
static lean_once_cell_t l_Lean_Elab_Command_aux__def___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_aux__def___closed__44;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_aux__def;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__2;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__3;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__4;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__5;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__6;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__7;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__8;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__9;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__10;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__11;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__12;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__13;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__14;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__15;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__16;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__17;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__18;
static lean_once_cell_t l_Lean_Elab_Command_elabAuxDef___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabAuxDef___closed__19;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("aux_def", 7, 7);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__3, &l_Lean_Elab_Command_aux__def___closed__3_once, _init_l_Lean_Elab_Command_aux__def___closed__3);
v___x_6_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__2, &l_Lean_Elab_Command_aux__def___closed__2_once, _init_l_Lean_Elab_Command_aux__def___closed__2);
v___x_7_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__1, &l_Lean_Elab_Command_aux__def___closed__1_once, _init_l_Lean_Elab_Command_aux__def___closed__1);
v___x_8_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__5, &l_Lean_Elab_Command_aux__def___closed__5_once, _init_l_Lean_Elab_Command_aux__def___closed__5);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__7(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__8(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__7, &l_Lean_Elab_Command_aux__def___closed__7_once, _init_l_Lean_Elab_Command_aux__def___closed__7);
v___x_15_ = l_Lean_Name_mkStr1(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__9(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked("docComment", 10, 10);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__9, &l_Lean_Elab_Command_aux__def___closed__9_once, _init_l_Lean_Elab_Command_aux__def___closed__9);
v___x_18_ = l_Lean_Name_mkStr1(v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__11(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__10, &l_Lean_Elab_Command_aux__def___closed__10_once, _init_l_Lean_Elab_Command_aux__def___closed__10);
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__12(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__11, &l_Lean_Elab_Command_aux__def___closed__11_once, _init_l_Lean_Elab_Command_aux__def___closed__11);
v___x_22_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__8, &l_Lean_Elab_Command_aux__def___closed__8_once, _init_l_Lean_Elab_Command_aux__def___closed__8);
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__13(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__14(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__15(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("attributes", 10, 10);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__16(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_27_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__15, &l_Lean_Elab_Command_aux__def___closed__15_once, _init_l_Lean_Elab_Command_aux__def___closed__15);
v___x_28_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__14, &l_Lean_Elab_Command_aux__def___closed__14_once, _init_l_Lean_Elab_Command_aux__def___closed__14);
v___x_29_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__13, &l_Lean_Elab_Command_aux__def___closed__13_once, _init_l_Lean_Elab_Command_aux__def___closed__13);
v___x_30_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_31_ = l_Lean_Name_mkStr4(v___x_30_, v___x_29_, v___x_28_, v___x_27_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__17(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__16, &l_Lean_Elab_Command_aux__def___closed__16_once, _init_l_Lean_Elab_Command_aux__def___closed__16);
v___x_33_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__18(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__17, &l_Lean_Elab_Command_aux__def___closed__17_once, _init_l_Lean_Elab_Command_aux__def___closed__17);
v___x_35_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__8, &l_Lean_Elab_Command_aux__def___closed__8_once, _init_l_Lean_Elab_Command_aux__def___closed__8);
v___x_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__19(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_37_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__18, &l_Lean_Elab_Command_aux__def___closed__18_once, _init_l_Lean_Elab_Command_aux__def___closed__18);
v___x_38_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__12, &l_Lean_Elab_Command_aux__def___closed__12_once, _init_l_Lean_Elab_Command_aux__def___closed__12);
v___x_39_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_40_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set(v___x_40_, 2, v___x_37_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__20(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_mk_string_unchecked("visibility", 10, 10);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__21(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__20, &l_Lean_Elab_Command_aux__def___closed__20_once, _init_l_Lean_Elab_Command_aux__def___closed__20);
v___x_43_ = l_Lean_Name_mkStr1(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__22(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__21, &l_Lean_Elab_Command_aux__def___closed__21_once, _init_l_Lean_Elab_Command_aux__def___closed__21);
v___x_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__23(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_46_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__22, &l_Lean_Elab_Command_aux__def___closed__22_once, _init_l_Lean_Elab_Command_aux__def___closed__22);
v___x_47_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__19, &l_Lean_Elab_Command_aux__def___closed__19_once, _init_l_Lean_Elab_Command_aux__def___closed__19);
v___x_48_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_49_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
lean_ctor_set(v___x_49_, 1, v___x_47_);
lean_ctor_set(v___x_49_, 2, v___x_46_);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__24(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__3, &l_Lean_Elab_Command_aux__def___closed__3_once, _init_l_Lean_Elab_Command_aux__def___closed__3);
v___x_51_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__25(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__24, &l_Lean_Elab_Command_aux__def___closed__24_once, _init_l_Lean_Elab_Command_aux__def___closed__24);
v___x_53_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__23, &l_Lean_Elab_Command_aux__def___closed__23_once, _init_l_Lean_Elab_Command_aux__def___closed__23);
v___x_54_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_55_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__26(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("many1", 5, 5);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__27(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__26, &l_Lean_Elab_Command_aux__def___closed__26_once, _init_l_Lean_Elab_Command_aux__def___closed__26);
v___x_58_ = l_Lean_Name_mkStr1(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__28(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__29(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_60_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__28, &l_Lean_Elab_Command_aux__def___closed__28_once, _init_l_Lean_Elab_Command_aux__def___closed__28);
v___x_61_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__14, &l_Lean_Elab_Command_aux__def___closed__14_once, _init_l_Lean_Elab_Command_aux__def___closed__14);
v___x_62_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__13, &l_Lean_Elab_Command_aux__def___closed__13_once, _init_l_Lean_Elab_Command_aux__def___closed__13);
v___x_63_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_64_ = l_Lean_Name_mkStr4(v___x_63_, v___x_62_, v___x_61_, v___x_60_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__30(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__29, &l_Lean_Elab_Command_aux__def___closed__29_once, _init_l_Lean_Elab_Command_aux__def___closed__29);
v___x_66_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__31(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__30, &l_Lean_Elab_Command_aux__def___closed__30_once, _init_l_Lean_Elab_Command_aux__def___closed__30);
v___x_68_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__27, &l_Lean_Elab_Command_aux__def___closed__27_once, _init_l_Lean_Elab_Command_aux__def___closed__27);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__32(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__31, &l_Lean_Elab_Command_aux__def___closed__31_once, _init_l_Lean_Elab_Command_aux__def___closed__31);
v___x_71_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__25, &l_Lean_Elab_Command_aux__def___closed__25_once, _init_l_Lean_Elab_Command_aux__def___closed__25);
v___x_72_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_73_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__33(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__34(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__33, &l_Lean_Elab_Command_aux__def___closed__33_once, _init_l_Lean_Elab_Command_aux__def___closed__33);
v___x_76_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__35(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__34, &l_Lean_Elab_Command_aux__def___closed__34_once, _init_l_Lean_Elab_Command_aux__def___closed__34);
v___x_78_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__32, &l_Lean_Elab_Command_aux__def___closed__32_once, _init_l_Lean_Elab_Command_aux__def___closed__32);
v___x_79_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_80_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
lean_ctor_set(v___x_80_, 2, v___x_77_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__36(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__37(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__36, &l_Lean_Elab_Command_aux__def___closed__36_once, _init_l_Lean_Elab_Command_aux__def___closed__36);
v___x_83_ = l_Lean_Name_mkStr1(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__38(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__37, &l_Lean_Elab_Command_aux__def___closed__37_once, _init_l_Lean_Elab_Command_aux__def___closed__37);
v___x_86_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__39(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__38, &l_Lean_Elab_Command_aux__def___closed__38_once, _init_l_Lean_Elab_Command_aux__def___closed__38);
v___x_88_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__35, &l_Lean_Elab_Command_aux__def___closed__35_once, _init_l_Lean_Elab_Command_aux__def___closed__35);
v___x_89_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_90_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_87_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__40(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_mk_string_unchecked(":=", 2, 2);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__41(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__40, &l_Lean_Elab_Command_aux__def___closed__40_once, _init_l_Lean_Elab_Command_aux__def___closed__40);
v___x_93_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__42(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__41, &l_Lean_Elab_Command_aux__def___closed__41_once, _init_l_Lean_Elab_Command_aux__def___closed__41);
v___x_95_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__39, &l_Lean_Elab_Command_aux__def___closed__39_once, _init_l_Lean_Elab_Command_aux__def___closed__39);
v___x_96_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_97_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set(v___x_97_, 2, v___x_94_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__43(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__38, &l_Lean_Elab_Command_aux__def___closed__38_once, _init_l_Lean_Elab_Command_aux__def___closed__38);
v___x_99_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__42, &l_Lean_Elab_Command_aux__def___closed__42_once, _init_l_Lean_Elab_Command_aux__def___closed__42);
v___x_100_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__6, &l_Lean_Elab_Command_aux__def___closed__6_once, _init_l_Lean_Elab_Command_aux__def___closed__6);
v___x_101_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
lean_ctor_set(v___x_101_, 2, v___x_98_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def___closed__44(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_102_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__43, &l_Lean_Elab_Command_aux__def___closed__43_once, _init_l_Lean_Elab_Command_aux__def___closed__43);
v___x_103_ = lean_unsigned_to_nat(1022u);
v___x_104_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__4, &l_Lean_Elab_Command_aux__def___closed__4_once, _init_l_Lean_Elab_Command_aux__def___closed__4);
v___x_105_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
lean_ctor_set(v___x_105_, 2, v___x_102_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Elab_Command_aux__def(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__44, &l_Lean_Elab_Command_aux__def___closed__44_once, _init_l_Lean_Elab_Command_aux__def___closed__44);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_box(0);
v___x_108_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg(){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___closed__0);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg___boxed(lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(lean_object* v_00_u03b1_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___boxed(lean_object* v_00_u03b1_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0(v_00_u03b1_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(lean_object* v___y_125_){
_start:
{
lean_object* v___x_127_; lean_object* v_env_128_; lean_object* v___x_129_; lean_object* v_mainModule_130_; lean_object* v___x_131_; 
v___x_127_ = lean_st_ref_get(v___y_125_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_env_128_);
lean_dec(v___x_127_);
v___x_129_ = l_Lean_Environment_header(v_env_128_);
lean_dec_ref(v_env_128_);
v_mainModule_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_mainModule_130_);
lean_dec_ref(v___x_129_);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v_mainModule_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg___boxed(lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_132_);
lean_dec(v___y_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___boxed(lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1(v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(size_t v_sz_143_, size_t v_i_144_, lean_object* v_bs_145_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = lean_usize_dec_lt(v_i_144_, v_sz_143_);
if (v___x_146_ == 0)
{
return v_bs_145_;
}
else
{
lean_object* v_v_147_; lean_object* v___x_148_; lean_object* v_bs_x27_149_; lean_object* v___x_150_; lean_object* v___x_151_; size_t v___x_152_; size_t v___x_153_; lean_object* v___x_154_; 
v_v_147_ = lean_array_uget(v_bs_145_, v_i_144_);
v___x_148_ = lean_unsigned_to_nat(0u);
v_bs_x27_149_ = lean_array_uset(v_bs_145_, v_i_144_, v___x_148_);
v___x_150_ = l_Lean_TSyntax_getId(v_v_147_);
lean_dec(v_v_147_);
v___x_151_ = lean_erase_macro_scopes(v___x_150_);
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_add(v_i_144_, v___x_152_);
v___x_154_ = lean_array_uset(v_bs_x27_149_, v_i_144_, v___x_151_);
v_i_144_ = v___x_153_;
v_bs_145_ = v___x_154_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3___boxed(lean_object* v_sz_156_, lean_object* v_i_157_, lean_object* v_bs_158_){
_start:
{
size_t v_sz_boxed_159_; size_t v_i_boxed_160_; lean_object* v_res_161_; 
v_sz_boxed_159_ = lean_unbox_usize(v_sz_156_);
lean_dec(v_sz_156_);
v_i_boxed_160_ = lean_unbox_usize(v_i_157_);
lean_dec(v_i_157_);
v_res_161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(v_sz_boxed_159_, v_i_boxed_160_, v_bs_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(lean_object* v_as_162_, size_t v_i_163_, size_t v_stop_164_, lean_object* v_b_165_){
_start:
{
uint8_t v___x_166_; 
v___x_166_ = lean_usize_dec_eq(v_i_163_, v_stop_164_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; size_t v___x_169_; size_t v___x_170_; 
v___x_167_ = lean_array_uget_borrowed(v_as_162_, v_i_163_);
lean_inc(v___x_167_);
v___x_168_ = l_Lean_Name_append(v_b_165_, v___x_167_);
v___x_169_ = ((size_t)1ULL);
v___x_170_ = lean_usize_add(v_i_163_, v___x_169_);
v_i_163_ = v___x_170_;
v_b_165_ = v___x_168_;
goto _start;
}
else
{
return v_b_165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4___boxed(lean_object* v_as_172_, lean_object* v_i_173_, lean_object* v_stop_174_, lean_object* v_b_175_){
_start:
{
size_t v_i_boxed_176_; size_t v_stop_boxed_177_; lean_object* v_res_178_; 
v_i_boxed_176_ = lean_unbox_usize(v_i_173_);
lean_dec(v_i_173_);
v_stop_boxed_177_ = lean_unbox_usize(v_stop_174_);
lean_dec(v_stop_174_);
v_res_178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v_as_172_, v_i_boxed_176_, v_stop_boxed_177_, v_b_175_);
lean_dec_ref(v_as_172_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
if (lean_obj_tag(v_a_179_) == 0)
{
lean_object* v___x_181_; 
v___x_181_ = l_List_reverse___redArg(v_a_180_);
return v___x_181_;
}
else
{
lean_object* v_head_182_; lean_object* v_tail_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_193_; 
v_head_182_ = lean_ctor_get(v_a_179_, 0);
v_tail_183_ = lean_ctor_get(v_a_179_, 1);
v_isSharedCheck_193_ = !lean_is_exclusive(v_a_179_);
if (v_isSharedCheck_193_ == 0)
{
v___x_185_ = v_a_179_;
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_tail_183_);
lean_inc(v_head_182_);
lean_dec(v_a_179_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_187_ = 0;
v___x_188_ = l_Lean_Name_toString(v_head_182_, v___x_187_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v_a_180_);
lean_ctor_set(v___x_185_, 0, v___x_188_);
v___x_190_ = v___x_185_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_a_180_);
v___x_190_ = v_reuseFailAlloc_192_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
v_a_179_ = v_tail_183_;
v_a_180_ = v___x_190_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__0(void){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lean_mk_string_unchecked("meta", 4, 4);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__1(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__2(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("def", 3, 3);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__3(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lean_mk_string_unchecked("declId", 6, 6);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__4(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("optDeclSig", 10, 10);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__5(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("typeSpec", 8, 8);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__6(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("declValSimple", 13, 13);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__7(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_mk_string_unchecked("Termination", 11, 11);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__8(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_mk_string_unchecked("suffix", 6, 6);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__9(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(0u);
v___x_204_ = lean_mk_empty_array_with_capacity(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__10(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_mk_string_unchecked("declaration", 11, 11);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__11(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked("declModifiers", 13, 13);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__12(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__13(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__12, &l_Lean_Elab_Command_elabAuxDef___closed__12_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__12);
v___x_209_ = l_Lean_Name_mkStr1(v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__14(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Array_mkArray0(lean_box(0));
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__15(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_mk_string_unchecked("_aux", 4, 4);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__16(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__15, &l_Lean_Elab_Command_elabAuxDef___closed__15_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__15);
v___x_213_ = l_Lean_Name_mkStr1(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__17(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__18(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__17, &l_Lean_Elab_Command_elabAuxDef___closed__17_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__17);
v___x_216_ = l_Lean_Name_mkStr1(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAuxDef___closed__19(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_217_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__9, &l_Lean_Elab_Command_aux__def___closed__9_once, _init_l_Lean_Elab_Command_aux__def___closed__9);
v___x_218_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__2, &l_Lean_Elab_Command_aux__def___closed__2_once, _init_l_Lean_Elab_Command_aux__def___closed__2);
v___x_219_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__13, &l_Lean_Elab_Command_aux__def___closed__13_once, _init_l_Lean_Elab_Command_aux__def___closed__13);
v___x_220_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_221_ = l_Lean_Name_mkStr4(v___x_220_, v___x_219_, v___x_218_, v___x_217_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef(lean_object* v_x_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v___y_233_; lean_object* v___y_234_; lean_object* v___y_235_; lean_object* v___y_236_; lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; 
v___x_226_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_227_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__2, &l_Lean_Elab_Command_aux__def___closed__2_once, _init_l_Lean_Elab_Command_aux__def___closed__2);
v___x_228_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__4, &l_Lean_Elab_Command_aux__def___closed__4_once, _init_l_Lean_Elab_Command_aux__def___closed__4);
lean_inc(v_x_222_);
v___x_229_ = l_Lean_Syntax_isOfKind(v_x_222_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_288_; 
lean_dec(v_x_222_);
v___x_288_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_288_;
}
else
{
lean_object* v___x_289_; lean_object* v___y_291_; lean_object* v___y_292_; lean_object* v___y_293_; lean_object* v___y_294_; lean_object* v___y_295_; lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_399_; lean_object* v_attrs_x3f_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v_doc_x3f_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_439_ = l_Lean_Syntax_getArg(v_x_222_, v___x_289_);
v___x_440_ = l_Lean_Syntax_isNone(v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_439_);
v___x_442_ = l_Lean_Syntax_matchesNull(v___x_439_, v___x_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; 
lean_dec(v___x_439_);
lean_dec(v_x_222_);
v___x_443_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_443_;
}
else
{
lean_object* v_doc_x3f_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v_doc_x3f_444_ = l_Lean_Syntax_getArg(v___x_439_, v___x_289_);
lean_dec(v___x_439_);
v___x_445_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__19, &l_Lean_Elab_Command_elabAuxDef___closed__19_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__19);
lean_inc(v_doc_x3f_444_);
v___x_446_ = l_Lean_Syntax_isOfKind(v_doc_x3f_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; 
lean_dec(v_doc_x3f_444_);
lean_dec(v_x_222_);
v___x_447_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_447_;
}
else
{
lean_object* v___x_448_; 
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v_doc_x3f_444_);
v_doc_x3f_425_ = v___x_448_;
v___y_426_ = v_a_223_;
v___y_427_ = v_a_224_;
goto v___jp_424_;
}
}
}
else
{
lean_object* v___x_449_; 
lean_dec(v___x_439_);
v___x_449_ = lean_box(0);
v_doc_x3f_425_ = v___x_449_;
v___y_426_ = v_a_223_;
v___y_427_ = v_a_224_;
goto v___jp_424_;
}
v___jp_290_:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_inc_ref(v___y_303_);
v___x_306_ = l_Array_append___redArg(v___y_303_, v___y_305_);
lean_dec_ref(v___y_305_);
lean_inc(v___y_295_);
lean_inc(v___y_299_);
v___x_307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_307_, 0, v___y_299_);
lean_ctor_set(v___x_307_, 1, v___y_295_);
lean_ctor_set(v___x_307_, 2, v___x_306_);
if (lean_obj_tag(v___y_297_) == 1)
{
lean_object* v_val_308_; lean_object* v___x_309_; 
v_val_308_ = lean_ctor_get(v___y_297_, 0);
lean_inc(v_val_308_);
lean_dec_ref(v___y_297_);
v___x_309_ = l_Array_mkArray1___redArg(v_val_308_);
v___y_231_ = v___y_291_;
v___y_232_ = v___y_292_;
v___y_233_ = v___y_293_;
v___y_234_ = v___y_294_;
v___y_235_ = v___y_295_;
v___y_236_ = v___y_296_;
v___y_237_ = v___y_298_;
v___y_238_ = v___y_299_;
v___y_239_ = v___y_300_;
v___y_240_ = v___y_301_;
v___y_241_ = v___y_302_;
v___y_242_ = v___x_307_;
v___y_243_ = v___y_303_;
v___y_244_ = v___y_304_;
v___y_245_ = v___x_309_;
goto v___jp_230_;
}
else
{
lean_object* v___x_310_; 
lean_dec(v___y_297_);
v___x_310_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__9, &l_Lean_Elab_Command_elabAuxDef___closed__9_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__9);
v___y_231_ = v___y_291_;
v___y_232_ = v___y_292_;
v___y_233_ = v___y_293_;
v___y_234_ = v___y_294_;
v___y_235_ = v___y_295_;
v___y_236_ = v___y_296_;
v___y_237_ = v___y_298_;
v___y_238_ = v___y_299_;
v___y_239_ = v___y_300_;
v___y_240_ = v___y_301_;
v___y_241_ = v___y_302_;
v___y_242_ = v___x_307_;
v___y_243_ = v___y_303_;
v___y_244_ = v___y_304_;
v___y_245_ = v___x_310_;
goto v___jp_230_;
}
}
v___jp_311_:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_323_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__10, &l_Lean_Elab_Command_elabAuxDef___closed__10_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__10);
lean_inc_ref_n(v___y_320_, 2);
v___x_324_ = l_Lean_Name_mkStr4(v___x_226_, v___y_320_, v___x_227_, v___x_323_);
v___x_325_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__11, &l_Lean_Elab_Command_elabAuxDef___closed__11_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__11);
v___x_326_ = l_Lean_Name_mkStr4(v___x_226_, v___y_320_, v___x_227_, v___x_325_);
v___x_327_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__13, &l_Lean_Elab_Command_elabAuxDef___closed__13_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__13);
v___x_328_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__14, &l_Lean_Elab_Command_elabAuxDef___closed__14_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__14);
if (lean_obj_tag(v___y_316_) == 1)
{
lean_object* v_val_329_; lean_object* v___x_330_; 
v_val_329_ = lean_ctor_get(v___y_316_, 0);
lean_inc(v_val_329_);
lean_dec_ref(v___y_316_);
v___x_330_ = l_Array_mkArray1___redArg(v_val_329_);
v___y_291_ = v___x_326_;
v___y_292_ = v___y_314_;
v___y_293_ = v___x_324_;
v___y_294_ = v___y_317_;
v___y_295_ = v___x_327_;
v___y_296_ = v___y_318_;
v___y_297_ = v___y_319_;
v___y_298_ = v___y_320_;
v___y_299_ = v___y_321_;
v___y_300_ = v___y_313_;
v___y_301_ = v___y_312_;
v___y_302_ = v___y_315_;
v___y_303_ = v___x_328_;
v___y_304_ = v___y_322_;
v___y_305_ = v___x_330_;
goto v___jp_290_;
}
else
{
lean_object* v___x_331_; 
lean_dec(v___y_316_);
v___x_331_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__9, &l_Lean_Elab_Command_elabAuxDef___closed__9_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__9);
v___y_291_ = v___x_326_;
v___y_292_ = v___y_314_;
v___y_293_ = v___x_324_;
v___y_294_ = v___y_317_;
v___y_295_ = v___x_327_;
v___y_296_ = v___y_318_;
v___y_297_ = v___y_319_;
v___y_298_ = v___y_320_;
v___y_299_ = v___y_321_;
v___y_300_ = v___y_313_;
v___y_301_ = v___y_312_;
v___y_302_ = v___y_315_;
v___y_303_ = v___x_328_;
v___y_304_ = v___y_322_;
v___y_305_ = v___x_331_;
goto v___jp_290_;
}
}
v___jp_332_:
{
lean_object* v___x_344_; lean_object* v_a_345_; lean_object* v___x_346_; 
v___x_344_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_338_);
v_a_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_a_345_);
lean_dec_ref(v___x_344_);
v___x_346_ = l_Lean_Elab_Command_getScope___redArg(v___y_338_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_348_; lean_object* v_currNamespace_349_; lean_object* v_env_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_fst_365_; lean_object* v___x_366_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref(v___x_346_);
v___x_348_ = lean_st_ref_get(v___y_338_);
v_currNamespace_349_ = lean_ctor_get(v_a_347_, 2);
lean_inc_n(v_currNamespace_349_, 2);
lean_dec(v_a_347_);
v_env_350_ = lean_ctor_get(v___x_348_, 0);
lean_inc_ref(v_env_350_);
lean_dec(v___x_348_);
v___x_351_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__16, &l_Lean_Elab_Command_elabAuxDef___closed__16_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__16);
v___x_352_ = l_Lean_Name_append(v___x_351_, v_a_345_);
v___x_353_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__17, &l_Lean_Elab_Command_elabAuxDef___closed__17_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__17);
v___x_354_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__18, &l_Lean_Elab_Command_elabAuxDef___closed__18_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__18);
v___x_355_ = l_Lean_Name_append(v___x_352_, v___x_354_);
v___x_356_ = l_Lean_Name_append(v___x_355_, v___y_343_);
v___x_357_ = l_Lean_Name_components(v___x_356_);
v___x_358_ = lean_box(0);
v___x_359_ = l_List_mapTR_loop___at___00Lean_Elab_Command_elabAuxDef_spec__2(v___x_357_, v___x_358_);
v___x_360_ = l_String_intercalate(v___x_353_, v___x_359_);
v___x_361_ = l_Lean_Environment_setExporting(v_env_350_, v___x_229_);
v___x_362_ = l_Lean_DeclNameGenerator_ofPrefix(v_currNamespace_349_);
lean_inc(v___y_341_);
v___x_363_ = l_Lean_Name_str___override(v___y_341_, v___x_360_);
v___x_364_ = l_Lean_DeclNameGenerator_mkUniqueName(v___x_361_, v___x_362_, v___x_363_);
v_fst_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_fst_365_);
lean_dec_ref(v___x_364_);
v___x_366_ = l_Lean_Elab_Command_getRef___redArg(v___y_342_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_368_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref(v___x_366_);
v___x_368_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_342_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_quotContext_x3f_369_; lean_object* v___x_370_; uint8_t v___x_371_; lean_object* v___x_372_; 
lean_dec_ref(v___x_368_);
v_quotContext_x3f_369_ = lean_ctor_get(v___y_342_, 5);
v___x_370_ = l_Lean_Name_replacePrefix(v_fst_365_, v_currNamespace_349_, v___y_341_);
lean_dec(v___y_341_);
lean_dec(v_currNamespace_349_);
v___x_371_ = 0;
v___x_372_ = l_Lean_SourceInfo_fromRef(v_a_367_, v___x_371_);
lean_dec(v_a_367_);
if (lean_obj_tag(v_quotContext_x3f_369_) == 0)
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabAuxDef_spec__1___redArg(v___y_338_);
lean_dec_ref(v___x_373_);
v___y_312_ = v___y_334_;
v___y_313_ = v___y_333_;
v___y_314_ = v___x_370_;
v___y_315_ = v___y_335_;
v___y_316_ = v___y_336_;
v___y_317_ = v___y_337_;
v___y_318_ = v___y_338_;
v___y_319_ = v___y_340_;
v___y_320_ = v___y_339_;
v___y_321_ = v___x_372_;
v___y_322_ = v___y_342_;
goto v___jp_311_;
}
else
{
v___y_312_ = v___y_334_;
v___y_313_ = v___y_333_;
v___y_314_ = v___x_370_;
v___y_315_ = v___y_335_;
v___y_316_ = v___y_336_;
v___y_317_ = v___y_337_;
v___y_318_ = v___y_338_;
v___y_319_ = v___y_340_;
v___y_320_ = v___y_339_;
v___y_321_ = v___x_372_;
v___y_322_ = v___y_342_;
goto v___jp_311_;
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_a_367_);
lean_dec(v_fst_365_);
lean_dec(v_currNamespace_349_);
lean_dec(v___y_341_);
lean_dec(v___y_340_);
lean_dec(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec(v___y_333_);
v_a_374_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_368_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_368_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
lean_dec(v_fst_365_);
lean_dec(v_currNamespace_349_);
lean_dec(v___y_341_);
lean_dec(v___y_340_);
lean_dec(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec(v___y_333_);
v_a_382_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_366_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_366_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec(v_a_345_);
lean_dec(v___y_343_);
lean_dec(v___y_341_);
lean_dec(v___y_340_);
lean_dec(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec(v___y_333_);
v_a_390_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_346_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_346_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
v___jp_398_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v_suggestion_411_; lean_object* v___x_412_; lean_object* v___x_413_; size_t v_sz_414_; size_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_403_ = lean_unsigned_to_nat(2u);
v___x_404_ = l_Lean_Syntax_getArg(v_x_222_, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(4u);
v___x_406_ = l_Lean_Syntax_getArg(v_x_222_, v___x_405_);
v___x_407_ = lean_unsigned_to_nat(6u);
v___x_408_ = l_Lean_Syntax_getArg(v_x_222_, v___x_407_);
v___x_409_ = lean_unsigned_to_nat(8u);
v___x_410_ = l_Lean_Syntax_getArg(v_x_222_, v___x_409_);
lean_dec(v_x_222_);
v_suggestion_411_ = l_Lean_Syntax_getArgs(v___x_406_);
lean_dec(v___x_406_);
v___x_412_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__13, &l_Lean_Elab_Command_aux__def___closed__13_once, _init_l_Lean_Elab_Command_aux__def___closed__13);
v___x_413_ = lean_box(0);
v_sz_414_ = lean_array_size(v_suggestion_411_);
v___x_415_ = ((size_t)0ULL);
lean_inc_ref(v_suggestion_411_);
v___x_416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabAuxDef_spec__3(v_sz_414_, v___x_415_, v_suggestion_411_);
v___x_417_ = lean_array_get_size(v___x_416_);
v___x_418_ = lean_nat_dec_lt(v___x_289_, v___x_417_);
if (v___x_418_ == 0)
{
lean_dec_ref(v___x_416_);
v___y_333_ = v___x_404_;
v___y_334_ = v___x_408_;
v___y_335_ = v_suggestion_411_;
v___y_336_ = v___y_399_;
v___y_337_ = v___x_410_;
v___y_338_ = v___y_402_;
v___y_339_ = v___x_412_;
v___y_340_ = v_attrs_x3f_400_;
v___y_341_ = v___x_413_;
v___y_342_ = v___y_401_;
v___y_343_ = v___x_413_;
goto v___jp_332_;
}
else
{
uint8_t v___x_419_; 
v___x_419_ = lean_nat_dec_le(v___x_417_, v___x_417_);
if (v___x_419_ == 0)
{
if (v___x_418_ == 0)
{
lean_dec_ref(v___x_416_);
v___y_333_ = v___x_404_;
v___y_334_ = v___x_408_;
v___y_335_ = v_suggestion_411_;
v___y_336_ = v___y_399_;
v___y_337_ = v___x_410_;
v___y_338_ = v___y_402_;
v___y_339_ = v___x_412_;
v___y_340_ = v_attrs_x3f_400_;
v___y_341_ = v___x_413_;
v___y_342_ = v___y_401_;
v___y_343_ = v___x_413_;
goto v___jp_332_;
}
else
{
size_t v___x_420_; lean_object* v___x_421_; 
v___x_420_ = lean_usize_of_nat(v___x_417_);
v___x_421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v___x_416_, v___x_415_, v___x_420_, v___x_413_);
lean_dec_ref(v___x_416_);
v___y_333_ = v___x_404_;
v___y_334_ = v___x_408_;
v___y_335_ = v_suggestion_411_;
v___y_336_ = v___y_399_;
v___y_337_ = v___x_410_;
v___y_338_ = v___y_402_;
v___y_339_ = v___x_412_;
v___y_340_ = v_attrs_x3f_400_;
v___y_341_ = v___x_413_;
v___y_342_ = v___y_401_;
v___y_343_ = v___x_421_;
goto v___jp_332_;
}
}
else
{
size_t v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_usize_of_nat(v___x_417_);
v___x_423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabAuxDef_spec__4(v___x_416_, v___x_415_, v___x_422_, v___x_413_);
lean_dec_ref(v___x_416_);
v___y_333_ = v___x_404_;
v___y_334_ = v___x_408_;
v___y_335_ = v_suggestion_411_;
v___y_336_ = v___y_399_;
v___y_337_ = v___x_410_;
v___y_338_ = v___y_402_;
v___y_339_ = v___x_412_;
v___y_340_ = v_attrs_x3f_400_;
v___y_341_ = v___x_413_;
v___y_342_ = v___y_401_;
v___y_343_ = v___x_423_;
goto v___jp_332_;
}
}
}
v___jp_424_:
{
lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_428_ = lean_unsigned_to_nat(1u);
v___x_429_ = l_Lean_Syntax_getArg(v_x_222_, v___x_428_);
v___x_430_ = l_Lean_Syntax_isNone(v___x_429_);
if (v___x_430_ == 0)
{
uint8_t v___x_431_; 
lean_inc(v___x_429_);
v___x_431_ = l_Lean_Syntax_matchesNull(v___x_429_, v___x_428_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
lean_dec(v___x_429_);
lean_dec(v_doc_x3f_425_);
lean_dec(v_x_222_);
v___x_432_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_432_;
}
else
{
lean_object* v_attrs_x3f_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_attrs_x3f_433_ = l_Lean_Syntax_getArg(v___x_429_, v___x_289_);
lean_dec(v___x_429_);
v___x_434_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__16, &l_Lean_Elab_Command_aux__def___closed__16_once, _init_l_Lean_Elab_Command_aux__def___closed__16);
lean_inc(v_attrs_x3f_433_);
v___x_435_ = l_Lean_Syntax_isOfKind(v_attrs_x3f_433_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; 
lean_dec(v_attrs_x3f_433_);
lean_dec(v_doc_x3f_425_);
lean_dec(v_x_222_);
v___x_436_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabAuxDef_spec__0___redArg();
return v___x_436_;
}
else
{
lean_object* v___x_437_; 
v___x_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_437_, 0, v_attrs_x3f_433_);
v___y_399_ = v_doc_x3f_425_;
v_attrs_x3f_400_ = v___x_437_;
v___y_401_ = v___y_426_;
v___y_402_ = v___y_427_;
goto v___jp_398_;
}
}
}
else
{
lean_object* v___x_438_; 
lean_dec(v___x_429_);
v___x_438_ = lean_box(0);
v___y_399_ = v_doc_x3f_425_;
v_attrs_x3f_400_ = v___x_438_;
v___y_401_ = v___y_426_;
v___y_402_ = v___y_427_;
goto v___jp_398_;
}
}
}
v___jp_230_:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_inc_ref_n(v___y_243_, 2);
v___x_246_ = l_Array_append___redArg(v___y_243_, v___y_245_);
lean_dec_ref(v___y_245_);
lean_inc_n(v___y_235_, 6);
lean_inc_n(v___y_238_, 17);
v___x_247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_247_, 0, v___y_238_);
lean_ctor_set(v___x_247_, 1, v___y_235_);
lean_ctor_set(v___x_247_, 2, v___x_246_);
v___x_248_ = l_Lean_Syntax_node1(v___y_238_, v___y_235_, v___y_239_);
v___x_249_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_249_, 0, v___y_238_);
lean_ctor_set(v___x_249_, 1, v___y_235_);
lean_ctor_set(v___x_249_, 2, v___y_243_);
v___x_250_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__0, &l_Lean_Elab_Command_elabAuxDef___closed__0_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__0);
lean_inc_ref_n(v___y_237_, 7);
v___x_251_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_227_, v___x_250_);
v___x_252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_252_, 0, v___y_238_);
lean_ctor_set(v___x_252_, 1, v___x_250_);
v___x_253_ = l_Lean_Syntax_node1(v___y_238_, v___x_251_, v___x_252_);
v___x_254_ = l_Lean_Syntax_node1(v___y_238_, v___y_235_, v___x_253_);
lean_inc_ref_n(v___x_249_, 8);
v___x_255_ = l_Lean_Syntax_node7(v___y_238_, v___y_231_, v___y_242_, v___x_247_, v___x_248_, v___x_249_, v___x_254_, v___x_249_, v___x_249_);
v___x_256_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__1, &l_Lean_Elab_Command_elabAuxDef___closed__1_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__1);
v___x_257_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_227_, v___x_256_);
v___x_258_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__2, &l_Lean_Elab_Command_elabAuxDef___closed__2_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__2);
v___x_259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_259_, 0, v___y_238_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__3, &l_Lean_Elab_Command_elabAuxDef___closed__3_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__3);
v___x_261_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_227_, v___x_260_);
v___x_262_ = lean_box(2);
v___x_263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___y_235_);
lean_ctor_set(v___x_263_, 2, v___y_241_);
v___x_264_ = l_Lean_mkIdentFrom(v___x_263_, v___y_232_, v___x_229_);
lean_dec_ref(v___x_263_);
v___x_265_ = l_Lean_Syntax_node2(v___y_238_, v___x_261_, v___x_264_, v___x_249_);
v___x_266_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__4, &l_Lean_Elab_Command_elabAuxDef___closed__4_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__4);
v___x_267_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_227_, v___x_266_);
v___x_268_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__14, &l_Lean_Elab_Command_aux__def___closed__14_once, _init_l_Lean_Elab_Command_aux__def___closed__14);
v___x_269_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__5, &l_Lean_Elab_Command_elabAuxDef___closed__5_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__5);
v___x_270_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_268_, v___x_269_);
v___x_271_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__33, &l_Lean_Elab_Command_aux__def___closed__33_once, _init_l_Lean_Elab_Command_aux__def___closed__33);
v___x_272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_272_, 0, v___y_238_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_Lean_Syntax_node2(v___y_238_, v___x_270_, v___x_272_, v___y_240_);
v___x_274_ = l_Lean_Syntax_node1(v___y_238_, v___y_235_, v___x_273_);
v___x_275_ = l_Lean_Syntax_node2(v___y_238_, v___x_267_, v___x_249_, v___x_274_);
v___x_276_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__6, &l_Lean_Elab_Command_elabAuxDef___closed__6_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__6);
v___x_277_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_227_, v___x_276_);
v___x_278_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__40, &l_Lean_Elab_Command_aux__def___closed__40_once, _init_l_Lean_Elab_Command_aux__def___closed__40);
v___x_279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_279_, 0, v___y_238_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__7, &l_Lean_Elab_Command_elabAuxDef___closed__7_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__7);
v___x_281_ = lean_obj_once(&l_Lean_Elab_Command_elabAuxDef___closed__8, &l_Lean_Elab_Command_elabAuxDef___closed__8_once, _init_l_Lean_Elab_Command_elabAuxDef___closed__8);
v___x_282_ = l_Lean_Name_mkStr4(v___x_226_, v___y_237_, v___x_280_, v___x_281_);
v___x_283_ = l_Lean_Syntax_node2(v___y_238_, v___x_282_, v___x_249_, v___x_249_);
v___x_284_ = l_Lean_Syntax_node4(v___y_238_, v___x_277_, v___x_279_, v___y_234_, v___x_283_, v___x_249_);
v___x_285_ = l_Lean_Syntax_node5(v___y_238_, v___x_257_, v___x_259_, v___x_265_, v___x_275_, v___x_284_, v___x_249_);
v___x_286_ = l_Lean_Syntax_node2(v___y_238_, v___y_233_, v___x_255_, v___x_285_);
v___x_287_ = l_Lean_Elab_Command_elabCommand(v___x_286_, v___y_244_, v___y_236_);
return v___x_287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabAuxDef___boxed(lean_object* v_x_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_Command_elabAuxDef(v_x_450_, v_a_451_, v_a_452_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
return v_res_454_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0(void){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = lean_mk_string_unchecked("elabAuxDef", 10, 10);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_456_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__0);
v___x_457_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__2, &l_Lean_Elab_Command_aux__def___closed__2_once, _init_l_Lean_Elab_Command_aux__def___closed__2);
v___x_458_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__1, &l_Lean_Elab_Command_aux__def___closed__1_once, _init_l_Lean_Elab_Command_aux__def___closed__1);
v___x_459_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__0, &l_Lean_Elab_Command_aux__def___closed__0_once, _init_l_Lean_Elab_Command_aux__def___closed__0);
v___x_460_ = l_Lean_Name_mkStr4(v___x_459_, v___x_458_, v___x_457_, v___x_456_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1(){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_462_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_463_ = lean_obj_once(&l_Lean_Elab_Command_aux__def___closed__4, &l_Lean_Elab_Command_aux__def___closed__4_once, _init_l_Lean_Elab_Command_aux__def___closed__4);
v___x_464_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1);
v___x_465_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAuxDef___boxed), 4, 0);
v___x_466_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_462_, v___x_463_, v___x_464_, v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___boxed(lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
return v_res_468_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = lean_unsigned_to_nat(21u);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = lean_unsigned_to_nat(31u);
v___x_473_ = lean_unsigned_to_nat(33u);
v___x_474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
lean_ctor_set(v___x_474_, 1, v___x_472_);
return v___x_474_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_475_ = lean_unsigned_to_nat(31u);
v___x_476_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__1);
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__0);
v___x_479_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
lean_ctor_set(v___x_479_, 1, v___x_477_);
lean_ctor_set(v___x_479_, 2, v___x_476_);
lean_ctor_set(v___x_479_, 3, v___x_475_);
return v___x_479_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = lean_unsigned_to_nat(4u);
v___x_481_ = lean_unsigned_to_nat(21u);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_480_);
return v___x_482_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_unsigned_to_nat(14u);
v___x_484_ = lean_unsigned_to_nat(21u);
v___x_485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
lean_ctor_set(v___x_485_, 1, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_486_ = lean_unsigned_to_nat(14u);
v___x_487_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__4);
v___x_488_ = lean_unsigned_to_nat(4u);
v___x_489_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__3);
v___x_490_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v___x_488_);
lean_ctor_set(v___x_490_, 2, v___x_487_);
lean_ctor_set(v___x_490_, 3, v___x_486_);
return v___x_490_;
}
}
static lean_object* _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__5);
v___x_492_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__2);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v___x_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3(){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1___closed__1);
v___x_496_ = lean_obj_once(&l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6, &l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6_once, _init_l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___closed__6);
v___x_497_ = l_Lean_addBuiltinDeclarationRanges(v___x_495_, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3___boxed(lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
return v_res_499_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_AuxDef_0__Lean_Elab_Command_elabAuxDef___regBuiltin_Lean_Elab_Command_elabAuxDef_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Command_aux__def = _init_l_Lean_Elab_Command_aux__def();
lean_mark_persistent(l_Lean_Elab_Command_aux__def);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_AuxDef(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_AuxDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_AuxDef(builtin);
}
#ifdef __cplusplus
}
#endif
