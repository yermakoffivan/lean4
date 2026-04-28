// Lean compiler output
// Module: Std.Do.Triple.Basic
// Imports: public import Std.Do.WP
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Do_triple___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__0;
static lean_once_cell_t l_Std_Do_triple___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__1;
static lean_once_cell_t l_Std_Do_triple___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__2;
static lean_once_cell_t l_Std_Do_triple___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__3;
static lean_once_cell_t l_Std_Do_triple___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__4;
static lean_once_cell_t l_Std_Do_triple___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__5;
static lean_once_cell_t l_Std_Do_triple___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__6;
static lean_once_cell_t l_Std_Do_triple___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__7;
static lean_once_cell_t l_Std_Do_triple___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__8;
static lean_once_cell_t l_Std_Do_triple___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__9;
static lean_once_cell_t l_Std_Do_triple___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__10;
static lean_once_cell_t l_Std_Do_triple___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__11;
static lean_once_cell_t l_Std_Do_triple___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__12;
static lean_once_cell_t l_Std_Do_triple___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__13;
static lean_once_cell_t l_Std_Do_triple___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__14;
static lean_once_cell_t l_Std_Do_triple___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__15;
static lean_once_cell_t l_Std_Do_triple___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__16;
static lean_once_cell_t l_Std_Do_triple___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__17;
static lean_once_cell_t l_Std_Do_triple___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__18;
static lean_once_cell_t l_Std_Do_triple___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__19;
static lean_once_cell_t l_Std_Do_triple___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__20;
static lean_once_cell_t l_Std_Do_triple___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__21;
static lean_once_cell_t l_Std_Do_triple___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__22;
static lean_once_cell_t l_Std_Do_triple___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__23;
static lean_once_cell_t l_Std_Do_triple___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_triple___closed__24;
LEAN_EXPORT lean_object* l_Std_Do_triple;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Do_unexpandTriple___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_unexpandTriple___closed__0;
static lean_once_cell_t l_Std_Do_unexpandTriple___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_unexpandTriple___closed__1;
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do_triple___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_1_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_2_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("triple", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Std_Do_triple___closed__2, &l_Std_Do_triple___closed__2_once, _init_l_Std_Do_triple___closed__2);
v___x_5_ = lean_obj_once(&l_Std_Do_triple___closed__1, &l_Std_Do_triple___closed__1_once, _init_l_Std_Do_triple___closed__1);
v___x_6_ = lean_obj_once(&l_Std_Do_triple___closed__0, &l_Std_Do_triple___closed__0_once, _init_l_Std_Do_triple___closed__0);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__4(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_8_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Std_Do_triple___closed__4, &l_Std_Do_triple___closed__4_once, _init_l_Std_Do_triple___closed__4);
v___x_10_ = l_Lean_Name_mkStr1(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__6(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_mk_string_unchecked("⦃", 3, 1);
return v___x_11_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__7(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_obj_once(&l_Std_Do_triple___closed__6, &l_Std_Do_triple___closed__6_once, _init_l_Std_Do_triple___closed__6);
v___x_13_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__8(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_14_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__9(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l_Std_Do_triple___closed__8, &l_Std_Do_triple___closed__8_once, _init_l_Std_Do_triple___closed__8);
v___x_16_ = l_Lean_Name_mkStr1(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_obj_once(&l_Std_Do_triple___closed__9, &l_Std_Do_triple___closed__9_once, _init_l_Std_Do_triple___closed__9);
v___x_19_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__11(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_20_ = lean_obj_once(&l_Std_Do_triple___closed__10, &l_Std_Do_triple___closed__10_once, _init_l_Std_Do_triple___closed__10);
v___x_21_ = lean_obj_once(&l_Std_Do_triple___closed__7, &l_Std_Do_triple___closed__7_once, _init_l_Std_Do_triple___closed__7);
v___x_22_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_23_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_21_);
lean_ctor_set(v___x_23_, 2, v___x_20_);
return v___x_23_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__12(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_mk_string_unchecked("⦄ ", 4, 2);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__13(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&l_Std_Do_triple___closed__12, &l_Std_Do_triple___closed__12_once, _init_l_Std_Do_triple___closed__12);
v___x_26_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__14(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = lean_obj_once(&l_Std_Do_triple___closed__13, &l_Std_Do_triple___closed__13_once, _init_l_Std_Do_triple___closed__13);
v___x_28_ = lean_obj_once(&l_Std_Do_triple___closed__11, &l_Std_Do_triple___closed__11_once, _init_l_Std_Do_triple___closed__11);
v___x_29_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_30_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_27_);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__15(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_unsigned_to_nat(1022u);
v___x_32_ = lean_obj_once(&l_Std_Do_triple___closed__9, &l_Std_Do_triple___closed__9_once, _init_l_Std_Do_triple___closed__9);
v___x_33_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_34_ = lean_obj_once(&l_Std_Do_triple___closed__15, &l_Std_Do_triple___closed__15_once, _init_l_Std_Do_triple___closed__15);
v___x_35_ = lean_obj_once(&l_Std_Do_triple___closed__14, &l_Std_Do_triple___closed__14_once, _init_l_Std_Do_triple___closed__14);
v___x_36_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_37_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
lean_ctor_set(v___x_37_, 2, v___x_34_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__17(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_mk_string_unchecked(" ⦃", 4, 2);
return v___x_38_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__18(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&l_Std_Do_triple___closed__17, &l_Std_Do_triple___closed__17_once, _init_l_Std_Do_triple___closed__17);
v___x_40_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__19(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_41_ = lean_obj_once(&l_Std_Do_triple___closed__18, &l_Std_Do_triple___closed__18_once, _init_l_Std_Do_triple___closed__18);
v___x_42_ = lean_obj_once(&l_Std_Do_triple___closed__16, &l_Std_Do_triple___closed__16_once, _init_l_Std_Do_triple___closed__16);
v___x_43_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_44_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
lean_ctor_set(v___x_44_, 2, v___x_41_);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__20(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Std_Do_triple___closed__10, &l_Std_Do_triple___closed__10_once, _init_l_Std_Do_triple___closed__10);
v___x_46_ = lean_obj_once(&l_Std_Do_triple___closed__19, &l_Std_Do_triple___closed__19_once, _init_l_Std_Do_triple___closed__19);
v___x_47_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_48_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__21(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("⦄", 3, 1);
return v___x_49_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__22(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Std_Do_triple___closed__21, &l_Std_Do_triple___closed__21_once, _init_l_Std_Do_triple___closed__21);
v___x_51_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__23(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Std_Do_triple___closed__22, &l_Std_Do_triple___closed__22_once, _init_l_Std_Do_triple___closed__22);
v___x_53_ = lean_obj_once(&l_Std_Do_triple___closed__20, &l_Std_Do_triple___closed__20_once, _init_l_Std_Do_triple___closed__20);
v___x_54_ = lean_obj_once(&l_Std_Do_triple___closed__5, &l_Std_Do_triple___closed__5_once, _init_l_Std_Do_triple___closed__5);
v___x_55_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_Do_triple___closed__24(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Std_Do_triple___closed__23, &l_Std_Do_triple___closed__23_once, _init_l_Std_Do_triple___closed__23);
v___x_57_ = lean_unsigned_to_nat(1022u);
v___x_58_ = lean_obj_once(&l_Std_Do_triple___closed__3, &l_Std_Do_triple___closed__3_once, _init_l_Std_Do_triple___closed__3);
v___x_59_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Std_Do_triple(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_Std_Do_triple___closed__24, &l_Std_Do_triple___closed__24_once, _init_l_Std_Do_triple___closed__24);
return v___x_60_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked("termSpred(_)", 12, 12);
return v___x_61_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__0);
v___x_63_ = lean_obj_once(&l_Std_Do_triple___closed__1, &l_Std_Do_triple___closed__1_once, _init_l_Std_Do_triple___closed__1);
v___x_64_ = lean_obj_once(&l_Std_Do_triple___closed__0, &l_Std_Do_triple___closed__0_once, _init_l_Std_Do_triple___closed__0);
v___x_65_ = l_Lean_Name_mkStr3(v___x_64_, v___x_63_, v___x_62_);
return v___x_65_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_66_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_67_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_68_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5(void){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_mk_string_unchecked("paren", 5, 5);
return v___x_69_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_70_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__5);
v___x_71_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_72_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_73_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_74_ = l_Lean_Name_mkStr4(v___x_73_, v___x_72_, v___x_71_, v___x_70_);
return v___x_74_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_mk_string_unchecked("termIfThenElse", 14, 14);
return v___x_75_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__7);
v___x_77_ = l_Lean_Name_mkStr1(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_mk_string_unchecked("fun", 3, 3);
return v___x_78_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9);
v___x_80_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_81_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_82_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_83_ = l_Lean_Name_mkStr4(v___x_82_, v___x_81_, v___x_80_, v___x_79_);
return v___x_83_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("typeAscription", 14, 14);
return v___x_84_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__11);
v___x_86_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_87_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_88_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_89_ = l_Lean_Name_mkStr4(v___x_88_, v___x_87_, v___x_86_, v___x_85_);
return v___x_89_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_mk_string_unchecked("hygienicLParen", 14, 14);
return v___x_90_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__13);
v___x_92_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_93_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_94_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_95_ = l_Lean_Name_mkStr4(v___x_94_, v___x_93_, v___x_92_, v___x_91_);
return v___x_95_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15(void){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_mk_string_unchecked("hygieneInfo", 11, 11);
return v___x_96_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__15);
v___x_98_ = l_Lean_Name_mkStr1(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_mk_string_unchecked("_fakeMod", 8, 8);
return v___x_99_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__17);
v___x_101_ = l_Lean_Name_mkStr1(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_102_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("", 0, 0);
return v___x_103_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__20);
v___x_105_ = l_String_toRawSubstring_x27(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_box(0);
v___x_108_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__18);
v___x_109_ = l_Lean_addMacroScope(v___x_108_, v___x_107_, v___x_106_);
return v___x_109_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_110_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("Notation", 8, 8);
return v___x_111_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__24);
v___x_113_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__23);
v___x_114_ = lean_obj_once(&l_Std_Do_triple___closed__1, &l_Std_Do_triple___closed__1_once, _init_l_Std_Do_triple___closed__1);
v___x_115_ = lean_obj_once(&l_Std_Do_triple___closed__0, &l_Std_Do_triple___closed__0_once, _init_l_Std_Do_triple___closed__0);
v___x_116_ = l_Lean_Name_mkStr4(v___x_115_, v___x_114_, v___x_113_, v___x_112_);
return v___x_116_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__25);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_mk_string_unchecked("PrettyPrinter", 13, 13);
return v___x_119_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__27);
v___x_121_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_122_ = l_Lean_Name_mkStr2(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__28);
v___x_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_126_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_127_ = l_Lean_Name_mkStr2(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__30);
v___x_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_mk_string_unchecked("Macro", 5, 5);
return v___x_130_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__32);
v___x_132_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_133_ = l_Lean_Name_mkStr2(v___x_132_, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__33);
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_137_ = l_Lean_Name_mkStr1(v___x_136_);
return v___x_137_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__35);
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_box(0);
v___x_141_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__36);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_143_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__37);
v___x_144_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__34);
v___x_145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___x_143_);
return v___x_145_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__38);
v___x_147_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__31);
v___x_148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
return v___x_148_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__39);
v___x_150_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__29);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_149_);
return v___x_151_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__40);
v___x_153_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__26);
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_155_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_156_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__43);
v___x_158_ = l_Lean_Name_mkStr1(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_159_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_mk_string_unchecked("basicFun", 8, 8);
return v___x_160_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__46);
v___x_162_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_163_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_164_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_165_ = l_Lean_Name_mkStr4(v___x_164_, v___x_163_, v___x_162_, v___x_161_);
return v___x_165_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Array_mkArray0(lean_box(0));
return v___x_166_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_mk_string_unchecked("=>", 2, 2);
return v___x_167_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_mk_string_unchecked("if", 2, 2);
return v___x_168_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked("then", 4, 4);
return v___x_169_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_mk_string_unchecked("else", 4, 4);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__1);
lean_inc(v_x_171_);
v___x_175_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__6);
lean_inc(v_x_171_);
v___x_177_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__8);
lean_inc(v_x_171_);
v___x_179_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_180_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__9);
v___x_181_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__10);
lean_inc(v_x_171_);
v___x_182_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__12);
lean_inc(v_x_171_);
v___x_184_ = l_Lean_Syntax_isOfKind(v_x_171_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_x_171_);
lean_ctor_set(v___x_185_, 1, v___y_173_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = l_Lean_Syntax_getArg(v_x_171_, v___x_186_);
v___x_188_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14);
lean_inc(v___x_187_);
v___x_189_ = l_Lean_Syntax_isOfKind(v___x_187_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; 
lean_dec(v___x_187_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_x_171_);
lean_ctor_set(v___x_190_, 1, v___y_173_);
return v___x_190_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = l_Lean_Syntax_getArg(v___x_187_, v___x_191_);
lean_dec(v___x_187_);
v___x_193_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16);
lean_inc(v___x_192_);
v___x_194_ = l_Lean_Syntax_isOfKind(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_dec(v___x_192_);
v___x_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_195_, 0, v_x_171_);
lean_ctor_set(v___x_195_, 1, v___y_173_);
return v___x_195_;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = l_Lean_Syntax_getArg(v___x_192_, v___x_186_);
lean_dec(v___x_192_);
v___x_197_ = lean_box(0);
v___x_198_ = l_Lean_Syntax_matchesIdent(v___x_196_, v___x_197_);
lean_dec(v___x_196_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v_x_171_);
lean_ctor_set(v___x_199_, 1, v___y_173_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(3u);
v___x_201_ = l_Lean_Syntax_getArg(v_x_171_, v___x_200_);
lean_inc(v___x_201_);
v___x_202_ = l_Lean_Syntax_matchesNull(v___x_201_, v___x_191_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
lean_dec(v___x_201_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v_x_171_);
lean_ctor_set(v___x_203_, 1, v___y_173_);
return v___x_203_;
}
else
{
lean_object* v_P_204_; lean_object* v___x_205_; 
v_P_204_ = l_Lean_Syntax_getArg(v_x_171_, v___x_191_);
lean_dec(v_x_171_);
v___x_205_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_204_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_231_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_a_207_ = lean_ctor_get(v___x_205_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_231_ == 0)
{
v___x_209_ = v___x_205_;
v_isShared_210_ = v_isSharedCheck_231_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_231_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_211_ = l_Lean_Syntax_getArg(v___x_201_, v___x_186_);
lean_dec(v___x_201_);
v___x_212_ = l_Lean_SourceInfo_fromRef(v___y_172_, v___x_182_);
v___x_213_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19);
lean_inc_n(v___x_212_, 7);
v___x_214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21);
v___x_216_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22);
v___x_217_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41);
v___x_218_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_218_, 0, v___x_212_);
lean_ctor_set(v___x_218_, 1, v___x_215_);
lean_ctor_set(v___x_218_, 2, v___x_216_);
lean_ctor_set(v___x_218_, 3, v___x_217_);
v___x_219_ = l_Lean_Syntax_node1(v___x_212_, v___x_193_, v___x_218_);
v___x_220_ = l_Lean_Syntax_node2(v___x_212_, v___x_188_, v___x_214_, v___x_219_);
v___x_221_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__42);
v___x_222_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_212_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44);
v___x_224_ = l_Lean_Syntax_node1(v___x_212_, v___x_223_, v___x_211_);
v___x_225_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45);
v___x_226_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_212_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = l_Lean_Syntax_node5(v___x_212_, v___x_183_, v___x_220_, v_a_206_, v___x_222_, v___x_224_, v___x_226_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_227_);
v___x_229_ = v___x_209_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_a_207_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
else
{
lean_dec(v___x_201_);
return v___x_205_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = l_Lean_Syntax_getArg(v_x_171_, v___x_232_);
v___x_234_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__47);
lean_inc(v___x_233_);
v___x_235_ = l_Lean_Syntax_isOfKind(v___x_233_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; 
lean_dec(v___x_233_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v_x_171_);
lean_ctor_set(v___x_236_, 1, v___y_173_);
return v___x_236_;
}
else
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_237_ = lean_unsigned_to_nat(0u);
v___x_238_ = l_Lean_Syntax_getArg(v___x_233_, v___x_232_);
v___x_239_ = l_Lean_Syntax_matchesNull(v___x_238_, v___x_237_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec(v___x_233_);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v_x_171_);
lean_ctor_set(v___x_240_, 1, v___y_173_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v_b_242_; lean_object* v___x_243_; 
lean_dec(v_x_171_);
v___x_241_ = lean_unsigned_to_nat(3u);
v_b_242_ = l_Lean_Syntax_getArg(v___x_233_, v___x_241_);
v___x_243_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_b_242_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_265_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_a_245_ = lean_ctor_get(v___x_243_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_265_ == 0)
{
v___x_247_ = v___x_243_;
v_isShared_248_ = v_isSharedCheck_265_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_265_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v_xs_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_249_ = l_Lean_Syntax_getArg(v___x_233_, v___x_237_);
lean_dec(v___x_233_);
v_xs_250_ = l_Lean_Syntax_getArgs(v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = l_Lean_SourceInfo_fromRef(v___y_172_, v___x_179_);
lean_inc_n(v___x_251_, 5);
v___x_252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_180_);
v___x_253_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__44);
v___x_254_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__48);
v___x_255_ = l_Array_append___redArg(v___x_254_, v_xs_250_);
lean_dec_ref(v_xs_250_);
v___x_256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_256_, 0, v___x_251_);
lean_ctor_set(v___x_256_, 1, v___x_253_);
lean_ctor_set(v___x_256_, 2, v___x_255_);
v___x_257_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_251_);
lean_ctor_set(v___x_257_, 1, v___x_253_);
lean_ctor_set(v___x_257_, 2, v___x_254_);
v___x_258_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__49);
v___x_259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_251_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = l_Lean_Syntax_node4(v___x_251_, v___x_234_, v___x_256_, v___x_257_, v___x_259_, v_a_244_);
v___x_261_ = l_Lean_Syntax_node2(v___x_251_, v___x_181_, v___x_252_, v___x_260_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v___x_261_);
v___x_263_ = v___x_247_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_a_245_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_dec(v___x_233_);
return v___x_243_;
}
}
}
}
}
else
{
lean_object* v___x_266_; lean_object* v_t_267_; lean_object* v___x_268_; 
v___x_266_ = lean_unsigned_to_nat(3u);
v_t_267_ = l_Lean_Syntax_getArg(v_x_171_, v___x_266_);
v___x_268_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_t_267_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_298_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_a_270_ = lean_ctor_get(v___x_268_, 1);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_298_ == 0)
{
v___x_272_ = v___x_268_;
v_isShared_273_ = v_isSharedCheck_298_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_298_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v_e_275_; lean_object* v___x_276_; 
v___x_274_ = lean_unsigned_to_nat(5u);
v_e_275_ = l_Lean_Syntax_getArg(v_x_171_, v___x_274_);
v___x_276_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_e_275_, v___y_172_, v_a_270_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_297_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_a_278_ = lean_ctor_get(v___x_276_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_297_ == 0)
{
v___x_280_ = v___x_276_;
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = l_Lean_Syntax_getArg(v_x_171_, v___x_282_);
lean_dec(v_x_171_);
v___x_284_ = l_Lean_SourceInfo_fromRef(v___y_172_, v___x_177_);
v___x_285_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__50);
lean_inc(v___x_284_);
if (v_isShared_273_ == 0)
{
lean_ctor_set_tag(v___x_272_, 2);
lean_ctor_set(v___x_272_, 1, v___x_285_);
lean_ctor_set(v___x_272_, 0, v___x_284_);
v___x_287_ = v___x_272_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v___x_285_);
v___x_287_ = v_reuseFailAlloc_296_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_288_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__51);
lean_inc_n(v___x_284_, 2);
v___x_289_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_284_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__52);
v___x_291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_284_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Syntax_node6(v___x_284_, v___x_178_, v___x_287_, v___x_283_, v___x_289_, v_a_269_, v___x_291_, v_a_277_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_292_);
v___x_294_ = v___x_280_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v_a_278_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_del_object(v___x_272_);
lean_dec(v_a_269_);
lean_dec(v_x_171_);
return v___x_276_;
}
}
}
else
{
lean_dec(v_x_171_);
return v___x_268_;
}
}
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = l_Lean_Syntax_getArg(v_x_171_, v___x_299_);
v___x_301_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__14);
lean_inc(v___x_300_);
v___x_302_ = l_Lean_Syntax_isOfKind(v___x_300_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
lean_dec(v___x_300_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_x_171_);
lean_ctor_set(v___x_303_, 1, v___y_173_);
return v___x_303_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = l_Lean_Syntax_getArg(v___x_300_, v___x_304_);
lean_dec(v___x_300_);
v___x_306_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__16);
lean_inc(v___x_305_);
v___x_307_ = l_Lean_Syntax_isOfKind(v___x_305_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
lean_dec(v___x_305_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_x_171_);
lean_ctor_set(v___x_308_, 1, v___y_173_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = l_Lean_Syntax_getArg(v___x_305_, v___x_299_);
lean_dec(v___x_305_);
v___x_310_ = lean_box(0);
v___x_311_ = l_Lean_Syntax_matchesIdent(v___x_309_, v___x_310_);
lean_dec(v___x_309_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v_x_171_);
lean_ctor_set(v___x_312_, 1, v___y_173_);
return v___x_312_;
}
else
{
lean_object* v_P_313_; lean_object* v___x_314_; 
v_P_313_ = l_Lean_Syntax_getArg(v_x_171_, v___x_304_);
lean_dec(v_x_171_);
v___x_314_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_313_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_335_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_a_316_ = lean_ctor_get(v___x_314_, 1);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_335_ == 0)
{
v___x_318_ = v___x_314_;
v_isShared_319_ = v_isSharedCheck_335_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_335_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_320_ = l_Lean_SourceInfo_fromRef(v___y_172_, v___x_175_);
v___x_321_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__19);
lean_inc_n(v___x_320_, 5);
v___x_322_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__21);
v___x_324_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__22);
v___x_325_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__41);
v___x_326_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_326_, 0, v___x_320_);
lean_ctor_set(v___x_326_, 1, v___x_323_);
lean_ctor_set(v___x_326_, 2, v___x_324_);
lean_ctor_set(v___x_326_, 3, v___x_325_);
v___x_327_ = l_Lean_Syntax_node1(v___x_320_, v___x_306_, v___x_326_);
v___x_328_ = l_Lean_Syntax_node2(v___x_320_, v___x_301_, v___x_322_, v___x_327_);
v___x_329_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__45);
v___x_330_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_320_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
v___x_331_ = l_Lean_Syntax_node3(v___x_320_, v___x_176_, v___x_328_, v_a_315_, v___x_330_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_331_);
v___x_333_ = v___x_318_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_a_316_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
else
{
return v___x_314_;
}
}
}
}
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = l_Lean_Syntax_getArg(v_x_171_, v___x_336_);
lean_dec(v_x_171_);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___y_173_);
return v___x_338_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___boxed(lean_object* v_x_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_x_339_, v___y_340_, v___y_341_);
lean_dec(v___y_340_);
return v_res_342_;
}
}
static lean_object* _init_l_Std_Do_unexpandTriple___closed__0(void){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_343_;
}
}
static lean_object* _init_l_Std_Do_unexpandTriple___closed__1(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_344_ = lean_obj_once(&l_Std_Do_unexpandTriple___closed__0, &l_Std_Do_unexpandTriple___closed__0_once, _init_l_Std_Do_unexpandTriple___closed__0);
v___x_345_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__4);
v___x_346_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__3);
v___x_347_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0___closed__2);
v___x_348_ = l_Lean_Name_mkStr4(v___x_347_, v___x_346_, v___x_345_, v___x_344_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple(lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_obj_once(&l_Std_Do_unexpandTriple___closed__1, &l_Std_Do_unexpandTriple___closed__1_once, _init_l_Std_Do_unexpandTriple___closed__1);
lean_inc(v_x_349_);
v___x_353_ = l_Lean_Syntax_isOfKind(v_x_349_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v_x_349_);
v___x_354_ = lean_box(0);
v___x_355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v_a_351_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = l_Lean_Syntax_getArg(v_x_349_, v___x_356_);
lean_dec(v_x_349_);
v___x_358_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_357_);
v___x_359_ = l_Lean_Syntax_matchesNull(v___x_357_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v___x_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_a_351_);
return v___x_361_;
}
else
{
lean_object* v_P_362_; lean_object* v___x_363_; 
v_P_362_ = l_Lean_Syntax_getArg(v___x_357_, v___x_356_);
v___x_363_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_unexpandTriple_spec__0(v_P_362_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_384_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_a_365_ = lean_ctor_get(v___x_363_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_384_ == 0)
{
v___x_367_ = v___x_363_;
v_isShared_368_ = v_isSharedCheck_384_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_384_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = l_Lean_Syntax_getArg(v___x_357_, v___x_369_);
v___x_371_ = lean_unsigned_to_nat(2u);
v___x_372_ = l_Lean_Syntax_getArg(v___x_357_, v___x_371_);
lean_dec(v___x_357_);
v___x_373_ = 0;
v___x_374_ = l_Lean_SourceInfo_fromRef(v_a_350_, v___x_373_);
v___x_375_ = lean_obj_once(&l_Std_Do_triple___closed__3, &l_Std_Do_triple___closed__3_once, _init_l_Std_Do_triple___closed__3);
v___x_376_ = lean_obj_once(&l_Std_Do_triple___closed__6, &l_Std_Do_triple___closed__6_once, _init_l_Std_Do_triple___closed__6);
lean_inc_n(v___x_374_, 2);
v___x_377_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_374_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_obj_once(&l_Std_Do_triple___closed__21, &l_Std_Do_triple___closed__21_once, _init_l_Std_Do_triple___closed__21);
v___x_379_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_374_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
lean_inc_ref(v___x_379_);
lean_inc_ref(v___x_377_);
v___x_380_ = l_Lean_Syntax_node7(v___x_374_, v___x_375_, v___x_377_, v_a_364_, v___x_379_, v___x_370_, v___x_377_, v___x_372_, v___x_379_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_380_);
v___x_382_ = v___x_367_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_a_365_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec(v___x_357_);
v_a_385_ = lean_ctor_get(v___x_363_, 0);
v_a_386_ = lean_ctor_get(v___x_363_, 1);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_363_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_inc(v_a_385_);
lean_dec(v___x_363_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_385_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_unexpandTriple___boxed(lean_object* v_x_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_Do_unexpandTriple(v_x_394_, v_a_395_, v_a_396_);
lean_dec(v_a_395_);
return v_res_397_;
}
}
lean_object* runtime_initialize_Std_Do_WP(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Std_Do_triple = _init_l_Std_Do_triple();
lean_mark_persistent(l_Std_Do_triple);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_WP(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_Triple_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
