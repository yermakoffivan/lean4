// Lean compiler output
// Module: Lake.Util.Family
// Imports: public meta import Init.Data.ToString.Name import Init.Data.ToString public import Init.Notation
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
static lean_once_cell_t l_Lake_familyDef___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__0;
static lean_once_cell_t l_Lake_familyDef___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__1;
static lean_once_cell_t l_Lake_familyDef___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__2;
static lean_once_cell_t l_Lake_familyDef___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__3;
static lean_once_cell_t l_Lake_familyDef___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__4;
static lean_once_cell_t l_Lake_familyDef___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__5;
static lean_once_cell_t l_Lake_familyDef___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__6;
static lean_once_cell_t l_Lake_familyDef___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__7;
static lean_once_cell_t l_Lake_familyDef___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__8;
static lean_once_cell_t l_Lake_familyDef___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__9;
static lean_once_cell_t l_Lake_familyDef___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__10;
static lean_once_cell_t l_Lake_familyDef___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__11;
static lean_once_cell_t l_Lake_familyDef___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__12;
static lean_once_cell_t l_Lake_familyDef___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__13;
static lean_once_cell_t l_Lake_familyDef___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__14;
static lean_once_cell_t l_Lake_familyDef___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__15;
static lean_once_cell_t l_Lake_familyDef___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__16;
static lean_once_cell_t l_Lake_familyDef___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__17;
static lean_once_cell_t l_Lake_familyDef___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__18;
static lean_once_cell_t l_Lake_familyDef___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__19;
static lean_once_cell_t l_Lake_familyDef___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__20;
static lean_once_cell_t l_Lake_familyDef___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__21;
static lean_once_cell_t l_Lake_familyDef___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__22;
static lean_once_cell_t l_Lake_familyDef___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__23;
static lean_once_cell_t l_Lake_familyDef___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__24;
static lean_once_cell_t l_Lake_familyDef___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__25;
static lean_once_cell_t l_Lake_familyDef___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__26;
static lean_once_cell_t l_Lake_familyDef___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__27;
static lean_once_cell_t l_Lake_familyDef___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__28;
static lean_once_cell_t l_Lake_familyDef___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__29;
static lean_once_cell_t l_Lake_familyDef___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_familyDef___closed__30;
LEAN_EXPORT lean_object* l_Lake_familyDef;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48;
static lean_once_cell_t l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_familyDef___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lake", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("familyDef", 9, 9);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l_Lake_familyDef___closed__1, &l_Lake_familyDef___closed__1_once, _init_l_Lake_familyDef___closed__1);
v___x_4_ = lean_obj_once(&l_Lake_familyDef___closed__0, &l_Lake_familyDef___closed__0_once, _init_l_Lake_familyDef___closed__0);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__3(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_6_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lake_familyDef___closed__3, &l_Lake_familyDef___closed__3_once, _init_l_Lake_familyDef___closed__3);
v___x_8_ = l_Lean_Name_mkStr1(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__5(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_9_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__6(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_obj_once(&l_Lake_familyDef___closed__5, &l_Lake_familyDef___closed__5_once, _init_l_Lake_familyDef___closed__5);
v___x_11_ = l_Lean_Name_mkStr1(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__7(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_mk_string_unchecked("docComment", 10, 10);
return v___x_12_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__8(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_obj_once(&l_Lake_familyDef___closed__7, &l_Lake_familyDef___closed__7_once, _init_l_Lake_familyDef___closed__7);
v___x_14_ = l_Lean_Name_mkStr1(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_Lake_familyDef___closed__8, &l_Lake_familyDef___closed__8_once, _init_l_Lake_familyDef___closed__8);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&l_Lake_familyDef___closed__9, &l_Lake_familyDef___closed__9_once, _init_l_Lake_familyDef___closed__9);
v___x_18_ = lean_obj_once(&l_Lake_familyDef___closed__6, &l_Lake_familyDef___closed__6_once, _init_l_Lake_familyDef___closed__6);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__11(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("family_def ", 11, 11);
return v___x_20_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__12(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Lake_familyDef___closed__11, &l_Lake_familyDef___closed__11_once, _init_l_Lake_familyDef___closed__11);
v___x_22_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__13(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = lean_obj_once(&l_Lake_familyDef___closed__12, &l_Lake_familyDef___closed__12_once, _init_l_Lake_familyDef___closed__12);
v___x_24_ = lean_obj_once(&l_Lake_familyDef___closed__10, &l_Lake_familyDef___closed__10_once, _init_l_Lake_familyDef___closed__10);
v___x_25_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_26_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
lean_ctor_set(v___x_26_, 2, v___x_23_);
return v___x_26_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__14(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_27_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__15(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lake_familyDef___closed__14, &l_Lake_familyDef___closed__14_once, _init_l_Lake_familyDef___closed__14);
v___x_29_ = l_Lean_Name_mkStr1(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__16(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l_Lake_familyDef___closed__15, &l_Lake_familyDef___closed__15_once, _init_l_Lake_familyDef___closed__15);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__17(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_32_ = lean_obj_once(&l_Lake_familyDef___closed__16, &l_Lake_familyDef___closed__16_once, _init_l_Lake_familyDef___closed__16);
v___x_33_ = lean_obj_once(&l_Lake_familyDef___closed__13, &l_Lake_familyDef___closed__13_once, _init_l_Lake_familyDef___closed__13);
v___x_34_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_35_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set(v___x_35_, 2, v___x_32_);
return v___x_35_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__18(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_36_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__19(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Lake_familyDef___closed__18, &l_Lake_familyDef___closed__18_once, _init_l_Lake_familyDef___closed__18);
v___x_38_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__20(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_39_ = lean_obj_once(&l_Lake_familyDef___closed__19, &l_Lake_familyDef___closed__19_once, _init_l_Lake_familyDef___closed__19);
v___x_40_ = lean_obj_once(&l_Lake_familyDef___closed__17, &l_Lake_familyDef___closed__17_once, _init_l_Lake_familyDef___closed__17);
v___x_41_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_42_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v___x_40_);
lean_ctor_set(v___x_42_, 2, v___x_39_);
return v___x_42_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__21(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_43_ = lean_obj_once(&l_Lake_familyDef___closed__16, &l_Lake_familyDef___closed__16_once, _init_l_Lake_familyDef___closed__16);
v___x_44_ = lean_obj_once(&l_Lake_familyDef___closed__20, &l_Lake_familyDef___closed__20_once, _init_l_Lake_familyDef___closed__20);
v___x_45_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_46_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
lean_ctor_set(v___x_46_, 2, v___x_43_);
return v___x_46_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__22(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_47_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__23(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&l_Lake_familyDef___closed__22, &l_Lake_familyDef___closed__22_once, _init_l_Lake_familyDef___closed__22);
v___x_49_ = l_Lean_Name_mkStr1(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__24(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = lean_obj_once(&l_Lake_familyDef___closed__23, &l_Lake_familyDef___closed__23_once, _init_l_Lake_familyDef___closed__23);
v___x_52_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__25(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = lean_obj_once(&l_Lake_familyDef___closed__24, &l_Lake_familyDef___closed__24_once, _init_l_Lake_familyDef___closed__24);
v___x_54_ = lean_obj_once(&l_Lake_familyDef___closed__21, &l_Lake_familyDef___closed__21_once, _init_l_Lake_familyDef___closed__21);
v___x_55_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_56_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
lean_ctor_set(v___x_56_, 2, v___x_53_);
return v___x_56_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__26(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_57_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__27(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lake_familyDef___closed__26, &l_Lake_familyDef___closed__26_once, _init_l_Lake_familyDef___closed__26);
v___x_59_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__28(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_obj_once(&l_Lake_familyDef___closed__27, &l_Lake_familyDef___closed__27_once, _init_l_Lake_familyDef___closed__27);
v___x_61_ = lean_obj_once(&l_Lake_familyDef___closed__25, &l_Lake_familyDef___closed__25_once, _init_l_Lake_familyDef___closed__25);
v___x_62_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_63_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
lean_ctor_set(v___x_63_, 2, v___x_60_);
return v___x_63_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__29(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_obj_once(&l_Lake_familyDef___closed__24, &l_Lake_familyDef___closed__24_once, _init_l_Lake_familyDef___closed__24);
v___x_65_ = lean_obj_once(&l_Lake_familyDef___closed__28, &l_Lake_familyDef___closed__28_once, _init_l_Lake_familyDef___closed__28);
v___x_66_ = lean_obj_once(&l_Lake_familyDef___closed__4, &l_Lake_familyDef___closed__4_once, _init_l_Lake_familyDef___closed__4);
v___x_67_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_65_);
lean_ctor_set(v___x_67_, 2, v___x_64_);
return v___x_67_;
}
}
static lean_object* _init_l_Lake_familyDef___closed__30(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_68_ = lean_obj_once(&l_Lake_familyDef___closed__29, &l_Lake_familyDef___closed__29_once, _init_l_Lake_familyDef___closed__29);
v___x_69_ = lean_unsigned_to_nat(1022u);
v___x_70_ = lean_obj_once(&l_Lake_familyDef___closed__2, &l_Lake_familyDef___closed__2_once, _init_l_Lake_familyDef___closed__2);
v___x_71_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___x_69_);
lean_ctor_set(v___x_71_, 2, v___x_68_);
return v___x_71_;
}
}
static lean_object* _init_l_Lake_familyDef(void){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_obj_once(&l_Lake_familyDef___closed__30, &l_Lake_familyDef___closed__30_once, _init_l_Lake_familyDef___closed__30);
return v___x_72_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_73_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked("attributes", 10, 10);
return v___x_74_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_mk_string_unchecked("@[", 2, 2);
return v___x_75_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_mk_string_unchecked("attrInstance", 12, 12);
return v___x_76_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked("attrKind", 8, 8);
return v___x_77_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_mk_string_unchecked("Attr", 4, 4);
return v___x_78_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_mk_string_unchecked("simp", 4, 4);
return v___x_79_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_80_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_mk_string_unchecked("public", 6, 6);
return v___x_81_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_mk_string_unchecked("axiom", 5, 5);
return v___x_82_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_mk_string_unchecked("declId", 6, 6);
return v___x_83_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_mk_empty_array_with_capacity(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_mk_string_unchecked("declSig", 7, 7);
return v___x_86_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_mk_string_unchecked("typeSpec", 8, 8);
return v___x_87_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_88_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("term_=_", 7, 7);
return v___x_89_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__15);
v___x_91_ = l_Lean_Name_mkStr1(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_mk_string_unchecked("=", 1, 1);
return v___x_92_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("instance", 8, 8);
return v___x_93_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_94_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("FamilyDef", 9, 9);
return v___x_95_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20);
v___x_97_ = l_String_toRawSubstring_x27(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20);
v___x_99_ = l_Lean_Name_mkStr1(v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__20);
v___x_101_ = lean_obj_once(&l_Lake_familyDef___closed__0, &l_Lake_familyDef___closed__0_once, _init_l_Lake_familyDef___closed__0);
v___x_102_ = l_Lean_Name_mkStr2(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_box(0);
v___x_104_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__23);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_box(0);
v___x_109_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__25);
v___x_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__26);
v___x_112_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__24);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lean_mk_string_unchecked("declValSimple", 13, 13);
return v___x_114_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29(void){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_mk_string_unchecked(":=", 2, 2);
return v___x_115_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_mk_string_unchecked("anonymousCtor", 13, 13);
return v___x_116_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_mk_string_unchecked("⟨", 3, 1);
return v___x_117_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_mk_string_unchecked("⟩", 3, 1);
return v___x_118_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_mk_string_unchecked("Termination", 11, 11);
return v___x_119_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34(void){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_mk_string_unchecked("suffix", 6, 6);
return v___x_120_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_mk_string_unchecked("_root_", 6, 6);
return v___x_121_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__35);
v___x_123_ = l_Lean_Name_mkStr1(v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_124_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__37);
v___x_126_ = l_Lean_Name_mkStr1(v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_127_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_128_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_129_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_mk_string_unchecked("declaration", 11, 11);
return v___x_130_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_131_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__42);
v___x_132_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41);
v___x_133_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40);
v___x_134_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39);
v___x_135_ = l_Lean_Name_mkStr4(v___x_134_, v___x_133_, v___x_132_, v___x_131_);
return v___x_135_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_mk_string_unchecked("declModifiers", 13, 13);
return v___x_136_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_137_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__44);
v___x_138_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41);
v___x_139_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40);
v___x_140_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39);
v___x_141_ = l_Lean_Name_mkStr4(v___x_140_, v___x_139_, v___x_138_, v___x_137_);
return v___x_141_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Array_mkArray0(lean_box(0));
return v___x_142_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = lean_mk_empty_array_with_capacity(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_mk_string_unchecked("unknown family `", 16, 16);
return v___x_145_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1(lean_object* v_x_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_obj_once(&l_Lake_familyDef___closed__2, &l_Lake_familyDef___closed__2_once, _init_l_Lake_familyDef___closed__2);
lean_inc(v_x_147_);
v___x_151_ = l_Lean_Syntax_isOfKind(v_x_147_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_x_147_);
v___x_152_ = lean_box(1);
v___x_153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v_a_149_);
return v___x_153_;
}
else
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v_id_157_; lean_object* v___x_158_; lean_object* v_fam_159_; lean_object* v___x_160_; lean_object* v_idx_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___y_165_; lean_object* v___y_166_; lean_object* v___y_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_178_; lean_object* v___y_272_; lean_object* v___x_339_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = l_Lean_Syntax_getArg(v_x_147_, v___x_154_);
v___x_156_ = lean_unsigned_to_nat(2u);
v_id_157_ = l_Lean_Syntax_getArg(v_x_147_, v___x_156_);
v___x_158_ = lean_unsigned_to_nat(4u);
v_fam_159_ = l_Lean_Syntax_getArg(v_x_147_, v___x_158_);
v___x_160_ = lean_unsigned_to_nat(5u);
v_idx_161_ = l_Lean_Syntax_getArg(v_x_147_, v___x_160_);
v___x_162_ = lean_unsigned_to_nat(7u);
v___x_163_ = l_Lean_Syntax_getArg(v_x_147_, v___x_162_);
lean_dec(v_x_147_);
v___x_339_ = l_Lean_Syntax_getOptional_x3f(v___x_155_);
lean_dec(v___x_155_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_box(0);
v___y_272_ = v___x_340_;
goto v___jp_271_;
}
else
{
lean_object* v_val_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_val_341_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_339_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_val_341_);
lean_dec(v___x_339_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_val_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
v___y_272_ = v___x_346_;
goto v___jp_271_;
}
}
}
v___jp_164_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
lean_inc_ref_n(v___y_165_, 2);
v___x_179_ = l_Array_append___redArg(v___y_165_, v___y_178_);
lean_dec_ref(v___y_178_);
lean_inc_n(v___y_167_, 9);
lean_inc_n(v___y_171_, 39);
v___x_180_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_180_, 0, v___y_171_);
lean_ctor_set(v___x_180_, 1, v___y_167_);
lean_ctor_set(v___x_180_, 2, v___x_179_);
v___x_181_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__0);
v___x_182_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__1);
lean_inc_ref_n(v___y_175_, 14);
lean_inc_ref_n(v___y_168_, 14);
v___x_183_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_182_);
v___x_184_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__2);
v___x_185_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_185_, 0, v___y_171_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__3);
v___x_187_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_186_);
v___x_188_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__4);
v___x_189_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_188_);
v___x_190_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_190_, 0, v___y_171_);
lean_ctor_set(v___x_190_, 1, v___y_167_);
lean_ctor_set(v___x_190_, 2, v___y_165_);
lean_inc_ref_n(v___x_190_, 20);
v___x_191_ = l_Lean_Syntax_node1(v___y_171_, v___x_189_, v___x_190_);
v___x_192_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__5);
v___x_193_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__6);
v___x_194_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_192_, v___x_193_);
v___x_195_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_195_, 0, v___y_171_);
lean_ctor_set(v___x_195_, 1, v___x_193_);
v___x_196_ = l_Lean_Syntax_node4(v___y_171_, v___x_194_, v___x_195_, v___x_190_, v___x_190_, v___x_190_);
lean_inc(v___x_191_);
v___x_197_ = l_Lean_Syntax_node2(v___y_171_, v___x_187_, v___x_191_, v___x_196_);
v___x_198_ = l_Lean_Syntax_node1(v___y_171_, v___y_167_, v___x_197_);
v___x_199_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__7);
v___x_200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_200_, 0, v___y_171_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = l_Lean_Syntax_node3(v___y_171_, v___x_183_, v___x_185_, v___x_198_, v___x_200_);
v___x_202_ = l_Lean_Syntax_node1(v___y_171_, v___y_167_, v___x_201_);
v___x_203_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__8);
lean_inc_ref_n(v___y_174_, 6);
v___x_204_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_203_);
v___x_205_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_205_, 0, v___y_171_);
lean_ctor_set(v___x_205_, 1, v___x_203_);
v___x_206_ = l_Lean_Syntax_node1(v___y_171_, v___x_204_, v___x_205_);
v___x_207_ = l_Lean_Syntax_node1(v___y_171_, v___y_167_, v___x_206_);
lean_inc(v___x_207_);
lean_inc_n(v___y_169_, 2);
v___x_208_ = l_Lean_Syntax_node7(v___y_171_, v___y_169_, v___x_180_, v___x_202_, v___x_207_, v___x_190_, v___x_190_, v___x_190_, v___x_190_);
v___x_209_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__9);
v___x_210_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_209_);
v___x_211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_211_, 0, v___y_171_);
lean_ctor_set(v___x_211_, 1, v___x_209_);
v___x_212_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__10);
v___x_213_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_212_);
v___x_214_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__11);
v___x_215_ = lean_box(2);
v___x_216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___y_167_);
lean_ctor_set(v___x_216_, 2, v___x_214_);
v___x_217_ = lean_mk_empty_array_with_capacity(v___x_156_);
lean_inc(v___y_166_);
v___x_218_ = lean_array_push(v___x_217_, v___y_166_);
v___x_219_ = lean_array_push(v___x_218_, v___x_216_);
v___x_220_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_220_, 0, v___x_215_);
lean_ctor_set(v___x_220_, 1, v___x_213_);
lean_ctor_set(v___x_220_, 2, v___x_219_);
v___x_221_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__12);
v___x_222_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_221_);
v___x_223_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__13);
v___x_224_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_223_);
v___x_225_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__14);
v___x_226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_226_, 0, v___y_171_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__16);
v___x_228_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__17);
v___x_229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_229_, 0, v___y_171_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
lean_inc(v___x_163_);
v___x_230_ = l_Lean_Syntax_node3(v___y_171_, v___x_227_, v___y_172_, v___x_229_, v___x_163_);
lean_inc_ref(v___x_226_);
lean_inc(v___x_224_);
v___x_231_ = l_Lean_Syntax_node2(v___y_171_, v___x_224_, v___x_226_, v___x_230_);
lean_inc(v___x_222_);
v___x_232_ = l_Lean_Syntax_node2(v___y_171_, v___x_222_, v___x_190_, v___x_231_);
v___x_233_ = l_Lean_Syntax_node3(v___y_171_, v___x_210_, v___x_211_, v___x_220_, v___x_232_);
lean_inc_n(v___y_170_, 2);
v___x_234_ = l_Lean_Syntax_node2(v___y_171_, v___y_170_, v___x_208_, v___x_233_);
v___x_235_ = l_Lean_Syntax_node7(v___y_171_, v___y_169_, v___x_190_, v___x_190_, v___x_207_, v___x_190_, v___x_190_, v___x_190_, v___x_190_);
v___x_236_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__18);
v___x_237_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_236_);
v___x_238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_171_);
lean_ctor_set(v___x_238_, 1, v___x_236_);
v___x_239_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__19);
v___x_240_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_239_);
v___x_241_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__21);
v___x_242_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__22);
lean_inc(v___y_173_);
lean_inc(v___y_177_);
v___x_243_ = l_Lean_addMacroScope(v___y_177_, v___x_242_, v___y_173_);
v___x_244_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__27);
v___x_245_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_245_, 0, v___y_171_);
lean_ctor_set(v___x_245_, 1, v___x_241_);
lean_ctor_set(v___x_245_, 2, v___x_243_);
lean_ctor_set(v___x_245_, 3, v___x_244_);
v___x_246_ = l_Lean_Syntax_node3(v___y_171_, v___y_167_, v_fam_159_, v_idx_161_, v___x_163_);
v___x_247_ = l_Lean_Syntax_node2(v___y_171_, v___x_240_, v___x_245_, v___x_246_);
v___x_248_ = l_Lean_Syntax_node2(v___y_171_, v___x_224_, v___x_226_, v___x_247_);
v___x_249_ = l_Lean_Syntax_node2(v___y_171_, v___x_222_, v___x_190_, v___x_248_);
v___x_250_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__28);
v___x_251_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___y_174_, v___x_250_);
v___x_252_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__29);
v___x_253_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_253_, 0, v___y_171_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__30);
v___x_255_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_181_, v___x_254_);
v___x_256_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__31);
v___x_257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_257_, 0, v___y_171_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = l_Lean_Syntax_node1(v___y_171_, v___y_167_, v___y_166_);
v___x_259_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__32);
v___x_260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_260_, 0, v___y_171_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = l_Lean_Syntax_node3(v___y_171_, v___x_255_, v___x_257_, v___x_258_, v___x_260_);
v___x_262_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__33);
v___x_263_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__34);
v___x_264_ = l_Lean_Name_mkStr4(v___y_168_, v___y_175_, v___x_262_, v___x_263_);
v___x_265_ = l_Lean_Syntax_node2(v___y_171_, v___x_264_, v___x_190_, v___x_190_);
v___x_266_ = l_Lean_Syntax_node4(v___y_171_, v___x_251_, v___x_253_, v___x_261_, v___x_265_, v___x_190_);
v___x_267_ = l_Lean_Syntax_node6(v___y_171_, v___x_237_, v___x_191_, v___x_238_, v___x_190_, v___x_190_, v___x_249_, v___x_266_);
v___x_268_ = l_Lean_Syntax_node2(v___y_171_, v___y_170_, v___x_235_, v___x_267_);
v___x_269_ = l_Lean_Syntax_node2(v___y_171_, v___y_167_, v___x_234_, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___y_176_);
return v___x_270_;
}
v___jp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v_name_275_; lean_object* v___x_276_; 
v___x_273_ = l_Lean_TSyntax_getId(v_fam_159_);
v___x_274_ = l_Lean_extractMacroScopes(v___x_273_);
v_name_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc_n(v_name_275_, 2);
lean_dec_ref(v___x_274_);
v___x_276_ = l_Lean_Macro_resolveGlobalName(v_name_275_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_head_278_; lean_object* v_a_279_; lean_object* v_fst_280_; lean_object* v_quotContext_281_; lean_object* v_currMacroScope_282_; lean_object* v_ref_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec(v_name_275_);
v_head_278_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_head_278_);
lean_dec_ref(v_a_277_);
v_a_279_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_a_279_);
lean_dec_ref(v___x_276_);
v_fst_280_ = lean_ctor_get(v_head_278_, 0);
lean_inc(v_fst_280_);
lean_dec(v_head_278_);
v_quotContext_281_ = lean_ctor_get(v_a_148_, 1);
v_currMacroScope_282_ = lean_ctor_get(v_a_148_, 2);
v_ref_283_ = lean_ctor_get(v_a_148_, 5);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_mk_empty_array_with_capacity(v___x_284_);
lean_inc(v_idx_161_);
v___x_286_ = lean_array_push(v___x_285_, v_idx_161_);
lean_inc(v_fam_159_);
v___x_287_ = l_Lean_Syntax_mkApp(v_fam_159_, v___x_286_);
v___x_288_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__36);
v___x_289_ = l_Lean_Name_append(v___x_288_, v_fst_280_);
v___x_290_ = l_Lean_TSyntax_getId(v_id_157_);
v___x_291_ = l_Lean_Name_append(v___x_289_, v___x_290_);
v___x_292_ = l_Lean_mkIdentFrom(v_id_157_, v___x_291_, v___x_151_);
lean_dec(v_id_157_);
v___x_293_ = 0;
v___x_294_ = l_Lean_SourceInfo_fromRef(v_ref_283_, v___x_293_);
v___x_295_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__38);
v___x_296_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__39);
v___x_297_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__40);
v___x_298_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__41);
v___x_299_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__43);
v___x_300_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__45);
v___x_301_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__46);
if (lean_obj_tag(v___y_272_) == 1)
{
lean_object* v_val_302_; lean_object* v___x_303_; 
v_val_302_ = lean_ctor_get(v___y_272_, 0);
lean_inc(v_val_302_);
lean_dec_ref(v___y_272_);
v___x_303_ = l_Array_mkArray1___redArg(v_val_302_);
v___y_165_ = v___x_301_;
v___y_166_ = v___x_292_;
v___y_167_ = v___x_295_;
v___y_168_ = v___x_296_;
v___y_169_ = v___x_300_;
v___y_170_ = v___x_299_;
v___y_171_ = v___x_294_;
v___y_172_ = v___x_287_;
v___y_173_ = v_currMacroScope_282_;
v___y_174_ = v___x_298_;
v___y_175_ = v___x_297_;
v___y_176_ = v_a_279_;
v___y_177_ = v_quotContext_281_;
v___y_178_ = v___x_303_;
goto v___jp_164_;
}
else
{
lean_object* v___x_304_; 
lean_dec(v___y_272_);
v___x_304_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__47);
v___y_165_ = v___x_301_;
v___y_166_ = v___x_292_;
v___y_167_ = v___x_295_;
v___y_168_ = v___x_296_;
v___y_169_ = v___x_300_;
v___y_170_ = v___x_299_;
v___y_171_ = v___x_294_;
v___y_172_ = v___x_287_;
v___y_173_ = v_currMacroScope_282_;
v___y_174_ = v___x_298_;
v___y_175_ = v___x_297_;
v___y_176_ = v_a_279_;
v___y_177_ = v_quotContext_281_;
v___y_178_ = v___x_304_;
goto v___jp_164_;
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec(v_a_277_);
lean_dec(v___y_272_);
lean_dec(v___x_163_);
lean_dec(v_idx_161_);
lean_dec(v_id_157_);
v_a_305_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_a_305_);
lean_dec_ref(v___x_276_);
v___x_306_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__48);
v___x_307_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_275_, v___x_151_);
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
lean_dec_ref(v___x_307_);
v___x_309_ = lean_obj_once(&l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49, &l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49_once, _init_l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___closed__49);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
v___x_311_ = l_Lean_Macro_throwErrorAt___redArg(v_fam_159_, v___x_310_, v_a_148_, v_a_305_);
lean_dec(v_fam_159_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_a_313_ = lean_ctor_get(v___x_311_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_311_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_312_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
else
{
lean_object* v_a_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
v_a_321_ = lean_ctor_get(v___x_311_, 0);
v_a_322_ = lean_ctor_get(v___x_311_, 1);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_311_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_inc(v_a_321_);
lean_dec(v___x_311_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_321_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_a_322_);
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
}
else
{
lean_object* v_a_330_; lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v_name_275_);
lean_dec(v___y_272_);
lean_dec(v___x_163_);
lean_dec(v_idx_161_);
lean_dec(v_fam_159_);
lean_dec(v_id_157_);
v_a_330_ = lean_ctor_get(v___x_276_, 0);
v_a_331_ = lean_ctor_get(v___x_276_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_276_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_inc(v_a_330_);
lean_dec(v___x_276_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_330_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1___boxed(lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lake___aux__Lake__Util__Family______macroRules__Lake__familyDef__1(v_x_349_, v_a_350_, v_a_351_);
lean_dec_ref(v_a_350_);
return v_res_352_;
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Family(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Family(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_familyDef = _init_l_Lake_familyDef();
lean_mark_persistent(l_Lake_familyDef);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Family(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Family(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Family(builtin);
}
#ifdef __cplusplus
}
#endif
