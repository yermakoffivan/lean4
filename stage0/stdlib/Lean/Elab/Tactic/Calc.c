// Lean compiler output
// Module: Lean.Elab.Tactic.Calc
// Imports: public import Lean.Elab.Calc public import Lean.Elab.Tactic.ElabTerm
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
lean_object* l_Lean_Elab_Term_elabCalcSteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasTypeWithErrorMsgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCalcRelation_x3f___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkCalcTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Term_mkCalcStepViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwCalcFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoals___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_evalCalc___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalCalc___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
uint8_t v___x_35_; 
v___x_35_ = l_Lean_Expr_hasMVar(v_e_31_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_36_, 0, v_e_31_);
return v___x_36_;
}
else
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v_mctx_39_; lean_object* v___x_40_; lean_object* v_fst_41_; lean_object* v_snd_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v_cache_45_; lean_object* v_zetaDeltaFVarIds_46_; lean_object* v_postponed_47_; lean_object* v_diag_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_57_; 
v___x_37_ = lean_st_ref_get(v___y_33_);
lean_dec(v___x_37_);
v___x_38_ = lean_st_ref_get(v___y_32_);
v_mctx_39_ = lean_ctor_get(v___x_38_, 0);
lean_inc_ref(v_mctx_39_);
lean_dec(v___x_38_);
v___x_40_ = l_Lean_instantiateMVarsCore(v_mctx_39_, v_e_31_);
v_fst_41_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_fst_41_);
v_snd_42_ = lean_ctor_get(v___x_40_, 1);
lean_inc(v_snd_42_);
lean_dec_ref(v___x_40_);
v___x_43_ = lean_st_ref_get(v___y_33_);
lean_dec(v___x_43_);
v___x_44_ = lean_st_ref_take(v___y_32_);
v_cache_45_ = lean_ctor_get(v___x_44_, 1);
v_zetaDeltaFVarIds_46_ = lean_ctor_get(v___x_44_, 2);
v_postponed_47_ = lean_ctor_get(v___x_44_, 3);
v_diag_48_ = lean_ctor_get(v___x_44_, 4);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_57_ == 0)
{
lean_object* v_unused_58_; 
v_unused_58_ = lean_ctor_get(v___x_44_, 0);
lean_dec(v_unused_58_);
v___x_50_ = v___x_44_;
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_diag_48_);
lean_inc(v_postponed_47_);
lean_inc(v_zetaDeltaFVarIds_46_);
lean_inc(v_cache_45_);
lean_dec(v___x_44_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v_snd_42_);
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_snd_42_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_cache_45_);
lean_ctor_set(v_reuseFailAlloc_56_, 2, v_zetaDeltaFVarIds_46_);
lean_ctor_set(v_reuseFailAlloc_56_, 3, v_postponed_47_);
lean_ctor_set(v_reuseFailAlloc_56_, 4, v_diag_48_);
v___x_53_ = v_reuseFailAlloc_56_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_st_ref_set(v___y_32_, v___x_53_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v_fst_41_);
return v___x_55_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg___boxed(lean_object* v_e_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg(v_e_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec(v___y_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1(lean_object* v_e_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg(v_e_64_, v___y_70_, v___y_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___boxed(lean_object* v_e_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1(v_e_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_85_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2(lean_object* v_msg_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_11050__overap_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0, &l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0_once, _init_l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___closed__0);
v___x_11050__overap_96_ = lean_panic_fn_borrowed(v___x_95_, v_msg_87_);
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc(v___y_89_);
lean_inc_ref(v___y_88_);
v___x_97_ = lean_apply_7(v___x_11050__overap_96_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, lean_box(0));
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2___boxed(lean_object* v_msg_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2(v_msg_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__0(lean_object* v_a_107_, lean_object* v_x_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lean_Elab_Term_throwCalcFailure___redArg(v_a_107_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__0___boxed(lean_object* v_a_117_, lean_object* v_x_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Elab_Tactic_evalCalc___lam__0(v_a_117_, v_x_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec(v_x_118_);
lean_dec_ref(v_a_117_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__1(lean_object* v_a_127_, lean_object* v_x_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Elab_Term_throwCalcFailure___redArg(v_a_127_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__1___boxed(lean_object* v_a_137_, lean_object* v_x_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Elab_Tactic_evalCalc___lam__1(v_a_137_, v_x_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v_x_138_);
lean_dec_ref(v_a_137_);
return v_res_146_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_mk_string_unchecked("step", 4, 4);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("Lean.Elab.Tactic.Calc", 21, 21);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("Lean.Elab.Tactic.evalCalc", 25, 25);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_151_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3, &l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3_once, _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__3);
v___x_152_ = lean_unsigned_to_nat(65u);
v___x_153_ = lean_unsigned_to_nat(32u);
v___x_154_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2, &l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__2);
v___x_155_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1, &l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__1);
v___x_156_ = l_mkPanicMessageWithDecl(v___x_155_, v___x_154_, v___x_153_, v___x_152_, v___x_151_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2(lean_object* v_a_157_, lean_object* v___x_158_, lean_object* v___f_159_, lean_object* v___f_160_, lean_object* v___x_161_, lean_object* v_tag_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_Elab_Term_elabCalcSteps(v_a_157_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_287_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_287_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_287_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_287_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v___y_178_; lean_object* v___y_179_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_183_; lean_object* v___y_187_; uint8_t v___y_188_; lean_object* v_a_193_; lean_object* v___x_196_; 
v_fst_175_ = lean_ctor_get(v_a_171_, 0);
lean_inc(v_fst_175_);
v_snd_176_ = lean_ctor_get(v_a_171_, 1);
lean_inc_n(v_snd_176_, 2);
lean_dec(v_a_171_);
lean_inc_ref(v___x_158_);
v___x_196_ = l_Lean_Meta_isExprDefEq(v_snd_176_, v___x_158_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_278_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_278_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_278_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_278_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
uint8_t v___x_201_; 
v___x_201_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
lean_del_object(v___x_199_);
v___x_202_ = l_Lean_Elab_Term_getCalcRelation_x3f___redArg(v_snd_176_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref(v___x_202_);
if (lean_obj_tag(v_a_203_) == 1)
{
lean_object* v_val_204_; lean_object* v_snd_205_; lean_object* v_fst_206_; lean_object* v_snd_207_; lean_object* v___x_208_; 
v_val_204_ = lean_ctor_get(v_a_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref(v_a_203_);
v_snd_205_ = lean_ctor_get(v_val_204_, 1);
lean_inc(v_snd_205_);
lean_dec(v_val_204_);
v_fst_206_ = lean_ctor_get(v_snd_205_, 0);
lean_inc(v_fst_206_);
v_snd_207_ = lean_ctor_get(v_snd_205_, 1);
lean_inc(v_snd_207_);
lean_dec(v_snd_205_);
v___x_208_ = l_Lean_Elab_Term_getCalcRelation_x3f___redArg(v___x_158_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref(v___x_208_);
if (lean_obj_tag(v_a_209_) == 1)
{
lean_object* v_val_210_; lean_object* v_snd_211_; lean_object* v_fst_212_; lean_object* v_fst_213_; lean_object* v_snd_214_; lean_object* v___y_216_; lean_object* v___x_249_; 
v_val_210_ = lean_ctor_get(v_a_209_, 0);
lean_inc(v_val_210_);
lean_dec_ref(v_a_209_);
v_snd_211_ = lean_ctor_get(v_val_210_, 1);
lean_inc(v_snd_211_);
v_fst_212_ = lean_ctor_get(v_val_210_, 0);
lean_inc(v_fst_212_);
lean_dec(v_val_210_);
v_fst_213_ = lean_ctor_get(v_snd_211_, 0);
lean_inc(v_fst_213_);
v_snd_214_ = lean_ctor_get(v_snd_211_, 1);
lean_inc(v_snd_214_);
lean_dec(v_snd_211_);
lean_inc(v___y_168_);
lean_inc_ref(v___y_167_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v_snd_207_);
v___x_249_ = lean_infer_type(v_snd_207_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref(v___x_249_);
lean_inc(v___y_168_);
lean_inc_ref(v___y_167_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v_fst_213_);
v___x_251_ = lean_infer_type(v_fst_213_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_253_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref(v___x_251_);
v___x_253_ = l_Lean_Meta_isExprDefEq(v_fst_206_, v_fst_213_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; uint8_t v___x_255_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
v___x_255_ = lean_unbox(v_a_254_);
lean_dec(v_a_254_);
if (v___x_255_ == 0)
{
lean_dec(v_a_252_);
lean_dec(v_a_250_);
v___y_216_ = v___x_253_;
goto v___jp_215_;
}
else
{
lean_object* v___x_256_; 
lean_dec_ref(v___x_253_);
v___x_256_ = l_Lean_Meta_isExprDefEq(v_a_250_, v_a_252_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
v___y_216_ = v___x_256_;
goto v___jp_215_;
}
}
else
{
lean_dec(v_a_252_);
lean_dec(v_a_250_);
v___y_216_ = v___x_253_;
goto v___jp_215_;
}
}
else
{
lean_dec(v_a_250_);
lean_dec(v_snd_214_);
lean_dec(v_fst_213_);
lean_dec(v_fst_212_);
lean_dec(v_snd_207_);
lean_dec(v_fst_206_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
return v___x_251_;
}
}
else
{
lean_dec(v_snd_214_);
lean_dec(v_fst_213_);
lean_dec(v_fst_212_);
lean_dec(v_snd_207_);
lean_dec(v_fst_206_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
return v___x_249_;
}
v___jp_215_:
{
if (lean_obj_tag(v___y_216_) == 0)
{
lean_object* v_a_217_; uint8_t v___x_218_; 
v_a_217_ = lean_ctor_get(v___y_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref(v___y_216_);
v___x_218_ = lean_unbox(v_a_217_);
lean_dec(v_a_217_);
if (v___x_218_ == 0)
{
lean_dec(v_snd_214_);
lean_dec(v_fst_212_);
lean_dec(v_snd_207_);
lean_dec(v_snd_176_);
lean_del_object(v___x_173_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
v___y_178_ = v___y_163_;
v___y_179_ = v___y_164_;
v___y_180_ = v___y_165_;
v___y_181_ = v___y_166_;
v___y_182_ = v___y_167_;
v___y_183_ = v___y_168_;
goto v___jp_177_;
}
else
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_219_ = l_Lean_mkAppB(v_fst_212_, v_snd_207_, v_snd_214_);
v___x_220_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0, &l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__0);
v___x_221_ = l_Lean_Name_mkStr2(v___x_161_, v___x_220_);
v___x_222_ = l_Lean_Name_append(v_tag_162_, v___x_221_);
lean_inc_ref(v___x_219_);
v___x_223_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_219_, v___x_222_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v___x_225_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
lean_dec_ref(v___x_223_);
lean_inc(v_fst_175_);
v___x_225_ = l_Lean_Elab_Term_mkCalcTrans(v_fst_175_, v_snd_176_, v_a_224_, v___x_219_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v_snd_176_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v___x_229_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref(v___x_225_);
v_fst_227_ = lean_ctor_get(v_a_226_, 0);
lean_inc(v_fst_227_);
v_snd_228_ = lean_ctor_get(v_a_226_, 1);
lean_inc(v_snd_228_);
lean_dec(v_a_226_);
lean_inc_ref(v___x_158_);
v___x_229_ = l_Lean_Meta_isExprDefEq(v_snd_228_, v___x_158_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_238_; 
lean_del_object(v___x_173_);
v_a_230_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_238_ == 0)
{
v___x_232_ = v___x_229_;
v_isShared_233_ = v_isSharedCheck_238_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_229_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_238_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
uint8_t v___x_234_; 
v___x_234_ = lean_unbox(v_a_230_);
lean_dec(v_a_230_);
if (v___x_234_ == 0)
{
lean_del_object(v___x_232_);
lean_dec(v_fst_227_);
v___y_178_ = v___y_163_;
v___y_179_ = v___y_164_;
v___y_180_ = v___y_165_;
v___y_181_ = v___y_166_;
v___y_182_ = v___y_167_;
v___y_183_ = v___y_168_;
goto v___jp_177_;
}
else
{
lean_object* v___x_236_; 
lean_dec(v_fst_175_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v_fst_227_);
v___x_236_ = v___x_232_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_fst_227_);
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
lean_object* v_a_239_; 
lean_dec(v_fst_227_);
v_a_239_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_239_);
lean_dec_ref(v___x_229_);
v_a_193_ = v_a_239_;
goto v___jp_192_;
}
}
else
{
lean_object* v_a_240_; 
v_a_240_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_240_);
lean_dec_ref(v___x_225_);
v_a_193_ = v_a_240_;
goto v___jp_192_;
}
}
else
{
lean_dec_ref(v___x_219_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
return v___x_223_;
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec(v_snd_214_);
lean_dec(v_fst_212_);
lean_dec(v_snd_207_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v_a_241_ = lean_ctor_get(v___y_216_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___y_216_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___y_216_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___y_216_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
else
{
lean_dec(v_a_209_);
lean_dec(v_snd_207_);
lean_dec(v_fst_206_);
lean_dec(v_snd_176_);
lean_del_object(v___x_173_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
v___y_178_ = v___y_163_;
v___y_179_ = v___y_164_;
v___y_180_ = v___y_165_;
v___y_181_ = v___y_166_;
v___y_182_ = v___y_167_;
v___y_183_ = v___y_168_;
goto v___jp_177_;
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec(v_snd_207_);
lean_dec(v_fst_206_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v_a_257_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_208_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_208_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; 
lean_dec(v_a_203_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v___x_265_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4, &l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4_once, _init_l_Lean_Elab_Tactic_evalCalc___lam__2___closed__4);
v___x_266_ = l_panic___at___00Lean_Elab_Tactic_evalCalc_spec__2(v___x_265_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
return v___x_266_;
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v_a_267_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_202_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_202_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_object* v___x_276_; 
lean_dec(v_snd_176_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_fst_175_);
v___x_276_ = v___x_199_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_fst_175_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_173_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v_a_279_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_196_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_196_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
v___jp_177_:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_158_);
v___x_185_ = l_Lean_Elab_Term_ensureHasTypeWithErrorMsgs(v___x_184_, v_fst_175_, v___f_159_, v___f_160_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
return v___x_185_;
}
v___jp_186_:
{
if (v___y_188_ == 0)
{
lean_dec_ref(v___y_187_);
lean_del_object(v___x_173_);
v___y_178_ = v___y_163_;
v___y_179_ = v___y_164_;
v___y_180_ = v___y_165_;
v___y_181_ = v___y_166_;
v___y_182_ = v___y_167_;
v___y_183_ = v___y_168_;
goto v___jp_177_;
}
else
{
lean_object* v___x_190_; 
lean_dec(v_fst_175_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
if (v_isShared_174_ == 0)
{
lean_ctor_set_tag(v___x_173_, 1);
lean_ctor_set(v___x_173_, 0, v___y_187_);
v___x_190_ = v___x_173_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___y_187_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
v___jp_192_:
{
uint8_t v___x_194_; 
v___x_194_ = l_Lean_Exception_isInterrupt(v_a_193_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; 
lean_inc_ref(v_a_193_);
v___x_195_ = l_Lean_Exception_isRuntime(v_a_193_);
v___y_187_ = v_a_193_;
v___y_188_ = v___x_195_;
goto v___jp_186_;
}
else
{
v___y_187_ = v_a_193_;
v___y_188_ = v___x_194_;
goto v___jp_186_;
}
}
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v_tag_162_);
lean_dec_ref(v___x_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v___f_159_);
lean_dec_ref(v___x_158_);
v_a_288_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_170_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_170_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__2___boxed(lean_object* v_a_296_, lean_object* v___x_297_, lean_object* v___f_298_, lean_object* v___f_299_, lean_object* v___x_300_, lean_object* v_tag_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Elab_Tactic_evalCalc___lam__2(v_a_296_, v___x_297_, v___f_298_, v___f_299_, v___x_300_, v_tag_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec_ref(v_a_296_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__3(lean_object* v_steps_310_, lean_object* v_target_311_, lean_object* v___x_312_, lean_object* v_tag_313_, lean_object* v___x_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lean_Elab_Term_mkCalcStepViews(v_steps_310_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_326_; lean_object* v_a_327_; lean_object* v___f_328_; lean_object* v___f_329_; lean_object* v___x_330_; lean_object* v___f_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc_n(v_a_325_, 3);
lean_dec_ref(v___x_324_);
v___x_326_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_evalCalc_spec__1___redArg(v_target_311_, v___y_320_, v___y_322_);
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref(v___x_326_);
v___f_328_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__0___boxed), 9, 1);
lean_closure_set(v___f_328_, 0, v_a_325_);
v___f_329_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__1___boxed), 9, 1);
lean_closure_set(v___f_329_, 0, v_a_325_);
v___x_330_ = l_Lean_Expr_consumeMData(v_a_327_);
lean_dec(v_a_327_);
lean_inc(v_tag_313_);
v___f_331_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__2___boxed), 13, 6);
lean_closure_set(v___f_331_, 0, v_a_325_);
lean_closure_set(v___f_331_, 1, v___x_330_);
lean_closure_set(v___f_331_, 2, v___f_329_);
lean_closure_set(v___f_331_, 3, v___f_328_);
lean_closure_set(v___f_331_, 4, v___x_312_);
lean_closure_set(v___f_331_, 5, v_tag_313_);
v___x_332_ = 0;
v___x_333_ = lean_box(v___x_332_);
v___x_334_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___boxed), 12, 3);
lean_closure_set(v___x_334_, 0, lean_box(0));
lean_closure_set(v___x_334_, 1, v___f_331_);
lean_closure_set(v___x_334_, 2, v___x_333_);
v___x_335_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_334_, v_tag_313_, v___x_314_, v___x_332_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v_fst_337_; lean_object* v_snd_338_; lean_object* v___x_339_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref(v___x_335_);
v_fst_337_ = lean_ctor_get(v_a_336_, 0);
lean_inc(v_fst_337_);
v_snd_338_ = lean_ctor_get(v_a_336_, 1);
lean_inc(v_snd_338_);
lean_dec(v_a_336_);
v___x_339_ = l_Lean_Elab_Tactic_pushGoals___redArg(v_snd_338_, v___y_316_, v___y_322_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; 
v_unused_347_ = lean_ctor_get(v___x_339_, 0);
lean_dec(v_unused_347_);
v___x_341_ = v___x_339_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_dec(v___x_339_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v_fst_337_);
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_fst_337_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_fst_337_);
v_a_348_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_339_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_339_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v_a_356_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_335_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_335_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v___x_314_);
lean_dec(v_tag_313_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v_target_311_);
v_a_364_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_324_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_324_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__3___boxed(lean_object* v_steps_372_, lean_object* v_target_373_, lean_object* v___x_374_, lean_object* v_tag_375_, lean_object* v___x_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Elab_Tactic_evalCalc___lam__3(v_steps_372_, v_target_373_, v___x_374_, v_tag_375_, v___x_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__4(lean_object* v_a_387_, lean_object* v_trees_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; 
lean_inc(v___y_396_);
lean_inc_ref(v___y_395_);
lean_inc(v___y_394_);
lean_inc_ref(v___y_393_);
lean_inc(v___y_392_);
lean_inc_ref(v___y_391_);
lean_inc(v___y_390_);
lean_inc_ref(v___y_389_);
v___x_398_ = lean_apply_9(v_a_387_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, lean_box(0));
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_407_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_407_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_407_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_407_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_403_, 0, v_a_399_);
lean_ctor_set(v___x_403_, 1, v_trees_388_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_403_);
v___x_405_ = v___x_401_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec_ref(v_trees_388_);
v_a_408_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_398_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_398_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__4___boxed(lean_object* v_a_416_, lean_object* v_trees_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Elab_Tactic_evalCalc___lam__4(v_a_416_, v_trees_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0(lean_object* v___y_428_, lean_object* v_mkInfoTree_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v_a_437_, lean_object* v_a_x3f_438_){
_start:
{
lean_object* v___x_440_; lean_object* v_infoState_441_; lean_object* v_trees_442_; lean_object* v___x_443_; 
v___x_440_ = lean_st_ref_get(v___y_428_);
v_infoState_441_ = lean_ctor_get(v___x_440_, 7);
lean_inc_ref(v_infoState_441_);
lean_dec(v___x_440_);
v_trees_442_ = lean_ctor_get(v_infoState_441_, 2);
lean_inc_ref(v_trees_442_);
lean_dec_ref(v_infoState_441_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_436_);
lean_inc(v___y_435_);
lean_inc_ref(v___y_434_);
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___x_443_ = lean_apply_10(v_mkInfoTree_429_, v_trees_442_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_428_, lean_box(0));
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_482_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_482_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_482_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_482_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v_infoState_449_; lean_object* v_env_450_; lean_object* v_nextMacroScope_451_; lean_object* v_ngen_452_; lean_object* v_auxDeclNGen_453_; lean_object* v_traceState_454_; lean_object* v_cache_455_; lean_object* v_messages_456_; lean_object* v_snapshotTasks_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_481_; 
v___x_448_ = lean_st_ref_take(v___y_428_);
v_infoState_449_ = lean_ctor_get(v___x_448_, 7);
v_env_450_ = lean_ctor_get(v___x_448_, 0);
v_nextMacroScope_451_ = lean_ctor_get(v___x_448_, 1);
v_ngen_452_ = lean_ctor_get(v___x_448_, 2);
v_auxDeclNGen_453_ = lean_ctor_get(v___x_448_, 3);
v_traceState_454_ = lean_ctor_get(v___x_448_, 4);
v_cache_455_ = lean_ctor_get(v___x_448_, 5);
v_messages_456_ = lean_ctor_get(v___x_448_, 6);
v_snapshotTasks_457_ = lean_ctor_get(v___x_448_, 8);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_481_ == 0)
{
v___x_459_ = v___x_448_;
v_isShared_460_ = v_isSharedCheck_481_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_snapshotTasks_457_);
lean_inc(v_infoState_449_);
lean_inc(v_messages_456_);
lean_inc(v_cache_455_);
lean_inc(v_traceState_454_);
lean_inc(v_auxDeclNGen_453_);
lean_inc(v_ngen_452_);
lean_inc(v_nextMacroScope_451_);
lean_inc(v_env_450_);
lean_dec(v___x_448_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_481_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
uint8_t v_enabled_461_; lean_object* v_assignment_462_; lean_object* v_lazyAssignment_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_479_; 
v_enabled_461_ = lean_ctor_get_uint8(v_infoState_449_, sizeof(void*)*3);
v_assignment_462_ = lean_ctor_get(v_infoState_449_, 0);
v_lazyAssignment_463_ = lean_ctor_get(v_infoState_449_, 1);
v_isSharedCheck_479_ = !lean_is_exclusive(v_infoState_449_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; 
v_unused_480_ = lean_ctor_get(v_infoState_449_, 2);
lean_dec(v_unused_480_);
v___x_465_ = v_infoState_449_;
v_isShared_466_ = v_isSharedCheck_479_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_lazyAssignment_463_);
lean_inc(v_assignment_462_);
lean_dec(v_infoState_449_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_479_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = l_Lean_PersistentArray_push___redArg(v_a_437_, v_a_444_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 2, v___x_467_);
v___x_469_ = v___x_465_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_assignment_462_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_lazyAssignment_463_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v___x_467_);
lean_ctor_set_uint8(v_reuseFailAlloc_478_, sizeof(void*)*3, v_enabled_461_);
v___x_469_ = v_reuseFailAlloc_478_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_471_; 
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 7, v___x_469_);
v___x_471_ = v___x_459_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_env_450_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_nextMacroScope_451_);
lean_ctor_set(v_reuseFailAlloc_477_, 2, v_ngen_452_);
lean_ctor_set(v_reuseFailAlloc_477_, 3, v_auxDeclNGen_453_);
lean_ctor_set(v_reuseFailAlloc_477_, 4, v_traceState_454_);
lean_ctor_set(v_reuseFailAlloc_477_, 5, v_cache_455_);
lean_ctor_set(v_reuseFailAlloc_477_, 6, v_messages_456_);
lean_ctor_set(v_reuseFailAlloc_477_, 7, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_477_, 8, v_snapshotTasks_457_);
v___x_471_ = v_reuseFailAlloc_477_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_472_ = lean_st_ref_set(v___y_428_, v___x_471_);
v___x_473_ = lean_box(0);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_473_);
v___x_475_ = v___x_446_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
lean_dec_ref(v_a_437_);
v_a_483_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_443_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_443_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0___boxed(lean_object* v___y_491_, lean_object* v_mkInfoTree_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v_a_500_, lean_object* v_a_x3f_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0(v___y_491_, v_mkInfoTree_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v_a_500_, v_a_x3f_501_);
lean_dec(v_a_x3f_501_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_491_);
return v_res_503_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_unsigned_to_nat(32u);
v___x_505_ = lean_mk_empty_array_with_capacity(v___x_504_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_507_ = ((size_t)5ULL);
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_unsigned_to_nat(32u);
v___x_510_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_511_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__0);
v___x_512_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v___x_510_);
lean_ctor_set(v___x_512_, 2, v___x_508_);
lean_ctor_set(v___x_512_, 3, v___x_508_);
lean_ctor_set_usize(v___x_512_, 4, v___x_507_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg(lean_object* v___y_513_){
_start:
{
lean_object* v___x_515_; lean_object* v_infoState_516_; lean_object* v_trees_517_; lean_object* v___x_518_; lean_object* v_infoState_519_; lean_object* v_env_520_; lean_object* v_nextMacroScope_521_; lean_object* v_ngen_522_; lean_object* v_auxDeclNGen_523_; lean_object* v_traceState_524_; lean_object* v_cache_525_; lean_object* v_messages_526_; lean_object* v_snapshotTasks_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_548_; 
v___x_515_ = lean_st_ref_get(v___y_513_);
v_infoState_516_ = lean_ctor_get(v___x_515_, 7);
lean_inc_ref(v_infoState_516_);
lean_dec(v___x_515_);
v_trees_517_ = lean_ctor_get(v_infoState_516_, 2);
lean_inc_ref(v_trees_517_);
lean_dec_ref(v_infoState_516_);
v___x_518_ = lean_st_ref_take(v___y_513_);
v_infoState_519_ = lean_ctor_get(v___x_518_, 7);
v_env_520_ = lean_ctor_get(v___x_518_, 0);
v_nextMacroScope_521_ = lean_ctor_get(v___x_518_, 1);
v_ngen_522_ = lean_ctor_get(v___x_518_, 2);
v_auxDeclNGen_523_ = lean_ctor_get(v___x_518_, 3);
v_traceState_524_ = lean_ctor_get(v___x_518_, 4);
v_cache_525_ = lean_ctor_get(v___x_518_, 5);
v_messages_526_ = lean_ctor_get(v___x_518_, 6);
v_snapshotTasks_527_ = lean_ctor_get(v___x_518_, 8);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_548_ == 0)
{
v___x_529_ = v___x_518_;
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_snapshotTasks_527_);
lean_inc(v_infoState_519_);
lean_inc(v_messages_526_);
lean_inc(v_cache_525_);
lean_inc(v_traceState_524_);
lean_inc(v_auxDeclNGen_523_);
lean_inc(v_ngen_522_);
lean_inc(v_nextMacroScope_521_);
lean_inc(v_env_520_);
lean_dec(v___x_518_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
uint8_t v_enabled_531_; lean_object* v_assignment_532_; lean_object* v_lazyAssignment_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_546_; 
v_enabled_531_ = lean_ctor_get_uint8(v_infoState_519_, sizeof(void*)*3);
v_assignment_532_ = lean_ctor_get(v_infoState_519_, 0);
v_lazyAssignment_533_ = lean_ctor_get(v_infoState_519_, 1);
v_isSharedCheck_546_ = !lean_is_exclusive(v_infoState_519_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; 
v_unused_547_ = lean_ctor_get(v_infoState_519_, 2);
lean_dec(v_unused_547_);
v___x_535_ = v_infoState_519_;
v_isShared_536_ = v_isSharedCheck_546_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_lazyAssignment_533_);
lean_inc(v_assignment_532_);
lean_dec(v_infoState_519_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_546_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___closed__1);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 2, v___x_537_);
v___x_539_ = v___x_535_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_assignment_532_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_lazyAssignment_533_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v___x_537_);
lean_ctor_set_uint8(v_reuseFailAlloc_545_, sizeof(void*)*3, v_enabled_531_);
v___x_539_ = v_reuseFailAlloc_545_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_541_; 
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 7, v___x_539_);
v___x_541_ = v___x_529_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_env_520_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_nextMacroScope_521_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_ngen_522_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_auxDeclNGen_523_);
lean_ctor_set(v_reuseFailAlloc_544_, 4, v_traceState_524_);
lean_ctor_set(v_reuseFailAlloc_544_, 5, v_cache_525_);
lean_ctor_set(v_reuseFailAlloc_544_, 6, v_messages_526_);
lean_ctor_set(v_reuseFailAlloc_544_, 7, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_544_, 8, v_snapshotTasks_527_);
v___x_541_ = v_reuseFailAlloc_544_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_st_ref_set(v___y_513_, v___x_541_);
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v_trees_517_);
return v___x_543_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg___boxed(lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg(v___y_549_);
lean_dec(v___y_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg(lean_object* v_x_552_, lean_object* v_mkInfoTree_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v_infoState_564_; uint8_t v_enabled_565_; 
v___x_563_ = lean_st_ref_get(v___y_561_);
v_infoState_564_ = lean_ctor_get(v___x_563_, 7);
lean_inc_ref(v_infoState_564_);
lean_dec(v___x_563_);
v_enabled_565_ = lean_ctor_get_uint8(v_infoState_564_, sizeof(void*)*3);
lean_dec_ref(v_infoState_564_);
if (v_enabled_565_ == 0)
{
lean_object* v___x_566_; 
lean_dec_ref(v_mkInfoTree_553_);
lean_inc(v___y_561_);
lean_inc_ref(v___y_560_);
lean_inc(v___y_559_);
lean_inc_ref(v___y_558_);
lean_inc(v___y_557_);
lean_inc_ref(v___y_556_);
lean_inc(v___y_555_);
lean_inc_ref(v___y_554_);
v___x_566_ = lean_apply_9(v_x_552_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, lean_box(0));
return v___x_566_;
}
else
{
lean_object* v___x_567_; lean_object* v_a_568_; lean_object* v_r_569_; 
v___x_567_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg(v___y_561_);
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref(v___x_567_);
lean_inc(v___y_561_);
lean_inc_ref(v___y_560_);
lean_inc(v___y_559_);
lean_inc_ref(v___y_558_);
lean_inc(v___y_557_);
lean_inc_ref(v___y_556_);
lean_inc(v___y_555_);
lean_inc_ref(v___y_554_);
v_r_569_ = lean_apply_9(v_x_552_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, lean_box(0));
if (lean_obj_tag(v_r_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_594_; 
v_a_570_ = lean_ctor_get(v_r_569_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_r_569_);
if (v_isSharedCheck_594_ == 0)
{
v___x_572_ = v_r_569_;
v_isShared_573_ = v_isSharedCheck_594_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v_r_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_594_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
lean_inc(v_a_570_);
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 1);
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_593_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0(v___y_561_, v_mkInfoTree_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v_a_568_, v___x_575_);
lean_dec_ref(v___x_575_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v___x_576_, 0);
lean_dec(v_unused_584_);
v___x_578_ = v___x_576_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_dec(v___x_576_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_a_570_);
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_570_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec(v_a_570_);
v_a_585_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_576_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_576_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_a_595_ = lean_ctor_get(v_r_569_, 0);
lean_inc(v_a_595_);
lean_dec_ref(v_r_569_);
v___x_596_ = lean_box(0);
v___x_597_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___lam__0(v___y_561_, v_mkInfoTree_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v_a_568_, v___x_596_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v___x_597_, 0);
lean_dec(v_unused_605_);
v___x_599_ = v___x_597_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_dec(v___x_597_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
lean_ctor_set_tag(v___x_599_, 1);
lean_ctor_set(v___x_599_, 0, v_a_595_);
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_595_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec(v_a_595_);
v_a_606_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_597_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_597_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg___boxed(lean_object* v_x_614_, lean_object* v_mkInfoTree_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg(v_x_614_, v_mkInfoTree_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__5(lean_object* v_steps_626_, lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v_target_629_, lean_object* v_tag_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; 
lean_inc(v_steps_626_);
v___x_640_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v_steps_626_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___f_642_; lean_object* v___f_643_; lean_object* v___x_644_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref(v___x_640_);
v___f_642_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__3___boxed), 14, 5);
lean_closure_set(v___f_642_, 0, v_steps_626_);
lean_closure_set(v___f_642_, 1, v_target_629_);
lean_closure_set(v___f_642_, 2, v___x_627_);
lean_closure_set(v___f_642_, 3, v_tag_630_);
lean_closure_set(v___f_642_, 4, v___x_628_);
v___f_643_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__4___boxed), 11, 1);
lean_closure_set(v___f_643_, 0, v_a_641_);
v___x_644_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg(v___f_642_, v___f_643_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
return v___x_644_;
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_tag_630_);
lean_dec_ref(v_target_629_);
lean_dec(v___x_628_);
lean_dec_ref(v___x_627_);
lean_dec(v_steps_626_);
v_a_645_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_640_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_640_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___lam__5___boxed(lean_object* v_steps_653_, lean_object* v___x_654_, lean_object* v___x_655_, lean_object* v_target_656_, lean_object* v_tag_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Elab_Tactic_evalCalc___lam__5(v_steps_653_, v___x_654_, v___x_655_, v_target_656_, v_tag_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
return v_res_667_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__0(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__1(void){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = lean_mk_string_unchecked("calcTactic", 10, 10);
return v___x_669_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__2(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__1, &l_Lean_Elab_Tactic_evalCalc___closed__1_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__1);
v___x_671_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__0, &l_Lean_Elab_Tactic_evalCalc___closed__0_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__0);
v___x_672_ = l_Lean_Name_mkStr2(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__3(void){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = lean_mk_string_unchecked("calcSteps", 9, 9);
return v___x_673_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__4(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_674_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__3, &l_Lean_Elab_Tactic_evalCalc___closed__3_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__3);
v___x_675_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__0, &l_Lean_Elab_Tactic_evalCalc___closed__0_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__0);
v___x_676_ = l_Lean_Name_mkStr2(v___x_675_, v___x_674_);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__5(void){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = lean_mk_string_unchecked("calc", 4, 4);
return v___x_677_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalCalc___closed__6(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__5, &l_Lean_Elab_Tactic_evalCalc___closed__5_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__5);
v___x_679_ = l_Lean_Name_mkStr1(v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc(lean_object* v_x_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_690_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__2, &l_Lean_Elab_Tactic_evalCalc___closed__2_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__2);
lean_inc(v_x_680_);
v___x_691_ = l_Lean_Syntax_isOfKind(v_x_680_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; 
lean_dec(v_x_680_);
v___x_692_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg();
return v___x_692_;
}
else
{
lean_object* v___x_693_; lean_object* v_steps_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_693_ = lean_unsigned_to_nat(1u);
v_steps_694_ = l_Lean_Syntax_getArg(v_x_680_, v___x_693_);
v___x_695_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__4, &l_Lean_Elab_Tactic_evalCalc___closed__4_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__4);
lean_inc(v_steps_694_);
v___x_696_ = l_Lean_Syntax_isOfKind(v_steps_694_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v_steps_694_);
lean_dec(v_x_680_);
v___x_697_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalCalc_spec__0___redArg();
return v___x_697_;
}
else
{
lean_object* v_fileName_698_; lean_object* v_fileMap_699_; lean_object* v_options_700_; lean_object* v_currRecDepth_701_; lean_object* v_maxRecDepth_702_; lean_object* v_ref_703_; lean_object* v_currNamespace_704_; lean_object* v_openDecls_705_; lean_object* v_initHeartbeats_706_; lean_object* v_maxHeartbeats_707_; lean_object* v_quotContext_708_; lean_object* v_currMacroScope_709_; uint8_t v_diag_710_; lean_object* v_cancelTk_x3f_711_; uint8_t v_suppressElabErrors_712_; lean_object* v_inheritedTraceOptions_713_; lean_object* v___x_714_; lean_object* v_tk_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___f_718_; uint8_t v___x_719_; lean_object* v_ref_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_fileName_698_ = lean_ctor_get(v_a_687_, 0);
v_fileMap_699_ = lean_ctor_get(v_a_687_, 1);
v_options_700_ = lean_ctor_get(v_a_687_, 2);
v_currRecDepth_701_ = lean_ctor_get(v_a_687_, 3);
v_maxRecDepth_702_ = lean_ctor_get(v_a_687_, 4);
v_ref_703_ = lean_ctor_get(v_a_687_, 5);
v_currNamespace_704_ = lean_ctor_get(v_a_687_, 6);
v_openDecls_705_ = lean_ctor_get(v_a_687_, 7);
v_initHeartbeats_706_ = lean_ctor_get(v_a_687_, 8);
v_maxHeartbeats_707_ = lean_ctor_get(v_a_687_, 9);
v_quotContext_708_ = lean_ctor_get(v_a_687_, 10);
v_currMacroScope_709_ = lean_ctor_get(v_a_687_, 11);
v_diag_710_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*14);
v_cancelTk_x3f_711_ = lean_ctor_get(v_a_687_, 12);
v_suppressElabErrors_712_ = lean_ctor_get_uint8(v_a_687_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_713_ = lean_ctor_get(v_a_687_, 13);
v___x_714_ = lean_unsigned_to_nat(0u);
v_tk_715_ = l_Lean_Syntax_getArg(v_x_680_, v___x_714_);
lean_dec(v_x_680_);
v___x_716_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__5, &l_Lean_Elab_Tactic_evalCalc___closed__5_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__5);
v___x_717_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__6, &l_Lean_Elab_Tactic_evalCalc___closed__6_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__6);
v___f_718_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___lam__5___boxed), 14, 3);
lean_closure_set(v___f_718_, 0, v_steps_694_);
lean_closure_set(v___f_718_, 1, v___x_716_);
lean_closure_set(v___f_718_, 2, v___x_717_);
v___x_719_ = 0;
v_ref_720_ = l_Lean_replaceRef(v_tk_715_, v_ref_703_);
lean_dec(v_tk_715_);
lean_inc_ref(v_inheritedTraceOptions_713_);
lean_inc(v_cancelTk_x3f_711_);
lean_inc(v_currMacroScope_709_);
lean_inc(v_quotContext_708_);
lean_inc(v_maxHeartbeats_707_);
lean_inc(v_initHeartbeats_706_);
lean_inc(v_openDecls_705_);
lean_inc(v_currNamespace_704_);
lean_inc(v_maxRecDepth_702_);
lean_inc(v_currRecDepth_701_);
lean_inc_ref(v_options_700_);
lean_inc_ref(v_fileMap_699_);
lean_inc_ref(v_fileName_698_);
v___x_721_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_721_, 0, v_fileName_698_);
lean_ctor_set(v___x_721_, 1, v_fileMap_699_);
lean_ctor_set(v___x_721_, 2, v_options_700_);
lean_ctor_set(v___x_721_, 3, v_currRecDepth_701_);
lean_ctor_set(v___x_721_, 4, v_maxRecDepth_702_);
lean_ctor_set(v___x_721_, 5, v_ref_720_);
lean_ctor_set(v___x_721_, 6, v_currNamespace_704_);
lean_ctor_set(v___x_721_, 7, v_openDecls_705_);
lean_ctor_set(v___x_721_, 8, v_initHeartbeats_706_);
lean_ctor_set(v___x_721_, 9, v_maxHeartbeats_707_);
lean_ctor_set(v___x_721_, 10, v_quotContext_708_);
lean_ctor_set(v___x_721_, 11, v_currMacroScope_709_);
lean_ctor_set(v___x_721_, 12, v_cancelTk_x3f_711_);
lean_ctor_set(v___x_721_, 13, v_inheritedTraceOptions_713_);
lean_ctor_set_uint8(v___x_721_, sizeof(void*)*14, v_diag_710_);
lean_ctor_set_uint8(v___x_721_, sizeof(void*)*14 + 1, v_suppressElabErrors_712_);
v___x_722_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v___x_717_, v___f_718_, v___x_719_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v___x_721_, v_a_688_);
lean_dec_ref(v___x_721_);
return v___x_722_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalCalc___boxed(lean_object* v_x_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Elab_Tactic_evalCalc(v_x_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3(lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___redArg(v___y_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3___boxed(lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3_spec__3(v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3(lean_object* v_00_u03b1_754_, lean_object* v_x_755_, lean_object* v_mkInfoTree_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___redArg(v_x_755_, v_mkInfoTree_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3___boxed(lean_object* v_00_u03b1_767_, lean_object* v_x_768_, lean_object* v_mkInfoTree_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_evalCalc_spec__3(v_00_u03b1_767_, v_x_768_, v_mkInfoTree_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
return v_res_779_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0(void){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_780_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1(void){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_781_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2(void){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lean_mk_string_unchecked("evalCalc", 8, 8);
return v___x_782_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_783_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__2);
v___x_784_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__1);
v___x_785_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__0);
v___x_786_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__0, &l_Lean_Elab_Tactic_evalCalc___closed__0_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__0);
v___x_787_ = l_Lean_Name_mkStr4(v___x_786_, v___x_785_, v___x_784_, v___x_783_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1(){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_789_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_790_ = lean_obj_once(&l_Lean_Elab_Tactic_evalCalc___closed__2, &l_Lean_Elab_Tactic_evalCalc___closed__2_once, _init_l_Lean_Elab_Tactic_evalCalc___closed__2);
v___x_791_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3);
v___x_792_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalCalc___boxed), 10, 0);
v___x_793_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_789_, v___x_790_, v___x_791_, v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___boxed(lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1();
return v_res_795_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0(void){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = lean_mk_string_unchecked("Elaborator for the `calc` tactic mode variant. ", 47, 47);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3(){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3);
v___x_799_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___closed__0);
v___x_800_ = l_Lean_addBuiltinDocString(v___x_798_, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3___boxed(lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3();
return v_res_802_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = lean_unsigned_to_nat(15u);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = lean_unsigned_to_nat(25u);
v___x_807_ = lean_unsigned_to_nat(34u);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___x_806_);
return v___x_808_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_809_ = lean_unsigned_to_nat(25u);
v___x_810_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__1);
v___x_811_ = lean_unsigned_to_nat(0u);
v___x_812_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__0);
v___x_813_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___x_811_);
lean_ctor_set(v___x_813_, 2, v___x_810_);
lean_ctor_set(v___x_813_, 3, v___x_809_);
return v___x_813_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_unsigned_to_nat(4u);
v___x_815_ = lean_unsigned_to_nat(15u);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lean_unsigned_to_nat(12u);
v___x_818_ = lean_unsigned_to_nat(15u);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
lean_ctor_set(v___x_819_, 1, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_820_ = lean_unsigned_to_nat(12u);
v___x_821_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__4);
v___x_822_ = lean_unsigned_to_nat(4u);
v___x_823_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__3);
v___x_824_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v___x_822_);
lean_ctor_set(v___x_824_, 2, v___x_821_);
lean_ctor_set(v___x_824_, 3, v___x_820_);
return v___x_824_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__5);
v___x_826_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__2);
v___x_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
lean_ctor_set(v___x_827_, 1, v___x_825_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5(){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1___closed__3);
v___x_830_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6, &l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6_once, _init_l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___closed__6);
v___x_831_ = l_Lean_addBuiltinDeclarationRanges(v___x_829_, v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5___boxed(lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5();
return v_res_833_;
}
}
lean_object* runtime_initialize_Lean_Elab_Calc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Calc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Calc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Calc_0__Lean_Elab_Tactic_evalCalc___regBuiltin_Lean_Elab_Tactic_evalCalc_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Calc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Calc(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Calc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Calc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Calc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Calc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Calc(builtin);
}
#ifdef __cplusplus
}
#endif
