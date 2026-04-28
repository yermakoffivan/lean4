// Lean compiler output
// Module: Lean.Elab.Tactic.ShowTerm
// Imports: public import Lean.Elab.ElabRules public import Lean.Meta.Tactic.TryThis
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
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addExactSuggestion(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addTermSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg___boxed(lean_object* v_e_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg(v_e_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec(v___y_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1(lean_object* v_e_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg(v_e_64_, v___y_70_, v___y_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___boxed(lean_object* v_e_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1(v_e_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0(lean_object* v___x_86_, lean_object* v_tk_87_, uint8_t v___x_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_90_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref(v___x_98_);
v___x_100_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_90_, v___y_92_, v___y_94_, v___y_96_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_102_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
lean_dec_ref(v___x_100_);
v___x_102_ = l_Lean_Elab_Tactic_evalTactic(v___x_86_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_124_; 
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_124_ == 0)
{
lean_object* v_unused_125_; 
v_unused_125_ = lean_ctor_get(v___x_102_, 0);
lean_dec(v_unused_125_);
v___x_104_ = v___x_102_;
v_isShared_105_ = v_isSharedCheck_124_;
goto v_resetjp_103_;
}
else
{
lean_dec(v___x_102_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_124_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_123_; 
v___x_106_ = l_Lean_mkMVar(v_a_99_);
v___x_107_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__1___redArg(v___x_106_, v___y_94_, v___y_96_);
v_a_108_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_123_ == 0)
{
v___x_110_ = v___x_107_;
v_isShared_111_ = v_isSharedCheck_123_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_107_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_123_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v_ref_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v_ref_112_ = lean_ctor_get(v___y_95_, 5);
v___x_113_ = l_Lean_Expr_headBeta(v_a_108_);
lean_inc(v_ref_112_);
if (v_isShared_111_ == 0)
{
lean_ctor_set_tag(v___x_110_, 1);
lean_ctor_set(v___x_110_, 0, v_ref_112_);
v___x_115_ = v___x_110_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_ref_112_);
v___x_115_ = v_reuseFailAlloc_122_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_116_ = 0;
v___x_117_ = lean_box(0);
if (v_isShared_105_ == 0)
{
lean_ctor_set_tag(v___x_104_, 1);
lean_ctor_set(v___x_104_, 0, v_a_101_);
v___x_119_ = v___x_104_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_101_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_Meta_Tactic_TryThis_addExactSuggestion(v_tk_87_, v___x_113_, v___x_115_, v___x_116_, v___x_117_, v___x_119_, v___x_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_);
return v___x_120_;
}
}
}
}
}
else
{
lean_dec(v_a_101_);
lean_dec(v_a_99_);
lean_dec(v_tk_87_);
return v___x_102_;
}
}
else
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_133_; 
lean_dec(v_a_99_);
lean_dec(v_tk_87_);
lean_dec(v___x_86_);
v_a_126_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_133_ == 0)
{
v___x_128_ = v___x_100_;
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_100_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_131_; 
if (v_isShared_129_ == 0)
{
v___x_131_ = v___x_128_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_a_126_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
else
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
lean_dec(v_tk_87_);
lean_dec(v___x_86_);
v_a_134_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_98_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_98_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0___boxed(lean_object* v___x_142_, lean_object* v_tk_143_, lean_object* v___x_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
uint8_t v___x_2301__boxed_154_; lean_object* v_res_155_; 
v___x_2301__boxed_154_ = lean_unbox(v___x_144_);
v_res_155_ = l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0(v___x_142_, v_tk_143_, v___x_2301__boxed_154_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
return v_res_155_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_mk_string_unchecked("showTerm", 8, 8);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__3);
v___x_161_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2);
v___x_162_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1);
v___x_163_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0);
v___x_164_ = l_Lean_Name_mkStr4(v___x_163_, v___x_162_, v___x_161_, v___x_160_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm(lean_object* v_stx_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4);
lean_inc(v_stx_165_);
v___x_176_ = l_Lean_Syntax_isOfKind(v_stx_165_, v___x_175_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
lean_dec(v_stx_165_);
v___x_177_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg();
return v___x_177_;
}
else
{
lean_object* v___x_178_; lean_object* v_tk_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___f_183_; lean_object* v___x_184_; 
v___x_178_ = lean_unsigned_to_nat(0u);
v_tk_179_ = l_Lean_Syntax_getArg(v_stx_165_, v___x_178_);
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = l_Lean_Syntax_getArg(v_stx_165_, v___x_180_);
lean_dec(v_stx_165_);
v___x_182_ = lean_box(v___x_176_);
v___f_183_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___lam__0___boxed), 12, 3);
lean_closure_set(v___f_183_, 0, v___x_181_);
lean_closure_set(v___f_183_, 1, v_tk_179_);
lean_closure_set(v___f_183_, 2, v___x_182_);
v___x_184_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_183_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___boxed(lean_object* v_stx_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_Elab_Tactic_ShowTerm_evalShowTerm(v_stx_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
return v_res_195_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_196_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = lean_mk_string_unchecked("ShowTerm", 8, 8);
return v___x_197_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("evalShowTerm", 12, 12);
return v___x_198_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_199_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__2);
v___x_200_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1);
v___x_201_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2);
v___x_202_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0);
v___x_203_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0);
v___x_204_ = l_Lean_Name_mkStr5(v___x_203_, v___x_202_, v___x_201_, v___x_200_, v___x_199_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1(){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_206_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_207_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__4);
v___x_208_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3);
v___x_209_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___boxed), 10, 0);
v___x_210_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_206_, v___x_207_, v___x_208_, v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___boxed(lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1();
return v_res_212_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_unsigned_to_nat(27u);
v___x_214_ = lean_unsigned_to_nat(13u);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_213_);
return v___x_215_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = lean_unsigned_to_nat(31u);
v___x_217_ = lean_unsigned_to_nat(19u);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_219_ = lean_unsigned_to_nat(31u);
v___x_220_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__1);
v___x_221_ = lean_unsigned_to_nat(27u);
v___x_222_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__0);
v___x_223_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
lean_ctor_set(v___x_223_, 2, v___x_220_);
lean_ctor_set(v___x_223_, 3, v___x_219_);
return v___x_223_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = lean_unsigned_to_nat(31u);
v___x_225_ = lean_unsigned_to_nat(13u);
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___x_224_);
return v___x_226_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_227_ = lean_unsigned_to_nat(43u);
v___x_228_ = lean_unsigned_to_nat(13u);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
return v___x_229_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = lean_unsigned_to_nat(43u);
v___x_231_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__4);
v___x_232_ = lean_unsigned_to_nat(31u);
v___x_233_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__3);
v___x_234_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_232_);
lean_ctor_set(v___x_234_, 2, v___x_231_);
lean_ctor_set(v___x_234_, 3, v___x_230_);
return v___x_234_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__5);
v___x_236_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__2);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3(){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__3);
v___x_240_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___closed__6);
v___x_241_ = l_Lean_addBuiltinDeclarationRanges(v___x_239_, v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3___boxed(lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3();
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_evalShowTerm_spec__0___redArg___closed__0);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg___boxed(lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg();
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0(lean_object* v_00_u03b1_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg();
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___boxed(lean_object* v_00_u03b1_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0(v_00_u03b1_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg(lean_object* v_e_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
uint8_t v___x_271_; 
v___x_271_ = l_Lean_Expr_hasMVar(v_e_267_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v_e_267_);
return v___x_272_;
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v_mctx_275_; lean_object* v___x_276_; lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_cache_281_; lean_object* v_zetaDeltaFVarIds_282_; lean_object* v_postponed_283_; lean_object* v_diag_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_293_; 
v___x_273_ = lean_st_ref_get(v___y_269_);
lean_dec(v___x_273_);
v___x_274_ = lean_st_ref_get(v___y_268_);
v_mctx_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc_ref(v_mctx_275_);
lean_dec(v___x_274_);
v___x_276_ = l_Lean_instantiateMVarsCore(v_mctx_275_, v_e_267_);
v_fst_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_fst_277_);
v_snd_278_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_snd_278_);
lean_dec_ref(v___x_276_);
v___x_279_ = lean_st_ref_get(v___y_269_);
lean_dec(v___x_279_);
v___x_280_ = lean_st_ref_take(v___y_268_);
v_cache_281_ = lean_ctor_get(v___x_280_, 1);
v_zetaDeltaFVarIds_282_ = lean_ctor_get(v___x_280_, 2);
v_postponed_283_ = lean_ctor_get(v___x_280_, 3);
v_diag_284_ = lean_ctor_get(v___x_280_, 4);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v___x_280_, 0);
lean_dec(v_unused_294_);
v___x_286_ = v___x_280_;
v_isShared_287_ = v_isSharedCheck_293_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_diag_284_);
lean_inc(v_postponed_283_);
lean_inc(v_zetaDeltaFVarIds_282_);
lean_inc(v_cache_281_);
lean_dec(v___x_280_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_293_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v_snd_278_);
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_snd_278_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_cache_281_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_zetaDeltaFVarIds_282_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v_postponed_283_);
lean_ctor_set(v_reuseFailAlloc_292_, 4, v_diag_284_);
v___x_289_ = v_reuseFailAlloc_292_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_st_ref_set(v___y_268_, v___x_289_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v_fst_277_);
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg___boxed(lean_object* v_e_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg(v_e_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec(v___y_296_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1(lean_object* v_e_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg(v_e_300_, v___y_304_, v___y_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___boxed(lean_object* v_e_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1(v_e_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
return v_res_317_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = lean_mk_string_unchecked("showTermElabImpl", 16, 16);
return v___x_319_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_320_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1, &l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1_once, _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__1);
v___x_321_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0, &l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0_once, _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__0);
v___x_322_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__1);
v___x_323_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0);
v___x_324_ = l_Lean_Name_mkStr4(v___x_323_, v___x_322_, v___x_321_, v___x_320_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3(void){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = lean_mk_string_unchecked("Try this:", 9, 9);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm(lean_object* v_x_326_, lean_object* v_x_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2, &l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2_once, _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2);
lean_inc(v_x_326_);
v___x_336_ = l_Lean_Syntax_isOfKind(v_x_326_, v___x_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; 
lean_dec(v_x_327_);
lean_dec(v_x_326_);
v___x_337_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__0___redArg();
return v___x_337_;
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_338_ = lean_unsigned_to_nat(1u);
v___x_339_ = l_Lean_Syntax_getArg(v_x_326_, v___x_338_);
v___x_340_ = lean_box(0);
v___x_341_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_339_, v_x_327_, v___x_336_, v___x_336_, v___x_340_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; uint8_t v___x_343_; lean_object* v___x_344_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
lean_dec_ref(v___x_341_);
v___x_343_ = 0;
v___x_344_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_343_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v___x_345_; lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_375_; 
lean_dec_ref(v___x_344_);
lean_inc(v_a_342_);
v___x_345_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_ShowTerm_elabShowTerm_spec__1___redArg(v_a_342_, v_a_331_, v_a_333_);
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_375_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v_ref_350_; lean_object* v___x_351_; lean_object* v_tk_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v_ref_350_ = lean_ctor_get(v_a_332_, 5);
v___x_351_ = lean_unsigned_to_nat(0u);
v_tk_352_ = l_Lean_Syntax_getArg(v_x_326_, v___x_351_);
lean_dec(v_x_326_);
v___x_353_ = l_Lean_Expr_headBeta(v_a_346_);
lean_inc(v_ref_350_);
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 1);
lean_ctor_set(v___x_348_, 0, v_ref_350_);
v___x_355_ = v___x_348_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_ref_350_);
v___x_355_ = v_reuseFailAlloc_374_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3, &l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3_once, _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__3);
v___x_357_ = l_Lean_Meta_Tactic_TryThis_addTermSuggestion(v_tk_352_, v___x_353_, v___x_355_, v___x_356_, v___x_340_, v_a_330_, v_a_331_, v_a_332_, v_a_333_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; 
v_unused_365_ = lean_ctor_get(v___x_357_, 0);
lean_dec(v_unused_365_);
v___x_359_ = v___x_357_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_dec(v___x_357_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v_a_342_);
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_342_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
else
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_373_; 
lean_dec(v_a_342_);
v_a_366_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_373_ == 0)
{
v___x_368_ = v___x_357_;
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_357_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_366_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec(v_a_342_);
lean_dec(v_x_326_);
v_a_376_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_344_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_344_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
else
{
lean_dec(v_x_326_);
return v___x_341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___boxed(lean_object* v_x_384_, lean_object* v_x_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Elab_Tactic_ShowTerm_elabShowTerm(v_x_384_, v_x_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
return v_res_393_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0(void){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_mk_string_unchecked("elabShowTerm", 12, 12);
return v___x_394_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_395_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__0);
v___x_396_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__1);
v___x_397_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__2);
v___x_398_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1___closed__0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0, &l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0_once, _init_l_Lean_Elab_Tactic_ShowTerm_evalShowTerm___closed__0);
v___x_400_ = l_Lean_Name_mkStr5(v___x_399_, v___x_398_, v___x_397_, v___x_396_, v___x_395_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1(){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_402_ = l_Lean_Elab_Term_termElabAttribute;
v___x_403_ = lean_obj_once(&l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2, &l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2_once, _init_l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___closed__2);
v___x_404_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1);
v___x_405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_ShowTerm_elabShowTerm___boxed), 9, 0);
v___x_406_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_402_, v___x_403_, v___x_404_, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___boxed(lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1();
return v_res_408_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_mk_string_unchecked("Implementation of `show_term` term elaborator. ", 47, 47);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3(){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1);
v___x_412_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___closed__0);
v___x_413_ = l_Lean_addBuiltinDocString(v___x_411_, v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3___boxed(lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3();
return v_res_415_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_unsigned_to_nat(38u);
v___x_417_ = lean_unsigned_to_nat(22u);
v___x_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_unsigned_to_nat(34u);
v___x_420_ = lean_unsigned_to_nat(28u);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v___x_419_);
return v___x_421_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_422_ = lean_unsigned_to_nat(34u);
v___x_423_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__1);
v___x_424_ = lean_unsigned_to_nat(38u);
v___x_425_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__0);
v___x_426_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
lean_ctor_set(v___x_426_, 2, v___x_423_);
lean_ctor_set(v___x_426_, 3, v___x_422_);
return v___x_426_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_unsigned_to_nat(42u);
v___x_428_ = lean_unsigned_to_nat(22u);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___x_427_);
return v___x_429_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_unsigned_to_nat(54u);
v___x_431_ = lean_unsigned_to_nat(22u);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_430_);
return v___x_432_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_433_ = lean_unsigned_to_nat(54u);
v___x_434_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__4);
v___x_435_ = lean_unsigned_to_nat(42u);
v___x_436_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__3);
v___x_437_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_435_);
lean_ctor_set(v___x_437_, 2, v___x_434_);
lean_ctor_set(v___x_437_, 3, v___x_433_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__5);
v___x_439_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__2);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v___x_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5(){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1___closed__1);
v___x_443_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6, &l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6_once, _init_l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___closed__6);
v___x_444_ = l_Lean_addBuiltinDeclarationRanges(v___x_442_, v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5___boxed(lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5();
return v_res_446_;
}
}
lean_object* runtime_initialize_Lean_Elab_ElabRules(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_ShowTerm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_evalShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_evalShowTerm_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ShowTerm_0__Lean_Elab_Tactic_ShowTerm_elabShowTerm___regBuiltin_Lean_Elab_Tactic_ShowTerm_elabShowTerm_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_ShowTerm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ElabRules(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_ShowTerm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ElabRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ShowTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_ShowTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_ShowTerm(builtin);
}
#ifdef __cplusplus
}
#endif
