// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Misc
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Elab_Do_mkMonadicType___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoSkip___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoSkip___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoExpr___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoNested___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoNested___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoNested___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoNested___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__7;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__8;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__9;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__10;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__11;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__12;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__13;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__14;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__15;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUnless___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUnless___closed__16;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDbgTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDbgTrace___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoAssert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoAssert___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoDebugAssert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoDebugAssert___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0(v_00_u03b1_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_28_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__0(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__1(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__2(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__3(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_mk_string_unchecked("InternalSyntax", 14, 14);
return v___x_32_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__4(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_mk_string_unchecked("doSkip", 6, 6);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoSkip___closed__5(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_34_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__4, &l_Lean_Elab_Do_elabDoSkip___closed__4_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__4);
v___x_35_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__3, &l_Lean_Elab_Do_elabDoSkip___closed__3_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__3);
v___x_36_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_37_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_38_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_39_ = l_Lean_Name_mkStr5(v___x_38_, v___x_37_, v___x_36_, v___x_35_, v___x_34_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip(lean_object* v_stx_40_, lean_object* v_dec_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__5, &l_Lean_Elab_Do_elabDoSkip___closed__5_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__5);
lean_inc(v_stx_40_);
v___x_51_ = l_Lean_Syntax_isOfKind(v_stx_40_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; 
lean_dec_ref(v_dec_41_);
lean_dec(v_stx_40_);
v___x_52_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_52_;
}
else
{
lean_object* v___x_53_; lean_object* v_tk_54_; lean_object* v___x_55_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v_tk_54_ = l_Lean_Syntax_getArg(v_stx_40_, v___x_53_);
lean_dec(v_stx_40_);
v___x_55_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_41_, v_tk_54_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
lean_dec(v_tk_54_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; lean_object* v___x_57_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_a_56_);
lean_dec_ref(v___x_55_);
v___x_57_ = l_Lean_Elab_Do_DoElemCont_continueWithUnit(v_a_56_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_);
return v___x_57_;
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_55_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_55_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoSkip___boxed(lean_object* v_stx_66_, lean_object* v_dec_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Elab_Do_elabDoSkip(v_stx_66_, v_dec_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec_ref(v_a_68_);
return v_res_76_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_77_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_mk_string_unchecked("elabDoSkip", 10, 10);
return v___x_79_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__2);
v___x_81_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_82_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_83_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_84_ = l_Lean_Name_mkStr4(v___x_83_, v___x_82_, v___x_81_, v___x_80_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1(){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_87_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__5, &l_Lean_Elab_Do_elabDoSkip___closed__5_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__5);
v___x_88_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__3);
v___x_89_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSkip___boxed), 10, 0);
v___x_90_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_86_, v___x_87_, v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___boxed(lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
return v_res_92_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoExpr___closed__0(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("doExpr", 6, 6);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoExpr___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_94_ = lean_obj_once(&l_Lean_Elab_Do_elabDoExpr___closed__0, &l_Lean_Elab_Do_elabDoExpr___closed__0_once, _init_l_Lean_Elab_Do_elabDoExpr___closed__0);
v___x_95_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_96_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_97_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_98_ = l_Lean_Name_mkStr4(v___x_97_, v___x_96_, v___x_95_, v___x_94_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr(lean_object* v_stx_99_, lean_object* v_dec_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_obj_once(&l_Lean_Elab_Do_elabDoExpr___closed__1, &l_Lean_Elab_Do_elabDoExpr___closed__1_once, _init_l_Lean_Elab_Do_elabDoExpr___closed__1);
lean_inc(v_stx_99_);
v___x_110_ = l_Lean_Syntax_isOfKind(v_stx_99_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
lean_dec_ref(v_dec_100_);
lean_dec(v_stx_99_);
v___x_111_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_111_;
}
else
{
lean_object* v_resultType_112_; lean_object* v___x_113_; 
v_resultType_112_ = lean_ctor_get(v_dec_100_, 1);
lean_inc_ref(v_resultType_112_);
v___x_113_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_resultType_112_, v_a_101_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_127_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_127_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_127_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_127_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = l_Lean_Syntax_getArg(v_stx_99_, v___x_118_);
lean_dec(v_stx_99_);
if (v_isShared_117_ == 0)
{
lean_ctor_set_tag(v___x_116_, 1);
v___x_121_ = v___x_116_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_114_);
v___x_121_ = v_reuseFailAlloc_126_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_box(0);
v___x_123_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_119_, v___x_121_, v___x_110_, v___x_110_, v___x_122_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_125_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref(v___x_123_);
v___x_125_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v_dec_100_, v_a_124_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
return v___x_125_;
}
else
{
lean_dec_ref(v_dec_100_);
return v___x_123_;
}
}
}
}
else
{
lean_dec_ref(v_dec_100_);
lean_dec(v_stx_99_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoExpr___boxed(lean_object* v_stx_128_, lean_object* v_dec_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Elab_Do_elabDoExpr(v_stx_128_, v_dec_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec_ref(v_a_130_);
return v_res_138_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0(void){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_mk_string_unchecked("elabDoExpr", 10, 10);
return v___x_139_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_140_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__0);
v___x_141_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_142_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_143_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_144_ = l_Lean_Name_mkStr4(v___x_143_, v___x_142_, v___x_141_, v___x_140_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1(){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_146_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_147_ = lean_obj_once(&l_Lean_Elab_Do_elabDoExpr___closed__1, &l_Lean_Elab_Do_elabDoExpr___closed__1_once, _init_l_Lean_Elab_Do_elabDoExpr___closed__1);
v___x_148_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___closed__1);
v___x_149_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoExpr___boxed), 10, 0);
v___x_150_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_146_, v___x_147_, v___x_148_, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1___boxed(lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
return v_res_152_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoNested___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("doNested", 8, 8);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoNested___closed__1(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = lean_obj_once(&l_Lean_Elab_Do_elabDoNested___closed__0, &l_Lean_Elab_Do_elabDoNested___closed__0_once, _init_l_Lean_Elab_Do_elabDoNested___closed__0);
v___x_155_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_156_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_157_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_158_ = l_Lean_Name_mkStr4(v___x_157_, v___x_156_, v___x_155_, v___x_154_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested(lean_object* v_stx_159_, lean_object* v_dec_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_obj_once(&l_Lean_Elab_Do_elabDoNested___closed__1, &l_Lean_Elab_Do_elabDoNested___closed__1_once, _init_l_Lean_Elab_Do_elabDoNested___closed__1);
lean_inc(v_stx_159_);
v___x_170_ = l_Lean_Syntax_isOfKind(v_stx_159_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_dec_ref(v_dec_160_);
lean_dec(v_stx_159_);
v___x_171_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_171_;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = l_Lean_Syntax_getArg(v_stx_159_, v___x_172_);
lean_dec(v_stx_159_);
v___x_174_ = l_Lean_Elab_Do_elabDoSeq(v___x_173_, v_dec_160_, v___x_170_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_);
return v___x_174_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoNested___boxed(lean_object* v_stx_175_, lean_object* v_dec_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_Elab_Do_elabDoNested(v_stx_175_, v_dec_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec_ref(v_a_177_);
return v_res_185_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_mk_string_unchecked("elabDoNested", 12, 12);
return v___x_186_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_187_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__0);
v___x_188_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_189_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_190_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_191_ = l_Lean_Name_mkStr4(v___x_190_, v___x_189_, v___x_188_, v___x_187_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1(){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_193_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_194_ = lean_obj_once(&l_Lean_Elab_Do_elabDoNested___closed__1, &l_Lean_Elab_Do_elabDoNested___closed__1_once, _init_l_Lean_Elab_Do_elabDoNested___closed__1);
v___x_195_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___closed__1);
v___x_196_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoNested___boxed), 10, 0);
v___x_197_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_193_, v___x_194_, v___x_195_, v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1___boxed(lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
return v_res_199_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__0(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("doUnless", 8, 8);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__1(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_201_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__0, &l_Lean_Elab_Do_elabDoUnless___closed__0_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__0);
v___x_202_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_203_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_204_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_205_ = l_Lean_Name_mkStr4(v___x_204_, v___x_203_, v___x_202_, v___x_201_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__2(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked("doIf", 4, 4);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__3(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_207_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__2, &l_Lean_Elab_Do_elabDoUnless___closed__2_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__2);
v___x_208_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_209_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_210_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_211_ = l_Lean_Name_mkStr4(v___x_210_, v___x_209_, v___x_208_, v___x_207_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__4(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_mk_string_unchecked("if", 2, 2);
return v___x_212_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__5(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_mk_string_unchecked("doIfProp", 8, 8);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__6(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_214_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__5, &l_Lean_Elab_Do_elabDoUnless___closed__5_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__5);
v___x_215_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_216_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_217_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_218_ = l_Lean_Name_mkStr4(v___x_217_, v___x_216_, v___x_215_, v___x_214_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__7(void){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__8(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__7, &l_Lean_Elab_Do_elabDoUnless___closed__7_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__7);
v___x_221_ = l_Lean_Name_mkStr1(v___x_220_);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__9(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Array_mkArray0(lean_box(0));
return v___x_222_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__10(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_mk_string_unchecked("then", 4, 4);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__11(void){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_mk_string_unchecked("doSeqIndent", 11, 11);
return v___x_224_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__12(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_225_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__11, &l_Lean_Elab_Do_elabDoUnless___closed__11_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__11);
v___x_226_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_227_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_228_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_229_ = l_Lean_Name_mkStr4(v___x_228_, v___x_227_, v___x_226_, v___x_225_);
return v___x_229_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__13(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_mk_string_unchecked("doSeqItem", 9, 9);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__14(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_231_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__13, &l_Lean_Elab_Do_elabDoUnless___closed__13_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__13);
v___x_232_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_233_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_234_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_235_ = l_Lean_Name_mkStr4(v___x_234_, v___x_233_, v___x_232_, v___x_231_);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__15(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_mk_string_unchecked("skip", 4, 4);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUnless___closed__16(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_mk_string_unchecked("else", 4, 4);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless(lean_object* v_stx_238_, lean_object* v_dec_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__1, &l_Lean_Elab_Do_elabDoUnless___closed__1_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__1);
lean_inc(v_stx_238_);
v___x_249_ = l_Lean_Syntax_isOfKind(v_stx_238_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
lean_dec_ref(v_dec_239_);
lean_dec(v_stx_238_);
v___x_250_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_250_;
}
else
{
lean_object* v_ref_251_; lean_object* v___x_252_; lean_object* v_tk_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_ref_251_ = lean_ctor_get(v_a_245_, 5);
v___x_252_ = lean_unsigned_to_nat(0u);
v_tk_253_ = l_Lean_Syntax_getArg(v_stx_238_, v___x_252_);
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = l_Lean_Syntax_getArg(v_stx_238_, v___x_254_);
v___x_256_ = lean_unsigned_to_nat(3u);
v___x_257_ = l_Lean_Syntax_getArg(v_stx_238_, v___x_256_);
lean_dec(v_stx_238_);
v___x_258_ = 0;
v___x_259_ = l_Lean_SourceInfo_fromRef(v_ref_251_, v___x_258_);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__3, &l_Lean_Elab_Do_elabDoUnless___closed__3_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__3);
v___x_261_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__4, &l_Lean_Elab_Do_elabDoUnless___closed__4_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__4);
lean_inc_n(v___x_259_, 10);
v___x_262_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_259_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__6, &l_Lean_Elab_Do_elabDoUnless___closed__6_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__6);
v___x_264_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__8, &l_Lean_Elab_Do_elabDoUnless___closed__8_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__8);
v___x_265_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__9, &l_Lean_Elab_Do_elabDoUnless___closed__9_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__9);
v___x_266_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_266_, 0, v___x_259_);
lean_ctor_set(v___x_266_, 1, v___x_264_);
lean_ctor_set(v___x_266_, 2, v___x_265_);
lean_inc_ref_n(v___x_266_, 2);
v___x_267_ = l_Lean_Syntax_node2(v___x_259_, v___x_263_, v___x_266_, v___x_255_);
v___x_268_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__10, &l_Lean_Elab_Do_elabDoUnless___closed__10_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__10);
v___x_269_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_259_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__12, &l_Lean_Elab_Do_elabDoUnless___closed__12_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__12);
v___x_271_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__14, &l_Lean_Elab_Do_elabDoUnless___closed__14_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__14);
v___x_272_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__5, &l_Lean_Elab_Do_elabDoSkip___closed__5_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__5);
v___x_273_ = l_Lean_SourceInfo_fromRef(v_tk_253_, v___x_249_);
lean_dec(v_tk_253_);
v___x_274_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__15, &l_Lean_Elab_Do_elabDoUnless___closed__15_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__15);
v___x_275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = l_Lean_Syntax_node1(v___x_259_, v___x_272_, v___x_275_);
v___x_277_ = l_Lean_Syntax_node2(v___x_259_, v___x_271_, v___x_276_, v___x_266_);
v___x_278_ = l_Lean_Syntax_node1(v___x_259_, v___x_264_, v___x_277_);
v___x_279_ = l_Lean_Syntax_node1(v___x_259_, v___x_270_, v___x_278_);
v___x_280_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__16, &l_Lean_Elab_Do_elabDoUnless___closed__16_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__16);
v___x_281_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_259_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = l_Lean_Syntax_node2(v___x_259_, v___x_264_, v___x_281_, v___x_257_);
v___x_283_ = l_Lean_Syntax_node6(v___x_259_, v___x_260_, v___x_262_, v___x_267_, v___x_269_, v___x_279_, v___x_266_, v___x_282_);
v___x_284_ = l_Lean_Elab_Do_elabDoElem(v___x_283_, v_dec_239_, v___x_249_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUnless___boxed(lean_object* v_stx_285_, lean_object* v_dec_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_Elab_Do_elabDoUnless(v_stx_285_, v_dec_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec_ref(v_a_287_);
return v_res_295_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0(void){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_mk_string_unchecked("elabDoUnless", 12, 12);
return v___x_296_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_297_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__0);
v___x_298_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_299_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_300_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_301_ = l_Lean_Name_mkStr4(v___x_300_, v___x_299_, v___x_298_, v___x_297_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1(){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_303_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_304_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUnless___closed__1, &l_Lean_Elab_Do_elabDoUnless___closed__1_once, _init_l_Lean_Elab_Do_elabDoUnless___closed__1);
v___x_305_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___closed__1);
v___x_306_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoUnless___boxed), 10, 0);
v___x_307_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_303_, v___x_304_, v___x_305_, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1___boxed(lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
return v_res_309_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0(void){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_mk_string_unchecked("dbgTrace", 8, 8);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_mk_string_unchecked("dbg_trace", 9, 9);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_mk_string_unchecked(";", 1, 1);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0(lean_object* v___x_313_, lean_object* v___x_314_, lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v_a_317_, uint8_t v___x_318_, lean_object* v_body_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_ref_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_ref_328_ = lean_ctor_get(v___y_325_, 5);
v___x_329_ = 0;
v___x_330_ = l_Lean_SourceInfo_fromRef(v_ref_328_, v___x_329_);
v___x_331_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0, &l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__0);
v___x_332_ = l_Lean_Name_mkStr4(v___x_313_, v___x_314_, v___x_315_, v___x_331_);
v___x_333_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1, &l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__1);
lean_inc_n(v___x_330_, 2);
v___x_334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_330_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2, &l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2);
v___x_336_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_330_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = l_Lean_Syntax_node4(v___x_330_, v___x_332_, v___x_334_, v___x_316_, v___x_336_, v_body_319_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v_a_317_);
v___x_339_ = l_Lean_Elab_Term_elabTerm(v___x_337_, v___x_338_, v___x_318_, v___x_318_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed(lean_object* v___x_340_, lean_object* v___x_341_, lean_object* v___x_342_, lean_object* v___x_343_, lean_object* v_a_344_, lean_object* v___x_345_, lean_object* v_body_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
uint8_t v___x_3724__boxed_355_; lean_object* v_res_356_; 
v___x_3724__boxed_355_ = lean_unbox(v___x_345_);
v_res_356_ = l_Lean_Elab_Do_elabDoDbgTrace___lam__0(v___x_340_, v___x_341_, v___x_342_, v___x_343_, v_a_344_, v___x_3724__boxed_355_, v_body_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
lean_dec_ref(v___y_347_);
return v_res_356_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__0(void){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_mk_string_unchecked("doDbgTrace", 10, 10);
return v___x_357_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__1(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_358_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__0, &l_Lean_Elab_Do_elabDoDbgTrace___closed__0_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__0);
v___x_359_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_360_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_361_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_362_ = l_Lean_Name_mkStr4(v___x_361_, v___x_360_, v___x_359_, v___x_358_);
return v___x_362_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__2(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_mk_string_unchecked("dbg_trace body", 14, 14);
return v___x_363_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__3(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__2, &l_Lean_Elab_Do_elabDoDbgTrace___closed__2_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__2);
v___x_365_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__4(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__3, &l_Lean_Elab_Do_elabDoDbgTrace___closed__3_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__3);
v___x_367_ = l_Lean_MessageData_ofFormat(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace(lean_object* v_stx_368_, lean_object* v_dec_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_378_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_379_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_380_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_381_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__1, &l_Lean_Elab_Do_elabDoDbgTrace___closed__1_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__1);
lean_inc(v_stx_368_);
v___x_382_ = l_Lean_Syntax_isOfKind(v_stx_368_, v___x_381_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; 
lean_dec_ref(v_dec_369_);
lean_dec(v_stx_368_);
v___x_383_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_383_;
}
else
{
lean_object* v_doBlockResultType_384_; lean_object* v___x_385_; 
v_doBlockResultType_384_ = lean_ctor_get(v_a_370_, 3);
lean_inc_ref(v_doBlockResultType_384_);
v___x_385_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_doBlockResultType_384_, v_a_370_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; lean_object* v_tk_388_; lean_object* v___x_389_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref(v___x_385_);
v___x_387_ = lean_unsigned_to_nat(0u);
v_tk_388_ = l_Lean_Syntax_getArg(v_stx_368_, v___x_387_);
v___x_389_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_369_, v_tk_388_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
lean_dec(v_tk_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___f_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref(v___x_389_);
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = l_Lean_Syntax_getArg(v_stx_368_, v___x_391_);
lean_dec(v_stx_368_);
v___x_393_ = lean_box(v___x_382_);
v___f_394_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDbgTrace___lam__0___boxed), 15, 6);
lean_closure_set(v___f_394_, 0, v___x_378_);
lean_closure_set(v___f_394_, 1, v___x_379_);
lean_closure_set(v___f_394_, 2, v___x_380_);
lean_closure_set(v___f_394_, 3, v___x_392_);
lean_closure_set(v___f_394_, 4, v_a_386_);
lean_closure_set(v___f_394_, 5, v___x_393_);
v___x_395_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__4, &l_Lean_Elab_Do_elabDoDbgTrace___closed__4_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__4);
v___x_396_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_396_, 0, v_a_390_);
v___x_397_ = lean_box(0);
v___x_398_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_395_, v___x_396_, v___f_394_, v___x_397_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
return v___x_398_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_a_386_);
lean_dec(v_stx_368_);
v_a_399_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_389_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_389_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
else
{
lean_dec_ref(v_dec_369_);
lean_dec(v_stx_368_);
return v___x_385_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDbgTrace___boxed(lean_object* v_stx_407_, lean_object* v_dec_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Elab_Do_elabDoDbgTrace(v_stx_407_, v_dec_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_417_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_mk_string_unchecked("elabDoDbgTrace", 14, 14);
return v___x_418_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_419_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__0);
v___x_420_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_421_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_422_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_423_ = l_Lean_Name_mkStr4(v___x_422_, v___x_421_, v___x_420_, v___x_419_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1(){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_425_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_426_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___closed__1, &l_Lean_Elab_Do_elabDoDbgTrace___closed__1_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___closed__1);
v___x_427_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___closed__1);
v___x_428_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDbgTrace___boxed), 10, 0);
v___x_429_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_425_, v___x_426_, v___x_427_, v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1___boxed(lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
return v_res_431_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_mk_string_unchecked("assert", 6, 6);
return v___x_432_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1(void){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lean_mk_string_unchecked("assert!", 7, 7);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0(lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v___x_437_, lean_object* v_a_438_, uint8_t v___x_439_, lean_object* v_body_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_ref_449_; uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_ref_449_ = lean_ctor_get(v___y_446_, 5);
v___x_450_ = 0;
v___x_451_ = l_Lean_SourceInfo_fromRef(v_ref_449_, v___x_450_);
v___x_452_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0, &l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoAssert___lam__0___closed__0);
v___x_453_ = l_Lean_Name_mkStr4(v___x_434_, v___x_435_, v___x_436_, v___x_452_);
v___x_454_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1, &l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoAssert___lam__0___closed__1);
lean_inc_n(v___x_451_, 2);
v___x_455_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_451_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2, &l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2);
v___x_457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_451_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = l_Lean_Syntax_node4(v___x_451_, v___x_453_, v___x_455_, v___x_437_, v___x_457_, v_body_440_);
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v_a_438_);
v___x_460_ = l_Lean_Elab_Term_elabTerm(v___x_458_, v___x_459_, v___x_439_, v___x_439_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___lam__0___boxed(lean_object* v___x_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v___x_464_, lean_object* v_a_465_, lean_object* v___x_466_, lean_object* v_body_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_){
_start:
{
uint8_t v___x_3713__boxed_476_; lean_object* v_res_477_; 
v___x_3713__boxed_476_ = lean_unbox(v___x_466_);
v_res_477_ = l_Lean_Elab_Do_elabDoAssert___lam__0(v___x_461_, v___x_462_, v___x_463_, v___x_464_, v_a_465_, v___x_3713__boxed_476_, v_body_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_477_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__0(void){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = lean_mk_string_unchecked("doAssert", 8, 8);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__1(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__0, &l_Lean_Elab_Do_elabDoAssert___closed__0_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__0);
v___x_480_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_481_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_482_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_483_ = l_Lean_Name_mkStr4(v___x_482_, v___x_481_, v___x_480_, v___x_479_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__2(void){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_mk_string_unchecked("assert! body", 12, 12);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__3(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__2, &l_Lean_Elab_Do_elabDoAssert___closed__2_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__2);
v___x_486_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoAssert___closed__4(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__3, &l_Lean_Elab_Do_elabDoAssert___closed__3_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__3);
v___x_488_ = l_Lean_MessageData_ofFormat(v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert(lean_object* v_stx_489_, lean_object* v_dec_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_499_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_500_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_501_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_502_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__1, &l_Lean_Elab_Do_elabDoAssert___closed__1_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__1);
lean_inc(v_stx_489_);
v___x_503_ = l_Lean_Syntax_isOfKind(v_stx_489_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
lean_dec_ref(v_dec_490_);
lean_dec(v_stx_489_);
v___x_504_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_504_;
}
else
{
lean_object* v_doBlockResultType_505_; lean_object* v___x_506_; 
v_doBlockResultType_505_ = lean_ctor_get(v_a_491_, 3);
lean_inc_ref(v_doBlockResultType_505_);
v___x_506_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_doBlockResultType_505_, v_a_491_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_508_; lean_object* v_tk_509_; lean_object* v___x_510_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref(v___x_506_);
v___x_508_ = lean_unsigned_to_nat(0u);
v_tk_509_ = l_Lean_Syntax_getArg(v_stx_489_, v___x_508_);
v___x_510_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_490_, v_tk_509_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
lean_dec(v_tk_509_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___f_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref(v___x_510_);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = l_Lean_Syntax_getArg(v_stx_489_, v___x_512_);
lean_dec(v_stx_489_);
v___x_514_ = lean_box(v___x_503_);
v___f_515_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoAssert___lam__0___boxed), 15, 6);
lean_closure_set(v___f_515_, 0, v___x_499_);
lean_closure_set(v___f_515_, 1, v___x_500_);
lean_closure_set(v___f_515_, 2, v___x_501_);
lean_closure_set(v___f_515_, 3, v___x_513_);
lean_closure_set(v___f_515_, 4, v_a_507_);
lean_closure_set(v___f_515_, 5, v___x_514_);
v___x_516_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__4, &l_Lean_Elab_Do_elabDoAssert___closed__4_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__4);
v___x_517_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_517_, 0, v_a_511_);
v___x_518_ = lean_box(0);
v___x_519_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_516_, v___x_517_, v___f_515_, v___x_518_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_);
return v___x_519_;
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec(v_a_507_);
lean_dec(v_stx_489_);
v_a_520_ = lean_ctor_get(v___x_510_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_510_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_510_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_dec_ref(v_dec_490_);
lean_dec(v_stx_489_);
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoAssert___boxed(lean_object* v_stx_528_, lean_object* v_dec_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Elab_Do_elabDoAssert(v_stx_528_, v_dec_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
lean_dec_ref(v_a_530_);
return v_res_538_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0(void){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = lean_mk_string_unchecked("elabDoAssert", 12, 12);
return v___x_539_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_540_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__0);
v___x_541_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_542_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_543_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_544_ = l_Lean_Name_mkStr4(v___x_543_, v___x_542_, v___x_541_, v___x_540_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1(){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_546_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_547_ = lean_obj_once(&l_Lean_Elab_Do_elabDoAssert___closed__1, &l_Lean_Elab_Do_elabDoAssert___closed__1_once, _init_l_Lean_Elab_Do_elabDoAssert___closed__1);
v___x_548_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___closed__1);
v___x_549_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoAssert___boxed), 10, 0);
v___x_550_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_546_, v___x_547_, v___x_548_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1___boxed(lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
return v_res_552_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_mk_string_unchecked("debugAssert", 11, 11);
return v___x_553_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1(void){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_mk_string_unchecked("debug_assert!", 13, 13);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0(lean_object* v___x_555_, lean_object* v___x_556_, lean_object* v___x_557_, lean_object* v___x_558_, lean_object* v_a_559_, uint8_t v___x_560_, lean_object* v_body_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_ref_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_ref_570_ = lean_ctor_get(v___y_567_, 5);
v___x_571_ = 0;
v___x_572_ = l_Lean_SourceInfo_fromRef(v_ref_570_, v___x_571_);
v___x_573_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0, &l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__0);
v___x_574_ = l_Lean_Name_mkStr4(v___x_555_, v___x_556_, v___x_557_, v___x_573_);
v___x_575_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1, &l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___lam__0___closed__1);
lean_inc_n(v___x_572_, 2);
v___x_576_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_572_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2, &l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2_once, _init_l_Lean_Elab_Do_elabDoDbgTrace___lam__0___closed__2);
v___x_578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_572_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = l_Lean_Syntax_node4(v___x_572_, v___x_574_, v___x_576_, v___x_558_, v___x_578_, v_body_561_);
v___x_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_580_, 0, v_a_559_);
v___x_581_ = l_Lean_Elab_Term_elabTerm(v___x_579_, v___x_580_, v___x_560_, v___x_560_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed(lean_object* v___x_582_, lean_object* v___x_583_, lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v_a_586_, lean_object* v___x_587_, lean_object* v_body_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
uint8_t v___x_3713__boxed_597_; lean_object* v_res_598_; 
v___x_3713__boxed_597_ = lean_unbox(v___x_587_);
v_res_598_ = l_Lean_Elab_Do_elabDoDebugAssert___lam__0(v___x_582_, v___x_583_, v___x_584_, v___x_585_, v_a_586_, v___x_3713__boxed_597_, v_body_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v___y_589_);
return v_res_598_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__0(void){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_mk_string_unchecked("doDebugAssert", 13, 13);
return v___x_599_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__1(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_600_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__0, &l_Lean_Elab_Do_elabDoDebugAssert___closed__0_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__0);
v___x_601_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_602_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_603_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_604_ = l_Lean_Name_mkStr4(v___x_603_, v___x_602_, v___x_601_, v___x_600_);
return v___x_604_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__2(void){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = lean_mk_string_unchecked("debug_assert! body", 18, 18);
return v___x_605_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__3(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__2, &l_Lean_Elab_Do_elabDoDebugAssert___closed__2_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__2);
v___x_607_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__4(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__3, &l_Lean_Elab_Do_elabDoDebugAssert___closed__3_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__3);
v___x_609_ = l_Lean_MessageData_ofFormat(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert(lean_object* v_stx_610_, lean_object* v_dec_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_620_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_621_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__1, &l_Lean_Elab_Do_elabDoSkip___closed__1_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__1);
v___x_622_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__2, &l_Lean_Elab_Do_elabDoSkip___closed__2_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__2);
v___x_623_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__1, &l_Lean_Elab_Do_elabDoDebugAssert___closed__1_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__1);
lean_inc(v_stx_610_);
v___x_624_ = l_Lean_Syntax_isOfKind(v_stx_610_, v___x_623_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
lean_dec_ref(v_dec_611_);
lean_dec(v_stx_610_);
v___x_625_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoSkip_spec__0___redArg();
return v___x_625_;
}
else
{
lean_object* v_doBlockResultType_626_; lean_object* v___x_627_; 
v_doBlockResultType_626_ = lean_ctor_get(v_a_612_, 3);
lean_inc_ref(v_doBlockResultType_626_);
v___x_627_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_doBlockResultType_626_, v_a_612_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_629_; lean_object* v_tk_630_; lean_object* v___x_631_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref(v___x_627_);
v___x_629_ = lean_unsigned_to_nat(0u);
v_tk_630_ = l_Lean_Syntax_getArg(v_stx_610_, v___x_629_);
v___x_631_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_611_, v_tk_630_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_);
lean_dec(v_tk_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref(v___x_631_);
v___x_633_ = lean_unsigned_to_nat(1u);
v___x_634_ = l_Lean_Syntax_getArg(v_stx_610_, v___x_633_);
lean_dec(v_stx_610_);
v___x_635_ = lean_box(v___x_624_);
v___f_636_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDebugAssert___lam__0___boxed), 15, 6);
lean_closure_set(v___f_636_, 0, v___x_620_);
lean_closure_set(v___f_636_, 1, v___x_621_);
lean_closure_set(v___f_636_, 2, v___x_622_);
lean_closure_set(v___f_636_, 3, v___x_634_);
lean_closure_set(v___f_636_, 4, v_a_628_);
lean_closure_set(v___f_636_, 5, v___x_635_);
v___x_637_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__4, &l_Lean_Elab_Do_elabDoDebugAssert___closed__4_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__4);
v___x_638_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_638_, 0, v_a_632_);
v___x_639_ = lean_box(0);
v___x_640_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_637_, v___x_638_, v___f_636_, v___x_639_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_);
return v___x_640_;
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec(v_a_628_);
lean_dec(v_stx_610_);
v_a_641_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_631_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_631_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
else
{
lean_dec_ref(v_dec_611_);
lean_dec(v_stx_610_);
return v___x_627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoDebugAssert___boxed(lean_object* v_stx_649_, lean_object* v_dec_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_Elab_Do_elabDoDebugAssert(v_stx_649_, v_dec_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_, v_a_657_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
lean_dec(v_a_655_);
lean_dec_ref(v_a_654_);
lean_dec(v_a_653_);
lean_dec_ref(v_a_652_);
lean_dec_ref(v_a_651_);
return v_res_659_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lean_mk_string_unchecked("elabDoDebugAssert", 17, 17);
return v___x_660_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_661_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__0);
v___x_662_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__1);
v___x_663_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1___closed__0);
v___x_664_ = lean_obj_once(&l_Lean_Elab_Do_elabDoSkip___closed__0, &l_Lean_Elab_Do_elabDoSkip___closed__0_once, _init_l_Lean_Elab_Do_elabDoSkip___closed__0);
v___x_665_ = l_Lean_Name_mkStr4(v___x_664_, v___x_663_, v___x_662_, v___x_661_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1(){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_667_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_668_ = lean_obj_once(&l_Lean_Elab_Do_elabDoDebugAssert___closed__1, &l_Lean_Elab_Do_elabDoDebugAssert___closed__1_once, _init_l_Lean_Elab_Do_elabDoDebugAssert___closed__1);
v___x_669_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___closed__1);
v___x_670_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoDebugAssert___boxed), 10, 0);
v___x_671_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_667_, v___x_668_, v___x_669_, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1___boxed(lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
return v_res_673_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoSkip___regBuiltin_Lean_Elab_Do_elabDoSkip__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoExpr___regBuiltin_Lean_Elab_Do_elabDoExpr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoNested___regBuiltin_Lean_Elab_Do_elabDoNested__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoUnless___regBuiltin_Lean_Elab_Do_elabDoUnless__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDbgTrace___regBuiltin_Lean_Elab_Do_elabDoDbgTrace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoAssert___regBuiltin_Lean_Elab_Do_elabDoAssert__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Misc_0__Lean_Elab_Do_elabDoDebugAssert___regBuiltin_Lean_Elab_Do_elabDoDebugAssert__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Misc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Misc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Misc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Misc(builtin);
}
#ifdef __cplusplus
}
#endif
