// Lean compiler output
// Module: Init.Guard
// Imports: public import Init.Conv
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_colonR___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__0;
static lean_once_cell_t l_Lean_Parser_colonR___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__1;
static lean_once_cell_t l_Lean_Parser_colonR___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__2;
static lean_once_cell_t l_Lean_Parser_colonR___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__3;
static lean_once_cell_t l_Lean_Parser_colonR___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__4;
static lean_once_cell_t l_Lean_Parser_colonR___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__5;
static lean_once_cell_t l_Lean_Parser_colonR___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonR___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_colonR;
static lean_once_cell_t l_Lean_Parser_colonD___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonD___closed__0;
static lean_once_cell_t l_Lean_Parser_colonD___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonD___closed__1;
static lean_once_cell_t l_Lean_Parser_colonD___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonD___closed__2;
static lean_once_cell_t l_Lean_Parser_colonD___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonD___closed__3;
static lean_once_cell_t l_Lean_Parser_colonD___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonD___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonD;
static lean_once_cell_t l_Lean_Parser_colonS___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonS___closed__0;
static lean_once_cell_t l_Lean_Parser_colonS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonS___closed__1;
static lean_once_cell_t l_Lean_Parser_colonS___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonS___closed__2;
static lean_once_cell_t l_Lean_Parser_colonS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonS___closed__3;
static lean_once_cell_t l_Lean_Parser_colonS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonS___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonS;
static lean_once_cell_t l_Lean_Parser_colonA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonA___closed__0;
static lean_once_cell_t l_Lean_Parser_colonA___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonA___closed__1;
static lean_once_cell_t l_Lean_Parser_colonA___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonA___closed__2;
static lean_once_cell_t l_Lean_Parser_colonA___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonA___closed__3;
static lean_once_cell_t l_Lean_Parser_colonA___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonA___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonA;
static lean_once_cell_t l_Lean_Parser_colon___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__0;
static lean_once_cell_t l_Lean_Parser_colon___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__1;
static lean_once_cell_t l_Lean_Parser_colon___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__2;
static lean_once_cell_t l_Lean_Parser_colon___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__3;
static lean_once_cell_t l_Lean_Parser_colon___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__4;
static lean_once_cell_t l_Lean_Parser_colon___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__5;
static lean_once_cell_t l_Lean_Parser_colon___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__6;
static lean_once_cell_t l_Lean_Parser_colon___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colon___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_colon;
static lean_once_cell_t l_Lean_Parser_colonEqR___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqR___closed__0;
static lean_once_cell_t l_Lean_Parser_colonEqR___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqR___closed__1;
static lean_once_cell_t l_Lean_Parser_colonEqR___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqR___closed__2;
static lean_once_cell_t l_Lean_Parser_colonEqR___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqR___closed__3;
static lean_once_cell_t l_Lean_Parser_colonEqR___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqR___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonEqR;
static lean_once_cell_t l_Lean_Parser_colonEqD___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqD___closed__0;
static lean_once_cell_t l_Lean_Parser_colonEqD___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqD___closed__1;
static lean_once_cell_t l_Lean_Parser_colonEqD___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqD___closed__2;
static lean_once_cell_t l_Lean_Parser_colonEqD___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqD___closed__3;
static lean_once_cell_t l_Lean_Parser_colonEqD___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqD___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonEqD;
static lean_once_cell_t l_Lean_Parser_colonEqS___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqS___closed__0;
static lean_once_cell_t l_Lean_Parser_colonEqS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqS___closed__1;
static lean_once_cell_t l_Lean_Parser_colonEqS___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqS___closed__2;
static lean_once_cell_t l_Lean_Parser_colonEqS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqS___closed__3;
static lean_once_cell_t l_Lean_Parser_colonEqS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqS___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonEqS;
static lean_once_cell_t l_Lean_Parser_colonEqA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqA___closed__0;
static lean_once_cell_t l_Lean_Parser_colonEqA___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqA___closed__1;
static lean_once_cell_t l_Lean_Parser_colonEqA___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqA___closed__2;
static lean_once_cell_t l_Lean_Parser_colonEqA___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqA___closed__3;
static lean_once_cell_t l_Lean_Parser_colonEqA___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEqA___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_colonEqA;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__0;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__1;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__2;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__3;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__4;
static lean_once_cell_t l_Lean_Parser_colonEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_colonEq___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_colonEq;
static lean_once_cell_t l_Lean_Parser_equalR___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalR___closed__0;
static lean_once_cell_t l_Lean_Parser_equalR___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalR___closed__1;
static lean_once_cell_t l_Lean_Parser_equalR___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalR___closed__2;
static lean_once_cell_t l_Lean_Parser_equalR___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalR___closed__3;
static lean_once_cell_t l_Lean_Parser_equalR___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalR___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_equalR;
static lean_once_cell_t l_Lean_Parser_equalD___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalD___closed__0;
static lean_once_cell_t l_Lean_Parser_equalD___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalD___closed__1;
static lean_once_cell_t l_Lean_Parser_equalD___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalD___closed__2;
static lean_once_cell_t l_Lean_Parser_equalD___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalD___closed__3;
static lean_once_cell_t l_Lean_Parser_equalD___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalD___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_equalD;
static lean_once_cell_t l_Lean_Parser_equalS___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalS___closed__0;
static lean_once_cell_t l_Lean_Parser_equalS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalS___closed__1;
static lean_once_cell_t l_Lean_Parser_equalS___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalS___closed__2;
static lean_once_cell_t l_Lean_Parser_equalS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalS___closed__3;
static lean_once_cell_t l_Lean_Parser_equalS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalS___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_equalS;
static lean_once_cell_t l_Lean_Parser_equalA___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalA___closed__0;
static lean_once_cell_t l_Lean_Parser_equalA___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalA___closed__1;
static lean_once_cell_t l_Lean_Parser_equalA___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalA___closed__2;
static lean_once_cell_t l_Lean_Parser_equalA___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalA___closed__3;
static lean_once_cell_t l_Lean_Parser_equalA___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equalA___closed__4;
LEAN_EXPORT lean_object* l_Lean_Parser_equalA;
static lean_once_cell_t l_Lean_Parser_equal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__0;
static lean_once_cell_t l_Lean_Parser_equal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__1;
static lean_once_cell_t l_Lean_Parser_equal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__2;
static lean_once_cell_t l_Lean_Parser_equal___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__3;
static lean_once_cell_t l_Lean_Parser_equal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__4;
static lean_once_cell_t l_Lean_Parser_equal___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_equal___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_equal;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExpr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExpr___closed__14;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardExpr;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExprConv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExprConv___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExprConv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExprConv___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardExprConv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardExprConv___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardExprConv;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTarget___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTarget___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardTarget;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTargetConv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTargetConv___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTargetConv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTargetConv___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardTargetConv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardTargetConv___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardTargetConv;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__2;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__3;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__4;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__5;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__6;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__7;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__8;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__9;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__10;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__11;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__12;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__13;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHyp___closed__14;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardHyp;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHypConv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHypConv___closed__0;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHypConv___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHypConv___closed__1;
static lean_once_cell_t l_Lean_Parser_Tactic_guardHypConv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Tactic_guardHypConv___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_guardHypConv;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__0;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__1;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__2;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__3;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__4;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__5;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__6;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__7;
static lean_once_cell_t l_Lean_Parser_Command_guardExprCmd___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardExprCmd___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Command_guardExprCmd;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__0;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__1;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__2;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__3;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__4;
static lean_once_cell_t l_Lean_Parser_Command_guardCmd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Command_guardCmd___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Command_guardCmd;
static lean_object* _init_l_Lean_Parser_colonR___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("colonR", 6, 6);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Lean_Parser_colonR___closed__0, &l_Lean_Parser_colonR___closed__0_once, _init_l_Lean_Parser_colonR___closed__0);
v___x_5_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_6_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__4(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Lean_Parser_colonR___closed__4, &l_Lean_Parser_colonR___closed__4_once, _init_l_Lean_Parser_colonR___closed__4);
v___x_10_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Parser_colonR___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_11_ = lean_obj_once(&l_Lean_Parser_colonR___closed__5, &l_Lean_Parser_colonR___closed__5_once, _init_l_Lean_Parser_colonR___closed__5);
v___x_12_ = lean_obj_once(&l_Lean_Parser_colonR___closed__3, &l_Lean_Parser_colonR___closed__3_once, _init_l_Lean_Parser_colonR___closed__3);
v___x_13_ = lean_obj_once(&l_Lean_Parser_colonR___closed__0, &l_Lean_Parser_colonR___closed__0_once, _init_l_Lean_Parser_colonR___closed__0);
v___x_14_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_11_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Parser_colonR(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_Parser_colonR___closed__6, &l_Lean_Parser_colonR___closed__6_once, _init_l_Lean_Parser_colonR___closed__6);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Parser_colonD___closed__0(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_mk_string_unchecked("colonD", 6, 6);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Parser_colonD___closed__1(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_17_ = lean_obj_once(&l_Lean_Parser_colonD___closed__0, &l_Lean_Parser_colonD___closed__0_once, _init_l_Lean_Parser_colonD___closed__0);
v___x_18_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_19_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_20_ = l_Lean_Name_mkStr3(v___x_19_, v___x_18_, v___x_17_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Parser_colonD___closed__2(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_mk_string_unchecked(" :~ ", 4, 4);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Parser_colonD___closed__3(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&l_Lean_Parser_colonD___closed__2, &l_Lean_Parser_colonD___closed__2_once, _init_l_Lean_Parser_colonD___closed__2);
v___x_23_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Parser_colonD___closed__4(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = lean_obj_once(&l_Lean_Parser_colonD___closed__3, &l_Lean_Parser_colonD___closed__3_once, _init_l_Lean_Parser_colonD___closed__3);
v___x_25_ = lean_obj_once(&l_Lean_Parser_colonD___closed__1, &l_Lean_Parser_colonD___closed__1_once, _init_l_Lean_Parser_colonD___closed__1);
v___x_26_ = lean_obj_once(&l_Lean_Parser_colonD___closed__0, &l_Lean_Parser_colonD___closed__0_once, _init_l_Lean_Parser_colonD___closed__0);
v___x_27_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
lean_ctor_set(v___x_27_, 2, v___x_24_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Parser_colonD(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_once(&l_Lean_Parser_colonD___closed__4, &l_Lean_Parser_colonD___closed__4_once, _init_l_Lean_Parser_colonD___closed__4);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Parser_colonS___closed__0(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("colonS", 6, 6);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Parser_colonS___closed__1(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = lean_obj_once(&l_Lean_Parser_colonS___closed__0, &l_Lean_Parser_colonS___closed__0_once, _init_l_Lean_Parser_colonS___closed__0);
v___x_31_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_32_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_33_ = l_Lean_Name_mkStr3(v___x_32_, v___x_31_, v___x_30_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Parser_colonS___closed__2(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked(" :ₛ ", 6, 4);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Parser_colonS___closed__3(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Lean_Parser_colonS___closed__2, &l_Lean_Parser_colonS___closed__2_once, _init_l_Lean_Parser_colonS___closed__2);
v___x_36_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Parser_colonS___closed__4(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_37_ = lean_obj_once(&l_Lean_Parser_colonS___closed__3, &l_Lean_Parser_colonS___closed__3_once, _init_l_Lean_Parser_colonS___closed__3);
v___x_38_ = lean_obj_once(&l_Lean_Parser_colonS___closed__1, &l_Lean_Parser_colonS___closed__1_once, _init_l_Lean_Parser_colonS___closed__1);
v___x_39_ = lean_obj_once(&l_Lean_Parser_colonS___closed__0, &l_Lean_Parser_colonS___closed__0_once, _init_l_Lean_Parser_colonS___closed__0);
v___x_40_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set(v___x_40_, 2, v___x_37_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_Parser_colonS(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_once(&l_Lean_Parser_colonS___closed__4, &l_Lean_Parser_colonS___closed__4_once, _init_l_Lean_Parser_colonS___closed__4);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Parser_colonA___closed__0(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_mk_string_unchecked("colonA", 6, 6);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_Parser_colonA___closed__1(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_43_ = lean_obj_once(&l_Lean_Parser_colonA___closed__0, &l_Lean_Parser_colonA___closed__0_once, _init_l_Lean_Parser_colonA___closed__0);
v___x_44_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_45_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_46_ = l_Lean_Name_mkStr3(v___x_45_, v___x_44_, v___x_43_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Parser_colonA___closed__2(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_mk_string_unchecked(" :ₐ ", 6, 4);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Parser_colonA___closed__3(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&l_Lean_Parser_colonA___closed__2, &l_Lean_Parser_colonA___closed__2_once, _init_l_Lean_Parser_colonA___closed__2);
v___x_49_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Parser_colonA___closed__4(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_50_ = lean_obj_once(&l_Lean_Parser_colonA___closed__3, &l_Lean_Parser_colonA___closed__3_once, _init_l_Lean_Parser_colonA___closed__3);
v___x_51_ = lean_obj_once(&l_Lean_Parser_colonA___closed__1, &l_Lean_Parser_colonA___closed__1_once, _init_l_Lean_Parser_colonA___closed__1);
v___x_52_ = lean_obj_once(&l_Lean_Parser_colonA___closed__0, &l_Lean_Parser_colonA___closed__0_once, _init_l_Lean_Parser_colonA___closed__0);
v___x_53_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
lean_ctor_set(v___x_53_, 2, v___x_50_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Parser_colonA(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&l_Lean_Parser_colonA___closed__4, &l_Lean_Parser_colonA___closed__4_once, _init_l_Lean_Parser_colonA___closed__4);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__0(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("colon", 5, 5);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__1(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = lean_obj_once(&l_Lean_Parser_colon___closed__0, &l_Lean_Parser_colon___closed__0_once, _init_l_Lean_Parser_colon___closed__0);
v___x_57_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_58_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_59_ = l_Lean_Name_mkStr3(v___x_58_, v___x_57_, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__2(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_mk_string_unchecked("orelse", 6, 6);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__3(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_Parser_colon___closed__2, &l_Lean_Parser_colon___closed__2_once, _init_l_Lean_Parser_colon___closed__2);
v___x_62_ = l_Lean_Name_mkStr1(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__4(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_63_ = l_Lean_Parser_colonA;
v___x_64_ = l_Lean_Parser_colonS;
v___x_65_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_66_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_63_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__5(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = lean_obj_once(&l_Lean_Parser_colon___closed__4, &l_Lean_Parser_colon___closed__4_once, _init_l_Lean_Parser_colon___closed__4);
v___x_68_ = l_Lean_Parser_colonD;
v___x_69_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_70_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
lean_ctor_set(v___x_70_, 2, v___x_67_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__6(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l_Lean_Parser_colon___closed__5, &l_Lean_Parser_colon___closed__5_once, _init_l_Lean_Parser_colon___closed__5);
v___x_72_ = l_Lean_Parser_colonR;
v___x_73_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_74_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_72_);
lean_ctor_set(v___x_74_, 2, v___x_71_);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Parser_colon___closed__7(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = lean_obj_once(&l_Lean_Parser_colon___closed__6, &l_Lean_Parser_colon___closed__6_once, _init_l_Lean_Parser_colon___closed__6);
v___x_76_ = lean_obj_once(&l_Lean_Parser_colon___closed__1, &l_Lean_Parser_colon___closed__1_once, _init_l_Lean_Parser_colon___closed__1);
v___x_77_ = lean_obj_once(&l_Lean_Parser_colon___closed__0, &l_Lean_Parser_colon___closed__0_once, _init_l_Lean_Parser_colon___closed__0);
v___x_78_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set(v___x_78_, 2, v___x_75_);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Parser_colon(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Lean_Parser_colon___closed__7, &l_Lean_Parser_colon___closed__7_once, _init_l_Lean_Parser_colon___closed__7);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR___closed__0(void){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_mk_string_unchecked("colonEqR", 8, 8);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__0, &l_Lean_Parser_colonEqR___closed__0_once, _init_l_Lean_Parser_colonEqR___closed__0);
v___x_82_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_83_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_84_ = l_Lean_Name_mkStr3(v___x_83_, v___x_82_, v___x_81_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR___closed__2(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_85_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR___closed__3(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__2, &l_Lean_Parser_colonEqR___closed__2_once, _init_l_Lean_Parser_colonEqR___closed__2);
v___x_87_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_88_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__3, &l_Lean_Parser_colonEqR___closed__3_once, _init_l_Lean_Parser_colonEqR___closed__3);
v___x_89_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__1, &l_Lean_Parser_colonEqR___closed__1_once, _init_l_Lean_Parser_colonEqR___closed__1);
v___x_90_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__0, &l_Lean_Parser_colonEqR___closed__0_once, _init_l_Lean_Parser_colonEqR___closed__0);
v___x_91_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
lean_ctor_set(v___x_91_, 2, v___x_88_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqR(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_once(&l_Lean_Parser_colonEqR___closed__4, &l_Lean_Parser_colonEqR___closed__4_once, _init_l_Lean_Parser_colonEqR___closed__4);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD___closed__0(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("colonEqD", 8, 8);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__0, &l_Lean_Parser_colonEqD___closed__0_once, _init_l_Lean_Parser_colonEqD___closed__0);
v___x_95_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_96_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_97_ = l_Lean_Name_mkStr3(v___x_96_, v___x_95_, v___x_94_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD___closed__2(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_mk_string_unchecked(" :=~ ", 5, 5);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__2, &l_Lean_Parser_colonEqD___closed__2_once, _init_l_Lean_Parser_colonEqD___closed__2);
v___x_100_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD___closed__4(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_101_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__3, &l_Lean_Parser_colonEqD___closed__3_once, _init_l_Lean_Parser_colonEqD___closed__3);
v___x_102_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__1, &l_Lean_Parser_colonEqD___closed__1_once, _init_l_Lean_Parser_colonEqD___closed__1);
v___x_103_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__0, &l_Lean_Parser_colonEqD___closed__0_once, _init_l_Lean_Parser_colonEqD___closed__0);
v___x_104_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
lean_ctor_set(v___x_104_, 2, v___x_101_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqD(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lean_Parser_colonEqD___closed__4, &l_Lean_Parser_colonEqD___closed__4_once, _init_l_Lean_Parser_colonEqD___closed__4);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("colonEqS", 8, 8);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__0, &l_Lean_Parser_colonEqS___closed__0_once, _init_l_Lean_Parser_colonEqS___closed__0);
v___x_108_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_109_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_110_ = l_Lean_Name_mkStr3(v___x_109_, v___x_108_, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS___closed__2(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked(" :=ₛ ", 7, 5);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS___closed__3(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__2, &l_Lean_Parser_colonEqS___closed__2_once, _init_l_Lean_Parser_colonEqS___closed__2);
v___x_113_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS___closed__4(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__3, &l_Lean_Parser_colonEqS___closed__3_once, _init_l_Lean_Parser_colonEqS___closed__3);
v___x_115_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__1, &l_Lean_Parser_colonEqS___closed__1_once, _init_l_Lean_Parser_colonEqS___closed__1);
v___x_116_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__0, &l_Lean_Parser_colonEqS___closed__0_once, _init_l_Lean_Parser_colonEqS___closed__0);
v___x_117_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqS(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lean_Parser_colonEqS___closed__4, &l_Lean_Parser_colonEqS___closed__4_once, _init_l_Lean_Parser_colonEqS___closed__4);
return v___x_118_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA___closed__0(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_mk_string_unchecked("colonEqA", 8, 8);
return v___x_119_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA___closed__1(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_120_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__0, &l_Lean_Parser_colonEqA___closed__0_once, _init_l_Lean_Parser_colonEqA___closed__0);
v___x_121_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_122_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_123_ = l_Lean_Name_mkStr3(v___x_122_, v___x_121_, v___x_120_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA___closed__2(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked(" :=ₐ ", 7, 5);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA___closed__3(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__2, &l_Lean_Parser_colonEqA___closed__2_once, _init_l_Lean_Parser_colonEqA___closed__2);
v___x_126_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA___closed__4(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_127_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__3, &l_Lean_Parser_colonEqA___closed__3_once, _init_l_Lean_Parser_colonEqA___closed__3);
v___x_128_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__1, &l_Lean_Parser_colonEqA___closed__1_once, _init_l_Lean_Parser_colonEqA___closed__1);
v___x_129_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__0, &l_Lean_Parser_colonEqA___closed__0_once, _init_l_Lean_Parser_colonEqA___closed__0);
v___x_130_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_128_);
lean_ctor_set(v___x_130_, 2, v___x_127_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Parser_colonEqA(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lean_Parser_colonEqA___closed__4, &l_Lean_Parser_colonEqA___closed__4_once, _init_l_Lean_Parser_colonEqA___closed__4);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__0(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("colonEq", 7, 7);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__1(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__0, &l_Lean_Parser_colonEq___closed__0_once, _init_l_Lean_Parser_colonEq___closed__0);
v___x_134_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_135_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_136_ = l_Lean_Name_mkStr3(v___x_135_, v___x_134_, v___x_133_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__2(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_137_ = l_Lean_Parser_colonEqA;
v___x_138_ = l_Lean_Parser_colonEqS;
v___x_139_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_140_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
lean_ctor_set(v___x_140_, 2, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__3(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_141_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__2, &l_Lean_Parser_colonEq___closed__2_once, _init_l_Lean_Parser_colonEq___closed__2);
v___x_142_ = l_Lean_Parser_colonEqD;
v___x_143_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_144_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
lean_ctor_set(v___x_144_, 2, v___x_141_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__4(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_145_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__3, &l_Lean_Parser_colonEq___closed__3_once, _init_l_Lean_Parser_colonEq___closed__3);
v___x_146_ = l_Lean_Parser_colonEqR;
v___x_147_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_148_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_146_);
lean_ctor_set(v___x_148_, 2, v___x_145_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq___closed__5(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__4, &l_Lean_Parser_colonEq___closed__4_once, _init_l_Lean_Parser_colonEq___closed__4);
v___x_150_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__1, &l_Lean_Parser_colonEq___closed__1_once, _init_l_Lean_Parser_colonEq___closed__1);
v___x_151_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__0, &l_Lean_Parser_colonEq___closed__0_once, _init_l_Lean_Parser_colonEq___closed__0);
v___x_152_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___x_150_);
lean_ctor_set(v___x_152_, 2, v___x_149_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Parser_colonEq(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lean_Parser_colonEq___closed__5, &l_Lean_Parser_colonEq___closed__5_once, _init_l_Lean_Parser_colonEq___closed__5);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Parser_equalR___closed__0(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("equalR", 6, 6);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_Parser_equalR___closed__1(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = lean_obj_once(&l_Lean_Parser_equalR___closed__0, &l_Lean_Parser_equalR___closed__0_once, _init_l_Lean_Parser_equalR___closed__0);
v___x_156_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_157_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_158_ = l_Lean_Name_mkStr3(v___x_157_, v___x_156_, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Parser_equalR___closed__2(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked(" = ", 3, 3);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Parser_equalR___closed__3(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_obj_once(&l_Lean_Parser_equalR___closed__2, &l_Lean_Parser_equalR___closed__2_once, _init_l_Lean_Parser_equalR___closed__2);
v___x_161_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Lean_Parser_equalR___closed__4(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = lean_obj_once(&l_Lean_Parser_equalR___closed__3, &l_Lean_Parser_equalR___closed__3_once, _init_l_Lean_Parser_equalR___closed__3);
v___x_163_ = lean_obj_once(&l_Lean_Parser_equalR___closed__1, &l_Lean_Parser_equalR___closed__1_once, _init_l_Lean_Parser_equalR___closed__1);
v___x_164_ = lean_obj_once(&l_Lean_Parser_equalR___closed__0, &l_Lean_Parser_equalR___closed__0_once, _init_l_Lean_Parser_equalR___closed__0);
v___x_165_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
lean_ctor_set(v___x_165_, 2, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Parser_equalR(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lean_Parser_equalR___closed__4, &l_Lean_Parser_equalR___closed__4_once, _init_l_Lean_Parser_equalR___closed__4);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Parser_equalD___closed__0(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_mk_string_unchecked("equalD", 6, 6);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_Parser_equalD___closed__1(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_obj_once(&l_Lean_Parser_equalD___closed__0, &l_Lean_Parser_equalD___closed__0_once, _init_l_Lean_Parser_equalD___closed__0);
v___x_169_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_170_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_171_ = l_Lean_Name_mkStr3(v___x_170_, v___x_169_, v___x_168_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_Parser_equalD___closed__2(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_mk_string_unchecked(" =~ ", 4, 4);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Parser_equalD___closed__3(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l_Lean_Parser_equalD___closed__2, &l_Lean_Parser_equalD___closed__2_once, _init_l_Lean_Parser_equalD___closed__2);
v___x_174_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Parser_equalD___closed__4(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_Parser_equalD___closed__3, &l_Lean_Parser_equalD___closed__3_once, _init_l_Lean_Parser_equalD___closed__3);
v___x_176_ = lean_obj_once(&l_Lean_Parser_equalD___closed__1, &l_Lean_Parser_equalD___closed__1_once, _init_l_Lean_Parser_equalD___closed__1);
v___x_177_ = lean_obj_once(&l_Lean_Parser_equalD___closed__0, &l_Lean_Parser_equalD___closed__0_once, _init_l_Lean_Parser_equalD___closed__0);
v___x_178_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_Parser_equalD(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&l_Lean_Parser_equalD___closed__4, &l_Lean_Parser_equalD___closed__4_once, _init_l_Lean_Parser_equalD___closed__4);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_Parser_equalS___closed__0(void){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_mk_string_unchecked("equalS", 6, 6);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Parser_equalS___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_181_ = lean_obj_once(&l_Lean_Parser_equalS___closed__0, &l_Lean_Parser_equalS___closed__0_once, _init_l_Lean_Parser_equalS___closed__0);
v___x_182_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_183_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_184_ = l_Lean_Name_mkStr3(v___x_183_, v___x_182_, v___x_181_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Parser_equalS___closed__2(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_mk_string_unchecked(" =ₛ ", 6, 4);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Parser_equalS___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_obj_once(&l_Lean_Parser_equalS___closed__2, &l_Lean_Parser_equalS___closed__2_once, _init_l_Lean_Parser_equalS___closed__2);
v___x_187_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Parser_equalS___closed__4(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_188_ = lean_obj_once(&l_Lean_Parser_equalS___closed__3, &l_Lean_Parser_equalS___closed__3_once, _init_l_Lean_Parser_equalS___closed__3);
v___x_189_ = lean_obj_once(&l_Lean_Parser_equalS___closed__1, &l_Lean_Parser_equalS___closed__1_once, _init_l_Lean_Parser_equalS___closed__1);
v___x_190_ = lean_obj_once(&l_Lean_Parser_equalS___closed__0, &l_Lean_Parser_equalS___closed__0_once, _init_l_Lean_Parser_equalS___closed__0);
v___x_191_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_189_);
lean_ctor_set(v___x_191_, 2, v___x_188_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Parser_equalS(void){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_once(&l_Lean_Parser_equalS___closed__4, &l_Lean_Parser_equalS___closed__4_once, _init_l_Lean_Parser_equalS___closed__4);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Parser_equalA___closed__0(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_mk_string_unchecked("equalA", 6, 6);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Parser_equalA___closed__1(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_194_ = lean_obj_once(&l_Lean_Parser_equalA___closed__0, &l_Lean_Parser_equalA___closed__0_once, _init_l_Lean_Parser_equalA___closed__0);
v___x_195_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_196_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_197_ = l_Lean_Name_mkStr3(v___x_196_, v___x_195_, v___x_194_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Parser_equalA___closed__2(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked(" =ₐ ", 6, 4);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Parser_equalA___closed__3(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l_Lean_Parser_equalA___closed__2, &l_Lean_Parser_equalA___closed__2_once, _init_l_Lean_Parser_equalA___closed__2);
v___x_200_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Parser_equalA___closed__4(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = lean_obj_once(&l_Lean_Parser_equalA___closed__3, &l_Lean_Parser_equalA___closed__3_once, _init_l_Lean_Parser_equalA___closed__3);
v___x_202_ = lean_obj_once(&l_Lean_Parser_equalA___closed__1, &l_Lean_Parser_equalA___closed__1_once, _init_l_Lean_Parser_equalA___closed__1);
v___x_203_ = lean_obj_once(&l_Lean_Parser_equalA___closed__0, &l_Lean_Parser_equalA___closed__0_once, _init_l_Lean_Parser_equalA___closed__0);
v___x_204_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___x_202_);
lean_ctor_set(v___x_204_, 2, v___x_201_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Parser_equalA(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Lean_Parser_equalA___closed__4, &l_Lean_Parser_equalA___closed__4_once, _init_l_Lean_Parser_equalA___closed__4);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__0(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked("equal", 5, 5);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_207_ = lean_obj_once(&l_Lean_Parser_equal___closed__0, &l_Lean_Parser_equal___closed__0_once, _init_l_Lean_Parser_equal___closed__0);
v___x_208_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_209_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_210_ = l_Lean_Name_mkStr3(v___x_209_, v___x_208_, v___x_207_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__2(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_211_ = l_Lean_Parser_equalA;
v___x_212_ = l_Lean_Parser_equalS;
v___x_213_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_214_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
lean_ctor_set(v___x_214_, 2, v___x_211_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__3(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_215_ = lean_obj_once(&l_Lean_Parser_equal___closed__2, &l_Lean_Parser_equal___closed__2_once, _init_l_Lean_Parser_equal___closed__2);
v___x_216_ = l_Lean_Parser_equalD;
v___x_217_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_218_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_216_);
lean_ctor_set(v___x_218_, 2, v___x_215_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__4(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_219_ = lean_obj_once(&l_Lean_Parser_equal___closed__3, &l_Lean_Parser_equal___closed__3_once, _init_l_Lean_Parser_equal___closed__3);
v___x_220_ = l_Lean_Parser_equalR;
v___x_221_ = lean_obj_once(&l_Lean_Parser_colon___closed__3, &l_Lean_Parser_colon___closed__3_once, _init_l_Lean_Parser_colon___closed__3);
v___x_222_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_220_);
lean_ctor_set(v___x_222_, 2, v___x_219_);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_Parser_equal___closed__5(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_223_ = lean_obj_once(&l_Lean_Parser_equal___closed__4, &l_Lean_Parser_equal___closed__4_once, _init_l_Lean_Parser_equal___closed__4);
v___x_224_ = lean_obj_once(&l_Lean_Parser_equal___closed__1, &l_Lean_Parser_equal___closed__1_once, _init_l_Lean_Parser_equal___closed__1);
v___x_225_ = lean_obj_once(&l_Lean_Parser_equal___closed__0, &l_Lean_Parser_equal___closed__0_once, _init_l_Lean_Parser_equal___closed__0);
v___x_226_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___x_224_);
lean_ctor_set(v___x_226_, 2, v___x_223_);
return v___x_226_;
}
}
static lean_object* _init_l_Lean_Parser_equal(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l_Lean_Parser_equal___closed__5, &l_Lean_Parser_equal___closed__5_once, _init_l_Lean_Parser_equal___closed__5);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__0(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__1(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_mk_string_unchecked("guardExpr", 9, 9);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__2(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__1, &l_Lean_Parser_Tactic_guardExpr___closed__1_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__1);
v___x_231_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_232_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_233_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_234_ = l_Lean_Name_mkStr4(v___x_233_, v___x_232_, v___x_231_, v___x_230_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__3(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = lean_mk_string_unchecked("andthen", 7, 7);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__4(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__3, &l_Lean_Parser_Tactic_guardExpr___closed__3_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__3);
v___x_237_ = l_Lean_Name_mkStr1(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__5(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_mk_string_unchecked("guard_expr ", 11, 11);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__6(void){
_start:
{
uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = 0;
v___x_240_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__5, &l_Lean_Parser_Tactic_guardExpr___closed__5_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__5);
v___x_241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*1, v___x_239_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__7(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__8(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__7, &l_Lean_Parser_Tactic_guardExpr___closed__7_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__7);
v___x_244_ = l_Lean_Name_mkStr1(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__9(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_unsigned_to_nat(51u);
v___x_246_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__8, &l_Lean_Parser_Tactic_guardExpr___closed__8_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__8);
v___x_247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_245_);
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__10(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_248_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__9, &l_Lean_Parser_Tactic_guardExpr___closed__9_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__9);
v___x_249_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__6, &l_Lean_Parser_Tactic_guardExpr___closed__6_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__6);
v___x_250_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_251_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set(v___x_251_, 1, v___x_249_);
lean_ctor_set(v___x_251_, 2, v___x_248_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__11(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_252_ = l_Lean_Parser_equal;
v___x_253_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__10, &l_Lean_Parser_Tactic_guardExpr___closed__10_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__10);
v___x_254_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_255_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_253_);
lean_ctor_set(v___x_255_, 2, v___x_252_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__12(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__8, &l_Lean_Parser_Tactic_guardExpr___closed__8_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__8);
v___x_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__13(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_259_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_260_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__11, &l_Lean_Parser_Tactic_guardExpr___closed__11_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__11);
v___x_261_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_262_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_260_);
lean_ctor_set(v___x_262_, 2, v___x_259_);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr___closed__14(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_263_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__13, &l_Lean_Parser_Tactic_guardExpr___closed__13_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__13);
v___x_264_ = lean_unsigned_to_nat(1022u);
v___x_265_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__2, &l_Lean_Parser_Tactic_guardExpr___closed__2_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__2);
v___x_266_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v___x_264_);
lean_ctor_set(v___x_266_, 2, v___x_263_);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExpr(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__14, &l_Lean_Parser_Tactic_guardExpr___closed__14_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__14);
return v___x_267_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExprConv___closed__0(void){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_mk_string_unchecked("guardExprConv", 13, 13);
return v___x_268_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExprConv___closed__1(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_269_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExprConv___closed__0, &l_Lean_Parser_Tactic_guardExprConv___closed__0_once, _init_l_Lean_Parser_Tactic_guardExprConv___closed__0);
v___x_270_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_271_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_272_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_273_ = l_Lean_Name_mkStr4(v___x_272_, v___x_271_, v___x_270_, v___x_269_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExprConv___closed__2(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_274_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__13, &l_Lean_Parser_Tactic_guardExpr___closed__13_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__13);
v___x_275_ = lean_unsigned_to_nat(1022u);
v___x_276_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExprConv___closed__1, &l_Lean_Parser_Tactic_guardExprConv___closed__1_once, _init_l_Lean_Parser_Tactic_guardExprConv___closed__1);
v___x_277_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_275_);
lean_ctor_set(v___x_277_, 2, v___x_274_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardExprConv(void){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExprConv___closed__2, &l_Lean_Parser_Tactic_guardExprConv___closed__2_once, _init_l_Lean_Parser_Tactic_guardExprConv___closed__2);
return v___x_278_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__0(void){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = lean_mk_string_unchecked("guardTarget", 11, 11);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__1(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_280_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__0, &l_Lean_Parser_Tactic_guardTarget___closed__0_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__0);
v___x_281_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_282_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_283_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_284_ = l_Lean_Name_mkStr4(v___x_283_, v___x_282_, v___x_281_, v___x_280_);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__2(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_mk_string_unchecked("guard_target ", 13, 13);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__3(void){
_start:
{
uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = 0;
v___x_287_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__2, &l_Lean_Parser_Tactic_guardTarget___closed__2_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__2);
v___x_288_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set_uint8(v___x_288_, sizeof(void*)*1, v___x_286_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__4(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_289_ = l_Lean_Parser_equal;
v___x_290_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__3, &l_Lean_Parser_Tactic_guardTarget___closed__3_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__3);
v___x_291_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_292_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_290_);
lean_ctor_set(v___x_292_, 2, v___x_289_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__5(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_293_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_294_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__4, &l_Lean_Parser_Tactic_guardTarget___closed__4_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__4);
v___x_295_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_296_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v___x_294_);
lean_ctor_set(v___x_296_, 2, v___x_293_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget___closed__6(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_297_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__5, &l_Lean_Parser_Tactic_guardTarget___closed__5_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__5);
v___x_298_ = lean_unsigned_to_nat(1022u);
v___x_299_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__1, &l_Lean_Parser_Tactic_guardTarget___closed__1_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__1);
v___x_300_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_298_);
lean_ctor_set(v___x_300_, 2, v___x_297_);
return v___x_300_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTarget(void){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__6, &l_Lean_Parser_Tactic_guardTarget___closed__6_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__6);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTargetConv___closed__0(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_mk_string_unchecked("guardTargetConv", 15, 15);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTargetConv___closed__1(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_303_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTargetConv___closed__0, &l_Lean_Parser_Tactic_guardTargetConv___closed__0_once, _init_l_Lean_Parser_Tactic_guardTargetConv___closed__0);
v___x_304_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_305_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_306_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_307_ = l_Lean_Name_mkStr4(v___x_306_, v___x_305_, v___x_304_, v___x_303_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTargetConv___closed__2(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_308_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTarget___closed__5, &l_Lean_Parser_Tactic_guardTarget___closed__5_once, _init_l_Lean_Parser_Tactic_guardTarget___closed__5);
v___x_309_ = lean_unsigned_to_nat(1022u);
v___x_310_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTargetConv___closed__1, &l_Lean_Parser_Tactic_guardTargetConv___closed__1_once, _init_l_Lean_Parser_Tactic_guardTargetConv___closed__1);
v___x_311_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
lean_ctor_set(v___x_311_, 2, v___x_308_);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardTargetConv(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_obj_once(&l_Lean_Parser_Tactic_guardTargetConv___closed__2, &l_Lean_Parser_Tactic_guardTargetConv___closed__2_once, _init_l_Lean_Parser_Tactic_guardTargetConv___closed__2);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__0(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("guardHyp", 8, 8);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__1(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_314_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__0, &l_Lean_Parser_Tactic_guardHyp___closed__0_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__0);
v___x_315_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_316_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_317_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_318_ = l_Lean_Name_mkStr4(v___x_317_, v___x_316_, v___x_315_, v___x_314_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__2(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_mk_string_unchecked("guard_hyp ", 10, 10);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__3(void){
_start:
{
uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = 0;
v___x_321_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__2, &l_Lean_Parser_Tactic_guardHyp___closed__2_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__2);
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__4(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_unsigned_to_nat(1024u);
v___x_324_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__8, &l_Lean_Parser_Tactic_guardExpr___closed__8_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__8);
v___x_325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__5(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_326_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__4, &l_Lean_Parser_Tactic_guardHyp___closed__4_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__4);
v___x_327_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__3, &l_Lean_Parser_Tactic_guardHyp___closed__3_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__3);
v___x_328_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_329_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
lean_ctor_set(v___x_329_, 1, v___x_327_);
lean_ctor_set(v___x_329_, 2, v___x_326_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__6(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lean_mk_string_unchecked("optional", 8, 8);
return v___x_330_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__7(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__6, &l_Lean_Parser_Tactic_guardHyp___closed__6_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__6);
v___x_332_ = l_Lean_Name_mkStr1(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__8(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_334_ = l_Lean_Parser_colon;
v___x_335_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_336_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
lean_ctor_set(v___x_336_, 2, v___x_333_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__9(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__8, &l_Lean_Parser_Tactic_guardHyp___closed__8_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__8);
v___x_338_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__7, &l_Lean_Parser_Tactic_guardHyp___closed__7_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__7);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__10(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_340_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__9, &l_Lean_Parser_Tactic_guardHyp___closed__9_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__9);
v___x_341_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__5, &l_Lean_Parser_Tactic_guardHyp___closed__5_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__5);
v___x_342_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_343_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
lean_ctor_set(v___x_343_, 2, v___x_340_);
return v___x_343_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__11(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_344_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_345_ = l_Lean_Parser_colonEq;
v___x_346_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_347_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
lean_ctor_set(v___x_347_, 2, v___x_344_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__12(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__11, &l_Lean_Parser_Tactic_guardHyp___closed__11_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__11);
v___x_349_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__7, &l_Lean_Parser_Tactic_guardHyp___closed__7_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__7);
v___x_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___x_348_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__13(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__12, &l_Lean_Parser_Tactic_guardHyp___closed__12_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__12);
v___x_352_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__10, &l_Lean_Parser_Tactic_guardHyp___closed__10_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__10);
v___x_353_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_354_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
lean_ctor_set(v___x_354_, 2, v___x_351_);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp___closed__14(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__13, &l_Lean_Parser_Tactic_guardHyp___closed__13_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__13);
v___x_356_ = lean_unsigned_to_nat(1022u);
v___x_357_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__1, &l_Lean_Parser_Tactic_guardHyp___closed__1_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__1);
v___x_358_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___x_356_);
lean_ctor_set(v___x_358_, 2, v___x_355_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHyp(void){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__14, &l_Lean_Parser_Tactic_guardHyp___closed__14_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__14);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHypConv___closed__0(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_mk_string_unchecked("guardHypConv", 12, 12);
return v___x_360_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHypConv___closed__1(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_361_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHypConv___closed__0, &l_Lean_Parser_Tactic_guardHypConv___closed__0_once, _init_l_Lean_Parser_Tactic_guardHypConv___closed__0);
v___x_362_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__0, &l_Lean_Parser_Tactic_guardExpr___closed__0_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__0);
v___x_363_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_364_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_365_ = l_Lean_Name_mkStr4(v___x_364_, v___x_363_, v___x_362_, v___x_361_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHypConv___closed__2(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_366_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHyp___closed__13, &l_Lean_Parser_Tactic_guardHyp___closed__13_once, _init_l_Lean_Parser_Tactic_guardHyp___closed__13);
v___x_367_ = lean_unsigned_to_nat(1022u);
v___x_368_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHypConv___closed__1, &l_Lean_Parser_Tactic_guardHypConv___closed__1_once, _init_l_Lean_Parser_Tactic_guardHypConv___closed__1);
v___x_369_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v___x_367_);
lean_ctor_set(v___x_369_, 2, v___x_366_);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_guardHypConv(void){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_Lean_Parser_Tactic_guardHypConv___closed__2, &l_Lean_Parser_Tactic_guardHypConv___closed__2_once, _init_l_Lean_Parser_Tactic_guardHypConv___closed__2);
return v___x_370_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__1(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_mk_string_unchecked("guardExprCmd", 12, 12);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__2(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_373_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__1, &l_Lean_Parser_Command_guardExprCmd___closed__1_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__1);
v___x_374_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__0, &l_Lean_Parser_Command_guardExprCmd___closed__0_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__0);
v___x_375_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_376_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_377_ = l_Lean_Name_mkStr4(v___x_376_, v___x_375_, v___x_374_, v___x_373_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__3(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("#guard_expr ", 12, 12);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__4(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__3, &l_Lean_Parser_Command_guardExprCmd___closed__3_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__3);
v___x_380_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__5(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_381_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__9, &l_Lean_Parser_Tactic_guardExpr___closed__9_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__9);
v___x_382_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__4, &l_Lean_Parser_Command_guardExprCmd___closed__4_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__4);
v___x_383_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_384_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
lean_ctor_set(v___x_384_, 2, v___x_381_);
return v___x_384_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__6(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_385_ = l_Lean_Parser_equal;
v___x_386_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__5, &l_Lean_Parser_Command_guardExprCmd___closed__5_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__5);
v___x_387_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_388_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v___x_386_);
lean_ctor_set(v___x_388_, 2, v___x_385_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__7(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_390_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__6, &l_Lean_Parser_Command_guardExprCmd___closed__6_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__6);
v___x_391_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_392_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_390_);
lean_ctor_set(v___x_392_, 2, v___x_389_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd___closed__8(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_393_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__7, &l_Lean_Parser_Command_guardExprCmd___closed__7_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__7);
v___x_394_ = lean_unsigned_to_nat(1022u);
v___x_395_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__2, &l_Lean_Parser_Command_guardExprCmd___closed__2_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__2);
v___x_396_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set(v___x_396_, 2, v___x_393_);
return v___x_396_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardExprCmd(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__8, &l_Lean_Parser_Command_guardExprCmd___closed__8_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__8);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__0(void){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lean_mk_string_unchecked("guardCmd", 8, 8);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__1(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_399_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__0, &l_Lean_Parser_Command_guardCmd___closed__0_once, _init_l_Lean_Parser_Command_guardCmd___closed__0);
v___x_400_ = lean_obj_once(&l_Lean_Parser_Command_guardExprCmd___closed__0, &l_Lean_Parser_Command_guardExprCmd___closed__0_once, _init_l_Lean_Parser_Command_guardExprCmd___closed__0);
v___x_401_ = lean_obj_once(&l_Lean_Parser_colonR___closed__2, &l_Lean_Parser_colonR___closed__2_once, _init_l_Lean_Parser_colonR___closed__2);
v___x_402_ = lean_obj_once(&l_Lean_Parser_colonR___closed__1, &l_Lean_Parser_colonR___closed__1_once, _init_l_Lean_Parser_colonR___closed__1);
v___x_403_ = l_Lean_Name_mkStr4(v___x_402_, v___x_401_, v___x_400_, v___x_399_);
return v___x_403_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__2(void){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_mk_string_unchecked("#guard ", 7, 7);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__3(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__2, &l_Lean_Parser_Command_guardCmd___closed__2_once, _init_l_Lean_Parser_Command_guardCmd___closed__2);
v___x_406_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__4(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_407_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__12, &l_Lean_Parser_Tactic_guardExpr___closed__12_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__12);
v___x_408_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__3, &l_Lean_Parser_Command_guardCmd___closed__3_once, _init_l_Lean_Parser_Command_guardCmd___closed__3);
v___x_409_ = lean_obj_once(&l_Lean_Parser_Tactic_guardExpr___closed__4, &l_Lean_Parser_Tactic_guardExpr___closed__4_once, _init_l_Lean_Parser_Tactic_guardExpr___closed__4);
v___x_410_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set(v___x_410_, 1, v___x_408_);
lean_ctor_set(v___x_410_, 2, v___x_407_);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd___closed__5(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_411_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__4, &l_Lean_Parser_Command_guardCmd___closed__4_once, _init_l_Lean_Parser_Command_guardCmd___closed__4);
v___x_412_ = lean_unsigned_to_nat(1022u);
v___x_413_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__1, &l_Lean_Parser_Command_guardCmd___closed__1_once, _init_l_Lean_Parser_Command_guardCmd___closed__1);
v___x_414_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
lean_ctor_set(v___x_414_, 2, v___x_411_);
return v___x_414_;
}
}
static lean_object* _init_l_Lean_Parser_Command_guardCmd(void){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lean_obj_once(&l_Lean_Parser_Command_guardCmd___closed__5, &l_Lean_Parser_Command_guardCmd___closed__5_once, _init_l_Lean_Parser_Command_guardCmd___closed__5);
return v___x_415_;
}
}
lean_object* runtime_initialize_Init_Conv(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Guard(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Conv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Guard(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_colonR = _init_l_Lean_Parser_colonR();
lean_mark_persistent(l_Lean_Parser_colonR);
l_Lean_Parser_colonD = _init_l_Lean_Parser_colonD();
lean_mark_persistent(l_Lean_Parser_colonD);
l_Lean_Parser_colonS = _init_l_Lean_Parser_colonS();
lean_mark_persistent(l_Lean_Parser_colonS);
l_Lean_Parser_colonA = _init_l_Lean_Parser_colonA();
lean_mark_persistent(l_Lean_Parser_colonA);
l_Lean_Parser_colon = _init_l_Lean_Parser_colon();
lean_mark_persistent(l_Lean_Parser_colon);
l_Lean_Parser_colonEqR = _init_l_Lean_Parser_colonEqR();
lean_mark_persistent(l_Lean_Parser_colonEqR);
l_Lean_Parser_colonEqD = _init_l_Lean_Parser_colonEqD();
lean_mark_persistent(l_Lean_Parser_colonEqD);
l_Lean_Parser_colonEqS = _init_l_Lean_Parser_colonEqS();
lean_mark_persistent(l_Lean_Parser_colonEqS);
l_Lean_Parser_colonEqA = _init_l_Lean_Parser_colonEqA();
lean_mark_persistent(l_Lean_Parser_colonEqA);
l_Lean_Parser_colonEq = _init_l_Lean_Parser_colonEq();
lean_mark_persistent(l_Lean_Parser_colonEq);
l_Lean_Parser_equalR = _init_l_Lean_Parser_equalR();
lean_mark_persistent(l_Lean_Parser_equalR);
l_Lean_Parser_equalD = _init_l_Lean_Parser_equalD();
lean_mark_persistent(l_Lean_Parser_equalD);
l_Lean_Parser_equalS = _init_l_Lean_Parser_equalS();
lean_mark_persistent(l_Lean_Parser_equalS);
l_Lean_Parser_equalA = _init_l_Lean_Parser_equalA();
lean_mark_persistent(l_Lean_Parser_equalA);
l_Lean_Parser_equal = _init_l_Lean_Parser_equal();
lean_mark_persistent(l_Lean_Parser_equal);
l_Lean_Parser_Tactic_guardExpr = _init_l_Lean_Parser_Tactic_guardExpr();
lean_mark_persistent(l_Lean_Parser_Tactic_guardExpr);
l_Lean_Parser_Tactic_guardExprConv = _init_l_Lean_Parser_Tactic_guardExprConv();
lean_mark_persistent(l_Lean_Parser_Tactic_guardExprConv);
l_Lean_Parser_Tactic_guardTarget = _init_l_Lean_Parser_Tactic_guardTarget();
lean_mark_persistent(l_Lean_Parser_Tactic_guardTarget);
l_Lean_Parser_Tactic_guardTargetConv = _init_l_Lean_Parser_Tactic_guardTargetConv();
lean_mark_persistent(l_Lean_Parser_Tactic_guardTargetConv);
l_Lean_Parser_Tactic_guardHyp = _init_l_Lean_Parser_Tactic_guardHyp();
lean_mark_persistent(l_Lean_Parser_Tactic_guardHyp);
l_Lean_Parser_Tactic_guardHypConv = _init_l_Lean_Parser_Tactic_guardHypConv();
lean_mark_persistent(l_Lean_Parser_Tactic_guardHypConv);
l_Lean_Parser_Command_guardExprCmd = _init_l_Lean_Parser_Command_guardExprCmd();
lean_mark_persistent(l_Lean_Parser_Command_guardExprCmd);
l_Lean_Parser_Command_guardCmd = _init_l_Lean_Parser_Command_guardCmd();
lean_mark_persistent(l_Lean_Parser_Command_guardCmd);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Conv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Guard(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Conv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Guard(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Guard(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Guard(builtin);
}
#ifdef __cplusplus
}
#endif
