// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Filter
// Imports: public import Lean.Elab.Tactic.Grind.Basic public import Lean.Meta.Tactic.Grind.Filter
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_elabFilter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_elabFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0(lean_object* v_n_31_, uint8_t v___x_32_, uint8_t v___x_33_, lean_object* v_x_34_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = lean_nat_dec_eq(v_x_34_, v_n_31_);
if (v___x_35_ == 0)
{
return v___x_32_;
}
else
{
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0___boxed(lean_object* v_n_36_, lean_object* v___x_37_, lean_object* v___x_38_, lean_object* v_x_39_){
_start:
{
uint8_t v___x_19757__boxed_40_; uint8_t v___x_19758__boxed_41_; uint8_t v_res_42_; lean_object* v_r_43_; 
v___x_19757__boxed_40_ = lean_unbox(v___x_37_);
v___x_19758__boxed_41_ = lean_unbox(v___x_38_);
v_res_42_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0(v_n_36_, v___x_19757__boxed_40_, v___x_19758__boxed_41_, v_x_39_);
lean_dec(v_x_39_);
lean_dec(v_n_36_);
v_r_43_ = lean_box(v_res_42_);
return v_r_43_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1(lean_object* v_n_44_, lean_object* v_x_45_){
_start:
{
uint8_t v___x_46_; 
v___x_46_ = lean_nat_dec_lt(v_x_45_, v_n_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1___boxed(lean_object* v_n_47_, lean_object* v_x_48_){
_start:
{
uint8_t v_res_49_; lean_object* v_r_50_; 
v_res_49_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1(v_n_47_, v_x_48_);
lean_dec(v_x_48_);
lean_dec(v_n_47_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2(lean_object* v_n_51_, lean_object* v_x_52_){
_start:
{
uint8_t v___x_53_; 
v___x_53_ = lean_nat_dec_le(v_x_52_, v_n_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2___boxed(lean_object* v_n_54_, lean_object* v_x_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2(v_n_54_, v_x_55_);
lean_dec(v_x_55_);
lean_dec(v_n_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4(lean_object* v_n_58_, lean_object* v_x_59_){
_start:
{
uint8_t v___x_60_; 
v___x_60_ = lean_nat_dec_le(v_n_58_, v_x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4___boxed(lean_object* v_n_61_, lean_object* v_x_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4(v_n_61_, v_x_62_);
lean_dec(v_x_62_);
lean_dec(v_n_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5(lean_object* v_n_65_, lean_object* v_x_66_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = lean_nat_dec_lt(v_n_65_, v_x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5___boxed(lean_object* v_n_68_, lean_object* v_x_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5(v_n_68_, v_x_69_);
lean_dec(v_x_69_);
lean_dec(v_n_68_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3(lean_object* v_n_72_, lean_object* v_x_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_nat_dec_eq(v_x_73_, v_n_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3___boxed(lean_object* v_n_75_, lean_object* v_x_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3(v_n_75_, v_x_76_);
lean_dec(v_x_76_);
lean_dec(v_n_75_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2(lean_object* v_msgData_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; lean_object* v_env_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v_mctx_89_; lean_object* v_lctx_90_; lean_object* v_options_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_85_ = lean_st_ref_get(v___y_83_);
v_env_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc_ref(v_env_86_);
lean_dec(v___x_85_);
v___x_87_ = lean_st_ref_get(v___y_83_);
lean_dec(v___x_87_);
v___x_88_ = lean_st_ref_get(v___y_81_);
v_mctx_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc_ref(v_mctx_89_);
lean_dec(v___x_88_);
v_lctx_90_ = lean_ctor_get(v___y_80_, 2);
v_options_91_ = lean_ctor_get(v___y_82_, 2);
lean_inc_ref(v_options_91_);
lean_inc_ref(v_lctx_90_);
v___x_92_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_92_, 0, v_env_86_);
lean_ctor_set(v___x_92_, 1, v_mctx_89_);
lean_ctor_set(v___x_92_, 2, v_lctx_90_);
lean_ctor_set(v___x_92_, 3, v_options_91_);
v___x_93_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_msgData_79_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2(v_msgData_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg(lean_object* v_msg_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_ref_108_; lean_object* v___x_109_; lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_118_; 
v_ref_108_ = lean_ctor_get(v___y_105_, 5);
v___x_109_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1_spec__2(v_msg_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
v_a_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_118_ == 0)
{
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_118_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
lean_inc(v_ref_108_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v_ref_108_);
lean_ctor_set(v___x_114_, 1, v_a_110_);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 1);
lean_ctor_set(v___x_112_, 0, v___x_114_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg___boxed(lean_object* v_msg_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg(v_msg_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg(lean_object* v_ref_126_, lean_object* v_msg_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_fileName_137_; lean_object* v_fileMap_138_; lean_object* v_options_139_; lean_object* v_currRecDepth_140_; lean_object* v_maxRecDepth_141_; lean_object* v_ref_142_; lean_object* v_currNamespace_143_; lean_object* v_openDecls_144_; lean_object* v_initHeartbeats_145_; lean_object* v_maxHeartbeats_146_; lean_object* v_quotContext_147_; lean_object* v_currMacroScope_148_; uint8_t v_diag_149_; lean_object* v_cancelTk_x3f_150_; uint8_t v_suppressElabErrors_151_; lean_object* v_inheritedTraceOptions_152_; lean_object* v_ref_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_fileName_137_ = lean_ctor_get(v___y_134_, 0);
v_fileMap_138_ = lean_ctor_get(v___y_134_, 1);
v_options_139_ = lean_ctor_get(v___y_134_, 2);
v_currRecDepth_140_ = lean_ctor_get(v___y_134_, 3);
v_maxRecDepth_141_ = lean_ctor_get(v___y_134_, 4);
v_ref_142_ = lean_ctor_get(v___y_134_, 5);
v_currNamespace_143_ = lean_ctor_get(v___y_134_, 6);
v_openDecls_144_ = lean_ctor_get(v___y_134_, 7);
v_initHeartbeats_145_ = lean_ctor_get(v___y_134_, 8);
v_maxHeartbeats_146_ = lean_ctor_get(v___y_134_, 9);
v_quotContext_147_ = lean_ctor_get(v___y_134_, 10);
v_currMacroScope_148_ = lean_ctor_get(v___y_134_, 11);
v_diag_149_ = lean_ctor_get_uint8(v___y_134_, sizeof(void*)*14);
v_cancelTk_x3f_150_ = lean_ctor_get(v___y_134_, 12);
v_suppressElabErrors_151_ = lean_ctor_get_uint8(v___y_134_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_152_ = lean_ctor_get(v___y_134_, 13);
v_ref_153_ = l_Lean_replaceRef(v_ref_126_, v_ref_142_);
lean_inc_ref(v_inheritedTraceOptions_152_);
lean_inc(v_cancelTk_x3f_150_);
lean_inc(v_currMacroScope_148_);
lean_inc(v_quotContext_147_);
lean_inc(v_maxHeartbeats_146_);
lean_inc(v_initHeartbeats_145_);
lean_inc(v_openDecls_144_);
lean_inc(v_currNamespace_143_);
lean_inc(v_maxRecDepth_141_);
lean_inc(v_currRecDepth_140_);
lean_inc_ref(v_options_139_);
lean_inc_ref(v_fileMap_138_);
lean_inc_ref(v_fileName_137_);
v___x_154_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_154_, 0, v_fileName_137_);
lean_ctor_set(v___x_154_, 1, v_fileMap_138_);
lean_ctor_set(v___x_154_, 2, v_options_139_);
lean_ctor_set(v___x_154_, 3, v_currRecDepth_140_);
lean_ctor_set(v___x_154_, 4, v_maxRecDepth_141_);
lean_ctor_set(v___x_154_, 5, v_ref_153_);
lean_ctor_set(v___x_154_, 6, v_currNamespace_143_);
lean_ctor_set(v___x_154_, 7, v_openDecls_144_);
lean_ctor_set(v___x_154_, 8, v_initHeartbeats_145_);
lean_ctor_set(v___x_154_, 9, v_maxHeartbeats_146_);
lean_ctor_set(v___x_154_, 10, v_quotContext_147_);
lean_ctor_set(v___x_154_, 11, v_currMacroScope_148_);
lean_ctor_set(v___x_154_, 12, v_cancelTk_x3f_150_);
lean_ctor_set(v___x_154_, 13, v_inheritedTraceOptions_152_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*14, v_diag_149_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*14 + 1, v_suppressElabErrors_151_);
v___x_155_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg(v_msg_127_, v___y_132_, v___y_133_, v___x_154_, v___y_135_);
lean_dec_ref(v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg___boxed(lean_object* v_ref_156_, lean_object* v_msg_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg(v_ref_156_, v_msg_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v_ref_156_);
return v_res_167_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0(void){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_168_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_169_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2(void){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_170_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_171_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_mk_string_unchecked("grind_filter_", 13, 13);
return v___x_172_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_173_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__4);
v___x_174_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_175_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_176_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_177_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_178_ = l_Lean_Name_mkStr5(v___x_177_, v___x_176_, v___x_175_, v___x_174_, v___x_173_);
return v___x_178_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_mk_string_unchecked("grind_filter_&&_", 16, 16);
return v___x_179_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_180_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__6);
v___x_181_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_182_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_183_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_184_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_185_ = l_Lean_Name_mkStr5(v___x_184_, v___x_183_, v___x_182_, v___x_181_, v___x_180_);
return v___x_185_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_mk_string_unchecked("grind_filter_||_", 16, 16);
return v___x_186_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_187_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__8);
v___x_188_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_189_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_190_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_191_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_192_ = l_Lean_Name_mkStr5(v___x_191_, v___x_190_, v___x_189_, v___x_188_, v___x_187_);
return v___x_192_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_mk_string_unchecked("grind_filter!_", 14, 14);
return v___x_193_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_194_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__10);
v___x_195_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_196_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_197_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_198_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_199_ = l_Lean_Name_mkStr5(v___x_198_, v___x_197_, v___x_196_, v___x_195_, v___x_194_);
return v___x_199_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("grind_filter(_)", 15, 15);
return v___x_200_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_201_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__12);
v___x_202_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_203_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_204_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_205_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_206_ = l_Lean_Name_mkStr5(v___x_205_, v___x_204_, v___x_203_, v___x_202_, v___x_201_);
return v___x_206_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_mk_string_unchecked("grind_filterGen=_", 17, 17);
return v___x_207_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_208_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__14);
v___x_209_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_210_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_211_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_212_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_213_ = l_Lean_Name_mkStr5(v___x_212_, v___x_211_, v___x_210_, v___x_209_, v___x_208_);
return v___x_213_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked("grind_filterGen>_", 17, 17);
return v___x_214_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_215_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__16);
v___x_216_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_217_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_218_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_219_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_220_ = l_Lean_Name_mkStr5(v___x_219_, v___x_218_, v___x_217_, v___x_216_, v___x_215_);
return v___x_220_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18(void){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_mk_string_unchecked("grind_filterGen≥_", 19, 17);
return v___x_221_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_222_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__18);
v___x_223_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_224_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_225_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_226_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_227_ = l_Lean_Name_mkStr5(v___x_226_, v___x_225_, v___x_224_, v___x_223_, v___x_222_);
return v___x_227_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_mk_string_unchecked("grind_filterGen>=_", 18, 18);
return v___x_228_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_229_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__20);
v___x_230_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_231_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_232_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_233_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_234_ = l_Lean_Name_mkStr5(v___x_233_, v___x_232_, v___x_231_, v___x_230_, v___x_229_);
return v___x_234_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_mk_string_unchecked("grind_filterGen≤_", 19, 17);
return v___x_235_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_236_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__22);
v___x_237_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_238_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_239_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_240_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_241_ = l_Lean_Name_mkStr5(v___x_240_, v___x_239_, v___x_238_, v___x_237_, v___x_236_);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_mk_string_unchecked("grind_filterGen<=_", 18, 18);
return v___x_242_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_243_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__24);
v___x_244_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_245_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_246_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_247_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_248_ = l_Lean_Name_mkStr5(v___x_247_, v___x_246_, v___x_245_, v___x_244_, v___x_243_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26(void){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_mk_string_unchecked("grind_filterGen<_", 17, 17);
return v___x_249_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_250_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__26);
v___x_251_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_252_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_253_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_254_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_255_ = l_Lean_Name_mkStr5(v___x_254_, v___x_253_, v___x_252_, v___x_251_, v___x_250_);
return v___x_255_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_mk_string_unchecked("grind_filterGen!=_", 18, 18);
return v___x_256_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_257_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__28);
v___x_258_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__3);
v___x_259_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__2);
v___x_260_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__1);
v___x_261_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__0);
v___x_262_ = l_Lean_Name_mkStr5(v___x_261_, v___x_260_, v___x_259_, v___x_258_, v___x_257_);
return v___x_262_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_mk_string_unchecked("num", 3, 3);
return v___x_263_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__30);
v___x_265_ = l_Lean_Name_mkStr1(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32(void){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_266_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__32);
v___x_268_ = l_Lean_Name_mkStr1(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_269_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_mk_string_unchecked("invalid identifier", 18, 18);
return v___x_270_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__35);
v___x_272_ = l_Lean_stringToMessageData(v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(lean_object* v_filter_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__5);
lean_inc(v_filter_273_);
v___x_284_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__7);
lean_inc(v_filter_273_);
v___x_286_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__9);
lean_inc(v_filter_273_);
v___x_288_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__11);
lean_inc(v_filter_273_);
v___x_290_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__13);
lean_inc(v_filter_273_);
v___x_292_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__15);
lean_inc(v_filter_273_);
v___x_294_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__17);
lean_inc(v_filter_273_);
v___x_296_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__19);
lean_inc(v_filter_273_);
v___x_298_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__21);
lean_inc(v_filter_273_);
v___x_300_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__23);
lean_inc(v_filter_273_);
v___x_302_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__25);
lean_inc(v_filter_273_);
v___x_304_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__27);
lean_inc(v_filter_273_);
v___x_306_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__29);
lean_inc(v_filter_273_);
v___x_308_ = l_Lean_Syntax_isOfKind(v_filter_273_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
lean_dec(v_filter_273_);
v___x_309_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_309_;
}
else
{
lean_object* v___x_310_; lean_object* v_n_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_310_ = lean_unsigned_to_nat(2u);
v_n_311_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_310_);
lean_dec(v_filter_273_);
v___x_312_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_311_);
v___x_313_ = l_Lean_Syntax_isOfKind(v_n_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; 
lean_dec(v_n_311_);
v___x_314_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_314_;
}
else
{
lean_object* v_n_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___f_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_n_315_ = l_Lean_TSyntax_getNat(v_n_311_);
lean_dec(v_n_311_);
v___x_316_ = lean_box(v___x_313_);
v___x_317_ = lean_box(v___x_306_);
v___f_318_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__0___boxed), 4, 3);
lean_closure_set(v___f_318_, 0, v_n_315_);
lean_closure_set(v___f_318_, 1, v___x_316_);
lean_closure_set(v___f_318_, 2, v___x_317_);
v___x_319_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_319_, 0, v___f_318_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
}
else
{
lean_object* v___x_321_; lean_object* v_n_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_321_ = lean_unsigned_to_nat(2u);
v_n_322_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_321_);
lean_dec(v_filter_273_);
v___x_323_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_322_);
v___x_324_ = l_Lean_Syntax_isOfKind(v_n_322_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
lean_dec(v_n_322_);
v___x_325_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_325_;
}
else
{
lean_object* v_n_326_; lean_object* v___f_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_n_326_ = l_Lean_TSyntax_getNat(v_n_322_);
lean_dec(v_n_322_);
v___f_327_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__1___boxed), 2, 1);
lean_closure_set(v___f_327_, 0, v_n_326_);
v___x_328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_328_, 0, v___f_327_);
v___x_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
return v___x_329_;
}
}
}
else
{
lean_object* v___x_330_; lean_object* v_n_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_330_ = lean_unsigned_to_nat(2u);
v_n_331_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_330_);
lean_dec(v_filter_273_);
v___x_332_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_331_);
v___x_333_ = l_Lean_Syntax_isOfKind(v_n_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_n_331_);
v___x_334_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_334_;
}
else
{
lean_object* v_n_335_; lean_object* v___f_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_n_335_ = l_Lean_TSyntax_getNat(v_n_331_);
lean_dec(v_n_331_);
v___f_336_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2___boxed), 2, 1);
lean_closure_set(v___f_336_, 0, v_n_335_);
v___x_337_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_337_, 0, v___f_336_);
v___x_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
else
{
lean_object* v___x_339_; lean_object* v_n_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_339_ = lean_unsigned_to_nat(2u);
v_n_340_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_339_);
lean_dec(v_filter_273_);
v___x_341_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_340_);
v___x_342_ = l_Lean_Syntax_isOfKind(v_n_340_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_dec(v_n_340_);
v___x_343_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_343_;
}
else
{
lean_object* v_n_344_; lean_object* v___f_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_n_344_ = l_Lean_TSyntax_getNat(v_n_340_);
lean_dec(v_n_340_);
v___f_345_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__2___boxed), 2, 1);
lean_closure_set(v___f_345_, 0, v_n_344_);
v___x_346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_346_, 0, v___f_345_);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
}
else
{
lean_object* v___x_348_; lean_object* v_n_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_348_ = lean_unsigned_to_nat(2u);
v_n_349_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_348_);
lean_dec(v_filter_273_);
v___x_350_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_349_);
v___x_351_ = l_Lean_Syntax_isOfKind(v_n_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
lean_dec(v_n_349_);
v___x_352_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_352_;
}
else
{
lean_object* v_n_353_; lean_object* v___f_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_n_353_ = l_Lean_TSyntax_getNat(v_n_349_);
lean_dec(v_n_349_);
v___f_354_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4___boxed), 2, 1);
lean_closure_set(v___f_354_, 0, v_n_353_);
v___x_355_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_355_, 0, v___f_354_);
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
}
else
{
lean_object* v___x_357_; lean_object* v_n_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_357_ = lean_unsigned_to_nat(2u);
v_n_358_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_357_);
lean_dec(v_filter_273_);
v___x_359_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_358_);
v___x_360_ = l_Lean_Syntax_isOfKind(v_n_358_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; 
lean_dec(v_n_358_);
v___x_361_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_361_;
}
else
{
lean_object* v_n_362_; lean_object* v___f_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_n_362_ = l_Lean_TSyntax_getNat(v_n_358_);
lean_dec(v_n_358_);
v___f_363_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__4___boxed), 2, 1);
lean_closure_set(v___f_363_, 0, v_n_362_);
v___x_364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_364_, 0, v___f_363_);
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
}
}
else
{
lean_object* v___x_366_; lean_object* v_n_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_366_ = lean_unsigned_to_nat(2u);
v_n_367_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_366_);
lean_dec(v_filter_273_);
v___x_368_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_367_);
v___x_369_ = l_Lean_Syntax_isOfKind(v_n_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; 
lean_dec(v_n_367_);
v___x_370_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_370_;
}
else
{
lean_object* v_n_371_; lean_object* v___f_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v_n_371_ = l_Lean_TSyntax_getNat(v_n_367_);
lean_dec(v_n_367_);
v___f_372_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__5___boxed), 2, 1);
lean_closure_set(v___f_372_, 0, v_n_371_);
v___x_373_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_373_, 0, v___f_372_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
}
else
{
lean_object* v___x_375_; lean_object* v_n_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(2u);
v_n_376_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_375_);
lean_dec(v_filter_273_);
v___x_377_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__31);
lean_inc(v_n_376_);
v___x_378_ = l_Lean_Syntax_isOfKind(v_n_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec(v_n_376_);
v___x_379_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_379_;
}
else
{
lean_object* v_n_380_; lean_object* v___f_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_n_380_ = l_Lean_TSyntax_getNat(v_n_376_);
lean_dec(v_n_376_);
v___f_381_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___lam__3___boxed), 2, 1);
lean_closure_set(v___f_381_, 0, v_n_380_);
v___x_382_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_382_, 0, v___f_381_);
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
}
else
{
lean_object* v___x_384_; lean_object* v_a_385_; 
v___x_384_ = lean_unsigned_to_nat(1u);
v_a_385_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_384_);
lean_dec(v_filter_273_);
v_filter_273_ = v_a_385_;
goto _start;
}
}
else
{
lean_object* v___x_387_; lean_object* v_a_388_; lean_object* v___x_389_; 
v___x_387_ = lean_unsigned_to_nat(1u);
v_a_388_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_387_);
lean_dec(v_filter_273_);
v___x_389_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_a_388_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_398_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_398_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_394_, 0, v_a_390_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_394_);
v___x_396_ = v___x_392_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
return v___x_389_;
}
}
}
else
{
lean_object* v___x_399_; lean_object* v_a_400_; lean_object* v___x_401_; 
v___x_399_ = lean_unsigned_to_nat(0u);
v_a_400_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_399_);
v___x_401_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_a_400_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_403_; lean_object* v_b_404_; lean_object* v___x_405_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref(v___x_401_);
v___x_403_ = lean_unsigned_to_nat(2u);
v_b_404_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_403_);
lean_dec(v_filter_273_);
v___x_405_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_b_404_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_410_, 0, v_a_402_);
lean_ctor_set(v___x_410_, 1, v_a_406_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v___x_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
lean_dec(v_a_402_);
return v___x_405_;
}
}
else
{
lean_dec(v_filter_273_);
return v___x_401_;
}
}
}
else
{
lean_object* v___x_415_; lean_object* v_a_416_; lean_object* v___x_417_; 
v___x_415_ = lean_unsigned_to_nat(0u);
v_a_416_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_415_);
v___x_417_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_a_416_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v_b_420_; lean_object* v___x_421_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref(v___x_417_);
v___x_419_ = lean_unsigned_to_nat(2u);
v_b_420_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_419_);
lean_dec(v_filter_273_);
v___x_421_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_b_420_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_430_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_430_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_426_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_426_, 0, v_a_418_);
lean_ctor_set(v___x_426_, 1, v_a_422_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_426_);
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
else
{
lean_dec(v_a_418_);
return v___x_421_;
}
}
else
{
lean_dec(v_filter_273_);
return v___x_417_;
}
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = l_Lean_Syntax_getArg(v_filter_273_, v___x_431_);
lean_dec(v_filter_273_);
v___x_433_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__33);
lean_inc(v___x_432_);
v___x_434_ = l_Lean_Syntax_isOfKind(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; 
lean_dec(v___x_432_);
v___x_435_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__0___redArg();
return v___x_435_;
}
else
{
lean_object* v___x_436_; uint8_t v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__34);
v___x_437_ = 0;
lean_inc(v___x_432_);
v___x_438_ = l_Lean_Elab_Term_resolveId_x3f(v___x_432_, v___x_436_, v___x_437_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_473_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_473_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_473_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_473_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___y_449_; lean_object* v___y_450_; lean_object* v___y_451_; 
if (lean_obj_tag(v_a_439_) == 1)
{
lean_object* v_val_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_472_; 
v_val_454_ = lean_ctor_get(v_a_439_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_a_439_);
if (v_isSharedCheck_472_ == 0)
{
v___x_456_ = v_a_439_;
v_isShared_457_ = v_isSharedCheck_472_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_val_454_);
lean_dec(v_a_439_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_472_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
switch(lean_obj_tag(v_val_454_))
{
case 4:
{
lean_object* v_declName_458_; lean_object* v___x_460_; 
lean_dec(v___x_432_);
v_declName_458_ = lean_ctor_get(v_val_454_, 0);
lean_inc(v_declName_458_);
lean_dec_ref(v_val_454_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v_declName_458_);
v___x_460_ = v___x_456_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_declName_458_);
v___x_460_ = v_reuseFailAlloc_464_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_462_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_460_);
v___x_462_ = v___x_441_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
case 1:
{
lean_object* v_fvarId_465_; lean_object* v___x_467_; 
lean_dec(v___x_432_);
v_fvarId_465_ = lean_ctor_get(v_val_454_, 0);
lean_inc(v_fvarId_465_);
lean_dec_ref(v_val_454_);
if (v_isShared_457_ == 0)
{
lean_ctor_set_tag(v___x_456_, 2);
lean_ctor_set(v___x_456_, 0, v_fvarId_465_);
v___x_467_ = v___x_456_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_fvarId_465_);
v___x_467_ = v_reuseFailAlloc_471_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_469_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_467_);
v___x_469_ = v___x_441_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
default: 
{
lean_del_object(v___x_456_);
lean_dec(v_val_454_);
lean_del_object(v___x_441_);
v___y_444_ = v_a_274_;
v___y_445_ = v_a_275_;
v___y_446_ = v_a_276_;
v___y_447_ = v_a_277_;
v___y_448_ = v_a_278_;
v___y_449_ = v_a_279_;
v___y_450_ = v_a_280_;
v___y_451_ = v_a_281_;
goto v___jp_443_;
}
}
}
}
else
{
lean_del_object(v___x_441_);
lean_dec(v_a_439_);
v___y_444_ = v_a_274_;
v___y_445_ = v_a_275_;
v___y_446_ = v_a_276_;
v___y_447_ = v_a_277_;
v___y_448_ = v_a_278_;
v___y_449_ = v_a_279_;
v___y_450_ = v_a_280_;
v___y_451_ = v_a_281_;
goto v___jp_443_;
}
v___jp_443_:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36, &l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36_once, _init_l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___closed__36);
v___x_453_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg(v___x_432_, v___x_452_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___x_432_);
return v___x_453_;
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec(v___x_432_);
v_a_474_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_438_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_438_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go___boxed(lean_object* v_filter_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_filter_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_);
lean_dec(v_a_490_);
lean_dec_ref(v_a_489_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1(lean_object* v_00_u03b1_493_, lean_object* v_ref_494_, lean_object* v_msg_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___redArg(v_ref_494_, v_msg_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1___boxed(lean_object* v_00_u03b1_506_, lean_object* v_ref_507_, lean_object* v_msg_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1(v_00_u03b1_506_, v_ref_507_, v_msg_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v_ref_507_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1(lean_object* v_00_u03b1_519_, lean_object* v_msg_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___redArg(v_msg_520_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1___boxed(lean_object* v_00_u03b1_531_, lean_object* v_msg_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go_spec__1_spec__1(v_00_u03b1_531_, v_msg_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_elabFilter(lean_object* v_filter_x3f_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_filter_x3f_543_) == 1)
{
lean_object* v_val_553_; lean_object* v___x_554_; 
v_val_553_ = lean_ctor_get(v_filter_x3f_543_, 0);
lean_inc(v_val_553_);
lean_dec_ref(v_filter_x3f_543_);
v___x_554_ = l___private_Lean_Elab_Tactic_Grind_Filter_0__Lean_Elab_Tactic_Grind_elabFilter_go(v_val_553_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_);
return v___x_554_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v_filter_x3f_543_);
v___x_555_ = lean_box(0);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_elabFilter___boxed(lean_object* v_filter_x3f_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
return v_res_567_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Filter(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Filter(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
}
#ifdef __cplusplus
}
#endif
