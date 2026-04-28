// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Lookahead
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Split import Lean.Meta.Tactic.Grind.EMatchAction
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_splitNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mkAction();
lean_object* l_Lean_Meta_Grind_Action_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_assertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_checkSplitStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(10000u);
return v___x_1_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0(void){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_2_ = 1;
v___x_3_ = lean_box(v___x_2_);
v___x_4_ = lean_box(v___x_2_);
v___x_5_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_splitNext___boxed), 15, 2);
lean_closure_set(v___x_5_, 0, v___x_3_);
lean_closure_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object* v___f_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0);
v___x_21_ = l_Lean_Meta_Grind_Action_orElse(v___x_20_, v___f_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object* v___f_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(v___f_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object* v_a_37_, lean_object* v___f_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Grind_Action_orElse(v_a_37_, v___f_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object* v_a_53_, lean_object* v___f_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(v_a_53_, v___f_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object* v___f_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(10000u);
v___x_84_ = l_Lean_Meta_Grind_Action_loop___redArg(v___x_83_, v___f_69_, v___y_70_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object* v___f_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(v___f_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_assertAll___boxed), 13, 0);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object* v___f_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0);
v___x_116_ = l_Lean_Meta_Grind_Action_andThen(v___x_115_, v___f_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object* v___f_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(v___f_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object* v___x_132_, lean_object* v___f_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Meta_Grind_Action_andThen(v___x_132_, v___f_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object* v___x_148_, lean_object* v___f_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(v___x_148_, v___f_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
return v_res_163_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0(void){
_start:
{
lean_object* v___f_164_; 
v___f_164_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_instantiate___boxed), 13, 0);
return v___f_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1(void){
_start:
{
lean_object* v___f_165_; lean_object* v___f_166_; 
v___f_165_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0);
v___f_166_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed), 14, 1);
lean_closure_set(v___f_166_, 0, v___f_165_);
return v___f_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object* v_goal_167_, lean_object* v_generation_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_st_ref_get(v_a_177_);
lean_dec(v___x_179_);
v___x_180_ = l_Lean_Meta_Grind_Solvers_mkAction();
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___f_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___x_188_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref(v___x_180_);
v___f_182_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1);
v___f_183_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed), 15, 2);
lean_closure_set(v___f_183_, 0, v_a_181_);
lean_closure_set(v___f_183_, 1, v___f_182_);
v___f_184_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed), 14, 1);
lean_closure_set(v___f_184_, 0, v___f_183_);
v___f_185_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed), 14, 1);
lean_closure_set(v___f_185_, 0, v___f_184_);
v___x_186_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intros___boxed), 14, 1);
lean_closure_set(v___x_186_, 0, v_generation_168_);
v___f_187_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed), 15, 2);
lean_closure_set(v___f_187_, 0, v___x_186_);
lean_closure_set(v___f_187_, 1, v___f_185_);
lean_inc_ref(v_goal_167_);
v___x_188_ = l_Lean_Meta_Grind_Action_run(v_goal_167_, v___f_187_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_215_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_215_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
if (lean_obj_tag(v_a_189_) == 0)
{
lean_object* v___x_193_; lean_object* v___x_195_; 
lean_dec_ref(v_a_189_);
lean_dec_ref(v_goal_167_);
v___x_193_ = lean_box(0);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_193_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
else
{
lean_object* v_gs_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_214_; 
v_gs_197_ = lean_ctor_get(v_a_189_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_a_189_);
if (v_isSharedCheck_214_ == 0)
{
v___x_199_ = v_a_189_;
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_gs_197_);
lean_dec(v_a_189_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
if (lean_obj_tag(v_gs_197_) == 1)
{
lean_object* v_head_201_; lean_object* v___x_203_; 
lean_dec_ref(v_goal_167_);
v_head_201_ = lean_ctor_get(v_gs_197_, 0);
lean_inc(v_head_201_);
lean_dec_ref(v_gs_197_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_head_201_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_head_201_);
v___x_203_ = v_reuseFailAlloc_207_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_203_);
v___x_205_ = v___x_191_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
else
{
lean_object* v___x_209_; 
lean_dec(v_gs_197_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_goal_167_);
v___x_209_ = v___x_199_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_goal_167_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_209_);
v___x_211_ = v___x_191_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_goal_167_);
v_a_216_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_188_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_188_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_generation_168_);
lean_dec_ref(v_goal_167_);
v_a_224_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_236_ == 0)
{
v___x_226_ = v___x_180_;
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_180_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_ref_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v_ref_228_ = lean_ctor_get(v_a_176_, 5);
v___x_229_ = lean_io_error_to_string(v_a_224_);
v___x_230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
v___x_231_ = l_Lean_MessageData_ofFormat(v___x_230_);
lean_inc(v_ref_228_);
v___x_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_232_, 0, v_ref_228_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_232_);
v___x_234_ = v___x_226_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object* v_goal_237_, lean_object* v_generation_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v_goal_237_, v_generation_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object* v_e_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = l_Lean_Expr_hasMVar(v_e_250_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v_e_250_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v_mctx_258_; lean_object* v___x_259_; lean_object* v_fst_260_; lean_object* v_snd_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_cache_264_; lean_object* v_zetaDeltaFVarIds_265_; lean_object* v_postponed_266_; lean_object* v_diag_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_276_; 
v___x_256_ = lean_st_ref_get(v___y_252_);
lean_dec(v___x_256_);
v___x_257_ = lean_st_ref_get(v___y_251_);
v_mctx_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc_ref(v_mctx_258_);
lean_dec(v___x_257_);
v___x_259_ = l_Lean_instantiateMVarsCore(v_mctx_258_, v_e_250_);
v_fst_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_fst_260_);
v_snd_261_ = lean_ctor_get(v___x_259_, 1);
lean_inc(v_snd_261_);
lean_dec_ref(v___x_259_);
v___x_262_ = lean_st_ref_get(v___y_252_);
lean_dec(v___x_262_);
v___x_263_ = lean_st_ref_take(v___y_251_);
v_cache_264_ = lean_ctor_get(v___x_263_, 1);
v_zetaDeltaFVarIds_265_ = lean_ctor_get(v___x_263_, 2);
v_postponed_266_ = lean_ctor_get(v___x_263_, 3);
v_diag_267_ = lean_ctor_get(v___x_263_, 4);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v___x_263_, 0);
lean_dec(v_unused_277_);
v___x_269_ = v___x_263_;
v_isShared_270_ = v_isSharedCheck_276_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_diag_267_);
lean_inc(v_postponed_266_);
lean_inc(v_zetaDeltaFVarIds_265_);
lean_inc(v_cache_264_);
lean_dec(v___x_263_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_276_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v_snd_261_);
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_snd_261_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_cache_264_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v_zetaDeltaFVarIds_265_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v_postponed_266_);
lean_ctor_set(v_reuseFailAlloc_275_, 4, v_diag_267_);
v___x_272_ = v_reuseFailAlloc_275_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_st_ref_set(v___y_251_, v___x_272_);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v_fst_260_);
return v___x_274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object* v_e_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec(v___y_279_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object* v_e_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_283_, v___y_291_, v___y_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object* v_e_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(v_e_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec(v___y_297_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v_mctx_311_, lean_object* v_cache_312_, lean_object* v_a_x3f_313_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v_zetaDeltaFVarIds_317_; lean_object* v_postponed_318_; lean_object* v_diag_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_329_; 
v___x_315_ = lean_st_ref_get(v___y_309_);
lean_dec(v___x_315_);
v___x_316_ = lean_st_ref_take(v___y_310_);
v_zetaDeltaFVarIds_317_ = lean_ctor_get(v___x_316_, 2);
v_postponed_318_ = lean_ctor_get(v___x_316_, 3);
v_diag_319_ = lean_ctor_get(v___x_316_, 4);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_329_ == 0)
{
lean_object* v_unused_330_; lean_object* v_unused_331_; 
v_unused_330_ = lean_ctor_get(v___x_316_, 1);
lean_dec(v_unused_330_);
v_unused_331_ = lean_ctor_get(v___x_316_, 0);
lean_dec(v_unused_331_);
v___x_321_ = v___x_316_;
v_isShared_322_ = v_isSharedCheck_329_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_diag_319_);
lean_inc(v_postponed_318_);
lean_inc(v_zetaDeltaFVarIds_317_);
lean_dec(v___x_316_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_329_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 1, v_cache_312_);
lean_ctor_set(v___x_321_, 0, v_mctx_311_);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_mctx_311_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_cache_312_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v_zetaDeltaFVarIds_317_);
lean_ctor_set(v_reuseFailAlloc_328_, 3, v_postponed_318_);
lean_ctor_set(v_reuseFailAlloc_328_, 4, v_diag_319_);
v___x_324_ = v_reuseFailAlloc_328_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = lean_st_ref_set(v___y_310_, v___x_324_);
v___x_326_ = lean_box(0);
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v_mctx_334_, lean_object* v_cache_335_, lean_object* v_a_x3f_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_332_, v___y_333_, v_mctx_334_, v_cache_335_, v_a_x3f_336_);
lean_dec(v_a_x3f_336_);
lean_dec(v___y_333_);
lean_dec(v___y_332_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object* v_x_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v_mctx_355_; lean_object* v_cache_356_; lean_object* v___x_357_; 
v___x_351_ = lean_st_ref_get(v___y_349_);
lean_dec(v___x_351_);
v___x_352_ = lean_st_ref_get(v___y_347_);
v___x_353_ = lean_st_ref_get(v___y_349_);
lean_dec(v___x_353_);
v___x_354_ = lean_st_ref_get(v___y_347_);
v_mctx_355_ = lean_ctor_get(v___x_352_, 0);
lean_inc_ref(v_mctx_355_);
lean_dec(v___x_352_);
v_cache_356_ = lean_ctor_get(v___x_354_, 1);
lean_inc_ref(v_cache_356_);
lean_dec(v___x_354_);
lean_inc(v___y_349_);
lean_inc_ref(v___y_348_);
lean_inc(v___y_347_);
lean_inc_ref(v___y_346_);
lean_inc(v___y_345_);
lean_inc_ref(v___y_344_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc(v___y_340_);
v___x_357_ = lean_apply_11(v_x_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, lean_box(0));
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_374_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_374_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_374_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_374_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
lean_inc(v_a_358_);
if (v_isShared_361_ == 0)
{
lean_ctor_set_tag(v___x_360_, 1);
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_373_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v___x_364_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_349_, v___y_347_, v_mctx_355_, v_cache_356_, v___x_363_);
lean_dec_ref(v___x_363_);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_371_ == 0)
{
lean_object* v_unused_372_; 
v_unused_372_ = lean_ctor_get(v___x_364_, 0);
lean_dec(v_unused_372_);
v___x_366_ = v___x_364_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_dec(v___x_364_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v_a_358_);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_358_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_a_375_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_375_);
lean_dec_ref(v___x_357_);
v___x_376_ = lean_box(0);
v___x_377_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_349_, v___y_347_, v_mctx_355_, v_cache_356_, v___x_376_);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v___x_377_, 0);
lean_dec(v_unused_385_);
v___x_379_ = v___x_377_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_dec(v___x_377_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 1);
lean_ctor_set(v___x_379_, 0, v_a_375_);
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_375_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object* v_x_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec(v___y_387_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object* v_00_u03b1_399_, lean_object* v_x_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object* v_00_u03b1_413_, lean_object* v_x_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(v_00_u03b1_413_, v_x_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec(v___y_415_);
return v_res_426_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_mk_empty_array_with_capacity(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object* v_mvarId_429_, lean_object* v_e_430_, lean_object* v_toGoalState_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_MVarId_getTag(v_mvarId_429_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref(v___x_443_);
v___x_445_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_436_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref(v___x_445_);
lean_inc_ref(v_e_430_);
v___x_447_ = l_Lean_mkNot(v_e_430_);
v___x_448_ = l_Lean_mkArrow(v___x_447_, v_a_446_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; lean_object* v___x_450_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref(v___x_448_);
v___x_450_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_449_, v_a_444_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref(v___x_450_);
v___x_452_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_430_, v___y_432_, v___y_441_);
lean_dec_ref(v_e_430_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v_nextDeclIdx_454_; lean_object* v_enodeMap_455_; lean_object* v_exprs_456_; lean_object* v_parents_457_; lean_object* v_congrTable_458_; lean_object* v_appMap_459_; lean_object* v_indicesFound_460_; uint8_t v_inconsistent_461_; lean_object* v_nextIdx_462_; lean_object* v_newRawFacts_463_; lean_object* v_facts_464_; lean_object* v_extThms_465_; lean_object* v_ematch_466_; lean_object* v_inj_467_; lean_object* v_split_468_; lean_object* v_clean_469_; lean_object* v_sstates_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_508_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref(v___x_452_);
v_nextDeclIdx_454_ = lean_ctor_get(v_toGoalState_431_, 0);
v_enodeMap_455_ = lean_ctor_get(v_toGoalState_431_, 1);
v_exprs_456_ = lean_ctor_get(v_toGoalState_431_, 2);
v_parents_457_ = lean_ctor_get(v_toGoalState_431_, 3);
v_congrTable_458_ = lean_ctor_get(v_toGoalState_431_, 4);
v_appMap_459_ = lean_ctor_get(v_toGoalState_431_, 5);
v_indicesFound_460_ = lean_ctor_get(v_toGoalState_431_, 6);
v_inconsistent_461_ = lean_ctor_get_uint8(v_toGoalState_431_, sizeof(void*)*17);
v_nextIdx_462_ = lean_ctor_get(v_toGoalState_431_, 8);
v_newRawFacts_463_ = lean_ctor_get(v_toGoalState_431_, 9);
v_facts_464_ = lean_ctor_get(v_toGoalState_431_, 10);
v_extThms_465_ = lean_ctor_get(v_toGoalState_431_, 11);
v_ematch_466_ = lean_ctor_get(v_toGoalState_431_, 12);
v_inj_467_ = lean_ctor_get(v_toGoalState_431_, 13);
v_split_468_ = lean_ctor_get(v_toGoalState_431_, 14);
v_clean_469_ = lean_ctor_get(v_toGoalState_431_, 15);
v_sstates_470_ = lean_ctor_get(v_toGoalState_431_, 16);
v_isSharedCheck_508_ = !lean_is_exclusive(v_toGoalState_431_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; 
v_unused_509_ = lean_ctor_get(v_toGoalState_431_, 7);
lean_dec(v_unused_509_);
v___x_472_ = v_toGoalState_431_;
v_isShared_473_ = v_isSharedCheck_508_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_sstates_470_);
lean_inc(v_clean_469_);
lean_inc(v_split_468_);
lean_inc(v_inj_467_);
lean_inc(v_ematch_466_);
lean_inc(v_extThms_465_);
lean_inc(v_facts_464_);
lean_inc(v_newRawFacts_463_);
lean_inc(v_nextIdx_462_);
lean_inc(v_indicesFound_460_);
lean_inc(v_appMap_459_);
lean_inc(v_congrTable_458_);
lean_inc(v_parents_457_);
lean_inc(v_exprs_456_);
lean_inc(v_enodeMap_455_);
lean_inc(v_nextDeclIdx_454_);
lean_dec(v_toGoalState_431_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_508_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 7, v___x_474_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_nextDeclIdx_454_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_enodeMap_455_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_exprs_456_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_parents_457_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_congrTable_458_);
lean_ctor_set(v_reuseFailAlloc_507_, 5, v_appMap_459_);
lean_ctor_set(v_reuseFailAlloc_507_, 6, v_indicesFound_460_);
lean_ctor_set(v_reuseFailAlloc_507_, 7, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_507_, 8, v_nextIdx_462_);
lean_ctor_set(v_reuseFailAlloc_507_, 9, v_newRawFacts_463_);
lean_ctor_set(v_reuseFailAlloc_507_, 10, v_facts_464_);
lean_ctor_set(v_reuseFailAlloc_507_, 11, v_extThms_465_);
lean_ctor_set(v_reuseFailAlloc_507_, 12, v_ematch_466_);
lean_ctor_set(v_reuseFailAlloc_507_, 13, v_inj_467_);
lean_ctor_set(v_reuseFailAlloc_507_, 14, v_split_468_);
lean_ctor_set(v_reuseFailAlloc_507_, 15, v_clean_469_);
lean_ctor_set(v_reuseFailAlloc_507_, 16, v_sstates_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_507_, sizeof(void*)*17, v_inconsistent_461_);
v___x_476_ = v_reuseFailAlloc_507_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = l_Lean_Expr_mvarId_x21(v_a_451_);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v___x_478_, v_a_453_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_498_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_498_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_498_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_498_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
if (lean_obj_tag(v_a_480_) == 0)
{
lean_object* v___x_484_; lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_493_; 
lean_del_object(v___x_482_);
v___x_484_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_a_451_, v___y_439_, v___y_441_);
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_493_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_493_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_493_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v_a_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
else
{
lean_object* v___x_494_; lean_object* v___x_496_; 
lean_dec_ref(v_a_480_);
lean_dec(v_a_451_);
v___x_494_ = lean_box(0);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_494_);
v___x_496_ = v___x_482_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec(v_a_451_);
v_a_499_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_479_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_479_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
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
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_a_451_);
lean_dec_ref(v_toGoalState_431_);
v_a_510_ = lean_ctor_get(v___x_452_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_452_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_452_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec_ref(v_toGoalState_431_);
lean_dec_ref(v_e_430_);
v_a_518_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_450_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_450_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec(v_a_444_);
lean_dec_ref(v_toGoalState_431_);
lean_dec_ref(v_e_430_);
v_a_526_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_448_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_448_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_a_444_);
lean_dec_ref(v_toGoalState_431_);
lean_dec_ref(v_e_430_);
v_a_534_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_445_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_445_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec_ref(v_toGoalState_431_);
lean_dec_ref(v_e_430_);
v_a_542_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_443_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_443_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object* v_mvarId_550_, lean_object* v_e_551_, lean_object* v_toGoalState_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(v_mvarId_550_, v_e_551_, v_toGoalState_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec(v___y_553_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object* v_msgData_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; lean_object* v_env_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_mctx_575_; lean_object* v_lctx_576_; lean_object* v_options_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_571_ = lean_st_ref_get(v___y_569_);
v_env_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc_ref(v_env_572_);
lean_dec(v___x_571_);
v___x_573_ = lean_st_ref_get(v___y_569_);
lean_dec(v___x_573_);
v___x_574_ = lean_st_ref_get(v___y_567_);
v_mctx_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc_ref(v_mctx_575_);
lean_dec(v___x_574_);
v_lctx_576_ = lean_ctor_get(v___y_566_, 2);
v_options_577_ = lean_ctor_get(v___y_568_, 2);
lean_inc_ref(v_options_577_);
lean_inc_ref(v_lctx_576_);
v___x_578_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_578_, 0, v_env_572_);
lean_ctor_set(v___x_578_, 1, v_mctx_575_);
lean_ctor_set(v___x_578_, 2, v_lctx_576_);
lean_ctor_set(v___x_578_, 3, v_options_577_);
v___x_579_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set(v___x_579_, 1, v_msgData_565_);
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object* v_msgData_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msgData_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
return v_res_587_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_588_; double v___x_589_; 
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = lean_float_of_nat(v___x_588_);
return v___x_589_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = lean_mk_string_unchecked("", 0, 0);
return v___x_590_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_unsigned_to_nat(0u);
v___x_592_ = lean_mk_empty_array_with_capacity(v___x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object* v_cls_593_, lean_object* v_msg_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_ref_600_; lean_object* v___x_601_; lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_646_; 
v_ref_600_ = lean_ctor_get(v___y_597_, 5);
v___x_601_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msg_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
v_a_602_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_646_ == 0)
{
v___x_604_ = v___x_601_;
v_isShared_605_ = v_isSharedCheck_646_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_646_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v_traceState_607_; lean_object* v_env_608_; lean_object* v_nextMacroScope_609_; lean_object* v_ngen_610_; lean_object* v_auxDeclNGen_611_; lean_object* v_cache_612_; lean_object* v_messages_613_; lean_object* v_infoState_614_; lean_object* v_snapshotTasks_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_645_; 
v___x_606_ = lean_st_ref_take(v___y_598_);
v_traceState_607_ = lean_ctor_get(v___x_606_, 4);
v_env_608_ = lean_ctor_get(v___x_606_, 0);
v_nextMacroScope_609_ = lean_ctor_get(v___x_606_, 1);
v_ngen_610_ = lean_ctor_get(v___x_606_, 2);
v_auxDeclNGen_611_ = lean_ctor_get(v___x_606_, 3);
v_cache_612_ = lean_ctor_get(v___x_606_, 5);
v_messages_613_ = lean_ctor_get(v___x_606_, 6);
v_infoState_614_ = lean_ctor_get(v___x_606_, 7);
v_snapshotTasks_615_ = lean_ctor_get(v___x_606_, 8);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_645_ == 0)
{
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_645_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snapshotTasks_615_);
lean_inc(v_infoState_614_);
lean_inc(v_messages_613_);
lean_inc(v_cache_612_);
lean_inc(v_traceState_607_);
lean_inc(v_auxDeclNGen_611_);
lean_inc(v_ngen_610_);
lean_inc(v_nextMacroScope_609_);
lean_inc(v_env_608_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_645_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
uint64_t v_tid_619_; lean_object* v_traces_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_644_; 
v_tid_619_ = lean_ctor_get_uint64(v_traceState_607_, sizeof(void*)*1);
v_traces_620_ = lean_ctor_get(v_traceState_607_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_traceState_607_);
if (v_isSharedCheck_644_ == 0)
{
v___x_622_ = v_traceState_607_;
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_traces_620_);
lean_dec(v_traceState_607_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; double v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_624_ = lean_box(0);
v___x_625_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0);
v___x_626_ = 0;
v___x_627_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1);
v___x_628_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_628_, 0, v_cls_593_);
lean_ctor_set(v___x_628_, 1, v___x_624_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
lean_ctor_set_float(v___x_628_, sizeof(void*)*3, v___x_625_);
lean_ctor_set_float(v___x_628_, sizeof(void*)*3 + 8, v___x_625_);
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*3 + 16, v___x_626_);
v___x_629_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2);
v___x_630_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
lean_ctor_set(v___x_630_, 1, v_a_602_);
lean_ctor_set(v___x_630_, 2, v___x_629_);
lean_inc(v_ref_600_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v_ref_600_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = l_Lean_PersistentArray_push___redArg(v_traces_620_, v___x_631_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_632_);
v___x_634_ = v___x_622_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_632_);
lean_ctor_set_uint64(v_reuseFailAlloc_643_, sizeof(void*)*1, v_tid_619_);
v___x_634_ = v_reuseFailAlloc_643_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_636_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 4, v___x_634_);
v___x_636_ = v___x_617_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_env_608_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_nextMacroScope_609_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_ngen_610_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_auxDeclNGen_611_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_642_, 5, v_cache_612_);
lean_ctor_set(v_reuseFailAlloc_642_, 6, v_messages_613_);
lean_ctor_set(v_reuseFailAlloc_642_, 7, v_infoState_614_);
lean_ctor_set(v_reuseFailAlloc_642_, 8, v_snapshotTasks_615_);
v___x_636_ = v_reuseFailAlloc_642_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_637_ = lean_st_ref_set(v___y_598_, v___x_636_);
v___x_638_ = lean_box(0);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_638_);
v___x_640_ = v___x_604_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object* v_cls_647_, lean_object* v_msg_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_647_, v_msg_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_654_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0(void){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_655_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1(void){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_656_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2(void){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_mk_string_unchecked("of_lookahead", 12, 12);
return v___x_657_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_658_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2);
v___x_659_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1);
v___x_660_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0);
v___x_661_ = l_Lean_Name_mkStr3(v___x_660_, v___x_659_, v___x_658_);
return v___x_661_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = lean_box(0);
v___x_663_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3);
v___x_664_ = l_Lean_mkConst(v___x_663_, v___x_662_);
return v___x_664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5(void){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_665_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6(void){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_mk_string_unchecked("lookahead", 9, 9);
return v___x_666_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7(void){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_mk_string_unchecked("assert", 6, 6);
return v___x_667_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_668_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7);
v___x_669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6);
v___x_670_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5);
v___x_671_ = l_Lean_Name_mkStr3(v___x_670_, v___x_669_, v___x_668_);
return v___x_671_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_672_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9);
v___x_674_ = l_Lean_Name_mkStr1(v___x_673_);
return v___x_674_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8);
v___x_676_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10);
v___x_677_ = l_Lean_Name_append(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = lean_mk_string_unchecked("try", 3, 3);
return v___x_678_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_cls_682_; 
v___x_679_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12);
v___x_680_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6);
v___x_681_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5);
v_cls_682_ = l_Lean_Name_mkStr3(v___x_681_, v___x_680_, v___x_679_);
return v_cls_682_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14(void){
_start:
{
lean_object* v_cls_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_cls_683_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13);
v___x_684_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10);
v___x_685_ = l_Lean_Name_append(v___x_684_, v_cls_683_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object* v_e_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v_config_740_; lean_object* v_options_741_; lean_object* v_simp_742_; lean_object* v_simpMethods_743_; lean_object* v_anchorRefs_x3f_744_; uint8_t v_reportMVarIssue_745_; lean_object* v_splitSource_746_; lean_object* v_symPrios_747_; lean_object* v_extensions_748_; uint8_t v_debug_749_; uint8_t v_trace_750_; uint8_t v_markInstances_751_; uint8_t v_lax_752_; uint8_t v_suggestions_753_; uint8_t v_locals_754_; lean_object* v_splits_755_; lean_object* v_ematch_756_; lean_object* v_gen_757_; lean_object* v_instances_758_; uint8_t v_matchEqs_759_; uint8_t v_splitMatch_760_; uint8_t v_splitIte_761_; uint8_t v_splitIndPred_762_; uint8_t v_splitImp_763_; lean_object* v_canonHeartbeats_764_; uint8_t v_ext_765_; uint8_t v_extAll_766_; uint8_t v_etaStruct_767_; uint8_t v_funext_768_; uint8_t v_lookahead_769_; uint8_t v_verbose_770_; uint8_t v_clean_771_; uint8_t v_mbtc_772_; uint8_t v_zetaDelta_773_; uint8_t v_zeta_774_; uint8_t v_ring_775_; lean_object* v_ringSteps_776_; uint8_t v_linarith_777_; uint8_t v_lia_778_; uint8_t v_ac_779_; lean_object* v_acSteps_780_; lean_object* v_exp_781_; uint8_t v_abstractProof_782_; uint8_t v_inj_783_; uint8_t v_order_784_; lean_object* v_min_785_; lean_object* v_detailed_786_; uint8_t v_useSorry_787_; uint8_t v_revert_788_; uint8_t v_funCC_789_; uint8_t v_reducible_790_; lean_object* v_maxSuggestions_791_; lean_object* v_inheritedTraceOptions_792_; uint8_t v_hasTrace_793_; uint8_t v___x_794_; lean_object* v___x_795_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___x_849_; 
v_config_740_ = lean_ctor_get(v_a_689_, 2);
v_options_741_ = lean_ctor_get(v_a_695_, 2);
v_simp_742_ = lean_ctor_get(v_a_689_, 0);
v_simpMethods_743_ = lean_ctor_get(v_a_689_, 1);
v_anchorRefs_x3f_744_ = lean_ctor_get(v_a_689_, 3);
v_reportMVarIssue_745_ = lean_ctor_get_uint8(v_a_689_, sizeof(void*)*7 + 1);
v_splitSource_746_ = lean_ctor_get(v_a_689_, 4);
v_symPrios_747_ = lean_ctor_get(v_a_689_, 5);
v_extensions_748_ = lean_ctor_get(v_a_689_, 6);
v_debug_749_ = lean_ctor_get_uint8(v_a_689_, sizeof(void*)*7 + 2);
v_trace_750_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11);
v_markInstances_751_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 1);
v_lax_752_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 2);
v_suggestions_753_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 3);
v_locals_754_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 4);
v_splits_755_ = lean_ctor_get(v_config_740_, 0);
v_ematch_756_ = lean_ctor_get(v_config_740_, 1);
v_gen_757_ = lean_ctor_get(v_config_740_, 2);
v_instances_758_ = lean_ctor_get(v_config_740_, 3);
v_matchEqs_759_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 5);
v_splitMatch_760_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 6);
v_splitIte_761_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 7);
v_splitIndPred_762_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 8);
v_splitImp_763_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 9);
v_canonHeartbeats_764_ = lean_ctor_get(v_config_740_, 4);
v_ext_765_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 10);
v_extAll_766_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 11);
v_etaStruct_767_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 12);
v_funext_768_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 13);
v_lookahead_769_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 14);
v_verbose_770_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 15);
v_clean_771_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 16);
v_mbtc_772_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 18);
v_zetaDelta_773_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 19);
v_zeta_774_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 20);
v_ring_775_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 21);
v_ringSteps_776_ = lean_ctor_get(v_config_740_, 5);
v_linarith_777_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 22);
v_lia_778_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 23);
v_ac_779_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 24);
v_acSteps_780_ = lean_ctor_get(v_config_740_, 6);
v_exp_781_ = lean_ctor_get(v_config_740_, 7);
v_abstractProof_782_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 25);
v_inj_783_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 26);
v_order_784_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 27);
v_min_785_ = lean_ctor_get(v_config_740_, 8);
v_detailed_786_ = lean_ctor_get(v_config_740_, 9);
v_useSorry_787_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 28);
v_revert_788_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 29);
v_funCC_789_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 30);
v_reducible_790_ = lean_ctor_get_uint8(v_config_740_, sizeof(void*)*11 + 31);
v_maxSuggestions_791_ = lean_ctor_get(v_config_740_, 10);
v_inheritedTraceOptions_792_ = lean_ctor_get(v_a_695_, 13);
v_hasTrace_793_ = lean_ctor_get_uint8(v_options_741_, sizeof(void*)*1);
v___x_794_ = 1;
lean_inc(v_maxSuggestions_791_);
lean_inc(v_detailed_786_);
lean_inc(v_min_785_);
lean_inc(v_exp_781_);
lean_inc(v_acSteps_780_);
lean_inc(v_ringSteps_776_);
lean_inc(v_canonHeartbeats_764_);
lean_inc(v_instances_758_);
lean_inc(v_gen_757_);
lean_inc(v_ematch_756_);
lean_inc(v_splits_755_);
v___x_795_ = lean_alloc_ctor(0, 11, 32);
lean_ctor_set(v___x_795_, 0, v_splits_755_);
lean_ctor_set(v___x_795_, 1, v_ematch_756_);
lean_ctor_set(v___x_795_, 2, v_gen_757_);
lean_ctor_set(v___x_795_, 3, v_instances_758_);
lean_ctor_set(v___x_795_, 4, v_canonHeartbeats_764_);
lean_ctor_set(v___x_795_, 5, v_ringSteps_776_);
lean_ctor_set(v___x_795_, 6, v_acSteps_780_);
lean_ctor_set(v___x_795_, 7, v_exp_781_);
lean_ctor_set(v___x_795_, 8, v_min_785_);
lean_ctor_set(v___x_795_, 9, v_detailed_786_);
lean_ctor_set(v___x_795_, 10, v_maxSuggestions_791_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11, v_trace_750_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 1, v_markInstances_751_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 2, v_lax_752_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 3, v_suggestions_753_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 4, v_locals_754_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 5, v_matchEqs_759_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 6, v_splitMatch_760_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 7, v_splitIte_761_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 8, v_splitIndPred_762_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 9, v_splitImp_763_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 10, v_ext_765_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 11, v_extAll_766_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 12, v_etaStruct_767_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 13, v_funext_768_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 14, v_lookahead_769_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 15, v_verbose_770_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 16, v_clean_771_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 17, v___x_794_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 18, v_mbtc_772_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 19, v_zetaDelta_773_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 20, v_zeta_774_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 21, v_ring_775_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 22, v_linarith_777_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 23, v_lia_778_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 24, v_ac_779_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 25, v_abstractProof_782_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 26, v_inj_783_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 27, v_order_784_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 28, v_useSorry_787_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 29, v_revert_788_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 30, v_funCC_789_);
lean_ctor_set_uint8(v___x_795_, sizeof(void*)*11 + 31, v_reducible_790_);
lean_inc_ref(v_extensions_748_);
lean_inc_ref(v_symPrios_747_);
lean_inc(v_splitSource_746_);
lean_inc(v_anchorRefs_x3f_744_);
lean_inc_ref(v_simpMethods_743_);
lean_inc_ref(v_simp_742_);
v___x_849_ = lean_alloc_ctor(0, 7, 3);
lean_ctor_set(v___x_849_, 0, v_simp_742_);
lean_ctor_set(v___x_849_, 1, v_simpMethods_743_);
lean_ctor_set(v___x_849_, 2, v___x_795_);
lean_ctor_set(v___x_849_, 3, v_anchorRefs_x3f_744_);
lean_ctor_set(v___x_849_, 4, v_splitSource_746_);
lean_ctor_set(v___x_849_, 5, v_symPrios_747_);
lean_ctor_set(v___x_849_, 6, v_extensions_748_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7, v___x_794_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7 + 1, v_reportMVarIssue_745_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*7 + 2, v_debug_749_);
if (v_hasTrace_793_ == 0)
{
v___y_797_ = v_a_687_;
v___y_798_ = v_a_688_;
v___y_799_ = v___x_849_;
v___y_800_ = v_a_690_;
v___y_801_ = v_a_691_;
v___y_802_ = v_a_692_;
v___y_803_ = v_a_693_;
v___y_804_ = v_a_694_;
v___y_805_ = v_a_695_;
v___y_806_ = v_a_696_;
goto v___jp_796_;
}
else
{
lean_object* v_cls_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v_cls_850_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13);
v___x_851_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14);
v___x_852_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_792_, v_options_741_, v___x_851_);
if (v___x_852_ == 0)
{
v___y_797_ = v_a_687_;
v___y_798_ = v_a_688_;
v___y_799_ = v___x_849_;
v___y_800_ = v_a_690_;
v___y_801_ = v_a_691_;
v___y_802_ = v_a_692_;
v___y_803_ = v_a_693_;
v___y_804_ = v_a_694_;
v___y_805_ = v_a_695_;
v___y_806_ = v_a_696_;
goto v___jp_796_;
}
else
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_Meta_Grind_updateLastTag(v_a_687_, v_a_688_, v___x_849_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec_ref(v___x_853_);
lean_inc_ref(v_e_686_);
v___x_854_ = l_Lean_MessageData_ofExpr(v_e_686_);
v___x_855_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_850_, v___x_854_, v_a_693_, v_a_694_, v_a_695_, v_a_696_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_dec_ref(v___x_855_);
v___y_797_ = v_a_687_;
v___y_798_ = v_a_688_;
v___y_799_ = v___x_849_;
v___y_800_ = v_a_690_;
v___y_801_ = v_a_691_;
v___y_802_ = v_a_692_;
v___y_803_ = v_a_693_;
v___y_804_ = v_a_694_;
v___y_805_ = v_a_695_;
v___y_806_ = v_a_696_;
goto v___jp_796_;
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec_ref(v___x_849_);
lean_dec_ref(v_e_686_);
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec_ref(v___x_849_);
lean_dec_ref(v_e_686_);
v_a_864_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_853_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_853_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
v___jp_698_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4);
lean_inc_ref(v_e_686_);
v___x_711_ = l_Lean_mkAppB(v___x_710_, v_e_686_, v___y_699_);
v___x_712_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_686_, v___x_711_, v___y_700_, v___y_702_, v___y_704_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v___x_713_; 
lean_dec_ref(v___x_712_);
lean_inc(v___y_709_);
lean_inc_ref(v___y_708_);
lean_inc(v___y_707_);
lean_inc_ref(v___y_706_);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc(v___y_701_);
lean_inc(v___y_700_);
v___x_713_ = lean_grind_process_new_facts(v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_722_; 
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_722_ == 0)
{
lean_object* v_unused_723_; 
v_unused_723_ = lean_ctor_get(v___x_713_, 0);
lean_dec(v_unused_723_);
v___x_715_ = v___x_713_;
v_isShared_716_ = v_isSharedCheck_722_;
goto v_resetjp_714_;
}
else
{
lean_dec(v___x_713_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_722_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_717_ = 1;
v___x_718_ = lean_box(v___x_717_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_718_);
v___x_720_ = v___x_715_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
v_a_724_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_713_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_713_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec_ref(v___y_702_);
v_a_732_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_712_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_712_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
v___jp_796_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_toGoalState_809_; lean_object* v_mvarId_810_; lean_object* v___f_811_; lean_object* v___x_812_; 
v___x_807_ = lean_st_ref_get(v___y_806_);
lean_dec(v___x_807_);
v___x_808_ = lean_st_ref_get(v___y_797_);
v_toGoalState_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc_ref(v_toGoalState_809_);
v_mvarId_810_ = lean_ctor_get(v___x_808_, 1);
lean_inc(v_mvarId_810_);
lean_dec(v___x_808_);
lean_inc_ref(v_e_686_);
v___f_811_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed), 14, 3);
lean_closure_set(v___f_811_, 0, v_mvarId_810_);
lean_closure_set(v___f_811_, 1, v_e_686_);
lean_closure_set(v___f_811_, 2, v_toGoalState_809_);
v___x_812_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v___f_811_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_840_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_840_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_840_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_840_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
if (lean_obj_tag(v_a_813_) == 1)
{
lean_object* v_options_817_; uint8_t v_hasTrace_818_; 
lean_del_object(v___x_815_);
v_options_817_ = lean_ctor_get(v___y_805_, 2);
v_hasTrace_818_ = lean_ctor_get_uint8(v_options_817_, sizeof(void*)*1);
if (v_hasTrace_818_ == 0)
{
lean_object* v_val_819_; 
v_val_819_ = lean_ctor_get(v_a_813_, 0);
lean_inc(v_val_819_);
lean_dec_ref(v_a_813_);
v___y_699_ = v_val_819_;
v___y_700_ = v___y_797_;
v___y_701_ = v___y_798_;
v___y_702_ = v___y_799_;
v___y_703_ = v___y_800_;
v___y_704_ = v___y_801_;
v___y_705_ = v___y_802_;
v___y_706_ = v___y_803_;
v___y_707_ = v___y_804_;
v___y_708_ = v___y_805_;
v___y_709_ = v___y_806_;
goto v___jp_698_;
}
else
{
lean_object* v_val_820_; lean_object* v_inheritedTraceOptions_821_; lean_object* v___x_822_; lean_object* v___x_823_; uint8_t v___x_824_; 
v_val_820_ = lean_ctor_get(v_a_813_, 0);
lean_inc(v_val_820_);
lean_dec_ref(v_a_813_);
v_inheritedTraceOptions_821_ = lean_ctor_get(v___y_805_, 13);
v___x_822_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8);
v___x_823_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11);
v___x_824_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_821_, v_options_817_, v___x_823_);
if (v___x_824_ == 0)
{
v___y_699_ = v_val_820_;
v___y_700_ = v___y_797_;
v___y_701_ = v___y_798_;
v___y_702_ = v___y_799_;
v___y_703_ = v___y_800_;
v___y_704_ = v___y_801_;
v___y_705_ = v___y_802_;
v___y_706_ = v___y_803_;
v___y_707_ = v___y_804_;
v___y_708_ = v___y_805_;
v___y_709_ = v___y_806_;
goto v___jp_698_;
}
else
{
lean_object* v___x_825_; lean_object* v___x_826_; 
lean_inc_ref(v_e_686_);
v___x_825_ = l_Lean_MessageData_ofExpr(v_e_686_);
v___x_826_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v___x_822_, v___x_825_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_dec_ref(v___x_826_);
v___y_699_ = v_val_820_;
v___y_700_ = v___y_797_;
v___y_701_ = v___y_798_;
v___y_702_ = v___y_799_;
v___y_703_ = v___y_800_;
v___y_704_ = v___y_801_;
v___y_705_ = v___y_802_;
v___y_706_ = v___y_803_;
v___y_707_ = v___y_804_;
v___y_708_ = v___y_805_;
v___y_709_ = v___y_806_;
goto v___jp_698_;
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v_val_820_);
lean_dec_ref(v___y_799_);
lean_dec_ref(v_e_686_);
v_a_827_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_826_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
}
else
{
uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
lean_dec(v_a_813_);
lean_dec_ref(v___y_799_);
lean_dec_ref(v_e_686_);
v___x_835_ = 0;
v___x_836_ = lean_box(v___x_835_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_836_);
v___x_838_ = v___x_815_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec_ref(v___y_799_);
lean_dec_ref(v_e_686_);
v_a_841_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_812_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_812_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object* v_e_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v_e_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec(v_a_876_);
lean_dec_ref(v_a_875_);
lean_dec(v_a_874_);
lean_dec(v_a_873_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object* v_cls_885_, lean_object* v_msg_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_885_, v_msg_886_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object* v_cls_899_, lean_object* v_msg_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(v_cls_899_, v_msg_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec(v___y_901_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t v___x_913_, lean_object* v_as_x27_914_, lean_object* v_b_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
if (lean_obj_tag(v_as_x27_914_) == 0)
{
lean_object* v___x_927_; 
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v_b_915_);
return v___x_927_;
}
else
{
lean_object* v_head_928_; lean_object* v_tail_929_; lean_object* v___x_930_; 
v_head_928_ = lean_ctor_get(v_as_x27_914_, 0);
v_tail_929_ = lean_ctor_get(v_as_x27_914_, 1);
v___x_930_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_916_, v___y_925_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_snd_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_1028_; 
v_snd_931_ = lean_ctor_get(v_b_915_, 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_b_915_);
if (v_isSharedCheck_1028_ == 0)
{
lean_object* v_unused_1029_; 
v_unused_1029_ = lean_ctor_get(v_b_915_, 0);
lean_dec(v_unused_1029_);
v___x_933_ = v_b_915_;
v_isShared_934_ = v_isSharedCheck_1028_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_snd_931_);
lean_dec(v_b_915_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_1028_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_1027_; 
v_a_935_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_937_ = v___x_930_;
v_isShared_938_ = v_isSharedCheck_1027_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_930_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_1027_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
uint8_t v___x_939_; 
v___x_939_ = lean_unbox(v_a_935_);
lean_dec(v_a_935_);
if (v___x_939_ == 0)
{
lean_object* v_fst_940_; lean_object* v_snd_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_1009_; 
lean_del_object(v___x_937_);
v_fst_940_ = lean_ctor_get(v_snd_931_, 0);
v_snd_941_ = lean_ctor_get(v_snd_931_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_snd_931_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_943_ = v_snd_931_;
v_isShared_944_ = v_isSharedCheck_1009_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_snd_941_);
lean_inc(v_fst_940_);
lean_dec(v_snd_931_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_1009_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; 
lean_inc(v_head_928_);
v___x_945_ = l_Lean_Meta_Grind_checkSplitStatus(v_head_928_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_947_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref(v___x_945_);
v___x_947_ = lean_box(0);
switch(lean_obj_tag(v_a_946_))
{
case 0:
{
lean_object* v___x_948_; lean_object* v___x_950_; 
lean_dec(v_snd_941_);
v___x_948_ = lean_box(v___x_913_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_948_);
v___x_950_ = v___x_943_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_fst_940_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v___x_948_);
v___x_950_ = v_reuseFailAlloc_955_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_952_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_950_);
lean_ctor_set(v___x_933_, 0, v___x_947_);
v___x_952_ = v___x_933_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v___x_950_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
v_as_x27_914_ = v_tail_929_;
v_b_915_ = v___x_952_;
goto _start;
}
}
}
case 1:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
lean_inc(v_head_928_);
v___x_956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_956_, 0, v_head_928_);
lean_ctor_set(v___x_956_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_956_);
v___x_958_ = v___x_943_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_snd_941_);
v___x_958_ = v_reuseFailAlloc_963_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_958_);
lean_ctor_set(v___x_933_, 0, v___x_947_);
v___x_960_ = v___x_933_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v___x_958_);
v___x_960_ = v_reuseFailAlloc_962_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
v_as_x27_914_ = v_tail_929_;
v_b_915_ = v___x_960_;
goto _start;
}
}
}
default: 
{
uint8_t v_tryPostpone_964_; 
v_tryPostpone_964_ = lean_ctor_get_uint8(v_a_946_, sizeof(void*)*1 + 1);
lean_dec_ref(v_a_946_);
if (v_tryPostpone_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_head_928_);
v___x_966_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v___x_965_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; uint8_t v___x_968_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
lean_dec_ref(v___x_966_);
v___x_968_ = lean_unbox(v_a_967_);
lean_dec(v_a_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_inc(v_head_928_);
v___x_969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_969_, 0, v_head_928_);
lean_ctor_set(v___x_969_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_969_);
v___x_971_ = v___x_943_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_snd_941_);
v___x_971_ = v_reuseFailAlloc_976_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_973_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_971_);
lean_ctor_set(v___x_933_, 0, v___x_947_);
v___x_973_ = v___x_933_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v___x_971_);
v___x_973_ = v_reuseFailAlloc_975_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
v_as_x27_914_ = v_tail_929_;
v_b_915_ = v___x_973_;
goto _start;
}
}
}
else
{
lean_object* v___x_977_; lean_object* v___x_979_; 
lean_dec(v_snd_941_);
v___x_977_ = lean_box(v___x_913_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_977_);
v___x_979_ = v___x_943_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_fst_940_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v___x_977_);
v___x_979_ = v_reuseFailAlloc_984_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_981_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_979_);
lean_ctor_set(v___x_933_, 0, v___x_947_);
v___x_981_ = v___x_933_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v___x_979_);
v___x_981_ = v_reuseFailAlloc_983_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
v_as_x27_914_ = v_tail_929_;
v_b_915_ = v___x_981_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_del_object(v___x_943_);
lean_dec(v_snd_941_);
lean_dec(v_fst_940_);
lean_del_object(v___x_933_);
v_a_985_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_966_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_966_);
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
lean_object* v___x_993_; lean_object* v___x_995_; 
lean_inc(v_head_928_);
v___x_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_993_, 0, v_head_928_);
lean_ctor_set(v___x_993_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_993_);
v___x_995_ = v___x_943_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_993_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_snd_941_);
v___x_995_ = v_reuseFailAlloc_1000_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_997_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_995_);
lean_ctor_set(v___x_933_, 0, v___x_947_);
v___x_997_ = v___x_933_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_947_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v___x_995_);
v___x_997_ = v_reuseFailAlloc_999_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_as_x27_914_ = v_tail_929_;
v_b_915_ = v___x_997_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_del_object(v___x_943_);
lean_dec(v_snd_941_);
lean_dec(v_fst_940_);
lean_del_object(v___x_933_);
v_a_1001_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_945_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_945_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
}
else
{
lean_object* v_fst_1010_; lean_object* v_snd_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1026_; 
v_fst_1010_ = lean_ctor_get(v_snd_931_, 0);
v_snd_1011_ = lean_ctor_get(v_snd_931_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_snd_931_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1013_ = v_snd_931_;
v_isShared_1014_ = v_isSharedCheck_1026_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_snd_1011_);
lean_inc(v_fst_1010_);
lean_dec(v_snd_931_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1026_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1015_ = lean_box(v___x_913_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
if (v_isShared_1014_ == 0)
{
v___x_1018_ = v___x_1013_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_fst_1010_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_snd_1011_);
v___x_1018_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_1018_);
lean_ctor_set(v___x_933_, 0, v___x_1016_);
v___x_1020_ = v___x_933_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_1020_);
v___x_1022_ = v___x_937_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
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
}
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec_ref(v_b_915_);
v_a_1030_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_930_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_930_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object* v___x_1038_, lean_object* v_as_x27_1039_, lean_object* v_b_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v___x_43189__boxed_1052_; lean_object* v_res_1053_; 
v___x_43189__boxed_1052_ = lean_unbox(v___x_1038_);
v_res_1053_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_43189__boxed_1052_, v_as_x27_1039_, v_b_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec(v_as_x27_1039_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1056_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1251_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1251_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1251_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
uint8_t v_lookahead_1070_; 
v_lookahead_1070_ = lean_ctor_get_uint8(v_a_1066_, sizeof(void*)*11 + 14);
lean_dec(v_a_1066_);
if (v_lookahead_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1071_ = lean_box(v_lookahead_1070_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1071_);
v___x_1073_ = v___x_1068_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v_toGoalState_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1249_; 
v___x_1075_ = lean_st_ref_get(v_a_1063_);
lean_dec(v___x_1075_);
v___x_1076_ = lean_st_ref_get(v_a_1054_);
v_toGoalState_1077_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v___x_1076_, 1);
lean_dec(v_unused_1250_);
v___x_1079_ = v___x_1076_;
v_isShared_1080_ = v_isSharedCheck_1249_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_toGoalState_1077_);
lean_dec(v___x_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1249_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v_split_1081_; lean_object* v_lookaheads_1082_; uint8_t v___x_1083_; 
v_split_1081_ = lean_ctor_get(v_toGoalState_1077_, 14);
lean_inc_ref(v_split_1081_);
lean_dec_ref(v_toGoalState_1077_);
v_lookaheads_1082_ = lean_ctor_get(v_split_1081_, 5);
lean_inc(v_lookaheads_1082_);
lean_dec_ref(v_split_1081_);
v___x_1083_ = l_List_isEmpty___redArg(v_lookaheads_1082_);
lean_dec(v_lookaheads_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v_toGoalState_1088_; lean_object* v_split_1089_; lean_object* v_mvarId_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1242_; 
lean_del_object(v___x_1068_);
v___x_1084_ = lean_st_ref_get(v_a_1063_);
lean_dec(v___x_1084_);
v___x_1085_ = lean_st_ref_get(v_a_1054_);
v___x_1086_ = lean_st_ref_get(v_a_1063_);
lean_dec(v___x_1086_);
v___x_1087_ = lean_st_ref_take(v_a_1054_);
v_toGoalState_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc_ref(v_toGoalState_1088_);
v_split_1089_ = lean_ctor_get(v_toGoalState_1088_, 14);
lean_inc_ref(v_split_1089_);
v_mvarId_1090_ = lean_ctor_get(v___x_1087_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1242_ == 0)
{
lean_object* v_unused_1243_; 
v_unused_1243_ = lean_ctor_get(v___x_1087_, 0);
lean_dec(v_unused_1243_);
v___x_1092_ = v___x_1087_;
v_isShared_1093_ = v_isSharedCheck_1242_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_mvarId_1090_);
lean_dec(v___x_1087_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1242_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_nextDeclIdx_1094_; lean_object* v_enodeMap_1095_; lean_object* v_exprs_1096_; lean_object* v_parents_1097_; lean_object* v_congrTable_1098_; lean_object* v_appMap_1099_; lean_object* v_indicesFound_1100_; lean_object* v_newFacts_1101_; uint8_t v_inconsistent_1102_; lean_object* v_nextIdx_1103_; lean_object* v_newRawFacts_1104_; lean_object* v_facts_1105_; lean_object* v_extThms_1106_; lean_object* v_ematch_1107_; lean_object* v_inj_1108_; lean_object* v_clean_1109_; lean_object* v_sstates_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1240_; 
v_nextDeclIdx_1094_ = lean_ctor_get(v_toGoalState_1088_, 0);
v_enodeMap_1095_ = lean_ctor_get(v_toGoalState_1088_, 1);
v_exprs_1096_ = lean_ctor_get(v_toGoalState_1088_, 2);
v_parents_1097_ = lean_ctor_get(v_toGoalState_1088_, 3);
v_congrTable_1098_ = lean_ctor_get(v_toGoalState_1088_, 4);
v_appMap_1099_ = lean_ctor_get(v_toGoalState_1088_, 5);
v_indicesFound_1100_ = lean_ctor_get(v_toGoalState_1088_, 6);
v_newFacts_1101_ = lean_ctor_get(v_toGoalState_1088_, 7);
v_inconsistent_1102_ = lean_ctor_get_uint8(v_toGoalState_1088_, sizeof(void*)*17);
v_nextIdx_1103_ = lean_ctor_get(v_toGoalState_1088_, 8);
v_newRawFacts_1104_ = lean_ctor_get(v_toGoalState_1088_, 9);
v_facts_1105_ = lean_ctor_get(v_toGoalState_1088_, 10);
v_extThms_1106_ = lean_ctor_get(v_toGoalState_1088_, 11);
v_ematch_1107_ = lean_ctor_get(v_toGoalState_1088_, 12);
v_inj_1108_ = lean_ctor_get(v_toGoalState_1088_, 13);
v_clean_1109_ = lean_ctor_get(v_toGoalState_1088_, 15);
v_sstates_1110_ = lean_ctor_get(v_toGoalState_1088_, 16);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_toGoalState_1088_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; 
v_unused_1241_ = lean_ctor_get(v_toGoalState_1088_, 14);
lean_dec(v_unused_1241_);
v___x_1112_ = v_toGoalState_1088_;
v_isShared_1113_ = v_isSharedCheck_1240_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_sstates_1110_);
lean_inc(v_clean_1109_);
lean_inc(v_inj_1108_);
lean_inc(v_ematch_1107_);
lean_inc(v_extThms_1106_);
lean_inc(v_facts_1105_);
lean_inc(v_newRawFacts_1104_);
lean_inc(v_nextIdx_1103_);
lean_inc(v_newFacts_1101_);
lean_inc(v_indicesFound_1100_);
lean_inc(v_appMap_1099_);
lean_inc(v_congrTable_1098_);
lean_inc(v_parents_1097_);
lean_inc(v_exprs_1096_);
lean_inc(v_enodeMap_1095_);
lean_inc(v_nextDeclIdx_1094_);
lean_dec(v_toGoalState_1088_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1240_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v_num_1114_; lean_object* v_candidates_1115_; lean_object* v_added_1116_; lean_object* v_resolved_1117_; lean_object* v_trace_1118_; lean_object* v_argPosMap_1119_; lean_object* v_argsAt_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1238_; 
v_num_1114_ = lean_ctor_get(v_split_1089_, 0);
v_candidates_1115_ = lean_ctor_get(v_split_1089_, 1);
v_added_1116_ = lean_ctor_get(v_split_1089_, 2);
v_resolved_1117_ = lean_ctor_get(v_split_1089_, 3);
v_trace_1118_ = lean_ctor_get(v_split_1089_, 4);
v_argPosMap_1119_ = lean_ctor_get(v_split_1089_, 6);
v_argsAt_1120_ = lean_ctor_get(v_split_1089_, 7);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_split_1089_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; 
v_unused_1239_ = lean_ctor_get(v_split_1089_, 5);
lean_dec(v_unused_1239_);
v___x_1122_ = v_split_1089_;
v_isShared_1123_ = v_isSharedCheck_1238_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_argsAt_1120_);
lean_inc(v_argPosMap_1119_);
lean_inc(v_trace_1118_);
lean_inc(v_resolved_1117_);
lean_inc(v_added_1116_);
lean_inc(v_candidates_1115_);
lean_inc(v_num_1114_);
lean_dec(v_split_1089_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1238_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
v___x_1124_ = lean_box(0);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 5, v___x_1124_);
v___x_1126_ = v___x_1122_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_num_1114_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_candidates_1115_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_added_1116_);
lean_ctor_set(v_reuseFailAlloc_1237_, 3, v_resolved_1117_);
lean_ctor_set(v_reuseFailAlloc_1237_, 4, v_trace_1118_);
lean_ctor_set(v_reuseFailAlloc_1237_, 5, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1237_, 6, v_argPosMap_1119_);
lean_ctor_set(v_reuseFailAlloc_1237_, 7, v_argsAt_1120_);
v___x_1126_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_1128_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 14, v___x_1126_);
v___x_1128_ = v___x_1112_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_nextDeclIdx_1094_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v_enodeMap_1095_);
lean_ctor_set(v_reuseFailAlloc_1236_, 2, v_exprs_1096_);
lean_ctor_set(v_reuseFailAlloc_1236_, 3, v_parents_1097_);
lean_ctor_set(v_reuseFailAlloc_1236_, 4, v_congrTable_1098_);
lean_ctor_set(v_reuseFailAlloc_1236_, 5, v_appMap_1099_);
lean_ctor_set(v_reuseFailAlloc_1236_, 6, v_indicesFound_1100_);
lean_ctor_set(v_reuseFailAlloc_1236_, 7, v_newFacts_1101_);
lean_ctor_set(v_reuseFailAlloc_1236_, 8, v_nextIdx_1103_);
lean_ctor_set(v_reuseFailAlloc_1236_, 9, v_newRawFacts_1104_);
lean_ctor_set(v_reuseFailAlloc_1236_, 10, v_facts_1105_);
lean_ctor_set(v_reuseFailAlloc_1236_, 11, v_extThms_1106_);
lean_ctor_set(v_reuseFailAlloc_1236_, 12, v_ematch_1107_);
lean_ctor_set(v_reuseFailAlloc_1236_, 13, v_inj_1108_);
lean_ctor_set(v_reuseFailAlloc_1236_, 14, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1236_, 15, v_clean_1109_);
lean_ctor_set(v_reuseFailAlloc_1236_, 16, v_sstates_1110_);
lean_ctor_set_uint8(v_reuseFailAlloc_1236_, sizeof(void*)*17, v_inconsistent_1102_);
v___x_1128_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1130_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1128_);
v___x_1130_ = v___x_1092_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_mvarId_1090_);
v___x_1130_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; lean_object* v_toGoalState_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1233_; 
v___x_1131_ = lean_st_ref_set(v_a_1054_, v___x_1130_);
v_toGoalState_1132_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; 
v_unused_1234_ = lean_ctor_get(v___x_1085_, 1);
lean_dec(v_unused_1234_);
v___x_1134_ = v___x_1085_;
v_isShared_1135_ = v_isSharedCheck_1233_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_toGoalState_1132_);
lean_dec(v___x_1085_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1233_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v_split_1136_; lean_object* v_lookaheads_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1141_; 
v_split_1136_ = lean_ctor_get(v_toGoalState_1132_, 14);
lean_inc_ref(v_split_1136_);
lean_dec_ref(v_toGoalState_1132_);
v_lookaheads_1137_ = lean_ctor_get(v_split_1136_, 5);
lean_inc(v_lookaheads_1137_);
lean_dec_ref(v_split_1136_);
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_box(v___x_1083_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___x_1139_);
lean_ctor_set(v___x_1134_, 0, v___x_1124_);
v___x_1141_ = v___x_1134_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_1143_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 1, v___x_1141_);
lean_ctor_set(v___x_1079_, 0, v___x_1138_);
v___x_1143_ = v___x_1079_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1141_);
v___x_1143_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v_lookahead_1070_, v_lookaheads_1137_, v___x_1143_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_lookaheads_1137_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1222_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1222_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1222_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v_fst_1149_; 
v_fst_1149_ = lean_ctor_get(v_a_1145_, 0);
if (lean_obj_tag(v_fst_1149_) == 0)
{
lean_object* v_snd_1150_; lean_object* v_snd_1151_; uint8_t v___x_1152_; 
v_snd_1150_ = lean_ctor_get(v_a_1145_, 1);
lean_inc(v_snd_1150_);
lean_dec(v_a_1145_);
v_snd_1151_ = lean_ctor_get(v_snd_1150_, 1);
v___x_1152_ = lean_unbox(v_snd_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1155_; 
lean_dec(v_snd_1150_);
v___x_1153_ = lean_box(v___x_1083_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1153_);
v___x_1155_ = v___x_1147_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
else
{
lean_object* v_fst_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v_toGoalState_1160_; lean_object* v_split_1161_; lean_object* v_mvarId_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1216_; 
v_fst_1157_ = lean_ctor_get(v_snd_1150_, 0);
lean_inc(v_fst_1157_);
lean_dec(v_snd_1150_);
v___x_1158_ = lean_st_ref_get(v_a_1063_);
lean_dec(v___x_1158_);
v___x_1159_ = lean_st_ref_take(v_a_1054_);
v_toGoalState_1160_ = lean_ctor_get(v___x_1159_, 0);
lean_inc_ref(v_toGoalState_1160_);
v_split_1161_ = lean_ctor_get(v_toGoalState_1160_, 14);
lean_inc_ref(v_split_1161_);
v_mvarId_1162_ = lean_ctor_get(v___x_1159_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1216_ == 0)
{
lean_object* v_unused_1217_; 
v_unused_1217_ = lean_ctor_get(v___x_1159_, 0);
lean_dec(v_unused_1217_);
v___x_1164_ = v___x_1159_;
v_isShared_1165_ = v_isSharedCheck_1216_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_mvarId_1162_);
lean_dec(v___x_1159_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1216_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v_nextDeclIdx_1166_; lean_object* v_enodeMap_1167_; lean_object* v_exprs_1168_; lean_object* v_parents_1169_; lean_object* v_congrTable_1170_; lean_object* v_appMap_1171_; lean_object* v_indicesFound_1172_; lean_object* v_newFacts_1173_; uint8_t v_inconsistent_1174_; lean_object* v_nextIdx_1175_; lean_object* v_newRawFacts_1176_; lean_object* v_facts_1177_; lean_object* v_extThms_1178_; lean_object* v_ematch_1179_; lean_object* v_inj_1180_; lean_object* v_clean_1181_; lean_object* v_sstates_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1214_; 
v_nextDeclIdx_1166_ = lean_ctor_get(v_toGoalState_1160_, 0);
v_enodeMap_1167_ = lean_ctor_get(v_toGoalState_1160_, 1);
v_exprs_1168_ = lean_ctor_get(v_toGoalState_1160_, 2);
v_parents_1169_ = lean_ctor_get(v_toGoalState_1160_, 3);
v_congrTable_1170_ = lean_ctor_get(v_toGoalState_1160_, 4);
v_appMap_1171_ = lean_ctor_get(v_toGoalState_1160_, 5);
v_indicesFound_1172_ = lean_ctor_get(v_toGoalState_1160_, 6);
v_newFacts_1173_ = lean_ctor_get(v_toGoalState_1160_, 7);
v_inconsistent_1174_ = lean_ctor_get_uint8(v_toGoalState_1160_, sizeof(void*)*17);
v_nextIdx_1175_ = lean_ctor_get(v_toGoalState_1160_, 8);
v_newRawFacts_1176_ = lean_ctor_get(v_toGoalState_1160_, 9);
v_facts_1177_ = lean_ctor_get(v_toGoalState_1160_, 10);
v_extThms_1178_ = lean_ctor_get(v_toGoalState_1160_, 11);
v_ematch_1179_ = lean_ctor_get(v_toGoalState_1160_, 12);
v_inj_1180_ = lean_ctor_get(v_toGoalState_1160_, 13);
v_clean_1181_ = lean_ctor_get(v_toGoalState_1160_, 15);
v_sstates_1182_ = lean_ctor_get(v_toGoalState_1160_, 16);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_toGoalState_1160_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; 
v_unused_1215_ = lean_ctor_get(v_toGoalState_1160_, 14);
lean_dec(v_unused_1215_);
v___x_1184_ = v_toGoalState_1160_;
v_isShared_1185_ = v_isSharedCheck_1214_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_sstates_1182_);
lean_inc(v_clean_1181_);
lean_inc(v_inj_1180_);
lean_inc(v_ematch_1179_);
lean_inc(v_extThms_1178_);
lean_inc(v_facts_1177_);
lean_inc(v_newRawFacts_1176_);
lean_inc(v_nextIdx_1175_);
lean_inc(v_newFacts_1173_);
lean_inc(v_indicesFound_1172_);
lean_inc(v_appMap_1171_);
lean_inc(v_congrTable_1170_);
lean_inc(v_parents_1169_);
lean_inc(v_exprs_1168_);
lean_inc(v_enodeMap_1167_);
lean_inc(v_nextDeclIdx_1166_);
lean_dec(v_toGoalState_1160_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1214_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v_num_1186_; lean_object* v_candidates_1187_; lean_object* v_added_1188_; lean_object* v_resolved_1189_; lean_object* v_trace_1190_; lean_object* v_lookaheads_1191_; lean_object* v_argPosMap_1192_; lean_object* v_argsAt_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1213_; 
v_num_1186_ = lean_ctor_get(v_split_1161_, 0);
v_candidates_1187_ = lean_ctor_get(v_split_1161_, 1);
v_added_1188_ = lean_ctor_get(v_split_1161_, 2);
v_resolved_1189_ = lean_ctor_get(v_split_1161_, 3);
v_trace_1190_ = lean_ctor_get(v_split_1161_, 4);
v_lookaheads_1191_ = lean_ctor_get(v_split_1161_, 5);
v_argPosMap_1192_ = lean_ctor_get(v_split_1161_, 6);
v_argsAt_1193_ = lean_ctor_get(v_split_1161_, 7);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_split_1161_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1195_ = v_split_1161_;
v_isShared_1196_ = v_isSharedCheck_1213_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_argsAt_1193_);
lean_inc(v_argPosMap_1192_);
lean_inc(v_lookaheads_1191_);
lean_inc(v_trace_1190_);
lean_inc(v_resolved_1189_);
lean_inc(v_added_1188_);
lean_inc(v_candidates_1187_);
lean_inc(v_num_1186_);
lean_dec(v_split_1161_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1213_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1197_ = l_List_reverse___redArg(v_fst_1157_);
v___x_1198_ = l_List_appendTR___redArg(v_lookaheads_1191_, v___x_1197_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 5, v___x_1198_);
v___x_1200_ = v___x_1195_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_num_1186_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_candidates_1187_);
lean_ctor_set(v_reuseFailAlloc_1212_, 2, v_added_1188_);
lean_ctor_set(v_reuseFailAlloc_1212_, 3, v_resolved_1189_);
lean_ctor_set(v_reuseFailAlloc_1212_, 4, v_trace_1190_);
lean_ctor_set(v_reuseFailAlloc_1212_, 5, v___x_1198_);
lean_ctor_set(v_reuseFailAlloc_1212_, 6, v_argPosMap_1192_);
lean_ctor_set(v_reuseFailAlloc_1212_, 7, v_argsAt_1193_);
v___x_1200_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 14, v___x_1200_);
v___x_1202_ = v___x_1184_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_nextDeclIdx_1166_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v_enodeMap_1167_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v_exprs_1168_);
lean_ctor_set(v_reuseFailAlloc_1211_, 3, v_parents_1169_);
lean_ctor_set(v_reuseFailAlloc_1211_, 4, v_congrTable_1170_);
lean_ctor_set(v_reuseFailAlloc_1211_, 5, v_appMap_1171_);
lean_ctor_set(v_reuseFailAlloc_1211_, 6, v_indicesFound_1172_);
lean_ctor_set(v_reuseFailAlloc_1211_, 7, v_newFacts_1173_);
lean_ctor_set(v_reuseFailAlloc_1211_, 8, v_nextIdx_1175_);
lean_ctor_set(v_reuseFailAlloc_1211_, 9, v_newRawFacts_1176_);
lean_ctor_set(v_reuseFailAlloc_1211_, 10, v_facts_1177_);
lean_ctor_set(v_reuseFailAlloc_1211_, 11, v_extThms_1178_);
lean_ctor_set(v_reuseFailAlloc_1211_, 12, v_ematch_1179_);
lean_ctor_set(v_reuseFailAlloc_1211_, 13, v_inj_1180_);
lean_ctor_set(v_reuseFailAlloc_1211_, 14, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1211_, 15, v_clean_1181_);
lean_ctor_set(v_reuseFailAlloc_1211_, 16, v_sstates_1182_);
lean_ctor_set_uint8(v_reuseFailAlloc_1211_, sizeof(void*)*17, v_inconsistent_1174_);
v___x_1202_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1204_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1202_);
v___x_1204_ = v___x_1164_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_mvarId_1162_);
v___x_1204_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v___x_1205_ = lean_st_ref_set(v_a_1054_, v___x_1204_);
v___x_1206_ = lean_box(v_lookahead_1070_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1206_);
v___x_1208_ = v___x_1147_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
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
lean_object* v_val_1218_; lean_object* v___x_1220_; 
lean_inc_ref(v_fst_1149_);
lean_dec(v_a_1145_);
v_val_1218_ = lean_ctor_get(v_fst_1149_, 0);
lean_inc(v_val_1218_);
lean_dec_ref(v_fst_1149_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v_val_1218_);
v___x_1220_ = v___x_1147_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_val_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
v_a_1223_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1144_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1144_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
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
uint8_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1247_; 
lean_del_object(v___x_1079_);
v___x_1244_ = 0;
v___x_1245_ = lean_box(v___x_1244_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1245_);
v___x_1247_ = v___x_1068_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1245_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
v_a_1252_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1065_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1065_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_Meta_Grind_lookahead(v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
lean_dec(v_a_1269_);
lean_dec_ref(v_a_1268_);
lean_dec(v_a_1267_);
lean_dec_ref(v_a_1266_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
lean_dec(v_a_1261_);
lean_dec(v_a_1260_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t v___x_1272_, lean_object* v_as_1273_, lean_object* v_as_x27_1274_, lean_object* v_b_1275_, lean_object* v_a_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_1272_, v_as_x27_1274_, v_b_1275_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object* v___x_1289_, lean_object* v_as_1290_, lean_object* v_as_x27_1291_, lean_object* v_b_1292_, lean_object* v_a_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v___x_43698__boxed_1305_; lean_object* v_res_1306_; 
v___x_43698__boxed_1305_ = lean_unbox(v___x_1289_);
v_res_1306_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(v___x_43698__boxed_1305_, v_as_1290_, v_as_x27_1291_, v_b_1292_, v_a_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec(v___y_1294_);
lean_dec(v_as_x27_1291_);
lean_dec(v_as_1290_);
return v_res_1306_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations = _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
}
#ifdef __cplusplus
}
#endif
