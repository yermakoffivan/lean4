// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Propagate
// Imports: import Init.Grind import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Ext import Lean.Meta.Tactic.Grind.Diseq public import Lean.Meta.Tactic.Grind.PropagatorAttr
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqBoolFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqBoolTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_heq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDiseqProofUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqBoolFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqBoolTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_mkDiseqProof_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getExtTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_propagateDiseqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markCaseSplitAsResolved(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndUp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndUp___closed__15;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateAndDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateAndDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrUp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrUp___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateOrDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateOrDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotUp___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateNotDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateNotDown___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqUp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqUp___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqDown___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqUp___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBEqDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBEqDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqMatchDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateHEqDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateHEqDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateHEqDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateHEqDown___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateIte___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateIte___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateIte___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateIte___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateIte___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateIte___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateIte___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateIte___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateIte___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateIte___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateDIte___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDIte___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDIte___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDIte___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDIte___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDIte___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDIte___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDIte___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideDown___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideDown___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateDecideUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateDecideUp___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolAndDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrUp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolOrDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotUp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBoolNotDown___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("And", 3, 3);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__0, &l_Lean_Meta_Grind_propagateAndUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__2(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__3(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__4(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("and_eq_of_eq_false_right", 24, 24);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__5(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__4, &l_Lean_Meta_Grind_propagateAndUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__4);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_9_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_10_ = l_Lean_Name_mkStr3(v___x_9_, v___x_8_, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__6(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_box(0);
v___x_12_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__5, &l_Lean_Meta_Grind_propagateAndUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__5);
v___x_13_ = l_Lean_mkConst(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__7(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_string_unchecked("and_eq_of_eq_false_left", 23, 23);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__8(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_15_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__7, &l_Lean_Meta_Grind_propagateAndUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__7);
v___x_16_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_17_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_18_ = l_Lean_Name_mkStr3(v___x_17_, v___x_16_, v___x_15_);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = lean_box(0);
v___x_20_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__8, &l_Lean_Meta_Grind_propagateAndUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__8);
v___x_21_ = l_Lean_mkConst(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__10(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_mk_string_unchecked("and_eq_of_eq_true_right", 23, 23);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__11(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__10, &l_Lean_Meta_Grind_propagateAndUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__10);
v___x_24_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_25_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_26_ = l_Lean_Name_mkStr3(v___x_25_, v___x_24_, v___x_23_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__12(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__11, &l_Lean_Meta_Grind_propagateAndUp___closed__11_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__11);
v___x_29_ = l_Lean_mkConst(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__13(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("and_eq_of_eq_true_left", 22, 22);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__14(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_31_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__13, &l_Lean_Meta_Grind_propagateAndUp___closed__13_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__13);
v___x_32_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_33_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_34_ = l_Lean_Name_mkStr3(v___x_33_, v___x_32_, v___x_31_);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndUp___closed__15(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__14, &l_Lean_Meta_Grind_propagateAndUp___closed__14_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__14);
v___x_37_ = l_Lean_mkConst(v___x_36_, v___x_35_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp(lean_object* v_e_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
lean_inc_ref(v_e_38_);
v___x_53_ = l_Lean_Expr_cleanupAnnotations(v_e_38_);
v___x_54_ = l_Lean_Expr_isApp(v___x_53_);
if (v___x_54_ == 0)
{
lean_dec_ref(v___x_53_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v_arg_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v_arg_55_ = lean_ctor_get(v___x_53_, 1);
lean_inc_ref(v_arg_55_);
v___x_56_ = l_Lean_Expr_appFnCleanup___redArg(v___x_53_);
v___x_57_ = l_Lean_Expr_isApp(v___x_56_);
if (v___x_57_ == 0)
{
lean_dec_ref(v___x_56_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v_arg_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v_arg_58_ = lean_ctor_get(v___x_56_, 1);
lean_inc_ref(v_arg_58_);
v___x_59_ = l_Lean_Expr_appFnCleanup___redArg(v___x_56_);
v___x_60_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__1, &l_Lean_Meta_Grind_propagateAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__1);
v___x_61_ = l_Lean_Expr_isConstOf(v___x_59_, v___x_60_);
lean_dec_ref(v___x_59_);
if (v___x_61_ == 0)
{
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
goto v___jp_50_;
}
else
{
lean_object* v___x_62_; 
lean_inc_ref(v_arg_58_);
v___x_62_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_58_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; uint8_t v___x_64_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_a_63_);
lean_dec_ref(v___x_62_);
v___x_64_ = lean_unbox(v_a_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
lean_inc_ref(v_arg_55_);
v___x_65_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_55_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; uint8_t v___x_67_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_66_);
lean_dec_ref(v___x_65_);
v___x_67_ = lean_unbox(v_a_66_);
lean_dec(v_a_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; 
lean_dec(v_a_63_);
lean_inc_ref(v_arg_58_);
v___x_68_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_58_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; uint8_t v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref(v___x_68_);
v___x_70_ = lean_unbox(v_a_69_);
lean_dec(v_a_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_inc_ref(v_arg_55_);
v___x_71_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_55_, v_a_39_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_94_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_94_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_94_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_94_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
uint8_t v___x_76_; 
v___x_76_ = lean_unbox(v_a_72_);
lean_dec(v_a_72_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_79_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v___x_77_ = lean_box(0);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_77_);
v___x_79_ = v___x_74_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
else
{
lean_object* v___x_81_; 
lean_del_object(v___x_74_);
lean_inc_ref(v_arg_55_);
v___x_81_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_55_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref(v___x_81_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__6, &l_Lean_Meta_Grind_propagateAndUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__6);
v___x_84_ = l_Lean_mkApp3(v___x_83_, v_arg_58_, v_arg_55_, v_a_82_);
v___x_85_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_38_, v___x_84_, v_a_39_, v_a_41_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_85_;
}
else
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_86_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_81_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_81_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
}
else
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_95_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_71_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_71_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
else
{
lean_object* v___x_103_; 
lean_inc_ref(v_arg_58_);
v___x_103_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_58_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_a_104_);
lean_dec_ref(v___x_103_);
v___x_105_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__9, &l_Lean_Meta_Grind_propagateAndUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__9);
v___x_106_ = l_Lean_mkApp3(v___x_105_, v_arg_58_, v_arg_55_, v_a_104_);
v___x_107_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_38_, v___x_106_, v_a_39_, v_a_41_, v_a_43_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_107_;
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_108_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_103_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_103_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_116_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_68_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_68_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
else
{
lean_object* v___x_124_; 
lean_inc_ref(v_arg_55_);
v___x_124_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_55_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref(v___x_124_);
v___x_126_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__12, &l_Lean_Meta_Grind_propagateAndUp___closed__12_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__12);
lean_inc_ref(v_arg_58_);
v___x_127_ = l_Lean_mkApp3(v___x_126_, v_arg_58_, v_arg_55_, v_a_125_);
v___x_128_ = lean_unbox(v_a_63_);
lean_dec(v_a_63_);
v___x_129_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_38_, v_arg_58_, v___x_127_, v___x_128_, v_a_39_, v_a_41_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_129_;
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
lean_dec(v_a_63_);
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_130_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_124_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_124_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec(v_a_63_);
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_138_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_65_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_65_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
else
{
lean_object* v___x_146_; 
lean_dec(v_a_63_);
lean_inc_ref(v_arg_58_);
v___x_146_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_58_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref(v___x_146_);
v___x_148_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__15, &l_Lean_Meta_Grind_propagateAndUp___closed__15_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__15);
lean_inc_ref(v_arg_55_);
v___x_149_ = l_Lean_mkApp3(v___x_148_, v_arg_58_, v_arg_55_, v_a_147_);
v___x_150_ = 0;
v___x_151_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_38_, v_arg_55_, v___x_149_, v___x_150_, v_a_39_, v_a_41_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_151_;
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_152_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_146_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_146_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec_ref(v_arg_58_);
lean_dec_ref(v_arg_55_);
lean_dec_ref(v_e_38_);
v_a_160_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_62_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_62_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
}
v___jp_50_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_box(0);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndUp___boxed(lean_object* v_e_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Meta_Grind_propagateAndUp(v_e_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec(v_a_169_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__1, &l_Lean_Meta_Grind_propagateAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__1);
v___x_183_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateAndUp___boxed), 12, 0);
v___x_184_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_182_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8____boxed(lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8_();
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__0(void){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lean_mk_string_unchecked("eq_true_of_and_eq_true_left", 27, 27);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__1(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_188_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__0, &l_Lean_Meta_Grind_propagateAndDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__0);
v___x_189_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_190_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_191_ = l_Lean_Name_mkStr3(v___x_190_, v___x_189_, v___x_188_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__2(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_box(0);
v___x_193_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__1, &l_Lean_Meta_Grind_propagateAndDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__1);
v___x_194_ = l_Lean_mkConst(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__3(void){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_mk_string_unchecked("eq_true_of_and_eq_true_right", 28, 28);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__4(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_196_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__3, &l_Lean_Meta_Grind_propagateAndDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__3);
v___x_197_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_198_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_199_ = l_Lean_Name_mkStr3(v___x_198_, v___x_197_, v___x_196_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateAndDown___closed__5(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_box(0);
v___x_201_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__4, &l_Lean_Meta_Grind_propagateAndDown___closed__4_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__4);
v___x_202_ = l_Lean_mkConst(v___x_201_, v___x_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown(lean_object* v_e_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_218_; 
lean_inc_ref(v_e_203_);
v___x_218_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_203_, v_a_204_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_253_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_253_ == 0)
{
v___x_221_ = v___x_218_;
v_isShared_222_ = v_isSharedCheck_253_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_218_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_253_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
uint8_t v___x_223_; 
v___x_223_ = lean_unbox(v_a_219_);
lean_dec(v_a_219_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; lean_object* v___x_226_; 
lean_dec_ref(v_e_203_);
v___x_224_ = lean_box(0);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_224_);
v___x_226_ = v___x_221_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
else
{
lean_object* v___x_228_; uint8_t v___x_229_; 
lean_del_object(v___x_221_);
lean_inc_ref(v_e_203_);
v___x_228_ = l_Lean_Expr_cleanupAnnotations(v_e_203_);
v___x_229_ = l_Lean_Expr_isApp(v___x_228_);
if (v___x_229_ == 0)
{
lean_dec_ref(v___x_228_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v_arg_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v_arg_230_ = lean_ctor_get(v___x_228_, 1);
lean_inc_ref(v_arg_230_);
v___x_231_ = l_Lean_Expr_appFnCleanup___redArg(v___x_228_);
v___x_232_ = l_Lean_Expr_isApp(v___x_231_);
if (v___x_232_ == 0)
{
lean_dec_ref(v___x_231_);
lean_dec_ref(v_arg_230_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v_arg_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_arg_233_ = lean_ctor_get(v___x_231_, 1);
lean_inc_ref(v_arg_233_);
v___x_234_ = l_Lean_Expr_appFnCleanup___redArg(v___x_231_);
v___x_235_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__1, &l_Lean_Meta_Grind_propagateAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__1);
v___x_236_ = l_Lean_Expr_isConstOf(v___x_234_, v___x_235_);
lean_dec_ref(v___x_234_);
if (v___x_236_ == 0)
{
lean_dec_ref(v_arg_233_);
lean_dec_ref(v_arg_230_);
lean_dec_ref(v_e_203_);
goto v___jp_215_;
}
else
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc_n(v_a_238_, 2);
lean_dec_ref(v___x_237_);
v___x_239_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__2, &l_Lean_Meta_Grind_propagateAndDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__2);
lean_inc_ref(v_arg_230_);
lean_inc_ref_n(v_arg_233_, 2);
v___x_240_ = l_Lean_mkApp3(v___x_239_, v_arg_233_, v_arg_230_, v_a_238_);
v___x_241_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_233_, v___x_240_, v_a_204_, v_a_206_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v___x_241_);
v___x_242_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__5, &l_Lean_Meta_Grind_propagateAndDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__5);
lean_inc_ref(v_arg_230_);
v___x_243_ = l_Lean_mkApp3(v___x_242_, v_arg_233_, v_arg_230_, v_a_238_);
v___x_244_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_230_, v___x_243_, v_a_204_, v_a_206_, v_a_208_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
return v___x_244_;
}
else
{
lean_dec(v_a_238_);
lean_dec_ref(v_arg_233_);
lean_dec_ref(v_arg_230_);
return v___x_241_;
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec_ref(v_arg_233_);
lean_dec_ref(v_arg_230_);
v_a_245_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_237_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_237_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
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
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_e_203_);
v_a_254_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_218_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_218_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
v___jp_215_:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_box(0);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateAndDown___boxed(lean_object* v_e_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Meta_Grind_propagateAndDown(v_e_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec(v_a_263_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__1, &l_Lean_Meta_Grind_propagateAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__1);
v___x_277_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateAndDown___boxed), 12, 0);
v___x_278_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_276_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8____boxed(lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8_();
return v_res_280_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__0(void){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_mk_string_unchecked("Or", 2, 2);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__1(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__0, &l_Lean_Meta_Grind_propagateOrUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__0);
v___x_283_ = l_Lean_Name_mkStr1(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__2(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_mk_string_unchecked("or_eq_of_eq_true_right", 22, 22);
return v___x_284_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__3(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_285_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__2, &l_Lean_Meta_Grind_propagateOrUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__2);
v___x_286_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_287_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_288_ = l_Lean_Name_mkStr3(v___x_287_, v___x_286_, v___x_285_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__4(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_box(0);
v___x_290_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__3, &l_Lean_Meta_Grind_propagateOrUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__3);
v___x_291_ = l_Lean_mkConst(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__5(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_mk_string_unchecked("or_eq_of_eq_true_left", 21, 21);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__6(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_293_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__5, &l_Lean_Meta_Grind_propagateOrUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__5);
v___x_294_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_295_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_296_ = l_Lean_Name_mkStr3(v___x_295_, v___x_294_, v___x_293_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__7(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__6, &l_Lean_Meta_Grind_propagateOrUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__6);
v___x_299_ = l_Lean_mkConst(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__8(void){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_mk_string_unchecked("or_eq_of_eq_false_right", 23, 23);
return v___x_300_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__9(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__8, &l_Lean_Meta_Grind_propagateOrUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__8);
v___x_302_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_303_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_304_ = l_Lean_Name_mkStr3(v___x_303_, v___x_302_, v___x_301_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__10(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_box(0);
v___x_306_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__9, &l_Lean_Meta_Grind_propagateOrUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__9);
v___x_307_ = l_Lean_mkConst(v___x_306_, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__11(void){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_mk_string_unchecked("or_eq_of_eq_false_left", 22, 22);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__12(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__11, &l_Lean_Meta_Grind_propagateOrUp___closed__11_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__11);
v___x_310_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_311_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_312_ = l_Lean_Name_mkStr3(v___x_311_, v___x_310_, v___x_309_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrUp___closed__13(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_box(0);
v___x_314_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__12, &l_Lean_Meta_Grind_propagateOrUp___closed__12_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__12);
v___x_315_ = l_Lean_mkConst(v___x_314_, v___x_313_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp(lean_object* v_e_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
lean_inc_ref(v_e_316_);
v___x_331_ = l_Lean_Expr_cleanupAnnotations(v_e_316_);
v___x_332_ = l_Lean_Expr_isApp(v___x_331_);
if (v___x_332_ == 0)
{
lean_dec_ref(v___x_331_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v_arg_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v_arg_333_ = lean_ctor_get(v___x_331_, 1);
lean_inc_ref(v_arg_333_);
v___x_334_ = l_Lean_Expr_appFnCleanup___redArg(v___x_331_);
v___x_335_ = l_Lean_Expr_isApp(v___x_334_);
if (v___x_335_ == 0)
{
lean_dec_ref(v___x_334_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v_arg_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_arg_336_ = lean_ctor_get(v___x_334_, 1);
lean_inc_ref(v_arg_336_);
v___x_337_ = l_Lean_Expr_appFnCleanup___redArg(v___x_334_);
v___x_338_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__1, &l_Lean_Meta_Grind_propagateOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__1);
v___x_339_ = l_Lean_Expr_isConstOf(v___x_337_, v___x_338_);
lean_dec_ref(v___x_337_);
if (v___x_339_ == 0)
{
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
goto v___jp_328_;
}
else
{
lean_object* v___x_340_; 
lean_inc_ref(v_arg_336_);
v___x_340_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_336_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; uint8_t v___x_342_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref(v___x_340_);
v___x_342_ = lean_unbox(v_a_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; 
lean_inc_ref(v_arg_333_);
v___x_343_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_333_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; uint8_t v___x_345_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref(v___x_343_);
v___x_345_ = lean_unbox(v_a_344_);
lean_dec(v_a_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
lean_dec(v_a_341_);
lean_inc_ref(v_arg_336_);
v___x_346_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_336_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; uint8_t v___x_348_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref(v___x_346_);
v___x_348_ = lean_unbox(v_a_347_);
lean_dec(v_a_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; 
lean_inc_ref(v_arg_333_);
v___x_349_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_333_, v_a_317_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_372_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_372_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_372_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_372_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
uint8_t v___x_354_; 
v___x_354_ = lean_unbox(v_a_350_);
lean_dec(v_a_350_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_357_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v___x_355_ = lean_box(0);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_355_);
v___x_357_ = v___x_352_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
else
{
lean_object* v___x_359_; 
lean_del_object(v___x_352_);
lean_inc_ref(v_arg_333_);
v___x_359_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_333_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref(v___x_359_);
v___x_361_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__4, &l_Lean_Meta_Grind_propagateOrUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__4);
v___x_362_ = l_Lean_mkApp3(v___x_361_, v_arg_336_, v_arg_333_, v_a_360_);
v___x_363_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_316_, v___x_362_, v_a_317_, v_a_319_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_363_;
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_364_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_359_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_359_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
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
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_373_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_349_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_349_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
else
{
lean_object* v___x_381_; 
lean_inc_ref(v_arg_336_);
v___x_381_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_336_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref(v___x_381_);
v___x_383_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__7, &l_Lean_Meta_Grind_propagateOrUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__7);
v___x_384_ = l_Lean_mkApp3(v___x_383_, v_arg_336_, v_arg_333_, v_a_382_);
v___x_385_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_316_, v___x_384_, v_a_317_, v_a_319_, v_a_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_385_;
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_386_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_381_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_381_);
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
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
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
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_394_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_346_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_346_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_object* v___x_402_; 
lean_inc_ref(v_arg_333_);
v___x_402_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_333_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
v___x_404_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__10, &l_Lean_Meta_Grind_propagateOrUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__10);
lean_inc_ref(v_arg_336_);
v___x_405_ = l_Lean_mkApp3(v___x_404_, v_arg_336_, v_arg_333_, v_a_403_);
v___x_406_ = lean_unbox(v_a_341_);
lean_dec(v_a_341_);
v___x_407_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_316_, v_arg_336_, v___x_405_, v___x_406_, v_a_317_, v_a_319_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_407_;
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_a_341_);
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_408_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_402_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_402_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec(v_a_341_);
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_416_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_343_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_343_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
else
{
lean_object* v___x_424_; 
lean_dec(v_a_341_);
lean_inc_ref(v_arg_336_);
v___x_424_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_336_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; lean_object* v___x_429_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__13, &l_Lean_Meta_Grind_propagateOrUp___closed__13_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__13);
lean_inc_ref(v_arg_333_);
v___x_427_ = l_Lean_mkApp3(v___x_426_, v_arg_336_, v_arg_333_, v_a_425_);
v___x_428_ = 0;
v___x_429_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_316_, v_arg_333_, v___x_427_, v___x_428_, v_a_317_, v_a_319_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_429_;
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_430_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_424_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_424_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_333_);
lean_dec_ref(v_e_316_);
v_a_438_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_340_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_340_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
}
v___jp_328_:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_box(0);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrUp___boxed(lean_object* v_e_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Meta_Grind_propagateOrUp(v_e_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec(v_a_447_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__1, &l_Lean_Meta_Grind_propagateOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__1);
v___x_461_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateOrUp___boxed), 12, 0);
v___x_462_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_460_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8____boxed(lean_object* v_a_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8_();
return v_res_464_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__0(void){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_mk_string_unchecked("eq_false_of_or_eq_false_left", 28, 28);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__1(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_466_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__0, &l_Lean_Meta_Grind_propagateOrDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__0);
v___x_467_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_468_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_469_ = l_Lean_Name_mkStr3(v___x_468_, v___x_467_, v___x_466_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__2(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_box(0);
v___x_471_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__1, &l_Lean_Meta_Grind_propagateOrDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__1);
v___x_472_ = l_Lean_mkConst(v___x_471_, v___x_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__3(void){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = lean_mk_string_unchecked("eq_false_of_or_eq_false_right", 29, 29);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__4(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_474_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__3, &l_Lean_Meta_Grind_propagateOrDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__3);
v___x_475_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_476_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_477_ = l_Lean_Name_mkStr3(v___x_476_, v___x_475_, v___x_474_);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateOrDown___closed__5(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_box(0);
v___x_479_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__4, &l_Lean_Meta_Grind_propagateOrDown___closed__4_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__4);
v___x_480_ = l_Lean_mkConst(v___x_479_, v___x_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown(lean_object* v_e_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_496_; 
lean_inc_ref(v_e_481_);
v___x_496_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_481_, v_a_482_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_531_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_531_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_531_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_531_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
uint8_t v___x_501_; 
v___x_501_ = lean_unbox(v_a_497_);
lean_dec(v_a_497_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_504_; 
lean_dec_ref(v_e_481_);
v___x_502_ = lean_box(0);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_502_);
v___x_504_ = v___x_499_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
else
{
lean_object* v___x_506_; uint8_t v___x_507_; 
lean_del_object(v___x_499_);
lean_inc_ref(v_e_481_);
v___x_506_ = l_Lean_Expr_cleanupAnnotations(v_e_481_);
v___x_507_ = l_Lean_Expr_isApp(v___x_506_);
if (v___x_507_ == 0)
{
lean_dec_ref(v___x_506_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v_arg_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v_arg_508_ = lean_ctor_get(v___x_506_, 1);
lean_inc_ref(v_arg_508_);
v___x_509_ = l_Lean_Expr_appFnCleanup___redArg(v___x_506_);
v___x_510_ = l_Lean_Expr_isApp(v___x_509_);
if (v___x_510_ == 0)
{
lean_dec_ref(v___x_509_);
lean_dec_ref(v_arg_508_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v_arg_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_arg_511_ = lean_ctor_get(v___x_509_, 1);
lean_inc_ref(v_arg_511_);
v___x_512_ = l_Lean_Expr_appFnCleanup___redArg(v___x_509_);
v___x_513_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__1, &l_Lean_Meta_Grind_propagateOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__1);
v___x_514_ = l_Lean_Expr_isConstOf(v___x_512_, v___x_513_);
lean_dec_ref(v___x_512_);
if (v___x_514_ == 0)
{
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_508_);
lean_dec_ref(v_e_481_);
goto v___jp_493_;
}
else
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc_n(v_a_516_, 2);
lean_dec_ref(v___x_515_);
v___x_517_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__2, &l_Lean_Meta_Grind_propagateOrDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__2);
lean_inc_ref(v_arg_508_);
lean_inc_ref_n(v_arg_511_, 2);
v___x_518_ = l_Lean_mkApp3(v___x_517_, v_arg_511_, v_arg_508_, v_a_516_);
v___x_519_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_511_, v___x_518_, v_a_482_, v_a_484_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec_ref(v___x_519_);
v___x_520_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__5, &l_Lean_Meta_Grind_propagateOrDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__5);
lean_inc_ref(v_arg_508_);
v___x_521_ = l_Lean_mkApp3(v___x_520_, v_arg_511_, v_arg_508_, v_a_516_);
v___x_522_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_508_, v___x_521_, v_a_482_, v_a_484_, v_a_486_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
return v___x_522_;
}
else
{
lean_dec(v_a_516_);
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_508_);
return v___x_519_;
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v_arg_511_);
lean_dec_ref(v_arg_508_);
v_a_523_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_515_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_515_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
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
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_e_481_);
v_a_532_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_496_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_496_);
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
v___jp_493_:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateOrDown___boxed(lean_object* v_e_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Grind_propagateOrDown(v_e_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec(v_a_541_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__1, &l_Lean_Meta_Grind_propagateOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__1);
v___x_555_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateOrDown___boxed), 12, 0);
v___x_556_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_554_, v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8____boxed(lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8_();
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__0(void){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_mk_string_unchecked("Not", 3, 3);
return v___x_559_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__1(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__0, &l_Lean_Meta_Grind_propagateNotUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__0);
v___x_561_ = l_Lean_Name_mkStr1(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__2(void){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_mk_string_unchecked("false_of_not_eq_self", 20, 20);
return v___x_562_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__3(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_563_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__2, &l_Lean_Meta_Grind_propagateNotUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__2);
v___x_564_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_565_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_566_ = l_Lean_Name_mkStr3(v___x_565_, v___x_564_, v___x_563_);
return v___x_566_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__4(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_box(0);
v___x_568_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__3, &l_Lean_Meta_Grind_propagateNotUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__3);
v___x_569_ = l_Lean_mkConst(v___x_568_, v___x_567_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__5(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lean_mk_string_unchecked("not_eq_of_eq_true", 17, 17);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__6(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__5, &l_Lean_Meta_Grind_propagateNotUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__5);
v___x_572_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_573_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_574_ = l_Lean_Name_mkStr3(v___x_573_, v___x_572_, v___x_571_);
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__7(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = lean_box(0);
v___x_576_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__6, &l_Lean_Meta_Grind_propagateNotUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__6);
v___x_577_ = l_Lean_mkConst(v___x_576_, v___x_575_);
return v___x_577_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__8(void){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = lean_mk_string_unchecked("not_eq_of_eq_false", 18, 18);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__9(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__8, &l_Lean_Meta_Grind_propagateNotUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__8);
v___x_580_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_581_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_582_ = l_Lean_Name_mkStr3(v___x_581_, v___x_580_, v___x_579_);
return v___x_582_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotUp___closed__10(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = lean_box(0);
v___x_584_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__9, &l_Lean_Meta_Grind_propagateNotUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__9);
v___x_585_ = l_Lean_mkConst(v___x_584_, v___x_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp(lean_object* v_e_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
lean_inc_ref(v_e_586_);
v___x_601_ = l_Lean_Expr_cleanupAnnotations(v_e_586_);
v___x_602_ = l_Lean_Expr_isApp(v___x_601_);
if (v___x_602_ == 0)
{
lean_dec_ref(v___x_601_);
lean_dec_ref(v_e_586_);
goto v___jp_598_;
}
else
{
lean_object* v_arg_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v_arg_603_ = lean_ctor_get(v___x_601_, 1);
lean_inc_ref(v_arg_603_);
v___x_604_ = l_Lean_Expr_appFnCleanup___redArg(v___x_601_);
v___x_605_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__1, &l_Lean_Meta_Grind_propagateNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__1);
v___x_606_ = l_Lean_Expr_isConstOf(v___x_604_, v___x_605_);
lean_dec_ref(v___x_604_);
if (v___x_606_ == 0)
{
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
goto v___jp_598_;
}
else
{
lean_object* v___x_607_; 
lean_inc_ref(v_arg_603_);
v___x_607_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_603_, v_a_587_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; uint8_t v___x_609_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref(v___x_607_);
v___x_609_ = lean_unbox(v_a_608_);
lean_dec(v_a_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_inc_ref(v_arg_603_);
v___x_610_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_603_, v_a_587_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; uint8_t v___x_612_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref(v___x_610_);
v___x_612_ = lean_unbox(v_a_611_);
lean_dec(v_a_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_586_, v_arg_603_, v_a_587_, v_a_596_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_636_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_636_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
uint8_t v___x_618_; 
v___x_618_ = lean_unbox(v_a_614_);
lean_dec(v_a_614_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_621_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v___x_619_ = lean_box(0);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_619_);
v___x_621_ = v___x_616_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v___x_623_; 
lean_del_object(v___x_616_);
lean_inc(v_a_596_);
lean_inc_ref(v_a_595_);
lean_inc(v_a_594_);
lean_inc_ref(v_a_593_);
lean_inc(v_a_592_);
lean_inc_ref(v_a_591_);
lean_inc(v_a_590_);
lean_inc_ref(v_a_589_);
lean_inc(v_a_588_);
lean_inc(v_a_587_);
lean_inc_ref(v_arg_603_);
v___x_623_ = lean_grind_mk_eq_proof(v_e_586_, v_arg_603_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_624_);
lean_dec_ref(v___x_623_);
v___x_625_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__4, &l_Lean_Meta_Grind_propagateNotUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__4);
v___x_626_ = l_Lean_mkAppB(v___x_625_, v_arg_603_, v_a_624_);
v___x_627_ = l_Lean_Meta_Grind_closeGoal(v___x_626_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_627_;
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec_ref(v_arg_603_);
v_a_628_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_623_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_623_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v_a_637_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_613_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_613_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v___x_645_; 
lean_inc_ref(v_arg_603_);
v___x_645_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_603_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref(v___x_645_);
v___x_647_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__7, &l_Lean_Meta_Grind_propagateNotUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__7);
v___x_648_ = l_Lean_mkAppB(v___x_647_, v_arg_603_, v_a_646_);
v___x_649_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_586_, v___x_648_, v_a_587_, v_a_589_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_649_;
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v_a_650_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_645_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_645_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v_a_658_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_610_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_610_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v___x_666_; 
lean_inc_ref(v_arg_603_);
v___x_666_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_603_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref(v___x_666_);
v___x_668_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__10, &l_Lean_Meta_Grind_propagateNotUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__10);
v___x_669_ = l_Lean_mkAppB(v___x_668_, v_arg_603_, v_a_667_);
v___x_670_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_586_, v___x_669_, v_a_587_, v_a_589_, v_a_591_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
return v___x_670_;
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v_a_671_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_666_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_666_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec_ref(v_arg_603_);
lean_dec_ref(v_e_586_);
v_a_679_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_607_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_607_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
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
}
v___jp_598_:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_box(0);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotUp___boxed(lean_object* v_e_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Meta_Grind_propagateNotUp(v_e_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
lean_dec(v_a_691_);
lean_dec_ref(v_a_690_);
lean_dec(v_a_689_);
lean_dec(v_a_688_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__1, &l_Lean_Meta_Grind_propagateNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__1);
v___x_702_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateNotUp___boxed), 12, 0);
v___x_703_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_701_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8____boxed(lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8_();
return v_res_705_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__0(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_mk_string_unchecked("eq_false_of_not_eq_true", 23, 23);
return v___x_706_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__1(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_707_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__0, &l_Lean_Meta_Grind_propagateNotDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__0);
v___x_708_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_709_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_710_ = l_Lean_Name_mkStr3(v___x_709_, v___x_708_, v___x_707_);
return v___x_710_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__2(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = lean_box(0);
v___x_712_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__1, &l_Lean_Meta_Grind_propagateNotDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__1);
v___x_713_ = l_Lean_mkConst(v___x_712_, v___x_711_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__3(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_mk_string_unchecked("eq_true_of_not_eq_false", 23, 23);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__4(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__3, &l_Lean_Meta_Grind_propagateNotDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__3);
v___x_716_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_717_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_718_ = l_Lean_Name_mkStr3(v___x_717_, v___x_716_, v___x_715_);
return v___x_718_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateNotDown___closed__5(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_box(0);
v___x_720_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__4, &l_Lean_Meta_Grind_propagateNotDown___closed__4_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__4);
v___x_721_ = l_Lean_mkConst(v___x_720_, v___x_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown(lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v___x_737_; uint8_t v___x_738_; 
lean_inc_ref(v_e_722_);
v___x_737_ = l_Lean_Expr_cleanupAnnotations(v_e_722_);
v___x_738_ = l_Lean_Expr_isApp(v___x_737_);
if (v___x_738_ == 0)
{
lean_dec_ref(v___x_737_);
lean_dec_ref(v_e_722_);
goto v___jp_734_;
}
else
{
lean_object* v_arg_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v_arg_739_ = lean_ctor_get(v___x_737_, 1);
lean_inc_ref(v_arg_739_);
v___x_740_ = l_Lean_Expr_appFnCleanup___redArg(v___x_737_);
v___x_741_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__1, &l_Lean_Meta_Grind_propagateNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__1);
v___x_742_ = l_Lean_Expr_isConstOf(v___x_740_, v___x_741_);
lean_dec_ref(v___x_740_);
if (v___x_742_ == 0)
{
lean_dec_ref(v_arg_739_);
lean_dec_ref(v_e_722_);
goto v___jp_734_;
}
else
{
lean_object* v___x_743_; 
lean_inc_ref(v_e_722_);
v___x_743_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_722_, v_a_723_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; uint8_t v___x_745_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref(v___x_743_);
v___x_745_ = lean_unbox(v_a_744_);
lean_dec(v_a_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
lean_inc_ref(v_e_722_);
v___x_746_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_722_, v_a_723_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; uint8_t v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref(v___x_746_);
v___x_748_ = lean_unbox(v_a_747_);
lean_dec(v_a_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_722_, v_arg_739_, v_a_723_, v_a_732_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_772_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_772_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_772_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_772_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
uint8_t v___x_754_; 
v___x_754_ = lean_unbox(v_a_750_);
lean_dec(v_a_750_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec_ref(v_arg_739_);
lean_dec_ref(v_e_722_);
v___x_755_ = lean_box(0);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_755_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v___x_759_; 
lean_del_object(v___x_752_);
lean_inc(v_a_732_);
lean_inc_ref(v_a_731_);
lean_inc(v_a_730_);
lean_inc_ref(v_a_729_);
lean_inc(v_a_728_);
lean_inc_ref(v_a_727_);
lean_inc(v_a_726_);
lean_inc_ref(v_a_725_);
lean_inc(v_a_724_);
lean_inc(v_a_723_);
lean_inc_ref(v_arg_739_);
v___x_759_ = lean_grind_mk_eq_proof(v_e_722_, v_arg_739_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref(v___x_759_);
v___x_761_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__4, &l_Lean_Meta_Grind_propagateNotUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__4);
v___x_762_ = l_Lean_mkAppB(v___x_761_, v_arg_739_, v_a_760_);
v___x_763_ = l_Lean_Meta_Grind_closeGoal(v___x_762_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_763_;
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec_ref(v_arg_739_);
v_a_764_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_759_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_759_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v_arg_739_);
lean_dec_ref(v_e_722_);
v_a_773_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_749_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_749_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
lean_dec_ref(v___x_781_);
v___x_783_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__2, &l_Lean_Meta_Grind_propagateNotDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__2);
lean_inc_ref(v_arg_739_);
v___x_784_ = l_Lean_mkAppB(v___x_783_, v_arg_739_, v_a_782_);
v___x_785_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_739_, v___x_784_, v_a_723_, v_a_725_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_785_;
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref(v_arg_739_);
v_a_786_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_781_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_781_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec_ref(v_arg_739_);
lean_dec_ref(v_e_722_);
v_a_794_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_746_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_746_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref(v___x_802_);
v___x_804_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__5, &l_Lean_Meta_Grind_propagateNotDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__5);
lean_inc_ref(v_arg_739_);
v___x_805_ = l_Lean_mkAppB(v___x_804_, v_arg_739_, v_a_803_);
v___x_806_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_739_, v___x_805_, v_a_723_, v_a_725_, v_a_727_, v_a_729_, v_a_730_, v_a_731_, v_a_732_);
return v___x_806_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_arg_739_);
v_a_807_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_802_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_802_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
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
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref(v_arg_739_);
lean_dec_ref(v_e_722_);
v_a_815_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_743_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_743_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
v___jp_734_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_box(0);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateNotDown___boxed(lean_object* v_e_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Meta_Grind_propagateNotDown(v_e_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
lean_dec_ref(v_a_830_);
lean_dec(v_a_829_);
lean_dec_ref(v_a_828_);
lean_dec(v_a_827_);
lean_dec_ref(v_a_826_);
lean_dec(v_a_825_);
lean_dec(v_a_824_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__1, &l_Lean_Meta_Grind_propagateNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__1);
v___x_838_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateNotDown___boxed), 12, 0);
v___x_839_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_837_, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8____boxed(lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8_();
return v_res_841_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__1(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_mk_string_unchecked("eq_false_of_not_eq_true'", 24, 24);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__2(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_844_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__1, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__1);
v___x_845_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_846_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_847_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_848_ = l_Lean_Name_mkStr4(v___x_847_, v___x_846_, v___x_845_, v___x_844_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_box(0);
v___x_850_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__2, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__2);
v___x_851_ = l_Lean_mkConst(v___x_850_, v___x_849_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__4(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lean_mk_string_unchecked("eq_true_of_not_eq_false'", 24, 24);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__5(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_853_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__4, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__4_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__4);
v___x_854_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_855_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_856_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_857_ = l_Lean_Name_mkStr4(v___x_856_, v___x_855_, v___x_854_, v___x_853_);
return v___x_857_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = lean_box(0);
v___x_859_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__5, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__5);
v___x_860_ = l_Lean_mkConst(v___x_859_, v___x_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq(lean_object* v_eq_861_, lean_object* v_a_862_, lean_object* v_b_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_868_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref(v___x_875_);
v___x_877_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_868_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
v___x_879_ = l_Lean_Meta_Grind_isEqv___redArg(v_b_863_, v_a_878_, v_a_864_, v_a_873_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; uint8_t v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref(v___x_879_);
v___x_881_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_Meta_Grind_isEqv___redArg(v_b_863_, v_a_876_, v_a_864_, v_a_873_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; uint8_t v___x_884_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref(v___x_882_);
v___x_884_ = lean_unbox(v_a_883_);
lean_dec(v_a_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_862_, v_a_878_, v_a_864_, v_a_873_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref(v___x_885_);
v___x_887_ = lean_unbox(v_a_886_);
lean_dec(v_a_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec(v_a_878_);
v___x_888_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_862_, v_a_876_, v_a_864_, v_a_873_);
lean_dec_ref(v_a_862_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_911_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_911_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_911_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_888_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_911_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
uint8_t v___x_893_; 
v___x_893_ = lean_unbox(v_a_889_);
lean_dec(v_a_889_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_896_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_eq_861_);
v___x_894_ = lean_box(0);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_894_);
v___x_896_ = v___x_891_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
else
{
lean_object* v___x_898_; 
lean_del_object(v___x_891_);
lean_inc_ref(v_b_863_);
v___x_898_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_b_863_, v_a_876_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref(v___x_898_);
v___x_900_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__3, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3);
lean_inc_ref(v_b_863_);
v___x_901_ = l_Lean_mkAppB(v___x_900_, v_b_863_, v_a_899_);
v___x_902_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_b_863_, v___x_901_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_902_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v_b_863_);
v_a_903_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_898_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_898_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_eq_861_);
v_a_912_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_888_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_888_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
else
{
lean_object* v___x_920_; 
lean_dec(v_a_876_);
lean_dec_ref(v_a_862_);
lean_inc_ref(v_b_863_);
v___x_920_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_b_863_, v_a_878_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref(v___x_920_);
v___x_922_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__6, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6);
lean_inc_ref(v_b_863_);
v___x_923_ = l_Lean_mkAppB(v___x_922_, v_b_863_, v_a_921_);
v___x_924_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_b_863_, v___x_923_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_924_;
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v_b_863_);
v_a_925_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_920_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_920_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_933_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_885_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_885_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v___x_941_; 
lean_dec(v_a_878_);
lean_dec_ref(v_b_863_);
lean_inc_ref(v_a_862_);
v___x_941_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_862_, v_a_876_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref(v___x_941_);
v___x_943_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__3, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__3);
lean_inc_ref(v_a_862_);
v___x_944_ = l_Lean_mkAppB(v___x_943_, v_a_862_, v_a_942_);
v___x_945_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_a_862_, v___x_944_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v_a_862_);
v_a_946_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_941_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_941_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_954_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_882_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_882_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v___x_962_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_inc_ref(v_a_862_);
v___x_962_ = l_Lean_Meta_Grind_mkDiseqProofUsing(v_a_862_, v_a_878_, v_eq_861_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref(v___x_962_);
v___x_964_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__6, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__6);
lean_inc_ref(v_a_862_);
v___x_965_ = l_Lean_mkAppB(v___x_964_, v_a_862_, v_a_963_);
v___x_966_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_a_862_, v___x_965_, v_a_864_, v_a_866_, v_a_868_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec_ref(v_a_862_);
v_a_967_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_962_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_962_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_878_);
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_975_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_879_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_879_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_876_);
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_983_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_877_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_877_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v_b_863_);
lean_dec_ref(v_a_862_);
lean_dec_ref(v_eq_861_);
v_a_991_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_875_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_875_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolDiseq___boxed(lean_object* v_eq_999_, lean_object* v_a_1000_, lean_object* v_b_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_eq_999_, v_a_1000_, v_b_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
lean_dec(v_a_1002_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0(lean_object* v_arg_1014_, lean_object* v_self_1015_, lean_object* v_arg_1016_, lean_object* v_self_1017_, uint8_t v_a_1018_, uint8_t v___x_1019_, lean_object* v_hab_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_hf_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___x_1048_; 
lean_inc_ref(v_self_1015_);
lean_inc_ref(v_arg_1014_);
v___x_1048_ = l_Lean_Meta_Grind_hasSameType(v_arg_1014_, v_self_1015_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1050_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_a_1049_);
lean_dec_ref(v___x_1048_);
lean_inc_ref(v_self_1017_);
lean_inc_ref(v_arg_1016_);
v___x_1050_ = l_Lean_Meta_Grind_hasSameType(v_arg_1016_, v_self_1017_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___y_1062_; uint8_t v___x_1075_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref(v___x_1050_);
v___x_1075_ = lean_unbox(v_a_1049_);
lean_dec(v_a_1049_);
if (v___x_1075_ == 1)
{
uint8_t v___x_1076_; 
v___x_1076_ = lean_unbox(v_a_1051_);
lean_dec(v_a_1051_);
if (v___x_1076_ == 1)
{
lean_object* v___x_1077_; 
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1077_ = lean_grind_mk_eq_proof(v_self_1015_, v_arg_1014_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref(v___x_1077_);
lean_inc_ref(v_hab_1020_);
v___x_1079_ = l_Lean_Meta_mkEqTrans(v_a_1078_, v_hab_1020_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1081_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref(v___x_1079_);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
lean_inc(v___y_1026_);
lean_inc_ref(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
lean_inc(v___y_1022_);
lean_inc(v___y_1021_);
v___x_1081_ = lean_grind_mk_eq_proof(v_arg_1016_, v_self_1017_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = l_Lean_Meta_mkEqTrans(v_a_1080_, v_a_1082_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref(v___x_1083_);
v_hf_1033_ = v_a_1084_;
v___y_1034_ = v___y_1025_;
v___y_1035_ = v___y_1027_;
v___y_1036_ = v___y_1028_;
v___y_1037_ = v___y_1029_;
v___y_1038_ = v___y_1030_;
goto v___jp_1032_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1083_;
}
}
else
{
lean_dec(v_a_1080_);
lean_dec_ref(v_hab_1020_);
return v___x_1081_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
return v___x_1079_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
return v___x_1077_;
}
}
else
{
v___y_1053_ = v___y_1021_;
v___y_1054_ = v___y_1022_;
v___y_1055_ = v___y_1023_;
v___y_1056_ = v___y_1024_;
v___y_1057_ = v___y_1025_;
v___y_1058_ = v___y_1026_;
v___y_1059_ = v___y_1027_;
v___y_1060_ = v___y_1028_;
v___y_1061_ = v___y_1029_;
v___y_1062_ = v___y_1030_;
goto v___jp_1052_;
}
}
else
{
lean_dec(v_a_1051_);
v___y_1053_ = v___y_1021_;
v___y_1054_ = v___y_1022_;
v___y_1055_ = v___y_1023_;
v___y_1056_ = v___y_1024_;
v___y_1057_ = v___y_1025_;
v___y_1058_ = v___y_1026_;
v___y_1059_ = v___y_1027_;
v___y_1060_ = v___y_1028_;
v___y_1061_ = v___y_1029_;
v___y_1062_ = v___y_1030_;
goto v___jp_1052_;
}
v___jp_1052_:
{
lean_object* v___x_1063_; 
lean_inc(v___y_1062_);
lean_inc_ref(v___y_1061_);
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc(v___y_1053_);
v___x_1063_ = lean_grind_mk_heq_proof(v_self_1015_, v_arg_1014_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v___x_1065_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref(v___x_1063_);
lean_inc_ref(v_hab_1020_);
v___x_1065_ = l_Lean_Meta_mkHEqOfEq(v_hab_1020_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref(v___x_1065_);
v___x_1067_ = l_Lean_Meta_mkHEqTrans(v_a_1064_, v_a_1066_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1069_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref(v___x_1067_);
lean_inc(v___y_1062_);
lean_inc_ref(v___y_1061_);
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc(v___y_1053_);
v___x_1069_ = lean_grind_mk_heq_proof(v_arg_1016_, v_self_1017_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; lean_object* v___x_1071_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref(v___x_1069_);
v___x_1071_ = l_Lean_Meta_mkHEqTrans(v_a_1068_, v_a_1070_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref(v___x_1071_);
v___x_1073_ = l_Lean_Meta_mkEqOfHEq(v_a_1072_, v___x_1019_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref(v___x_1073_);
v_hf_1033_ = v_a_1074_;
v___y_1034_ = v___y_1057_;
v___y_1035_ = v___y_1059_;
v___y_1036_ = v___y_1060_;
v___y_1037_ = v___y_1061_;
v___y_1038_ = v___y_1062_;
goto v___jp_1032_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1073_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1071_;
}
}
else
{
lean_dec(v_a_1068_);
lean_dec_ref(v_hab_1020_);
return v___x_1069_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
return v___x_1067_;
}
}
else
{
lean_dec(v_a_1064_);
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
return v___x_1065_;
}
}
else
{
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
return v___x_1063_;
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec(v_a_1049_);
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
lean_dec_ref(v_self_1015_);
lean_dec_ref(v_arg_1014_);
v_a_1085_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1050_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1050_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec_ref(v_hab_1020_);
lean_dec_ref(v_self_1017_);
lean_dec_ref(v_arg_1016_);
lean_dec_ref(v_self_1015_);
lean_dec_ref(v_arg_1014_);
v_a_1093_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1048_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1048_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
v___jp_1032_:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_1034_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1041_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref(v___x_1039_);
v___x_1041_ = l_Lean_Meta_mkNoConfusion(v_a_1040_, v_hf_1033_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_mk_empty_array_with_capacity(v___x_1043_);
v___x_1045_ = lean_array_push(v___x_1044_, v_hab_1020_);
v___x_1046_ = 1;
v___x_1047_ = l_Lean_Meta_mkLambdaFVars(v___x_1045_, v_a_1042_, v_a_1018_, v___x_1019_, v_a_1018_, v___x_1019_, v___x_1046_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec_ref(v___x_1045_);
return v___x_1047_;
}
else
{
lean_dec_ref(v_hab_1020_);
return v___x_1041_;
}
}
else
{
lean_dec_ref(v_hf_1033_);
lean_dec_ref(v_hab_1020_);
return v___x_1039_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed(lean_object** _args){
lean_object* v_arg_1101_ = _args[0];
lean_object* v_self_1102_ = _args[1];
lean_object* v_arg_1103_ = _args[2];
lean_object* v_self_1104_ = _args[3];
lean_object* v_a_1105_ = _args[4];
lean_object* v___x_1106_ = _args[5];
lean_object* v_hab_1107_ = _args[6];
lean_object* v___y_1108_ = _args[7];
lean_object* v___y_1109_ = _args[8];
lean_object* v___y_1110_ = _args[9];
lean_object* v___y_1111_ = _args[10];
lean_object* v___y_1112_ = _args[11];
lean_object* v___y_1113_ = _args[12];
lean_object* v___y_1114_ = _args[13];
lean_object* v___y_1115_ = _args[14];
lean_object* v___y_1116_ = _args[15];
lean_object* v___y_1117_ = _args[16];
lean_object* v___y_1118_ = _args[17];
_start:
{
uint8_t v_a_140040__boxed_1119_; uint8_t v___x_140041__boxed_1120_; lean_object* v_res_1121_; 
v_a_140040__boxed_1119_ = lean_unbox(v_a_1105_);
v___x_140041__boxed_1120_ = lean_unbox(v___x_1106_);
v_res_1121_ = l_Lean_Meta_Grind_propagateEqUp___lam__0(v_arg_1101_, v_self_1102_, v_arg_1103_, v_self_1104_, v_a_140040__boxed_1119_, v___x_140041__boxed_1120_, v_hab_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec(v___y_1108_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v_b_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v___x_1135_; 
lean_inc(v___y_1133_);
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1131_);
lean_inc_ref(v___y_1130_);
lean_inc(v___y_1128_);
lean_inc_ref(v___y_1127_);
lean_inc(v___y_1126_);
lean_inc_ref(v___y_1125_);
lean_inc(v___y_1124_);
lean_inc(v___y_1123_);
v___x_1135_ = lean_apply_12(v_k_1122_, v_b_1129_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, lean_box(0));
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v_b_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0(v_k_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v_b_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec(v___y_1137_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(lean_object* v_name_1150_, uint8_t v_bi_1151_, lean_object* v_type_1152_, lean_object* v_k_1153_, uint8_t v_kind_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v___f_1166_; lean_object* v___x_1167_; 
lean_inc(v___y_1160_);
lean_inc_ref(v___y_1159_);
lean_inc(v___y_1158_);
lean_inc_ref(v___y_1157_);
lean_inc(v___y_1156_);
lean_inc(v___y_1155_);
v___f_1166_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_1166_, 0, v_k_1153_);
lean_closure_set(v___f_1166_, 1, v___y_1155_);
lean_closure_set(v___f_1166_, 2, v___y_1156_);
lean_closure_set(v___f_1166_, 3, v___y_1157_);
lean_closure_set(v___f_1166_, 4, v___y_1158_);
lean_closure_set(v___f_1166_, 5, v___y_1159_);
lean_closure_set(v___f_1166_, 6, v___y_1160_);
v___x_1167_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1150_, v_bi_1151_, v_type_1152_, v___f_1166_, v_kind_1154_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
if (lean_obj_tag(v___x_1167_) == 0)
{
return v___x_1167_;
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg___boxed(lean_object* v_name_1176_, lean_object* v_bi_1177_, lean_object* v_type_1178_, lean_object* v_k_1179_, lean_object* v_kind_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
uint8_t v_bi_boxed_1192_; uint8_t v_kind_boxed_1193_; lean_object* v_res_1194_; 
v_bi_boxed_1192_ = lean_unbox(v_bi_1177_);
v_kind_boxed_1193_ = lean_unbox(v_kind_1180_);
v_res_1194_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_1176_, v_bi_boxed_1192_, v_type_1178_, v_k_1179_, v_kind_boxed_1193_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec(v___y_1181_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(lean_object* v_name_1195_, lean_object* v_type_1196_, lean_object* v_k_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
uint8_t v___x_1209_; uint8_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1209_ = 0;
v___x_1210_ = 0;
v___x_1211_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_1195_, v___x_1209_, v_type_1196_, v_k_1197_, v___x_1210_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg___boxed(lean_object* v_name_1212_, lean_object* v_type_1213_, lean_object* v_k_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v_name_1212_, v_type_1213_, v_k_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec(v___y_1215_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0(lean_object* v_a_1227_, lean_object* v_self_1228_, lean_object* v_a_1229_, lean_object* v_self_1230_, uint8_t v_a_1231_, uint8_t v___x_1232_, lean_object* v_hab_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_hf_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___x_1261_; 
lean_inc_ref(v_self_1228_);
lean_inc_ref(v_a_1227_);
v___x_1261_ = l_Lean_Meta_Grind_hasSameType(v_a_1227_, v_self_1228_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref(v___x_1261_);
lean_inc_ref(v_self_1230_);
lean_inc_ref(v_a_1229_);
v___x_1263_ = l_Lean_Meta_Grind_hasSameType(v_a_1229_, v_self_1230_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; uint8_t v___x_1288_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref(v___x_1263_);
v___x_1288_ = lean_unbox(v_a_1262_);
lean_dec(v_a_1262_);
if (v___x_1288_ == 1)
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_unbox(v_a_1264_);
lean_dec(v_a_1264_);
if (v___x_1289_ == 1)
{
lean_object* v___x_1290_; 
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
lean_inc(v___y_1239_);
lean_inc_ref(v___y_1238_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc(v___y_1234_);
v___x_1290_ = lean_grind_mk_eq_proof(v_self_1228_, v_a_1227_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1292_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref(v___x_1290_);
lean_inc_ref(v_hab_1233_);
v___x_1292_ = l_Lean_Meta_mkEqTrans(v_a_1291_, v_hab_1233_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref(v___x_1292_);
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
lean_inc(v___y_1239_);
lean_inc_ref(v___y_1238_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc(v___y_1234_);
v___x_1294_ = lean_grind_mk_eq_proof(v_a_1229_, v_self_1230_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1296_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
lean_dec_ref(v___x_1294_);
v___x_1296_ = l_Lean_Meta_mkEqTrans(v_a_1293_, v_a_1295_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref(v___x_1296_);
v_hf_1246_ = v_a_1297_;
v___y_1247_ = v___y_1238_;
v___y_1248_ = v___y_1240_;
v___y_1249_ = v___y_1241_;
v___y_1250_ = v___y_1242_;
v___y_1251_ = v___y_1243_;
goto v___jp_1245_;
}
else
{
lean_dec_ref(v_hab_1233_);
return v___x_1296_;
}
}
else
{
lean_dec(v_a_1293_);
lean_dec_ref(v_hab_1233_);
return v___x_1294_;
}
}
else
{
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
return v___x_1292_;
}
}
else
{
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
return v___x_1290_;
}
}
else
{
v___y_1266_ = v___y_1234_;
v___y_1267_ = v___y_1235_;
v___y_1268_ = v___y_1236_;
v___y_1269_ = v___y_1237_;
v___y_1270_ = v___y_1238_;
v___y_1271_ = v___y_1239_;
v___y_1272_ = v___y_1240_;
v___y_1273_ = v___y_1241_;
v___y_1274_ = v___y_1242_;
v___y_1275_ = v___y_1243_;
goto v___jp_1265_;
}
}
else
{
lean_dec(v_a_1264_);
v___y_1266_ = v___y_1234_;
v___y_1267_ = v___y_1235_;
v___y_1268_ = v___y_1236_;
v___y_1269_ = v___y_1237_;
v___y_1270_ = v___y_1238_;
v___y_1271_ = v___y_1239_;
v___y_1272_ = v___y_1240_;
v___y_1273_ = v___y_1241_;
v___y_1274_ = v___y_1242_;
v___y_1275_ = v___y_1243_;
goto v___jp_1265_;
}
v___jp_1265_:
{
lean_object* v___x_1276_; 
lean_inc(v___y_1275_);
lean_inc_ref(v___y_1274_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1267_);
lean_inc(v___y_1266_);
v___x_1276_ = lean_grind_mk_heq_proof(v_self_1228_, v_a_1227_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; lean_object* v___x_1278_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref(v___x_1276_);
lean_inc_ref(v_hab_1233_);
v___x_1278_ = l_Lean_Meta_mkHEqOfEq(v_hab_1233_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1280_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref(v___x_1278_);
v___x_1280_ = l_Lean_Meta_mkHEqTrans(v_a_1277_, v_a_1279_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1282_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref(v___x_1280_);
lean_inc(v___y_1275_);
lean_inc_ref(v___y_1274_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___y_1267_);
lean_inc(v___y_1266_);
v___x_1282_ = lean_grind_mk_heq_proof(v_a_1229_, v_self_1230_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref(v___x_1282_);
v___x_1284_ = l_Lean_Meta_mkHEqTrans(v_a_1281_, v_a_1283_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1286_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1285_);
lean_dec_ref(v___x_1284_);
v___x_1286_ = l_Lean_Meta_mkEqOfHEq(v_a_1285_, v___x_1232_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref(v___x_1286_);
v_hf_1246_ = v_a_1287_;
v___y_1247_ = v___y_1270_;
v___y_1248_ = v___y_1272_;
v___y_1249_ = v___y_1273_;
v___y_1250_ = v___y_1274_;
v___y_1251_ = v___y_1275_;
goto v___jp_1245_;
}
else
{
lean_dec_ref(v_hab_1233_);
return v___x_1286_;
}
}
else
{
lean_dec_ref(v_hab_1233_);
return v___x_1284_;
}
}
else
{
lean_dec(v_a_1281_);
lean_dec_ref(v_hab_1233_);
return v___x_1282_;
}
}
else
{
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
return v___x_1280_;
}
}
else
{
lean_dec(v_a_1277_);
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
return v___x_1278_;
}
}
else
{
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
return v___x_1276_;
}
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_dec(v_a_1262_);
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_self_1228_);
lean_dec_ref(v_a_1227_);
v_a_1298_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1263_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1263_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec_ref(v_hab_1233_);
lean_dec_ref(v_self_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_self_1228_);
lean_dec_ref(v_a_1227_);
v_a_1306_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1261_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1261_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
v___jp_1245_:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_1247_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1254_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref(v___x_1252_);
v___x_1254_ = l_Lean_Meta_mkNoConfusion(v_a_1253_, v_hf_1246_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; lean_object* v___x_1260_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref(v___x_1254_);
v___x_1256_ = lean_unsigned_to_nat(1u);
v___x_1257_ = lean_mk_empty_array_with_capacity(v___x_1256_);
v___x_1258_ = lean_array_push(v___x_1257_, v_hab_1233_);
v___x_1259_ = 1;
v___x_1260_ = l_Lean_Meta_mkLambdaFVars(v___x_1258_, v_a_1255_, v_a_1231_, v___x_1232_, v_a_1231_, v___x_1232_, v___x_1259_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_);
lean_dec_ref(v___x_1258_);
return v___x_1260_;
}
else
{
lean_dec_ref(v_hab_1233_);
return v___x_1254_;
}
}
else
{
lean_dec_ref(v_hf_1246_);
lean_dec_ref(v_hab_1233_);
return v___x_1252_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0___boxed(lean_object** _args){
lean_object* v_a_1314_ = _args[0];
lean_object* v_self_1315_ = _args[1];
lean_object* v_a_1316_ = _args[2];
lean_object* v_self_1317_ = _args[3];
lean_object* v_a_1318_ = _args[4];
lean_object* v___x_1319_ = _args[5];
lean_object* v_hab_1320_ = _args[6];
lean_object* v___y_1321_ = _args[7];
lean_object* v___y_1322_ = _args[8];
lean_object* v___y_1323_ = _args[9];
lean_object* v___y_1324_ = _args[10];
lean_object* v___y_1325_ = _args[11];
lean_object* v___y_1326_ = _args[12];
lean_object* v___y_1327_ = _args[13];
lean_object* v___y_1328_ = _args[14];
lean_object* v___y_1329_ = _args[15];
lean_object* v___y_1330_ = _args[16];
lean_object* v___y_1331_ = _args[17];
_start:
{
uint8_t v_a_140361__boxed_1332_; uint8_t v___x_140362__boxed_1333_; lean_object* v_res_1334_; 
v_a_140361__boxed_1332_ = lean_unbox(v_a_1318_);
v___x_140362__boxed_1333_ = lean_unbox(v___x_1319_);
v_res_1334_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0(v_a_1314_, v_self_1315_, v_a_1316_, v_self_1317_, v_a_140361__boxed_1332_, v___x_140362__boxed_1333_, v_hab_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec(v___y_1321_);
return v_res_1334_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = lean_mk_string_unchecked("eq_false", 8, 8);
return v___x_1335_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__0);
v___x_1337_ = l_Lean_Name_mkStr1(v___x_1336_);
return v___x_1337_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1338_ = lean_box(0);
v___x_1339_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__1);
v___x_1340_ = l_Lean_mkConst(v___x_1339_, v___x_1338_);
return v___x_1340_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_1341_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__3);
v___x_1343_ = l_Lean_Name_mkStr1(v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_e_1346_, uint8_t v___x_1347_, uint8_t v_a_1348_, lean_object* v_a_1349_, lean_object* v_b_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v_snd_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1449_; 
v___x_1362_ = lean_st_ref_get(v___y_1360_);
lean_dec(v___x_1362_);
v___x_1363_ = lean_st_ref_get(v___y_1351_);
v_snd_1364_ = lean_ctor_get(v_b_1350_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_b_1350_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; 
v_unused_1450_ = lean_ctor_get(v_b_1350_, 0);
lean_dec(v_unused_1450_);
v___x_1366_ = v_b_1350_;
v_isShared_1367_ = v_isSharedCheck_1449_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_snd_1364_);
lean_dec(v_b_1350_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1449_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
uint8_t v_a_1369_; lean_object* v___y_1377_; lean_object* v___x_1398_; 
lean_inc(v_snd_1364_);
v___x_1398_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1363_, v_snd_1364_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___x_1363_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1440_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1401_ = v___x_1398_;
v_isShared_1402_ = v_isSharedCheck_1440_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1440_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v_self_1403_; lean_object* v_next_1404_; uint8_t v_ctor_1405_; lean_object* v___x_1406_; 
v_self_1403_ = lean_ctor_get(v_a_1399_, 0);
lean_inc_ref(v_self_1403_);
v_next_1404_ = lean_ctor_get(v_a_1399_, 1);
lean_inc_ref(v_next_1404_);
v_ctor_1405_ = lean_ctor_get_uint8(v_a_1399_, sizeof(void*)*11 + 2);
lean_dec(v_a_1399_);
v___x_1406_ = lean_box(0);
if (v_ctor_1405_ == 0)
{
lean_dec_ref(v_self_1403_);
lean_del_object(v___x_1366_);
goto v___jp_1407_;
}
else
{
lean_object* v_self_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_self_1415_ = lean_ctor_get(v_a_1345_, 0);
v___x_1416_ = l_Lean_Expr_getAppFn(v_self_1415_);
v___x_1417_ = l_Lean_Expr_getAppFn(v_self_1403_);
v___x_1418_ = lean_expr_eqv(v___x_1416_, v___x_1417_);
lean_dec_ref(v___x_1417_);
lean_dec_ref(v___x_1416_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; 
lean_inc_ref(v_self_1403_);
lean_inc_ref(v_self_1415_);
v___x_1419_ = l_Lean_Meta_Grind_hasSameType(v_self_1415_, v_self_1403_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; uint8_t v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref(v___x_1419_);
v___x_1421_ = lean_unbox(v_a_1420_);
lean_dec(v_a_1420_);
if (v___x_1421_ == 0)
{
lean_dec_ref(v_self_1403_);
lean_del_object(v___x_1366_);
goto v___jp_1407_;
}
else
{
lean_object* v___x_1422_; 
lean_inc_ref(v_self_1415_);
lean_dec_ref(v_next_1404_);
lean_del_object(v___x_1401_);
lean_dec_ref(v_a_1345_);
lean_inc_ref(v_a_1344_);
lean_inc_ref(v_a_1349_);
v___x_1422_ = l_Lean_Meta_mkEq(v_a_1349_, v_a_1344_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___f_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref(v___x_1422_);
v___x_1424_ = lean_box(v_a_1348_);
v___x_1425_ = lean_box(v___x_1347_);
v___f_1426_ = lean_alloc_closure((void*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1426_, 0, v_a_1349_);
lean_closure_set(v___f_1426_, 1, v_self_1415_);
lean_closure_set(v___f_1426_, 2, v_a_1344_);
lean_closure_set(v___f_1426_, 3, v_self_1403_);
lean_closure_set(v___f_1426_, 4, v___x_1424_);
lean_closure_set(v___f_1426_, 5, v___x_1425_);
v___x_1427_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4);
v___x_1428_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1427_, v_a_1423_, v___f_1426_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
v___y_1377_ = v___x_1428_;
goto v___jp_1376_;
}
else
{
lean_dec_ref(v_self_1415_);
lean_dec_ref(v_self_1403_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_a_1344_);
v___y_1377_ = v___x_1422_;
goto v___jp_1376_;
}
}
}
else
{
lean_dec_ref(v_self_1403_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1429_; uint8_t v___x_1430_; 
v_a_1429_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1429_);
lean_dec_ref(v___x_1419_);
v___x_1430_ = lean_unbox(v_a_1429_);
if (v___x_1430_ == 0)
{
lean_dec(v_a_1429_);
lean_del_object(v___x_1366_);
goto v___jp_1407_;
}
else
{
uint8_t v___x_1431_; 
lean_dec_ref(v_next_1404_);
lean_del_object(v___x_1401_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_e_1346_);
lean_dec_ref(v_a_1345_);
lean_dec_ref(v_a_1344_);
v___x_1431_ = lean_unbox(v_a_1429_);
lean_dec(v_a_1429_);
v_a_1369_ = v___x_1431_;
goto v___jp_1368_;
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec_ref(v_next_1404_);
lean_del_object(v___x_1401_);
lean_del_object(v___x_1366_);
lean_dec(v_snd_1364_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_e_1346_);
lean_dec_ref(v_a_1345_);
lean_dec_ref(v_a_1344_);
v_a_1432_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1419_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1419_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
else
{
lean_dec_ref(v_self_1403_);
lean_del_object(v___x_1366_);
goto v___jp_1407_;
}
}
v___jp_1407_:
{
uint8_t v___x_1408_; 
v___x_1408_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_next_1404_, v_a_1344_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; 
lean_del_object(v___x_1401_);
lean_dec(v_snd_1364_);
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1406_);
lean_ctor_set(v___x_1409_, 1, v_next_1404_);
v_b_1350_ = v___x_1409_;
goto _start;
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
lean_dec_ref(v_next_1404_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_e_1346_);
lean_dec_ref(v_a_1345_);
lean_dec_ref(v_a_1344_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1406_);
lean_ctor_set(v___x_1411_, 1, v_snd_1364_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 0, v___x_1411_);
v___x_1413_ = v___x_1401_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_del_object(v___x_1366_);
lean_dec(v_snd_1364_);
lean_dec_ref(v_a_1349_);
lean_dec_ref(v_e_1346_);
lean_dec_ref(v_a_1345_);
lean_dec_ref(v_a_1344_);
v_a_1441_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1398_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1398_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
v___jp_1368_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1370_ = lean_box(v_a_1369_);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 0, v___x_1371_);
v___x_1373_ = v___x_1366_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_snd_1364_);
v___x_1373_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
return v___x_1374_;
}
}
v___jp_1376_:
{
if (lean_obj_tag(v___y_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_a_1378_ = lean_ctor_get(v___y_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref(v___y_1377_);
v___x_1379_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2);
lean_inc_ref(v_e_1346_);
v___x_1380_ = l_Lean_mkAppB(v___x_1379_, v_e_1346_, v_a_1378_);
v___x_1381_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1346_, v___x_1380_, v___y_1351_, v___y_1353_, v___y_1355_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_dec_ref(v___x_1381_);
v_a_1369_ = v___x_1347_;
goto v___jp_1368_;
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
lean_del_object(v___x_1366_);
lean_dec(v_snd_1364_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1381_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
lean_del_object(v___x_1366_);
lean_dec(v_snd_1364_);
lean_dec_ref(v_e_1346_);
v_a_1390_ = lean_ctor_get(v___y_1377_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___y_1377_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___y_1377_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___y_1377_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___boxed(lean_object** _args){
lean_object* v_a_1451_ = _args[0];
lean_object* v_a_1452_ = _args[1];
lean_object* v_e_1453_ = _args[2];
lean_object* v___x_1454_ = _args[3];
lean_object* v_a_1455_ = _args[4];
lean_object* v_a_1456_ = _args[5];
lean_object* v_b_1457_ = _args[6];
lean_object* v___y_1458_ = _args[7];
lean_object* v___y_1459_ = _args[8];
lean_object* v___y_1460_ = _args[9];
lean_object* v___y_1461_ = _args[10];
lean_object* v___y_1462_ = _args[11];
lean_object* v___y_1463_ = _args[12];
lean_object* v___y_1464_ = _args[13];
lean_object* v___y_1465_ = _args[14];
lean_object* v___y_1466_ = _args[15];
lean_object* v___y_1467_ = _args[16];
lean_object* v___y_1468_ = _args[17];
_start:
{
uint8_t v___x_140572__boxed_1469_; uint8_t v_a_140573__boxed_1470_; lean_object* v_res_1471_; 
v___x_140572__boxed_1469_ = lean_unbox(v___x_1454_);
v_a_140573__boxed_1470_ = lean_unbox(v_a_1455_);
v_res_1471_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(v_a_1451_, v_a_1452_, v_e_1453_, v___x_140572__boxed_1469_, v_a_140573__boxed_1470_, v_a_1456_, v_b_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec(v___y_1458_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1(lean_object* v_a_1472_, lean_object* v_a_1473_, uint8_t v_a_1474_, uint8_t v___x_1475_, lean_object* v_a_1476_, lean_object* v_e_1477_, lean_object* v_b_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v_snd_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1577_; 
v___x_1490_ = lean_st_ref_get(v___y_1488_);
lean_dec(v___x_1490_);
v___x_1491_ = lean_st_ref_get(v___y_1479_);
v_snd_1492_ = lean_ctor_get(v_b_1478_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_b_1478_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v_b_1478_, 0);
lean_dec(v_unused_1578_);
v___x_1494_ = v_b_1478_;
v_isShared_1495_ = v_isSharedCheck_1577_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_snd_1492_);
lean_dec(v_b_1478_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1577_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
uint8_t v_a_1497_; lean_object* v___y_1505_; lean_object* v___x_1526_; 
lean_inc(v_snd_1492_);
v___x_1526_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1491_, v_snd_1492_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec(v___x_1491_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1568_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1568_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1568_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v_self_1531_; lean_object* v_next_1532_; uint8_t v_ctor_1533_; lean_object* v___x_1534_; 
v_self_1531_ = lean_ctor_get(v_a_1527_, 0);
lean_inc_ref(v_self_1531_);
v_next_1532_ = lean_ctor_get(v_a_1527_, 1);
lean_inc_ref(v_next_1532_);
v_ctor_1533_ = lean_ctor_get_uint8(v_a_1527_, sizeof(void*)*11 + 2);
lean_dec(v_a_1527_);
v___x_1534_ = lean_box(0);
if (v_ctor_1533_ == 0)
{
lean_dec_ref(v_self_1531_);
lean_del_object(v___x_1494_);
goto v___jp_1535_;
}
else
{
lean_object* v_self_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v_self_1543_ = lean_ctor_get(v_a_1473_, 0);
v___x_1544_ = l_Lean_Expr_getAppFn(v_self_1543_);
v___x_1545_ = l_Lean_Expr_getAppFn(v_self_1531_);
v___x_1546_ = lean_expr_eqv(v___x_1544_, v___x_1545_);
lean_dec_ref(v___x_1545_);
lean_dec_ref(v___x_1544_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
lean_inc_ref(v_self_1531_);
lean_inc_ref(v_self_1543_);
v___x_1547_ = l_Lean_Meta_Grind_hasSameType(v_self_1543_, v_self_1531_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; uint8_t v___x_1549_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref(v___x_1547_);
v___x_1549_ = lean_unbox(v_a_1548_);
lean_dec(v_a_1548_);
if (v___x_1549_ == 0)
{
lean_dec_ref(v_self_1531_);
lean_del_object(v___x_1494_);
goto v___jp_1535_;
}
else
{
lean_object* v___x_1550_; 
lean_inc_ref(v_self_1543_);
lean_dec_ref(v_next_1532_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_a_1473_);
lean_inc_ref(v_a_1472_);
lean_inc_ref(v_a_1476_);
v___x_1550_ = l_Lean_Meta_mkEq(v_a_1476_, v_a_1472_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___f_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = lean_box(v_a_1474_);
v___x_1553_ = lean_box(v___x_1475_);
v___f_1554_ = lean_alloc_closure((void*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1554_, 0, v_a_1476_);
lean_closure_set(v___f_1554_, 1, v_self_1543_);
lean_closure_set(v___f_1554_, 2, v_a_1472_);
lean_closure_set(v___f_1554_, 3, v_self_1531_);
lean_closure_set(v___f_1554_, 4, v___x_1552_);
lean_closure_set(v___f_1554_, 5, v___x_1553_);
v___x_1555_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4);
v___x_1556_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1555_, v_a_1551_, v___f_1554_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
v___y_1505_ = v___x_1556_;
goto v___jp_1504_;
}
else
{
lean_dec_ref(v_self_1543_);
lean_dec_ref(v_self_1531_);
lean_dec_ref(v_a_1476_);
lean_dec_ref(v_a_1472_);
v___y_1505_ = v___x_1550_;
goto v___jp_1504_;
}
}
}
else
{
lean_dec_ref(v_self_1531_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1557_; uint8_t v___x_1558_; 
v_a_1557_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1557_);
lean_dec_ref(v___x_1547_);
v___x_1558_ = lean_unbox(v_a_1557_);
if (v___x_1558_ == 0)
{
lean_dec(v_a_1557_);
lean_del_object(v___x_1494_);
goto v___jp_1535_;
}
else
{
uint8_t v___x_1559_; 
lean_dec_ref(v_next_1532_);
lean_del_object(v___x_1529_);
lean_dec_ref(v_e_1477_);
lean_dec_ref(v_a_1476_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_a_1472_);
v___x_1559_ = lean_unbox(v_a_1557_);
lean_dec(v_a_1557_);
v_a_1497_ = v___x_1559_;
goto v___jp_1496_;
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
lean_dec_ref(v_next_1532_);
lean_del_object(v___x_1529_);
lean_del_object(v___x_1494_);
lean_dec(v_snd_1492_);
lean_dec_ref(v_e_1477_);
lean_dec_ref(v_a_1476_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_a_1472_);
v_a_1560_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1547_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1547_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
else
{
lean_dec_ref(v_self_1531_);
lean_del_object(v___x_1494_);
goto v___jp_1535_;
}
}
v___jp_1535_:
{
uint8_t v___x_1536_; 
v___x_1536_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_next_1532_, v_a_1472_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
lean_del_object(v___x_1529_);
lean_dec(v_snd_1492_);
v___x_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1534_);
lean_ctor_set(v___x_1537_, 1, v_next_1532_);
v___x_1538_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2(v_a_1472_, v_a_1473_, v_e_1477_, v___x_1475_, v_a_1474_, v_a_1476_, v___x_1537_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1538_;
}
else
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
lean_dec_ref(v_next_1532_);
lean_dec_ref(v_e_1477_);
lean_dec_ref(v_a_1476_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_a_1472_);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1534_);
lean_ctor_set(v___x_1539_, 1, v_snd_1492_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1539_);
v___x_1541_ = v___x_1529_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_del_object(v___x_1494_);
lean_dec(v_snd_1492_);
lean_dec_ref(v_e_1477_);
lean_dec_ref(v_a_1476_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_a_1472_);
v_a_1569_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1526_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1526_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
v___jp_1496_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1498_ = lean_box(v_a_1497_);
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 0, v___x_1499_);
v___x_1501_ = v___x_1494_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_snd_1492_);
v___x_1501_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
}
v___jp_1504_:
{
if (lean_obj_tag(v___y_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_a_1506_ = lean_ctor_get(v___y_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref(v___y_1505_);
v___x_1507_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2);
lean_inc_ref(v_e_1477_);
v___x_1508_ = l_Lean_mkAppB(v___x_1507_, v_e_1477_, v_a_1506_);
v___x_1509_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1477_, v___x_1508_, v___y_1479_, v___y_1481_, v___y_1483_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_dec_ref(v___x_1509_);
v_a_1497_ = v___x_1475_;
goto v___jp_1496_;
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
lean_del_object(v___x_1494_);
lean_dec(v_snd_1492_);
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1513_ == 0)
{
v___x_1515_ = v___x_1512_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_a_1510_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_del_object(v___x_1494_);
lean_dec(v_snd_1492_);
lean_dec_ref(v_e_1477_);
v_a_1518_ = lean_ctor_get(v___y_1505_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___y_1505_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___y_1505_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___y_1505_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1___boxed(lean_object** _args){
lean_object* v_a_1579_ = _args[0];
lean_object* v_a_1580_ = _args[1];
lean_object* v_a_1581_ = _args[2];
lean_object* v___x_1582_ = _args[3];
lean_object* v_a_1583_ = _args[4];
lean_object* v_e_1584_ = _args[5];
lean_object* v_b_1585_ = _args[6];
lean_object* v___y_1586_ = _args[7];
lean_object* v___y_1587_ = _args[8];
lean_object* v___y_1588_ = _args[9];
lean_object* v___y_1589_ = _args[10];
lean_object* v___y_1590_ = _args[11];
lean_object* v___y_1591_ = _args[12];
lean_object* v___y_1592_ = _args[13];
lean_object* v___y_1593_ = _args[14];
lean_object* v___y_1594_ = _args[15];
lean_object* v___y_1595_ = _args[16];
lean_object* v___y_1596_ = _args[17];
_start:
{
uint8_t v_a_140808__boxed_1597_; uint8_t v___x_140809__boxed_1598_; lean_object* v_res_1599_; 
v_a_140808__boxed_1597_ = lean_unbox(v_a_1581_);
v___x_140809__boxed_1598_ = lean_unbox(v___x_1582_);
v_res_1599_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1(v_a_1579_, v_a_1580_, v_a_140808__boxed_1597_, v___x_140809__boxed_1598_, v_a_1583_, v_e_1584_, v_b_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec(v___y_1586_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2(lean_object* v_a_1600_, lean_object* v_a_1601_, uint8_t v_a_1602_, uint8_t v___x_1603_, lean_object* v_e_1604_, lean_object* v_b_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v_snd_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1673_; 
v___x_1617_ = lean_st_ref_get(v___y_1615_);
lean_dec(v___x_1617_);
v___x_1618_ = lean_st_ref_get(v___y_1606_);
v_snd_1619_ = lean_ctor_get(v_b_1605_, 1);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_b_1605_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; 
v_unused_1674_ = lean_ctor_get(v_b_1605_, 0);
lean_dec(v_unused_1674_);
v___x_1621_ = v_b_1605_;
v_isShared_1622_ = v_isSharedCheck_1673_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_snd_1619_);
lean_dec(v_b_1605_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1673_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1623_; 
lean_inc(v_snd_1619_);
v___x_1623_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1618_, v_snd_1619_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___x_1618_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1664_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1664_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1664_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v_next_1628_; uint8_t v_ctor_1629_; lean_object* v___x_1630_; 
v_next_1628_ = lean_ctor_get(v_a_1624_, 1);
lean_inc_ref(v_next_1628_);
v_ctor_1629_ = lean_ctor_get_uint8(v_a_1624_, sizeof(void*)*11 + 2);
v___x_1630_ = lean_box(0);
if (v_ctor_1629_ == 0)
{
lean_dec(v_a_1624_);
goto v___jp_1631_;
}
else
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
lean_inc_ref_n(v_a_1601_, 2);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1630_);
lean_ctor_set(v___x_1643_, 1, v_a_1601_);
lean_inc_ref(v_e_1604_);
lean_inc_ref(v_a_1600_);
v___x_1644_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1(v_a_1601_, v_a_1624_, v_a_1602_, v___x_1603_, v_a_1600_, v_e_1604_, v___x_1643_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1663_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1663_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1663_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v_fst_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1661_; 
v_fst_1649_ = lean_ctor_get(v_a_1645_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_a_1645_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; 
v_unused_1662_ = lean_ctor_get(v_a_1645_, 1);
lean_dec(v_unused_1662_);
v___x_1651_ = v_a_1645_;
v_isShared_1652_ = v_isSharedCheck_1661_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_fst_1649_);
lean_dec(v_a_1645_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1661_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
if (lean_obj_tag(v_fst_1649_) == 0)
{
lean_del_object(v___x_1651_);
lean_del_object(v___x_1647_);
goto v___jp_1631_;
}
else
{
lean_object* v_val_1653_; uint8_t v___x_1654_; 
v_val_1653_ = lean_ctor_get(v_fst_1649_, 0);
v___x_1654_ = lean_unbox(v_val_1653_);
if (v___x_1654_ == 0)
{
lean_dec_ref(v_fst_1649_);
lean_del_object(v___x_1651_);
lean_del_object(v___x_1647_);
goto v___jp_1631_;
}
else
{
lean_object* v___x_1656_; 
lean_dec_ref(v_next_1628_);
lean_del_object(v___x_1626_);
lean_del_object(v___x_1621_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 1, v_snd_1619_);
v___x_1656_ = v___x_1651_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_fst_1649_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_snd_1619_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1658_; 
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1656_);
v___x_1658_ = v___x_1647_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_next_1628_);
lean_del_object(v___x_1626_);
lean_del_object(v___x_1621_);
lean_dec(v_snd_1619_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
return v___x_1644_;
}
}
v___jp_1631_:
{
uint8_t v___x_1632_; 
v___x_1632_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_next_1628_, v_a_1600_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1634_; 
lean_del_object(v___x_1626_);
lean_dec(v_snd_1619_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 1, v_next_1628_);
lean_ctor_set(v___x_1621_, 0, v___x_1630_);
v___x_1634_ = v___x_1621_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1636_, 1, v_next_1628_);
v___x_1634_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
v_b_1605_ = v___x_1634_;
goto _start;
}
}
else
{
lean_object* v___x_1638_; 
lean_dec_ref(v_next_1628_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 0, v___x_1630_);
v___x_1638_ = v___x_1621_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_snd_1619_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1638_);
v___x_1640_ = v___x_1626_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_del_object(v___x_1621_);
lean_dec(v_snd_1619_);
lean_dec_ref(v_e_1604_);
lean_dec_ref(v_a_1601_);
lean_dec_ref(v_a_1600_);
v_a_1665_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1623_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1623_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2___boxed(lean_object** _args){
lean_object* v_a_1675_ = _args[0];
lean_object* v_a_1676_ = _args[1];
lean_object* v_a_1677_ = _args[2];
lean_object* v___x_1678_ = _args[3];
lean_object* v_e_1679_ = _args[4];
lean_object* v_b_1680_ = _args[5];
lean_object* v___y_1681_ = _args[6];
lean_object* v___y_1682_ = _args[7];
lean_object* v___y_1683_ = _args[8];
lean_object* v___y_1684_ = _args[9];
lean_object* v___y_1685_ = _args[10];
lean_object* v___y_1686_ = _args[11];
lean_object* v___y_1687_ = _args[12];
lean_object* v___y_1688_ = _args[13];
lean_object* v___y_1689_ = _args[14];
lean_object* v___y_1690_ = _args[15];
lean_object* v___y_1691_ = _args[16];
_start:
{
uint8_t v_a_141030__boxed_1692_; uint8_t v___x_141031__boxed_1693_; lean_object* v_res_1694_; 
v_a_141030__boxed_1692_ = lean_unbox(v_a_1677_);
v___x_141031__boxed_1693_ = lean_unbox(v___x_1678_);
v_res_1694_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2(v_a_1675_, v_a_1676_, v_a_141030__boxed_1692_, v___x_141031__boxed_1693_, v_e_1679_, v_b_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec(v___y_1681_);
return v_res_1694_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__0(void){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_mk_string_unchecked("ne_of_eq_false_of_eq_true", 25, 25);
return v___x_1695_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__1(void){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_1696_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__2(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__1, &l_Lean_Meta_Grind_propagateEqUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__1);
v___x_1698_ = l_Lean_Name_mkStr1(v___x_1697_);
return v___x_1698_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__3(void){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = lean_mk_string_unchecked("ne_of_eq_true_of_eq_false", 25, 25);
return v___x_1699_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__4(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_1701_ = l_Lean_Name_mkStr1(v___x_1700_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__5(void){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_mk_string_unchecked("eq_eq_of_eq_true_right", 22, 22);
return v___x_1702_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__6(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1703_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__5, &l_Lean_Meta_Grind_propagateEqUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__5);
v___x_1704_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_1705_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_1706_ = l_Lean_Name_mkStr3(v___x_1705_, v___x_1704_, v___x_1703_);
return v___x_1706_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__7(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_box(0);
v___x_1708_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__6, &l_Lean_Meta_Grind_propagateEqUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__6);
v___x_1709_ = l_Lean_mkConst(v___x_1708_, v___x_1707_);
return v___x_1709_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__8(void){
_start:
{
lean_object* v___x_1710_; 
v___x_1710_ = lean_mk_string_unchecked("eq_eq_of_eq_true_left", 21, 21);
return v___x_1710_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__9(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1711_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__8, &l_Lean_Meta_Grind_propagateEqUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__8);
v___x_1712_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_1713_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_1714_ = l_Lean_Name_mkStr3(v___x_1713_, v___x_1712_, v___x_1711_);
return v___x_1714_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqUp___closed__10(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1715_ = lean_box(0);
v___x_1716_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__9, &l_Lean_Meta_Grind_propagateEqUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__9);
v___x_1717_ = l_Lean_mkConst(v___x_1716_, v___x_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp(lean_object* v_e_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___x_1757_; uint8_t v___x_1758_; 
lean_inc_ref(v_e_1718_);
v___x_1757_ = l_Lean_Expr_cleanupAnnotations(v_e_1718_);
v___x_1758_ = l_Lean_Expr_isApp(v___x_1757_);
if (v___x_1758_ == 0)
{
lean_dec_ref(v___x_1757_);
lean_dec_ref(v_e_1718_);
goto v___jp_1730_;
}
else
{
lean_object* v_arg_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v_arg_1759_ = lean_ctor_get(v___x_1757_, 1);
lean_inc_ref(v_arg_1759_);
v___x_1760_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1757_);
v___x_1761_ = l_Lean_Expr_isApp(v___x_1760_);
if (v___x_1761_ == 0)
{
lean_dec_ref(v___x_1760_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1730_;
}
else
{
lean_object* v_arg_1762_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; uint8_t v___y_1775_; lean_object* v___x_1806_; uint8_t v___x_1807_; 
v_arg_1762_ = lean_ctor_get(v___x_1760_, 1);
lean_inc_ref(v_arg_1762_);
v___x_1806_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1760_);
v___x_1807_ = l_Lean_Expr_isApp(v___x_1806_);
if (v___x_1807_ == 0)
{
lean_dec_ref(v___x_1806_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1730_;
}
else
{
lean_object* v_arg_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; 
v_arg_1808_ = lean_ctor_get(v___x_1806_, 1);
lean_inc_ref(v_arg_1808_);
v___x_1809_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1806_);
v___x_1810_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_1811_ = l_Lean_Expr_isConstOf(v___x_1809_, v___x_1810_);
lean_dec_ref(v___x_1809_);
if (v___x_1811_ == 0)
{
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1730_;
}
else
{
lean_object* v___x_1812_; 
lean_inc_ref(v_arg_1762_);
v___x_1812_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_1762_, v_a_1719_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1814_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
lean_dec_ref(v___x_1812_);
lean_inc_ref(v_arg_1759_);
v___x_1814_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_1759_, v_a_1719_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1816_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref(v___x_1814_);
v___x_1816_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_1723_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v_self_1818_; uint8_t v_ctor_1819_; lean_object* v_self_1820_; uint8_t v_ctor_1821_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1829_; lean_object* v___y_1830_; lean_object* v___y_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; uint8_t v___y_1836_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; uint8_t v___x_1975_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref(v___x_1816_);
v_self_1818_ = lean_ctor_get(v_a_1813_, 0);
lean_inc_ref(v_self_1818_);
v_ctor_1819_ = lean_ctor_get_uint8(v_a_1813_, sizeof(void*)*11 + 2);
lean_dec(v_a_1813_);
v_self_1820_ = lean_ctor_get(v_a_1815_, 0);
lean_inc_ref(v_self_1820_);
v_ctor_1821_ = lean_ctor_get_uint8(v_a_1815_, sizeof(void*)*11 + 2);
lean_dec(v_a_1815_);
v___x_1975_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1818_, v_a_1817_);
if (v___x_1975_ == 0)
{
uint8_t v___x_1976_; 
v___x_1976_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1820_, v_a_1817_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; 
v___x_1977_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1818_, v_self_1820_);
if (v___x_1977_ == 0)
{
lean_dec(v_a_1817_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = lean_st_ref_get(v_a_1728_);
lean_dec(v___x_1978_);
v___x_1979_ = lean_st_ref_get(v_a_1719_);
lean_inc_ref(v_e_1718_);
v___x_1980_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_1979_, v_e_1718_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
lean_dec(v___x_1979_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; uint8_t v___x_1982_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref(v___x_1980_);
v___x_1982_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_1981_, v_a_1817_);
lean_dec(v_a_1981_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; 
lean_inc(v_a_1728_);
lean_inc_ref(v_a_1727_);
lean_inc(v_a_1726_);
lean_inc_ref(v_a_1725_);
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
lean_inc(v_a_1722_);
lean_inc_ref(v_a_1721_);
lean_inc(v_a_1720_);
lean_inc(v_a_1719_);
lean_inc_ref(v_arg_1759_);
lean_inc_ref(v_arg_1762_);
v___x_1983_ = lean_grind_mk_eq_proof(v_arg_1762_, v_arg_1759_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref(v___x_1983_);
lean_inc_ref_n(v_e_1718_, 2);
v___x_1985_ = l_Lean_Meta_mkEqTrueCore(v_e_1718_, v_a_1984_);
v___x_1986_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1718_, v_a_1817_, v___x_1985_, v___x_1982_, v_a_1719_, v_a_1721_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_dec_ref(v___x_1986_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
else
{
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
return v___x_1986_;
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1987_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1983_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1983_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
else
{
lean_dec(v_a_1817_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1995_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1980_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1980_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
else
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2003_ = lean_st_ref_get(v_a_1728_);
lean_dec(v___x_2003_);
v___x_2004_ = lean_st_ref_get(v_a_1719_);
lean_inc_ref(v_e_1718_);
v___x_2005_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_2004_, v_e_1718_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
lean_dec(v___x_2004_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; uint8_t v___x_2007_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2006_);
lean_dec_ref(v___x_2005_);
v___x_2007_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_2006_, v_self_1818_);
lean_dec(v_a_2006_);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; 
lean_inc(v_a_1728_);
lean_inc_ref(v_a_1727_);
lean_inc(v_a_1726_);
lean_inc_ref(v_a_1725_);
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
lean_inc(v_a_1722_);
lean_inc_ref(v_a_1721_);
lean_inc(v_a_1720_);
lean_inc(v_a_1719_);
lean_inc_ref(v_arg_1759_);
v___x_2008_ = lean_grind_mk_eq_proof(v_arg_1759_, v_a_1817_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2009_);
lean_dec_ref(v___x_2008_);
v___x_2010_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__7, &l_Lean_Meta_Grind_propagateEqUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__7);
lean_inc_ref(v_arg_1759_);
lean_inc_ref_n(v_arg_1762_, 2);
v___x_2011_ = l_Lean_mkApp3(v___x_2010_, v_arg_1762_, v_arg_1759_, v_a_2009_);
lean_inc_ref(v_e_1718_);
v___x_2012_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1718_, v_arg_1762_, v___x_2011_, v___x_2007_, v_a_1719_, v_a_1721_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_dec_ref(v___x_2012_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
else
{
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
return v___x_2012_;
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2013_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2008_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2008_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
else
{
lean_dec(v_a_1817_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2021_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2005_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2005_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
else
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2029_ = lean_st_ref_get(v_a_1728_);
lean_dec(v___x_2029_);
v___x_2030_ = lean_st_ref_get(v_a_1719_);
lean_inc_ref(v_e_1718_);
v___x_2031_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_2030_, v_e_1718_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
lean_dec(v___x_2030_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; uint8_t v___x_2033_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2032_);
lean_dec_ref(v___x_2031_);
v___x_2033_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_a_2032_, v_self_1820_);
lean_dec(v_a_2032_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; 
lean_inc(v_a_1728_);
lean_inc_ref(v_a_1727_);
lean_inc(v_a_1726_);
lean_inc_ref(v_a_1725_);
lean_inc(v_a_1724_);
lean_inc_ref(v_a_1723_);
lean_inc(v_a_1722_);
lean_inc_ref(v_a_1721_);
lean_inc(v_a_1720_);
lean_inc(v_a_1719_);
lean_inc_ref(v_arg_1762_);
v___x_2034_ = lean_grind_mk_eq_proof(v_arg_1762_, v_a_1817_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref(v___x_2034_);
v___x_2036_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__10, &l_Lean_Meta_Grind_propagateEqUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__10);
lean_inc_ref_n(v_arg_1759_, 2);
lean_inc_ref(v_arg_1762_);
v___x_2037_ = l_Lean_mkApp3(v___x_2036_, v_arg_1762_, v_arg_1759_, v_a_2035_);
lean_inc_ref(v_e_1718_);
v___x_2038_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1718_, v_arg_1759_, v___x_2037_, v___x_2033_, v_a_1719_, v_a_1721_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_dec_ref(v___x_2038_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
else
{
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
return v___x_2038_;
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2046_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2039_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2041_ = v___x_2034_;
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2034_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2039_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
else
{
lean_dec(v_a_1817_);
v___y_1868_ = v_a_1719_;
v___y_1869_ = v_a_1720_;
v___y_1870_ = v_a_1721_;
v___y_1871_ = v_a_1722_;
v___y_1872_ = v_a_1723_;
v___y_1873_ = v_a_1724_;
v___y_1874_ = v_a_1725_;
v___y_1875_ = v_a_1726_;
v___y_1876_ = v_a_1727_;
v___y_1877_ = v_a_1728_;
goto v___jp_1867_;
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2047_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2031_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2031_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
v___jp_1822_:
{
if (v___y_1836_ == 0)
{
uint8_t v___x_1837_; 
v___x_1837_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1818_, v___y_1833_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v_self_1818_);
if (v___x_1837_ == 0)
{
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_self_1820_);
v___y_1764_ = v___y_1828_;
v___y_1765_ = v___y_1829_;
v___y_1766_ = v___y_1823_;
v___y_1767_ = v___y_1830_;
v___y_1768_ = v___y_1831_;
v___y_1769_ = v___y_1824_;
v___y_1770_ = v___y_1832_;
v___y_1771_ = v___y_1834_;
v___y_1772_ = v___y_1825_;
v___y_1773_ = v___y_1826_;
v___y_1774_ = v___y_1835_;
v___y_1775_ = v___x_1837_;
goto v___jp_1763_;
}
else
{
uint8_t v___x_1838_; 
v___x_1838_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1820_, v___y_1827_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_self_1820_);
v___y_1764_ = v___y_1828_;
v___y_1765_ = v___y_1829_;
v___y_1766_ = v___y_1823_;
v___y_1767_ = v___y_1830_;
v___y_1768_ = v___y_1831_;
v___y_1769_ = v___y_1824_;
v___y_1770_ = v___y_1832_;
v___y_1771_ = v___y_1834_;
v___y_1772_ = v___y_1825_;
v___y_1773_ = v___y_1826_;
v___y_1774_ = v___y_1835_;
v___y_1775_ = v___x_1838_;
goto v___jp_1763_;
}
}
else
{
lean_object* v___x_1839_; 
lean_dec_ref(v___y_1833_);
lean_dec_ref(v___y_1827_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_inc_ref(v_arg_1762_);
v___x_1839_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_1762_, v___y_1829_, v___y_1835_, v___y_1826_, v___y_1828_, v___y_1823_, v___y_1825_, v___y_1832_, v___y_1831_, v___y_1830_, v___y_1834_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1841_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref(v___x_1839_);
lean_inc_ref(v_arg_1759_);
v___x_1841_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_1759_, v___y_1829_, v___y_1835_, v___y_1826_, v___y_1828_, v___y_1823_, v___y_1825_, v___y_1832_, v___y_1831_, v___y_1830_, v___y_1834_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref(v___x_1841_);
v___x_1843_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_1844_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_1845_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__3, &l_Lean_Meta_Grind_propagateEqUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__3);
lean_inc_ref(v___y_1824_);
v___x_1846_ = l_Lean_Name_mkStr4(v___x_1843_, v___x_1844_, v___y_1824_, v___x_1845_);
v___x_1847_ = lean_box(0);
v___x_1848_ = l_Lean_mkConst(v___x_1846_, v___x_1847_);
v___x_1849_ = l_Lean_mkApp4(v___x_1848_, v_arg_1762_, v_arg_1759_, v_a_1840_, v_a_1842_);
v___x_1850_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1718_, v___x_1849_, v___y_1829_, v___y_1826_, v___y_1823_, v___y_1832_, v___y_1831_, v___y_1830_, v___y_1834_);
return v___x_1850_;
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v_a_1840_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1851_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1841_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1841_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1859_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1839_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1839_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
v___jp_1867_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1878_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_1879_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__4, &l_Lean_Meta_Grind_propagateEqUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__4);
v___x_1880_ = l_Lean_Expr_isConstOf(v_arg_1808_, v___x_1879_);
lean_dec_ref(v_arg_1808_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
lean_inc_ref(v_e_1718_);
v___x_1881_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1718_, v___y_1868_, v___y_1872_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1932_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1932_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1932_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
uint8_t v___x_1886_; 
v___x_1886_ = lean_unbox(v_a_1882_);
if (v___x_1886_ == 0)
{
lean_del_object(v___x_1884_);
if (v_ctor_1819_ == 0)
{
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1754_;
}
else
{
if (v_ctor_1821_ == 0)
{
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1754_;
}
else
{
lean_object* v___x_1887_; lean_object* v___x_1888_; uint8_t v___x_1889_; 
v___x_1887_ = l_Lean_Expr_getAppFn(v_self_1818_);
v___x_1888_ = l_Lean_Expr_getAppFn(v_self_1820_);
v___x_1889_ = lean_expr_eqv(v___x_1887_, v___x_1888_);
lean_dec_ref(v___x_1888_);
lean_dec_ref(v___x_1887_);
if (v___x_1889_ == 0)
{
lean_object* v___x_1890_; 
lean_inc_ref(v_self_1820_);
lean_inc_ref(v_self_1818_);
v___x_1890_ = l_Lean_Meta_Grind_hasSameType(v_self_1818_, v_self_1820_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; uint8_t v___x_1892_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1891_);
lean_dec_ref(v___x_1890_);
v___x_1892_ = lean_unbox(v_a_1891_);
lean_dec(v_a_1891_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
v___x_1893_ = lean_box(0);
lean_inc_ref(v_arg_1762_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
lean_ctor_set(v___x_1894_, 1, v_arg_1762_);
v___x_1895_ = lean_unbox(v_a_1882_);
lean_dec(v_a_1882_);
v___x_1896_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__2(v_arg_1762_, v_arg_1759_, v___x_1895_, v___x_1811_, v_e_1718_, v___x_1894_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1904_; 
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1904_ == 0)
{
lean_object* v_unused_1905_; 
v_unused_1905_ = lean_ctor_get(v___x_1896_, 0);
lean_dec(v_unused_1905_);
v___x_1898_ = v___x_1896_;
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
else
{
lean_dec(v___x_1896_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1900_ = lean_box(0);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1900_);
v___x_1902_ = v___x_1898_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1896_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1896_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
else
{
lean_object* v___x_1914_; 
lean_inc_ref(v_arg_1759_);
lean_inc_ref(v_arg_1762_);
v___x_1914_ = l_Lean_Meta_mkEq(v_arg_1762_, v_arg_1759_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; lean_object* v___f_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref(v___x_1914_);
v___x_1916_ = lean_box(v___x_1811_);
v___f_1917_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqUp___lam__0___boxed), 18, 6);
lean_closure_set(v___f_1917_, 0, v_arg_1762_);
lean_closure_set(v___f_1917_, 1, v_self_1818_);
lean_closure_set(v___f_1917_, 2, v_arg_1759_);
lean_closure_set(v___f_1917_, 3, v_self_1820_);
lean_closure_set(v___f_1917_, 4, v_a_1882_);
lean_closure_set(v___f_1917_, 5, v___x_1916_);
v___x_1918_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__4);
v___x_1919_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v___x_1918_, v_a_1915_, v___f_1917_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
v___y_1734_ = v___y_1868_;
v___y_1735_ = v___y_1872_;
v___y_1736_ = v___y_1876_;
v___y_1737_ = v___y_1875_;
v___y_1738_ = v___y_1874_;
v___y_1739_ = v___y_1877_;
v___y_1740_ = v___y_1870_;
v___y_1741_ = v___x_1919_;
goto v___jp_1733_;
}
else
{
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
v___y_1734_ = v___y_1868_;
v___y_1735_ = v___y_1872_;
v___y_1736_ = v___y_1876_;
v___y_1737_ = v___y_1875_;
v___y_1738_ = v___y_1874_;
v___y_1739_ = v___y_1877_;
v___y_1740_ = v___y_1870_;
v___y_1741_ = v___x_1914_;
goto v___jp_1733_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1920_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1890_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1890_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
goto v___jp_1754_;
}
}
}
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1930_; 
lean_dec(v_a_1882_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v___x_1928_ = lean_box(0);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v___x_1928_);
v___x_1930_ = v___x_1884_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1933_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1881_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1881_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v___x_1941_; 
lean_inc_ref(v_e_1718_);
v___x_1941_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_1718_, v___y_1868_, v___y_1872_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; uint8_t v___x_1943_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref(v___x_1941_);
v___x_1943_ = lean_unbox(v_a_1942_);
lean_dec(v_a_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v___y_1872_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1946_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref(v___x_1944_);
v___x_1946_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v___y_1872_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; uint8_t v___x_1948_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref(v___x_1946_);
v___x_1948_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1818_, v_a_1945_);
if (v___x_1948_ == 0)
{
v___y_1823_ = v___y_1872_;
v___y_1824_ = v___x_1878_;
v___y_1825_ = v___y_1873_;
v___y_1826_ = v___y_1870_;
v___y_1827_ = v_a_1945_;
v___y_1828_ = v___y_1871_;
v___y_1829_ = v___y_1868_;
v___y_1830_ = v___y_1876_;
v___y_1831_ = v___y_1875_;
v___y_1832_ = v___y_1874_;
v___y_1833_ = v_a_1947_;
v___y_1834_ = v___y_1877_;
v___y_1835_ = v___y_1869_;
v___y_1836_ = v___x_1948_;
goto v___jp_1822_;
}
else
{
uint8_t v___x_1949_; 
v___x_1949_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_self_1820_, v_a_1947_);
v___y_1823_ = v___y_1872_;
v___y_1824_ = v___x_1878_;
v___y_1825_ = v___y_1873_;
v___y_1826_ = v___y_1870_;
v___y_1827_ = v_a_1945_;
v___y_1828_ = v___y_1871_;
v___y_1829_ = v___y_1868_;
v___y_1830_ = v___y_1876_;
v___y_1831_ = v___y_1875_;
v___y_1832_ = v___y_1874_;
v___y_1833_ = v_a_1947_;
v___y_1834_ = v___y_1877_;
v___y_1835_ = v___y_1869_;
v___y_1836_ = v___x_1949_;
goto v___jp_1822_;
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec(v_a_1945_);
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1950_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1946_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1946_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1958_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1944_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1944_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
else
{
lean_object* v___x_1966_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
v___x_1966_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_e_1718_, v_arg_1762_, v_arg_1759_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
return v___x_1966_;
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref(v_self_1820_);
lean_dec_ref(v_self_1818_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1967_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1941_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1941_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec(v_a_1815_);
lean_dec(v_a_1813_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2055_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_1816_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_1816_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec(v_a_1813_);
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2063_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_1814_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_1814_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec_ref(v_arg_1808_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_2071_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_1812_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_1812_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
v___jp_1763_:
{
if (v___y_1775_ == 0)
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v___x_1776_ = lean_box(0);
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
return v___x_1777_;
}
else
{
lean_object* v___x_1778_; 
lean_inc_ref(v_arg_1762_);
v___x_1778_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_1762_, v___y_1765_, v___y_1774_, v___y_1773_, v___y_1764_, v___y_1766_, v___y_1772_, v___y_1770_, v___y_1768_, v___y_1767_, v___y_1771_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1780_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_a_1779_);
lean_dec_ref(v___x_1778_);
lean_inc_ref(v_arg_1759_);
v___x_1780_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_1759_, v___y_1765_, v___y_1774_, v___y_1773_, v___y_1764_, v___y_1766_, v___y_1772_, v___y_1770_, v___y_1768_, v___y_1767_, v___y_1771_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref(v___x_1780_);
v___x_1782_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_1783_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_1784_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__0, &l_Lean_Meta_Grind_propagateEqUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__0);
lean_inc_ref(v___y_1769_);
v___x_1785_ = l_Lean_Name_mkStr4(v___x_1782_, v___x_1783_, v___y_1769_, v___x_1784_);
v___x_1786_ = lean_box(0);
v___x_1787_ = l_Lean_mkConst(v___x_1785_, v___x_1786_);
v___x_1788_ = l_Lean_mkApp4(v___x_1787_, v_arg_1762_, v_arg_1759_, v_a_1779_, v_a_1781_);
v___x_1789_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1718_, v___x_1788_, v___y_1765_, v___y_1773_, v___y_1766_, v___y_1770_, v___y_1768_, v___y_1767_, v___y_1771_);
return v___x_1789_;
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v_a_1779_);
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1790_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1780_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1780_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v_arg_1762_);
lean_dec_ref(v_arg_1759_);
lean_dec_ref(v_e_1718_);
v_a_1798_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1778_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1778_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
}
}
v___jp_1730_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = lean_box(0);
v___x_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
return v___x_1732_;
}
v___jp_1733_:
{
if (lean_obj_tag(v___y_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_a_1742_ = lean_ctor_get(v___y_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref(v___y_1741_);
v___x_1743_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateEqUp_spec__1_spec__2___closed__2);
lean_inc_ref(v_e_1718_);
v___x_1744_ = l_Lean_mkAppB(v___x_1743_, v_e_1718_, v_a_1742_);
v___x_1745_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1718_, v___x_1744_, v___y_1734_, v___y_1740_, v___y_1735_, v___y_1738_, v___y_1737_, v___y_1736_, v___y_1739_);
return v___x_1745_;
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v_e_1718_);
v_a_1746_ = lean_ctor_get(v___y_1741_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___y_1741_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___y_1741_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___y_1741_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
v___jp_1754_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_box(0);
v___x_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
return v___x_1756_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqUp___boxed(lean_object* v_e_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_Lean_Meta_Grind_propagateEqUp(v_e_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec(v_a_2087_);
lean_dec_ref(v_a_2086_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
lean_dec(v_a_2083_);
lean_dec_ref(v_a_2082_);
lean_dec(v_a_2081_);
lean_dec(v_a_2080_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(lean_object* v_00_u03b1_2092_, lean_object* v_name_2093_, uint8_t v_bi_2094_, lean_object* v_type_2095_, lean_object* v_k_2096_, uint8_t v_kind_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___redArg(v_name_2093_, v_bi_2094_, v_type_2095_, v_k_2096_, v_kind_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0___boxed(lean_object** _args){
lean_object* v_00_u03b1_2110_ = _args[0];
lean_object* v_name_2111_ = _args[1];
lean_object* v_bi_2112_ = _args[2];
lean_object* v_type_2113_ = _args[3];
lean_object* v_k_2114_ = _args[4];
lean_object* v_kind_2115_ = _args[5];
lean_object* v___y_2116_ = _args[6];
lean_object* v___y_2117_ = _args[7];
lean_object* v___y_2118_ = _args[8];
lean_object* v___y_2119_ = _args[9];
lean_object* v___y_2120_ = _args[10];
lean_object* v___y_2121_ = _args[11];
lean_object* v___y_2122_ = _args[12];
lean_object* v___y_2123_ = _args[13];
lean_object* v___y_2124_ = _args[14];
lean_object* v___y_2125_ = _args[15];
lean_object* v___y_2126_ = _args[16];
_start:
{
uint8_t v_bi_boxed_2127_; uint8_t v_kind_boxed_2128_; lean_object* v_res_2129_; 
v_bi_boxed_2127_ = lean_unbox(v_bi_2112_);
v_kind_boxed_2128_ = lean_unbox(v_kind_2115_);
v_res_2129_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0_spec__0(v_00_u03b1_2110_, v_name_2111_, v_bi_boxed_2127_, v_type_2113_, v_k_2114_, v_kind_boxed_2128_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec(v___y_2116_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(lean_object* v_00_u03b1_2130_, lean_object* v_name_2131_, lean_object* v_type_2132_, lean_object* v_k_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___redArg(v_name_2131_, v_type_2132_, v_k_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0___boxed(lean_object* v_00_u03b1_2146_, lean_object* v_name_2147_, lean_object* v_type_2148_, lean_object* v_k_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_propagateEqUp_spec__0(v_00_u03b1_2146_, v_name_2147_, v_type_2148_, v_k_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec(v___y_2151_);
lean_dec(v___y_2150_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_2164_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqUp___boxed), 12, 0);
v___x_2165_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_2163_, v___x_2164_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8____boxed(lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8_();
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(lean_object* v_e_2168_, lean_object* v_as_2169_, size_t v_sz_2170_, size_t v_i_2171_, lean_object* v_b_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
uint8_t v___x_2184_; 
v___x_2184_ = lean_usize_dec_lt(v_i_2171_, v_sz_2170_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref(v_e_2168_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_b_2172_);
return v___x_2185_;
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2187_; 
v_a_2186_ = lean_array_uget_borrowed(v_as_2169_, v_i_2171_);
lean_inc_ref(v_e_2168_);
lean_inc(v_a_2186_);
v___x_2187_ = l_Lean_Meta_Grind_instantiateExtTheorem(v_a_2186_, v_e_2168_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; 
lean_dec_ref(v___x_2187_);
v___x_2188_ = lean_box(0);
v___x_2189_ = ((size_t)1ULL);
v___x_2190_ = lean_usize_add(v_i_2171_, v___x_2189_);
v_i_2171_ = v___x_2190_;
v_b_2172_ = v___x_2188_;
goto _start;
}
else
{
lean_dec_ref(v_e_2168_);
return v___x_2187_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0___boxed(lean_object* v_e_2192_, lean_object* v_as_2193_, lean_object* v_sz_2194_, lean_object* v_i_2195_, lean_object* v_b_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
size_t v_sz_boxed_2208_; size_t v_i_boxed_2209_; lean_object* v_res_2210_; 
v_sz_boxed_2208_ = lean_unbox_usize(v_sz_2194_);
lean_dec(v_sz_2194_);
v_i_boxed_2209_ = lean_unbox_usize(v_i_2195_);
lean_dec(v_i_2195_);
v_res_2210_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(v_e_2192_, v_as_2193_, v_sz_boxed_2208_, v_i_boxed_2209_, v_b_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v_as_2193_);
return v_res_2210_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqDown___closed__0(void){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = lean_mk_string_unchecked("List", 4, 4);
return v___x_2211_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqDown___closed__1(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqDown___closed__0, &l_Lean_Meta_Grind_propagateEqDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateEqDown___closed__0);
v___x_2213_ = l_Lean_Name_mkStr1(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown(lean_object* v_e_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v___x_2238_; 
lean_inc_ref(v_e_2214_);
v___x_2238_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2214_, v_a_2215_, v_a_2219_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; uint8_t v___x_2240_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref(v___x_2238_);
v___x_2240_ = lean_unbox(v_a_2239_);
lean_dec(v_a_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
lean_inc_ref(v_e_2214_);
v___x_2241_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_2214_, v_a_2215_, v_a_2219_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2349_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2349_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2349_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
uint8_t v___x_2246_; 
v___x_2246_ = lean_unbox(v_a_2242_);
lean_dec(v_a_2242_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; lean_object* v___x_2249_; 
lean_dec_ref(v_e_2214_);
v___x_2247_ = lean_box(0);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2247_);
v___x_2249_ = v___x_2244_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
else
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
lean_del_object(v___x_2244_);
lean_inc_ref(v_e_2214_);
v___x_2251_ = l_Lean_Expr_cleanupAnnotations(v_e_2214_);
v___x_2252_ = l_Lean_Expr_isApp(v___x_2251_);
if (v___x_2252_ == 0)
{
lean_dec_ref(v___x_2251_);
lean_dec_ref(v_e_2214_);
goto v___jp_2226_;
}
else
{
lean_object* v_arg_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; 
v_arg_2253_ = lean_ctor_get(v___x_2251_, 1);
lean_inc_ref(v_arg_2253_);
v___x_2254_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2251_);
v___x_2255_ = l_Lean_Expr_isApp(v___x_2254_);
if (v___x_2255_ == 0)
{
lean_dec_ref(v___x_2254_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
goto v___jp_2226_;
}
else
{
lean_object* v_arg_2256_; lean_object* v___x_2257_; uint8_t v___x_2258_; 
v_arg_2256_ = lean_ctor_get(v___x_2254_, 1);
lean_inc_ref(v_arg_2256_);
v___x_2257_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2254_);
v___x_2258_ = l_Lean_Expr_isApp(v___x_2257_);
if (v___x_2258_ == 0)
{
lean_dec_ref(v___x_2257_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
goto v___jp_2226_;
}
else
{
lean_object* v_arg_2259_; lean_object* v___y_2261_; lean_object* v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; uint8_t v___y_2271_; lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2306_; lean_object* v___y_2307_; 
v_arg_2259_ = lean_ctor_get(v___x_2257_, 1);
lean_inc_ref(v_arg_2259_);
v___x_2294_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2257_);
v___x_2295_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_2296_ = l_Lean_Expr_isConstOf(v___x_2294_, v___x_2295_);
lean_dec_ref(v___x_2294_);
if (v___x_2296_ == 0)
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
goto v___jp_2226_;
}
else
{
lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2346_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__4, &l_Lean_Meta_Grind_propagateEqUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__4);
v___x_2347_ = l_Lean_Expr_isConstOf(v_arg_2259_, v___x_2346_);
if (v___x_2347_ == 0)
{
v___y_2298_ = v_a_2215_;
v___y_2299_ = v_a_2216_;
v___y_2300_ = v_a_2217_;
v___y_2301_ = v_a_2218_;
v___y_2302_ = v_a_2219_;
v___y_2303_ = v_a_2220_;
v___y_2304_ = v_a_2221_;
v___y_2305_ = v_a_2222_;
v___y_2306_ = v_a_2223_;
v___y_2307_ = v_a_2224_;
goto v___jp_2297_;
}
else
{
lean_object* v___x_2348_; 
lean_inc_ref(v_arg_2253_);
lean_inc_ref(v_arg_2256_);
lean_inc_ref(v_e_2214_);
v___x_2348_ = l_Lean_Meta_Grind_propagateBoolDiseq(v_e_2214_, v_arg_2256_, v_arg_2253_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_dec_ref(v___x_2348_);
v___y_2298_ = v_a_2215_;
v___y_2299_ = v_a_2216_;
v___y_2300_ = v_a_2217_;
v___y_2301_ = v_a_2218_;
v___y_2302_ = v_a_2219_;
v___y_2303_ = v_a_2220_;
v___y_2304_ = v_a_2221_;
v___y_2305_ = v_a_2222_;
v___y_2306_ = v_a_2223_;
v___y_2307_ = v_a_2224_;
goto v___jp_2297_;
}
else
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
return v___x_2348_;
}
}
}
v___jp_2260_:
{
if (v___y_2271_ == 0)
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lean_Meta_Grind_getExtTheorems(v_arg_2259_, v___y_2262_, v___y_2266_, v___y_2270_, v___y_2267_, v___y_2265_, v___y_2269_, v___y_2261_, v___y_2264_, v___y_2263_, v___y_2268_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2274_; size_t v_sz_2275_; size_t v___x_2276_; lean_object* v___x_2277_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref(v___x_2272_);
v___x_2274_ = lean_box(0);
v_sz_2275_ = lean_array_size(v_a_2273_);
v___x_2276_ = ((size_t)0ULL);
v___x_2277_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateEqDown_spec__0(v_e_2214_, v_a_2273_, v_sz_2275_, v___x_2276_, v___x_2274_, v___y_2262_, v___y_2266_, v___y_2270_, v___y_2267_, v___y_2265_, v___y_2269_, v___y_2261_, v___y_2264_, v___y_2263_, v___y_2268_);
lean_dec(v_a_2273_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2284_ == 0)
{
lean_object* v_unused_2285_; 
v_unused_2285_ = lean_ctor_get(v___x_2277_, 0);
lean_dec(v_unused_2285_);
v___x_2279_ = v___x_2277_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_dec(v___x_2277_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v___x_2274_);
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2274_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
else
{
return v___x_2277_;
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec_ref(v_e_2214_);
v_a_2286_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2272_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2272_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_e_2214_);
goto v___jp_2232_;
}
}
v___jp_2297_:
{
lean_object* v___x_2308_; 
lean_inc_ref(v_arg_2253_);
lean_inc_ref(v_arg_2256_);
v___x_2308_ = l_Lean_Meta_Grind_Solvers_propagateDiseqs(v_arg_2256_, v_arg_2253_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v___x_2309_; 
lean_dec_ref(v___x_2308_);
lean_inc_ref(v_arg_2259_);
v___x_2309_ = l_Lean_Meta_Grind_getExtTheorems(v_arg_2259_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; uint8_t v___x_2313_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref(v___x_2309_);
v___x_2311_ = lean_array_get_size(v_a_2310_);
lean_dec(v_a_2310_);
v___x_2312_ = lean_unsigned_to_nat(0u);
v___x_2313_ = lean_nat_dec_eq(v___x_2311_, v___x_2312_);
if (v___x_2313_ == 0)
{
if (v___x_2296_ == 0)
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
goto v___jp_2229_;
}
else
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_2256_, v___y_2298_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2316_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
lean_dec_ref(v___x_2314_);
v___x_2316_ = l_Lean_Meta_Grind_getRootENode___redArg(v_arg_2253_, v___y_2298_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref(v___x_2316_);
v___x_2318_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqDown___closed__1, &l_Lean_Meta_Grind_propagateEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateEqDown___closed__1);
v___x_2319_ = l_Lean_Expr_isAppOf(v_arg_2259_, v___x_2318_);
if (v___x_2319_ == 0)
{
lean_dec(v_a_2317_);
lean_dec(v_a_2315_);
v___y_2261_ = v___y_2304_;
v___y_2262_ = v___y_2298_;
v___y_2263_ = v___y_2306_;
v___y_2264_ = v___y_2305_;
v___y_2265_ = v___y_2302_;
v___y_2266_ = v___y_2299_;
v___y_2267_ = v___y_2301_;
v___y_2268_ = v___y_2307_;
v___y_2269_ = v___y_2303_;
v___y_2270_ = v___y_2300_;
v___y_2271_ = v___x_2319_;
goto v___jp_2260_;
}
else
{
uint8_t v_ctor_2320_; 
v_ctor_2320_ = lean_ctor_get_uint8(v_a_2315_, sizeof(void*)*11 + 2);
lean_dec(v_a_2315_);
if (v_ctor_2320_ == 0)
{
uint8_t v_ctor_2321_; 
v_ctor_2321_ = lean_ctor_get_uint8(v_a_2317_, sizeof(void*)*11 + 2);
lean_dec(v_a_2317_);
v___y_2261_ = v___y_2304_;
v___y_2262_ = v___y_2298_;
v___y_2263_ = v___y_2306_;
v___y_2264_ = v___y_2305_;
v___y_2265_ = v___y_2302_;
v___y_2266_ = v___y_2299_;
v___y_2267_ = v___y_2301_;
v___y_2268_ = v___y_2307_;
v___y_2269_ = v___y_2303_;
v___y_2270_ = v___y_2300_;
v___y_2271_ = v_ctor_2321_;
goto v___jp_2260_;
}
else
{
lean_dec(v_a_2317_);
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_e_2214_);
goto v___jp_2232_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec(v_a_2315_);
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_e_2214_);
v_a_2322_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2316_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2316_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
v_a_2330_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2314_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2314_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
goto v___jp_2229_;
}
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
v_a_2338_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2309_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2309_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2259_);
lean_dec_ref(v_arg_2256_);
lean_dec_ref(v_arg_2253_);
lean_dec_ref(v_e_2214_);
return v___x_2308_;
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
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec_ref(v_e_2214_);
v_a_2350_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2241_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2241_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v___x_2358_; uint8_t v___x_2359_; 
lean_inc_ref(v_e_2214_);
v___x_2358_ = l_Lean_Expr_cleanupAnnotations(v_e_2214_);
v___x_2359_ = l_Lean_Expr_isApp(v___x_2358_);
if (v___x_2359_ == 0)
{
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_e_2214_);
goto v___jp_2235_;
}
else
{
lean_object* v_arg_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; 
v_arg_2360_ = lean_ctor_get(v___x_2358_, 1);
lean_inc_ref(v_arg_2360_);
v___x_2361_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2358_);
v___x_2362_ = l_Lean_Expr_isApp(v___x_2361_);
if (v___x_2362_ == 0)
{
lean_dec_ref(v___x_2361_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
goto v___jp_2235_;
}
else
{
lean_object* v_arg_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; 
v_arg_2363_ = lean_ctor_get(v___x_2361_, 1);
lean_inc_ref(v_arg_2363_);
v___x_2364_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2361_);
v___x_2365_ = l_Lean_Expr_isApp(v___x_2364_);
if (v___x_2365_ == 0)
{
lean_dec_ref(v___x_2364_);
lean_dec_ref(v_arg_2363_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
goto v___jp_2235_;
}
else
{
lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2366_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2364_);
v___x_2367_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_2368_ = l_Lean_Expr_isConstOf(v___x_2366_, v___x_2367_);
lean_dec_ref(v___x_2366_);
if (v___x_2368_ == 0)
{
lean_dec_ref(v_arg_2363_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
goto v___jp_2235_;
}
else
{
lean_object* v___x_2369_; 
v___x_2369_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_2363_, v_arg_2360_, v_a_2215_, v_a_2224_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2392_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2372_ = v___x_2369_;
v_isShared_2373_ = v_isSharedCheck_2392_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2369_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2392_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
uint8_t v___x_2374_; 
v___x_2374_ = lean_unbox(v_a_2370_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; 
lean_del_object(v___x_2372_);
lean_inc_ref(v_e_2214_);
v___x_2375_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2377_; uint8_t v___x_2378_; lean_object* v___x_2379_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref(v___x_2375_);
v___x_2377_ = l_Lean_Meta_mkOfEqTrueCore(v_e_2214_, v_a_2376_);
v___x_2378_ = lean_unbox(v_a_2370_);
lean_dec(v_a_2370_);
v___x_2379_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2363_, v_arg_2360_, v___x_2377_, v___x_2378_, v_a_2215_, v_a_2217_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
return v___x_2379_;
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2387_; 
lean_dec(v_a_2370_);
lean_dec_ref(v_arg_2363_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
v_a_2380_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2382_ = v___x_2375_;
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2375_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
if (v_isShared_2383_ == 0)
{
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2380_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
else
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
lean_dec(v_a_2370_);
lean_dec_ref(v_arg_2363_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
v___x_2388_ = lean_box(0);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v___x_2388_);
v___x_2390_ = v___x_2372_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref(v_arg_2363_);
lean_dec_ref(v_arg_2360_);
lean_dec_ref(v_e_2214_);
v_a_2393_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2369_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2369_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
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
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_dec_ref(v_e_2214_);
v_a_2401_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2238_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2238_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
v___jp_2226_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = lean_box(0);
v___x_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
return v___x_2228_;
}
v___jp_2229_:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2230_ = lean_box(0);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
v___jp_2232_:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = lean_box(0);
v___x_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
return v___x_2234_;
}
v___jp_2235_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = lean_box(0);
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqDown___boxed(lean_object* v_e_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_Meta_Grind_propagateEqDown(v_e_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_);
lean_dec(v_a_2419_);
lean_dec_ref(v_a_2418_);
lean_dec(v_a_2417_);
lean_dec_ref(v_a_2416_);
lean_dec(v_a_2415_);
lean_dec_ref(v_a_2414_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
lean_dec(v_a_2411_);
lean_dec(v_a_2410_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2423_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_2424_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqDown___boxed), 12, 0);
v___x_2425_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_2423_, v___x_2424_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8____boxed(lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8_();
return v_res_2427_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_mk_string_unchecked("LawfulBEq", 9, 9);
return v___x_2428_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__0);
v___x_2430_ = l_Lean_Name_mkStr1(v___x_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(lean_object* v_u_2431_, lean_object* v_00_u03b1_2432_, lean_object* v_binst_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2439_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___closed__1);
v___x_2440_ = l_Lean_mkConst(v___x_2439_, v_u_2431_);
v___x_2441_ = l_Lean_mkAppB(v___x_2440_, v_00_u03b1_2432_, v_binst_2433_);
v___x_2442_ = lean_box(0);
v___x_2443_ = l_Lean_Meta_synthInstance_x3f(v___x_2441_, v___x_2442_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg___boxed(lean_object* v_u_2444_, lean_object* v_00_u03b1_2445_, lean_object* v_binst_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2444_, v_00_u03b1_2445_, v_binst_2446_, v_a_2447_, v_a_2448_, v_a_2449_, v_a_2450_);
lean_dec(v_a_2450_);
lean_dec_ref(v_a_2449_);
lean_dec(v_a_2448_);
lean_dec_ref(v_a_2447_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(lean_object* v_u_2453_, lean_object* v_00_u03b1_2454_, lean_object* v_binst_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2453_, v_00_u03b1_2454_, v_binst_2455_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___boxed(lean_object* v_u_2468_, lean_object* v_00_u03b1_2469_, lean_object* v_binst_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f(v_u_2468_, v_00_u03b1_2469_, v_binst_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
lean_dec(v_a_2480_);
lean_dec_ref(v_a_2479_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
lean_dec(v_a_2474_);
lean_dec_ref(v_a_2473_);
lean_dec(v_a_2472_);
lean_dec(v_a_2471_);
return v_res_2482_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__0(void){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = lean_mk_string_unchecked("BEq", 3, 3);
return v___x_2483_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__1(void){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_mk_string_unchecked("beq", 3, 3);
return v___x_2484_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__2(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__1, &l_Lean_Meta_Grind_propagateBEqUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__1);
v___x_2486_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__0, &l_Lean_Meta_Grind_propagateBEqUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__0);
v___x_2487_ = l_Lean_Name_mkStr2(v___x_2486_, v___x_2485_);
return v___x_2487_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__3(void){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = lean_mk_string_unchecked("beq_eq_false_of_diseq", 21, 21);
return v___x_2488_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__4(void){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2489_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__3, &l_Lean_Meta_Grind_propagateBEqUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__3);
v___x_2490_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_2491_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_2492_ = l_Lean_Name_mkStr3(v___x_2491_, v___x_2490_, v___x_2489_);
return v___x_2492_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__5(void){
_start:
{
lean_object* v___x_2493_; 
v___x_2493_ = lean_mk_string_unchecked("beq_eq_true_of_eq", 17, 17);
return v___x_2493_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqUp___closed__6(void){
_start:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2494_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__5, &l_Lean_Meta_Grind_propagateBEqUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__5);
v___x_2495_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_2496_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_2497_ = l_Lean_Name_mkStr3(v___x_2496_, v___x_2495_, v___x_2494_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp(lean_object* v_e_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_){
_start:
{
lean_object* v___x_2513_; uint8_t v___x_2514_; 
lean_inc_ref(v_e_2498_);
v___x_2513_ = l_Lean_Expr_cleanupAnnotations(v_e_2498_);
v___x_2514_ = l_Lean_Expr_isApp(v___x_2513_);
if (v___x_2514_ == 0)
{
lean_dec_ref(v___x_2513_);
lean_dec_ref(v_e_2498_);
goto v___jp_2510_;
}
else
{
lean_object* v_arg_2515_; lean_object* v___x_2516_; uint8_t v___x_2517_; 
v_arg_2515_ = lean_ctor_get(v___x_2513_, 1);
lean_inc_ref(v_arg_2515_);
v___x_2516_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2513_);
v___x_2517_ = l_Lean_Expr_isApp(v___x_2516_);
if (v___x_2517_ == 0)
{
lean_dec_ref(v___x_2516_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
goto v___jp_2510_;
}
else
{
lean_object* v_arg_2518_; lean_object* v___x_2519_; uint8_t v___x_2520_; 
v_arg_2518_ = lean_ctor_get(v___x_2516_, 1);
lean_inc_ref(v_arg_2518_);
v___x_2519_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2516_);
v___x_2520_ = l_Lean_Expr_isApp(v___x_2519_);
if (v___x_2520_ == 0)
{
lean_dec_ref(v___x_2519_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
goto v___jp_2510_;
}
else
{
lean_object* v_arg_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; 
v_arg_2521_ = lean_ctor_get(v___x_2519_, 1);
lean_inc_ref(v_arg_2521_);
v___x_2522_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2519_);
v___x_2523_ = l_Lean_Expr_isApp(v___x_2522_);
if (v___x_2523_ == 0)
{
lean_dec_ref(v___x_2522_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
goto v___jp_2510_;
}
else
{
lean_object* v_arg_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; uint8_t v___x_2527_; 
v_arg_2524_ = lean_ctor_get(v___x_2522_, 1);
lean_inc_ref(v_arg_2524_);
v___x_2525_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2522_);
v___x_2526_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__2, &l_Lean_Meta_Grind_propagateBEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__2);
v___x_2527_ = l_Lean_Expr_isConstOf(v___x_2525_, v___x_2526_);
if (v___x_2527_ == 0)
{
lean_dec_ref(v___x_2525_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
goto v___jp_2510_;
}
else
{
lean_object* v___x_2528_; 
v___x_2528_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_2518_, v_arg_2515_, v_a_2499_, v_a_2508_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v_u_2530_; uint8_t v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref(v___x_2528_);
v_u_2530_ = l_Lean_Expr_constLevels_x21(v___x_2525_);
lean_dec_ref(v___x_2525_);
v___x_2531_ = lean_unbox(v_a_2529_);
lean_dec(v_a_2529_);
if (v___x_2531_ == 0)
{
lean_object* v___x_2532_; 
lean_inc_ref(v_arg_2515_);
lean_inc_ref(v_arg_2518_);
v___x_2532_ = l_Lean_Meta_Grind_mkDiseqProof_x3f(v_arg_2518_, v_arg_2515_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2565_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2565_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2565_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
if (lean_obj_tag(v_a_2533_) == 1)
{
lean_object* v_val_2537_; lean_object* v___x_2538_; 
lean_del_object(v___x_2535_);
v_val_2537_ = lean_ctor_get(v_a_2533_, 0);
lean_inc(v_val_2537_);
lean_dec_ref(v_a_2533_);
lean_inc_ref(v_arg_2521_);
lean_inc_ref(v_arg_2524_);
lean_inc(v_u_2530_);
v___x_2538_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2530_, v_arg_2524_, v_arg_2521_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2552_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2552_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2552_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
if (lean_obj_tag(v_a_2539_) == 1)
{
lean_object* v_val_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
lean_del_object(v___x_2541_);
v_val_2543_ = lean_ctor_get(v_a_2539_, 0);
lean_inc(v_val_2543_);
lean_dec_ref(v_a_2539_);
v___x_2544_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__4, &l_Lean_Meta_Grind_propagateBEqUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__4);
v___x_2545_ = l_Lean_mkConst(v___x_2544_, v_u_2530_);
v___x_2546_ = l_Lean_mkApp6(v___x_2545_, v_arg_2524_, v_arg_2521_, v_val_2543_, v_arg_2518_, v_arg_2515_, v_val_2537_);
v___x_2547_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_2498_, v___x_2546_, v_a_2499_, v_a_2501_, v_a_2503_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
return v___x_2547_;
}
else
{
lean_object* v___x_2548_; lean_object* v___x_2550_; 
lean_dec(v_a_2539_);
lean_dec(v_val_2537_);
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v___x_2548_ = lean_box(0);
if (v_isShared_2542_ == 0)
{
lean_ctor_set(v___x_2541_, 0, v___x_2548_);
v___x_2550_ = v___x_2541_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v___x_2548_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec(v_val_2537_);
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v_a_2553_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2538_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2538_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
else
{
lean_object* v___x_2561_; lean_object* v___x_2563_; 
lean_dec(v_a_2533_);
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v___x_2561_ = lean_box(0);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2561_);
v___x_2563_ = v___x_2535_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v___x_2561_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v_a_2566_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2532_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2532_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
else
{
lean_object* v___x_2574_; 
lean_inc_ref(v_arg_2521_);
lean_inc_ref(v_arg_2524_);
lean_inc(v_u_2530_);
v___x_2574_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2530_, v_arg_2524_, v_arg_2521_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2598_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2577_ = v___x_2574_;
v_isShared_2578_ = v_isSharedCheck_2598_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2574_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2598_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
if (lean_obj_tag(v_a_2575_) == 1)
{
lean_object* v_val_2579_; lean_object* v___x_2580_; 
lean_del_object(v___x_2577_);
v_val_2579_ = lean_ctor_get(v_a_2575_, 0);
lean_inc(v_val_2579_);
lean_dec_ref(v_a_2575_);
lean_inc(v_a_2508_);
lean_inc_ref(v_a_2507_);
lean_inc(v_a_2506_);
lean_inc_ref(v_a_2505_);
lean_inc(v_a_2504_);
lean_inc_ref(v_a_2503_);
lean_inc(v_a_2502_);
lean_inc_ref(v_a_2501_);
lean_inc(v_a_2500_);
lean_inc(v_a_2499_);
lean_inc_ref(v_arg_2515_);
lean_inc_ref(v_arg_2518_);
v___x_2580_ = lean_grind_mk_eq_proof(v_arg_2518_, v_arg_2515_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc(v_a_2581_);
lean_dec_ref(v___x_2580_);
v___x_2582_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__6, &l_Lean_Meta_Grind_propagateBEqUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__6);
v___x_2583_ = l_Lean_mkConst(v___x_2582_, v_u_2530_);
v___x_2584_ = l_Lean_mkApp6(v___x_2583_, v_arg_2524_, v_arg_2521_, v_val_2579_, v_arg_2518_, v_arg_2515_, v_a_2581_);
v___x_2585_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_2498_, v___x_2584_, v_a_2499_, v_a_2501_, v_a_2503_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
return v___x_2585_;
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
lean_dec(v_val_2579_);
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v_a_2586_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2580_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2580_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
else
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
lean_dec(v_a_2575_);
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v___x_2594_ = lean_box(0);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 0, v___x_2594_);
v___x_2596_ = v___x_2577_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec(v_u_2530_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v_a_2599_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2574_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2574_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec_ref(v___x_2525_);
lean_dec_ref(v_arg_2524_);
lean_dec_ref(v_arg_2521_);
lean_dec_ref(v_arg_2518_);
lean_dec_ref(v_arg_2515_);
lean_dec_ref(v_e_2498_);
v_a_2607_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2528_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2528_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
}
}
}
v___jp_2510_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = lean_box(0);
v___x_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2511_);
return v___x_2512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqUp___boxed(lean_object* v_e_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_Meta_Grind_propagateBEqUp(v_e_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
lean_dec(v_a_2625_);
lean_dec_ref(v_a_2624_);
lean_dec(v_a_2623_);
lean_dec_ref(v_a_2622_);
lean_dec(v_a_2621_);
lean_dec_ref(v_a_2620_);
lean_dec(v_a_2619_);
lean_dec_ref(v_a_2618_);
lean_dec(v_a_2617_);
lean_dec(v_a_2616_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__2, &l_Lean_Meta_Grind_propagateBEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__2);
v___x_2630_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBEqUp___boxed), 12, 0);
v___x_2631_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_2629_, v___x_2630_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8____boxed(lean_object* v_a_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8_();
return v_res_2633_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqDown___closed__0(void){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_mk_string_unchecked("ne_of_beq_eq_false", 18, 18);
return v___x_2634_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqDown___closed__1(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2635_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqDown___closed__0, &l_Lean_Meta_Grind_propagateBEqDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateBEqDown___closed__0);
v___x_2636_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_2637_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_2638_ = l_Lean_Name_mkStr3(v___x_2637_, v___x_2636_, v___x_2635_);
return v___x_2638_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqDown___closed__2(void){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_mk_string_unchecked("eq_of_beq_eq_true", 17, 17);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBEqDown___closed__3(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2640_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqDown___closed__2, &l_Lean_Meta_Grind_propagateBEqDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateBEqDown___closed__2);
v___x_2641_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_2642_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_2643_ = l_Lean_Name_mkStr3(v___x_2642_, v___x_2641_, v___x_2640_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown(lean_object* v_e_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v___x_2659_; uint8_t v___x_2660_; 
lean_inc_ref(v_e_2644_);
v___x_2659_ = l_Lean_Expr_cleanupAnnotations(v_e_2644_);
v___x_2660_ = l_Lean_Expr_isApp(v___x_2659_);
if (v___x_2660_ == 0)
{
lean_dec_ref(v___x_2659_);
lean_dec_ref(v_e_2644_);
goto v___jp_2656_;
}
else
{
lean_object* v_arg_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v_arg_2661_ = lean_ctor_get(v___x_2659_, 1);
lean_inc_ref(v_arg_2661_);
v___x_2662_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2659_);
v___x_2663_ = l_Lean_Expr_isApp(v___x_2662_);
if (v___x_2663_ == 0)
{
lean_dec_ref(v___x_2662_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
goto v___jp_2656_;
}
else
{
lean_object* v_arg_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; 
v_arg_2664_ = lean_ctor_get(v___x_2662_, 1);
lean_inc_ref(v_arg_2664_);
v___x_2665_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2662_);
v___x_2666_ = l_Lean_Expr_isApp(v___x_2665_);
if (v___x_2666_ == 0)
{
lean_dec_ref(v___x_2665_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
goto v___jp_2656_;
}
else
{
lean_object* v_arg_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; 
v_arg_2667_ = lean_ctor_get(v___x_2665_, 1);
lean_inc_ref(v_arg_2667_);
v___x_2668_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2665_);
v___x_2669_ = l_Lean_Expr_isApp(v___x_2668_);
if (v___x_2669_ == 0)
{
lean_dec_ref(v___x_2668_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
goto v___jp_2656_;
}
else
{
lean_object* v_arg_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; 
v_arg_2670_ = lean_ctor_get(v___x_2668_, 1);
lean_inc_ref(v_arg_2670_);
v___x_2671_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2668_);
v___x_2672_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__2, &l_Lean_Meta_Grind_propagateBEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__2);
v___x_2673_ = l_Lean_Expr_isConstOf(v___x_2671_, v___x_2672_);
if (v___x_2673_ == 0)
{
lean_dec_ref(v___x_2671_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
goto v___jp_2656_;
}
else
{
lean_object* v___x_2674_; 
lean_inc_ref(v_e_2644_);
v___x_2674_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_2644_, v_a_2645_, v_a_2649_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v_u_2676_; uint8_t v___x_2677_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref(v___x_2674_);
v_u_2676_ = l_Lean_Expr_constLevels_x21(v___x_2671_);
lean_dec_ref(v___x_2671_);
v___x_2677_ = lean_unbox(v_a_2675_);
lean_dec(v_a_2675_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
lean_inc_ref(v_e_2644_);
v___x_2678_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_2644_, v_a_2645_, v_a_2649_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2761_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2761_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2761_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
uint8_t v___x_2683_; 
v___x_2683_ = lean_unbox(v_a_2679_);
lean_dec(v_a_2679_);
if (v___x_2683_ == 0)
{
lean_object* v___x_2684_; lean_object* v___x_2686_; 
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v___x_2684_ = lean_box(0);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v___x_2684_);
v___x_2686_ = v___x_2681_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
else
{
lean_object* v___x_2688_; 
lean_del_object(v___x_2681_);
lean_inc_ref(v_arg_2667_);
lean_inc_ref(v_arg_2670_);
lean_inc(v_u_2676_);
v___x_2688_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2676_, v_arg_2670_, v_arg_2667_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2752_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2691_ = v___x_2688_;
v_isShared_2692_ = v_isSharedCheck_2752_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2752_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
if (lean_obj_tag(v_a_2689_) == 1)
{
lean_object* v_val_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
lean_del_object(v___x_2691_);
v_val_2693_ = lean_ctor_get(v_a_2689_, 0);
lean_inc(v_val_2693_);
lean_dec_ref(v_a_2689_);
v___x_2694_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqUp___closed__2, &l_Lean_Meta_Grind_propagateEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateEqUp___closed__2);
v___x_2695_ = lean_box(0);
v___x_2696_ = l_List_head_x21___redArg(v___x_2695_, v_u_2676_);
v___x_2697_ = l_Lean_Level_succ___override(v___x_2696_);
v___x_2698_ = lean_box(0);
v___x_2699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = l_Lean_mkConst(v___x_2694_, v___x_2699_);
lean_inc_ref(v_arg_2661_);
lean_inc_ref(v_arg_2664_);
lean_inc_ref(v_arg_2670_);
v___x_2701_ = l_Lean_mkApp3(v___x_2700_, v_arg_2670_, v_arg_2664_, v_arg_2661_);
v___x_2702_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_2701_, v_a_2650_, v_a_2654_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2704_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref(v___x_2702_);
v___x_2704_ = l_Lean_Meta_Grind_getGeneration___redArg(v_arg_2664_, v_a_2645_, v_a_2654_);
if (lean_obj_tag(v___x_2704_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref(v___x_2704_);
v___x_2706_ = lean_box(0);
lean_inc(v_a_2654_);
lean_inc_ref(v_a_2653_);
lean_inc(v_a_2652_);
lean_inc_ref(v_a_2651_);
lean_inc(v_a_2650_);
lean_inc_ref(v_a_2649_);
lean_inc(v_a_2648_);
lean_inc_ref(v_a_2647_);
lean_inc(v_a_2646_);
lean_inc(v_a_2645_);
lean_inc(v_a_2703_);
v___x_2707_ = lean_grind_internalize(v_a_2703_, v_a_2705_, v___x_2706_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v___x_2708_; 
lean_dec_ref(v___x_2707_);
v___x_2708_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2649_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2710_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref(v___x_2708_);
lean_inc(v_a_2654_);
lean_inc_ref(v_a_2653_);
lean_inc(v_a_2652_);
lean_inc_ref(v_a_2651_);
lean_inc(v_a_2650_);
lean_inc_ref(v_a_2649_);
lean_inc(v_a_2648_);
lean_inc_ref(v_a_2647_);
lean_inc(v_a_2646_);
lean_inc(v_a_2645_);
v___x_2710_ = lean_grind_mk_eq_proof(v_e_2644_, v_a_2709_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
lean_inc(v_a_2711_);
lean_dec_ref(v___x_2710_);
v___x_2712_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqDown___closed__1, &l_Lean_Meta_Grind_propagateBEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBEqDown___closed__1);
v___x_2713_ = l_Lean_mkConst(v___x_2712_, v_u_2676_);
v___x_2714_ = l_Lean_mkApp6(v___x_2713_, v_arg_2670_, v_arg_2667_, v_val_2693_, v_arg_2664_, v_arg_2661_, v_a_2711_);
v___x_2715_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_a_2703_, v___x_2714_, v_a_2645_, v_a_2647_, v_a_2649_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
return v___x_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec(v_a_2703_);
lean_dec(v_val_2693_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
v_a_2716_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2710_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2710_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_a_2703_);
lean_dec(v_val_2693_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2724_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2708_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2708_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
else
{
lean_dec(v_a_2703_);
lean_dec(v_val_2693_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
return v___x_2707_;
}
}
else
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
lean_dec(v_a_2703_);
lean_dec(v_val_2693_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2732_ = lean_ctor_get(v___x_2704_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2704_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2704_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
lean_dec(v_val_2693_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2740_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2702_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2702_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
else
{
lean_object* v___x_2748_; lean_object* v___x_2750_; 
lean_dec(v_a_2689_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v___x_2748_ = lean_box(0);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 0, v___x_2748_);
v___x_2750_ = v___x_2691_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2753_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2688_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2688_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2762_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2678_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2678_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
else
{
lean_object* v___x_2770_; 
lean_inc_ref(v_arg_2667_);
lean_inc_ref(v_arg_2670_);
lean_inc(v_u_2676_);
v___x_2770_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_getLawfulBEqInst_x3f___redArg(v_u_2676_, v_arg_2670_, v_arg_2667_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2805_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2773_ = v___x_2770_;
v_isShared_2774_ = v_isSharedCheck_2805_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2770_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2805_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
if (lean_obj_tag(v_a_2771_) == 1)
{
lean_object* v_val_2775_; lean_object* v___x_2776_; 
lean_del_object(v___x_2773_);
v_val_2775_ = lean_ctor_get(v_a_2771_, 0);
lean_inc(v_val_2775_);
lean_dec_ref(v_a_2771_);
v___x_2776_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2649_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2778_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
lean_dec_ref(v___x_2776_);
lean_inc(v_a_2654_);
lean_inc_ref(v_a_2653_);
lean_inc(v_a_2652_);
lean_inc_ref(v_a_2651_);
lean_inc(v_a_2650_);
lean_inc_ref(v_a_2649_);
lean_inc(v_a_2648_);
lean_inc_ref(v_a_2647_);
lean_inc(v_a_2646_);
lean_inc(v_a_2645_);
v___x_2778_ = lean_grind_mk_eq_proof(v_e_2644_, v_a_2777_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; lean_object* v___x_2784_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref(v___x_2778_);
v___x_2780_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqDown___closed__3, &l_Lean_Meta_Grind_propagateBEqDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBEqDown___closed__3);
v___x_2781_ = l_Lean_mkConst(v___x_2780_, v_u_2676_);
lean_inc_ref(v_arg_2661_);
lean_inc_ref(v_arg_2664_);
v___x_2782_ = l_Lean_mkApp6(v___x_2781_, v_arg_2670_, v_arg_2667_, v_val_2775_, v_arg_2664_, v_arg_2661_, v_a_2779_);
v___x_2783_ = 0;
v___x_2784_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2664_, v_arg_2661_, v___x_2782_, v___x_2783_, v_a_2645_, v_a_2647_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
return v___x_2784_;
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_val_2775_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
v_a_2785_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2778_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2778_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
lean_dec(v_val_2775_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2793_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2776_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2776_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
else
{
lean_object* v___x_2801_; lean_object* v___x_2803_; 
lean_dec(v_a_2771_);
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v___x_2801_ = lean_box(0);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v___x_2801_);
v___x_2803_ = v___x_2773_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec(v_u_2676_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2806_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___x_2770_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2770_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec_ref(v___x_2671_);
lean_dec_ref(v_arg_2670_);
lean_dec_ref(v_arg_2667_);
lean_dec_ref(v_arg_2664_);
lean_dec_ref(v_arg_2661_);
lean_dec_ref(v_e_2644_);
v_a_2814_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2674_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2674_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
}
}
}
}
v___jp_2656_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = lean_box(0);
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
return v___x_2658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBEqDown___boxed(lean_object* v_e_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lean_Meta_Grind_propagateBEqDown(v_e_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_);
lean_dec(v_a_2832_);
lean_dec_ref(v_a_2831_);
lean_dec(v_a_2830_);
lean_dec_ref(v_a_2829_);
lean_dec(v_a_2828_);
lean_dec_ref(v_a_2827_);
lean_dec(v_a_2826_);
lean_dec_ref(v_a_2825_);
lean_dec(v_a_2824_);
lean_dec(v_a_2823_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2836_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBEqUp___closed__2, &l_Lean_Meta_Grind_propagateBEqUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBEqUp___closed__2);
v___x_2837_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBEqDown___boxed), 12, 0);
v___x_2838_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_2836_, v___x_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8____boxed(lean_object* v_a_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8_();
return v_res_2840_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqMatchDown___closed__0(void){
_start:
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_mk_string_unchecked("EqMatch", 7, 7);
return v___x_2841_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateEqMatchDown___closed__1(void){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2842_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqMatchDown___closed__0, &l_Lean_Meta_Grind_propagateEqMatchDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateEqMatchDown___closed__0);
v___x_2843_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_2844_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_2845_ = l_Lean_Name_mkStr3(v___x_2844_, v___x_2843_, v___x_2842_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown(lean_object* v_e_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v___x_2861_; 
lean_inc_ref(v_e_2846_);
v___x_2861_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2846_, v_a_2847_, v_a_2851_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2899_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2864_ = v___x_2861_;
v_isShared_2865_ = v_isSharedCheck_2899_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2861_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2899_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
uint8_t v___x_2866_; 
v___x_2866_ = lean_unbox(v_a_2862_);
lean_dec(v_a_2862_);
if (v___x_2866_ == 0)
{
lean_object* v___x_2867_; lean_object* v___x_2869_; 
lean_dec_ref(v_e_2846_);
v___x_2867_ = lean_box(0);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 0, v___x_2867_);
v___x_2869_ = v___x_2864_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2867_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
else
{
lean_object* v___x_2871_; uint8_t v___x_2872_; 
lean_del_object(v___x_2864_);
lean_inc_ref(v_e_2846_);
v___x_2871_ = l_Lean_Expr_cleanupAnnotations(v_e_2846_);
v___x_2872_ = l_Lean_Expr_isApp(v___x_2871_);
if (v___x_2872_ == 0)
{
lean_dec_ref(v___x_2871_);
lean_dec_ref(v_e_2846_);
goto v___jp_2858_;
}
else
{
lean_object* v_arg_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; 
v_arg_2873_ = lean_ctor_get(v___x_2871_, 1);
lean_inc_ref(v_arg_2873_);
v___x_2874_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2871_);
v___x_2875_ = l_Lean_Expr_isApp(v___x_2874_);
if (v___x_2875_ == 0)
{
lean_dec_ref(v___x_2874_);
lean_dec_ref(v_arg_2873_);
lean_dec_ref(v_e_2846_);
goto v___jp_2858_;
}
else
{
lean_object* v_arg_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v_arg_2876_ = lean_ctor_get(v___x_2874_, 1);
lean_inc_ref(v_arg_2876_);
v___x_2877_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2874_);
v___x_2878_ = l_Lean_Expr_isApp(v___x_2877_);
if (v___x_2878_ == 0)
{
lean_dec_ref(v___x_2877_);
lean_dec_ref(v_arg_2876_);
lean_dec_ref(v_arg_2873_);
lean_dec_ref(v_e_2846_);
goto v___jp_2858_;
}
else
{
lean_object* v_arg_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; 
v_arg_2879_ = lean_ctor_get(v___x_2877_, 1);
lean_inc_ref(v_arg_2879_);
v___x_2880_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2877_);
v___x_2881_ = l_Lean_Expr_isApp(v___x_2880_);
if (v___x_2881_ == 0)
{
lean_dec_ref(v___x_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2876_);
lean_dec_ref(v_arg_2873_);
lean_dec_ref(v_e_2846_);
goto v___jp_2858_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; uint8_t v___x_2884_; 
v___x_2882_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2880_);
v___x_2883_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqMatchDown___closed__1, &l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateEqMatchDown___closed__1);
v___x_2884_ = l_Lean_Expr_isConstOf(v___x_2882_, v___x_2883_);
lean_dec_ref(v___x_2882_);
if (v___x_2884_ == 0)
{
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2876_);
lean_dec_ref(v_arg_2873_);
lean_dec_ref(v_e_2846_);
goto v___jp_2858_;
}
else
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Lean_Meta_Grind_markCaseSplitAsResolved(v_arg_2873_, v_a_2847_, v_a_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v___x_2886_; 
lean_dec_ref(v___x_2885_);
lean_inc_ref(v_e_2846_);
v___x_2886_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_2846_, v_a_2847_, v_a_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v___x_2888_; uint8_t v___x_2889_; lean_object* v___x_2890_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc(v_a_2887_);
lean_dec_ref(v___x_2886_);
v___x_2888_ = l_Lean_Meta_mkOfEqTrueCore(v_e_2846_, v_a_2887_);
v___x_2889_ = 0;
v___x_2890_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2879_, v_arg_2876_, v___x_2888_, v___x_2889_, v_a_2847_, v_a_2849_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_);
return v___x_2890_;
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2876_);
lean_dec_ref(v_e_2846_);
v_a_2891_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2886_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2886_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2876_);
lean_dec_ref(v_e_2846_);
return v___x_2885_;
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
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec_ref(v_e_2846_);
v_a_2900_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2861_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2861_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
v___jp_2858_:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
v___x_2859_ = lean_box(0);
v___x_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2859_);
return v___x_2860_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateEqMatchDown___boxed(lean_object* v_e_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Meta_Grind_propagateEqMatchDown(v_e_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec_ref(v_a_2915_);
lean_dec(v_a_2914_);
lean_dec_ref(v_a_2913_);
lean_dec(v_a_2912_);
lean_dec_ref(v_a_2911_);
lean_dec(v_a_2910_);
lean_dec(v_a_2909_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2922_ = lean_obj_once(&l_Lean_Meta_Grind_propagateEqMatchDown___closed__1, &l_Lean_Meta_Grind_propagateEqMatchDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateEqMatchDown___closed__1);
v___x_2923_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateEqMatchDown___boxed), 12, 0);
v___x_2924_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_2922_, v___x_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8____boxed(lean_object* v_a_2925_){
_start:
{
lean_object* v_res_2926_; 
v_res_2926_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8_();
return v_res_2926_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateHEqDown___closed__0(void){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_2927_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateHEqDown___closed__1(void){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_obj_once(&l_Lean_Meta_Grind_propagateHEqDown___closed__0, &l_Lean_Meta_Grind_propagateHEqDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateHEqDown___closed__0);
v___x_2929_ = l_Lean_Name_mkStr1(v___x_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown(lean_object* v_e_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v___x_2945_; 
lean_inc_ref(v_e_2930_);
v___x_2945_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2930_, v_a_2931_, v_a_2935_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2980_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2948_ = v___x_2945_;
v_isShared_2949_ = v_isSharedCheck_2980_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2945_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2980_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
uint8_t v___x_2950_; 
v___x_2950_ = lean_unbox(v_a_2946_);
lean_dec(v_a_2946_);
if (v___x_2950_ == 0)
{
lean_object* v___x_2951_; lean_object* v___x_2953_; 
lean_dec_ref(v_e_2930_);
v___x_2951_ = lean_box(0);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 0, v___x_2951_);
v___x_2953_ = v___x_2948_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
else
{
lean_object* v___x_2955_; uint8_t v___x_2956_; 
lean_del_object(v___x_2948_);
lean_inc_ref(v_e_2930_);
v___x_2955_ = l_Lean_Expr_cleanupAnnotations(v_e_2930_);
v___x_2956_ = l_Lean_Expr_isApp(v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec_ref(v___x_2955_);
lean_dec_ref(v_e_2930_);
goto v___jp_2942_;
}
else
{
lean_object* v_arg_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; 
v_arg_2957_ = lean_ctor_get(v___x_2955_, 1);
lean_inc_ref(v_arg_2957_);
v___x_2958_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2955_);
v___x_2959_ = l_Lean_Expr_isApp(v___x_2958_);
if (v___x_2959_ == 0)
{
lean_dec_ref(v___x_2958_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_e_2930_);
goto v___jp_2942_;
}
else
{
lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2960_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2958_);
v___x_2961_ = l_Lean_Expr_isApp(v___x_2960_);
if (v___x_2961_ == 0)
{
lean_dec_ref(v___x_2960_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_e_2930_);
goto v___jp_2942_;
}
else
{
lean_object* v_arg_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v_arg_2962_ = lean_ctor_get(v___x_2960_, 1);
lean_inc_ref(v_arg_2962_);
v___x_2963_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2960_);
v___x_2964_ = l_Lean_Expr_isApp(v___x_2963_);
if (v___x_2964_ == 0)
{
lean_dec_ref(v___x_2963_);
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_e_2930_);
goto v___jp_2942_;
}
else
{
lean_object* v___x_2965_; lean_object* v___x_2966_; uint8_t v___x_2967_; 
v___x_2965_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2963_);
v___x_2966_ = lean_obj_once(&l_Lean_Meta_Grind_propagateHEqDown___closed__1, &l_Lean_Meta_Grind_propagateHEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateHEqDown___closed__1);
v___x_2967_ = l_Lean_Expr_isConstOf(v___x_2965_, v___x_2966_);
lean_dec_ref(v___x_2965_);
if (v___x_2967_ == 0)
{
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_e_2930_);
goto v___jp_2942_;
}
else
{
lean_object* v___x_2968_; 
lean_inc_ref(v_e_2930_);
v___x_2968_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
lean_dec_ref(v___x_2968_);
v___x_2970_ = l_Lean_Meta_mkOfEqTrueCore(v_e_2930_, v_a_2969_);
v___x_2971_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_arg_2962_, v_arg_2957_, v___x_2970_, v___x_2967_, v_a_2931_, v_a_2933_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
return v___x_2971_;
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
lean_dec_ref(v_arg_2962_);
lean_dec_ref(v_arg_2957_);
lean_dec_ref(v_e_2930_);
v_a_2972_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2968_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2968_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
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
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
lean_dec_ref(v_e_2930_);
v_a_2981_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2945_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2945_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
v___jp_2942_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = lean_box(0);
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
return v___x_2944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqDown___boxed(lean_object* v_e_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lean_Meta_Grind_propagateHEqDown(v_e_2989_, v_a_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
lean_dec(v_a_2997_);
lean_dec_ref(v_a_2996_);
lean_dec(v_a_2995_);
lean_dec_ref(v_a_2994_);
lean_dec(v_a_2993_);
lean_dec_ref(v_a_2992_);
lean_dec(v_a_2991_);
lean_dec(v_a_2990_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = lean_obj_once(&l_Lean_Meta_Grind_propagateHEqDown___closed__1, &l_Lean_Meta_Grind_propagateHEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateHEqDown___closed__1);
v___x_3004_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateHEqDown___boxed), 12, 0);
v___x_3005_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_3003_, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8____boxed(lean_object* v_a_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8_();
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp(lean_object* v_e_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
lean_inc_ref(v_e_3008_);
v___x_3023_ = l_Lean_Expr_cleanupAnnotations(v_e_3008_);
v___x_3024_ = l_Lean_Expr_isApp(v___x_3023_);
if (v___x_3024_ == 0)
{
lean_dec_ref(v___x_3023_);
lean_dec_ref(v_e_3008_);
goto v___jp_3020_;
}
else
{
lean_object* v_arg_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
v_arg_3025_ = lean_ctor_get(v___x_3023_, 1);
lean_inc_ref(v_arg_3025_);
v___x_3026_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3023_);
v___x_3027_ = l_Lean_Expr_isApp(v___x_3026_);
if (v___x_3027_ == 0)
{
lean_dec_ref(v___x_3026_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
goto v___jp_3020_;
}
else
{
lean_object* v___x_3028_; uint8_t v___x_3029_; 
v___x_3028_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3026_);
v___x_3029_ = l_Lean_Expr_isApp(v___x_3028_);
if (v___x_3029_ == 0)
{
lean_dec_ref(v___x_3028_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
goto v___jp_3020_;
}
else
{
lean_object* v_arg_3030_; lean_object* v___x_3031_; uint8_t v___x_3032_; 
v_arg_3030_ = lean_ctor_get(v___x_3028_, 1);
lean_inc_ref(v_arg_3030_);
v___x_3031_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3028_);
v___x_3032_ = l_Lean_Expr_isApp(v___x_3031_);
if (v___x_3032_ == 0)
{
lean_dec_ref(v___x_3031_);
lean_dec_ref(v_arg_3030_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
goto v___jp_3020_;
}
else
{
lean_object* v___x_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3033_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3031_);
v___x_3034_ = lean_obj_once(&l_Lean_Meta_Grind_propagateHEqDown___closed__1, &l_Lean_Meta_Grind_propagateHEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateHEqDown___closed__1);
v___x_3035_ = l_Lean_Expr_isConstOf(v___x_3033_, v___x_3034_);
lean_dec_ref(v___x_3033_);
if (v___x_3035_ == 0)
{
lean_dec_ref(v_arg_3030_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
goto v___jp_3020_;
}
else
{
lean_object* v___x_3036_; 
v___x_3036_ = l_Lean_Meta_Grind_isEqv___redArg(v_arg_3030_, v_arg_3025_, v_a_3009_, v_a_3018_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3058_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3039_ = v___x_3036_;
v_isShared_3040_ = v_isSharedCheck_3058_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3036_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3058_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_unbox(v_a_3037_);
lean_dec(v_a_3037_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; lean_object* v___x_3044_; 
lean_dec_ref(v_arg_3030_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
v___x_3042_ = lean_box(0);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v___x_3042_);
v___x_3044_ = v___x_3039_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3042_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
else
{
lean_object* v___x_3046_; 
lean_del_object(v___x_3039_);
lean_inc(v_a_3018_);
lean_inc_ref(v_a_3017_);
lean_inc(v_a_3016_);
lean_inc_ref(v_a_3015_);
lean_inc(v_a_3014_);
lean_inc_ref(v_a_3013_);
lean_inc(v_a_3012_);
lean_inc_ref(v_a_3011_);
lean_inc(v_a_3010_);
lean_inc(v_a_3009_);
v___x_3046_ = lean_grind_mk_heq_proof(v_arg_3030_, v_arg_3025_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v_a_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v_a_3047_ = lean_ctor_get(v___x_3046_, 0);
lean_inc(v_a_3047_);
lean_dec_ref(v___x_3046_);
lean_inc_ref(v_e_3008_);
v___x_3048_ = l_Lean_Meta_mkEqTrueCore(v_e_3008_, v_a_3047_);
v___x_3049_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_3008_, v___x_3048_, v_a_3009_, v_a_3011_, v_a_3013_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
return v___x_3049_;
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
lean_dec_ref(v_e_3008_);
v_a_3050_ = lean_ctor_get(v___x_3046_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3046_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_3046_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3046_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec_ref(v_arg_3030_);
lean_dec_ref(v_arg_3025_);
lean_dec_ref(v_e_3008_);
v_a_3059_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3036_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3036_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
}
}
}
v___jp_3020_:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
return v___x_3022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateHEqUp___boxed(lean_object* v_e_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_, lean_object* v_a_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Lean_Meta_Grind_propagateHEqUp(v_e_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_, v_a_3073_, v_a_3074_, v_a_3075_, v_a_3076_, v_a_3077_);
lean_dec(v_a_3077_);
lean_dec_ref(v_a_3076_);
lean_dec(v_a_3075_);
lean_dec_ref(v_a_3074_);
lean_dec(v_a_3073_);
lean_dec_ref(v_a_3072_);
lean_dec(v_a_3071_);
lean_dec_ref(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec(v_a_3068_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3081_ = lean_obj_once(&l_Lean_Meta_Grind_propagateHEqDown___closed__1, &l_Lean_Meta_Grind_propagateHEqDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateHEqDown___closed__1);
v___x_3082_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateHEqUp___boxed), 12, 0);
v___x_3083_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3081_, v___x_3082_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8____boxed(lean_object* v_a_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8_();
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(lean_object* v_e_3086_, lean_object* v_args_3087_, lean_object* v_rhs_3088_, lean_object* v_h_3089_, lean_object* v_i_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_){
_start:
{
lean_object* v___x_3102_; uint8_t v___x_3103_; 
v___x_3102_ = lean_array_get_size(v_args_3087_);
v___x_3103_ = lean_nat_dec_lt(v_i_3090_, v___x_3102_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; 
lean_dec(v_i_3090_);
v___x_3104_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_rhs_3088_, v_a_3092_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3106_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref(v___x_3104_);
v___x_3106_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3086_, v_a_3091_, v_a_3100_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref(v___x_3106_);
lean_inc_ref(v_e_3086_);
v___x_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3108_, 0, v_e_3086_);
lean_inc(v_a_3100_);
lean_inc_ref(v_a_3099_);
lean_inc(v_a_3098_);
lean_inc_ref(v_a_3097_);
lean_inc(v_a_3096_);
lean_inc_ref(v_a_3095_);
lean_inc(v_a_3094_);
lean_inc_ref(v_a_3093_);
lean_inc(v_a_3092_);
lean_inc(v_a_3091_);
lean_inc(v_a_3105_);
v___x_3109_ = lean_grind_internalize(v_a_3105_, v_a_3107_, v___x_3108_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v___x_3110_; 
lean_dec_ref(v___x_3109_);
v___x_3110_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3086_, v_a_3105_, v_h_3089_, v___x_3103_, v_a_3091_, v_a_3093_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_);
return v___x_3110_;
}
else
{
lean_dec(v_a_3105_);
lean_dec_ref(v_h_3089_);
lean_dec_ref(v_e_3086_);
return v___x_3109_;
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_dec(v_a_3105_);
lean_dec_ref(v_h_3089_);
lean_dec_ref(v_e_3086_);
v_a_3111_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_3106_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3106_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3116_; 
if (v_isShared_3114_ == 0)
{
v___x_3116_ = v___x_3113_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3111_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec_ref(v_h_3089_);
lean_dec_ref(v_e_3086_);
v_a_3119_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3104_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3104_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
else
{
lean_object* v_arg_3127_; lean_object* v_rhs_x27_3128_; lean_object* v___x_3129_; 
v_arg_3127_ = lean_array_fget_borrowed(v_args_3087_, v_i_3090_);
lean_inc_n(v_arg_3127_, 2);
v_rhs_x27_3128_ = l_Lean_Expr_app___override(v_rhs_3088_, v_arg_3127_);
v___x_3129_ = l_Lean_Meta_mkCongrFun(v_h_3089_, v_arg_3127_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_a_3130_);
lean_dec_ref(v___x_3129_);
v___x_3131_ = lean_unsigned_to_nat(1u);
v___x_3132_ = lean_nat_add(v_i_3090_, v___x_3131_);
lean_dec(v_i_3090_);
v_rhs_3088_ = v_rhs_x27_3128_;
v_h_3089_ = v_a_3130_;
v_i_3090_ = v___x_3132_;
goto _start;
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec_ref(v_rhs_x27_3128_);
lean_dec(v_i_3090_);
lean_dec_ref(v_e_3086_);
v_a_3134_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3129_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3129_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go___boxed(lean_object* v_e_3142_, lean_object* v_args_3143_, lean_object* v_rhs_3144_, lean_object* v_h_3145_, lean_object* v_i_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(v_e_3142_, v_args_3143_, v_rhs_3144_, v_h_3145_, v_i_3146_, v_a_3147_, v_a_3148_, v_a_3149_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_);
lean_dec(v_a_3156_);
lean_dec_ref(v_a_3155_);
lean_dec(v_a_3154_);
lean_dec_ref(v_a_3153_);
lean_dec(v_a_3152_);
lean_dec_ref(v_a_3151_);
lean_dec(v_a_3150_);
lean_dec_ref(v_a_3149_);
lean_dec(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_args_3143_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(lean_object* v_e_3159_, lean_object* v_rhs_3160_, lean_object* v_h_3161_, lean_object* v_prefixSize_3162_, lean_object* v_args_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v___x_3175_; uint8_t v___x_3176_; 
v___x_3175_ = lean_array_get_size(v_args_3163_);
v___x_3176_ = lean_nat_dec_eq(v_prefixSize_3162_, v___x_3175_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; 
v___x_3177_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun_go(v_e_3159_, v_args_3163_, v_rhs_3160_, v_h_3161_, v_prefixSize_3162_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_);
return v___x_3177_;
}
else
{
lean_object* v___x_3178_; 
lean_dec(v_prefixSize_3162_);
v___x_3178_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3159_, v_a_3164_, v_a_3173_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref(v___x_3178_);
lean_inc_ref(v_e_3159_);
v___x_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3180_, 0, v_e_3159_);
lean_inc(v_a_3173_);
lean_inc_ref(v_a_3172_);
lean_inc(v_a_3171_);
lean_inc_ref(v_a_3170_);
lean_inc(v_a_3169_);
lean_inc_ref(v_a_3168_);
lean_inc(v_a_3167_);
lean_inc_ref(v_a_3166_);
lean_inc(v_a_3165_);
lean_inc(v_a_3164_);
lean_inc_ref(v_rhs_3160_);
v___x_3181_ = lean_grind_internalize(v_rhs_3160_, v_a_3179_, v___x_3180_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_);
if (lean_obj_tag(v___x_3181_) == 0)
{
uint8_t v___x_3182_; lean_object* v___x_3183_; 
lean_dec_ref(v___x_3181_);
v___x_3182_ = 0;
v___x_3183_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3159_, v_rhs_3160_, v_h_3161_, v___x_3182_, v_a_3164_, v_a_3166_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_);
return v___x_3183_;
}
else
{
lean_dec_ref(v_h_3161_);
lean_dec_ref(v_rhs_3160_);
lean_dec_ref(v_e_3159_);
return v___x_3181_;
}
}
else
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3191_; 
lean_dec_ref(v_h_3161_);
lean_dec_ref(v_rhs_3160_);
lean_dec_ref(v_e_3159_);
v_a_3184_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3186_ = v___x_3178_;
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3178_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3191_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun___boxed(lean_object* v_e_3192_, lean_object* v_rhs_3193_, lean_object* v_h_3194_, lean_object* v_prefixSize_3195_, lean_object* v_args_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_){
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3192_, v_rhs_3193_, v_h_3194_, v_prefixSize_3195_, v_args_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_);
lean_dec(v_a_3206_);
lean_dec_ref(v_a_3205_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3201_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec(v_a_3197_);
lean_dec_ref(v_args_3196_);
return v_res_3208_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateIte___closed__0(void){
_start:
{
lean_object* v___x_3209_; lean_object* v_dummy_3210_; 
v___x_3209_ = lean_box(0);
v_dummy_3210_ = l_Lean_Expr_sort___override(v___x_3209_);
return v_dummy_3210_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateIte___closed__1(void){
_start:
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_mk_string_unchecked("ite_cond_eq_false", 17, 17);
return v___x_3211_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateIte___closed__2(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__1, &l_Lean_Meta_Grind_propagateIte___closed__1_once, _init_l_Lean_Meta_Grind_propagateIte___closed__1);
v___x_3213_ = l_Lean_Name_mkStr1(v___x_3212_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateIte___closed__3(void){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = lean_mk_string_unchecked("ite_cond_eq_true", 16, 16);
return v___x_3214_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateIte___closed__4(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__3, &l_Lean_Meta_Grind_propagateIte___closed__3_once, _init_l_Lean_Meta_Grind_propagateIte___closed__3);
v___x_3216_ = l_Lean_Name_mkStr1(v___x_3215_);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte(lean_object* v_e_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v_numArgs_3229_; lean_object* v___x_3230_; uint8_t v___x_3231_; 
v_numArgs_3229_ = l_Lean_Expr_getAppNumArgs(v_e_3217_);
v___x_3230_ = lean_unsigned_to_nat(5u);
v___x_3231_ = lean_nat_dec_lt(v_numArgs_3229_, v___x_3230_);
if (v___x_3231_ == 0)
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v_c_3235_; lean_object* v___x_3236_; 
v___x_3232_ = lean_unsigned_to_nat(1u);
v___x_3233_ = lean_nat_sub(v_numArgs_3229_, v___x_3232_);
v___x_3234_ = lean_nat_sub(v___x_3233_, v___x_3232_);
v_c_3235_ = l_Lean_Expr_getRevArg_x21(v_e_3217_, v___x_3234_);
lean_inc_ref(v_c_3235_);
v___x_3236_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3235_, v_a_3218_, v_a_3222_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; uint8_t v___x_3238_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref(v___x_3236_);
v___x_3238_ = lean_unbox(v_a_3237_);
lean_dec(v_a_3237_);
if (v___x_3238_ == 0)
{
lean_object* v___x_3239_; 
lean_inc_ref(v_c_3235_);
v___x_3239_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_c_3235_, v_a_3218_, v_a_3222_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3273_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3242_ = v___x_3239_;
v_isShared_3243_ = v_isSharedCheck_3273_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3239_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3273_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
uint8_t v___x_3244_; 
v___x_3244_ = lean_unbox(v_a_3240_);
lean_dec(v_a_3240_);
if (v___x_3244_ == 0)
{
lean_object* v___x_3245_; lean_object* v___x_3247_; 
lean_dec_ref(v_c_3235_);
lean_dec(v___x_3233_);
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v___x_3245_ = lean_box(0);
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 0, v___x_3245_);
v___x_3247_ = v___x_3242_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v___x_3245_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
else
{
lean_object* v___x_3249_; 
lean_del_object(v___x_3242_);
v___x_3249_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3235_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v_dummy_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
lean_inc(v_a_3250_);
lean_dec_ref(v___x_3249_);
v___x_3251_ = l_Lean_Expr_getAppFn(v_e_3217_);
v___x_3252_ = l_Lean_instInhabitedExpr;
v_dummy_3253_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__0, &l_Lean_Meta_Grind_propagateIte___closed__0_once, _init_l_Lean_Meta_Grind_propagateIte___closed__0);
v___x_3254_ = lean_mk_array(v_numArgs_3229_, v_dummy_3253_);
lean_inc_ref(v_e_3217_);
v___x_3255_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3217_, v___x_3254_, v___x_3233_);
v___x_3256_ = lean_unsigned_to_nat(4u);
v___x_3257_ = lean_array_get(v___x_3252_, v___x_3255_, v___x_3256_);
v___x_3258_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__2, &l_Lean_Meta_Grind_propagateIte___closed__2_once, _init_l_Lean_Meta_Grind_propagateIte___closed__2);
v___x_3259_ = l_Lean_Expr_constLevels_x21(v___x_3251_);
lean_dec_ref(v___x_3251_);
v___x_3260_ = l_Lean_mkConst(v___x_3258_, v___x_3259_);
v___x_3261_ = lean_unsigned_to_nat(0u);
v___x_3262_ = l_Lean_mkAppRange(v___x_3260_, v___x_3261_, v___x_3230_, v___x_3255_);
v___x_3263_ = l_Lean_Expr_app___override(v___x_3262_, v_a_3250_);
v___x_3264_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3217_, v___x_3257_, v___x_3263_, v___x_3230_, v___x_3255_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v___x_3255_);
return v___x_3264_;
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
lean_dec(v___x_3233_);
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v_a_3265_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3249_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3249_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec_ref(v_c_3235_);
lean_dec(v___x_3233_);
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v_a_3274_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3239_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3239_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
else
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3235_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v_dummy_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref(v___x_3282_);
v___x_3284_ = l_Lean_Expr_getAppFn(v_e_3217_);
v___x_3285_ = l_Lean_instInhabitedExpr;
v_dummy_3286_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__0, &l_Lean_Meta_Grind_propagateIte___closed__0_once, _init_l_Lean_Meta_Grind_propagateIte___closed__0);
v___x_3287_ = lean_mk_array(v_numArgs_3229_, v_dummy_3286_);
lean_inc_ref(v_e_3217_);
v___x_3288_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3217_, v___x_3287_, v___x_3233_);
v___x_3289_ = lean_unsigned_to_nat(3u);
v___x_3290_ = lean_array_get(v___x_3285_, v___x_3288_, v___x_3289_);
v___x_3291_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__4, &l_Lean_Meta_Grind_propagateIte___closed__4_once, _init_l_Lean_Meta_Grind_propagateIte___closed__4);
v___x_3292_ = l_Lean_Expr_constLevels_x21(v___x_3284_);
lean_dec_ref(v___x_3284_);
v___x_3293_ = l_Lean_mkConst(v___x_3291_, v___x_3292_);
v___x_3294_ = lean_unsigned_to_nat(0u);
v___x_3295_ = l_Lean_mkAppRange(v___x_3293_, v___x_3294_, v___x_3230_, v___x_3288_);
v___x_3296_ = l_Lean_Expr_app___override(v___x_3295_, v_a_3283_);
v___x_3297_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3217_, v___x_3290_, v___x_3296_, v___x_3230_, v___x_3288_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v___x_3288_);
return v___x_3297_;
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
lean_dec(v___x_3233_);
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v_a_3298_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3282_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3282_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3308_; uint8_t v_isShared_3309_; uint8_t v_isSharedCheck_3313_; 
lean_dec_ref(v_c_3235_);
lean_dec(v___x_3233_);
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v_a_3306_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3313_ == 0)
{
v___x_3308_ = v___x_3236_;
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
else
{
lean_inc(v_a_3306_);
lean_dec(v___x_3236_);
v___x_3308_ = lean_box(0);
v_isShared_3309_ = v_isSharedCheck_3313_;
goto v_resetjp_3307_;
}
v_resetjp_3307_:
{
lean_object* v___x_3311_; 
if (v_isShared_3309_ == 0)
{
v___x_3311_ = v___x_3308_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_a_3306_);
v___x_3311_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
return v___x_3311_;
}
}
}
}
else
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
lean_dec(v_numArgs_3229_);
lean_dec_ref(v_e_3217_);
v___x_3314_ = lean_box(0);
v___x_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3314_);
return v___x_3315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateIte___boxed(lean_object* v_e_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_Meta_Grind_propagateIte(v_e_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec(v_a_3326_);
lean_dec_ref(v_a_3325_);
lean_dec(v_a_3324_);
lean_dec_ref(v_a_3323_);
lean_dec(v_a_3322_);
lean_dec_ref(v_a_3321_);
lean_dec(v_a_3320_);
lean_dec_ref(v_a_3319_);
lean_dec(v_a_3318_);
lean_dec(v_a_3317_);
return v_res_3328_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_3329_; 
v___x_3329_ = lean_mk_string_unchecked("ite", 3, 3);
return v___x_3329_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3330_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_);
v___x_3331_ = l_Lean_Name_mkStr1(v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3333_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_);
v___x_3334_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateIte___boxed), 12, 0);
v___x_3335_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3333_, v___x_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8____boxed(lean_object* v_a_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_();
return v_res_3337_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDIte___closed__0(void){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_mk_string_unchecked("dite_cond_eq_false'", 19, 19);
return v___x_3338_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDIte___closed__1(void){
_start:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3339_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDIte___closed__0, &l_Lean_Meta_Grind_propagateDIte___closed__0_once, _init_l_Lean_Meta_Grind_propagateDIte___closed__0);
v___x_3340_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3341_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3342_ = l_Lean_Name_mkStr3(v___x_3341_, v___x_3340_, v___x_3339_);
return v___x_3342_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDIte___closed__2(void){
_start:
{
lean_object* v___x_3343_; 
v___x_3343_ = lean_mk_string_unchecked("dite_cond_eq_true'", 18, 18);
return v___x_3343_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDIte___closed__3(void){
_start:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3344_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDIte___closed__2, &l_Lean_Meta_Grind_propagateDIte___closed__2_once, _init_l_Lean_Meta_Grind_propagateDIte___closed__2);
v___x_3345_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3346_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3347_ = l_Lean_Name_mkStr3(v___x_3346_, v___x_3345_, v___x_3344_);
return v___x_3347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte(lean_object* v_e_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v_numArgs_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v_numArgs_3360_ = l_Lean_Expr_getAppNumArgs(v_e_3348_);
v___x_3361_ = lean_unsigned_to_nat(5u);
v___x_3362_ = lean_nat_dec_lt(v_numArgs_3360_, v___x_3361_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v_c_3366_; lean_object* v___x_3367_; 
v___x_3363_ = lean_unsigned_to_nat(1u);
v___x_3364_ = lean_nat_sub(v_numArgs_3360_, v___x_3363_);
v___x_3365_ = lean_nat_sub(v___x_3364_, v___x_3363_);
v_c_3366_ = l_Lean_Expr_getRevArg_x21(v_e_3348_, v___x_3365_);
lean_inc_ref(v_c_3366_);
v___x_3367_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_c_3366_, v_a_3349_, v_a_3353_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; uint8_t v___x_3369_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref(v___x_3367_);
v___x_3369_ = lean_unbox(v_a_3368_);
lean_dec(v_a_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; 
lean_inc_ref(v_c_3366_);
v___x_3370_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_c_3366_, v_a_3349_, v_a_3353_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3427_; 
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3373_ = v___x_3370_;
v_isShared_3374_ = v_isSharedCheck_3427_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3370_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3427_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
uint8_t v___x_3375_; 
v___x_3375_ = lean_unbox(v_a_3371_);
lean_dec(v_a_3371_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; lean_object* v___x_3378_; 
lean_dec_ref(v_c_3366_);
lean_dec(v___x_3364_);
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v___x_3376_ = lean_box(0);
if (v_isShared_3374_ == 0)
{
lean_ctor_set(v___x_3373_, 0, v___x_3376_);
v___x_3378_ = v___x_3373_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
else
{
lean_object* v___x_3380_; 
lean_del_object(v___x_3373_);
lean_inc_ref(v_c_3366_);
v___x_3380_ = l_Lean_Meta_Grind_mkEqFalseProof(v_c_3366_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3382_; lean_object* v_dummy_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc_n(v_a_3381_, 2);
lean_dec_ref(v___x_3380_);
v___x_3382_ = l_Lean_Expr_getAppFn(v_e_3348_);
v_dummy_3383_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__0, &l_Lean_Meta_Grind_propagateIte___closed__0_once, _init_l_Lean_Meta_Grind_propagateIte___closed__0);
v___x_3384_ = lean_mk_array(v_numArgs_3360_, v_dummy_3383_);
lean_inc_ref(v_e_3348_);
v___x_3385_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3348_, v___x_3384_, v___x_3364_);
v___x_3386_ = l_Lean_instInhabitedExpr;
v___x_3387_ = lean_unsigned_to_nat(4u);
v___x_3388_ = lean_array_get(v___x_3386_, v___x_3385_, v___x_3387_);
v___x_3389_ = l_Lean_Meta_mkOfEqFalseCore(v_c_3366_, v_a_3381_);
v___x_3390_ = l_Lean_Expr_app___override(v___x_3388_, v___x_3389_);
lean_inc(v_a_3358_);
lean_inc_ref(v_a_3357_);
lean_inc(v_a_3356_);
lean_inc_ref(v_a_3355_);
lean_inc(v_a_3354_);
lean_inc_ref(v_a_3353_);
lean_inc(v_a_3352_);
lean_inc_ref(v_a_3351_);
lean_inc(v_a_3350_);
lean_inc(v_a_3349_);
v___x_3391_ = lean_grind_preprocess(v___x_3390_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v_expr_3393_; lean_object* v___x_3394_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_a_3392_);
lean_dec_ref(v___x_3391_);
v_expr_3393_ = lean_ctor_get(v_a_3392_, 0);
lean_inc_ref(v_expr_3393_);
v___x_3394_ = l_Lean_Meta_Simp_Result_getProof(v_a_3392_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref(v___x_3394_);
v___x_3396_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDIte___closed__1, &l_Lean_Meta_Grind_propagateDIte___closed__1_once, _init_l_Lean_Meta_Grind_propagateDIte___closed__1);
v___x_3397_ = l_Lean_Expr_constLevels_x21(v___x_3382_);
lean_dec_ref(v___x_3382_);
v___x_3398_ = l_Lean_mkConst(v___x_3396_, v___x_3397_);
v___x_3399_ = lean_unsigned_to_nat(0u);
v___x_3400_ = l_Lean_mkAppRange(v___x_3398_, v___x_3399_, v___x_3361_, v___x_3385_);
lean_inc_ref(v_expr_3393_);
v___x_3401_ = l_Lean_mkApp3(v___x_3400_, v_expr_3393_, v_a_3381_, v_a_3395_);
v___x_3402_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3348_, v_expr_3393_, v___x_3401_, v___x_3361_, v___x_3385_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
lean_dec_ref(v___x_3385_);
return v___x_3402_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v_expr_3393_);
lean_dec_ref(v___x_3385_);
lean_dec_ref(v___x_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_e_3348_);
v_a_3403_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3394_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3394_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref(v___x_3385_);
lean_dec_ref(v___x_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_e_3348_);
v_a_3411_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3391_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3391_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v_c_3366_);
lean_dec(v___x_3364_);
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v_a_3419_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___x_3380_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3380_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v_c_3366_);
lean_dec(v___x_3364_);
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v_a_3428_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3370_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3370_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
else
{
lean_object* v___x_3436_; 
lean_inc_ref(v_c_3366_);
v___x_3436_ = l_Lean_Meta_Grind_mkEqTrueProof(v_c_3366_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3436_) == 0)
{
lean_object* v_a_3437_; lean_object* v___x_3438_; lean_object* v_dummy_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc_n(v_a_3437_, 2);
lean_dec_ref(v___x_3436_);
v___x_3438_ = l_Lean_Expr_getAppFn(v_e_3348_);
v_dummy_3439_ = lean_obj_once(&l_Lean_Meta_Grind_propagateIte___closed__0, &l_Lean_Meta_Grind_propagateIte___closed__0_once, _init_l_Lean_Meta_Grind_propagateIte___closed__0);
v___x_3440_ = lean_mk_array(v_numArgs_3360_, v_dummy_3439_);
lean_inc_ref(v_e_3348_);
v___x_3441_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3348_, v___x_3440_, v___x_3364_);
v___x_3442_ = l_Lean_instInhabitedExpr;
v___x_3443_ = lean_unsigned_to_nat(3u);
v___x_3444_ = lean_array_get(v___x_3442_, v___x_3441_, v___x_3443_);
v___x_3445_ = l_Lean_Meta_mkOfEqTrueCore(v_c_3366_, v_a_3437_);
v___x_3446_ = l_Lean_Expr_app___override(v___x_3444_, v___x_3445_);
lean_inc(v_a_3358_);
lean_inc_ref(v_a_3357_);
lean_inc(v_a_3356_);
lean_inc_ref(v_a_3355_);
lean_inc(v_a_3354_);
lean_inc_ref(v_a_3353_);
lean_inc(v_a_3352_);
lean_inc_ref(v_a_3351_);
lean_inc(v_a_3350_);
lean_inc(v_a_3349_);
v___x_3447_ = lean_grind_preprocess(v___x_3446_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; lean_object* v_expr_3449_; lean_object* v___x_3450_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref(v___x_3447_);
v_expr_3449_ = lean_ctor_get(v_a_3448_, 0);
lean_inc_ref(v_expr_3449_);
v___x_3450_ = l_Lean_Meta_Simp_Result_getProof(v_a_3448_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_a_3451_);
lean_dec_ref(v___x_3450_);
v___x_3452_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDIte___closed__3, &l_Lean_Meta_Grind_propagateDIte___closed__3_once, _init_l_Lean_Meta_Grind_propagateDIte___closed__3);
v___x_3453_ = l_Lean_Expr_constLevels_x21(v___x_3438_);
lean_dec_ref(v___x_3438_);
v___x_3454_ = l_Lean_mkConst(v___x_3452_, v___x_3453_);
v___x_3455_ = lean_unsigned_to_nat(0u);
v___x_3456_ = l_Lean_mkAppRange(v___x_3454_, v___x_3455_, v___x_3361_, v___x_3441_);
lean_inc_ref(v_expr_3449_);
v___x_3457_ = l_Lean_mkApp3(v___x_3456_, v_expr_3449_, v_a_3437_, v_a_3451_);
v___x_3458_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_applyCongrFun(v_e_3348_, v_expr_3449_, v___x_3457_, v___x_3361_, v___x_3441_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
lean_dec_ref(v___x_3441_);
return v___x_3458_;
}
else
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
lean_dec_ref(v_expr_3449_);
lean_dec_ref(v___x_3441_);
lean_dec_ref(v___x_3438_);
lean_dec(v_a_3437_);
lean_dec_ref(v_e_3348_);
v_a_3459_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3450_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3450_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec_ref(v___x_3441_);
lean_dec_ref(v___x_3438_);
lean_dec(v_a_3437_);
lean_dec_ref(v_e_3348_);
v_a_3467_ = lean_ctor_get(v___x_3447_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3447_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3447_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3447_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
lean_dec_ref(v_c_3366_);
lean_dec(v___x_3364_);
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v_a_3475_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3436_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3436_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec_ref(v_c_3366_);
lean_dec(v___x_3364_);
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v_a_3483_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3367_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3367_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
else
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
lean_dec(v_numArgs_3360_);
lean_dec_ref(v_e_3348_);
v___x_3491_ = lean_box(0);
v___x_3492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
return v___x_3492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDIte___boxed(lean_object* v_e_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Lean_Meta_Grind_propagateDIte(v_e_3493_, v_a_3494_, v_a_3495_, v_a_3496_, v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_);
lean_dec(v_a_3503_);
lean_dec_ref(v_a_3502_);
lean_dec(v_a_3501_);
lean_dec_ref(v_a_3500_);
lean_dec(v_a_3499_);
lean_dec_ref(v_a_3498_);
lean_dec(v_a_3497_);
lean_dec_ref(v_a_3496_);
lean_dec(v_a_3495_);
lean_dec(v_a_3494_);
return v_res_3505_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = lean_mk_string_unchecked("dite", 4, 4);
return v___x_3506_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_(void){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_);
v___x_3508_ = l_Lean_Name_mkStr1(v___x_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_, &l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8__once, _init_l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_);
v___x_3511_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateDIte___boxed), 12, 0);
v___x_3512_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3510_, v___x_3511_);
return v___x_3512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8____boxed(lean_object* v_a_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_();
return v_res_3514_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__0(void){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_mk_string_unchecked("Decidable", 9, 9);
return v___x_3515_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__1(void){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = lean_mk_string_unchecked("decide", 6, 6);
return v___x_3516_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__2(void){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__1, &l_Lean_Meta_Grind_propagateDecideDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__1);
v___x_3518_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__0, &l_Lean_Meta_Grind_propagateDecideDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__0);
v___x_3519_ = l_Lean_Name_mkStr2(v___x_3518_, v___x_3517_);
return v___x_3519_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__3(void){
_start:
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_3520_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__4(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3521_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__3, &l_Lean_Meta_Grind_propagateDecideDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__3);
v___x_3522_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3523_ = l_Lean_Name_mkStr2(v___x_3522_, v___x_3521_);
return v___x_3523_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__5(void){
_start:
{
lean_object* v___x_3524_; 
v___x_3524_ = lean_mk_string_unchecked("false", 5, 5);
return v___x_3524_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__6(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3525_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__5, &l_Lean_Meta_Grind_propagateDecideDown___closed__5_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__5);
v___x_3526_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3527_ = l_Lean_Name_mkStr2(v___x_3526_, v___x_3525_);
return v___x_3527_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__7(void){
_start:
{
lean_object* v___x_3528_; 
v___x_3528_ = lean_mk_string_unchecked("of_decide_eq_false", 18, 18);
return v___x_3528_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__8(void){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3529_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__7, &l_Lean_Meta_Grind_propagateDecideDown___closed__7_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__7);
v___x_3530_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3531_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3532_ = l_Lean_Name_mkStr3(v___x_3531_, v___x_3530_, v___x_3529_);
return v___x_3532_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__9(void){
_start:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3533_ = lean_box(0);
v___x_3534_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__8, &l_Lean_Meta_Grind_propagateDecideDown___closed__8_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__8);
v___x_3535_ = l_Lean_mkConst(v___x_3534_, v___x_3533_);
return v___x_3535_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__10(void){
_start:
{
lean_object* v___x_3536_; 
v___x_3536_ = lean_mk_string_unchecked("of_decide_eq_true", 17, 17);
return v___x_3536_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__11(void){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3537_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__10, &l_Lean_Meta_Grind_propagateDecideDown___closed__10_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__10);
v___x_3538_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3539_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3540_ = l_Lean_Name_mkStr3(v___x_3539_, v___x_3538_, v___x_3537_);
return v___x_3540_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideDown___closed__12(void){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3541_ = lean_box(0);
v___x_3542_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__11, &l_Lean_Meta_Grind_propagateDecideDown___closed__11_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__11);
v___x_3543_ = l_Lean_mkConst(v___x_3542_, v___x_3541_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideDown(lean_object* v_e_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v___x_3559_; 
lean_inc_ref(v_e_3544_);
v___x_3559_ = l_Lean_Meta_Grind_getRootENode___redArg(v_e_3544_, v_a_3545_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3613_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3562_ = v___x_3559_;
v_isShared_3563_ = v_isSharedCheck_3613_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3559_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3613_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
uint8_t v_ctor_3564_; 
v_ctor_3564_ = lean_ctor_get_uint8(v_a_3560_, sizeof(void*)*11 + 2);
if (v_ctor_3564_ == 0)
{
lean_object* v___x_3565_; lean_object* v___x_3567_; 
lean_dec(v_a_3560_);
lean_dec_ref(v_e_3544_);
v___x_3565_ = lean_box(0);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3565_);
v___x_3567_ = v___x_3562_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3565_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
else
{
lean_object* v_self_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
v_self_3569_ = lean_ctor_get(v_a_3560_, 0);
lean_inc_ref(v_self_3569_);
lean_dec(v_a_3560_);
lean_inc_ref(v_e_3544_);
v___x_3570_ = l_Lean_Expr_cleanupAnnotations(v_e_3544_);
v___x_3571_ = l_Lean_Expr_isApp(v___x_3570_);
if (v___x_3571_ == 0)
{
lean_dec_ref(v___x_3570_);
lean_dec_ref(v_self_3569_);
lean_del_object(v___x_3562_);
lean_dec_ref(v_e_3544_);
goto v___jp_3556_;
}
else
{
lean_object* v_arg_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; 
v_arg_3572_ = lean_ctor_get(v___x_3570_, 1);
lean_inc_ref(v_arg_3572_);
v___x_3573_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3570_);
v___x_3574_ = l_Lean_Expr_isApp(v___x_3573_);
if (v___x_3574_ == 0)
{
lean_dec_ref(v___x_3573_);
lean_dec_ref(v_arg_3572_);
lean_dec_ref(v_self_3569_);
lean_del_object(v___x_3562_);
lean_dec_ref(v_e_3544_);
goto v___jp_3556_;
}
else
{
lean_object* v_arg_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v_arg_3575_ = lean_ctor_get(v___x_3573_, 1);
lean_inc_ref(v_arg_3575_);
v___x_3576_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3573_);
v___x_3577_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__2, &l_Lean_Meta_Grind_propagateDecideDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__2);
v___x_3578_ = l_Lean_Expr_isConstOf(v___x_3576_, v___x_3577_);
lean_dec_ref(v___x_3576_);
if (v___x_3578_ == 0)
{
lean_dec_ref(v_arg_3575_);
lean_dec_ref(v_arg_3572_);
lean_dec_ref(v_self_3569_);
lean_del_object(v___x_3562_);
lean_dec_ref(v_e_3544_);
goto v___jp_3556_;
}
else
{
lean_object* v___x_3579_; uint8_t v___x_3580_; 
v___x_3579_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__4, &l_Lean_Meta_Grind_propagateDecideDown___closed__4_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__4);
v___x_3580_ = l_Lean_Expr_isConstOf(v_self_3569_, v___x_3579_);
if (v___x_3580_ == 0)
{
lean_object* v___x_3581_; uint8_t v___x_3582_; 
v___x_3581_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__6, &l_Lean_Meta_Grind_propagateDecideDown___closed__6_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__6);
v___x_3582_ = l_Lean_Expr_isConstOf(v_self_3569_, v___x_3581_);
if (v___x_3582_ == 0)
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
lean_dec_ref(v_arg_3575_);
lean_dec_ref(v_arg_3572_);
lean_dec_ref(v_self_3569_);
lean_dec_ref(v_e_3544_);
v___x_3583_ = lean_box(0);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3583_);
v___x_3585_ = v___x_3562_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
else
{
lean_object* v___x_3587_; 
lean_del_object(v___x_3562_);
lean_inc(v_a_3554_);
lean_inc_ref(v_a_3553_);
lean_inc(v_a_3552_);
lean_inc_ref(v_a_3551_);
lean_inc(v_a_3550_);
lean_inc_ref(v_a_3549_);
lean_inc(v_a_3548_);
lean_inc_ref(v_a_3547_);
lean_inc(v_a_3546_);
lean_inc(v_a_3545_);
v___x_3587_ = lean_grind_mk_eq_proof(v_e_3544_, v_self_3569_, v_a_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref(v___x_3587_);
v___x_3589_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__9, &l_Lean_Meta_Grind_propagateDecideDown___closed__9_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__9);
lean_inc_ref(v_arg_3575_);
v___x_3590_ = l_Lean_mkApp3(v___x_3589_, v_arg_3575_, v_arg_3572_, v_a_3588_);
v___x_3591_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_arg_3575_, v___x_3590_, v_a_3545_, v_a_3547_, v_a_3549_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
return v___x_3591_;
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
lean_dec_ref(v_arg_3575_);
lean_dec_ref(v_arg_3572_);
v_a_3592_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v___x_3587_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3587_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
else
{
lean_object* v___x_3600_; 
lean_del_object(v___x_3562_);
lean_inc(v_a_3554_);
lean_inc_ref(v_a_3553_);
lean_inc(v_a_3552_);
lean_inc_ref(v_a_3551_);
lean_inc(v_a_3550_);
lean_inc_ref(v_a_3549_);
lean_inc(v_a_3548_);
lean_inc_ref(v_a_3547_);
lean_inc(v_a_3546_);
lean_inc(v_a_3545_);
v___x_3600_ = lean_grind_mk_eq_proof(v_e_3544_, v_self_3569_, v_a_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref(v___x_3600_);
v___x_3602_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__12, &l_Lean_Meta_Grind_propagateDecideDown___closed__12_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__12);
lean_inc_ref(v_arg_3575_);
v___x_3603_ = l_Lean_mkApp3(v___x_3602_, v_arg_3575_, v_arg_3572_, v_a_3601_);
v___x_3604_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_arg_3575_, v___x_3603_, v_a_3545_, v_a_3547_, v_a_3549_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
return v___x_3604_;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
lean_dec_ref(v_arg_3575_);
lean_dec_ref(v_arg_3572_);
v_a_3605_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3600_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3600_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
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
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
lean_dec_ref(v_e_3544_);
v_a_3614_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3559_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3559_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
v___jp_3556_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = lean_box(0);
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideDown___boxed(lean_object* v_e_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_, lean_object* v_a_3631_, lean_object* v_a_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Lean_Meta_Grind_propagateDecideDown(v_e_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_, v_a_3628_, v_a_3629_, v_a_3630_, v_a_3631_, v_a_3632_);
lean_dec(v_a_3632_);
lean_dec_ref(v_a_3631_);
lean_dec(v_a_3630_);
lean_dec_ref(v_a_3629_);
lean_dec(v_a_3628_);
lean_dec_ref(v_a_3627_);
lean_dec(v_a_3626_);
lean_dec_ref(v_a_3625_);
lean_dec(v_a_3624_);
lean_dec(v_a_3623_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3636_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__2, &l_Lean_Meta_Grind_propagateDecideDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__2);
v___x_3637_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateDecideDown___boxed), 12, 0);
v___x_3638_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_3636_, v___x_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8____boxed(lean_object* v_a_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8_();
return v_res_3640_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__0(void){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_mk_string_unchecked("decide_eq_false", 15, 15);
return v___x_3641_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__1(void){
_start:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3642_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__0, &l_Lean_Meta_Grind_propagateDecideUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__0);
v___x_3643_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3644_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3645_ = l_Lean_Name_mkStr3(v___x_3644_, v___x_3643_, v___x_3642_);
return v___x_3645_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__2(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3646_ = lean_box(0);
v___x_3647_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__1, &l_Lean_Meta_Grind_propagateDecideUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__1);
v___x_3648_ = l_Lean_mkConst(v___x_3647_, v___x_3646_);
return v___x_3648_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__3(void){
_start:
{
lean_object* v___x_3649_; 
v___x_3649_ = lean_mk_string_unchecked("decide_eq_true", 14, 14);
return v___x_3649_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__4(void){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3650_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__3, &l_Lean_Meta_Grind_propagateDecideUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__3);
v___x_3651_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3652_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3653_ = l_Lean_Name_mkStr3(v___x_3652_, v___x_3651_, v___x_3650_);
return v___x_3653_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateDecideUp___closed__5(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = lean_box(0);
v___x_3655_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__4, &l_Lean_Meta_Grind_propagateDecideUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__4);
v___x_3656_ = l_Lean_mkConst(v___x_3655_, v___x_3654_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideUp(lean_object* v_e_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v___x_3672_; uint8_t v___x_3673_; 
lean_inc_ref(v_e_3657_);
v___x_3672_ = l_Lean_Expr_cleanupAnnotations(v_e_3657_);
v___x_3673_ = l_Lean_Expr_isApp(v___x_3672_);
if (v___x_3673_ == 0)
{
lean_dec_ref(v___x_3672_);
lean_dec_ref(v_e_3657_);
goto v___jp_3669_;
}
else
{
lean_object* v_arg_3674_; lean_object* v___x_3675_; uint8_t v___x_3676_; 
v_arg_3674_ = lean_ctor_get(v___x_3672_, 1);
lean_inc_ref(v_arg_3674_);
v___x_3675_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3672_);
v___x_3676_ = l_Lean_Expr_isApp(v___x_3675_);
if (v___x_3676_ == 0)
{
lean_dec_ref(v___x_3675_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
goto v___jp_3669_;
}
else
{
lean_object* v_arg_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; 
v_arg_3677_ = lean_ctor_get(v___x_3675_, 1);
lean_inc_ref(v_arg_3677_);
v___x_3678_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3675_);
v___x_3679_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__2, &l_Lean_Meta_Grind_propagateDecideDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__2);
v___x_3680_ = l_Lean_Expr_isConstOf(v___x_3678_, v___x_3679_);
lean_dec_ref(v___x_3678_);
if (v___x_3680_ == 0)
{
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
goto v___jp_3669_;
}
else
{
lean_object* v___x_3681_; 
lean_inc_ref(v_arg_3677_);
v___x_3681_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_arg_3677_, v_a_3658_, v_a_3662_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; uint8_t v___x_3683_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref(v___x_3681_);
v___x_3683_ = lean_unbox(v_a_3682_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; 
lean_inc_ref(v_arg_3677_);
v___x_3684_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_arg_3677_, v_a_3658_, v_a_3662_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3718_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3687_ = v___x_3684_;
v_isShared_3688_ = v_isSharedCheck_3718_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3684_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3718_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
uint8_t v___x_3689_; 
v___x_3689_ = lean_unbox(v_a_3685_);
lean_dec(v_a_3685_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
lean_dec(v_a_3682_);
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v___x_3690_ = lean_box(0);
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 0, v___x_3690_);
v___x_3692_ = v___x_3687_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
else
{
lean_object* v___x_3694_; 
lean_del_object(v___x_3687_);
v___x_3694_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_3662_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3696_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref(v___x_3694_);
lean_inc_ref(v_arg_3677_);
v___x_3696_ = l_Lean_Meta_Grind_mkEqFalseProof(v_arg_3677_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
lean_inc(v_a_3697_);
lean_dec_ref(v___x_3696_);
v___x_3698_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__2, &l_Lean_Meta_Grind_propagateDecideUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__2);
v___x_3699_ = l_Lean_mkApp3(v___x_3698_, v_arg_3677_, v_arg_3674_, v_a_3697_);
v___x_3700_ = lean_unbox(v_a_3682_);
lean_dec(v_a_3682_);
v___x_3701_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3657_, v_a_3695_, v___x_3699_, v___x_3700_, v_a_3658_, v_a_3660_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
return v___x_3701_;
}
else
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
lean_dec(v_a_3695_);
lean_dec(v_a_3682_);
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3702_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3696_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3696_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_a_3682_);
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3710_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3694_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3694_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec(v_a_3682_);
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3719_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3684_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3684_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
else
{
lean_object* v___x_3727_; 
lean_dec(v_a_3682_);
v___x_3727_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_3662_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v___x_3729_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3728_);
lean_dec_ref(v___x_3727_);
lean_inc_ref(v_arg_3677_);
v___x_3729_ = l_Lean_Meta_Grind_mkEqTrueProof(v_arg_3677_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; lean_object* v___x_3734_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
lean_inc(v_a_3730_);
lean_dec_ref(v___x_3729_);
v___x_3731_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideUp___closed__5, &l_Lean_Meta_Grind_propagateDecideUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateDecideUp___closed__5);
v___x_3732_ = l_Lean_mkApp3(v___x_3731_, v_arg_3677_, v_arg_3674_, v_a_3730_);
v___x_3733_ = 0;
v___x_3734_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3657_, v_a_3728_, v___x_3732_, v___x_3733_, v_a_3658_, v_a_3660_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
return v___x_3734_;
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_a_3728_);
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3735_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3729_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3729_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3743_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3727_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3727_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
lean_dec_ref(v_arg_3677_);
lean_dec_ref(v_arg_3674_);
lean_dec_ref(v_e_3657_);
v_a_3751_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3681_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3681_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
}
}
v___jp_3669_:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = lean_box(0);
v___x_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3670_);
return v___x_3671_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateDecideUp___boxed(lean_object* v_e_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l_Lean_Meta_Grind_propagateDecideUp(v_e_3759_, v_a_3760_, v_a_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
lean_dec(v_a_3769_);
lean_dec_ref(v_a_3768_);
lean_dec(v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec_ref(v_a_3762_);
lean_dec(v_a_3761_);
lean_dec(v_a_3760_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = lean_obj_once(&l_Lean_Meta_Grind_propagateDecideDown___closed__2, &l_Lean_Meta_Grind_propagateDecideDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateDecideDown___closed__2);
v___x_3774_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateDecideUp___boxed), 12, 0);
v___x_3775_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3773_, v___x_3774_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8____boxed(lean_object* v_a_3776_){
_start:
{
lean_object* v_res_3777_; 
v_res_3777_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8_();
return v_res_3777_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__0(void){
_start:
{
lean_object* v___x_3778_; 
v___x_3778_ = lean_mk_string_unchecked("and", 3, 3);
return v___x_3778_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__1(void){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3779_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__0, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__0);
v___x_3780_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3781_ = l_Lean_Name_mkStr2(v___x_3780_, v___x_3779_);
return v___x_3781_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__2(void){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3782_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__4, &l_Lean_Meta_Grind_propagateAndUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__4);
v___x_3783_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3784_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3785_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3786_ = l_Lean_Name_mkStr4(v___x_3785_, v___x_3784_, v___x_3783_, v___x_3782_);
return v___x_3786_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__3(void){
_start:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3787_ = lean_box(0);
v___x_3788_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__2, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__2);
v___x_3789_ = l_Lean_mkConst(v___x_3788_, v___x_3787_);
return v___x_3789_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__4(void){
_start:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3790_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__7, &l_Lean_Meta_Grind_propagateAndUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__7);
v___x_3791_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3792_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3793_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3794_ = l_Lean_Name_mkStr4(v___x_3793_, v___x_3792_, v___x_3791_, v___x_3790_);
return v___x_3794_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__5(void){
_start:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3795_ = lean_box(0);
v___x_3796_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__4, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__4);
v___x_3797_ = l_Lean_mkConst(v___x_3796_, v___x_3795_);
return v___x_3797_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__6(void){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3798_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__10, &l_Lean_Meta_Grind_propagateAndUp___closed__10_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__10);
v___x_3799_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3800_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3801_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3802_ = l_Lean_Name_mkStr4(v___x_3801_, v___x_3800_, v___x_3799_, v___x_3798_);
return v___x_3802_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__7(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3803_ = lean_box(0);
v___x_3804_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__6, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__6);
v___x_3805_ = l_Lean_mkConst(v___x_3804_, v___x_3803_);
return v___x_3805_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__8(void){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3806_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__13, &l_Lean_Meta_Grind_propagateAndUp___closed__13_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__13);
v___x_3807_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3808_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3809_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3810_ = l_Lean_Name_mkStr4(v___x_3809_, v___x_3808_, v___x_3807_, v___x_3806_);
return v___x_3810_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__9(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3811_ = lean_box(0);
v___x_3812_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__8, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__8);
v___x_3813_ = l_Lean_mkConst(v___x_3812_, v___x_3811_);
return v___x_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp(lean_object* v_e_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v___x_3829_; uint8_t v___x_3830_; 
lean_inc_ref(v_e_3814_);
v___x_3829_ = l_Lean_Expr_cleanupAnnotations(v_e_3814_);
v___x_3830_ = l_Lean_Expr_isApp(v___x_3829_);
if (v___x_3830_ == 0)
{
lean_dec_ref(v___x_3829_);
lean_dec_ref(v_e_3814_);
goto v___jp_3826_;
}
else
{
lean_object* v_arg_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; 
v_arg_3831_ = lean_ctor_get(v___x_3829_, 1);
lean_inc_ref(v_arg_3831_);
v___x_3832_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3829_);
v___x_3833_ = l_Lean_Expr_isApp(v___x_3832_);
if (v___x_3833_ == 0)
{
lean_dec_ref(v___x_3832_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
goto v___jp_3826_;
}
else
{
lean_object* v_arg_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; uint8_t v___x_3837_; 
v_arg_3834_ = lean_ctor_get(v___x_3832_, 1);
lean_inc_ref(v_arg_3834_);
v___x_3835_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3832_);
v___x_3836_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__1);
v___x_3837_ = l_Lean_Expr_isConstOf(v___x_3835_, v___x_3836_);
lean_dec_ref(v___x_3835_);
if (v___x_3837_ == 0)
{
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
goto v___jp_3826_;
}
else
{
lean_object* v___x_3838_; 
lean_inc_ref(v_arg_3834_);
v___x_3838_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_3834_, v_a_3815_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; uint8_t v___x_3840_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_a_3839_);
lean_dec_ref(v___x_3838_);
v___x_3840_ = lean_unbox(v_a_3839_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; 
lean_inc_ref(v_arg_3831_);
v___x_3841_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_3831_, v_a_3815_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; uint8_t v___x_3843_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_a_3842_);
lean_dec_ref(v___x_3841_);
v___x_3843_ = lean_unbox(v_a_3842_);
lean_dec(v_a_3842_);
if (v___x_3843_ == 0)
{
lean_object* v___x_3844_; 
lean_dec(v_a_3839_);
lean_inc_ref(v_arg_3834_);
v___x_3844_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_3834_, v_a_3815_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; uint8_t v___x_3846_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
lean_inc(v_a_3845_);
lean_dec_ref(v___x_3844_);
v___x_3846_ = lean_unbox(v_a_3845_);
lean_dec(v_a_3845_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; 
lean_inc_ref(v_arg_3831_);
v___x_3847_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_3831_, v_a_3815_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3847_) == 0)
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3870_; 
v_a_3848_ = lean_ctor_get(v___x_3847_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3847_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3850_ = v___x_3847_;
v_isShared_3851_ = v_isSharedCheck_3870_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3847_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3870_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
uint8_t v___x_3852_; 
v___x_3852_ = lean_unbox(v_a_3848_);
lean_dec(v_a_3848_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v___x_3853_ = lean_box(0);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 0, v___x_3853_);
v___x_3855_ = v___x_3850_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3853_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
else
{
lean_object* v___x_3857_; 
lean_del_object(v___x_3850_);
lean_inc_ref(v_arg_3831_);
v___x_3857_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_3831_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v_a_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
lean_inc(v_a_3858_);
lean_dec_ref(v___x_3857_);
v___x_3859_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__3, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__3);
v___x_3860_ = l_Lean_mkApp3(v___x_3859_, v_arg_3834_, v_arg_3831_, v_a_3858_);
v___x_3861_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_3814_, v___x_3860_, v_a_3815_, v_a_3817_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
return v___x_3861_;
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3862_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3857_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3857_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
}
}
else
{
lean_object* v_a_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3878_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3871_ = lean_ctor_get(v___x_3847_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3847_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3873_ = v___x_3847_;
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_a_3871_);
lean_dec(v___x_3847_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
if (v_isShared_3874_ == 0)
{
v___x_3876_ = v___x_3873_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v_a_3871_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
else
{
lean_object* v___x_3879_; 
lean_inc_ref(v_arg_3834_);
v___x_3879_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_3834_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
lean_inc(v_a_3880_);
lean_dec_ref(v___x_3879_);
v___x_3881_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__5, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__5);
v___x_3882_ = l_Lean_mkApp3(v___x_3881_, v_arg_3834_, v_arg_3831_, v_a_3880_);
v___x_3883_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_3814_, v___x_3882_, v_a_3815_, v_a_3817_, v_a_3819_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
return v___x_3883_;
}
else
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3891_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3884_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3886_ = v___x_3879_;
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v___x_3879_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3889_; 
if (v_isShared_3887_ == 0)
{
v___x_3889_ = v___x_3886_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_a_3884_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
}
else
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3892_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3894_ = v___x_3844_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3844_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3892_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
}
else
{
lean_object* v___x_3900_; 
lean_inc_ref(v_arg_3831_);
v___x_3900_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_3831_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; uint8_t v___x_3904_; lean_object* v___x_3905_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc(v_a_3901_);
lean_dec_ref(v___x_3900_);
v___x_3902_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__7, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__7);
lean_inc_ref(v_arg_3834_);
v___x_3903_ = l_Lean_mkApp3(v___x_3902_, v_arg_3834_, v_arg_3831_, v_a_3901_);
v___x_3904_ = lean_unbox(v_a_3839_);
lean_dec(v_a_3839_);
v___x_3905_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3814_, v_arg_3834_, v___x_3903_, v___x_3904_, v_a_3815_, v_a_3817_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
return v___x_3905_;
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
lean_dec(v_a_3839_);
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3906_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3900_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3900_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_dec(v_a_3839_);
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3914_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3841_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3841_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
else
{
lean_object* v___x_3922_; 
lean_dec(v_a_3839_);
lean_inc_ref(v_arg_3834_);
v___x_3922_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_3834_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; lean_object* v___x_3927_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref(v___x_3922_);
v___x_3924_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__9, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__9);
lean_inc_ref(v_arg_3831_);
v___x_3925_ = l_Lean_mkApp3(v___x_3924_, v_arg_3834_, v_arg_3831_, v_a_3923_);
v___x_3926_ = 0;
v___x_3927_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_3814_, v_arg_3831_, v___x_3925_, v___x_3926_, v_a_3815_, v_a_3817_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
return v___x_3927_;
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3928_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3922_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3922_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
}
else
{
lean_object* v_a_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3943_; 
lean_dec_ref(v_arg_3834_);
lean_dec_ref(v_arg_3831_);
lean_dec_ref(v_e_3814_);
v_a_3936_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3938_ = v___x_3838_;
v_isShared_3939_ = v_isSharedCheck_3943_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_a_3936_);
lean_dec(v___x_3838_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3943_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3941_; 
if (v_isShared_3939_ == 0)
{
v___x_3941_ = v___x_3938_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_a_3936_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
}
}
}
v___jp_3826_:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = lean_box(0);
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
return v___x_3828_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndUp___boxed(lean_object* v_e_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lean_Meta_Grind_propagateBoolAndUp(v_e_3944_, v_a_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_);
lean_dec(v_a_3954_);
lean_dec_ref(v_a_3953_);
lean_dec(v_a_3952_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec_ref(v_a_3949_);
lean_dec(v_a_3948_);
lean_dec_ref(v_a_3947_);
lean_dec(v_a_3946_);
lean_dec(v_a_3945_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__1);
v___x_3959_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolAndUp___boxed), 12, 0);
v___x_3960_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3958_, v___x_3959_);
return v___x_3960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8____boxed(lean_object* v_a_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8_();
return v_res_3962_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__0(void){
_start:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3963_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__0, &l_Lean_Meta_Grind_propagateAndDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__0);
v___x_3964_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3965_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3966_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3967_ = l_Lean_Name_mkStr4(v___x_3966_, v___x_3965_, v___x_3964_, v___x_3963_);
return v___x_3967_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__1(void){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3968_ = lean_box(0);
v___x_3969_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__0, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__0);
v___x_3970_ = l_Lean_mkConst(v___x_3969_, v___x_3968_);
return v___x_3970_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__2(void){
_start:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3971_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndDown___closed__3, &l_Lean_Meta_Grind_propagateAndDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndDown___closed__3);
v___x_3972_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_3973_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_3974_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_3975_ = l_Lean_Name_mkStr4(v___x_3974_, v___x_3973_, v___x_3972_, v___x_3971_);
return v___x_3975_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__3(void){
_start:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3976_ = lean_box(0);
v___x_3977_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__2, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__2);
v___x_3978_ = l_Lean_mkConst(v___x_3977_, v___x_3976_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown(lean_object* v_e_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_){
_start:
{
lean_object* v___x_3994_; 
lean_inc_ref(v_e_3979_);
v___x_3994_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_3979_, v_a_3980_, v_a_3984_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_);
if (lean_obj_tag(v___x_3994_) == 0)
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4029_; 
v_a_3995_ = lean_ctor_get(v___x_3994_, 0);
v_isSharedCheck_4029_ = !lean_is_exclusive(v___x_3994_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_3997_ = v___x_3994_;
v_isShared_3998_ = v_isSharedCheck_4029_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___x_3994_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4029_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
uint8_t v___x_3999_; 
v___x_3999_ = lean_unbox(v_a_3995_);
lean_dec(v_a_3995_);
if (v___x_3999_ == 0)
{
lean_object* v___x_4000_; lean_object* v___x_4002_; 
lean_dec_ref(v_e_3979_);
v___x_4000_ = lean_box(0);
if (v_isShared_3998_ == 0)
{
lean_ctor_set(v___x_3997_, 0, v___x_4000_);
v___x_4002_ = v___x_3997_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v___x_4000_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
else
{
lean_object* v___x_4004_; uint8_t v___x_4005_; 
lean_del_object(v___x_3997_);
lean_inc_ref(v_e_3979_);
v___x_4004_ = l_Lean_Expr_cleanupAnnotations(v_e_3979_);
v___x_4005_ = l_Lean_Expr_isApp(v___x_4004_);
if (v___x_4005_ == 0)
{
lean_dec_ref(v___x_4004_);
lean_dec_ref(v_e_3979_);
goto v___jp_3991_;
}
else
{
lean_object* v_arg_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; 
v_arg_4006_ = lean_ctor_get(v___x_4004_, 1);
lean_inc_ref(v_arg_4006_);
v___x_4007_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4004_);
v___x_4008_ = l_Lean_Expr_isApp(v___x_4007_);
if (v___x_4008_ == 0)
{
lean_dec_ref(v___x_4007_);
lean_dec_ref(v_arg_4006_);
lean_dec_ref(v_e_3979_);
goto v___jp_3991_;
}
else
{
lean_object* v_arg_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; uint8_t v___x_4012_; 
v_arg_4009_ = lean_ctor_get(v___x_4007_, 1);
lean_inc_ref(v_arg_4009_);
v___x_4010_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4007_);
v___x_4011_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__1);
v___x_4012_ = l_Lean_Expr_isConstOf(v___x_4010_, v___x_4011_);
lean_dec_ref(v___x_4010_);
if (v___x_4012_ == 0)
{
lean_dec_ref(v_arg_4009_);
lean_dec_ref(v_arg_4006_);
lean_dec_ref(v_e_3979_);
goto v___jp_3991_;
}
else
{
lean_object* v___x_4013_; 
v___x_4013_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_e_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc_n(v_a_4014_, 2);
lean_dec_ref(v___x_4013_);
v___x_4015_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__1, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__1);
lean_inc_ref(v_arg_4006_);
lean_inc_ref_n(v_arg_4009_, 2);
v___x_4016_ = l_Lean_mkApp3(v___x_4015_, v_arg_4009_, v_arg_4006_, v_a_4014_);
v___x_4017_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_4009_, v___x_4016_, v_a_3980_, v_a_3982_, v_a_3984_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
lean_dec_ref(v___x_4017_);
v___x_4018_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndDown___closed__3, &l_Lean_Meta_Grind_propagateBoolAndDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolAndDown___closed__3);
lean_inc_ref(v_arg_4006_);
v___x_4019_ = l_Lean_mkApp3(v___x_4018_, v_arg_4009_, v_arg_4006_, v_a_4014_);
v___x_4020_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_4006_, v___x_4019_, v_a_3980_, v_a_3982_, v_a_3984_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_);
return v___x_4020_;
}
else
{
lean_dec(v_a_4014_);
lean_dec_ref(v_arg_4009_);
lean_dec_ref(v_arg_4006_);
return v___x_4017_;
}
}
else
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4028_; 
lean_dec_ref(v_arg_4009_);
lean_dec_ref(v_arg_4006_);
v_a_4021_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4023_ = v___x_4013_;
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v___x_4013_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4028_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
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
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4037_; 
lean_dec_ref(v_e_3979_);
v_a_4030_ = lean_ctor_get(v___x_3994_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_3994_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4032_ = v___x_3994_;
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_3994_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_a_4030_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
v___jp_3991_:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3992_ = lean_box(0);
v___x_3993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3992_);
return v___x_3993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolAndDown___boxed(lean_object* v_e_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_){
_start:
{
lean_object* v_res_4050_; 
v_res_4050_ = l_Lean_Meta_Grind_propagateBoolAndDown(v_e_4038_, v_a_4039_, v_a_4040_, v_a_4041_, v_a_4042_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_, v_a_4047_, v_a_4048_);
lean_dec(v_a_4048_);
lean_dec_ref(v_a_4047_);
lean_dec(v_a_4046_);
lean_dec_ref(v_a_4045_);
lean_dec(v_a_4044_);
lean_dec_ref(v_a_4043_);
lean_dec(v_a_4042_);
lean_dec_ref(v_a_4041_);
lean_dec(v_a_4040_);
lean_dec(v_a_4039_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v___x_4052_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolAndUp___closed__1, &l_Lean_Meta_Grind_propagateBoolAndUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolAndUp___closed__1);
v___x_4053_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolAndDown___boxed), 12, 0);
v___x_4054_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4052_, v___x_4053_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8____boxed(lean_object* v_a_4055_){
_start:
{
lean_object* v_res_4056_; 
v_res_4056_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8_();
return v_res_4056_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__0(void){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = lean_mk_string_unchecked("or", 2, 2);
return v___x_4057_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__1(void){
_start:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4058_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__0, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__0);
v___x_4059_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4060_ = l_Lean_Name_mkStr2(v___x_4059_, v___x_4058_);
return v___x_4060_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__2(void){
_start:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4061_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__2, &l_Lean_Meta_Grind_propagateOrUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__2);
v___x_4062_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4063_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4064_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4065_ = l_Lean_Name_mkStr4(v___x_4064_, v___x_4063_, v___x_4062_, v___x_4061_);
return v___x_4065_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__3(void){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4066_ = lean_box(0);
v___x_4067_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__2, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__2);
v___x_4068_ = l_Lean_mkConst(v___x_4067_, v___x_4066_);
return v___x_4068_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__4(void){
_start:
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4069_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__5, &l_Lean_Meta_Grind_propagateOrUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__5);
v___x_4070_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4071_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4072_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4073_ = l_Lean_Name_mkStr4(v___x_4072_, v___x_4071_, v___x_4070_, v___x_4069_);
return v___x_4073_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__5(void){
_start:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4074_ = lean_box(0);
v___x_4075_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__4, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__4);
v___x_4076_ = l_Lean_mkConst(v___x_4075_, v___x_4074_);
return v___x_4076_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__6(void){
_start:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4077_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__8, &l_Lean_Meta_Grind_propagateOrUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__8);
v___x_4078_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4079_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4080_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4081_ = l_Lean_Name_mkStr4(v___x_4080_, v___x_4079_, v___x_4078_, v___x_4077_);
return v___x_4081_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__7(void){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4082_ = lean_box(0);
v___x_4083_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__6, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__6);
v___x_4084_ = l_Lean_mkConst(v___x_4083_, v___x_4082_);
return v___x_4084_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__8(void){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4085_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrUp___closed__11, &l_Lean_Meta_Grind_propagateOrUp___closed__11_once, _init_l_Lean_Meta_Grind_propagateOrUp___closed__11);
v___x_4086_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4087_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4088_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4089_ = l_Lean_Name_mkStr4(v___x_4088_, v___x_4087_, v___x_4086_, v___x_4085_);
return v___x_4089_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__9(void){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4090_ = lean_box(0);
v___x_4091_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__8, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__8);
v___x_4092_ = l_Lean_mkConst(v___x_4091_, v___x_4090_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp(lean_object* v_e_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v___x_4108_; uint8_t v___x_4109_; 
lean_inc_ref(v_e_4093_);
v___x_4108_ = l_Lean_Expr_cleanupAnnotations(v_e_4093_);
v___x_4109_ = l_Lean_Expr_isApp(v___x_4108_);
if (v___x_4109_ == 0)
{
lean_dec_ref(v___x_4108_);
lean_dec_ref(v_e_4093_);
goto v___jp_4105_;
}
else
{
lean_object* v_arg_4110_; lean_object* v___x_4111_; uint8_t v___x_4112_; 
v_arg_4110_ = lean_ctor_get(v___x_4108_, 1);
lean_inc_ref(v_arg_4110_);
v___x_4111_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4108_);
v___x_4112_ = l_Lean_Expr_isApp(v___x_4111_);
if (v___x_4112_ == 0)
{
lean_dec_ref(v___x_4111_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
goto v___jp_4105_;
}
else
{
lean_object* v_arg_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; uint8_t v___x_4116_; 
v_arg_4113_ = lean_ctor_get(v___x_4111_, 1);
lean_inc_ref(v_arg_4113_);
v___x_4114_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4111_);
v___x_4115_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__1);
v___x_4116_ = l_Lean_Expr_isConstOf(v___x_4114_, v___x_4115_);
lean_dec_ref(v___x_4114_);
if (v___x_4116_ == 0)
{
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
goto v___jp_4105_;
}
else
{
lean_object* v___x_4117_; 
lean_inc_ref(v_arg_4113_);
v___x_4117_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4113_, v_a_4094_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v_a_4118_; uint8_t v___x_4119_; 
v_a_4118_ = lean_ctor_get(v___x_4117_, 0);
lean_inc(v_a_4118_);
lean_dec_ref(v___x_4117_);
v___x_4119_ = lean_unbox(v_a_4118_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; 
lean_inc_ref(v_arg_4110_);
v___x_4120_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4110_, v_a_4094_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; uint8_t v___x_4122_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_a_4121_);
lean_dec_ref(v___x_4120_);
v___x_4122_ = lean_unbox(v_a_4121_);
lean_dec(v_a_4121_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; 
lean_dec(v_a_4118_);
lean_inc_ref(v_arg_4113_);
v___x_4123_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4113_, v_a_4094_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; uint8_t v___x_4125_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref(v___x_4123_);
v___x_4125_ = lean_unbox(v_a_4124_);
lean_dec(v_a_4124_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; 
lean_inc_ref(v_arg_4110_);
v___x_4126_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4110_, v_a_4094_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; lean_object* v___x_4129_; uint8_t v_isShared_4130_; uint8_t v_isSharedCheck_4149_; 
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4129_ = v___x_4126_;
v_isShared_4130_ = v_isSharedCheck_4149_;
goto v_resetjp_4128_;
}
else
{
lean_inc(v_a_4127_);
lean_dec(v___x_4126_);
v___x_4129_ = lean_box(0);
v_isShared_4130_ = v_isSharedCheck_4149_;
goto v_resetjp_4128_;
}
v_resetjp_4128_:
{
uint8_t v___x_4131_; 
v___x_4131_ = lean_unbox(v_a_4127_);
lean_dec(v_a_4127_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4132_; lean_object* v___x_4134_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v___x_4132_ = lean_box(0);
if (v_isShared_4130_ == 0)
{
lean_ctor_set(v___x_4129_, 0, v___x_4132_);
v___x_4134_ = v___x_4129_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v___x_4132_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
else
{
lean_object* v___x_4136_; 
lean_del_object(v___x_4129_);
lean_inc_ref(v_arg_4110_);
v___x_4136_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4110_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_object* v_a_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
v_a_4137_ = lean_ctor_get(v___x_4136_, 0);
lean_inc(v_a_4137_);
lean_dec_ref(v___x_4136_);
v___x_4138_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__3, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__3);
v___x_4139_ = l_Lean_mkApp3(v___x_4138_, v_arg_4113_, v_arg_4110_, v_a_4137_);
v___x_4140_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4093_, v___x_4139_, v_a_4094_, v_a_4096_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
return v___x_4140_;
}
else
{
lean_object* v_a_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4148_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4141_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4143_ = v___x_4136_;
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_a_4141_);
lean_dec(v___x_4136_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4146_; 
if (v_isShared_4144_ == 0)
{
v___x_4146_ = v___x_4143_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4141_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
}
}
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4150_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_4126_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4126_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
return v___x_4155_;
}
}
}
}
else
{
lean_object* v___x_4158_; 
lean_inc_ref(v_arg_4113_);
v___x_4158_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4113_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref(v___x_4158_);
v___x_4160_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__5, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__5);
v___x_4161_ = l_Lean_mkApp3(v___x_4160_, v_arg_4113_, v_arg_4110_, v_a_4159_);
v___x_4162_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4093_, v___x_4161_, v_a_4094_, v_a_4096_, v_a_4098_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
return v___x_4162_;
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4170_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4163_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4165_ = v___x_4158_;
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_a_4163_);
lean_dec(v___x_4158_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4168_; 
if (v_isShared_4166_ == 0)
{
v___x_4168_ = v___x_4165_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4163_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4178_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4171_ = lean_ctor_get(v___x_4123_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4173_ = v___x_4123_;
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___x_4123_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4178_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
else
{
lean_object* v___x_4179_; 
lean_inc_ref(v_arg_4110_);
v___x_4179_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4110_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v_a_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; lean_object* v___x_4184_; 
v_a_4180_ = lean_ctor_get(v___x_4179_, 0);
lean_inc(v_a_4180_);
lean_dec_ref(v___x_4179_);
v___x_4181_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__7, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__7);
lean_inc_ref(v_arg_4113_);
v___x_4182_ = l_Lean_mkApp3(v___x_4181_, v_arg_4113_, v_arg_4110_, v_a_4180_);
v___x_4183_ = lean_unbox(v_a_4118_);
lean_dec(v_a_4118_);
v___x_4184_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4093_, v_arg_4113_, v___x_4182_, v___x_4183_, v_a_4094_, v_a_4096_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
return v___x_4184_;
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec(v_a_4118_);
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4185_ = lean_ctor_get(v___x_4179_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4179_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4179_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec(v_a_4118_);
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4193_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4120_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4120_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
else
{
lean_object* v___x_4201_; 
lean_dec(v_a_4118_);
lean_inc_ref(v_arg_4113_);
v___x_4201_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4113_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; uint8_t v___x_4205_; lean_object* v___x_4206_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4202_);
lean_dec_ref(v___x_4201_);
v___x_4203_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__9, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__9_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__9);
lean_inc_ref(v_arg_4110_);
v___x_4204_ = l_Lean_mkApp3(v___x_4203_, v_arg_4113_, v_arg_4110_, v_a_4202_);
v___x_4205_ = 0;
v___x_4206_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_4093_, v_arg_4110_, v___x_4204_, v___x_4205_, v_a_4094_, v_a_4096_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_);
return v___x_4206_;
}
else
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4207_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4201_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4201_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
}
else
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
lean_dec_ref(v_arg_4113_);
lean_dec_ref(v_arg_4110_);
lean_dec_ref(v_e_4093_);
v_a_4215_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___x_4117_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4117_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
}
}
}
v___jp_4105_:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4106_ = lean_box(0);
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrUp___boxed(lean_object* v_e_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Lean_Meta_Grind_propagateBoolOrUp(v_e_4223_, v_a_4224_, v_a_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_);
lean_dec(v_a_4233_);
lean_dec_ref(v_a_4232_);
lean_dec(v_a_4231_);
lean_dec_ref(v_a_4230_);
lean_dec(v_a_4229_);
lean_dec_ref(v_a_4228_);
lean_dec(v_a_4227_);
lean_dec_ref(v_a_4226_);
lean_dec(v_a_4225_);
lean_dec(v_a_4224_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4237_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__1);
v___x_4238_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolOrUp___boxed), 12, 0);
v___x_4239_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_4237_, v___x_4238_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8____boxed(lean_object* v_a_4240_){
_start:
{
lean_object* v_res_4241_; 
v_res_4241_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8_();
return v_res_4241_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__0(void){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; 
v___x_4242_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__0, &l_Lean_Meta_Grind_propagateOrDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__0);
v___x_4243_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4244_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4245_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4246_ = l_Lean_Name_mkStr4(v___x_4245_, v___x_4244_, v___x_4243_, v___x_4242_);
return v___x_4246_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__1(void){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; 
v___x_4247_ = lean_box(0);
v___x_4248_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__0, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__0);
v___x_4249_ = l_Lean_mkConst(v___x_4248_, v___x_4247_);
return v___x_4249_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__2(void){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; 
v___x_4250_ = lean_obj_once(&l_Lean_Meta_Grind_propagateOrDown___closed__3, &l_Lean_Meta_Grind_propagateOrDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateOrDown___closed__3);
v___x_4251_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4252_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4253_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4254_ = l_Lean_Name_mkStr4(v___x_4253_, v___x_4252_, v___x_4251_, v___x_4250_);
return v___x_4254_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__3(void){
_start:
{
lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4255_ = lean_box(0);
v___x_4256_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__2, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__2);
v___x_4257_ = l_Lean_mkConst(v___x_4256_, v___x_4255_);
return v___x_4257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown(lean_object* v_e_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v___x_4273_; 
lean_inc_ref(v_e_4258_);
v___x_4273_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_4258_, v_a_4259_, v_a_4263_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_);
if (lean_obj_tag(v___x_4273_) == 0)
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4308_; 
v_a_4274_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4308_ == 0)
{
v___x_4276_ = v___x_4273_;
v_isShared_4277_ = v_isSharedCheck_4308_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4273_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4308_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
uint8_t v___x_4278_; 
v___x_4278_ = lean_unbox(v_a_4274_);
lean_dec(v_a_4274_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; lean_object* v___x_4281_; 
lean_dec_ref(v_e_4258_);
v___x_4279_ = lean_box(0);
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 0, v___x_4279_);
v___x_4281_ = v___x_4276_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v___x_4279_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
else
{
lean_object* v___x_4283_; uint8_t v___x_4284_; 
lean_del_object(v___x_4276_);
lean_inc_ref(v_e_4258_);
v___x_4283_ = l_Lean_Expr_cleanupAnnotations(v_e_4258_);
v___x_4284_ = l_Lean_Expr_isApp(v___x_4283_);
if (v___x_4284_ == 0)
{
lean_dec_ref(v___x_4283_);
lean_dec_ref(v_e_4258_);
goto v___jp_4270_;
}
else
{
lean_object* v_arg_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; 
v_arg_4285_ = lean_ctor_get(v___x_4283_, 1);
lean_inc_ref(v_arg_4285_);
v___x_4286_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4283_);
v___x_4287_ = l_Lean_Expr_isApp(v___x_4286_);
if (v___x_4287_ == 0)
{
lean_dec_ref(v___x_4286_);
lean_dec_ref(v_arg_4285_);
lean_dec_ref(v_e_4258_);
goto v___jp_4270_;
}
else
{
lean_object* v_arg_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; uint8_t v___x_4291_; 
v_arg_4288_ = lean_ctor_get(v___x_4286_, 1);
lean_inc_ref(v_arg_4288_);
v___x_4289_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4286_);
v___x_4290_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__1);
v___x_4291_ = l_Lean_Expr_isConstOf(v___x_4289_, v___x_4290_);
lean_dec_ref(v___x_4289_);
if (v___x_4291_ == 0)
{
lean_dec_ref(v_arg_4288_);
lean_dec_ref(v_arg_4285_);
lean_dec_ref(v_e_4258_);
goto v___jp_4270_;
}
else
{
lean_object* v___x_4292_; 
v___x_4292_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_e_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_);
if (lean_obj_tag(v___x_4292_) == 0)
{
lean_object* v_a_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v_a_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc_n(v_a_4293_, 2);
lean_dec_ref(v___x_4292_);
v___x_4294_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__1, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__1);
lean_inc_ref(v_arg_4285_);
lean_inc_ref_n(v_arg_4288_, 2);
v___x_4295_ = l_Lean_mkApp3(v___x_4294_, v_arg_4288_, v_arg_4285_, v_a_4293_);
v___x_4296_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_4288_, v___x_4295_, v_a_4259_, v_a_4261_, v_a_4263_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_);
if (lean_obj_tag(v___x_4296_) == 0)
{
lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
lean_dec_ref(v___x_4296_);
v___x_4297_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrDown___closed__3, &l_Lean_Meta_Grind_propagateBoolOrDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolOrDown___closed__3);
lean_inc_ref(v_arg_4285_);
v___x_4298_ = l_Lean_mkApp3(v___x_4297_, v_arg_4288_, v_arg_4285_, v_a_4293_);
v___x_4299_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_4285_, v___x_4298_, v_a_4259_, v_a_4261_, v_a_4263_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_);
return v___x_4299_;
}
else
{
lean_dec(v_a_4293_);
lean_dec_ref(v_arg_4288_);
lean_dec_ref(v_arg_4285_);
return v___x_4296_;
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
lean_dec_ref(v_arg_4288_);
lean_dec_ref(v_arg_4285_);
v_a_4300_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4292_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4292_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
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
lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4316_; 
lean_dec_ref(v_e_4258_);
v_a_4309_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4311_ = v___x_4273_;
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_4273_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4314_; 
if (v_isShared_4312_ == 0)
{
v___x_4314_ = v___x_4311_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_a_4309_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
v___jp_4270_:
{
lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4271_ = lean_box(0);
v___x_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4271_);
return v___x_4272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolOrDown___boxed(lean_object* v_e_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_){
_start:
{
lean_object* v_res_4329_; 
v_res_4329_ = l_Lean_Meta_Grind_propagateBoolOrDown(v_e_4317_, v_a_4318_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_, v_a_4327_);
lean_dec(v_a_4327_);
lean_dec_ref(v_a_4326_);
lean_dec(v_a_4325_);
lean_dec_ref(v_a_4324_);
lean_dec(v_a_4323_);
lean_dec_ref(v_a_4322_);
lean_dec(v_a_4321_);
lean_dec_ref(v_a_4320_);
lean_dec(v_a_4319_);
lean_dec(v_a_4318_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; 
v___x_4331_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolOrUp___closed__1, &l_Lean_Meta_Grind_propagateBoolOrUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolOrUp___closed__1);
v___x_4332_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolOrDown___boxed), 12, 0);
v___x_4333_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4331_, v___x_4332_);
return v___x_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8____boxed(lean_object* v_a_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8_();
return v_res_4335_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__0(void){
_start:
{
lean_object* v___x_4336_; 
v___x_4336_ = lean_mk_string_unchecked("not", 3, 3);
return v___x_4336_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__1(void){
_start:
{
lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; 
v___x_4337_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__0, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__0);
v___x_4338_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4339_ = l_Lean_Name_mkStr2(v___x_4338_, v___x_4337_);
return v___x_4339_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__2(void){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4340_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__2, &l_Lean_Meta_Grind_propagateNotUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__2);
v___x_4341_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4342_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4343_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4344_ = l_Lean_Name_mkStr4(v___x_4343_, v___x_4342_, v___x_4341_, v___x_4340_);
return v___x_4344_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3(void){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4345_ = lean_box(0);
v___x_4346_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__2, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__2);
v___x_4347_ = l_Lean_mkConst(v___x_4346_, v___x_4345_);
return v___x_4347_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__4(void){
_start:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4348_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__5, &l_Lean_Meta_Grind_propagateNotUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__5);
v___x_4349_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4350_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4351_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4352_ = l_Lean_Name_mkStr4(v___x_4351_, v___x_4350_, v___x_4349_, v___x_4348_);
return v___x_4352_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__5(void){
_start:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___x_4353_ = lean_box(0);
v___x_4354_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__4, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__4_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__4);
v___x_4355_ = l_Lean_mkConst(v___x_4354_, v___x_4353_);
return v___x_4355_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__6(void){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4356_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotUp___closed__8, &l_Lean_Meta_Grind_propagateNotUp___closed__8_once, _init_l_Lean_Meta_Grind_propagateNotUp___closed__8);
v___x_4357_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4358_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4359_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4360_ = l_Lean_Name_mkStr4(v___x_4359_, v___x_4358_, v___x_4357_, v___x_4356_);
return v___x_4360_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__7(void){
_start:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4361_ = lean_box(0);
v___x_4362_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__6, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__6_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__6);
v___x_4363_ = l_Lean_mkConst(v___x_4362_, v___x_4361_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp(lean_object* v_e_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v___x_4379_; uint8_t v___x_4380_; 
lean_inc_ref(v_e_4364_);
v___x_4379_ = l_Lean_Expr_cleanupAnnotations(v_e_4364_);
v___x_4380_ = l_Lean_Expr_isApp(v___x_4379_);
if (v___x_4380_ == 0)
{
lean_dec_ref(v___x_4379_);
lean_dec_ref(v_e_4364_);
goto v___jp_4376_;
}
else
{
lean_object* v_arg_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; uint8_t v___x_4384_; 
v_arg_4381_ = lean_ctor_get(v___x_4379_, 1);
lean_inc_ref(v_arg_4381_);
v___x_4382_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4379_);
v___x_4383_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__1);
v___x_4384_ = l_Lean_Expr_isConstOf(v___x_4382_, v___x_4383_);
lean_dec_ref(v___x_4382_);
if (v___x_4384_ == 0)
{
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
goto v___jp_4376_;
}
else
{
lean_object* v___x_4385_; 
lean_inc_ref(v_arg_4381_);
v___x_4385_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_arg_4381_, v_a_4365_, v_a_4369_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v_a_4386_; uint8_t v___x_4387_; 
v_a_4386_ = lean_ctor_get(v___x_4385_, 0);
lean_inc(v_a_4386_);
lean_dec_ref(v___x_4385_);
v___x_4387_ = lean_unbox(v_a_4386_);
lean_dec(v_a_4386_);
if (v___x_4387_ == 0)
{
lean_object* v___x_4388_; 
lean_inc_ref(v_arg_4381_);
v___x_4388_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_arg_4381_, v_a_4365_, v_a_4369_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v_a_4389_; uint8_t v___x_4390_; 
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc(v_a_4389_);
lean_dec_ref(v___x_4388_);
v___x_4390_ = lean_unbox(v_a_4389_);
lean_dec(v_a_4389_);
if (v___x_4390_ == 0)
{
lean_object* v___x_4391_; 
v___x_4391_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_4364_, v_arg_4381_, v_a_4365_, v_a_4374_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4394_; uint8_t v_isShared_4395_; uint8_t v_isSharedCheck_4414_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4394_ = v___x_4391_;
v_isShared_4395_ = v_isSharedCheck_4414_;
goto v_resetjp_4393_;
}
else
{
lean_inc(v_a_4392_);
lean_dec(v___x_4391_);
v___x_4394_ = lean_box(0);
v_isShared_4395_ = v_isSharedCheck_4414_;
goto v_resetjp_4393_;
}
v_resetjp_4393_:
{
uint8_t v___x_4396_; 
v___x_4396_ = lean_unbox(v_a_4392_);
lean_dec(v_a_4392_);
if (v___x_4396_ == 0)
{
lean_object* v___x_4397_; lean_object* v___x_4399_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v___x_4397_ = lean_box(0);
if (v_isShared_4395_ == 0)
{
lean_ctor_set(v___x_4394_, 0, v___x_4397_);
v___x_4399_ = v___x_4394_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v___x_4397_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
else
{
lean_object* v___x_4401_; 
lean_del_object(v___x_4394_);
lean_inc(v_a_4374_);
lean_inc_ref(v_a_4373_);
lean_inc(v_a_4372_);
lean_inc_ref(v_a_4371_);
lean_inc(v_a_4370_);
lean_inc_ref(v_a_4369_);
lean_inc(v_a_4368_);
lean_inc_ref(v_a_4367_);
lean_inc(v_a_4366_);
lean_inc(v_a_4365_);
lean_inc_ref(v_arg_4381_);
v___x_4401_ = lean_grind_mk_eq_proof(v_e_4364_, v_arg_4381_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4401_) == 0)
{
lean_object* v_a_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v_a_4402_ = lean_ctor_get(v___x_4401_, 0);
lean_inc(v_a_4402_);
lean_dec_ref(v___x_4401_);
v___x_4403_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__3, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3);
v___x_4404_ = l_Lean_mkAppB(v___x_4403_, v_arg_4381_, v_a_4402_);
v___x_4405_ = l_Lean_Meta_Grind_closeGoal(v___x_4404_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
return v___x_4405_;
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec_ref(v_arg_4381_);
v_a_4406_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4401_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4401_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
}
}
else
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4422_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v_a_4415_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4417_ = v___x_4391_;
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4391_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4420_; 
if (v_isShared_4418_ == 0)
{
v___x_4420_ = v___x_4417_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4415_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
else
{
lean_object* v___x_4423_; 
lean_inc_ref(v_arg_4381_);
v___x_4423_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_arg_4381_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v_a_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; 
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4423_);
v___x_4425_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__5, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__5_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__5);
v___x_4426_ = l_Lean_mkAppB(v___x_4425_, v_arg_4381_, v_a_4424_);
v___x_4427_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_e_4364_, v___x_4426_, v_a_4365_, v_a_4367_, v_a_4369_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
return v___x_4427_;
}
else
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4435_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v_a_4428_ = lean_ctor_get(v___x_4423_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4423_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4430_ = v___x_4423_;
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4423_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4433_; 
if (v_isShared_4431_ == 0)
{
v___x_4433_ = v___x_4430_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4428_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
}
}
}
else
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4443_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v_a_4436_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4438_ = v___x_4388_;
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4388_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4441_; 
if (v_isShared_4439_ == 0)
{
v___x_4441_ = v___x_4438_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_a_4436_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
}
}
else
{
lean_object* v___x_4444_; 
lean_inc_ref(v_arg_4381_);
v___x_4444_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_arg_4381_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref(v___x_4444_);
v___x_4446_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__7, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__7_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__7);
v___x_4447_ = l_Lean_mkAppB(v___x_4446_, v_arg_4381_, v_a_4445_);
v___x_4448_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_e_4364_, v___x_4447_, v_a_4365_, v_a_4367_, v_a_4369_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
return v___x_4448_;
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v_a_4449_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4444_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4444_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_dec_ref(v_arg_4381_);
lean_dec_ref(v_e_4364_);
v_a_4457_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4385_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4385_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
v___jp_4376_:
{
lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4377_ = lean_box(0);
v___x_4378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4377_);
return v___x_4378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotUp___boxed(lean_object* v_e_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_){
_start:
{
lean_object* v_res_4477_; 
v_res_4477_ = l_Lean_Meta_Grind_propagateBoolNotUp(v_e_4465_, v_a_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v_a_4475_);
lean_dec(v_a_4475_);
lean_dec_ref(v_a_4474_);
lean_dec(v_a_4473_);
lean_dec_ref(v_a_4472_);
lean_dec(v_a_4471_);
lean_dec_ref(v_a_4470_);
lean_dec(v_a_4469_);
lean_dec_ref(v_a_4468_);
lean_dec(v_a_4467_);
lean_dec(v_a_4466_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4479_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__1);
v___x_4480_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolNotUp___boxed), 12, 0);
v___x_4481_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_4479_, v___x_4480_);
return v___x_4481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8____boxed(lean_object* v_a_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8_();
return v_res_4483_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__0(void){
_start:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4484_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__0, &l_Lean_Meta_Grind_propagateNotDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__0);
v___x_4485_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4486_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4487_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4488_ = l_Lean_Name_mkStr4(v___x_4487_, v___x_4486_, v___x_4485_, v___x_4484_);
return v___x_4488_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__1(void){
_start:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4489_ = lean_box(0);
v___x_4490_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__0, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__0);
v___x_4491_ = l_Lean_mkConst(v___x_4490_, v___x_4489_);
return v___x_4491_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__2(void){
_start:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4492_ = lean_obj_once(&l_Lean_Meta_Grind_propagateNotDown___closed__3, &l_Lean_Meta_Grind_propagateNotDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateNotDown___closed__3);
v___x_4493_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolDiseq___closed__0, &l_Lean_Meta_Grind_propagateBoolDiseq___closed__0_once, _init_l_Lean_Meta_Grind_propagateBoolDiseq___closed__0);
v___x_4494_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__3, &l_Lean_Meta_Grind_propagateAndUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__3);
v___x_4495_ = lean_obj_once(&l_Lean_Meta_Grind_propagateAndUp___closed__2, &l_Lean_Meta_Grind_propagateAndUp___closed__2_once, _init_l_Lean_Meta_Grind_propagateAndUp___closed__2);
v___x_4496_ = l_Lean_Name_mkStr4(v___x_4495_, v___x_4494_, v___x_4493_, v___x_4492_);
return v___x_4496_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__3(void){
_start:
{
lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4497_ = lean_box(0);
v___x_4498_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__2, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__2_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__2);
v___x_4499_ = l_Lean_mkConst(v___x_4498_, v___x_4497_);
return v___x_4499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown(lean_object* v_e_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_){
_start:
{
lean_object* v___x_4515_; uint8_t v___x_4516_; 
lean_inc_ref(v_e_4500_);
v___x_4515_ = l_Lean_Expr_cleanupAnnotations(v_e_4500_);
v___x_4516_ = l_Lean_Expr_isApp(v___x_4515_);
if (v___x_4516_ == 0)
{
lean_dec_ref(v___x_4515_);
lean_dec_ref(v_e_4500_);
goto v___jp_4512_;
}
else
{
lean_object* v_arg_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; uint8_t v___x_4520_; 
v_arg_4517_ = lean_ctor_get(v___x_4515_, 1);
lean_inc_ref(v_arg_4517_);
v___x_4518_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4515_);
v___x_4519_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__1);
v___x_4520_ = l_Lean_Expr_isConstOf(v___x_4518_, v___x_4519_);
lean_dec_ref(v___x_4518_);
if (v___x_4520_ == 0)
{
lean_dec_ref(v_arg_4517_);
lean_dec_ref(v_e_4500_);
goto v___jp_4512_;
}
else
{
lean_object* v___x_4521_; 
lean_inc_ref(v_e_4500_);
v___x_4521_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_e_4500_, v_a_4501_, v_a_4505_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4521_) == 0)
{
lean_object* v_a_4522_; uint8_t v___x_4523_; 
v_a_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc(v_a_4522_);
lean_dec_ref(v___x_4521_);
v___x_4523_ = lean_unbox(v_a_4522_);
lean_dec(v_a_4522_);
if (v___x_4523_ == 0)
{
lean_object* v___x_4524_; 
lean_inc_ref(v_e_4500_);
v___x_4524_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_e_4500_, v_a_4501_, v_a_4505_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v_a_4525_; uint8_t v___x_4526_; 
v_a_4525_ = lean_ctor_get(v___x_4524_, 0);
lean_inc(v_a_4525_);
lean_dec_ref(v___x_4524_);
v___x_4526_ = lean_unbox(v_a_4525_);
lean_dec(v_a_4525_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; 
v___x_4527_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_4500_, v_arg_4517_, v_a_4501_, v_a_4510_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4550_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4530_ = v___x_4527_;
v_isShared_4531_ = v_isSharedCheck_4550_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4527_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4550_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
uint8_t v___x_4532_; 
v___x_4532_ = lean_unbox(v_a_4528_);
lean_dec(v_a_4528_);
if (v___x_4532_ == 0)
{
lean_object* v___x_4533_; lean_object* v___x_4535_; 
lean_dec_ref(v_arg_4517_);
lean_dec_ref(v_e_4500_);
v___x_4533_ = lean_box(0);
if (v_isShared_4531_ == 0)
{
lean_ctor_set(v___x_4530_, 0, v___x_4533_);
v___x_4535_ = v___x_4530_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v___x_4533_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
return v___x_4535_;
}
}
else
{
lean_object* v___x_4537_; 
lean_del_object(v___x_4530_);
lean_inc(v_a_4510_);
lean_inc_ref(v_a_4509_);
lean_inc(v_a_4508_);
lean_inc_ref(v_a_4507_);
lean_inc(v_a_4506_);
lean_inc_ref(v_a_4505_);
lean_inc(v_a_4504_);
lean_inc_ref(v_a_4503_);
lean_inc(v_a_4502_);
lean_inc(v_a_4501_);
lean_inc_ref(v_arg_4517_);
v___x_4537_ = lean_grind_mk_eq_proof(v_e_4500_, v_arg_4517_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref(v___x_4537_);
v___x_4539_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__3, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__3);
v___x_4540_ = l_Lean_mkAppB(v___x_4539_, v_arg_4517_, v_a_4538_);
v___x_4541_ = l_Lean_Meta_Grind_closeGoal(v___x_4540_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4541_;
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
lean_dec_ref(v_arg_4517_);
v_a_4542_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4537_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4537_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
}
}
else
{
lean_object* v_a_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
lean_dec_ref(v_arg_4517_);
lean_dec_ref(v_e_4500_);
v_a_4551_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___x_4527_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_a_4551_);
lean_dec(v___x_4527_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
else
{
lean_object* v___x_4559_; 
v___x_4559_ = l_Lean_Meta_Grind_mkEqBoolTrueProof(v_e_4500_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4559_) == 0)
{
lean_object* v_a_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v_a_4560_ = lean_ctor_get(v___x_4559_, 0);
lean_inc(v_a_4560_);
lean_dec_ref(v___x_4559_);
v___x_4561_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__1, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__1);
lean_inc_ref(v_arg_4517_);
v___x_4562_ = l_Lean_mkAppB(v___x_4561_, v_arg_4517_, v_a_4560_);
v___x_4563_ = l_Lean_Meta_Grind_pushEqBoolFalse___redArg(v_arg_4517_, v___x_4562_, v_a_4501_, v_a_4503_, v_a_4505_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4563_;
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4571_; 
lean_dec_ref(v_arg_4517_);
v_a_4564_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4566_ = v___x_4559_;
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4559_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_dec_ref(v_arg_4517_);
lean_dec_ref(v_e_4500_);
v_a_4572_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4524_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4524_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
else
{
lean_object* v___x_4580_; 
v___x_4580_ = l_Lean_Meta_Grind_mkEqBoolFalseProof(v_e_4500_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
lean_inc(v_a_4581_);
lean_dec_ref(v___x_4580_);
v___x_4582_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotDown___closed__3, &l_Lean_Meta_Grind_propagateBoolNotDown___closed__3_once, _init_l_Lean_Meta_Grind_propagateBoolNotDown___closed__3);
lean_inc_ref(v_arg_4517_);
v___x_4583_ = l_Lean_mkAppB(v___x_4582_, v_arg_4517_, v_a_4581_);
v___x_4584_ = l_Lean_Meta_Grind_pushEqBoolTrue___redArg(v_arg_4517_, v___x_4583_, v_a_4501_, v_a_4503_, v_a_4505_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_);
return v___x_4584_;
}
else
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4592_; 
lean_dec_ref(v_arg_4517_);
v_a_4585_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4592_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4592_ == 0)
{
v___x_4587_ = v___x_4580_;
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v___x_4580_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v_a_4585_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
}
}
}
else
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4600_; 
lean_dec_ref(v_arg_4517_);
lean_dec_ref(v_e_4500_);
v_a_4593_ = lean_ctor_get(v___x_4521_, 0);
v_isSharedCheck_4600_ = !lean_is_exclusive(v___x_4521_);
if (v_isSharedCheck_4600_ == 0)
{
v___x_4595_ = v___x_4521_;
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4521_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4598_; 
if (v_isShared_4596_ == 0)
{
v___x_4598_ = v___x_4595_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4599_; 
v_reuseFailAlloc_4599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4599_, 0, v_a_4593_);
v___x_4598_ = v_reuseFailAlloc_4599_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
return v___x_4598_;
}
}
}
}
}
v___jp_4512_:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4513_ = lean_box(0);
v___x_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBoolNotDown___boxed(lean_object* v_e_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Lean_Meta_Grind_propagateBoolNotDown(v_e_4601_, v_a_4602_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_, v_a_4607_, v_a_4608_, v_a_4609_, v_a_4610_, v_a_4611_);
lean_dec(v_a_4611_);
lean_dec_ref(v_a_4610_);
lean_dec(v_a_4609_);
lean_dec_ref(v_a_4608_);
lean_dec(v_a_4607_);
lean_dec_ref(v_a_4606_);
lean_dec(v_a_4605_);
lean_dec_ref(v_a_4604_);
lean_dec(v_a_4603_);
lean_dec(v_a_4602_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8_(){
_start:
{
lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4615_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBoolNotUp___closed__1, &l_Lean_Meta_Grind_propagateBoolNotUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateBoolNotUp___closed__1);
v___x_4616_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateBoolNotDown___boxed), 12, 0);
v___x_4617_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4615_, v___x_4616_);
return v___x_4617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8____boxed(lean_object* v_a_4618_){
_start:
{
lean_object* v_res_4619_; 
v_res_4619_ = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8_();
return v_res_4619_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndUp___regBuiltin_Lean_Meta_Grind_propagateAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_508188738____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateAndDown___regBuiltin_Lean_Meta_Grind_propagateAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1129143423____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrUp___regBuiltin_Lean_Meta_Grind_propagateOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_61141499____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateOrDown___regBuiltin_Lean_Meta_Grind_propagateOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_771304471____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotUp___regBuiltin_Lean_Meta_Grind_propagateNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1329655511____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateNotDown___regBuiltin_Lean_Meta_Grind_propagateNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2990596506____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqUp___regBuiltin_Lean_Meta_Grind_propagateEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2587906791____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqDown___regBuiltin_Lean_Meta_Grind_propagateEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2305565578____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqUp___regBuiltin_Lean_Meta_Grind_propagateBEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_78208586____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBEqDown___regBuiltin_Lean_Meta_Grind_propagateBEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3164838226____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateEqMatchDown___regBuiltin_Lean_Meta_Grind_propagateEqMatchDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4139896630____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqDown___regBuiltin_Lean_Meta_Grind_propagateHEqDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1292955371____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateHEqUp___regBuiltin_Lean_Meta_Grind_propagateHEqUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_909926143____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateIte___regBuiltin_Lean_Meta_Grind_propagateIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3335145959____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDIte___regBuiltin_Lean_Meta_Grind_propagateDIte_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_4031602621____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideDown___regBuiltin_Lean_Meta_Grind_propagateDecideDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_580831450____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateDecideUp___regBuiltin_Lean_Meta_Grind_propagateDecideUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_571281532____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndUp___regBuiltin_Lean_Meta_Grind_propagateBoolAndUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3670204931____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolAndDown___regBuiltin_Lean_Meta_Grind_propagateBoolAndDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_750284763____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrUp___regBuiltin_Lean_Meta_Grind_propagateBoolOrUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2740454853____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolOrDown___regBuiltin_Lean_Meta_Grind_propagateBoolOrDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_1232037982____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotUp___regBuiltin_Lean_Meta_Grind_propagateBoolNotUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_2456265176____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Propagate_0__Lean_Meta_Grind_propagateBoolNotDown___regBuiltin_Lean_Meta_Grind_propagateBoolNotDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_Propagate_3788095749____hygCtx___hyg_8_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Propagate(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Propagate(builtin);
}
#ifdef __cplusplus
}
#endif
