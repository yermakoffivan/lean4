// Lean compiler output
// Module: Lean.Meta.Sym.Simp.App
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Tactic.Simp.Types import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.CongrInfo import Init.Omega
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
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM(lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_removeUnnecessaryCasts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpFixedPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpFixedPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_pushResult(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___boxed(lean_object**);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0___boxed(lean_object* v_f_36_, lean_object* v_a_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(v_f_36_, v_a_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(lean_object* v_a_46_, lean_object* v_e_47_, lean_object* v_declName_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Sym_inferType___redArg(v_a_46_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; lean_object* v___x_58_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc_n(v_a_57_, 2);
lean_dec_ref(v___x_56_);
v___x_58_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_57_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; lean_object* v___x_60_; 
v_a_59_ = lean_ctor_get(v___x_58_, 0);
lean_inc(v_a_59_);
lean_dec_ref(v___x_58_);
v___x_60_ = l_Lean_Meta_Sym_inferType___redArg(v_e_47_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
if (lean_obj_tag(v___x_60_) == 0)
{
lean_object* v_a_61_; lean_object* v___x_62_; 
v_a_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc_n(v_a_61_, 2);
lean_dec_ref(v___x_60_);
v___x_62_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_61_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
if (lean_obj_tag(v___x_62_) == 0)
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_75_; 
v_a_63_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_75_ == 0)
{
v___x_65_ = v___x_62_;
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_62_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_75_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_67_ = lean_box(0);
v___x_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_68_, 0, v_a_63_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v_a_59_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = l_Lean_mkConst(v_declName_48_, v___x_69_);
v___x_71_ = l_Lean_mkAppB(v___x_70_, v_a_57_, v_a_61_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_71_);
v___x_73_ = v___x_65_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
lean_dec(v_a_61_);
lean_dec(v_a_59_);
lean_dec(v_a_57_);
lean_dec(v_declName_48_);
v_a_76_ = lean_ctor_get(v___x_62_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_62_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_62_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
else
{
lean_dec(v_a_59_);
lean_dec(v_a_57_);
lean_dec(v_declName_48_);
return v___x_60_;
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
lean_dec(v_a_57_);
lean_dec(v_declName_48_);
lean_dec_ref(v_e_47_);
v_a_84_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_58_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_58_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_dec(v_declName_48_);
lean_dec_ref(v_e_47_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0___boxed(lean_object* v_a_92_, lean_object* v_e_93_, lean_object* v_declName_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(v_a_92_, v_e_93_, v_declName_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
return v_res_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0(void){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = lean_mk_string_unchecked("congrArg", 8, 8);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__0);
v___x_105_ = l_Lean_Name_mkStr1(v___x_104_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("congrFun'", 9, 9);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__2);
v___x_108_ = l_Lean_Name_mkStr1(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_mk_string_unchecked("congr", 5, 5);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__4);
v___x_111_ = l_Lean_Name_mkStr1(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg(lean_object* v_e_112_, lean_object* v_f_113_, lean_object* v_a_114_, lean_object* v_fr_115_, lean_object* v_ar_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
uint8_t v___y_125_; 
if (lean_obj_tag(v_fr_115_) == 0)
{
if (lean_obj_tag(v_ar_116_) == 0)
{
uint8_t v_contextDependent_128_; 
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
lean_dec_ref(v_e_112_);
v_contextDependent_128_ = lean_ctor_get_uint8(v_fr_115_, 1);
lean_dec_ref(v_fr_115_);
if (v_contextDependent_128_ == 0)
{
uint8_t v_contextDependent_129_; 
v_contextDependent_129_ = lean_ctor_get_uint8(v_ar_116_, 1);
lean_dec_ref(v_ar_116_);
v___y_125_ = v_contextDependent_129_;
goto v___jp_124_;
}
else
{
lean_dec_ref(v_ar_116_);
v___y_125_ = v_contextDependent_128_;
goto v___jp_124_;
}
}
else
{
uint8_t v_contextDependent_130_; lean_object* v_e_x27_131_; lean_object* v_proof_132_; uint8_t v_contextDependent_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_172_; 
v_contextDependent_130_ = lean_ctor_get_uint8(v_fr_115_, 1);
lean_dec_ref(v_fr_115_);
v_e_x27_131_ = lean_ctor_get(v_ar_116_, 0);
v_proof_132_ = lean_ctor_get(v_ar_116_, 1);
v_contextDependent_133_ = lean_ctor_get_uint8(v_ar_116_, sizeof(void*)*2 + 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_ar_116_);
if (v_isSharedCheck_172_ == 0)
{
v___x_135_ = v_ar_116_;
v_isShared_136_ = v_isSharedCheck_172_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_proof_132_);
lean_inc(v_e_x27_131_);
lean_dec(v_ar_116_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_172_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; 
lean_inc_ref(v_e_x27_131_);
lean_inc_ref(v_f_113_);
v___x_137_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(v_f_113_, v_e_x27_131_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_a_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_a_138_);
lean_dec_ref(v___x_137_);
v___x_139_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1);
lean_inc_ref(v_a_114_);
v___x_140_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(v_a_114_, v_e_112_, v___x_139_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_155_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_155_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_155_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_155_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; uint8_t v___x_146_; uint8_t v___y_148_; 
v___x_145_ = l_Lean_mkApp4(v_a_141_, v_a_114_, v_e_x27_131_, v_f_113_, v_proof_132_);
v___x_146_ = 0;
if (v_contextDependent_130_ == 0)
{
v___y_148_ = v_contextDependent_133_;
goto v___jp_147_;
}
else
{
v___y_148_ = v_contextDependent_130_;
goto v___jp_147_;
}
v___jp_147_:
{
lean_object* v___x_150_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 1, v___x_145_);
lean_ctor_set(v___x_135_, 0, v_a_138_);
v___x_150_ = v___x_135_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_138_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___x_145_);
v___x_150_ = v_reuseFailAlloc_154_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_152_; 
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*2, v___x_146_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*2 + 1, v___y_148_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 0, v___x_150_);
v___x_152_ = v___x_143_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_150_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec(v_a_138_);
lean_del_object(v___x_135_);
lean_dec_ref(v_proof_132_);
lean_dec_ref(v_e_x27_131_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
v_a_156_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_140_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_140_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_del_object(v___x_135_);
lean_dec_ref(v_proof_132_);
lean_dec_ref(v_e_x27_131_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
lean_dec_ref(v_e_112_);
v_a_164_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_137_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_137_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_ar_116_) == 0)
{
lean_object* v_e_x27_173_; lean_object* v_proof_174_; uint8_t v_contextDependent_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_215_; 
v_e_x27_173_ = lean_ctor_get(v_fr_115_, 0);
v_proof_174_ = lean_ctor_get(v_fr_115_, 1);
v_contextDependent_175_ = lean_ctor_get_uint8(v_fr_115_, sizeof(void*)*2 + 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_fr_115_);
if (v_isSharedCheck_215_ == 0)
{
v___x_177_ = v_fr_115_;
v_isShared_178_ = v_isSharedCheck_215_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_proof_174_);
lean_inc(v_e_x27_173_);
lean_dec(v_fr_115_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_215_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
uint8_t v_contextDependent_179_; lean_object* v___x_180_; 
v_contextDependent_179_ = lean_ctor_get_uint8(v_ar_116_, 1);
lean_dec_ref(v_ar_116_);
lean_inc_ref(v_a_114_);
lean_inc_ref(v_e_x27_173_);
v___x_180_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(v_e_x27_173_, v_a_114_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref(v___x_180_);
v___x_182_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3);
lean_inc_ref(v_a_114_);
v___x_183_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(v_a_114_, v_e_112_, v___x_182_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_198_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_198_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_198_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_198_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; uint8_t v___x_189_; uint8_t v___y_191_; 
v___x_188_ = l_Lean_mkApp4(v_a_184_, v_f_113_, v_e_x27_173_, v_proof_174_, v_a_114_);
v___x_189_ = 0;
if (v_contextDependent_175_ == 0)
{
v___y_191_ = v_contextDependent_179_;
goto v___jp_190_;
}
else
{
v___y_191_ = v_contextDependent_175_;
goto v___jp_190_;
}
v___jp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v___x_188_);
lean_ctor_set(v___x_177_, 0, v_a_181_);
v___x_193_ = v___x_177_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_181_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_188_);
v___x_193_ = v_reuseFailAlloc_197_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*2, v___x_189_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*2 + 1, v___y_191_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_193_);
v___x_195_ = v___x_186_;
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
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_181_);
lean_del_object(v___x_177_);
lean_dec_ref(v_proof_174_);
lean_dec_ref(v_e_x27_173_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
v_a_199_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_183_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_183_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_del_object(v___x_177_);
lean_dec_ref(v_proof_174_);
lean_dec_ref(v_e_x27_173_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
lean_dec_ref(v_e_112_);
v_a_207_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_180_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_180_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
else
{
lean_object* v_e_x27_216_; lean_object* v_proof_217_; uint8_t v_contextDependent_218_; lean_object* v_e_x27_219_; lean_object* v_proof_220_; uint8_t v_contextDependent_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_260_; 
v_e_x27_216_ = lean_ctor_get(v_fr_115_, 0);
lean_inc_ref(v_e_x27_216_);
v_proof_217_ = lean_ctor_get(v_fr_115_, 1);
lean_inc_ref(v_proof_217_);
v_contextDependent_218_ = lean_ctor_get_uint8(v_fr_115_, sizeof(void*)*2 + 1);
lean_dec_ref(v_fr_115_);
v_e_x27_219_ = lean_ctor_get(v_ar_116_, 0);
v_proof_220_ = lean_ctor_get(v_ar_116_, 1);
v_contextDependent_221_ = lean_ctor_get_uint8(v_ar_116_, sizeof(void*)*2 + 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_ar_116_);
if (v_isSharedCheck_260_ == 0)
{
v___x_223_ = v_ar_116_;
v_isShared_224_ = v_isSharedCheck_260_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_proof_220_);
lean_inc(v_e_x27_219_);
lean_dec(v_ar_116_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_260_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; 
lean_inc_ref(v_e_x27_219_);
lean_inc_ref(v_e_x27_216_);
v___x_225_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(v_e_x27_216_, v_e_x27_219_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref(v___x_225_);
v___x_227_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5);
lean_inc_ref(v_a_114_);
v___x_228_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg___lam__0(v_a_114_, v_e_112_, v___x_227_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_243_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_243_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_243_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; uint8_t v___x_234_; uint8_t v___y_236_; 
v___x_233_ = l_Lean_mkApp6(v_a_229_, v_f_113_, v_e_x27_216_, v_a_114_, v_e_x27_219_, v_proof_217_, v_proof_220_);
v___x_234_ = 0;
if (v_contextDependent_218_ == 0)
{
v___y_236_ = v_contextDependent_221_;
goto v___jp_235_;
}
else
{
v___y_236_ = v_contextDependent_218_;
goto v___jp_235_;
}
v___jp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v___x_233_);
lean_ctor_set(v___x_223_, 0, v_a_226_);
v___x_238_ = v___x_223_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_226_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_233_);
v___x_238_ = v_reuseFailAlloc_242_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*2, v___x_234_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*2 + 1, v___y_236_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_238_);
v___x_240_ = v___x_231_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_dec(v_a_226_);
lean_del_object(v___x_223_);
lean_dec_ref(v_proof_220_);
lean_dec_ref(v_e_x27_219_);
lean_dec_ref(v_proof_217_);
lean_dec_ref(v_e_x27_216_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
v_a_244_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_228_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_228_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
lean_del_object(v___x_223_);
lean_dec_ref(v_proof_220_);
lean_dec_ref(v_e_x27_219_);
lean_dec_ref(v_proof_217_);
lean_dec_ref(v_e_x27_216_);
lean_dec_ref(v_a_114_);
lean_dec_ref(v_f_113_);
lean_dec_ref(v_e_112_);
v_a_252_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v___x_225_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_225_);
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
}
}
v___jp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_125_);
v___x_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___redArg___boxed(lean_object* v_e_261_, lean_object* v_f_262_, lean_object* v_a_263_, lean_object* v_fr_264_, lean_object* v_ar_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_261_, v_f_262_, v_a_263_, v_fr_264_, v_ar_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr(lean_object* v_e_274_, lean_object* v_f_275_, lean_object* v_a_276_, lean_object* v_fr_277_, lean_object* v_ar_278_, lean_object* v_x_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_274_, v_f_275_, v_a_276_, v_fr_277_, v_ar_278_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkCongr___boxed(lean_object* v_e_288_, lean_object* v_f_289_, lean_object* v_a_290_, lean_object* v_fr_291_, lean_object* v_ar_292_, lean_object* v_x_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_Meta_Sym_Simp_mkCongr(v_e_288_, v_f_289_, v_a_290_, v_fr_291_, v_ar_292_, v_x_293_, v_a_294_, v_a_295_, v_a_296_, v_a_297_, v_a_298_, v_a_299_);
lean_dec(v_a_299_);
lean_dec_ref(v_a_298_);
lean_dec(v_a_297_);
lean_dec_ref(v_a_296_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0(lean_object* v_msgData_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; lean_object* v_env_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v_mctx_312_; lean_object* v_lctx_313_; lean_object* v_options_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_308_ = lean_st_ref_get(v___y_306_);
v_env_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc_ref(v_env_309_);
lean_dec(v___x_308_);
v___x_310_ = lean_st_ref_get(v___y_306_);
lean_dec(v___x_310_);
v___x_311_ = lean_st_ref_get(v___y_304_);
v_mctx_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc_ref(v_mctx_312_);
lean_dec(v___x_311_);
v_lctx_313_ = lean_ctor_get(v___y_303_, 2);
v_options_314_ = lean_ctor_get(v___y_305_, 2);
lean_inc_ref(v_options_314_);
lean_inc_ref(v_lctx_313_);
v___x_315_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_315_, 0, v_env_309_);
lean_ctor_set(v___x_315_, 1, v_mctx_312_);
lean_ctor_set(v___x_315_, 2, v_lctx_313_);
lean_ctor_set(v___x_315_, 3, v_options_314_);
v___x_316_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v_msgData_302_);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0___boxed(lean_object* v_msgData_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0(v_msgData_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(lean_object* v_msg_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_ref_331_; lean_object* v___x_332_; lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_341_; 
v_ref_331_ = lean_ctor_get(v___y_328_, 5);
v___x_332_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0_spec__0(v_msg_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_341_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_339_; 
lean_inc(v_ref_331_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_ref_331_);
lean_ctor_set(v___x_337_, 1, v_a_333_);
if (v_isShared_336_ == 0)
{
lean_ctor_set_tag(v___x_335_, 1);
lean_ctor_set(v___x_335_, 0, v___x_337_);
v___x_339_ = v___x_335_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg___boxed(lean_object* v_msg_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(v_msg_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_348_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_mk_string_unchecked("congrFun", 8, 8);
return v___x_349_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__0);
v___x_351_ = l_Lean_Name_mkStr1(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2(void){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lean_mk_string_unchecked("failed to build congruence proof, function expected", 51, 51);
return v___x_352_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__2);
v___x_354_ = l_Lean_stringToMessageData(v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(lean_object* v_e_355_, lean_object* v_f_356_, lean_object* v_a_357_, lean_object* v_f_x27_358_, lean_object* v_hf_359_, uint8_t v_done_360_, uint8_t v_contextDependent_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v___x_369_; 
lean_inc_ref(v_f_356_);
v___x_369_ = l_Lean_Meta_Sym_inferType___redArg(v_f_356_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_371_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref(v___x_369_);
v___x_371_ = l_Lean_Meta_whnfD(v_a_370_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref(v___x_371_);
if (lean_obj_tag(v_a_372_) == 7)
{
lean_object* v_binderName_373_; lean_object* v_body_374_; lean_object* v___x_375_; 
v_binderName_373_ = lean_ctor_get(v_a_372_, 0);
lean_inc(v_binderName_373_);
v_body_374_ = lean_ctor_get(v_a_372_, 2);
lean_inc_ref(v_body_374_);
lean_dec_ref(v_a_372_);
lean_inc_ref(v_a_357_);
v___x_375_ = l_Lean_Meta_Sym_inferType___redArg(v_a_357_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_377_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
lean_inc_n(v_a_376_, 2);
lean_dec_ref(v___x_375_);
v___x_377_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_376_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_379_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
lean_inc(v_a_378_);
lean_dec_ref(v___x_377_);
v___x_379_ = l_Lean_Meta_Sym_inferType___redArg(v_e_355_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_381_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_a_380_);
lean_dec_ref(v___x_379_);
v___x_381_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_380_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_383_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref(v___x_381_);
lean_inc_ref(v_a_357_);
lean_inc_ref(v_f_x27_358_);
v___x_383_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Simp_mkCongr_spec__0(v_f_x27_358_, v_a_357_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_400_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_400_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_400_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_400_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
uint8_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_388_ = 0;
lean_inc(v_a_376_);
v___x_389_ = l_Lean_mkLambda(v_binderName_373_, v___x_388_, v_a_376_, v_body_374_);
v___x_390_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__1);
v___x_391_ = lean_box(0);
v___x_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_392_, 0, v_a_382_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_393_, 0, v_a_378_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = l_Lean_mkConst(v___x_390_, v___x_393_);
v___x_395_ = l_Lean_mkApp6(v___x_394_, v_a_376_, v___x_389_, v_f_356_, v_f_x27_358_, v_hf_359_, v_a_357_);
v___x_396_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_396_, 0, v_a_384_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
lean_ctor_set_uint8(v___x_396_, sizeof(void*)*2, v_done_360_);
lean_ctor_set_uint8(v___x_396_, sizeof(void*)*2 + 1, v_contextDependent_361_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_396_);
v___x_398_ = v___x_386_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_396_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_a_382_);
lean_dec(v_a_378_);
lean_dec(v_a_376_);
lean_dec_ref(v_body_374_);
lean_dec(v_binderName_373_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
v_a_401_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_383_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_383_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_a_378_);
lean_dec(v_a_376_);
lean_dec_ref(v_body_374_);
lean_dec(v_binderName_373_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
v_a_409_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_381_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_381_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_a_378_);
lean_dec(v_a_376_);
lean_dec_ref(v_body_374_);
lean_dec(v_binderName_373_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
v_a_417_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_379_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_379_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec(v_a_376_);
lean_dec_ref(v_body_374_);
lean_dec(v_binderName_373_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
lean_dec_ref(v_e_355_);
v_a_425_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_377_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_377_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec_ref(v_body_374_);
lean_dec(v_binderName_373_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
lean_dec_ref(v_e_355_);
v_a_433_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_375_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_375_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
else
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_a_372_);
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_e_355_);
v___x_441_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___closed__3);
v___x_442_ = l_Lean_indentExpr(v_f_356_);
v___x_443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(v___x_443_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
return v___x_444_;
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
lean_dec_ref(v_e_355_);
v_a_445_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_371_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_371_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec_ref(v_hf_359_);
lean_dec_ref(v_f_x27_358_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_f_356_);
lean_dec_ref(v_e_355_);
v_a_453_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_369_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_369_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg___boxed(lean_object* v_e_461_, lean_object* v_f_462_, lean_object* v_a_463_, lean_object* v_f_x27_464_, lean_object* v_hf_465_, lean_object* v_done_466_, lean_object* v_contextDependent_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
uint8_t v_done_boxed_475_; uint8_t v_contextDependent_boxed_476_; lean_object* v_res_477_; 
v_done_boxed_475_ = lean_unbox(v_done_466_);
v_contextDependent_boxed_476_ = lean_unbox(v_contextDependent_467_);
v_res_477_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_461_, v_f_462_, v_a_463_, v_f_x27_464_, v_hf_465_, v_done_boxed_475_, v_contextDependent_boxed_476_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
lean_dec(v_a_469_);
lean_dec_ref(v_a_468_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun(lean_object* v_e_478_, lean_object* v_f_479_, lean_object* v_a_480_, lean_object* v_f_x27_481_, lean_object* v_hf_482_, lean_object* v_x_483_, uint8_t v_done_484_, uint8_t v_contextDependent_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_478_, v_f_479_, v_a_480_, v_f_x27_481_, v_hf_482_, v_done_484_, v_contextDependent_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___boxed(lean_object* v_e_494_, lean_object* v_f_495_, lean_object* v_a_496_, lean_object* v_f_x27_497_, lean_object* v_hf_498_, lean_object* v_x_499_, lean_object* v_done_500_, lean_object* v_contextDependent_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
uint8_t v_done_boxed_509_; uint8_t v_contextDependent_boxed_510_; lean_object* v_res_511_; 
v_done_boxed_509_ = lean_unbox(v_done_500_);
v_contextDependent_boxed_510_ = lean_unbox(v_contextDependent_501_);
v_res_511_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun(v_e_494_, v_f_495_, v_a_496_, v_f_x27_497_, v_hf_498_, v_x_499_, v_done_boxed_509_, v_contextDependent_boxed_510_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec(v_a_505_);
lean_dec_ref(v_a_504_);
lean_dec(v_a_503_);
lean_dec_ref(v_a_502_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0(lean_object* v_00_u03b1_512_, lean_object* v_msg_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(v_msg_513_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___boxed(lean_object* v_00_u03b1_522_, lean_object* v_msg_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0(v_00_u03b1_522_, v_msg_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
return v_res_531_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_box(0));
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(lean_object* v_msg_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_9179__overap_545_; lean_object* v___x_546_; 
v___x_544_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___closed__0);
v___x_9179__overap_545_ = lean_panic_fn_borrowed(v___x_544_, v_msg_533_);
lean_inc(v___y_542_);
lean_inc_ref(v___y_541_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
v___x_546_ = lean_apply_10(v___x_9179__overap_545_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, lean_box(0));
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0___boxed(lean_object* v_msg_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v_msg_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
return v_res_558_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0(void){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_mk_string_unchecked("Lean.Meta.Sym.Simp.App", 22, 22);
return v___x_559_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1(void){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpOverApplied.visit", 74, 74);
return v___x_560_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2(void){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_561_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_562_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_563_ = lean_unsigned_to_nat(55u);
v___x_564_ = lean_unsigned_to_nat(123u);
v___x_565_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1);
v___x_566_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_567_ = l_mkPanicMessageWithDecl(v___x_566_, v___x_565_, v___x_564_, v___x_563_, v___x_562_);
return v___x_567_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_568_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_569_ = lean_unsigned_to_nat(13u);
v___x_570_ = lean_unsigned_to_nat(135u);
v___x_571_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__1);
v___x_572_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_573_ = l_mkPanicMessageWithDecl(v___x_572_, v___x_571_, v___x_570_, v___x_569_, v___x_568_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(lean_object* v_simpFn_574_, lean_object* v_e_575_, lean_object* v_i_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = lean_nat_dec_eq(v_i_576_, v___x_587_);
if (v___x_588_ == 0)
{
if (lean_obj_tag(v_e_575_) == 5)
{
lean_object* v_fn_589_; lean_object* v_arg_590_; lean_object* v___x_591_; lean_object* v_i_592_; lean_object* v___x_593_; 
v_fn_589_ = lean_ctor_get(v_e_575_, 0);
lean_inc_ref_n(v_fn_589_, 2);
v_arg_590_ = lean_ctor_get(v_e_575_, 1);
lean_inc_ref(v_arg_590_);
v___x_591_ = lean_unsigned_to_nat(1u);
v_i_592_ = lean_nat_sub(v_i_576_, v___x_591_);
v___x_593_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v_simpFn_574_, v_fn_589_, v_i_592_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_i_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_595_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref(v___x_593_);
lean_inc_ref(v_fn_589_);
v___x_595_ = l_Lean_Meta_Sym_inferType___redArg(v_fn_589_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref(v___x_595_);
v___x_597_ = l_Lean_Meta_whnfD(v_a_596_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_633_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_633_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_633_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_633_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
if (lean_obj_tag(v_a_598_) == 7)
{
lean_object* v_binderType_602_; lean_object* v_body_603_; uint8_t v___x_621_; 
v_binderType_602_ = lean_ctor_get(v_a_598_, 1);
lean_inc_ref(v_binderType_602_);
v_body_603_ = lean_ctor_get(v_a_598_, 2);
lean_inc_ref(v_body_603_);
lean_dec_ref(v_a_598_);
v___x_621_ = l_Lean_Expr_hasLooseBVars(v_body_603_);
lean_dec_ref(v_body_603_);
if (v___x_621_ == 0)
{
lean_del_object(v___x_600_);
goto v___jp_604_;
}
else
{
if (v___x_588_ == 0)
{
lean_dec_ref(v_binderType_602_);
if (lean_obj_tag(v_a_594_) == 0)
{
uint8_t v_contextDependent_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
v_contextDependent_622_ = lean_ctor_get_uint8(v_a_594_, 1);
lean_dec_ref(v_a_594_);
v___x_623_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_622_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_623_);
v___x_625_ = v___x_600_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
else
{
lean_object* v_e_x27_627_; lean_object* v_proof_628_; uint8_t v_contextDependent_629_; lean_object* v___x_630_; 
lean_del_object(v___x_600_);
v_e_x27_627_ = lean_ctor_get(v_a_594_, 0);
lean_inc_ref(v_e_x27_627_);
v_proof_628_ = lean_ctor_get(v_a_594_, 1);
lean_inc_ref(v_proof_628_);
v_contextDependent_629_ = lean_ctor_get_uint8(v_a_594_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_594_);
v___x_630_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_575_, v_fn_589_, v_arg_590_, v_e_x27_627_, v_proof_628_, v___x_588_, v_contextDependent_629_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_630_;
}
}
else
{
lean_del_object(v___x_600_);
goto v___jp_604_;
}
}
v___jp_604_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Meta_isProp(v_binderType_602_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; uint8_t v___x_607_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
v___x_607_ = lean_unbox(v_a_606_);
lean_dec(v_a_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_inc(v_a_585_);
lean_inc_ref(v_a_584_);
lean_inc(v_a_583_);
lean_inc_ref(v_a_582_);
lean_inc(v_a_581_);
lean_inc_ref(v_a_580_);
lean_inc(v_a_579_);
lean_inc_ref(v_a_578_);
lean_inc(v_a_577_);
lean_inc_ref(v_arg_590_);
v___x_608_ = lean_sym_simp(v_arg_590_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref(v___x_608_);
v___x_610_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_575_, v_fn_589_, v_arg_590_, v_a_594_, v_a_609_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_610_;
}
else
{
lean_dec(v_a_594_);
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
return v___x_608_;
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_611_, 0, v___x_588_);
lean_ctor_set_uint8(v___x_611_, 1, v___x_588_);
v___x_612_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_575_, v_fn_589_, v_arg_590_, v_a_594_, v___x_611_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_612_;
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_a_594_);
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
v_a_613_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_605_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_605_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; 
lean_del_object(v___x_600_);
lean_dec(v_a_598_);
lean_dec(v_a_594_);
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
v___x_631_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__3);
v___x_632_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_631_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_632_;
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec(v_a_594_);
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
v_a_634_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_597_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_597_);
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
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_a_594_);
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
v_a_642_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_595_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_595_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
else
{
lean_dec_ref(v_arg_590_);
lean_dec_ref(v_fn_589_);
lean_dec_ref(v_e_575_);
return v___x_593_;
}
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; 
lean_dec_ref(v_e_575_);
lean_dec_ref(v_simpFn_574_);
v___x_650_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__4);
v___x_651_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_650_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_651_;
}
}
else
{
lean_object* v___x_652_; 
lean_inc(v_a_585_);
lean_inc_ref(v_a_584_);
lean_inc(v_a_583_);
lean_inc_ref(v_a_582_);
lean_inc(v_a_581_);
lean_inc_ref(v_a_580_);
lean_inc(v_a_579_);
lean_inc_ref(v_a_578_);
lean_inc(v_a_577_);
v___x_652_ = lean_apply_11(v_simpFn_574_, v_e_575_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, lean_box(0));
return v___x_652_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___boxed(lean_object* v_simpFn_653_, lean_object* v_e_654_, lean_object* v_i_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v_simpFn_653_, v_e_654_, v_i_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
lean_dec(v_a_656_);
lean_dec(v_i_655_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied(lean_object* v_e_667_, lean_object* v_numArgs_668_, lean_object* v_simpFn_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v_simpFn_669_, v_e_667_, v_numArgs_668_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied___boxed(lean_object* v_e_681_, lean_object* v_numArgs_682_, lean_object* v_simpFn_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Meta_Sym_Simp_simpOverApplied(v_e_681_, v_numArgs_682_, v_simpFn_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec(v_numArgs_682_);
return v_res_694_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0(void){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.propagateOverApplied.visit", 79, 79);
return v___x_695_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_696_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_697_ = lean_unsigned_to_nat(13u);
v___x_698_ = lean_unsigned_to_nat(172u);
v___x_699_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__0);
v___x_700_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_701_ = l_mkPanicMessageWithDecl(v___x_700_, v___x_699_, v___x_698_, v___x_697_, v___x_696_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit(lean_object* v_simpFn_702_, lean_object* v_e_703_, lean_object* v_i_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_nat_dec_eq(v_i_704_, v___x_715_);
if (v___x_716_ == 0)
{
if (lean_obj_tag(v_e_703_) == 5)
{
lean_object* v_fn_717_; lean_object* v_arg_718_; lean_object* v___x_719_; lean_object* v_i_720_; lean_object* v___x_721_; 
v_fn_717_ = lean_ctor_get(v_e_703_, 0);
lean_inc_ref_n(v_fn_717_, 2);
v_arg_718_ = lean_ctor_get(v_e_703_, 1);
lean_inc_ref(v_arg_718_);
v___x_719_ = lean_unsigned_to_nat(1u);
v_i_720_ = lean_nat_sub(v_i_704_, v___x_719_);
v___x_721_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit(v_simpFn_702_, v_fn_717_, v_i_720_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
lean_dec(v_i_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
if (lean_obj_tag(v_a_722_) == 0)
{
lean_dec_ref(v_a_722_);
lean_dec_ref(v_arg_718_);
lean_dec_ref(v_fn_717_);
lean_dec_ref(v_e_703_);
return v___x_721_;
}
else
{
lean_object* v_e_x27_723_; lean_object* v_proof_724_; uint8_t v_done_725_; uint8_t v_contextDependent_726_; lean_object* v___x_727_; 
lean_dec_ref(v___x_721_);
v_e_x27_723_ = lean_ctor_get(v_a_722_, 0);
lean_inc_ref(v_e_x27_723_);
v_proof_724_ = lean_ctor_get(v_a_722_, 1);
lean_inc_ref(v_proof_724_);
v_done_725_ = lean_ctor_get_uint8(v_a_722_, sizeof(void*)*2);
v_contextDependent_726_ = lean_ctor_get_uint8(v_a_722_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_722_);
v___x_727_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_703_, v_fn_717_, v_arg_718_, v_e_x27_723_, v_proof_724_, v_done_725_, v_contextDependent_726_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_727_;
}
}
else
{
lean_dec_ref(v_arg_718_);
lean_dec_ref(v_fn_717_);
lean_dec_ref(v_e_703_);
return v___x_721_;
}
}
else
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref(v_e_703_);
lean_dec_ref(v_simpFn_702_);
v___x_728_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___closed__1);
v___x_729_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_728_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_729_;
}
}
else
{
lean_object* v___x_730_; 
lean_inc(v_a_713_);
lean_inc_ref(v_a_712_);
lean_inc(v_a_711_);
lean_inc_ref(v_a_710_);
lean_inc(v_a_709_);
lean_inc_ref(v_a_708_);
lean_inc(v_a_707_);
lean_inc_ref(v_a_706_);
lean_inc(v_a_705_);
v___x_730_ = lean_apply_11(v_simpFn_702_, v_e_703_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, lean_box(0));
return v___x_730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit___boxed(lean_object* v_simpFn_731_, lean_object* v_e_732_, lean_object* v_i_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit(v_simpFn_731_, v_e_732_, v_i_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
lean_dec(v_a_742_);
lean_dec_ref(v_a_741_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec(v_i_733_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object* v_e_745_, lean_object* v_numArgs_746_, lean_object* v_simpFn_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_propagateOverApplied_visit(v_simpFn_747_, v_e_745_, v_numArgs_746_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied___boxed(lean_object* v_e_759_, lean_object* v_numArgs_760_, lean_object* v_simpFn_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_759_, v_numArgs_760_, v_simpFn_761_, v_a_762_, v_a_763_, v_a_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec(v_a_768_);
lean_dec_ref(v_a_767_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec(v_a_762_);
lean_dec(v_numArgs_760_);
return v_res_772_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_mk_string_unchecked("function type expected", 22, 22);
return v___x_773_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__0);
v___x_775_ = l_Lean_stringToMessageData(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(lean_object* v_type_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
uint8_t v___x_783_; 
v___x_783_ = l_Lean_Expr_isForall(v_type_776_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
v___x_784_ = l_Lean_Meta_whnfD(v_type_776_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; uint8_t v___x_786_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref(v___x_784_);
v___x_786_ = l_Lean_Expr_isForall(v_a_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
v___x_787_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___closed__1);
v___x_788_ = l_Lean_MessageData_ofExpr(v_a_785_);
v___x_789_ = l_Lean_indentD(v___x_788_);
v___x_790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_790_, 0, v___x_787_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v___x_791_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun_spec__0___redArg(v___x_790_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
else
{
lean_object* v___x_800_; 
v___x_800_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_a_785_, v_a_777_, v_a_781_);
return v___x_800_;
}
}
else
{
return v___x_784_;
}
}
else
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v_type_776_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg___boxed(lean_object* v_type_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_type_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
lean_dec(v_a_805_);
lean_dec_ref(v_a_804_);
lean_dec(v_a_803_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall(lean_object* v_type_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_type_810_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___boxed(lean_object* v_type_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall(v_type_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
lean_dec(v_a_825_);
lean_dec_ref(v_a_824_);
lean_dec(v_a_823_);
lean_dec_ref(v_a_822_);
lean_dec(v_a_821_);
lean_dec_ref(v_a_820_);
return v_res_827_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0(void){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Meta_Sym_instInhabitedSymM(lean_box(0));
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0(lean_object* v_msg_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v___x_837_; lean_object* v___x_986__overap_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___closed__0);
v___x_986__overap_838_ = lean_panic_fn_borrowed(v___x_837_, v_msg_829_);
lean_inc(v___y_835_);
lean_inc_ref(v___y_834_);
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v___y_831_);
lean_inc_ref(v___y_830_);
v___x_839_ = lean_apply_7(v___x_986__overap_838_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, lean_box(0));
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0___boxed(lean_object* v_msg_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0(v_msg_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
return v_res_848_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.getFnType", 62, 62);
return v___x_849_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_850_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_851_ = lean_unsigned_to_nat(47u);
v___x_852_ = lean_unsigned_to_nat(203u);
v___x_853_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__0);
v___x_854_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_855_ = l_mkPanicMessageWithDecl(v___x_854_, v___x_853_, v___x_852_, v___x_851_, v___x_850_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType(lean_object* v_e_856_, lean_object* v_n_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_zero_865_; uint8_t v_isZero_866_; 
v_zero_865_ = lean_unsigned_to_nat(0u);
v_isZero_866_ = lean_nat_dec_eq(v_n_857_, v_zero_865_);
if (v_isZero_866_ == 1)
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Meta_Sym_inferType___redArg(v_e_856_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
return v___x_867_;
}
else
{
lean_object* v_one_868_; lean_object* v_n_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_one_868_ = lean_unsigned_to_nat(1u);
v_n_869_ = lean_nat_sub(v_n_857_, v_one_868_);
v___x_870_ = l_Lean_Expr_appFn_x21(v_e_856_);
lean_dec_ref(v_e_856_);
v___x_871_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType(v___x_870_, v_n_869_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
lean_dec(v_n_869_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref(v___x_871_);
v___x_873_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_a_872_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_884_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_884_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_884_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_884_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
if (lean_obj_tag(v_a_874_) == 7)
{
lean_object* v_body_878_; lean_object* v___x_880_; 
v_body_878_ = lean_ctor_get(v_a_874_, 2);
lean_inc_ref(v_body_878_);
lean_dec_ref(v_a_874_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v_body_878_);
v___x_880_ = v___x_876_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_body_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; 
lean_del_object(v___x_876_);
lean_dec(v_a_874_);
v___x_882_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___closed__1);
v___x_883_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType_spec__0(v___x_882_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
return v___x_883_;
}
}
}
else
{
return v___x_873_;
}
}
else
{
return v___x_871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType___boxed(lean_object* v_e_885_, lean_object* v_n_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType(v_e_885_, v_n_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
lean_dec(v_a_890_);
lean_dec_ref(v_a_889_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec(v_n_886_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(lean_object* v_f_895_, lean_object* v_a_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___x_909_; lean_object* v___x_910_; uint8_t v_debug_911_; 
v___x_909_ = lean_st_ref_get(v___y_902_);
lean_dec(v___x_909_);
v___x_910_ = lean_st_ref_get(v___y_898_);
v_debug_911_ = lean_ctor_get_uint8(v___x_910_, sizeof(void*)*10);
lean_dec(v___x_910_);
if (v_debug_911_ == 0)
{
v___y_905_ = v___y_898_;
v___y_906_ = v___y_902_;
goto v___jp_904_;
}
else
{
lean_object* v___x_912_; 
lean_inc_ref(v_f_895_);
v___x_912_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_895_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v___x_913_; 
lean_dec_ref(v___x_912_);
lean_inc_ref(v_a_896_);
v___x_913_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_dec_ref(v___x_913_);
v___y_905_ = v___y_898_;
v___y_906_ = v___y_902_;
goto v___jp_904_;
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec_ref(v_a_896_);
lean_dec_ref(v_f_895_);
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec_ref(v_a_896_);
lean_dec_ref(v_f_895_);
v_a_922_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_912_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_912_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
v___jp_904_:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = l_Lean_Expr_app___override(v_f_895_, v_a_896_);
v___x_908_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_907_, v___y_905_, v___y_906_);
return v___x_908_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg___boxed(lean_object* v_f_930_, lean_object* v_a_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(v_f_930_, v_a_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0(lean_object* v_f_940_, lean_object* v_a_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(v_f_940_, v_a_941_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___boxed(lean_object* v_f_953_, lean_object* v_a_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0(v_f_953_, v_a_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
return v_res_965_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_box(0));
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(lean_object* v_msg_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v___x_31795__overap_979_; lean_object* v___x_980_; 
v___x_978_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___closed__0);
v___x_31795__overap_979_ = lean_panic_fn_borrowed(v___x_978_, v_msg_967_);
lean_inc(v___y_976_);
lean_inc_ref(v___y_975_);
lean_inc(v___y_974_);
lean_inc_ref(v___y_973_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
v___x_980_ = lean_apply_10(v___x_31795__overap_979_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, lean_box(0));
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1___boxed(lean_object* v_msg_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(v_msg_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
return v_res_992_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0(void){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_993_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__0);
v___x_995_ = l_Lean_Name_mkStr1(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = lean_box(0);
v___x_997_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__1);
v___x_998_ = l_Lean_Expr_const___override(v___x_997_, v___x_996_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3(void){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpFixedPrefix.go", 71, 71);
return v___x_999_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1000_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1001_ = lean_unsigned_to_nat(52u);
v___x_1002_ = lean_unsigned_to_nat(265u);
v___x_1003_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3);
v___x_1004_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1005_ = l_mkPanicMessageWithDecl(v___x_1004_, v___x_1003_, v___x_1002_, v___x_1001_, v___x_1000_);
return v___x_1005_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1006_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1007_ = lean_unsigned_to_nat(52u);
v___x_1008_ = lean_unsigned_to_nat(257u);
v___x_1009_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3);
v___x_1010_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1011_ = l_mkPanicMessageWithDecl(v___x_1010_, v___x_1009_, v___x_1008_, v___x_1007_, v___x_1006_);
return v___x_1011_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1012_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1013_ = lean_unsigned_to_nat(52u);
v___x_1014_ = lean_unsigned_to_nat(272u);
v___x_1015_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3);
v___x_1016_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1017_ = l_mkPanicMessageWithDecl(v___x_1016_, v___x_1015_, v___x_1014_, v___x_1013_, v___x_1012_);
return v___x_1017_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1018_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1019_ = lean_unsigned_to_nat(26u);
v___x_1020_ = lean_unsigned_to_nat(250u);
v___x_1021_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__3);
v___x_1022_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1023_ = l_mkPanicMessageWithDecl(v___x_1022_, v___x_1021_, v___x_1020_, v___x_1019_, v___x_1018_);
return v___x_1023_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8(void){
_start:
{
uint8_t v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = 0;
v___x_1025_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1025_, 0, v___x_1024_);
lean_ctor_set_uint8(v___x_1025_, 1, v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2);
v___x_1027_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
lean_ctor_set(v___x_1028_, 1, v___x_1026_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go(lean_object* v_i_1029_, lean_object* v_e_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v___x_1041_; uint8_t v___x_1042_; 
v___x_1041_ = lean_unsigned_to_nat(0u);
v___x_1042_ = lean_nat_dec_eq(v_i_1029_, v___x_1041_);
if (v___x_1042_ == 0)
{
if (lean_obj_tag(v_e_1030_) == 5)
{
lean_object* v_fn_1043_; lean_object* v_arg_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_fn_1043_ = lean_ctor_get(v_e_1030_, 0);
lean_inc_ref_n(v_fn_1043_, 2);
v_arg_1044_ = lean_ctor_get(v_e_1030_, 1);
lean_inc_ref(v_arg_1044_);
lean_dec_ref(v_e_1030_);
v___x_1045_ = lean_unsigned_to_nat(1u);
v___x_1046_ = lean_nat_sub(v_i_1029_, v___x_1045_);
v___x_1047_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go(v___x_1046_, v_fn_1043_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v_fst_1049_; lean_object* v_snd_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1306_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref(v___x_1047_);
v_fst_1049_ = lean_ctor_get(v_a_1048_, 0);
v_snd_1050_ = lean_ctor_get(v_a_1048_, 1);
v_isSharedCheck_1306_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1052_ = v_a_1048_;
v_isShared_1053_ = v_isSharedCheck_1306_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_snd_1050_);
lean_inc(v_fst_1049_);
lean_dec(v_a_1048_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1306_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; 
lean_inc(v_a_1039_);
lean_inc_ref(v_a_1038_);
lean_inc(v_a_1037_);
lean_inc_ref(v_a_1036_);
lean_inc(v_a_1035_);
lean_inc_ref(v_a_1034_);
lean_inc(v_a_1033_);
lean_inc_ref(v_a_1032_);
lean_inc(v_a_1031_);
lean_inc_ref(v_arg_1044_);
v___x_1054_ = lean_sym_simp(v_arg_1044_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1297_; 
v_a_1055_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1057_ = v___x_1054_;
v_isShared_1058_ = v_isSharedCheck_1297_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1054_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1297_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
uint8_t v___y_1060_; uint8_t v___x_1069_; 
v___x_1069_ = 1;
if (lean_obj_tag(v_fst_1049_) == 0)
{
lean_dec(v_snd_1050_);
if (lean_obj_tag(v_a_1055_) == 0)
{
uint8_t v_contextDependent_1070_; 
lean_dec(v___x_1046_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_contextDependent_1070_ = lean_ctor_get_uint8(v_fst_1049_, 1);
lean_dec_ref(v_fst_1049_);
if (v_contextDependent_1070_ == 0)
{
uint8_t v_contextDependent_1071_; 
v_contextDependent_1071_ = lean_ctor_get_uint8(v_a_1055_, 1);
lean_dec_ref(v_a_1055_);
v___y_1060_ = v_contextDependent_1071_;
goto v___jp_1059_;
}
else
{
lean_dec_ref(v_a_1055_);
v___y_1060_ = v___x_1069_;
goto v___jp_1059_;
}
}
else
{
uint8_t v_contextDependent_1072_; lean_object* v_e_x27_1073_; lean_object* v_proof_1074_; uint8_t v_contextDependent_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1152_; 
lean_del_object(v___x_1057_);
lean_del_object(v___x_1052_);
v_contextDependent_1072_ = lean_ctor_get_uint8(v_fst_1049_, 1);
lean_dec_ref(v_fst_1049_);
v_e_x27_1073_ = lean_ctor_get(v_a_1055_, 0);
v_proof_1074_ = lean_ctor_get(v_a_1055_, 1);
v_contextDependent_1075_ = lean_ctor_get_uint8(v_a_1055_, sizeof(void*)*2 + 1);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_a_1055_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1077_ = v_a_1055_;
v_isShared_1078_ = v_isSharedCheck_1152_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_proof_1074_);
lean_inc(v_e_x27_1073_);
lean_dec(v_a_1055_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1152_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; 
lean_inc_ref(v_fn_1043_);
v___x_1079_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_getFnType(v_fn_1043_, v___x_1046_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
lean_dec(v___x_1046_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1081_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref(v___x_1079_);
v___x_1081_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_a_1080_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref(v___x_1081_);
if (lean_obj_tag(v_a_1082_) == 7)
{
lean_object* v_binderType_1083_; lean_object* v_body_1084_; lean_object* v___x_1085_; 
v_binderType_1083_ = lean_ctor_get(v_a_1082_, 1);
lean_inc_ref(v_binderType_1083_);
v_body_1084_ = lean_ctor_get(v_a_1082_, 2);
lean_inc_ref(v_body_1084_);
lean_dec_ref(v_a_1082_);
lean_inc_ref(v_e_x27_1073_);
lean_inc_ref(v_fn_1043_);
v___x_1085_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(v_fn_1043_, v_e_x27_1073_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref(v___x_1085_);
lean_inc_ref(v_binderType_1083_);
v___x_1087_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_1083_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref(v___x_1087_);
lean_inc_ref(v_body_1084_);
v___x_1089_ = l_Lean_Meta_Sym_getLevel___redArg(v_body_1084_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1109_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1109_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1109_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___y_1101_; 
v___x_1094_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__1);
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_a_1090_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1097_, 0, v_a_1088_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = l_Lean_mkConst(v___x_1094_, v___x_1097_);
lean_inc_ref(v_body_1084_);
v___x_1099_ = l_Lean_mkApp6(v___x_1098_, v_binderType_1083_, v_body_1084_, v_arg_1044_, v_e_x27_1073_, v_fn_1043_, v_proof_1074_);
if (v_contextDependent_1072_ == 0)
{
v___y_1101_ = v_contextDependent_1075_;
goto v___jp_1100_;
}
else
{
v___y_1101_ = v___x_1069_;
goto v___jp_1100_;
}
v___jp_1100_:
{
lean_object* v___x_1103_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 1, v___x_1099_);
lean_ctor_set(v___x_1077_, 0, v_a_1086_);
v___x_1103_ = v___x_1077_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1086_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v___x_1099_);
v___x_1103_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*2, v___x_1042_);
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*2 + 1, v___y_1101_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v_body_1084_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1104_);
v___x_1106_ = v___x_1092_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_1088_);
lean_dec(v_a_1086_);
lean_dec_ref(v_body_1084_);
lean_dec_ref(v_binderType_1083_);
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1110_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1089_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1089_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec(v_a_1086_);
lean_dec_ref(v_body_1084_);
lean_dec_ref(v_binderType_1083_);
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1118_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1087_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1087_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v_body_1084_);
lean_dec_ref(v_binderType_1083_);
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1126_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1085_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1085_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
lean_dec(v_a_1082_);
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v___x_1134_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__4);
v___x_1135_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(v___x_1134_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
return v___x_1135_;
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1136_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1081_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1081_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_del_object(v___x_1077_);
lean_dec_ref(v_proof_1074_);
lean_dec_ref(v_e_x27_1073_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1144_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1079_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1079_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1057_);
lean_del_object(v___x_1052_);
lean_dec(v___x_1046_);
if (lean_obj_tag(v_a_1055_) == 0)
{
lean_object* v_e_x27_1153_; lean_object* v_proof_1154_; uint8_t v_contextDependent_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1223_; 
v_e_x27_1153_ = lean_ctor_get(v_fst_1049_, 0);
v_proof_1154_ = lean_ctor_get(v_fst_1049_, 1);
v_contextDependent_1155_ = lean_ctor_get_uint8(v_fst_1049_, sizeof(void*)*2 + 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_fst_1049_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1157_ = v_fst_1049_;
v_isShared_1158_ = v_isSharedCheck_1223_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_proof_1154_);
lean_inc(v_e_x27_1153_);
lean_dec(v_fst_1049_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1223_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
uint8_t v_contextDependent_1159_; lean_object* v___x_1160_; 
v_contextDependent_1159_ = lean_ctor_get_uint8(v_a_1055_, 1);
lean_dec_ref(v_a_1055_);
v___x_1160_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_snd_1050_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1161_);
lean_dec_ref(v___x_1160_);
if (lean_obj_tag(v_a_1161_) == 7)
{
lean_object* v_binderType_1162_; lean_object* v_body_1163_; lean_object* v___x_1164_; 
v_binderType_1162_ = lean_ctor_get(v_a_1161_, 1);
lean_inc_ref(v_binderType_1162_);
v_body_1163_ = lean_ctor_get(v_a_1161_, 2);
lean_inc_ref(v_body_1163_);
lean_dec_ref(v_a_1161_);
lean_inc_ref(v_arg_1044_);
lean_inc_ref(v_e_x27_1153_);
v___x_1164_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(v_e_x27_1153_, v_arg_1044_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1166_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1165_);
lean_dec_ref(v___x_1164_);
lean_inc_ref(v_binderType_1162_);
v___x_1166_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_1162_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1168_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref(v___x_1166_);
lean_inc_ref(v_body_1163_);
v___x_1168_ = l_Lean_Meta_Sym_getLevel___redArg(v_body_1163_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1188_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1171_ = v___x_1168_;
v_isShared_1172_ = v_isSharedCheck_1188_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1168_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1188_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___y_1180_; 
v___x_1173_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__3);
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_a_1169_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1176_, 0, v_a_1167_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = l_Lean_mkConst(v___x_1173_, v___x_1176_);
lean_inc_ref(v_body_1163_);
v___x_1178_ = l_Lean_mkApp6(v___x_1177_, v_binderType_1162_, v_body_1163_, v_fn_1043_, v_e_x27_1153_, v_proof_1154_, v_arg_1044_);
if (v_contextDependent_1155_ == 0)
{
v___y_1180_ = v_contextDependent_1159_;
goto v___jp_1179_;
}
else
{
v___y_1180_ = v___x_1069_;
goto v___jp_1179_;
}
v___jp_1179_:
{
lean_object* v___x_1182_; 
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 1, v___x_1178_);
lean_ctor_set(v___x_1157_, 0, v_a_1165_);
v___x_1182_ = v___x_1157_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1165_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v___x_1178_);
v___x_1182_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
lean_object* v___x_1183_; lean_object* v___x_1185_; 
lean_ctor_set_uint8(v___x_1182_, sizeof(void*)*2, v___x_1042_);
lean_ctor_set_uint8(v___x_1182_, sizeof(void*)*2 + 1, v___y_1180_);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set(v___x_1183_, 1, v_body_1163_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1183_);
v___x_1185_ = v___x_1171_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec(v_a_1167_);
lean_dec(v_a_1165_);
lean_dec_ref(v_body_1163_);
lean_dec_ref(v_binderType_1162_);
lean_del_object(v___x_1157_);
lean_dec_ref(v_proof_1154_);
lean_dec_ref(v_e_x27_1153_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1189_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1168_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1168_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
lean_dec(v_a_1165_);
lean_dec_ref(v_body_1163_);
lean_dec_ref(v_binderType_1162_);
lean_del_object(v___x_1157_);
lean_dec_ref(v_proof_1154_);
lean_dec_ref(v_e_x27_1153_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1197_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___x_1166_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1166_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v_body_1163_);
lean_dec_ref(v_binderType_1162_);
lean_del_object(v___x_1157_);
lean_dec_ref(v_proof_1154_);
lean_dec_ref(v_e_x27_1153_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1205_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1164_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1164_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
else
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
lean_dec(v_a_1161_);
lean_del_object(v___x_1157_);
lean_dec_ref(v_proof_1154_);
lean_dec_ref(v_e_x27_1153_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v___x_1213_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__5);
v___x_1214_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(v___x_1213_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
return v___x_1214_;
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_del_object(v___x_1157_);
lean_dec_ref(v_proof_1154_);
lean_dec_ref(v_e_x27_1153_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1215_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1160_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1160_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
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
}
else
{
lean_object* v_e_x27_1224_; lean_object* v_proof_1225_; uint8_t v_contextDependent_1226_; lean_object* v_e_x27_1227_; lean_object* v_proof_1228_; uint8_t v_contextDependent_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1296_; 
v_e_x27_1224_ = lean_ctor_get(v_fst_1049_, 0);
lean_inc_ref(v_e_x27_1224_);
v_proof_1225_ = lean_ctor_get(v_fst_1049_, 1);
lean_inc_ref(v_proof_1225_);
v_contextDependent_1226_ = lean_ctor_get_uint8(v_fst_1049_, sizeof(void*)*2 + 1);
lean_dec_ref(v_fst_1049_);
v_e_x27_1227_ = lean_ctor_get(v_a_1055_, 0);
v_proof_1228_ = lean_ctor_get(v_a_1055_, 1);
v_contextDependent_1229_ = lean_ctor_get_uint8(v_a_1055_, sizeof(void*)*2 + 1);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_a_1055_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1231_ = v_a_1055_;
v_isShared_1232_ = v_isSharedCheck_1296_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_proof_1228_);
lean_inc(v_e_x27_1227_);
lean_dec(v_a_1055_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1296_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; 
v___x_1233_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_whnfToForall___redArg(v_snd_1050_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref(v___x_1233_);
if (lean_obj_tag(v_a_1234_) == 7)
{
lean_object* v_binderType_1235_; lean_object* v_body_1236_; lean_object* v___x_1237_; 
v_binderType_1235_ = lean_ctor_get(v_a_1234_, 1);
lean_inc_ref(v_binderType_1235_);
v_body_1236_ = lean_ctor_get(v_a_1234_, 2);
lean_inc_ref(v_body_1236_);
lean_dec_ref(v_a_1234_);
lean_inc_ref(v_e_x27_1227_);
lean_inc_ref(v_e_x27_1224_);
v___x_1237_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__0___redArg(v_e_x27_1224_, v_e_x27_1227_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1239_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1238_);
lean_dec_ref(v___x_1237_);
lean_inc_ref(v_binderType_1235_);
v___x_1239_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_1235_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1241_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref(v___x_1239_);
lean_inc_ref(v_body_1236_);
v___x_1241_ = l_Lean_Meta_Sym_getLevel___redArg(v_body_1236_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1261_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1261_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1261_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; uint8_t v___y_1253_; 
v___x_1246_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5, &l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5_once, _init_l_Lean_Meta_Sym_Simp_mkCongr___redArg___closed__5);
v___x_1247_ = lean_box(0);
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_a_1242_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1249_, 0, v_a_1240_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = l_Lean_mkConst(v___x_1246_, v___x_1249_);
lean_inc_ref(v_body_1236_);
v___x_1251_ = l_Lean_mkApp8(v___x_1250_, v_binderType_1235_, v_body_1236_, v_fn_1043_, v_e_x27_1224_, v_arg_1044_, v_e_x27_1227_, v_proof_1225_, v_proof_1228_);
if (v_contextDependent_1226_ == 0)
{
v___y_1253_ = v_contextDependent_1229_;
goto v___jp_1252_;
}
else
{
v___y_1253_ = v___x_1069_;
goto v___jp_1252_;
}
v___jp_1252_:
{
lean_object* v___x_1255_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v___x_1251_);
lean_ctor_set(v___x_1231_, 0, v_a_1238_);
v___x_1255_ = v___x_1231_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1238_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v___x_1251_);
v___x_1255_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*2, v___x_1042_);
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*2 + 1, v___y_1253_);
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v_body_1236_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1256_);
v___x_1258_ = v___x_1244_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
lean_dec(v_a_1240_);
lean_dec(v_a_1238_);
lean_dec_ref(v_body_1236_);
lean_dec_ref(v_binderType_1235_);
lean_del_object(v___x_1231_);
lean_dec_ref(v_proof_1228_);
lean_dec_ref(v_e_x27_1227_);
lean_dec_ref(v_proof_1225_);
lean_dec_ref(v_e_x27_1224_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1262_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1241_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1241_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec(v_a_1238_);
lean_dec_ref(v_body_1236_);
lean_dec_ref(v_binderType_1235_);
lean_del_object(v___x_1231_);
lean_dec_ref(v_proof_1228_);
lean_dec_ref(v_e_x27_1227_);
lean_dec_ref(v_proof_1225_);
lean_dec_ref(v_e_x27_1224_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1270_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1239_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1239_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v_body_1236_);
lean_dec_ref(v_binderType_1235_);
lean_del_object(v___x_1231_);
lean_dec_ref(v_proof_1228_);
lean_dec_ref(v_e_x27_1227_);
lean_dec_ref(v_proof_1225_);
lean_dec_ref(v_e_x27_1224_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1278_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1237_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1237_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_a_1234_);
lean_del_object(v___x_1231_);
lean_dec_ref(v_proof_1228_);
lean_dec_ref(v_e_x27_1227_);
lean_dec_ref(v_proof_1225_);
lean_dec_ref(v_e_x27_1224_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v___x_1286_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__6);
v___x_1287_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(v___x_1286_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
return v___x_1287_;
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_del_object(v___x_1231_);
lean_dec_ref(v_proof_1228_);
lean_dec_ref(v_e_x27_1227_);
lean_dec_ref(v_proof_1225_);
lean_dec_ref(v_e_x27_1224_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1288_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1233_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1233_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
}
v___jp_1059_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1064_; 
v___x_1061_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_1060_);
v___x_1062_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__2);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___x_1062_);
lean_ctor_set(v___x_1052_, 0, v___x_1061_);
v___x_1064_ = v___x_1052_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v___x_1062_);
v___x_1064_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1066_; 
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1064_);
v___x_1066_ = v___x_1057_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_del_object(v___x_1052_);
lean_dec(v_snd_1050_);
lean_dec(v_fst_1049_);
lean_dec(v___x_1046_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
v_a_1298_ = lean_ctor_get(v___x_1054_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1054_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1054_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1054_);
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
}
else
{
lean_dec(v___x_1046_);
lean_dec_ref(v_arg_1044_);
lean_dec_ref(v_fn_1043_);
return v___x_1047_;
}
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
lean_dec_ref(v_e_1030_);
v___x_1307_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__7);
v___x_1308_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go_spec__1(v___x_1307_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
return v___x_1308_;
}
}
else
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec_ref(v_e_1030_);
v___x_1309_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__9);
v___x_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
return v___x_1310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___boxed(lean_object* v_i_1311_, lean_object* v_e_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go(v_i_1311_, v_e_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec(v_i_1311_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main(lean_object* v_n_1324_, lean_object* v_e_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go(v_n_1324_, v_e_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1345_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1339_ = v___x_1336_;
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1336_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v_fst_1341_; lean_object* v___x_1343_; 
v_fst_1341_ = lean_ctor_get(v_a_1337_, 0);
lean_inc(v_fst_1341_);
lean_dec(v_a_1337_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v_fst_1341_);
v___x_1343_ = v___x_1339_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_fst_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
v_a_1346_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1336_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1336_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main___boxed(lean_object* v_n_1354_, lean_object* v_e_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main(v_n_1354_, v_e_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_);
lean_dec(v_a_1364_);
lean_dec_ref(v_a_1363_);
lean_dec(v_a_1362_);
lean_dec_ref(v_a_1361_);
lean_dec(v_a_1360_);
lean_dec_ref(v_a_1359_);
lean_dec(v_a_1358_);
lean_dec_ref(v_a_1357_);
lean_dec(v_a_1356_);
lean_dec(v_n_1354_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpFixedPrefix(lean_object* v_e_1367_, lean_object* v_prefixSize_1368_, lean_object* v_suffixSize_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v_numArgs_1380_; uint8_t v___x_1381_; 
v_numArgs_1380_ = l_Lean_Expr_getAppNumArgs(v_e_1367_);
v___x_1381_ = lean_nat_dec_le(v_numArgs_1380_, v_prefixSize_1368_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = lean_nat_add(v_prefixSize_1368_, v_suffixSize_1369_);
v___x_1383_ = lean_nat_dec_lt(v___x_1382_, v_numArgs_1380_);
lean_dec(v___x_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_dec(v_suffixSize_1369_);
v___x_1384_ = lean_nat_sub(v_numArgs_1380_, v_prefixSize_1368_);
lean_dec(v_numArgs_1380_);
v___x_1385_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main(v___x_1384_, v_e_1367_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
lean_dec(v___x_1384_);
return v___x_1385_;
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1386_ = lean_nat_sub(v_numArgs_1380_, v_prefixSize_1368_);
lean_dec(v_numArgs_1380_);
v___x_1387_ = lean_nat_sub(v___x_1386_, v_suffixSize_1369_);
lean_dec(v___x_1386_);
v___x_1388_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_main___boxed), 12, 1);
lean_closure_set(v___x_1388_, 0, v_suffixSize_1369_);
v___x_1389_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v___x_1388_, v_e_1367_, v___x_1387_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
lean_dec(v___x_1387_);
return v___x_1389_;
}
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
lean_dec(v_numArgs_1380_);
lean_dec(v_suffixSize_1369_);
lean_dec_ref(v_e_1367_);
v___x_1390_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
return v___x_1391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpFixedPrefix___boxed(lean_object* v_e_1392_, lean_object* v_prefixSize_1393_, lean_object* v_suffixSize_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_Meta_Sym_Simp_simpFixedPrefix(v_e_1392_, v_prefixSize_1393_, v_suffixSize_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
lean_dec(v_a_1403_);
lean_dec_ref(v_a_1402_);
lean_dec(v_a_1401_);
lean_dec_ref(v_a_1400_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
lean_dec(v_prefixSize_1393_);
return v_res_1405_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpInterlaced.go", 70, 70);
return v___x_1406_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1407_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1408_ = lean_unsigned_to_nat(13u);
v___x_1409_ = lean_unsigned_to_nat(308u);
v___x_1410_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__0);
v___x_1411_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1412_ = l_mkPanicMessageWithDecl(v___x_1411_, v___x_1410_, v___x_1409_, v___x_1408_, v___x_1407_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(lean_object* v_rewritable_1413_, lean_object* v_i_1414_, lean_object* v_e_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = lean_nat_dec_eq(v_i_1414_, v___x_1426_);
if (v___x_1427_ == 0)
{
if (lean_obj_tag(v_e_1415_) == 5)
{
lean_object* v_fn_1428_; lean_object* v_arg_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v_fn_1428_ = lean_ctor_get(v_e_1415_, 0);
lean_inc_ref_n(v_fn_1428_, 2);
v_arg_1429_ = lean_ctor_get(v_e_1415_, 1);
lean_inc_ref(v_arg_1429_);
v___x_1430_ = lean_unsigned_to_nat(1u);
v___x_1431_ = lean_nat_sub(v_i_1414_, v___x_1430_);
v___x_1432_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(v_rewritable_1413_, v___x_1431_, v_fn_1428_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1452_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1452_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1452_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; uint8_t v___x_1438_; 
v___x_1437_ = lean_array_fget_borrowed(v_rewritable_1413_, v___x_1431_);
lean_dec(v___x_1431_);
v___x_1438_ = lean_unbox(v___x_1437_);
if (v___x_1438_ == 0)
{
if (lean_obj_tag(v_a_1433_) == 0)
{
uint8_t v_contextDependent_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
lean_dec_ref(v_arg_1429_);
lean_dec_ref(v_e_1415_);
lean_dec_ref(v_fn_1428_);
v_contextDependent_1439_ = lean_ctor_get_uint8(v_a_1433_, 1);
lean_dec_ref(v_a_1433_);
v___x_1440_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_1439_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1440_);
v___x_1442_ = v___x_1435_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
else
{
lean_object* v_e_x27_1444_; lean_object* v_proof_1445_; uint8_t v_contextDependent_1446_; uint8_t v___x_1447_; lean_object* v___x_1448_; 
lean_del_object(v___x_1435_);
v_e_x27_1444_ = lean_ctor_get(v_a_1433_, 0);
lean_inc_ref(v_e_x27_1444_);
v_proof_1445_ = lean_ctor_get(v_a_1433_, 1);
lean_inc_ref(v_proof_1445_);
v_contextDependent_1446_ = lean_ctor_get_uint8(v_a_1433_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_1433_);
v___x_1447_ = lean_unbox(v___x_1437_);
v___x_1448_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_1415_, v_fn_1428_, v_arg_1429_, v_e_x27_1444_, v_proof_1445_, v___x_1447_, v_contextDependent_1446_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
return v___x_1448_;
}
}
else
{
lean_object* v___x_1449_; 
lean_del_object(v___x_1435_);
lean_inc(v_a_1424_);
lean_inc_ref(v_a_1423_);
lean_inc(v_a_1422_);
lean_inc_ref(v_a_1421_);
lean_inc(v_a_1420_);
lean_inc_ref(v_a_1419_);
lean_inc(v_a_1418_);
lean_inc_ref(v_a_1417_);
lean_inc(v_a_1416_);
lean_inc_ref(v_arg_1429_);
v___x_1449_ = lean_sym_simp(v_arg_1429_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_1415_, v_fn_1428_, v_arg_1429_, v_a_1433_, v_a_1450_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
return v___x_1451_;
}
else
{
lean_dec(v_a_1433_);
lean_dec_ref(v_arg_1429_);
lean_dec_ref(v_e_1415_);
lean_dec_ref(v_fn_1428_);
return v___x_1449_;
}
}
}
}
else
{
lean_dec(v___x_1431_);
lean_dec_ref(v_arg_1429_);
lean_dec_ref(v_e_1415_);
lean_dec_ref(v_fn_1428_);
return v___x_1432_;
}
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec_ref(v_e_1415_);
v___x_1453_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___closed__1);
v___x_1454_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_1453_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
return v___x_1454_;
}
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
lean_dec_ref(v_e_1415_);
v___x_1455_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg___boxed(lean_object* v_rewritable_1457_, lean_object* v_i_1458_, lean_object* v_e_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(v_rewritable_1457_, v_i_1458_, v_e_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
lean_dec(v_a_1466_);
lean_dec_ref(v_a_1465_);
lean_dec(v_a_1464_);
lean_dec_ref(v_a_1463_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_a_1460_);
lean_dec(v_i_1458_);
lean_dec_ref(v_rewritable_1457_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go(lean_object* v_rewritable_1471_, lean_object* v_i_1472_, lean_object* v_e_1473_, lean_object* v_h_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(v_rewritable_1471_, v_i_1472_, v_e_1473_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_, v_a_1482_, v_a_1483_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___boxed(lean_object* v_rewritable_1486_, lean_object* v_i_1487_, lean_object* v_e_1488_, lean_object* v_h_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go(v_rewritable_1486_, v_i_1487_, v_e_1488_, v_h_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_);
lean_dec(v_a_1498_);
lean_dec_ref(v_a_1497_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec(v_i_1487_);
lean_dec_ref(v_rewritable_1486_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0(lean_object* v_rewritable_1501_, lean_object* v___x_1502_, lean_object* v_x_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(v_rewritable_1501_, v___x_1502_, v_x_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0___boxed(lean_object* v_rewritable_1515_, lean_object* v___x_1516_, lean_object* v_x_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0(v_rewritable_1515_, v___x_1516_, v_x_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec(v___x_1516_);
lean_dec_ref(v_rewritable_1515_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced(lean_object* v_e_1529_, lean_object* v_rewritable_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_numArgs_1541_; lean_object* v___x_1542_; uint8_t v___x_1543_; 
v_numArgs_1541_ = l_Lean_Expr_getAppNumArgs(v_e_1529_);
v___x_1542_ = lean_unsigned_to_nat(0u);
v___x_1543_ = lean_nat_dec_eq(v_numArgs_1541_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; uint8_t v___x_1545_; 
v___x_1544_ = lean_array_get_size(v_rewritable_1530_);
v___x_1545_ = lean_nat_dec_lt(v___x_1544_, v_numArgs_1541_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; 
v___x_1546_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpInterlaced_go___redArg(v_rewritable_1530_, v_numArgs_1541_, v_e_1529_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec(v_numArgs_1541_);
lean_dec_ref(v_rewritable_1530_);
return v___x_1546_;
}
else
{
lean_object* v___f_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___f_1547_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpInterlaced___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1547_, 0, v_rewritable_1530_);
lean_closure_set(v___f_1547_, 1, v___x_1544_);
v___x_1548_ = lean_nat_sub(v_numArgs_1541_, v___x_1544_);
lean_dec(v_numArgs_1541_);
v___x_1549_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v___f_1547_, v_e_1529_, v___x_1548_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec(v___x_1548_);
return v___x_1549_;
}
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
lean_dec(v_numArgs_1541_);
lean_dec_ref(v_rewritable_1530_);
lean_dec_ref(v_e_1529_);
v___x_1550_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced___boxed(lean_object* v_e_1552_, lean_object* v_rewritable_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Meta_Sym_Simp_simpInterlaced(v_e_1552_, v_rewritable_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
lean_dec(v_a_1558_);
lean_dec_ref(v_a_1557_);
lean_dec(v_a_1556_);
lean_dec_ref(v_a_1555_);
lean_dec(v_a_1554_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_pushResult(lean_object* v_argResults_1565_, lean_object* v_numEqs_1566_, lean_object* v_result_1567_){
_start:
{
if (lean_obj_tag(v_result_1567_) == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; uint8_t v___x_1570_; 
lean_dec(v_numEqs_1566_);
v___x_1568_ = lean_unsigned_to_nat(0u);
v___x_1569_ = lean_array_get_size(v_argResults_1565_);
v___x_1570_ = lean_nat_dec_lt(v___x_1568_, v___x_1569_);
if (v___x_1570_ == 0)
{
lean_dec_ref(v_result_1567_);
return v_argResults_1565_;
}
else
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_array_push(v_argResults_1565_, v_result_1567_);
return v___x_1571_;
}
}
else
{
lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1572_ = lean_array_get_size(v_argResults_1565_);
v___x_1573_ = lean_nat_dec_lt(v___x_1572_, v_numEqs_1566_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; 
lean_dec(v_numEqs_1566_);
v___x_1574_ = lean_array_push(v_argResults_1565_, v_result_1567_);
return v___x_1574_;
}
else
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec_ref(v_argResults_1565_);
v___x_1575_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_1576_ = lean_mk_array(v_numEqs_1566_, v___x_1575_);
v___x_1577_ = lean_array_push(v___x_1576_, v_result_1567_);
return v___x_1577_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0(void){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpUsingCongrThm.simpEqArgs", 81, 81);
return v___x_1578_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1579_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1580_ = lean_unsigned_to_nat(13u);
v___x_1581_ = lean_unsigned_to_nat(429u);
v___x_1582_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__0);
v___x_1583_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1584_ = l_mkPanicMessageWithDecl(v___x_1583_, v___x_1582_, v___x_1581_, v___x_1580_, v___x_1579_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs(lean_object* v_argKinds_1585_, lean_object* v_mkNonRflResult_1586_, lean_object* v_e_1587_, lean_object* v_i_1588_, lean_object* v_numEqs_1589_, lean_object* v_argResults_1590_, uint8_t v_anyCD_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_){
_start:
{
if (lean_obj_tag(v_e_1587_) == 5)
{
lean_object* v_fn_1602_; lean_object* v_arg_1603_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; uint8_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; 
v_fn_1602_ = lean_ctor_get(v_e_1587_, 0);
lean_inc_ref(v_fn_1602_);
v_arg_1603_ = lean_ctor_get(v_e_1587_, 1);
lean_inc_ref(v_arg_1603_);
lean_dec_ref(v_e_1587_);
v___x_1617_ = 0;
v___x_1618_ = lean_box(v___x_1617_);
v___x_1619_ = lean_array_get(v___x_1618_, v_argKinds_1585_, v_i_1588_);
lean_dec(v___x_1618_);
v___x_1620_ = lean_unbox(v___x_1619_);
lean_dec(v___x_1619_);
switch(v___x_1620_)
{
case 5:
{
lean_dec_ref(v_arg_1603_);
v___y_1605_ = v_a_1592_;
v___y_1606_ = v_a_1593_;
v___y_1607_ = v_a_1594_;
v___y_1608_ = v_a_1595_;
v___y_1609_ = v_a_1596_;
v___y_1610_ = v_a_1597_;
v___y_1611_ = v_a_1598_;
v___y_1612_ = v_a_1599_;
v___y_1613_ = v_a_1600_;
goto v___jp_1604_;
}
case 0:
{
lean_dec_ref(v_arg_1603_);
v___y_1605_ = v_a_1592_;
v___y_1606_ = v_a_1593_;
v___y_1607_ = v_a_1594_;
v___y_1608_ = v_a_1595_;
v___y_1609_ = v_a_1596_;
v___y_1610_ = v_a_1597_;
v___y_1611_ = v_a_1598_;
v___y_1612_ = v_a_1599_;
v___y_1613_ = v_a_1600_;
goto v___jp_1604_;
}
case 3:
{
lean_dec_ref(v_arg_1603_);
v___y_1605_ = v_a_1592_;
v___y_1606_ = v_a_1593_;
v___y_1607_ = v_a_1594_;
v___y_1608_ = v_a_1595_;
v___y_1609_ = v_a_1596_;
v___y_1610_ = v_a_1597_;
v___y_1611_ = v_a_1598_;
v___y_1612_ = v_a_1599_;
v___y_1613_ = v_a_1600_;
goto v___jp_1604_;
}
case 2:
{
lean_object* v___x_1621_; 
lean_inc(v_a_1600_);
lean_inc_ref(v_a_1599_);
lean_inc(v_a_1598_);
lean_inc_ref(v_a_1597_);
lean_inc(v_a_1596_);
lean_inc_ref(v_a_1595_);
lean_inc(v_a_1594_);
lean_inc_ref(v_a_1593_);
lean_inc(v_a_1592_);
v___x_1621_ = lean_sym_simp(v_arg_1603_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc_n(v_a_1622_, 2);
lean_dec_ref(v___x_1621_);
v___x_1623_ = lean_unsigned_to_nat(1u);
v___x_1624_ = lean_nat_sub(v_i_1588_, v___x_1623_);
lean_dec(v_i_1588_);
v___x_1625_ = lean_nat_add(v_numEqs_1589_, v___x_1623_);
v___x_1626_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_pushResult(v_argResults_1590_, v_numEqs_1589_, v_a_1622_);
if (v_anyCD_1591_ == 0)
{
if (lean_obj_tag(v_a_1622_) == 0)
{
uint8_t v_contextDependent_1627_; 
v_contextDependent_1627_ = lean_ctor_get_uint8(v_a_1622_, 1);
lean_dec_ref(v_a_1622_);
v_e_1587_ = v_fn_1602_;
v_i_1588_ = v___x_1624_;
v_numEqs_1589_ = v___x_1625_;
v_argResults_1590_ = v___x_1626_;
v_anyCD_1591_ = v_contextDependent_1627_;
goto _start;
}
else
{
uint8_t v_contextDependent_1629_; 
v_contextDependent_1629_ = lean_ctor_get_uint8(v_a_1622_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_1622_);
v_e_1587_ = v_fn_1602_;
v_i_1588_ = v___x_1624_;
v_numEqs_1589_ = v___x_1625_;
v_argResults_1590_ = v___x_1626_;
v_anyCD_1591_ = v_contextDependent_1629_;
goto _start;
}
}
else
{
lean_dec(v_a_1622_);
v_e_1587_ = v_fn_1602_;
v_i_1588_ = v___x_1624_;
v_numEqs_1589_ = v___x_1625_;
v_argResults_1590_ = v___x_1626_;
goto _start;
}
}
else
{
lean_dec_ref(v_fn_1602_);
lean_dec_ref(v_argResults_1590_);
lean_dec(v_numEqs_1589_);
lean_dec(v_i_1588_);
lean_dec_ref(v_mkNonRflResult_1586_);
return v___x_1621_;
}
}
default: 
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
lean_dec_ref(v_arg_1603_);
lean_dec_ref(v_fn_1602_);
lean_dec_ref(v_argResults_1590_);
lean_dec(v_numEqs_1589_);
lean_dec(v_i_1588_);
lean_dec_ref(v_mkNonRflResult_1586_);
v___x_1632_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___closed__1);
v___x_1633_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_1632_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_);
return v___x_1633_;
}
}
v___jp_1604_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_unsigned_to_nat(1u);
v___x_1615_ = lean_nat_sub(v_i_1588_, v___x_1614_);
lean_dec(v_i_1588_);
v_e_1587_ = v_fn_1602_;
v_i_1588_ = v___x_1615_;
v_a_1592_ = v___y_1605_;
v_a_1593_ = v___y_1606_;
v_a_1594_ = v___y_1607_;
v_a_1595_ = v___y_1608_;
v_a_1596_ = v___y_1609_;
v_a_1597_ = v___y_1610_;
v_a_1598_ = v___y_1611_;
v_a_1599_ = v___y_1612_;
v_a_1600_ = v___y_1613_;
goto _start;
}
}
else
{
lean_object* v___x_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; 
lean_dec(v_numEqs_1589_);
lean_dec(v_i_1588_);
lean_dec_ref(v_e_1587_);
v___x_1634_ = lean_array_get_size(v_argResults_1590_);
v___x_1635_ = lean_unsigned_to_nat(0u);
v___x_1636_ = lean_nat_dec_eq(v___x_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = l_Array_reverse___redArg(v_argResults_1590_);
lean_inc(v_a_1600_);
lean_inc_ref(v_a_1599_);
lean_inc(v_a_1598_);
lean_inc_ref(v_a_1597_);
lean_inc(v_a_1596_);
lean_inc_ref(v_a_1595_);
lean_inc(v_a_1594_);
lean_inc_ref(v_a_1593_);
lean_inc(v_a_1592_);
v___x_1638_ = lean_apply_11(v_mkNonRflResult_1586_, v___x_1637_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, lean_box(0));
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; uint8_t v___y_1644_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
if (v_anyCD_1591_ == 0)
{
lean_dec(v_a_1639_);
return v___x_1638_;
}
else
{
if (lean_obj_tag(v_a_1639_) == 0)
{
uint8_t v_contextDependent_1645_; 
v_contextDependent_1645_ = lean_ctor_get_uint8(v_a_1639_, 1);
v___y_1644_ = v_contextDependent_1645_;
goto v___jp_1643_;
}
else
{
uint8_t v_contextDependent_1646_; 
v_contextDependent_1646_ = lean_ctor_get_uint8(v_a_1639_, sizeof(void*)*2 + 1);
v___y_1644_ = v_contextDependent_1646_;
goto v___jp_1643_;
}
}
v___jp_1640_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1639_);
v___x_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
return v___x_1642_;
}
v___jp_1643_:
{
if (v___y_1644_ == 0)
{
lean_dec_ref(v___x_1638_);
goto v___jp_1640_;
}
else
{
if (v___x_1636_ == 0)
{
lean_dec(v_a_1639_);
return v___x_1638_;
}
else
{
lean_dec_ref(v___x_1638_);
goto v___jp_1640_;
}
}
}
}
else
{
return v___x_1638_;
}
}
else
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
lean_dec_ref(v_argResults_1590_);
lean_dec_ref(v_mkNonRflResult_1586_);
v___x_1647_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_anyCD_1591_);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs___boxed(lean_object** _args){
lean_object* v_argKinds_1649_ = _args[0];
lean_object* v_mkNonRflResult_1650_ = _args[1];
lean_object* v_e_1651_ = _args[2];
lean_object* v_i_1652_ = _args[3];
lean_object* v_numEqs_1653_ = _args[4];
lean_object* v_argResults_1654_ = _args[5];
lean_object* v_anyCD_1655_ = _args[6];
lean_object* v_a_1656_ = _args[7];
lean_object* v_a_1657_ = _args[8];
lean_object* v_a_1658_ = _args[9];
lean_object* v_a_1659_ = _args[10];
lean_object* v_a_1660_ = _args[11];
lean_object* v_a_1661_ = _args[12];
lean_object* v_a_1662_ = _args[13];
lean_object* v_a_1663_ = _args[14];
lean_object* v_a_1664_ = _args[15];
lean_object* v_a_1665_ = _args[16];
_start:
{
uint8_t v_anyCD_boxed_1666_; lean_object* v_res_1667_; 
v_anyCD_boxed_1666_ = lean_unbox(v_anyCD_1655_);
v_res_1667_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs(v_argKinds_1649_, v_mkNonRflResult_1650_, v_e_1651_, v_i_1652_, v_numEqs_1653_, v_argResults_1654_, v_anyCD_boxed_1666_, v_a_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
lean_dec(v_a_1662_);
lean_dec_ref(v_a_1661_);
lean_dec(v_a_1660_);
lean_dec_ref(v_a_1659_);
lean_dec(v_a_1658_);
lean_dec_ref(v_a_1657_);
lean_dec(v_a_1656_);
lean_dec_ref(v_argKinds_1649_);
return v_res_1667_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_box(0));
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0(lean_object* v_msg_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v___x_1680_; lean_object* v___x_21488__overap_1681_; lean_object* v___x_1682_; 
v___x_1680_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___closed__0);
v___x_21488__overap_1681_ = lean_panic_fn_borrowed(v___x_1680_, v_msg_1669_);
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
lean_inc(v___y_1674_);
lean_inc_ref(v___y_1673_);
lean_inc(v___y_1672_);
lean_inc_ref(v___y_1671_);
lean_inc(v___y_1670_);
v___x_1682_ = lean_apply_10(v___x_21488__overap_1681_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, lean_box(0));
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0___boxed(lean_object* v_msg_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0(v_msg_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
return v_res_1694_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpUsingCongrThm", 70, 70);
return v___x_1695_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1696_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1697_ = lean_unsigned_to_nat(13u);
v___x_1698_ = lean_unsigned_to_nat(401u);
v___x_1699_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0);
v___x_1700_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1701_ = l_mkPanicMessageWithDecl(v___x_1700_, v___x_1699_, v___x_1698_, v___x_1697_, v___x_1696_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1(lean_object* v_argResults_1702_, lean_object* v_as_1703_, size_t v_sz_1704_, size_t v_i_1705_, lean_object* v_b_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_a_1718_; uint8_t v___x_1722_; 
v___x_1722_ = lean_usize_dec_lt(v_i_1705_, v_sz_1704_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_b_1706_);
return v___x_1723_;
}
else
{
lean_object* v_snd_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1919_; 
v_snd_1724_ = lean_ctor_get(v_b_1706_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_b_1706_);
if (v_isSharedCheck_1919_ == 0)
{
lean_object* v_unused_1920_; 
v_unused_1920_ = lean_ctor_get(v_b_1706_, 0);
lean_dec(v_unused_1920_);
v___x_1726_ = v_b_1706_;
v_isShared_1727_ = v_isSharedCheck_1919_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_snd_1724_);
lean_dec(v_b_1706_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1919_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v_snd_1728_; lean_object* v_snd_1729_; lean_object* v_snd_1730_; lean_object* v_snd_1731_; lean_object* v_fst_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1917_; 
v_snd_1728_ = lean_ctor_get(v_snd_1724_, 1);
lean_inc(v_snd_1728_);
v_snd_1729_ = lean_ctor_get(v_snd_1728_, 1);
lean_inc(v_snd_1729_);
v_snd_1730_ = lean_ctor_get(v_snd_1729_, 1);
lean_inc(v_snd_1730_);
v_snd_1731_ = lean_ctor_get(v_snd_1730_, 1);
lean_inc(v_snd_1731_);
v_fst_1732_ = lean_ctor_get(v_snd_1724_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_snd_1724_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; 
v_unused_1918_ = lean_ctor_get(v_snd_1724_, 1);
lean_dec(v_unused_1918_);
v___x_1734_ = v_snd_1724_;
v_isShared_1735_ = v_isSharedCheck_1917_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_fst_1732_);
lean_dec(v_snd_1724_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1917_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v_fst_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1915_; 
v_fst_1736_ = lean_ctor_get(v_snd_1728_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_snd_1728_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_snd_1728_, 1);
lean_dec(v_unused_1916_);
v___x_1738_ = v_snd_1728_;
v_isShared_1739_ = v_isSharedCheck_1915_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_fst_1736_);
lean_dec(v_snd_1728_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1915_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_fst_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1913_; 
v_fst_1740_ = lean_ctor_get(v_snd_1729_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_snd_1729_);
if (v_isSharedCheck_1913_ == 0)
{
lean_object* v_unused_1914_; 
v_unused_1914_ = lean_ctor_get(v_snd_1729_, 1);
lean_dec(v_unused_1914_);
v___x_1742_ = v_snd_1729_;
v_isShared_1743_ = v_isSharedCheck_1913_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_fst_1740_);
lean_dec(v_snd_1729_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1913_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v_fst_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1911_; 
v_fst_1744_ = lean_ctor_get(v_snd_1730_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v_snd_1730_);
if (v_isSharedCheck_1911_ == 0)
{
lean_object* v_unused_1912_; 
v_unused_1912_ = lean_ctor_get(v_snd_1730_, 1);
lean_dec(v_unused_1912_);
v___x_1746_ = v_snd_1730_;
v_isShared_1747_ = v_isSharedCheck_1911_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_fst_1744_);
lean_dec(v_snd_1730_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1911_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v_array_1748_; lean_object* v_start_1749_; lean_object* v_stop_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v_array_1748_ = lean_ctor_get(v_snd_1731_, 0);
v_start_1749_ = lean_ctor_get(v_snd_1731_, 1);
v_stop_1750_ = lean_ctor_get(v_snd_1731_, 2);
v___x_1751_ = lean_box(0);
v___x_1752_ = lean_nat_dec_lt(v_start_1749_, v_stop_1750_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1754_; 
if (v_isShared_1747_ == 0)
{
v___x_1754_ = v___x_1746_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_fst_1744_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_snd_1731_);
v___x_1754_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 1, v___x_1754_);
v___x_1756_ = v___x_1742_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_fst_1740_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1758_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v___x_1756_);
v___x_1758_ = v___x_1738_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_fst_1736_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1760_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 1, v___x_1758_);
v___x_1760_ = v___x_1734_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_fst_1732_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1762_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 1, v___x_1760_);
lean_ctor_set(v___x_1726_, 0, v___x_1751_);
v___x_1762_ = v___x_1726_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
}
}
}
}
}
else
{
lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1907_; 
lean_inc(v_stop_1750_);
lean_inc(v_start_1749_);
lean_inc_ref(v_array_1748_);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_snd_1731_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; lean_object* v_unused_1909_; lean_object* v_unused_1910_; 
v_unused_1908_ = lean_ctor_get(v_snd_1731_, 2);
lean_dec(v_unused_1908_);
v_unused_1909_ = lean_ctor_get(v_snd_1731_, 1);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v_snd_1731_, 0);
lean_dec(v_unused_1910_);
v___x_1770_ = v_snd_1731_;
v_isShared_1771_ = v_isSharedCheck_1907_;
goto v_resetjp_1769_;
}
else
{
lean_dec(v_snd_1731_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1907_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v_a_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; 
v_a_1772_ = lean_array_uget_borrowed(v_as_1703_, v_i_1705_);
v___x_1773_ = lean_array_fget(v_array_1748_, v_start_1749_);
v___x_1774_ = lean_unsigned_to_nat(1u);
v___x_1775_ = lean_nat_add(v_start_1749_, v___x_1774_);
lean_dec(v_start_1749_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v___x_1775_);
v___x_1777_ = v___x_1770_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_array_1748_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v___x_1775_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v_stop_1750_);
v___x_1777_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v_proof_1781_; lean_object* v_subst_1782_; uint8_t v___x_1808_; 
lean_inc(v_a_1772_);
v___x_1778_ = l_Lean_Expr_app___override(v_fst_1732_, v_a_1772_);
v___x_1779_ = l_Lean_Expr_bindingBody_x21(v_fst_1736_);
lean_dec(v_fst_1736_);
v___x_1808_ = lean_unbox(v___x_1773_);
lean_dec(v___x_1773_);
switch(v___x_1808_)
{
case 0:
{
lean_del_object(v___x_1746_);
lean_del_object(v___x_1742_);
lean_del_object(v___x_1738_);
lean_del_object(v___x_1734_);
lean_del_object(v___x_1726_);
goto v___jp_1801_;
}
case 3:
{
lean_del_object(v___x_1746_);
lean_del_object(v___x_1742_);
lean_del_object(v___x_1738_);
lean_del_object(v___x_1734_);
lean_del_object(v___x_1726_);
goto v___jp_1801_;
}
case 5:
{
lean_object* v___x_1809_; lean_object* v_instNew_1811_; lean_object* v___x_1820_; 
lean_del_object(v___x_1746_);
lean_del_object(v___x_1742_);
lean_del_object(v___x_1738_);
lean_del_object(v___x_1734_);
lean_del_object(v___x_1726_);
lean_inc_n(v_a_1772_, 2);
v___x_1809_ = lean_array_push(v_fst_1744_, v_a_1772_);
v___x_1820_ = l_Lean_Meta_Sym_inferType___redArg(v_a_1772_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref(v___x_1820_);
v___x_1822_ = l_Lean_Expr_bindingDomain_x21(v___x_1779_);
v___x_1823_ = lean_expr_instantiate_rev(v___x_1822_, v___x_1809_);
lean_dec_ref(v___x_1822_);
lean_inc_ref(v___x_1823_);
v___x_1824_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_a_1821_, v___x_1823_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; uint8_t v___x_1826_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref(v___x_1824_);
v___x_1826_ = lean_unbox(v_a_1825_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lean_Meta_trySynthInstance(v___x_1823_, v___x_1751_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1845_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1830_ = v___x_1827_;
v_isShared_1831_ = v_isSharedCheck_1845_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___x_1827_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1845_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
if (lean_obj_tag(v_a_1828_) == 1)
{
lean_object* v_a_1832_; 
lean_del_object(v___x_1830_);
lean_dec(v_a_1825_);
v_a_1832_ = lean_ctor_get(v_a_1828_, 0);
lean_inc(v_a_1832_);
lean_dec_ref(v_a_1828_);
v_instNew_1811_ = v_a_1832_;
goto v___jp_1810_;
}
else
{
lean_object* v___x_1833_; uint8_t v___x_1834_; uint8_t v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1843_; 
lean_dec(v_a_1828_);
v___x_1833_ = lean_alloc_ctor(0, 0, 2);
v___x_1834_ = lean_unbox(v_a_1825_);
lean_ctor_set_uint8(v___x_1833_, 0, v___x_1834_);
v___x_1835_ = lean_unbox(v_a_1825_);
lean_dec(v_a_1825_);
lean_ctor_set_uint8(v___x_1833_, 1, v___x_1835_);
v___x_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1833_);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1809_);
lean_ctor_set(v___x_1837_, 1, v___x_1777_);
v___x_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1838_, 0, v_fst_1740_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1779_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
v___x_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1778_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1836_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1841_);
v___x_1843_ = v___x_1830_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v_a_1825_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v___x_1779_);
lean_dec_ref(v___x_1778_);
lean_dec_ref(v___x_1777_);
lean_dec(v_fst_1740_);
v_a_1846_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1827_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1827_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
else
{
lean_dec(v_a_1825_);
lean_dec_ref(v___x_1823_);
lean_inc(v_a_1772_);
v_instNew_1811_ = v_a_1772_;
goto v___jp_1810_;
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec_ref(v___x_1823_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v___x_1779_);
lean_dec_ref(v___x_1778_);
lean_dec_ref(v___x_1777_);
lean_dec(v_fst_1740_);
v_a_1854_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1824_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1824_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
lean_dec_ref(v___x_1809_);
lean_dec_ref(v___x_1779_);
lean_dec_ref(v___x_1778_);
lean_dec_ref(v___x_1777_);
lean_dec(v_fst_1740_);
v_a_1862_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1820_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1820_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
v___jp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
lean_inc_ref(v_instNew_1811_);
v___x_1812_ = l_Lean_Expr_app___override(v___x_1778_, v_instNew_1811_);
v___x_1813_ = lean_array_push(v___x_1809_, v_instNew_1811_);
v___x_1814_ = l_Lean_Expr_bindingBody_x21(v___x_1779_);
lean_dec_ref(v___x_1779_);
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1777_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_fst_1740_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1814_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1812_);
lean_ctor_set(v___x_1818_, 1, v___x_1817_);
v___x_1819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1751_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
v_a_1718_ = v___x_1819_;
goto v___jp_1717_;
}
}
case 2:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = l_Lean_Meta_Sym_Simp_instInhabitedResult_default;
lean_inc(v_a_1772_);
v___x_1871_ = lean_array_push(v_fst_1744_, v_a_1772_);
v___x_1872_ = lean_array_get_borrowed(v___x_1870_, v_argResults_1702_, v_fst_1740_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v___x_1873_; 
lean_inc(v_a_1772_);
v___x_1873_ = l_Lean_Meta_Sym_mkEqRefl___redArg(v_a_1772_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc_n(v_a_1874_, 2);
lean_dec_ref(v___x_1873_);
lean_inc_n(v_a_1772_, 2);
v___x_1875_ = l_Lean_mkAppB(v___x_1778_, v_a_1772_, v_a_1874_);
v___x_1876_ = lean_array_push(v___x_1871_, v_a_1772_);
v___x_1877_ = lean_array_push(v___x_1876_, v_a_1874_);
v_proof_1781_ = v___x_1875_;
v_subst_1782_ = v___x_1877_;
goto v___jp_1780_;
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1779_);
lean_dec_ref(v___x_1778_);
lean_dec_ref(v___x_1777_);
lean_del_object(v___x_1746_);
lean_del_object(v___x_1742_);
lean_dec(v_fst_1740_);
lean_del_object(v___x_1738_);
lean_del_object(v___x_1734_);
lean_del_object(v___x_1726_);
v_a_1878_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1873_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1873_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_e_x27_1886_; lean_object* v_proof_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_e_x27_1886_ = lean_ctor_get(v___x_1872_, 0);
v_proof_1887_ = lean_ctor_get(v___x_1872_, 1);
lean_inc_ref_n(v_proof_1887_, 2);
lean_inc_ref_n(v_e_x27_1886_, 2);
v___x_1888_ = l_Lean_mkAppB(v___x_1778_, v_e_x27_1886_, v_proof_1887_);
v___x_1889_ = lean_array_push(v___x_1871_, v_e_x27_1886_);
v___x_1890_ = lean_array_push(v___x_1889_, v_proof_1887_);
v_proof_1781_ = v___x_1888_;
v_subst_1782_ = v___x_1890_;
goto v___jp_1780_;
}
}
default: 
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
lean_del_object(v___x_1746_);
lean_del_object(v___x_1742_);
lean_del_object(v___x_1738_);
lean_del_object(v___x_1734_);
lean_del_object(v___x_1726_);
v___x_1891_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__1);
v___x_1892_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__0(v___x_1891_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec_ref(v___x_1892_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v_fst_1744_);
lean_ctor_set(v___x_1893_, 1, v___x_1777_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v_fst_1740_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1779_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1778_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1751_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v_a_1718_ = v___x_1897_;
goto v___jp_1717_;
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
lean_dec_ref(v___x_1779_);
lean_dec_ref(v___x_1778_);
lean_dec_ref(v___x_1777_);
lean_dec(v_fst_1744_);
lean_dec(v_fst_1740_);
v_a_1898_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1892_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1892_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
v___jp_1780_:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1787_; 
v___x_1783_ = l_Lean_Expr_bindingBody_x21(v___x_1779_);
lean_dec_ref(v___x_1779_);
v___x_1784_ = l_Lean_Expr_bindingBody_x21(v___x_1783_);
lean_dec_ref(v___x_1783_);
v___x_1785_ = lean_nat_add(v_fst_1740_, v___x_1774_);
lean_dec(v_fst_1740_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 1, v___x_1777_);
lean_ctor_set(v___x_1746_, 0, v_subst_1782_);
v___x_1787_ = v___x_1746_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_subst_1782_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v___x_1777_);
v___x_1787_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1789_; 
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 1, v___x_1787_);
lean_ctor_set(v___x_1742_, 0, v___x_1785_);
v___x_1789_ = v___x_1742_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1785_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
lean_object* v___x_1791_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v___x_1789_);
lean_ctor_set(v___x_1738_, 0, v___x_1784_);
v___x_1791_ = v___x_1738_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1793_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 1, v___x_1791_);
lean_ctor_set(v___x_1734_, 0, v_proof_1781_);
v___x_1793_ = v___x_1734_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_proof_1781_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1795_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 1, v___x_1793_);
lean_ctor_set(v___x_1726_, 0, v___x_1751_);
v___x_1795_ = v___x_1726_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v_a_1718_ = v___x_1795_;
goto v___jp_1717_;
}
}
}
}
}
}
v___jp_1801_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
lean_inc(v_a_1772_);
v___x_1802_ = lean_array_push(v_fst_1744_, v_a_1772_);
v___x_1803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
lean_ctor_set(v___x_1803_, 1, v___x_1777_);
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v_fst_1740_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
v___x_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1779_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1778_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1751_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v_a_1718_ = v___x_1807_;
goto v___jp_1717_;
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
v___jp_1717_:
{
size_t v___x_1719_; size_t v___x_1720_; 
v___x_1719_ = ((size_t)1ULL);
v___x_1720_ = lean_usize_add(v_i_1705_, v___x_1719_);
v_i_1705_ = v___x_1720_;
v_b_1706_ = v_a_1718_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___boxed(lean_object* v_argResults_1921_, lean_object* v_as_1922_, lean_object* v_sz_1923_, lean_object* v_i_1924_, lean_object* v_b_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
size_t v_sz_boxed_1936_; size_t v_i_boxed_1937_; lean_object* v_res_1938_; 
v_sz_boxed_1936_ = lean_unbox_usize(v_sz_1923_);
lean_dec(v_sz_1923_);
v_i_boxed_1937_ = lean_unbox_usize(v_i_1924_);
lean_dec(v_i_1924_);
v_res_1938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1(v_argResults_1921_, v_as_1922_, v_sz_boxed_1936_, v_i_boxed_1937_, v_b_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v_as_1922_);
lean_dec_ref(v_argResults_1921_);
return v_res_1938_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3(uint8_t v___x_1939_, lean_object* v_as_1940_, size_t v_i_1941_, size_t v_stop_1942_){
_start:
{
uint8_t v___x_1943_; 
v___x_1943_ = lean_usize_dec_eq(v_i_1941_, v_stop_1942_);
if (v___x_1943_ == 0)
{
uint8_t v___x_1944_; uint8_t v___y_1946_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v___x_1944_ = 1;
v___x_1950_ = lean_array_uget_borrowed(v_as_1940_, v_i_1941_);
v___x_1951_ = lean_unbox(v___x_1950_);
if (v___x_1951_ == 3)
{
v___y_1946_ = v___x_1939_;
goto v___jp_1945_;
}
else
{
v___y_1946_ = v___x_1943_;
goto v___jp_1945_;
}
v___jp_1945_:
{
if (v___y_1946_ == 0)
{
size_t v___x_1947_; size_t v___x_1948_; 
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_add(v_i_1941_, v___x_1947_);
v_i_1941_ = v___x_1948_;
goto _start;
}
else
{
return v___x_1944_;
}
}
}
else
{
uint8_t v___x_1952_; 
v___x_1952_ = 0;
return v___x_1952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3___boxed(lean_object* v___x_1953_, lean_object* v_as_1954_, lean_object* v_i_1955_, lean_object* v_stop_1956_){
_start:
{
uint8_t v___x_23732__boxed_1957_; size_t v_i_boxed_1958_; size_t v_stop_boxed_1959_; uint8_t v_res_1960_; lean_object* v_r_1961_; 
v___x_23732__boxed_1957_ = lean_unbox(v___x_1953_);
v_i_boxed_1958_ = lean_unbox_usize(v_i_1955_);
lean_dec(v_i_1955_);
v_stop_boxed_1959_ = lean_unbox_usize(v_stop_1956_);
lean_dec(v_stop_1956_);
v_res_1960_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3(v___x_23732__boxed_1957_, v_as_1954_, v_i_boxed_1958_, v_stop_boxed_1959_);
lean_dec_ref(v_as_1954_);
v_r_1961_ = lean_box(v_res_1960_);
return v_r_1961_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2(lean_object* v_as_1962_, size_t v_i_1963_, size_t v_stop_1964_){
_start:
{
uint8_t v___x_1965_; 
v___x_1965_ = lean_usize_dec_eq(v_i_1963_, v_stop_1964_);
if (v___x_1965_ == 0)
{
uint8_t v___x_1966_; uint8_t v___y_1968_; lean_object* v___x_1972_; 
v___x_1966_ = 1;
v___x_1972_ = lean_array_uget_borrowed(v_as_1962_, v_i_1963_);
if (lean_obj_tag(v___x_1972_) == 0)
{
uint8_t v_contextDependent_1973_; 
v_contextDependent_1973_ = lean_ctor_get_uint8(v___x_1972_, 1);
v___y_1968_ = v_contextDependent_1973_;
goto v___jp_1967_;
}
else
{
uint8_t v_contextDependent_1974_; 
v_contextDependent_1974_ = lean_ctor_get_uint8(v___x_1972_, sizeof(void*)*2 + 1);
v___y_1968_ = v_contextDependent_1974_;
goto v___jp_1967_;
}
v___jp_1967_:
{
if (v___y_1968_ == 0)
{
size_t v___x_1969_; size_t v___x_1970_; 
v___x_1969_ = ((size_t)1ULL);
v___x_1970_ = lean_usize_add(v_i_1963_, v___x_1969_);
v_i_1963_ = v___x_1970_;
goto _start;
}
else
{
return v___x_1966_;
}
}
}
else
{
uint8_t v___x_1975_; 
v___x_1975_ = 0;
return v___x_1975_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2___boxed(lean_object* v_as_1976_, lean_object* v_i_1977_, lean_object* v_stop_1978_){
_start:
{
size_t v_i_boxed_1979_; size_t v_stop_boxed_1980_; uint8_t v_res_1981_; lean_object* v_r_1982_; 
v_i_boxed_1979_ = lean_unbox_usize(v_i_1977_);
lean_dec(v_i_1977_);
v_stop_boxed_1980_ = lean_unbox_usize(v_stop_1978_);
lean_dec(v_stop_1978_);
v_res_1981_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2(v_as_1976_, v_i_boxed_1979_, v_stop_boxed_1980_);
lean_dec_ref(v_as_1976_);
v_r_1982_ = lean_box(v_res_1981_);
return v_r_1982_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1983_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_1984_ = lean_unsigned_to_nat(34u);
v___x_1985_ = lean_unsigned_to_nat(402u);
v___x_1986_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1___closed__0);
v___x_1987_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_1988_ = l_mkPanicMessageWithDecl(v___x_1987_, v___x_1986_, v___x_1985_, v___x_1984_, v___x_1983_);
return v___x_1988_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1(void){
_start:
{
lean_object* v_j_1989_; lean_object* v_subst_1990_; 
v_j_1989_ = lean_unsigned_to_nat(0u);
v_subst_1990_ = lean_mk_empty_array_with_capacity(v_j_1989_);
return v_subst_1990_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1991_; lean_object* v_dummy_1992_; 
v___x_1991_ = lean_box(0);
v_dummy_1992_ = l_Lean_Expr_sort___override(v___x_1991_);
return v_dummy_1992_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_1993_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__3);
v___x_1995_ = l_Lean_Name_mkStr1(v___x_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0(lean_object* v_e_1996_, lean_object* v_argKinds_1997_, lean_object* v_type_1998_, lean_object* v_proof_1999_, lean_object* v_argResults_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v_j_2023_; lean_object* v_subst_2024_; lean_object* v_dummy_2025_; lean_object* v_nargs_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_args_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; size_t v_sz_2039_; size_t v___x_2040_; lean_object* v___x_2041_; 
v_j_2023_ = lean_unsigned_to_nat(0u);
v_subst_2024_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__1);
v_dummy_2025_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__2);
v_nargs_2026_ = l_Lean_Expr_getAppNumArgs(v_e_1996_);
lean_inc(v_nargs_2026_);
v___x_2027_ = lean_mk_array(v_nargs_2026_, v_dummy_2025_);
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_sub(v_nargs_2026_, v___x_2028_);
lean_dec(v_nargs_2026_);
v_args_2030_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1996_, v___x_2027_, v___x_2029_);
v___x_2031_ = lean_array_get_size(v_argKinds_1997_);
lean_inc_ref(v_argKinds_1997_);
v___x_2032_ = l_Array_toSubarray___redArg(v_argKinds_1997_, v_j_2023_, v___x_2031_);
v___x_2033_ = lean_box(0);
v___x_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2034_, 0, v_subst_2024_);
lean_ctor_set(v___x_2034_, 1, v___x_2032_);
v___x_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2035_, 0, v_j_2023_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v_type_1998_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2037_, 0, v_proof_1999_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
v___x_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2033_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v_sz_2039_ = lean_array_size(v_args_2030_);
v___x_2040_ = ((size_t)0ULL);
v___x_2041_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__1(v_argResults_2000_, v_args_2030_, v_sz_2039_, v___x_2040_, v___x_2038_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec_ref(v_args_2030_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2108_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2044_ = v___x_2041_;
v_isShared_2045_ = v_isSharedCheck_2108_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2041_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2108_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v_fst_2046_; 
v_fst_2046_ = lean_ctor_get(v_a_2042_, 0);
if (lean_obj_tag(v_fst_2046_) == 0)
{
lean_object* v_snd_2047_; lean_object* v_fst_2048_; lean_object* v_snd_2049_; lean_object* v___y_2051_; uint8_t v___y_2052_; lean_object* v_rhs_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v_fst_2076_; lean_object* v_snd_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; 
v_snd_2047_ = lean_ctor_get(v_a_2042_, 1);
lean_inc(v_snd_2047_);
lean_dec(v_a_2042_);
v_fst_2048_ = lean_ctor_get(v_snd_2047_, 0);
lean_inc(v_fst_2048_);
v_snd_2049_ = lean_ctor_get(v_snd_2047_, 1);
lean_inc(v_snd_2049_);
lean_dec(v_snd_2047_);
v_fst_2076_ = lean_ctor_get(v_snd_2049_, 0);
lean_inc(v_fst_2076_);
v_snd_2077_ = lean_ctor_get(v_snd_2049_, 1);
lean_inc(v_snd_2077_);
lean_dec(v_snd_2049_);
v___x_2078_ = l_Lean_Expr_cleanupAnnotations(v_fst_2076_);
v___x_2079_ = l_Lean_Expr_isApp(v___x_2078_);
if (v___x_2079_ == 0)
{
lean_dec_ref(v___x_2078_);
lean_dec(v_snd_2077_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_argKinds_1997_);
v___y_2012_ = v___y_2001_;
v___y_2013_ = v___y_2002_;
v___y_2014_ = v___y_2003_;
v___y_2015_ = v___y_2004_;
v___y_2016_ = v___y_2005_;
v___y_2017_ = v___y_2006_;
v___y_2018_ = v___y_2007_;
v___y_2019_ = v___y_2008_;
v___y_2020_ = v___y_2009_;
goto v___jp_2011_;
}
else
{
lean_object* v_arg_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; 
v_arg_2080_ = lean_ctor_get(v___x_2078_, 1);
lean_inc_ref(v_arg_2080_);
v___x_2081_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2078_);
v___x_2082_ = l_Lean_Expr_isApp(v___x_2081_);
if (v___x_2082_ == 0)
{
lean_dec_ref(v___x_2081_);
lean_dec_ref(v_arg_2080_);
lean_dec(v_snd_2077_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_argKinds_1997_);
v___y_2012_ = v___y_2001_;
v___y_2013_ = v___y_2002_;
v___y_2014_ = v___y_2003_;
v___y_2015_ = v___y_2004_;
v___y_2016_ = v___y_2005_;
v___y_2017_ = v___y_2006_;
v___y_2018_ = v___y_2007_;
v___y_2019_ = v___y_2008_;
v___y_2020_ = v___y_2009_;
goto v___jp_2011_;
}
else
{
lean_object* v___x_2083_; uint8_t v___x_2084_; 
v___x_2083_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2081_);
v___x_2084_ = l_Lean_Expr_isApp(v___x_2083_);
if (v___x_2084_ == 0)
{
lean_dec_ref(v___x_2083_);
lean_dec_ref(v_arg_2080_);
lean_dec(v_snd_2077_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_argKinds_1997_);
v___y_2012_ = v___y_2001_;
v___y_2013_ = v___y_2002_;
v___y_2014_ = v___y_2003_;
v___y_2015_ = v___y_2004_;
v___y_2016_ = v___y_2005_;
v___y_2017_ = v___y_2006_;
v___y_2018_ = v___y_2007_;
v___y_2019_ = v___y_2008_;
v___y_2020_ = v___y_2009_;
goto v___jp_2011_;
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v___x_2085_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2083_);
v___x_2086_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__4);
v___x_2087_ = l_Lean_Expr_isConstOf(v___x_2085_, v___x_2086_);
lean_dec_ref(v___x_2085_);
if (v___x_2087_ == 0)
{
lean_dec_ref(v_arg_2080_);
lean_dec(v_snd_2077_);
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_argKinds_1997_);
v___y_2012_ = v___y_2001_;
v___y_2013_ = v___y_2002_;
v___y_2014_ = v___y_2003_;
v___y_2015_ = v___y_2004_;
v___y_2016_ = v___y_2005_;
v___y_2017_ = v___y_2006_;
v___y_2018_ = v___y_2007_;
v___y_2019_ = v___y_2008_;
v___y_2020_ = v___y_2009_;
goto v___jp_2011_;
}
else
{
lean_object* v_snd_2088_; lean_object* v_fst_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; 
v_snd_2088_ = lean_ctor_get(v_snd_2077_, 1);
lean_inc(v_snd_2088_);
lean_dec(v_snd_2077_);
v_fst_2089_ = lean_ctor_get(v_snd_2088_, 0);
lean_inc(v_fst_2089_);
lean_dec(v_snd_2088_);
v___x_2090_ = lean_expr_instantiate_rev(v_arg_2080_, v_fst_2089_);
lean_dec(v_fst_2089_);
lean_dec_ref(v_arg_2080_);
v___x_2091_ = lean_nat_dec_lt(v_j_2023_, v___x_2031_);
if (v___x_2091_ == 0)
{
lean_dec_ref(v_argKinds_1997_);
v_rhs_2059_ = v___x_2090_;
v___y_2060_ = v___y_2005_;
v___y_2061_ = v___y_2009_;
goto v___jp_2058_;
}
else
{
if (v___x_2091_ == 0)
{
lean_dec_ref(v_argKinds_1997_);
v_rhs_2059_ = v___x_2090_;
v___y_2060_ = v___y_2005_;
v___y_2061_ = v___y_2009_;
goto v___jp_2058_;
}
else
{
size_t v___x_2092_; uint8_t v___x_2093_; 
v___x_2092_ = lean_usize_of_nat(v___x_2031_);
v___x_2093_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__3(v___x_2087_, v_argKinds_1997_, v___x_2040_, v___x_2092_);
lean_dec_ref(v_argKinds_1997_);
if (v___x_2093_ == 0)
{
v_rhs_2059_ = v___x_2090_;
v___y_2060_ = v___y_2005_;
v___y_2061_ = v___y_2009_;
goto v___jp_2058_;
}
else
{
lean_object* v___x_2094_; 
v___x_2094_ = l_Lean_Meta_Simp_removeUnnecessaryCasts(v___x_2090_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref(v___x_2094_);
v_rhs_2059_ = v_a_2095_;
v___y_2060_ = v___y_2005_;
v___y_2061_ = v___y_2009_;
goto v___jp_2058_;
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
v_a_2096_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2094_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2094_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2096_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
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
v___jp_2050_:
{
uint8_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2056_; 
v___x_2053_ = 0;
v___x_2054_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2054_, 0, v___y_2051_);
lean_ctor_set(v___x_2054_, 1, v_fst_2048_);
lean_ctor_set_uint8(v___x_2054_, sizeof(void*)*2, v___x_2053_);
lean_ctor_set_uint8(v___x_2054_, sizeof(void*)*2 + 1, v___y_2052_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v___x_2054_);
v___x_2056_ = v___x_2044_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2054_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
v___jp_2058_:
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_rhs_2059_, v___y_2060_, v___y_2061_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref(v___x_2062_);
v___x_2064_ = lean_array_get_size(v_argResults_2000_);
v___x_2065_ = lean_nat_dec_lt(v_j_2023_, v___x_2064_);
if (v___x_2065_ == 0)
{
v___y_2051_ = v_a_2063_;
v___y_2052_ = v___x_2065_;
goto v___jp_2050_;
}
else
{
if (v___x_2065_ == 0)
{
v___y_2051_ = v_a_2063_;
v___y_2052_ = v___x_2065_;
goto v___jp_2050_;
}
else
{
size_t v___x_2066_; uint8_t v___x_2067_; 
v___x_2066_ = lean_usize_of_nat(v___x_2064_);
v___x_2067_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_spec__2(v_argResults_2000_, v___x_2040_, v___x_2066_);
v___y_2051_ = v_a_2063_;
v___y_2052_ = v___x_2067_;
goto v___jp_2050_;
}
}
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
lean_dec(v_fst_2048_);
lean_del_object(v___x_2044_);
v_a_2068_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2062_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2062_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
}
else
{
lean_object* v_val_2104_; lean_object* v___x_2106_; 
lean_inc_ref(v_fst_2046_);
lean_dec(v_a_2042_);
lean_dec_ref(v_argKinds_1997_);
v_val_2104_ = lean_ctor_get(v_fst_2046_, 0);
lean_inc(v_val_2104_);
lean_dec_ref(v_fst_2046_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v_val_2104_);
v___x_2106_ = v___x_2044_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_val_2104_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec_ref(v_argKinds_1997_);
v_a_2109_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2041_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2041_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
v___jp_2011_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___closed__0);
v___x_2022_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_2021_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2022_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___boxed(lean_object* v_e_2117_, lean_object* v_argKinds_2118_, lean_object* v_type_2119_, lean_object* v_proof_2120_, lean_object* v_argResults_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0(v_e_2117_, v_argKinds_2118_, v_type_2119_, v_proof_2120_, v_argResults_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v_argResults_2121_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1(uint8_t v___x_2133_, lean_object* v_x_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2145_, 0, v___x_2133_);
lean_ctor_set_uint8(v___x_2145_, 1, v___x_2133_);
v___x_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1___boxed(lean_object* v___x_2147_, lean_object* v_x_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
uint8_t v___x_24027__boxed_2159_; lean_object* v_res_2160_; 
v___x_24027__boxed_2159_ = lean_unbox(v___x_2147_);
v_res_2160_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1(v___x_24027__boxed_2159_, v_x_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec(v___y_2151_);
lean_dec_ref(v___y_2150_);
lean_dec(v___y_2149_);
lean_dec_ref(v_x_2148_);
return v_res_2160_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0(void){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = lean_unsigned_to_nat(0u);
v___x_2162_ = lean_mk_empty_array_with_capacity(v___x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2(lean_object* v___x_2163_, lean_object* v_argKinds_2164_, lean_object* v_mkNonRflResult_2165_, lean_object* v_x_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; lean_object* v___x_2182_; 
v___x_2177_ = lean_unsigned_to_nat(1u);
v___x_2178_ = lean_nat_sub(v___x_2163_, v___x_2177_);
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0);
v___x_2181_ = 0;
v___x_2182_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs(v_argKinds_2164_, v_mkNonRflResult_2165_, v_x_2166_, v___x_2178_, v___x_2179_, v___x_2180_, v___x_2181_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___boxed(lean_object* v___x_2183_, lean_object* v_argKinds_2184_, lean_object* v_mkNonRflResult_2185_, lean_object* v_x_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2(v___x_2183_, v_argKinds_2184_, v_mkNonRflResult_2185_, v_x_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v_argKinds_2184_);
lean_dec(v___x_2183_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm(lean_object* v_e_2198_, lean_object* v_thm_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_type_2210_; lean_object* v_proof_2211_; lean_object* v_argKinds_2212_; lean_object* v_mkNonRflResult_2213_; lean_object* v_numArgs_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v_type_2210_ = lean_ctor_get(v_thm_2199_, 0);
lean_inc_ref(v_type_2210_);
v_proof_2211_ = lean_ctor_get(v_thm_2199_, 1);
lean_inc_ref(v_proof_2211_);
v_argKinds_2212_ = lean_ctor_get(v_thm_2199_, 2);
lean_inc_ref_n(v_argKinds_2212_, 2);
lean_dec_ref(v_thm_2199_);
lean_inc_ref(v_e_2198_);
v_mkNonRflResult_2213_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__0___boxed), 15, 4);
lean_closure_set(v_mkNonRflResult_2213_, 0, v_e_2198_);
lean_closure_set(v_mkNonRflResult_2213_, 1, v_argKinds_2212_);
lean_closure_set(v_mkNonRflResult_2213_, 2, v_type_2210_);
lean_closure_set(v_mkNonRflResult_2213_, 3, v_proof_2211_);
v_numArgs_2214_ = l_Lean_Expr_getAppNumArgs(v_e_2198_);
v___x_2215_ = lean_array_get_size(v_argKinds_2212_);
v___x_2216_ = lean_nat_dec_lt(v___x_2215_, v_numArgs_2214_);
if (v___x_2216_ == 0)
{
uint8_t v___x_2217_; 
v___x_2217_ = lean_nat_dec_lt(v_numArgs_2214_, v___x_2215_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
lean_dec(v_numArgs_2214_);
v___x_2218_ = lean_unsigned_to_nat(1u);
v___x_2219_ = lean_nat_sub(v___x_2215_, v___x_2218_);
v___x_2220_ = lean_unsigned_to_nat(0u);
v___x_2221_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___closed__0);
v___x_2222_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm_simpEqArgs(v_argKinds_2212_, v_mkNonRflResult_2213_, v_e_2198_, v___x_2219_, v___x_2220_, v___x_2221_, v___x_2217_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_);
lean_dec_ref(v_argKinds_2212_);
return v___x_2222_;
}
else
{
lean_object* v___x_2223_; lean_object* v___f_2224_; lean_object* v___x_2225_; 
lean_dec_ref(v_mkNonRflResult_2213_);
lean_dec_ref(v_argKinds_2212_);
v___x_2223_ = lean_box(v___x_2216_);
v___f_2224_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__1___boxed), 12, 1);
lean_closure_set(v___f_2224_, 0, v___x_2223_);
v___x_2225_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v___f_2224_, v_e_2198_, v_numArgs_2214_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_);
lean_dec(v_numArgs_2214_);
return v___x_2225_;
}
}
else
{
lean_object* v___f_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___f_2226_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___lam__2___boxed), 14, 3);
lean_closure_set(v___f_2226_, 0, v___x_2215_);
lean_closure_set(v___f_2226_, 1, v_argKinds_2212_);
lean_closure_set(v___f_2226_, 2, v_mkNonRflResult_2213_);
v___x_2227_ = lean_nat_sub(v_numArgs_2214_, v___x_2215_);
lean_dec(v_numArgs_2214_);
v___x_2228_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit(v___f_2226_, v_e_2198_, v___x_2227_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_);
lean_dec(v___x_2227_);
return v___x_2228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm___boxed(lean_object* v_e_2229_, lean_object* v_thm_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm(v_e_2229_, v_thm_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
lean_dec(v_a_2237_);
lean_dec_ref(v_a_2236_);
lean_dec(v_a_2235_);
lean_dec_ref(v_a_2234_);
lean_dec(v_a_2233_);
lean_dec_ref(v_a_2232_);
lean_dec(v_a_2231_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgs(lean_object* v_e_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_f_2253_; lean_object* v___x_2254_; 
v_f_2253_ = l_Lean_Expr_getAppFn(v_e_2242_);
v___x_2254_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_2253_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2270_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2270_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2270_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
switch(lean_obj_tag(v_a_2255_))
{
case 0:
{
lean_object* v___x_2259_; lean_object* v___x_2261_; 
lean_dec_ref(v_e_2242_);
v___x_2259_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 0, v___x_2259_);
v___x_2261_ = v___x_2257_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2259_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
case 1:
{
lean_object* v_prefixSize_2263_; lean_object* v_suffixSize_2264_; lean_object* v___x_2265_; 
lean_del_object(v___x_2257_);
v_prefixSize_2263_ = lean_ctor_get(v_a_2255_, 0);
lean_inc(v_prefixSize_2263_);
v_suffixSize_2264_ = lean_ctor_get(v_a_2255_, 1);
lean_inc(v_suffixSize_2264_);
lean_dec_ref(v_a_2255_);
v___x_2265_ = l_Lean_Meta_Sym_Simp_simpFixedPrefix(v_e_2242_, v_prefixSize_2263_, v_suffixSize_2264_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_prefixSize_2263_);
return v___x_2265_;
}
case 2:
{
lean_object* v_rewritable_2266_; lean_object* v___x_2267_; 
lean_del_object(v___x_2257_);
v_rewritable_2266_ = lean_ctor_get(v_a_2255_, 0);
lean_inc_ref(v_rewritable_2266_);
lean_dec_ref(v_a_2255_);
v___x_2267_ = l_Lean_Meta_Sym_Simp_simpInterlaced(v_e_2242_, v_rewritable_2266_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
return v___x_2267_;
}
default: 
{
lean_object* v_thm_2268_; lean_object* v___x_2269_; 
lean_del_object(v___x_2257_);
v_thm_2268_ = lean_ctor_get(v_a_2255_, 0);
lean_inc_ref(v_thm_2268_);
lean_dec_ref(v_a_2255_);
v___x_2269_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpUsingCongrThm(v_e_2242_, v_thm_2268_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
return v___x_2269_;
}
}
}
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_dec_ref(v_e_2242_);
v_a_2271_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2254_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2254_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgs___boxed(lean_object* v_e_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_Meta_Sym_Simp_simpAppArgs(v_e_2279_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_);
lean_dec(v_a_2288_);
lean_dec_ref(v_a_2287_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
lean_dec(v_a_2284_);
lean_dec_ref(v_a_2283_);
lean_dec(v_a_2282_);
lean_dec_ref(v_a_2281_);
lean_dec(v_a_2280_);
return v_res_2290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0(void){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_mk_string_unchecked("_private.Lean.Meta.Sym.Simp.App.0.Lean.Meta.Sym.Simp.simpAppArgRange.visit", 74, 74);
return v___x_2291_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2292_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_2293_ = lean_unsigned_to_nat(55u);
v___x_2294_ = lean_unsigned_to_nat(489u);
v___x_2295_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0);
v___x_2296_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_2297_ = l_mkPanicMessageWithDecl(v___x_2296_, v___x_2295_, v___x_2294_, v___x_2293_, v___x_2292_);
return v___x_2297_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2(void){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2298_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__2);
v___x_2299_ = lean_unsigned_to_nat(11u);
v___x_2300_ = lean_unsigned_to_nat(497u);
v___x_2301_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__0);
v___x_2302_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_2303_ = l_mkPanicMessageWithDecl(v___x_2302_, v___x_2301_, v___x_2300_, v___x_2299_, v___x_2298_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit(lean_object* v_stop_2304_, lean_object* v_e_2305_, lean_object* v_i_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
uint8_t v_cd_2318_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2321_ = lean_unsigned_to_nat(0u);
v___x_2322_ = lean_nat_dec_eq(v_i_2306_, v___x_2321_);
if (v___x_2322_ == 0)
{
if (lean_obj_tag(v_e_2305_) == 5)
{
lean_object* v_fn_2323_; lean_object* v_arg_2324_; lean_object* v___x_2325_; lean_object* v_i_2326_; lean_object* v___x_2327_; 
v_fn_2323_ = lean_ctor_get(v_e_2305_, 0);
lean_inc_ref_n(v_fn_2323_, 2);
v_arg_2324_ = lean_ctor_get(v_e_2305_, 1);
lean_inc_ref(v_arg_2324_);
v___x_2325_ = lean_unsigned_to_nat(1u);
v_i_2326_ = lean_nat_sub(v_i_2306_, v___x_2325_);
v___x_2327_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit(v_stop_2304_, v_fn_2323_, v_i_2326_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; uint8_t v___x_2329_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref(v___x_2327_);
v___x_2329_ = lean_nat_dec_lt(v_i_2326_, v_stop_2304_);
lean_dec(v_i_2326_);
if (v___x_2329_ == 0)
{
if (lean_obj_tag(v_a_2328_) == 0)
{
uint8_t v_contextDependent_2330_; 
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
v_contextDependent_2330_ = lean_ctor_get_uint8(v_a_2328_, 1);
lean_dec_ref(v_a_2328_);
v_cd_2318_ = v_contextDependent_2330_;
goto v___jp_2317_;
}
else
{
lean_object* v_e_x27_2331_; lean_object* v_proof_2332_; uint8_t v_contextDependent_2333_; lean_object* v___x_2334_; 
v_e_x27_2331_ = lean_ctor_get(v_a_2328_, 0);
lean_inc_ref(v_e_x27_2331_);
v_proof_2332_ = lean_ctor_get(v_a_2328_, 1);
lean_inc_ref(v_proof_2332_);
v_contextDependent_2333_ = lean_ctor_get_uint8(v_a_2328_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_2328_);
v___x_2334_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_2305_, v_fn_2323_, v_arg_2324_, v_e_x27_2331_, v_proof_2332_, v___x_2322_, v_contextDependent_2333_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2334_;
}
}
else
{
lean_object* v___x_2335_; 
lean_inc_ref(v_fn_2323_);
v___x_2335_ = l_Lean_Meta_Sym_inferType___redArg(v_fn_2323_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2337_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref(v___x_2335_);
v___x_2337_ = l_Lean_Meta_whnfD(v_a_2336_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_a_2338_);
lean_dec_ref(v___x_2337_);
if (lean_obj_tag(v_a_2338_) == 7)
{
lean_object* v_binderType_2339_; lean_object* v_body_2340_; uint8_t v___x_2358_; 
v_binderType_2339_ = lean_ctor_get(v_a_2338_, 1);
lean_inc_ref(v_binderType_2339_);
v_body_2340_ = lean_ctor_get(v_a_2338_, 2);
lean_inc_ref(v_body_2340_);
lean_dec_ref(v_a_2338_);
v___x_2358_ = l_Lean_Expr_hasLooseBVars(v_body_2340_);
lean_dec_ref(v_body_2340_);
if (v___x_2358_ == 0)
{
goto v___jp_2341_;
}
else
{
if (v___x_2322_ == 0)
{
lean_dec_ref(v_binderType_2339_);
if (lean_obj_tag(v_a_2328_) == 0)
{
uint8_t v_contextDependent_2359_; 
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
v_contextDependent_2359_ = lean_ctor_get_uint8(v_a_2328_, 1);
lean_dec_ref(v_a_2328_);
v_cd_2318_ = v_contextDependent_2359_;
goto v___jp_2317_;
}
else
{
lean_object* v_e_x27_2360_; lean_object* v_proof_2361_; uint8_t v_contextDependent_2362_; lean_object* v___x_2363_; 
v_e_x27_2360_ = lean_ctor_get(v_a_2328_, 0);
lean_inc_ref(v_e_x27_2360_);
v_proof_2361_ = lean_ctor_get(v_a_2328_, 1);
lean_inc_ref(v_proof_2361_);
v_contextDependent_2362_ = lean_ctor_get_uint8(v_a_2328_, sizeof(void*)*2 + 1);
lean_dec_ref(v_a_2328_);
v___x_2363_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_mkCongrFun___redArg(v_e_2305_, v_fn_2323_, v_arg_2324_, v_e_x27_2360_, v_proof_2361_, v___x_2322_, v_contextDependent_2362_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2363_;
}
}
else
{
goto v___jp_2341_;
}
}
v___jp_2341_:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_Meta_isProp(v_binderType_2339_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; uint8_t v___x_2344_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref(v___x_2342_);
v___x_2344_ = lean_unbox(v_a_2343_);
lean_dec(v_a_2343_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
lean_inc(v_a_2315_);
lean_inc_ref(v_a_2314_);
lean_inc(v_a_2313_);
lean_inc_ref(v_a_2312_);
lean_inc(v_a_2311_);
lean_inc_ref(v_a_2310_);
lean_inc(v_a_2309_);
lean_inc_ref(v_a_2308_);
lean_inc(v_a_2307_);
lean_inc_ref(v_arg_2324_);
v___x_2345_ = lean_sym_simp(v_arg_2324_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___x_2347_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_2305_, v_fn_2323_, v_arg_2324_, v_a_2328_, v_a_2346_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2347_;
}
else
{
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_fn_2323_);
lean_dec_ref(v_e_2305_);
return v___x_2345_;
}
}
else
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2348_, 0, v___x_2322_);
lean_ctor_set_uint8(v___x_2348_, 1, v___x_2322_);
v___x_2349_ = l_Lean_Meta_Sym_Simp_mkCongr___redArg(v_e_2305_, v_fn_2323_, v_arg_2324_, v_a_2328_, v___x_2348_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2349_;
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
v_a_2350_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2342_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2342_);
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
}
else
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
lean_dec(v_a_2338_);
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_fn_2323_);
lean_dec_ref(v_e_2305_);
v___x_2364_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__1);
v___x_2365_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_2364_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2365_;
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
v_a_2366_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2337_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2337_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
v_a_2374_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2335_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2335_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
else
{
lean_dec(v_i_2326_);
lean_dec_ref(v_arg_2324_);
lean_dec_ref(v_e_2305_);
lean_dec_ref(v_fn_2323_);
return v___x_2327_;
}
}
else
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
lean_dec_ref(v_e_2305_);
v___x_2382_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___closed__2);
v___x_2383_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_2382_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
return v___x_2383_;
}
}
else
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
lean_dec_ref(v_e_2305_);
v___x_2384_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
return v___x_2385_;
}
v___jp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_cd_2318_);
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
return v___x_2320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit___boxed(lean_object* v_stop_2386_, lean_object* v_e_2387_, lean_object* v_i_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit(v_stop_2386_, v_e_2387_, v_i_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_);
lean_dec(v_a_2397_);
lean_dec_ref(v_a_2396_);
lean_dec(v_a_2395_);
lean_dec_ref(v_a_2394_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
lean_dec(v_a_2389_);
lean_dec(v_i_2388_);
lean_dec(v_stop_2386_);
return v_res_2399_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0(void){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_mk_string_unchecked("Lean.Meta.Sym.Simp.simpAppArgRange", 34, 34);
return v___x_2400_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1(void){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_mk_string_unchecked("assertion violation: start < stop\n  ", 36, 36);
return v___x_2401_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2(void){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2402_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1, &l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1_once, _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__1);
v___x_2403_ = lean_unsigned_to_nat(2u);
v___x_2404_ = lean_unsigned_to_nat(472u);
v___x_2405_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0, &l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0_once, _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__0);
v___x_2406_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit___closed__0);
v___x_2407_ = l_mkPanicMessageWithDecl(v___x_2406_, v___x_2405_, v___x_2404_, v___x_2403_, v___x_2402_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object* v_e_2408_, lean_object* v_start_2409_, lean_object* v_stop_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_){
_start:
{
uint8_t v___x_2421_; 
v___x_2421_ = lean_nat_dec_lt(v_start_2409_, v_stop_2410_);
if (v___x_2421_ == 0)
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
lean_dec_ref(v_e_2408_);
v___x_2422_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2, &l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2_once, _init_l_Lean_Meta_Sym_Simp_simpAppArgRange___closed__2);
v___x_2423_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpOverApplied_visit_spec__0(v___x_2422_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_);
return v___x_2423_;
}
else
{
lean_object* v_numArgs_2424_; uint8_t v___x_2425_; 
v_numArgs_2424_ = l_Lean_Expr_getAppNumArgs(v_e_2408_);
v___x_2425_ = lean_nat_dec_lt(v_numArgs_2424_, v_start_2409_);
if (v___x_2425_ == 0)
{
lean_object* v_numArgs_2426_; lean_object* v_stop_2427_; lean_object* v___x_2428_; 
v_numArgs_2426_ = lean_nat_sub(v_numArgs_2424_, v_start_2409_);
lean_dec(v_numArgs_2424_);
v_stop_2427_ = lean_nat_sub(v_stop_2410_, v_start_2409_);
v___x_2428_ = l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpAppArgRange_visit(v_stop_2427_, v_e_2408_, v_numArgs_2426_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_);
lean_dec(v_numArgs_2426_);
lean_dec(v_stop_2427_);
return v___x_2428_;
}
else
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
lean_dec(v_numArgs_2424_);
lean_dec_ref(v_e_2408_);
v___x_2429_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8, &l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_App_0__Lean_Meta_Sym_Simp_simpFixedPrefix_go___closed__8);
v___x_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2429_);
return v___x_2430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange___boxed(lean_object* v_e_2431_, lean_object* v_start_2432_, lean_object* v_stop_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_2431_, v_start_2432_, v_stop_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v_a_2441_, v_a_2442_);
lean_dec(v_a_2442_);
lean_dec_ref(v_a_2441_);
lean_dec(v_a_2440_);
lean_dec_ref(v_a_2439_);
lean_dec(v_a_2438_);
lean_dec_ref(v_a_2437_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
lean_dec(v_a_2434_);
lean_dec(v_stop_2433_);
lean_dec(v_start_2432_);
return v_res_2444_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_App(builtin);
}
#ifdef __cplusplus
}
#endif
