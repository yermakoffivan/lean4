// Lean compiler output
// Module: Lean.Meta.Sym.Simp.ControlFlow
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.App import Lean.Meta.WHNF import Lean.Meta.AppBuilder import Init.Sym.Lemmas
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
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___y_11_; lean_object* v___y_12_; lean_object* v___x_15_; lean_object* v___x_16_; uint8_t v_debug_17_; 
v___x_15_ = lean_st_ref_get(v___y_8_);
lean_dec(v___x_15_);
v___x_16_ = lean_st_ref_get(v___y_4_);
v_debug_17_ = lean_ctor_get_uint8(v___x_16_, sizeof(void*)*10);
lean_dec(v___x_16_);
if (v_debug_17_ == 0)
{
v___y_11_ = v___y_4_;
v___y_12_ = v___y_8_;
goto v___jp_10_;
}
else
{
lean_object* v___x_18_; 
lean_inc_ref(v_f_1_);
v___x_18_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_1_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v___x_19_; 
lean_dec_ref(v___x_18_);
lean_inc_ref(v_a_2_);
v___x_19_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_dec_ref(v___x_19_);
v___y_11_ = v___y_4_;
v___y_12_ = v___y_8_;
goto v___jp_10_;
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec_ref(v_a_2_);
lean_dec_ref(v_f_1_);
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
else
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_35_; 
lean_dec_ref(v_a_2_);
lean_dec_ref(v_f_1_);
v_a_28_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_35_ == 0)
{
v___x_30_ = v___x_18_;
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_18_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_33_; 
if (v_isShared_31_ == 0)
{
v___x_33_ = v___x_30_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_a_28_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
}
v___jp_10_:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = l_Lean_Expr_app___override(v_f_1_, v_a_2_);
v___x_14_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_13_, v___y_11_, v___y_12_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg___boxed(lean_object* v_f_36_, lean_object* v_a_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_36_, v_a_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(lean_object* v_f_46_, lean_object* v_a_u2081_47_, lean_object* v_a_u2082_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_46_, v_a_u2081_47_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
if (lean_obj_tag(v___x_59_) == 0)
{
lean_object* v_a_60_; lean_object* v___x_61_; 
v_a_60_ = lean_ctor_get(v___x_59_, 0);
lean_inc(v_a_60_);
lean_dec_ref(v___x_59_);
v___x_61_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_60_, v_a_u2082_48_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
return v___x_61_;
}
else
{
lean_dec_ref(v_a_u2082_48_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1___boxed(lean_object* v_f_62_, lean_object* v_a_u2081_63_, lean_object* v_a_u2082_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(v_f_62_, v_a_u2081_63_, v_a_u2082_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(lean_object* v_f_76_, lean_object* v_a_u2081_77_, lean_object* v_a_u2082_78_, lean_object* v_a_u2083_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0_spec__1(v_f_76_, v_a_u2081_77_, v_a_u2082_78_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v_a_91_; lean_object* v___x_92_; 
v_a_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_a_91_);
lean_dec_ref(v___x_90_);
v___x_92_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_91_, v_a_u2083_79_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
return v___x_92_;
}
else
{
lean_dec_ref(v_a_u2083_79_);
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0___boxed(lean_object* v_f_93_, lean_object* v_a_u2081_94_, lean_object* v_a_u2082_95_, lean_object* v_a_u2083_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v_f_93_, v_a_u2081_94_, v_a_u2082_95_, v_a_u2083_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(lean_object* v_f_108_, lean_object* v_a_u2081_109_, lean_object* v_a_u2082_110_, lean_object* v_a_u2083_111_, lean_object* v_a_u2084_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v_f_108_, v_a_u2081_109_, v_a_u2082_110_, v_a_u2083_111_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_125_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref(v___x_123_);
v___x_125_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_a_124_, v_a_u2084_112_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
return v___x_125_;
}
else
{
lean_dec_ref(v_a_u2084_112_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0___boxed(lean_object* v_f_126_, lean_object* v_a_u2081_127_, lean_object* v_a_u2082_128_, lean_object* v_a_u2083_129_, lean_object* v_a_u2084_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v_f_126_, v_a_u2081_127_, v_a_u2082_128_, v_a_u2083_129_, v_a_u2084_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
return v_res_141_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_mk_string_unchecked("ite", 3, 3);
return v___x_142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__0);
v___x_144_ = l_Lean_Name_mkStr1(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_mk_string_unchecked("ite_false", 9, 9);
return v___x_145_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__2);
v___x_147_ = l_Lean_Name_mkStr1(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("ite_true", 8, 8);
return v___x_148_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__4);
v___x_150_ = l_Lean_Name_mkStr1(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_mk_string_unchecked("Decidable", 9, 9);
return v___x_151_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__6);
v___x_153_ = l_Lean_Name_mkStr1(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_box(0);
v___x_155_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__7);
v___x_156_ = l_Lean_mkConst(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_157_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_mk_string_unchecked("Sym", 3, 3);
return v___x_158_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked("ite_cond_congr", 14, 14);
return v___x_159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__11);
v___x_161_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10);
v___x_162_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9);
v___x_163_ = l_Lean_Name_mkStr3(v___x_162_, v___x_161_, v___x_160_);
return v___x_163_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_mk_string_unchecked("ite_cond_eq_false", 17, 17);
return v___x_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__13);
v___x_166_ = l_Lean_Name_mkStr1(v___x_165_);
return v___x_166_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_mk_string_unchecked("ite_cond_eq_true", 16, 16);
return v___x_167_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__15);
v___x_169_ = l_Lean_Name_mkStr1(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(uint8_t v___x_170_, lean_object* v_e_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
lean_inc_ref(v_e_171_);
v___x_185_ = l_Lean_Expr_cleanupAnnotations(v_e_171_);
v___x_186_ = l_Lean_Expr_isApp(v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v___x_185_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v_arg_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_arg_187_ = lean_ctor_get(v___x_185_, 1);
lean_inc_ref(v_arg_187_);
v___x_188_ = l_Lean_Expr_appFnCleanup___redArg(v___x_185_);
v___x_189_ = l_Lean_Expr_isApp(v___x_188_);
if (v___x_189_ == 0)
{
lean_dec_ref(v___x_188_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v_arg_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v_arg_190_ = lean_ctor_get(v___x_188_, 1);
lean_inc_ref(v_arg_190_);
v___x_191_ = l_Lean_Expr_appFnCleanup___redArg(v___x_188_);
v___x_192_ = l_Lean_Expr_isApp(v___x_191_);
if (v___x_192_ == 0)
{
lean_dec_ref(v___x_191_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = l_Lean_Expr_appFnCleanup___redArg(v___x_191_);
v___x_194_ = l_Lean_Expr_isApp(v___x_193_);
if (v___x_194_ == 0)
{
lean_dec_ref(v___x_193_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v_arg_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v_arg_195_ = lean_ctor_get(v___x_193_, 1);
lean_inc_ref(v_arg_195_);
v___x_196_ = l_Lean_Expr_appFnCleanup___redArg(v___x_193_);
v___x_197_ = l_Lean_Expr_isApp(v___x_196_);
if (v___x_197_ == 0)
{
lean_dec_ref(v___x_196_);
lean_dec_ref(v_arg_195_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v_arg_198_; lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v_arg_198_ = lean_ctor_get(v___x_196_, 1);
lean_inc_ref(v_arg_198_);
v___x_199_ = l_Lean_Expr_appFnCleanup___redArg(v___x_196_);
v___x_200_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1);
v___x_201_ = l_Lean_Expr_isConstOf(v___x_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_195_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
goto v___jp_182_;
}
else
{
lean_object* v___x_202_; 
lean_inc(v___y_180_);
lean_inc_ref(v___y_179_);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
lean_inc(v___y_174_);
lean_inc_ref(v___y_173_);
lean_inc(v___y_172_);
lean_inc_ref(v_arg_195_);
v___x_202_ = lean_sym_simp(v_arg_195_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref(v___x_202_);
if (lean_obj_tag(v_a_203_) == 0)
{
uint8_t v_contextDependent_204_; lean_object* v___x_205_; 
lean_dec_ref(v_e_171_);
v_contextDependent_204_ = lean_ctor_get_uint8(v_a_203_, 1);
lean_dec_ref(v_a_203_);
v___x_205_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_195_, v___y_175_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_247_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_247_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_247_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_247_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
uint8_t v___x_210_; 
v___x_210_ = lean_unbox(v_a_206_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
lean_del_object(v___x_208_);
v___x_211_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_195_, v___y_175_);
lean_dec_ref(v_arg_195_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_230_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_230_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_230_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_230_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
uint8_t v___x_216_; 
v___x_216_ = lean_unbox(v_a_212_);
lean_dec(v_a_212_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_219_; 
lean_dec(v_a_206_);
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
v___x_217_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_201_, v_contextDependent_204_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_217_);
v___x_219_ = v___x_214_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; lean_object* v___x_228_; 
v___x_221_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__3);
v___x_222_ = l_Lean_Expr_constLevels_x21(v___x_199_);
lean_dec_ref(v___x_199_);
v___x_223_ = l_Lean_mkConst(v___x_221_, v___x_222_);
lean_inc_ref(v_arg_187_);
v___x_224_ = l_Lean_mkApp3(v___x_223_, v_arg_198_, v_arg_190_, v_arg_187_);
v___x_225_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_225_, 0, v_arg_187_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = lean_unbox(v_a_206_);
lean_dec(v_a_206_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*2, v___x_226_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*2 + 1, v_contextDependent_204_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_225_);
v___x_228_ = v___x_214_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_225_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec(v_a_206_);
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
v_a_231_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_211_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_211_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
lean_dec(v_a_206_);
lean_dec_ref(v_arg_195_);
v___x_239_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__5);
v___x_240_ = l_Lean_Expr_constLevels_x21(v___x_199_);
lean_dec_ref(v___x_199_);
v___x_241_ = l_Lean_mkConst(v___x_239_, v___x_240_);
lean_inc_ref(v_arg_190_);
v___x_242_ = l_Lean_mkApp3(v___x_241_, v_arg_198_, v_arg_190_, v_arg_187_);
v___x_243_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_243_, 0, v_arg_190_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*2, v___x_170_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*2 + 1, v_contextDependent_204_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_243_);
v___x_245_ = v___x_208_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_195_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
v_a_248_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_205_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_205_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
lean_object* v_e_x27_256_; lean_object* v_proof_257_; uint8_t v_contextDependent_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_370_; 
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_195_);
v_e_x27_256_ = lean_ctor_get(v_a_203_, 0);
v_proof_257_ = lean_ctor_get(v_a_203_, 1);
v_contextDependent_258_ = lean_ctor_get_uint8(v_a_203_, sizeof(void*)*2 + 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_a_203_);
if (v_isSharedCheck_370_ == 0)
{
v___x_260_ = v_a_203_;
v_isShared_261_ = v_isSharedCheck_370_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_proof_257_);
lean_inc(v_e_x27_256_);
lean_dec(v_a_203_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_370_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_256_, v___y_175_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_361_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_361_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_361_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_361_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
uint8_t v___x_267_; 
v___x_267_ = lean_unbox(v_a_263_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
lean_del_object(v___x_265_);
v___x_268_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_256_, v___y_175_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_343_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_343_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_343_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_343_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
uint8_t v___x_273_; 
v___x_273_ = lean_unbox(v_a_269_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_del_object(v___x_271_);
lean_dec(v_a_263_);
v___x_274_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8);
lean_inc_ref(v_e_x27_256_);
v___x_275_ = l_Lean_Expr_app___override(v___x_274_, v_e_x27_256_);
v___x_276_ = lean_box(0);
v___x_277_ = l_Lean_Meta_trySynthInstance(v___x_275_, v___x_276_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_324_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_324_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_324_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_324_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
if (lean_obj_tag(v_a_278_) == 1)
{
lean_object* v_a_282_; lean_object* v___x_283_; 
lean_del_object(v___x_280_);
lean_dec(v_a_269_);
v_a_282_ = lean_ctor_get(v_a_278_, 0);
lean_inc(v_a_282_);
lean_dec_ref(v_a_278_);
v___x_283_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_282_, v___y_176_, v___y_180_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc_n(v_a_284_, 2);
lean_dec_ref(v___x_283_);
v___x_285_ = lean_unsigned_to_nat(4u);
v___x_286_ = l_Lean_Expr_getBoundedAppFn(v___x_285_, v_e_171_);
lean_inc_ref(v_e_x27_256_);
v___x_287_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_286_, v_e_x27_256_, v_a_284_, v_arg_190_, v_arg_187_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_301_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_301_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_292_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__12);
v___x_293_ = l_Lean_Expr_replaceFn(v_e_171_, v___x_292_);
v___x_294_ = l_Lean_mkApp3(v___x_293_, v_e_x27_256_, v_a_284_, v_proof_257_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_294_);
lean_ctor_set(v___x_260_, 0, v_a_288_);
v___x_296_ = v___x_260_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_288_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_294_);
lean_ctor_set_uint8(v_reuseFailAlloc_300_, sizeof(void*)*2 + 1, v_contextDependent_258_);
v___x_296_ = v_reuseFailAlloc_300_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_298_; 
lean_ctor_set_uint8(v___x_296_, sizeof(void*)*2, v___x_201_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_296_);
v___x_298_ = v___x_290_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
lean_dec(v_a_284_);
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_e_171_);
v_a_302_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_287_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_287_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
v_a_310_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_283_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_283_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
else
{
lean_object* v___x_318_; uint8_t v___x_319_; uint8_t v___x_320_; lean_object* v___x_322_; 
lean_dec(v_a_278_);
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
v___x_318_ = lean_alloc_ctor(0, 0, 2);
v___x_319_ = lean_unbox(v_a_269_);
lean_ctor_set_uint8(v___x_318_, 0, v___x_319_);
v___x_320_ = lean_unbox(v_a_269_);
lean_dec(v_a_269_);
lean_ctor_set_uint8(v___x_318_, 1, v___x_320_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_318_);
v___x_322_ = v___x_280_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_318_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_a_269_);
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
v_a_325_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_277_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_277_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
lean_dec(v_a_269_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
v___x_333_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__14);
v___x_334_ = l_Lean_Expr_replaceFn(v_e_171_, v___x_333_);
v___x_335_ = l_Lean_Expr_app___override(v___x_334_, v_proof_257_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_335_);
lean_ctor_set(v___x_260_, 0, v_arg_187_);
v___x_337_ = v___x_260_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_arg_187_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_335_);
v___x_337_ = v_reuseFailAlloc_342_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
uint8_t v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_unbox(v_a_263_);
lean_dec(v_a_263_);
lean_ctor_set_uint8(v___x_337_, sizeof(void*)*2, v___x_338_);
lean_ctor_set_uint8(v___x_337_, sizeof(void*)*2 + 1, v_contextDependent_258_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_337_);
v___x_340_ = v___x_271_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_337_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_263_);
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
v_a_344_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_268_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_268_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_356_; 
lean_dec(v_a_263_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_187_);
v___x_352_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__16);
v___x_353_ = l_Lean_Expr_replaceFn(v_e_171_, v___x_352_);
v___x_354_ = l_Lean_Expr_app___override(v___x_353_, v_proof_257_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_354_);
lean_ctor_set(v___x_260_, 0, v_arg_190_);
v___x_356_ = v___x_260_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_arg_190_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v___x_354_);
lean_ctor_set_uint8(v_reuseFailAlloc_360_, sizeof(void*)*2 + 1, v_contextDependent_258_);
v___x_356_ = v_reuseFailAlloc_360_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_358_; 
lean_ctor_set_uint8(v___x_356_, sizeof(void*)*2, v___x_170_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_356_);
v___x_358_ = v___x_265_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_del_object(v___x_260_);
lean_dec_ref(v_proof_257_);
lean_dec_ref(v_e_x27_256_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
v_a_362_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_262_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_262_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_195_);
lean_dec_ref(v_arg_190_);
lean_dec_ref(v_arg_187_);
lean_dec_ref(v_e_171_);
return v___x_202_;
}
}
}
}
}
}
}
v___jp_182_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_183_, 0, v___x_170_);
lean_ctor_set_uint8(v___x_183_, 1, v___x_170_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed(lean_object* v___x_371_, lean_object* v_e_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
uint8_t v___x_21637__boxed_383_; lean_object* v_res_384_; 
v___x_21637__boxed_383_ = lean_unbox(v___x_371_);
v_res_384_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0(v___x_21637__boxed_383_, v_e_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(lean_object* v_e_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_numArgs_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v_numArgs_396_ = l_Lean_Expr_getAppNumArgs(v_e_385_);
v___x_397_ = lean_unsigned_to_nat(5u);
v___x_398_ = lean_nat_dec_lt(v_numArgs_396_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___f_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_399_ = lean_box(v___x_398_);
v___f_400_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_400_, 0, v___x_399_);
v___x_401_ = lean_nat_sub(v_numArgs_396_, v___x_397_);
lean_dec(v_numArgs_396_);
v___x_402_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_385_, v___x_401_, v___f_400_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
lean_dec(v___x_401_);
return v___x_402_;
}
else
{
uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_numArgs_396_);
lean_dec_ref(v_e_385_);
v___x_403_ = 0;
v___x_404_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_404_, 0, v___x_398_);
lean_ctor_set_uint8(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___boxed(lean_object* v_e_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(v_e_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec(v_a_407_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(lean_object* v_f_418_, lean_object* v_a_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___redArg(v_f_418_, v_a_419_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1___boxed(lean_object* v_f_431_, lean_object* v_a_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__1(v_f_431_, v_a_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
return v_res_443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0(void){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = lean_mk_string_unchecked("dite", 4, 4);
return v___x_444_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__0);
v___x_446_ = l_Lean_Name_mkStr1(v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2(void){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = lean_mk_string_unchecked("not_false", 9, 9);
return v___x_447_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__2);
v___x_449_ = l_Lean_Name_mkStr1(v___x_448_);
return v___x_449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_box(0);
v___x_451_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__3);
v___x_452_ = l_Lean_mkConst(v___x_451_, v___x_450_);
return v___x_452_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_453_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__4);
v___x_454_ = lean_unsigned_to_nat(1u);
v___x_455_ = lean_mk_empty_array_with_capacity(v___x_454_);
v___x_456_ = lean_array_push(v___x_455_, v___x_453_);
return v___x_456_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6(void){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = lean_mk_string_unchecked("dite_false", 10, 10);
return v___x_457_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__6);
v___x_459_ = l_Lean_Name_mkStr1(v___x_458_);
return v___x_459_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8(void){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = lean_mk_string_unchecked("True", 4, 4);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9(void){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_mk_string_unchecked("intro", 5, 5);
return v___x_461_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_462_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__9);
v___x_463_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__8);
v___x_464_ = l_Lean_Name_mkStr2(v___x_463_, v___x_462_);
return v___x_464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_box(0);
v___x_466_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__10);
v___x_467_ = l_Lean_mkConst(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_468_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__11);
v___x_469_ = lean_unsigned_to_nat(1u);
v___x_470_ = lean_mk_empty_array_with_capacity(v___x_469_);
v___x_471_ = lean_array_push(v___x_470_, v___x_468_);
return v___x_471_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13(void){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_mk_string_unchecked("dite_true", 9, 9);
return v___x_472_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__13);
v___x_474_ = l_Lean_Name_mkStr1(v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15(void){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_475_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__15);
v___x_477_ = l_Lean_Name_mkStr1(v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17(void){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_478_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18(void){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = lean_mk_string_unchecked("mpr_prop", 8, 8);
return v___x_479_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__18);
v___x_481_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17);
v___x_482_ = l_Lean_Name_mkStr2(v___x_481_, v___x_480_);
return v___x_482_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_box(0);
v___x_484_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__19);
v___x_485_ = l_Lean_mkConst(v___x_484_, v___x_483_);
return v___x_485_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l_Lean_mkBVar(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22(void){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_mk_string_unchecked("mpr_not", 7, 7);
return v___x_488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__22);
v___x_490_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__17);
v___x_491_ = l_Lean_Name_mkStr2(v___x_490_, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_box(0);
v___x_493_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__23);
v___x_494_ = l_Lean_mkConst(v___x_493_, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25(void){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lean_mk_string_unchecked("dite_cond_congr", 15, 15);
return v___x_495_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_496_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__25);
v___x_497_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10);
v___x_498_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9);
v___x_499_ = l_Lean_Name_mkStr3(v___x_498_, v___x_497_, v___x_496_);
return v___x_499_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27(void){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = lean_mk_string_unchecked("dite_cond_eq_false", 18, 18);
return v___x_500_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__27);
v___x_502_ = l_Lean_Name_mkStr1(v___x_501_);
return v___x_502_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_mk_string_unchecked("dite_cond_eq_true", 17, 17);
return v___x_503_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__29);
v___x_505_ = l_Lean_Name_mkStr1(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(uint8_t v___x_506_, lean_object* v_e_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v___x_521_; uint8_t v___x_522_; 
lean_inc_ref(v_e_507_);
v___x_521_ = l_Lean_Expr_cleanupAnnotations(v_e_507_);
v___x_522_ = l_Lean_Expr_isApp(v___x_521_);
if (v___x_522_ == 0)
{
lean_dec_ref(v___x_521_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v_arg_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v_arg_523_ = lean_ctor_get(v___x_521_, 1);
lean_inc_ref(v_arg_523_);
v___x_524_ = l_Lean_Expr_appFnCleanup___redArg(v___x_521_);
v___x_525_ = l_Lean_Expr_isApp(v___x_524_);
if (v___x_525_ == 0)
{
lean_dec_ref(v___x_524_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v_arg_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v_arg_526_ = lean_ctor_get(v___x_524_, 1);
lean_inc_ref(v_arg_526_);
v___x_527_ = l_Lean_Expr_appFnCleanup___redArg(v___x_524_);
v___x_528_ = l_Lean_Expr_isApp(v___x_527_);
if (v___x_528_ == 0)
{
lean_dec_ref(v___x_527_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = l_Lean_Expr_appFnCleanup___redArg(v___x_527_);
v___x_530_ = l_Lean_Expr_isApp(v___x_529_);
if (v___x_530_ == 0)
{
lean_dec_ref(v___x_529_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v_arg_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v_arg_531_ = lean_ctor_get(v___x_529_, 1);
lean_inc_ref(v_arg_531_);
v___x_532_ = l_Lean_Expr_appFnCleanup___redArg(v___x_529_);
v___x_533_ = l_Lean_Expr_isApp(v___x_532_);
if (v___x_533_ == 0)
{
lean_dec_ref(v___x_532_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v_arg_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v_arg_534_ = lean_ctor_get(v___x_532_, 1);
lean_inc_ref(v_arg_534_);
v___x_535_ = l_Lean_Expr_appFnCleanup___redArg(v___x_532_);
v___x_536_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1);
v___x_537_ = l_Lean_Expr_isConstOf(v___x_535_, v___x_536_);
if (v___x_537_ == 0)
{
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
goto v___jp_518_;
}
else
{
lean_object* v___x_538_; 
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
lean_inc(v___y_510_);
lean_inc_ref(v___y_509_);
lean_inc(v___y_508_);
lean_inc_ref(v_arg_531_);
v___x_538_ = lean_sym_simp(v_arg_531_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_539_);
lean_dec_ref(v___x_538_);
if (lean_obj_tag(v_a_539_) == 0)
{
uint8_t v_contextDependent_540_; lean_object* v___x_541_; 
lean_dec_ref(v_e_507_);
v_contextDependent_540_ = lean_ctor_get_uint8(v_a_539_, 1);
lean_dec_ref(v_a_539_);
v___x_541_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_531_, v___y_511_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; uint8_t v___x_543_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
v___x_543_ = lean_unbox(v_a_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_531_, v___y_511_);
lean_dec_ref(v_arg_531_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_581_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_581_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_581_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_581_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
uint8_t v___x_549_; 
v___x_549_ = lean_unbox(v_a_545_);
lean_dec(v_a_545_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; lean_object* v___x_552_; 
lean_dec(v_a_542_);
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
v___x_550_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_537_, v_contextDependent_540_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_550_);
v___x_552_ = v___x_547_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
else
{
lean_object* v___x_554_; uint8_t v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_del_object(v___x_547_);
v___x_554_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__5);
v___x_555_ = lean_unbox(v_a_542_);
v___x_556_ = lean_unbox(v_a_542_);
lean_inc_ref(v_arg_523_);
v___x_557_ = l_Lean_Expr_betaRev(v_arg_523_, v___x_554_, v___x_555_, v___x_556_);
v___x_558_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_557_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_572_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_572_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_572_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_572_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; lean_object* v___x_570_; 
v___x_563_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__7);
v___x_564_ = l_Lean_Expr_constLevels_x21(v___x_535_);
lean_dec_ref(v___x_535_);
v___x_565_ = l_Lean_mkConst(v___x_563_, v___x_564_);
v___x_566_ = l_Lean_mkApp3(v___x_565_, v_arg_534_, v_arg_526_, v_arg_523_);
v___x_567_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_567_, 0, v_a_559_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_unbox(v_a_542_);
lean_dec(v_a_542_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*2, v___x_568_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*2 + 1, v_contextDependent_540_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_567_);
v___x_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_567_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec(v_a_542_);
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
v_a_573_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_558_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_558_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_dec(v_a_542_);
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
v_a_582_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_544_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_544_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec(v_a_542_);
lean_dec_ref(v_arg_531_);
v___x_590_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__12);
lean_inc_ref(v_arg_526_);
v___x_591_ = l_Lean_Expr_betaRev(v_arg_526_, v___x_590_, v___x_506_, v___x_506_);
v___x_592_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_591_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_605_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_605_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_605_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_605_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_597_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__14);
v___x_598_ = l_Lean_Expr_constLevels_x21(v___x_535_);
lean_dec_ref(v___x_535_);
v___x_599_ = l_Lean_mkConst(v___x_597_, v___x_598_);
v___x_600_ = l_Lean_mkApp3(v___x_599_, v_arg_534_, v_arg_526_, v_arg_523_);
v___x_601_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_601_, 0, v_a_593_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
lean_ctor_set_uint8(v___x_601_, sizeof(void*)*2, v___x_506_);
lean_ctor_set_uint8(v___x_601_, sizeof(void*)*2 + 1, v_contextDependent_540_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_601_);
v___x_603_ = v___x_595_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
v_a_606_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_592_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
v_a_614_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_541_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_541_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
else
{
lean_object* v_e_x27_622_; lean_object* v_proof_623_; uint8_t v_contextDependent_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_838_; 
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
v_e_x27_622_ = lean_ctor_get(v_a_539_, 0);
v_proof_623_ = lean_ctor_get(v_a_539_, 1);
v_contextDependent_624_ = lean_ctor_get_uint8(v_a_539_, sizeof(void*)*2 + 1);
v_isSharedCheck_838_ = !lean_is_exclusive(v_a_539_);
if (v_isSharedCheck_838_ == 0)
{
v___x_626_ = v_a_539_;
v_isShared_627_ = v_isSharedCheck_838_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_proof_623_);
lean_inc(v_e_x27_622_);
lean_dec(v_a_539_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_838_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_622_, v___y_511_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; uint8_t v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref(v___x_628_);
v___x_630_ = lean_unbox(v_a_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_622_, v___y_511_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; uint8_t v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref(v___x_631_);
v___x_633_ = lean_unbox(v_a_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_a_629_);
v___x_634_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__8);
lean_inc_ref(v_e_x27_622_);
v___x_635_ = l_Lean_Expr_app___override(v___x_634_, v_e_x27_622_);
v___x_636_ = lean_box(0);
v___x_637_ = l_Lean_Meta_trySynthInstance(v___x_635_, v___x_636_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_734_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_734_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_734_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_734_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
if (lean_obj_tag(v_a_638_) == 1)
{
lean_object* v_a_642_; lean_object* v___x_643_; 
lean_del_object(v___x_640_);
v_a_642_ = lean_ctor_get(v_a_638_, 0);
lean_inc(v_a_642_);
lean_dec_ref(v_a_638_);
v___x_643_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_642_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref(v___x_643_);
v___x_645_ = l_Lean_Meta_Sym_shareCommon___redArg(v_proof_623_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; uint8_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc_n(v_a_646_, 2);
lean_dec_ref(v___x_645_);
v___x_647_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__16);
v___x_648_ = 0;
v___x_649_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__20);
v___x_650_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__21);
lean_inc_ref_n(v_e_x27_622_, 2);
lean_inc_ref(v_arg_531_);
v___x_651_ = l_Lean_mkApp4(v___x_649_, v_arg_531_, v_e_x27_622_, v_a_646_, v___x_650_);
v___x_652_ = lean_unsigned_to_nat(1u);
v___x_653_ = lean_mk_empty_array_with_capacity(v___x_652_);
lean_inc_ref(v___x_653_);
v___x_654_ = lean_array_push(v___x_653_, v___x_651_);
v___x_655_ = lean_unbox(v_a_632_);
v___x_656_ = lean_unbox(v_a_632_);
v___x_657_ = l_Lean_Expr_betaRev(v_arg_526_, v___x_654_, v___x_655_, v___x_656_);
lean_dec_ref(v___x_654_);
v___x_658_ = l_Lean_mkLambda(v___x_647_, v___x_648_, v_e_x27_622_, v___x_657_);
v___x_659_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_658_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref(v___x_659_);
lean_inc_ref_n(v_e_x27_622_, 2);
v___x_661_ = l_Lean_mkNot(v_e_x27_622_);
v___x_662_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__24);
lean_inc(v_a_646_);
v___x_663_ = l_Lean_mkApp4(v___x_662_, v_arg_531_, v_e_x27_622_, v_a_646_, v___x_650_);
v___x_664_ = lean_array_push(v___x_653_, v___x_663_);
v___x_665_ = lean_unbox(v_a_632_);
v___x_666_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
v___x_667_ = l_Lean_Expr_betaRev(v_arg_523_, v___x_664_, v___x_665_, v___x_666_);
lean_dec_ref(v___x_664_);
v___x_668_ = l_Lean_mkLambda(v___x_647_, v___x_648_, v___x_661_, v___x_667_);
v___x_669_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_668_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref(v___x_669_);
v___x_671_ = lean_unsigned_to_nat(4u);
v___x_672_ = l_Lean_Expr_getBoundedAppFn(v___x_671_, v_e_507_);
lean_inc(v_a_644_);
lean_inc_ref(v_e_x27_622_);
v___x_673_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0(v___x_672_, v_e_x27_622_, v_a_644_, v_a_660_, v_a_670_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_687_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_687_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_687_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_678_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__26);
v___x_679_ = l_Lean_Expr_replaceFn(v_e_507_, v___x_678_);
v___x_680_ = l_Lean_mkApp3(v___x_679_, v_e_x27_622_, v_a_644_, v_a_646_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_680_);
lean_ctor_set(v___x_626_, 0, v_a_674_);
v___x_682_ = v___x_626_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_674_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_680_);
lean_ctor_set_uint8(v_reuseFailAlloc_686_, sizeof(void*)*2 + 1, v_contextDependent_624_);
v___x_682_ = v_reuseFailAlloc_686_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_684_; 
lean_ctor_set_uint8(v___x_682_, sizeof(void*)*2, v___x_537_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_682_);
v___x_684_ = v___x_676_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec(v_a_646_);
lean_dec(v_a_644_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_e_507_);
v_a_688_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_673_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_673_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec(v_a_660_);
lean_dec(v_a_646_);
lean_dec(v_a_644_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_e_507_);
v_a_696_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_669_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_669_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v___x_653_);
lean_dec(v_a_646_);
lean_dec(v_a_644_);
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_704_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_659_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_659_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v_a_644_);
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_712_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_645_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_645_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_720_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_643_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_643_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v___x_728_; uint8_t v___x_729_; uint8_t v___x_730_; lean_object* v___x_732_; 
lean_dec(v_a_638_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v___x_728_ = lean_alloc_ctor(0, 0, 2);
v___x_729_ = lean_unbox(v_a_632_);
lean_ctor_set_uint8(v___x_728_, 0, v___x_729_);
v___x_730_ = lean_unbox(v_a_632_);
lean_dec(v_a_632_);
lean_ctor_set_uint8(v___x_728_, 1, v___x_730_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 0, v___x_728_);
v___x_732_ = v___x_640_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_728_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_632_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_735_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_637_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_637_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec(v_a_632_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_526_);
lean_inc_ref(v_proof_623_);
v___x_743_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_531_, v_proof_623_);
v___x_744_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_743_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref(v___x_744_);
v___x_746_ = lean_unsigned_to_nat(1u);
v___x_747_ = lean_mk_empty_array_with_capacity(v___x_746_);
v___x_748_ = lean_array_push(v___x_747_, v_a_745_);
v___x_749_ = lean_unbox(v_a_629_);
v___x_750_ = lean_unbox(v_a_629_);
v___x_751_ = l_Lean_Expr_betaRev(v_arg_523_, v___x_748_, v___x_749_, v___x_750_);
lean_dec_ref(v___x_748_);
v___x_752_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_751_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_767_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_767_ == 0)
{
v___x_755_ = v___x_752_;
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_757_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__28);
v___x_758_ = l_Lean_Expr_replaceFn(v_e_507_, v___x_757_);
v___x_759_ = l_Lean_Expr_app___override(v___x_758_, v_proof_623_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_759_);
lean_ctor_set(v___x_626_, 0, v_a_753_);
v___x_761_ = v___x_626_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_753_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_766_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
uint8_t v___x_762_; lean_object* v___x_764_; 
v___x_762_ = lean_unbox(v_a_629_);
lean_dec(v_a_629_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*2, v___x_762_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*2 + 1, v_contextDependent_624_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_761_);
v___x_764_ = v___x_755_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_761_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_507_);
v_a_768_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_752_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_752_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_776_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_744_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_744_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_629_);
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_784_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_631_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_631_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v_a_629_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_523_);
lean_inc_ref(v_proof_623_);
v___x_792_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_531_, v_proof_623_);
v___x_793_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_792_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref(v___x_793_);
v___x_795_ = lean_unsigned_to_nat(1u);
v___x_796_ = lean_mk_empty_array_with_capacity(v___x_795_);
v___x_797_ = lean_array_push(v___x_796_, v_a_794_);
v___x_798_ = l_Lean_Expr_betaRev(v_arg_526_, v___x_797_, v___x_506_, v___x_506_);
lean_dec_ref(v___x_797_);
v___x_799_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_798_, v___y_512_, v___y_516_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_813_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_813_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_804_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__30);
v___x_805_ = l_Lean_Expr_replaceFn(v_e_507_, v___x_804_);
v___x_806_ = l_Lean_Expr_app___override(v___x_805_, v_proof_623_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 1, v___x_806_);
lean_ctor_set(v___x_626_, 0, v_a_800_);
v___x_808_ = v___x_626_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_800_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v___x_806_);
lean_ctor_set_uint8(v_reuseFailAlloc_812_, sizeof(void*)*2 + 1, v_contextDependent_624_);
v___x_808_ = v_reuseFailAlloc_812_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_810_; 
lean_ctor_set_uint8(v___x_808_, sizeof(void*)*2, v___x_506_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 0, v___x_808_);
v___x_810_ = v___x_802_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_507_);
v_a_814_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_799_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_799_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_e_507_);
v_a_822_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_793_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_793_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_proof_623_);
lean_dec_ref(v_e_x27_622_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
v_a_830_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_628_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_628_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_535_);
lean_dec_ref(v_arg_534_);
lean_dec_ref(v_arg_531_);
lean_dec_ref(v_arg_526_);
lean_dec_ref(v_arg_523_);
lean_dec_ref(v_e_507_);
return v___x_538_;
}
}
}
}
}
}
}
v___jp_518_:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_519_, 0, v___x_506_);
lean_ctor_set_uint8(v___x_519_, 1, v___x_506_);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed(lean_object* v___x_839_, lean_object* v_e_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
uint8_t v___x_37758__boxed_851_; lean_object* v_res_852_; 
v___x_37758__boxed_851_ = lean_unbox(v___x_839_);
v_res_852_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0(v___x_37758__boxed_851_, v_e_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(lean_object* v_e_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_numArgs_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v_numArgs_864_ = l_Lean_Expr_getAppNumArgs(v_e_853_);
v___x_865_ = lean_unsigned_to_nat(5u);
v___x_866_ = lean_nat_dec_lt(v_numArgs_864_, v___x_865_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___f_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_867_ = lean_box(v___x_866_);
v___f_868_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___boxed), 12, 1);
lean_closure_set(v___f_868_, 0, v___x_867_);
v___x_869_ = lean_nat_sub(v_numArgs_864_, v___x_865_);
lean_dec(v_numArgs_864_);
v___x_870_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_853_, v___x_869_, v___f_868_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v___x_869_);
return v___x_870_;
}
else
{
uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec(v_numArgs_864_);
lean_dec_ref(v_e_853_);
v___x_871_ = 0;
v___x_872_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_872_, 0, v___x_866_);
lean_ctor_set_uint8(v___x_872_, 1, v___x_871_);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___boxed(lean_object* v_e_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
return v_res_885_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0(void){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lean_mk_string_unchecked("cond", 4, 4);
return v___x_886_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__0);
v___x_888_ = l_Lean_Name_mkStr1(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2(void){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = lean_mk_string_unchecked("cond_false", 10, 10);
return v___x_889_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__2);
v___x_891_ = l_Lean_Name_mkStr1(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4(void){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lean_mk_string_unchecked("cond_true", 9, 9);
return v___x_892_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__4);
v___x_894_ = l_Lean_Name_mkStr1(v___x_893_);
return v___x_894_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6(void){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_mk_string_unchecked("cond_cond_congr", 15, 15);
return v___x_895_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_896_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__6);
v___x_897_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10);
v___x_898_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9);
v___x_899_ = l_Lean_Name_mkStr3(v___x_898_, v___x_897_, v___x_896_);
return v___x_899_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8(void){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = lean_mk_string_unchecked("cond_cond_eq_false", 18, 18);
return v___x_900_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_901_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__8);
v___x_902_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10);
v___x_903_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9);
v___x_904_ = l_Lean_Name_mkStr3(v___x_903_, v___x_902_, v___x_901_);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10(void){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = lean_mk_string_unchecked("cond_cond_eq_true", 17, 17);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_906_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__10);
v___x_907_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__10);
v___x_908_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__9);
v___x_909_ = l_Lean_Name_mkStr3(v___x_908_, v___x_907_, v___x_906_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0(uint8_t v___x_910_, lean_object* v_e_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_925_; uint8_t v___x_926_; 
lean_inc_ref(v_e_911_);
v___x_925_ = l_Lean_Expr_cleanupAnnotations(v_e_911_);
v___x_926_ = l_Lean_Expr_isApp(v___x_925_);
if (v___x_926_ == 0)
{
lean_dec_ref(v___x_925_);
lean_dec_ref(v_e_911_);
goto v___jp_922_;
}
else
{
lean_object* v_arg_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v_arg_927_ = lean_ctor_get(v___x_925_, 1);
lean_inc_ref(v_arg_927_);
v___x_928_ = l_Lean_Expr_appFnCleanup___redArg(v___x_925_);
v___x_929_ = l_Lean_Expr_isApp(v___x_928_);
if (v___x_929_ == 0)
{
lean_dec_ref(v___x_928_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
goto v___jp_922_;
}
else
{
lean_object* v_arg_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_arg_930_ = lean_ctor_get(v___x_928_, 1);
lean_inc_ref(v_arg_930_);
v___x_931_ = l_Lean_Expr_appFnCleanup___redArg(v___x_928_);
v___x_932_ = l_Lean_Expr_isApp(v___x_931_);
if (v___x_932_ == 0)
{
lean_dec_ref(v___x_931_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
goto v___jp_922_;
}
else
{
lean_object* v_arg_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v_arg_933_ = lean_ctor_get(v___x_931_, 1);
lean_inc_ref(v_arg_933_);
v___x_934_ = l_Lean_Expr_appFnCleanup___redArg(v___x_931_);
v___x_935_ = l_Lean_Expr_isApp(v___x_934_);
if (v___x_935_ == 0)
{
lean_dec_ref(v___x_934_);
lean_dec_ref(v_arg_933_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
goto v___jp_922_;
}
else
{
lean_object* v_arg_936_; lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_arg_936_ = lean_ctor_get(v___x_934_, 1);
lean_inc_ref(v_arg_936_);
v___x_937_ = l_Lean_Expr_appFnCleanup___redArg(v___x_934_);
v___x_938_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1);
v___x_939_ = l_Lean_Expr_isConstOf(v___x_937_, v___x_938_);
if (v___x_939_ == 0)
{
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_933_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
goto v___jp_922_;
}
else
{
lean_object* v___x_940_; 
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
lean_inc(v___y_916_);
lean_inc_ref(v___y_915_);
lean_inc(v___y_914_);
lean_inc_ref(v___y_913_);
lean_inc(v___y_912_);
lean_inc_ref(v_arg_933_);
v___x_940_ = lean_sym_simp(v_arg_933_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref(v___x_940_);
if (lean_obj_tag(v_a_941_) == 0)
{
uint8_t v_contextDependent_942_; lean_object* v___x_943_; 
lean_dec_ref(v_e_911_);
v_contextDependent_942_ = lean_ctor_get_uint8(v_a_941_, 1);
lean_dec_ref(v_a_941_);
v___x_943_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_915_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_984_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_984_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_984_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_984_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
uint8_t v___x_948_; 
v___x_948_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_933_, v_a_944_);
lean_dec(v_a_944_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
lean_del_object(v___x_946_);
v___x_949_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_915_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_967_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_967_ == 0)
{
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_967_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_967_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
uint8_t v___x_954_; 
v___x_954_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_933_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_arg_933_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; lean_object* v___x_957_; 
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
v___x_955_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_939_, v_contextDependent_942_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_955_);
v___x_957_ = v___x_952_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_959_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__3);
v___x_960_ = l_Lean_Expr_constLevels_x21(v___x_937_);
lean_dec_ref(v___x_937_);
v___x_961_ = l_Lean_mkConst(v___x_959_, v___x_960_);
lean_inc_ref(v_arg_927_);
v___x_962_ = l_Lean_mkApp3(v___x_961_, v_arg_936_, v_arg_930_, v_arg_927_);
v___x_963_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_963_, 0, v_arg_927_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
lean_ctor_set_uint8(v___x_963_, sizeof(void*)*2, v___x_948_);
lean_ctor_set_uint8(v___x_963_, sizeof(void*)*2 + 1, v_contextDependent_942_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_963_);
v___x_965_ = v___x_952_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_933_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
v_a_968_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_949_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_949_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
lean_dec_ref(v_arg_933_);
v___x_976_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__5);
v___x_977_ = l_Lean_Expr_constLevels_x21(v___x_937_);
lean_dec_ref(v___x_937_);
v___x_978_ = l_Lean_mkConst(v___x_976_, v___x_977_);
lean_inc_ref(v_arg_930_);
v___x_979_ = l_Lean_mkApp3(v___x_978_, v_arg_936_, v_arg_930_, v_arg_927_);
v___x_980_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_980_, 0, v_arg_930_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*2, v___x_910_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*2 + 1, v_contextDependent_942_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_980_);
v___x_982_ = v___x_946_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_933_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
v_a_985_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_943_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_943_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v_e_x27_993_; lean_object* v_proof_994_; uint8_t v_contextDependent_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1072_; 
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_933_);
v_e_x27_993_ = lean_ctor_get(v_a_941_, 0);
v_proof_994_ = lean_ctor_get(v_a_941_, 1);
v_contextDependent_995_ = lean_ctor_get_uint8(v_a_941_, sizeof(void*)*2 + 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_a_941_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_997_ = v_a_941_;
v_isShared_998_ = v_isSharedCheck_1072_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_proof_994_);
lean_inc(v_e_x27_993_);
lean_dec(v_a_941_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1072_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_915_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1063_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1063_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1063_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
uint8_t v___x_1004_; 
v___x_1004_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_e_x27_993_, v_a_1000_);
lean_dec(v_a_1000_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; 
lean_del_object(v___x_1002_);
v___x_1005_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_915_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1045_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1045_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1045_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
uint8_t v___x_1010_; 
v___x_1010_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_e_x27_993_, v_a_1006_);
lean_dec(v_a_1006_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
lean_del_object(v___x_1008_);
v___x_1011_ = lean_unsigned_to_nat(3u);
v___x_1012_ = l_Lean_Expr_getBoundedAppFn(v___x_1011_, v_e_911_);
lean_inc_ref(v_e_x27_993_);
v___x_1013_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte_spec__0_spec__0(v___x_1012_, v_e_x27_993_, v_arg_930_, v_arg_927_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1027_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1016_ = v___x_1013_;
v_isShared_1017_ = v_isSharedCheck_1027_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1013_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1027_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1018_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__7);
v___x_1019_ = l_Lean_Expr_replaceFn(v_e_911_, v___x_1018_);
v___x_1020_ = l_Lean_mkAppB(v___x_1019_, v_e_x27_993_, v_proof_994_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1020_);
lean_ctor_set(v___x_997_, 0, v_a_1014_);
v___x_1022_ = v___x_997_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1014_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v___x_1020_);
lean_ctor_set_uint8(v_reuseFailAlloc_1026_, sizeof(void*)*2 + 1, v_contextDependent_995_);
v___x_1022_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1024_; 
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*2, v___x_939_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 0, v___x_1022_);
v___x_1024_ = v___x_1016_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_del_object(v___x_997_);
lean_dec_ref(v_proof_994_);
lean_dec_ref(v_e_x27_993_);
lean_dec_ref(v_e_911_);
v_a_1028_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1013_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1013_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
else
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
lean_dec_ref(v_e_x27_993_);
lean_dec_ref(v_arg_930_);
v___x_1036_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__9);
v___x_1037_ = l_Lean_Expr_replaceFn(v_e_911_, v___x_1036_);
v___x_1038_ = l_Lean_Expr_app___override(v___x_1037_, v_proof_994_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1038_);
lean_ctor_set(v___x_997_, 0, v_arg_927_);
v___x_1040_ = v___x_997_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_arg_927_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v___x_1038_);
lean_ctor_set_uint8(v_reuseFailAlloc_1044_, sizeof(void*)*2 + 1, v_contextDependent_995_);
v___x_1040_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*2, v___x_1004_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1040_);
v___x_1042_ = v___x_1008_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_del_object(v___x_997_);
lean_dec_ref(v_proof_994_);
lean_dec_ref(v_e_x27_993_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
v_a_1046_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1005_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1005_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
lean_dec_ref(v_e_x27_993_);
lean_dec_ref(v_arg_927_);
v___x_1054_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__11);
v___x_1055_ = l_Lean_Expr_replaceFn(v_e_911_, v___x_1054_);
v___x_1056_ = l_Lean_Expr_app___override(v___x_1055_, v_proof_994_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1056_);
lean_ctor_set(v___x_997_, 0, v_arg_930_);
v___x_1058_ = v___x_997_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_arg_930_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___x_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1062_, sizeof(void*)*2 + 1, v_contextDependent_995_);
v___x_1058_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1060_; 
lean_ctor_set_uint8(v___x_1058_, sizeof(void*)*2, v___x_910_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1058_);
v___x_1060_ = v___x_1002_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_del_object(v___x_997_);
lean_dec_ref(v_proof_994_);
lean_dec_ref(v_e_x27_993_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
v_a_1064_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_999_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_999_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_937_);
lean_dec_ref(v_arg_936_);
lean_dec_ref(v_arg_933_);
lean_dec_ref(v_arg_930_);
lean_dec_ref(v_arg_927_);
lean_dec_ref(v_e_911_);
return v___x_940_;
}
}
}
}
}
}
v___jp_922_:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_923_, 0, v___x_910_);
lean_ctor_set_uint8(v___x_923_, 1, v___x_910_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed(lean_object* v___x_1073_, lean_object* v_e_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v___x_14280__boxed_1085_; lean_object* v_res_1086_; 
v___x_14280__boxed_1085_ = lean_unbox(v___x_1073_);
v_res_1086_ = l_Lean_Meta_Sym_Simp_simpCond___lam__0(v___x_14280__boxed_1085_, v_e_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond(lean_object* v_e_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_numArgs_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v_numArgs_1098_ = l_Lean_Expr_getAppNumArgs(v_e_1087_);
v___x_1099_ = lean_unsigned_to_nat(4u);
v___x_1100_ = lean_nat_dec_lt(v_numArgs_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___f_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1101_ = lean_box(v___x_1100_);
v___f_1102_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpCond___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1102_, 0, v___x_1101_);
v___x_1103_ = lean_nat_sub(v_numArgs_1098_, v___x_1099_);
lean_dec(v_numArgs_1098_);
v___x_1104_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_1087_, v___x_1103_, v___f_1102_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
lean_dec(v___x_1103_);
return v___x_1104_;
}
else
{
uint8_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec(v_numArgs_1098_);
lean_dec_ref(v_e_1087_);
v___x_1105_ = 0;
v___x_1106_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1106_, 0, v___x_1100_);
lean_ctor_set_uint8(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
return v___x_1107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpCond___boxed(lean_object* v_e_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Meta_Sym_Simp_simpCond(v_e_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(lean_object* v_declName_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v_env_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1123_ = lean_st_ref_get(v___y_1121_);
v_env_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc_ref(v_env_1124_);
lean_dec(v___x_1123_);
v___x_1125_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1124_, v_declName_1120_);
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg___boxed(lean_object* v_declName_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1127_, v___y_1128_);
lean_dec(v___y_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(lean_object* v_declName_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1131_, v___y_1140_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___boxed(lean_object* v_declName_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0(v_declName_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
return v_res_1154_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0(void){
_start:
{
uint8_t v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = 0;
v___x_1156_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1156_, 0, v___x_1155_);
lean_ctor_set_uint8(v___x_1156_, 1, v___x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(lean_object* v_declName_1157_, lean_object* v_e_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v___x_1169_; 
v___x_1169_ = l_Lean_Meta_reduceRecMatcher_x3f(v_e_1158_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref(v___x_1169_);
if (lean_obj_tag(v_a_1170_) == 1)
{
lean_object* v_val_1171_; lean_object* v___x_1172_; 
lean_dec_ref(v_e_1158_);
lean_dec(v_declName_1157_);
v_val_1171_ = lean_ctor_get(v_a_1170_, 0);
lean_inc_n(v_val_1171_, 2);
lean_dec_ref(v_a_1170_);
v___x_1172_ = l_Lean_Meta_Sym_mkEqRefl___redArg(v_val_1171_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1182_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1182_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1182_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1177_ = 0;
v___x_1178_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1178_, 0, v_val_1171_);
lean_ctor_set(v___x_1178_, 1, v_a_1173_);
lean_ctor_set_uint8(v___x_1178_, sizeof(void*)*2, v___x_1177_);
lean_ctor_set_uint8(v___x_1178_, sizeof(void*)*2 + 1, v___x_1177_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1178_);
v___x_1180_ = v___x_1175_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec(v_val_1171_);
v_a_1183_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1172_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1172_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_object* v___x_1191_; lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_a_1170_);
v___x_1191_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch_spec__0___redArg(v_declName_1157_, v_a_1167_);
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1194_ = v___x_1191_;
v_isShared_1195_ = v_isSharedCheck_1219_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1191_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1219_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
if (lean_obj_tag(v_a_1192_) == 1)
{
lean_object* v_val_1196_; lean_object* v_numParams_1197_; lean_object* v_numDiscrs_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
lean_del_object(v___x_1194_);
v_val_1196_ = lean_ctor_get(v_a_1192_, 0);
lean_inc(v_val_1196_);
lean_dec_ref(v_a_1192_);
v_numParams_1197_ = lean_ctor_get(v_val_1196_, 0);
lean_inc(v_numParams_1197_);
v_numDiscrs_1198_ = lean_ctor_get(v_val_1196_, 1);
lean_inc(v_numDiscrs_1198_);
lean_dec(v_val_1196_);
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1200_ = lean_nat_add(v_numParams_1197_, v___x_1199_);
lean_dec(v_numParams_1197_);
v___x_1201_ = lean_nat_add(v___x_1200_, v_numDiscrs_1198_);
lean_dec(v_numDiscrs_1198_);
v___x_1202_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_1158_, v___x_1200_, v___x_1201_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_);
lean_dec(v___x_1201_);
lean_dec(v___x_1200_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1203_);
if (lean_obj_tag(v_a_1203_) == 0)
{
lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1213_; 
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1213_ == 0)
{
lean_object* v_unused_1214_; 
v_unused_1214_ = lean_ctor_get(v___x_1202_, 0);
lean_dec(v_unused_1214_);
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
else
{
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
uint8_t v_contextDependent_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1211_; 
v_contextDependent_1207_ = lean_ctor_get_uint8(v_a_1203_, 1);
lean_dec_ref(v_a_1203_);
v___x_1208_ = 1;
v___x_1209_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1208_, v_contextDependent_1207_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1209_);
v___x_1211_ = v___x_1205_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
lean_dec_ref(v_a_1203_);
return v___x_1202_;
}
}
else
{
return v___x_1202_;
}
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_dec(v_a_1192_);
lean_dec_ref(v_e_1158_);
v___x_1215_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1215_);
v___x_1217_ = v___x_1194_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec_ref(v_e_1158_);
lean_dec(v_declName_1157_);
v_a_1220_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1169_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1169_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___boxed(lean_object* v_declName_1228_, lean_object* v_e_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1228_, v_e_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object* v_e_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
uint8_t v___x_1252_; 
v___x_1252_ = l_Lean_Expr_isApp(v_e_1241_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
lean_dec_ref(v_e_1241_);
v___x_1253_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1253_, 0, v___x_1252_);
lean_ctor_set_uint8(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
return v___x_1254_;
}
else
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_Expr_getAppFn(v_e_1241_);
if (lean_obj_tag(v___x_1255_) == 4)
{
lean_object* v_declName_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v_declName_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_declName_1256_);
lean_dec_ref(v___x_1255_);
v___x_1257_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte___lam__0___closed__1);
v___x_1258_ = lean_name_eq(v_declName_1256_, v___x_1257_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1259_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1, &l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1_once, _init_l_Lean_Meta_Sym_Simp_simpCond___lam__0___closed__1);
v___x_1260_ = lean_name_eq(v_declName_1256_, v___x_1259_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; uint8_t v___x_1262_; 
v___x_1261_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte___lam__0___closed__1);
v___x_1262_ = lean_name_eq(v_declName_1256_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
v___x_1263_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch(v_declName_1256_, v_e_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1263_;
}
else
{
lean_object* v___x_1264_; 
lean_dec(v_declName_1256_);
v___x_1264_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIte(v_e_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1264_;
}
}
else
{
lean_object* v___x_1265_; 
lean_dec(v_declName_1256_);
v___x_1265_ = l_Lean_Meta_Sym_Simp_simpCond(v_e_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1265_;
}
}
else
{
lean_object* v___x_1266_; 
lean_dec(v_declName_1256_);
v___x_1266_ = l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpIte(v_e_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
return v___x_1266_;
}
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_dec_ref(v___x_1255_);
lean_dec_ref(v_e_1241_);
v___x_1267_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0, &l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_ControlFlow_0__Lean_Meta_Sym_Simp_simpMatch___closed__0);
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpControl___boxed(lean_object* v_e_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
lean_dec(v_a_1270_);
return v_res_1280_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Sym_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif
