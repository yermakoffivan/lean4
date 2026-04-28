// Lean compiler output
// Module: Init.Ext
// Imports: public import Init.RCases
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__0;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__1;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__10;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__11;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__12;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__13;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__14;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__15;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__16;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__17;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__18;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__19;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__20;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__21;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__22;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__23;
static lean_once_cell_t l_Lean_Parser_Attr_extIff___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extIff___closed__24;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extIff;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__0;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__1;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_extFlat___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extFlat___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extFlat;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__0;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__1;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__10;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__11;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__12;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__13;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__14;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__15;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__16;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__17;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__18;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__19;
static lean_once_cell_t l_Lean_Parser_Attr_ext___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_ext___closed__20;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_ext;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__19;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__20;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__21;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__22;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__23;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_ext___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_ext___closed__24;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext_ext;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext_applyExtTheorem;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext_tacticExt1______;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("extIff", 6, 6);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__3(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Attr", 4, 4);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__4(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__0, &l_Lean_Parser_Attr_extIff___closed__0_once, _init_l_Lean_Parser_Attr_extIff___closed__0);
v___x_6_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__3, &l_Lean_Parser_Attr_extIff___closed__3_once, _init_l_Lean_Parser_Attr_extIff___closed__3);
v___x_7_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_8_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_9_ = l_Lean_Name_mkStr4(v___x_8_, v___x_7_, v___x_6_, v___x_5_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__5(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_string_unchecked("atomic", 6, 6);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__5, &l_Lean_Parser_Attr_extIff___closed__5_once, _init_l_Lean_Parser_Attr_extIff___closed__5);
v___x_12_ = l_Lean_Name_mkStr1(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__7(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__8(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__7, &l_Lean_Parser_Attr_extIff___closed__7_once, _init_l_Lean_Parser_Attr_extIff___closed__7);
v___x_15_ = l_Lean_Name_mkStr1(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__9(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__10(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__9, &l_Lean_Parser_Attr_extIff___closed__9_once, _init_l_Lean_Parser_Attr_extIff___closed__9);
v___x_18_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__11(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_mk_string_unchecked("iff", 3, 3);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__12(void){
_start:
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = 0;
v___x_21_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__11, &l_Lean_Parser_Attr_extIff___closed__11_once, _init_l_Lean_Parser_Attr_extIff___closed__11);
v___x_22_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_22_, 0, v___x_21_);
lean_ctor_set_uint8(v___x_22_, sizeof(void*)*1, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__13(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__12, &l_Lean_Parser_Attr_extIff___closed__12_once, _init_l_Lean_Parser_Attr_extIff___closed__12);
v___x_24_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__10, &l_Lean_Parser_Attr_extIff___closed__10_once, _init_l_Lean_Parser_Attr_extIff___closed__10);
v___x_25_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_26_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
lean_ctor_set(v___x_26_, 2, v___x_23_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__14(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__15(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__14, &l_Lean_Parser_Attr_extIff___closed__14_once, _init_l_Lean_Parser_Attr_extIff___closed__14);
v___x_29_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__16(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__15, &l_Lean_Parser_Attr_extIff___closed__15_once, _init_l_Lean_Parser_Attr_extIff___closed__15);
v___x_31_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__13, &l_Lean_Parser_Attr_extIff___closed__13_once, _init_l_Lean_Parser_Attr_extIff___closed__13);
v___x_32_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_33_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
lean_ctor_set(v___x_33_, 2, v___x_30_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__17(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__18(void){
_start:
{
uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = 0;
v___x_36_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__17, &l_Lean_Parser_Attr_extIff___closed__17_once, _init_l_Lean_Parser_Attr_extIff___closed__17);
v___x_37_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set_uint8(v___x_37_, sizeof(void*)*1, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__19(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__18, &l_Lean_Parser_Attr_extIff___closed__18_once, _init_l_Lean_Parser_Attr_extIff___closed__18);
v___x_39_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__16, &l_Lean_Parser_Attr_extIff___closed__16_once, _init_l_Lean_Parser_Attr_extIff___closed__16);
v___x_40_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_41_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set(v___x_41_, 2, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__20(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__21(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__20, &l_Lean_Parser_Attr_extIff___closed__20_once, _init_l_Lean_Parser_Attr_extIff___closed__20);
v___x_44_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__22(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__21, &l_Lean_Parser_Attr_extIff___closed__21_once, _init_l_Lean_Parser_Attr_extIff___closed__21);
v___x_46_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__19, &l_Lean_Parser_Attr_extIff___closed__19_once, _init_l_Lean_Parser_Attr_extIff___closed__19);
v___x_47_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_48_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__23(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__22, &l_Lean_Parser_Attr_extIff___closed__22_once, _init_l_Lean_Parser_Attr_extIff___closed__22);
v___x_50_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__6, &l_Lean_Parser_Attr_extIff___closed__6_once, _init_l_Lean_Parser_Attr_extIff___closed__6);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff___closed__24(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__23, &l_Lean_Parser_Attr_extIff___closed__23_once, _init_l_Lean_Parser_Attr_extIff___closed__23);
v___x_53_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__4, &l_Lean_Parser_Attr_extIff___closed__4_once, _init_l_Lean_Parser_Attr_extIff___closed__4);
v___x_54_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__0, &l_Lean_Parser_Attr_extIff___closed__0_once, _init_l_Lean_Parser_Attr_extIff___closed__0);
v___x_55_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extIff(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__24, &l_Lean_Parser_Attr_extIff___closed__24_once, _init_l_Lean_Parser_Attr_extIff___closed__24);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("extFlat", 7, 7);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__1(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_58_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__0, &l_Lean_Parser_Attr_extFlat___closed__0_once, _init_l_Lean_Parser_Attr_extFlat___closed__0);
v___x_59_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__3, &l_Lean_Parser_Attr_extIff___closed__3_once, _init_l_Lean_Parser_Attr_extIff___closed__3);
v___x_60_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_61_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_62_ = l_Lean_Name_mkStr4(v___x_61_, v___x_60_, v___x_59_, v___x_58_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__2(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_mk_string_unchecked("flat", 4, 4);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__3(void){
_start:
{
uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = 0;
v___x_65_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__2, &l_Lean_Parser_Attr_extFlat___closed__2_once, _init_l_Lean_Parser_Attr_extFlat___closed__2);
v___x_66_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set_uint8(v___x_66_, sizeof(void*)*1, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__4(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__3, &l_Lean_Parser_Attr_extFlat___closed__3_once, _init_l_Lean_Parser_Attr_extFlat___closed__3);
v___x_68_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__10, &l_Lean_Parser_Attr_extIff___closed__10_once, _init_l_Lean_Parser_Attr_extIff___closed__10);
v___x_69_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_70_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
lean_ctor_set(v___x_70_, 2, v___x_67_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__5(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__15, &l_Lean_Parser_Attr_extIff___closed__15_once, _init_l_Lean_Parser_Attr_extIff___closed__15);
v___x_72_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__4, &l_Lean_Parser_Attr_extFlat___closed__4_once, _init_l_Lean_Parser_Attr_extFlat___closed__4);
v___x_73_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_74_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__6(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__18, &l_Lean_Parser_Attr_extIff___closed__18_once, _init_l_Lean_Parser_Attr_extIff___closed__18);
v___x_76_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__5, &l_Lean_Parser_Attr_extFlat___closed__5_once, _init_l_Lean_Parser_Attr_extFlat___closed__5);
v___x_77_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_78_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set(v___x_78_, 2, v___x_75_);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__7(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_79_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__21, &l_Lean_Parser_Attr_extIff___closed__21_once, _init_l_Lean_Parser_Attr_extIff___closed__21);
v___x_80_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__6, &l_Lean_Parser_Attr_extFlat___closed__6_once, _init_l_Lean_Parser_Attr_extFlat___closed__6);
v___x_81_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_82_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
lean_ctor_set(v___x_82_, 2, v___x_79_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__8(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__7, &l_Lean_Parser_Attr_extFlat___closed__7_once, _init_l_Lean_Parser_Attr_extFlat___closed__7);
v___x_84_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__6, &l_Lean_Parser_Attr_extIff___closed__6_once, _init_l_Lean_Parser_Attr_extIff___closed__6);
v___x_85_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_83_);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat___closed__9(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_86_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__8, &l_Lean_Parser_Attr_extFlat___closed__8_once, _init_l_Lean_Parser_Attr_extFlat___closed__8);
v___x_87_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__1, &l_Lean_Parser_Attr_extFlat___closed__1_once, _init_l_Lean_Parser_Attr_extFlat___closed__1);
v___x_88_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__0, &l_Lean_Parser_Attr_extFlat___closed__0_once, _init_l_Lean_Parser_Attr_extFlat___closed__0);
v___x_89_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
lean_ctor_set(v___x_89_, 2, v___x_86_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extFlat(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_Parser_Attr_extFlat___closed__9, &l_Lean_Parser_Attr_extFlat___closed__9_once, _init_l_Lean_Parser_Attr_extFlat___closed__9);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_mk_string_unchecked("ext", 3, 3);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_92_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__0, &l_Lean_Parser_Attr_ext___closed__0_once, _init_l_Lean_Parser_Attr_ext___closed__0);
v___x_93_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__3, &l_Lean_Parser_Attr_extIff___closed__3_once, _init_l_Lean_Parser_Attr_extIff___closed__3);
v___x_94_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_95_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_96_ = l_Lean_Name_mkStr4(v___x_95_, v___x_94_, v___x_93_, v___x_92_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__2(void){
_start:
{
uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = 0;
v___x_98_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__0, &l_Lean_Parser_Attr_ext___closed__0_once, _init_l_Lean_Parser_Attr_ext___closed__0);
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__3(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__4(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__3, &l_Lean_Parser_Attr_ext___closed__3_once, _init_l_Lean_Parser_Attr_ext___closed__3);
v___x_102_ = l_Lean_Name_mkStr1(v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__5(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("ppSpace", 7, 7);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__6(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__5, &l_Lean_Parser_Attr_ext___closed__5_once, _init_l_Lean_Parser_Attr_ext___closed__5);
v___x_105_ = l_Lean_Name_mkStr1(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__7(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__6, &l_Lean_Parser_Attr_ext___closed__6_once, _init_l_Lean_Parser_Attr_ext___closed__6);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__8(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_108_ = l_Lean_Parser_Attr_extIff;
v___x_109_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__7, &l_Lean_Parser_Attr_ext___closed__7_once, _init_l_Lean_Parser_Attr_ext___closed__7);
v___x_110_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_111_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___x_109_);
lean_ctor_set(v___x_111_, 2, v___x_108_);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__9(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_112_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__8, &l_Lean_Parser_Attr_ext___closed__8_once, _init_l_Lean_Parser_Attr_ext___closed__8);
v___x_113_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__4, &l_Lean_Parser_Attr_ext___closed__4_once, _init_l_Lean_Parser_Attr_ext___closed__4);
v___x_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__10(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_115_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__9, &l_Lean_Parser_Attr_ext___closed__9_once, _init_l_Lean_Parser_Attr_ext___closed__9);
v___x_116_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__2, &l_Lean_Parser_Attr_ext___closed__2_once, _init_l_Lean_Parser_Attr_ext___closed__2);
v___x_117_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_118_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_116_);
lean_ctor_set(v___x_118_, 2, v___x_115_);
return v___x_118_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__11(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_119_ = l_Lean_Parser_Attr_extFlat;
v___x_120_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__7, &l_Lean_Parser_Attr_ext___closed__7_once, _init_l_Lean_Parser_Attr_ext___closed__7);
v___x_121_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_122_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
lean_ctor_set(v___x_122_, 2, v___x_119_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__12(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__11, &l_Lean_Parser_Attr_ext___closed__11_once, _init_l_Lean_Parser_Attr_ext___closed__11);
v___x_124_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__4, &l_Lean_Parser_Attr_ext___closed__4_once, _init_l_Lean_Parser_Attr_ext___closed__4);
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__13(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_126_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__12, &l_Lean_Parser_Attr_ext___closed__12_once, _init_l_Lean_Parser_Attr_ext___closed__12);
v___x_127_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__10, &l_Lean_Parser_Attr_ext___closed__10_once, _init_l_Lean_Parser_Attr_ext___closed__10);
v___x_128_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_129_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_127_);
lean_ctor_set(v___x_129_, 2, v___x_126_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__14(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_mk_string_unchecked("prio", 4, 4);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__15(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__14, &l_Lean_Parser_Attr_ext___closed__14_once, _init_l_Lean_Parser_Attr_ext___closed__14);
v___x_132_ = l_Lean_Name_mkStr1(v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__16(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_unsigned_to_nat(0u);
v___x_134_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__15, &l_Lean_Parser_Attr_ext___closed__15_once, _init_l_Lean_Parser_Attr_ext___closed__15);
v___x_135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__17(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_136_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__16, &l_Lean_Parser_Attr_ext___closed__16_once, _init_l_Lean_Parser_Attr_ext___closed__16);
v___x_137_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__7, &l_Lean_Parser_Attr_ext___closed__7_once, _init_l_Lean_Parser_Attr_ext___closed__7);
v___x_138_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_139_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_137_);
lean_ctor_set(v___x_139_, 2, v___x_136_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__18(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__17, &l_Lean_Parser_Attr_ext___closed__17_once, _init_l_Lean_Parser_Attr_ext___closed__17);
v___x_141_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__4, &l_Lean_Parser_Attr_ext___closed__4_once, _init_l_Lean_Parser_Attr_ext___closed__4);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__19(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__18, &l_Lean_Parser_Attr_ext___closed__18_once, _init_l_Lean_Parser_Attr_ext___closed__18);
v___x_144_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__13, &l_Lean_Parser_Attr_ext___closed__13_once, _init_l_Lean_Parser_Attr_ext___closed__13);
v___x_145_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_146_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
lean_ctor_set(v___x_146_, 2, v___x_143_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext___closed__20(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__19, &l_Lean_Parser_Attr_ext___closed__19_once, _init_l_Lean_Parser_Attr_ext___closed__19);
v___x_148_ = lean_unsigned_to_nat(1022u);
v___x_149_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__1, &l_Lean_Parser_Attr_ext___closed__1_once, _init_l_Lean_Parser_Attr_ext___closed__1);
v___x_150_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
lean_ctor_set(v___x_150_, 2, v___x_147_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_ext(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__20, &l_Lean_Parser_Attr_ext___closed__20_once, _init_l_Lean_Parser_Attr_ext___closed__20);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__0(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__1(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__2(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("Ext", 3, 3);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__3(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_155_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__0, &l_Lean_Parser_Attr_ext___closed__0_once, _init_l_Lean_Parser_Attr_ext___closed__0);
v___x_156_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__2, &l_Lean_Elab_Tactic_Ext_ext___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__2);
v___x_157_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_158_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__0, &l_Lean_Elab_Tactic_Ext_ext___closed__0_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__0);
v___x_159_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_160_ = l_Lean_Name_mkStr5(v___x_159_, v___x_158_, v___x_157_, v___x_156_, v___x_155_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__4(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_mk_string_unchecked("many", 4, 4);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__5(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__4, &l_Lean_Elab_Tactic_Ext_ext___closed__4_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__4);
v___x_163_ = l_Lean_Name_mkStr1(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__6(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_mk_string_unchecked("colGt", 5, 5);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__7(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__6, &l_Lean_Elab_Tactic_Ext_ext___closed__6_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__6);
v___x_166_ = l_Lean_Name_mkStr1(v___x_165_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__8(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__7, &l_Lean_Elab_Tactic_Ext_ext___closed__7_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__7);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__9(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_169_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__7, &l_Lean_Parser_Attr_ext___closed__7_once, _init_l_Lean_Parser_Attr_ext___closed__7);
v___x_170_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__8, &l_Lean_Elab_Tactic_Ext_ext___closed__8_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__8);
v___x_171_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_172_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
lean_ctor_set(v___x_172_, 2, v___x_169_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__10(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_mk_string_unchecked("rintroPat", 9, 9);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__11(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__10, &l_Lean_Elab_Tactic_Ext_ext___closed__10_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__10);
v___x_175_ = l_Lean_Name_mkStr1(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__12(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__11, &l_Lean_Elab_Tactic_Ext_ext___closed__11_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__11);
v___x_178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__13(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__12, &l_Lean_Elab_Tactic_Ext_ext___closed__12_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__12);
v___x_180_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__9, &l_Lean_Elab_Tactic_Ext_ext___closed__9_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__9);
v___x_181_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_182_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v___x_180_);
lean_ctor_set(v___x_182_, 2, v___x_179_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__14(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__13, &l_Lean_Elab_Tactic_Ext_ext___closed__13_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__13);
v___x_184_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__5, &l_Lean_Elab_Tactic_Ext_ext___closed__5_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__5);
v___x_185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__15(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__14, &l_Lean_Elab_Tactic_Ext_ext___closed__14_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__14);
v___x_187_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__2, &l_Lean_Parser_Attr_ext___closed__2_once, _init_l_Lean_Parser_Attr_ext___closed__2);
v___x_188_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_189_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v___x_187_);
lean_ctor_set(v___x_189_, 2, v___x_186_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__16(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_190_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__17(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__16, &l_Lean_Elab_Tactic_Ext_ext___closed__16_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__16);
v___x_192_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__18(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__19(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__18, &l_Lean_Elab_Tactic_Ext_ext___closed__18_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__18);
v___x_195_ = l_Lean_Name_mkStr1(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__20(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__19, &l_Lean_Elab_Tactic_Ext_ext___closed__19_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__19);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__21(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__20, &l_Lean_Elab_Tactic_Ext_ext___closed__20_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__20);
v___x_199_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__17, &l_Lean_Elab_Tactic_Ext_ext___closed__17_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__17);
v___x_200_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_201_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___x_199_);
lean_ctor_set(v___x_201_, 2, v___x_198_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__22(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__21, &l_Lean_Elab_Tactic_Ext_ext___closed__21_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__21);
v___x_203_ = lean_obj_once(&l_Lean_Parser_Attr_ext___closed__4, &l_Lean_Parser_Attr_ext___closed__4_once, _init_l_Lean_Parser_Attr_ext___closed__4);
v___x_204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_202_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__23(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_205_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__22, &l_Lean_Elab_Tactic_Ext_ext___closed__22_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__22);
v___x_206_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__15, &l_Lean_Elab_Tactic_Ext_ext___closed__15_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__15);
v___x_207_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_208_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v___x_206_);
lean_ctor_set(v___x_208_, 2, v___x_205_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext___closed__24(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_209_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__23, &l_Lean_Elab_Tactic_Ext_ext___closed__23_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__23);
v___x_210_ = lean_unsigned_to_nat(1022u);
v___x_211_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__3, &l_Lean_Elab_Tactic_Ext_ext___closed__3_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__3);
v___x_212_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v___x_210_);
lean_ctor_set(v___x_212_, 2, v___x_209_);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_ext(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__24, &l_Lean_Elab_Tactic_Ext_ext___closed__24_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__24);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked("applyExtTheorem", 15, 15);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__0);
v___x_216_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__2, &l_Lean_Elab_Tactic_Ext_ext___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__2);
v___x_217_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_218_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__0, &l_Lean_Elab_Tactic_Ext_ext___closed__0_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__0);
v___x_219_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_220_ = l_Lean_Name_mkStr5(v___x_219_, v___x_218_, v___x_217_, v___x_216_, v___x_215_);
return v___x_220_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_mk_string_unchecked("apply_ext_theorem", 17, 17);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3(void){
_start:
{
uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = 0;
v___x_223_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2);
v___x_224_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_224_, 0, v___x_223_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*1, v___x_222_);
return v___x_224_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_225_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__3);
v___x_226_ = lean_unsigned_to_nat(1024u);
v___x_227_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1);
v___x_228_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v___x_226_);
lean_ctor_set(v___x_228_, 2, v___x_225_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__4);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_mk_string_unchecked("tacticExt1___", 13, 13);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_231_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__0);
v___x_232_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__2, &l_Lean_Elab_Tactic_Ext_ext___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__2);
v___x_233_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_234_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__0, &l_Lean_Elab_Tactic_Ext_ext___closed__0_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__0);
v___x_235_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_236_ = l_Lean_Name_mkStr5(v___x_235_, v___x_234_, v___x_233_, v___x_232_, v___x_231_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_mk_string_unchecked("ext1", 4, 4);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3(void){
_start:
{
uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = 0;
v___x_239_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__2);
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_238_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_241_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__14, &l_Lean_Elab_Tactic_Ext_ext___closed__14_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__14);
v___x_242_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__3);
v___x_243_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__8, &l_Lean_Parser_Attr_extIff___closed__8_once, _init_l_Lean_Parser_Attr_extIff___closed__8);
v___x_244_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___x_242_);
lean_ctor_set(v___x_244_, 2, v___x_241_);
return v___x_244_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_245_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__4);
v___x_246_ = lean_unsigned_to_nat(1022u);
v___x_247_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1);
v___x_248_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
lean_ctor_set(v___x_248_, 2, v___x_245_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext_tacticExt1______(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__5);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0(void){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = lean_mk_string_unchecked("tactic_<;>_", 11, 11);
return v___x_250_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_251_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__0);
v___x_252_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_253_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_254_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_255_ = l_Lean_Name_mkStr4(v___x_254_, v___x_253_, v___x_252_, v___x_251_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_mk_string_unchecked("<;>", 3, 3);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_mk_string_unchecked("rintro", 6, 6);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_258_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3);
v___x_259_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_260_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_261_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_262_ = l_Lean_Name_mkStr4(v___x_261_, v___x_260_, v___x_259_, v___x_258_);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__5);
v___x_265_ = l_Lean_Name_mkStr1(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7(void){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Array_mkArray0(lean_box(0));
return v___x_266_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_mk_string_unchecked("intros", 6, 6);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_268_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8);
v___x_269_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_ext___closed__1, &l_Lean_Elab_Tactic_Ext_ext___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_ext___closed__1);
v___x_270_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__2, &l_Lean_Parser_Attr_extIff___closed__2_once, _init_l_Lean_Parser_Attr_extIff___closed__2);
v___x_271_ = lean_obj_once(&l_Lean_Parser_Attr_extIff___closed__1, &l_Lean_Parser_Attr_extIff___closed__1_once, _init_l_Lean_Parser_Attr_extIff___closed__1);
v___x_272_ = l_Lean_Name_mkStr4(v___x_271_, v___x_270_, v___x_269_, v___x_268_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1(lean_object* v_x_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1, &l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1_once, _init_l_Lean_Elab_Tactic_Ext_tacticExt1_______00__closed__1);
lean_inc(v_x_273_);
v___x_277_ = l_Lean_Syntax_isOfKind(v_x_273_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v_x_273_);
v___x_278_ = lean_box(1);
v___x_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v_a_275_);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_xs_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = l_Lean_Syntax_getArg(v_x_273_, v___x_280_);
lean_dec(v_x_273_);
v_xs_282_ = l_Lean_Syntax_getArgs(v___x_281_);
lean_dec(v___x_281_);
v___x_283_ = lean_array_get_size(v_xs_282_);
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_nat_dec_eq(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v_ref_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_ref_286_ = lean_ctor_get(v_a_274_, 5);
v___x_287_ = l_Lean_SourceInfo_fromRef(v_ref_286_, v___x_285_);
v___x_288_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1);
v___x_289_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1);
v___x_290_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2);
lean_inc_n(v___x_287_, 7);
v___x_291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_287_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Syntax_node1(v___x_287_, v___x_289_, v___x_291_);
v___x_293_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2);
v___x_294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_287_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__3);
v___x_296_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__4);
v___x_297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_287_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
v___x_298_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6);
v___x_299_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7);
v___x_300_ = l_Array_append___redArg(v___x_299_, v_xs_282_);
lean_dec_ref(v_xs_282_);
v___x_301_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_301_, 0, v___x_287_);
lean_ctor_set(v___x_301_, 1, v___x_298_);
lean_ctor_set(v___x_301_, 2, v___x_300_);
v___x_302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_302_, 0, v___x_287_);
lean_ctor_set(v___x_302_, 1, v___x_298_);
lean_ctor_set(v___x_302_, 2, v___x_299_);
v___x_303_ = l_Lean_Syntax_node3(v___x_287_, v___x_296_, v___x_297_, v___x_301_, v___x_302_);
v___x_304_ = l_Lean_Syntax_node3(v___x_287_, v___x_288_, v___x_292_, v___x_294_, v___x_303_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_a_275_);
return v___x_305_;
}
else
{
lean_object* v_ref_306_; uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec_ref(v_xs_282_);
v_ref_306_ = lean_ctor_get(v_a_274_, 5);
v___x_307_ = 0;
v___x_308_ = l_Lean_SourceInfo_fromRef(v_ref_306_, v___x_307_);
v___x_309_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__1);
v___x_310_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__1);
v___x_311_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2, &l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2_once, _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem___closed__2);
lean_inc_n(v___x_308_, 6);
v___x_312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_308_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = l_Lean_Syntax_node1(v___x_308_, v___x_310_, v___x_312_);
v___x_314_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__2);
v___x_315_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_308_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__8);
v___x_317_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__9);
v___x_318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_308_);
lean_ctor_set(v___x_318_, 1, v___x_316_);
v___x_319_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__6);
v___x_320_ = lean_obj_once(&l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7, &l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7_once, _init_l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___closed__7);
v___x_321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_321_, 0, v___x_308_);
lean_ctor_set(v___x_321_, 1, v___x_319_);
lean_ctor_set(v___x_321_, 2, v___x_320_);
v___x_322_ = l_Lean_Syntax_node2(v___x_308_, v___x_317_, v___x_318_, v___x_321_);
v___x_323_ = l_Lean_Syntax_node3(v___x_308_, v___x_309_, v___x_313_, v___x_315_, v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v_a_275_);
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1___boxed(lean_object* v_x_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_Elab_Tactic_Ext___aux__Init__Ext______macroRules__Lean__Elab__Tactic__Ext__tacticExt1________1(v_x_325_, v_a_326_, v_a_327_);
lean_dec_ref(v_a_326_);
return v_res_328_;
}
}
lean_object* runtime_initialize_Init_RCases(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Ext(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Ext(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_Attr_extIff = _init_l_Lean_Parser_Attr_extIff();
lean_mark_persistent(l_Lean_Parser_Attr_extIff);
l_Lean_Parser_Attr_extFlat = _init_l_Lean_Parser_Attr_extFlat();
lean_mark_persistent(l_Lean_Parser_Attr_extFlat);
l_Lean_Parser_Attr_ext = _init_l_Lean_Parser_Attr_ext();
lean_mark_persistent(l_Lean_Parser_Attr_ext);
l_Lean_Elab_Tactic_Ext_ext = _init_l_Lean_Elab_Tactic_Ext_ext();
lean_mark_persistent(l_Lean_Elab_Tactic_Ext_ext);
l_Lean_Elab_Tactic_Ext_applyExtTheorem = _init_l_Lean_Elab_Tactic_Ext_applyExtTheorem();
lean_mark_persistent(l_Lean_Elab_Tactic_Ext_applyExtTheorem);
l_Lean_Elab_Tactic_Ext_tacticExt1______ = _init_l_Lean_Elab_Tactic_Ext_tacticExt1______();
lean_mark_persistent(l_Lean_Elab_Tactic_Ext_tacticExt1______);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_RCases(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Ext(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_RCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Ext(builtin);
}
#ifdef __cplusplus
}
#endif
