// Lean compiler output
// Module: Lake.DSL.VerLit
// Imports: public import Lean.ToExpr public import Lake.Util.Version import Lake.DSL.Syntax import Lean.Meta.Eval
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0(lean_object*);
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__0;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__1;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprSemVerCore;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___lam__0___closed__0;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___lam__0___closed__1;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprStdVer___lam__0(lean_object*);
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__0;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__1;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprStdVer;
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___boxed(lean_object*);
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Lake", 4, 4);
return v___x_1_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("SemVerCore", 10, 10);
return v___x_2_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_3_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2);
v___x_5_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1);
v___x_6_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_7_ = l_Lean_Name_mkStr3(v___x_6_, v___x_5_, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__3);
v___x_10_ = l_Lean_mkConst(v___x_9_, v___x_8_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprSemVerCore___lam__0(lean_object* v_ver_11_){
_start:
{
lean_object* v_major_12_; lean_object* v_minor_13_; lean_object* v_patch_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_major_12_ = lean_ctor_get(v_ver_11_, 0);
lean_inc(v_major_12_);
v_minor_13_ = lean_ctor_get(v_ver_11_, 1);
lean_inc(v_minor_13_);
v_patch_14_ = lean_ctor_get(v_ver_11_, 2);
lean_inc(v_patch_14_);
lean_dec_ref(v_ver_11_);
v___x_15_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4);
v___x_16_ = l_Lean_mkNatLit(v_major_12_);
v___x_17_ = l_Lean_mkNatLit(v_minor_13_);
v___x_18_ = l_Lean_mkNatLit(v_patch_14_);
v___x_19_ = lean_unsigned_to_nat(3u);
v___x_20_ = lean_mk_empty_array_with_capacity(v___x_19_);
v___x_21_ = lean_array_push(v___x_20_, v___x_16_);
v___x_22_ = lean_array_push(v___x_21_, v___x_17_);
v___x_23_ = lean_array_push(v___x_22_, v___x_18_);
v___x_24_ = l_Lean_mkAppN(v___x_15_, v___x_23_);
lean_dec_ref(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__0(void){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = lean_alloc_closure((void*)(l_Lake_DSL_instToExprSemVerCore___lam__0), 1, 0);
return v___f_25_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__1(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__1);
v___x_27_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_28_ = l_Lean_Name_mkStr2(v___x_27_, v___x_26_);
return v___x_28_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__2(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__1, &l_Lake_DSL_instToExprSemVerCore___closed__1_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__1);
v___x_31_ = l_Lean_mkConst(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__3(void){
_start:
{
lean_object* v___x_32_; lean_object* v___f_33_; lean_object* v___x_34_; 
v___x_32_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__2, &l_Lake_DSL_instToExprSemVerCore___closed__2_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__2);
v___f_33_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__0, &l_Lake_DSL_instToExprSemVerCore___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__0);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v___f_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__3, &l_Lake_DSL_instToExprSemVerCore___closed__3_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__3);
return v___x_35_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__0(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("StdVer", 6, 6);
return v___x_36_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__1(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_37_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__2);
v___x_38_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___lam__0___closed__0, &l_Lake_DSL_instToExprStdVer___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__0);
v___x_39_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_40_ = l_Lean_Name_mkStr3(v___x_39_, v___x_38_, v___x_37_);
return v___x_40_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___lam__0___closed__1, &l_Lake_DSL_instToExprStdVer___lam__0___closed__1_once, _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__1);
v___x_43_ = l_Lean_mkConst(v___x_42_, v___x_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprStdVer___lam__0(lean_object* v_ver_44_){
_start:
{
lean_object* v_toSemVerCore_45_; lean_object* v_specialDescr_46_; lean_object* v_major_47_; lean_object* v_minor_48_; lean_object* v_patch_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_toSemVerCore_45_ = lean_ctor_get(v_ver_44_, 0);
lean_inc_ref(v_toSemVerCore_45_);
v_specialDescr_46_ = lean_ctor_get(v_ver_44_, 1);
lean_inc_ref(v_specialDescr_46_);
lean_dec_ref(v_ver_44_);
v_major_47_ = lean_ctor_get(v_toSemVerCore_45_, 0);
lean_inc(v_major_47_);
v_minor_48_ = lean_ctor_get(v_toSemVerCore_45_, 1);
lean_inc(v_minor_48_);
v_patch_49_ = lean_ctor_get(v_toSemVerCore_45_, 2);
lean_inc(v_patch_49_);
lean_dec_ref(v_toSemVerCore_45_);
v___x_50_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___lam__0___closed__2, &l_Lake_DSL_instToExprStdVer___lam__0___closed__2_once, _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__2);
v___x_51_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__4);
v___x_52_ = l_Lean_mkNatLit(v_major_47_);
v___x_53_ = l_Lean_mkNatLit(v_minor_48_);
v___x_54_ = l_Lean_mkNatLit(v_patch_49_);
v___x_55_ = lean_unsigned_to_nat(3u);
v___x_56_ = lean_mk_empty_array_with_capacity(v___x_55_);
v___x_57_ = lean_array_push(v___x_56_, v___x_52_);
v___x_58_ = lean_array_push(v___x_57_, v___x_53_);
v___x_59_ = lean_array_push(v___x_58_, v___x_54_);
v___x_60_ = l_Lean_mkAppN(v___x_51_, v___x_59_);
lean_dec_ref(v___x_59_);
v___x_61_ = l_Lean_mkStrLit(v_specialDescr_46_);
v___x_62_ = lean_unsigned_to_nat(2u);
v___x_63_ = lean_mk_empty_array_with_capacity(v___x_62_);
v___x_64_ = lean_array_push(v___x_63_, v___x_60_);
v___x_65_ = lean_array_push(v___x_64_, v___x_61_);
v___x_66_ = l_Lean_mkAppN(v___x_50_, v___x_65_);
lean_dec_ref(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__0(void){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = lean_alloc_closure((void*)(l_Lake_DSL_instToExprStdVer___lam__0), 1, 0);
return v___f_67_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__1(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___lam__0___closed__0, &l_Lake_DSL_instToExprStdVer___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprStdVer___lam__0___closed__0);
v___x_69_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_70_ = l_Lean_Name_mkStr2(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__2(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_box(0);
v___x_72_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__1, &l_Lake_DSL_instToExprStdVer___closed__1_once, _init_l_Lake_DSL_instToExprStdVer___closed__1);
v___x_73_ = l_Lean_mkConst(v___x_72_, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__3(void){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v___x_74_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__2, &l_Lake_DSL_instToExprStdVer___closed__2_once, _init_l_Lake_DSL_instToExprStdVer___closed__2);
v___f_75_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__0, &l_Lake_DSL_instToExprStdVer___closed__0_once, _init_l_Lake_DSL_instToExprStdVer___closed__0);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v___f_75_);
lean_ctor_set(v___x_76_, 1, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__3, &l_Lake_DSL_instToExprStdVer___closed__3_once, _init_l_Lake_DSL_instToExprStdVer___closed__3);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr___redArg(lean_object* v_inst_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
lean_dec_ref(v_inst_78_);
v_a_80_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_87_ == 0)
{
v___x_82_ = v_x_79_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v_x_79_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_80_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
else
{
lean_object* v_toExpr_88_; lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_97_; 
v_toExpr_88_ = lean_ctor_get(v_inst_78_, 0);
lean_inc_ref(v_toExpr_88_);
lean_dec_ref(v_inst_78_);
v_a_89_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_97_ == 0)
{
v___x_91_ = v_x_79_;
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v_x_79_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_apply_1(v_toExpr_88_, v_a_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr(lean_object* v_00_u03b1_98_, lean_object* v_inst_99_, lean_object* v_x_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lake_DSL_toResultExpr___redArg(v_inst_99_, v_x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1(lean_object* v_resT_102_, lean_object* v_resE_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
uint8_t v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; 
v___x_109_ = 1;
v___x_110_ = 1;
v___x_111_ = l_Lean_Meta_evalExpr___redArg(v_resT_102_, v_resE_103_, v___x_109_, v___x_110_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1___boxed(lean_object* v_resT_112_, lean_object* v_resE_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1(v_resT_112_, v_resE_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_);
lean_dec(v_a_117_);
lean_dec_ref(v_a_116_);
lean_dec(v_a_115_);
lean_dec_ref(v_a_114_);
return v_res_119_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_box(0);
v___x_121_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg(){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___closed__0);
v___x_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg___boxed(lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg();
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0(lean_object* v_00_u03b1_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg();
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___boxed(lean_object* v_00_u03b1_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0(v_00_u03b1_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
return v_res_145_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_box(1);
v___x_147_ = l_Lean_MessageData_ofFormat(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_148_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1);
v___x_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2);
v___x_152_ = l_Lean_MessageData_ofFormat(v___x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4(lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
return v_x_153_;
}
else
{
lean_object* v_head_155_; lean_object* v_tail_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_178_; 
v_head_155_ = lean_ctor_get(v_x_154_, 0);
v_tail_156_ = lean_ctor_get(v_x_154_, 1);
v_isSharedCheck_178_ = !lean_is_exclusive(v_x_154_);
if (v_isSharedCheck_178_ == 0)
{
v___x_158_ = v_x_154_;
v_isShared_159_ = v_isSharedCheck_178_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_tail_156_);
lean_inc(v_head_155_);
lean_dec(v_x_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_178_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_before_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_176_; 
v_before_160_ = lean_ctor_get(v_head_155_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v_head_155_);
if (v_isSharedCheck_176_ == 0)
{
lean_object* v_unused_177_; 
v_unused_177_ = lean_ctor_get(v_head_155_, 1);
lean_dec(v_unused_177_);
v___x_162_ = v_head_155_;
v_isShared_163_ = v_isSharedCheck_176_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_before_160_);
lean_dec(v_head_155_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_176_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 7);
lean_ctor_set(v___x_162_, 1, v___x_164_);
lean_ctor_set(v___x_162_, 0, v_x_153_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_x_153_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v___x_164_);
v___x_166_ = v_reuseFailAlloc_175_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_167_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_159_ == 0)
{
lean_ctor_set_tag(v___x_158_, 7);
lean_ctor_set(v___x_158_, 1, v___x_167_);
lean_ctor_set(v___x_158_, 0, v___x_166_);
v___x_169_ = v___x_158_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v___x_167_);
v___x_169_ = v_reuseFailAlloc_174_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = l_Lean_MessageData_ofSyntax(v_before_160_);
v___x_171_ = l_Lean_indentD(v___x_170_);
v___x_172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_169_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v_x_153_ = v___x_172_;
v_x_154_ = v_tail_156_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(lean_object* v_opts_179_, lean_object* v_opt_180_){
_start:
{
lean_object* v_name_181_; lean_object* v_defValue_182_; lean_object* v_map_183_; lean_object* v___x_184_; 
v_name_181_ = lean_ctor_get(v_opt_180_, 0);
v_defValue_182_ = lean_ctor_get(v_opt_180_, 1);
v_map_183_ = lean_ctor_get(v_opts_179_, 0);
v___x_184_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_183_, v_name_181_);
if (lean_obj_tag(v___x_184_) == 0)
{
uint8_t v___x_185_; 
v___x_185_ = lean_unbox(v_defValue_182_);
return v___x_185_;
}
else
{
lean_object* v_val_186_; 
v_val_186_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_val_186_);
lean_dec_ref(v___x_184_);
if (lean_obj_tag(v_val_186_) == 1)
{
uint8_t v_v_187_; 
v_v_187_ = lean_ctor_get_uint8(v_val_186_, 0);
lean_dec_ref(v_val_186_);
return v_v_187_;
}
else
{
uint8_t v___x_188_; 
lean_dec(v_val_186_);
v___x_188_ = lean_unbox(v_defValue_182_);
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_189_, lean_object* v_opt_190_){
_start:
{
uint8_t v_res_191_; lean_object* v_r_192_; 
v_res_191_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(v_opts_189_, v_opt_190_);
lean_dec_ref(v_opt_190_);
lean_dec_ref(v_opts_189_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0);
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1);
v___x_197_ = l_Lean_MessageData_ofFormat(v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(lean_object* v_msgData_198_, lean_object* v_macroStack_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_options_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v_options_202_ = lean_ctor_get(v___y_200_, 2);
v___x_203_ = l_Lean_Elab_pp_macroStack;
v___x_204_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(v_options_202_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec(v_macroStack_199_);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v_msgData_198_);
return v___x_205_;
}
else
{
if (lean_obj_tag(v_macroStack_199_) == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v_msgData_198_);
return v___x_206_;
}
else
{
lean_object* v_head_207_; lean_object* v_after_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_223_; 
v_head_207_ = lean_ctor_get(v_macroStack_199_, 0);
lean_inc(v_head_207_);
v_after_208_ = lean_ctor_get(v_head_207_, 1);
v_isSharedCheck_223_ = !lean_is_exclusive(v_head_207_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; 
v_unused_224_ = lean_ctor_get(v_head_207_, 0);
lean_dec(v_unused_224_);
v___x_210_ = v_head_207_;
v_isShared_211_ = v_isSharedCheck_223_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_after_208_);
lean_dec(v_head_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_223_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_212_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_211_ == 0)
{
lean_ctor_set_tag(v___x_210_, 7);
lean_ctor_set(v___x_210_, 1, v___x_212_);
lean_ctor_set(v___x_210_, 0, v_msgData_198_);
v___x_214_ = v___x_210_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_msgData_198_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_222_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v_msgData_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2);
v___x_216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = l_Lean_MessageData_ofSyntax(v_after_208_);
v___x_218_ = l_Lean_indentD(v___x_217_);
v_msgData_219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_219_, 0, v___x_216_);
lean_ctor_set(v_msgData_219_, 1, v___x_218_);
v___x_220_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4(v_msgData_219_, v_macroStack_199_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_225_, lean_object* v_macroStack_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_msgData_225_, v_macroStack_226_, v___y_227_);
lean_dec_ref(v___y_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(lean_object* v_msgData_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; lean_object* v_env_237_; lean_object* v___x_238_; lean_object* v_mctx_239_; lean_object* v_lctx_240_; lean_object* v_options_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_236_ = lean_st_ref_get(v___y_234_);
v_env_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc_ref(v_env_237_);
lean_dec(v___x_236_);
v___x_238_ = lean_st_ref_get(v___y_232_);
v_mctx_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc_ref(v_mctx_239_);
lean_dec(v___x_238_);
v_lctx_240_ = lean_ctor_get(v___y_231_, 2);
v_options_241_ = lean_ctor_get(v___y_233_, 2);
lean_inc_ref(v_options_241_);
lean_inc_ref(v_lctx_240_);
v___x_242_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_242_, 0, v_env_237_);
lean_ctor_set(v___x_242_, 1, v_mctx_239_);
lean_ctor_set(v___x_242_, 2, v_lctx_240_);
lean_ctor_set(v___x_242_, 3, v_options_241_);
v___x_243_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v_msgData_230_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1___boxed(lean_object* v_msgData_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(v_msgData_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(lean_object* v_msg_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v_ref_260_; lean_object* v___x_261_; lean_object* v_a_262_; lean_object* v_macroStack_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_274_; 
v_ref_260_ = lean_ctor_get(v___y_257_, 5);
v___x_261_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(v_msg_252_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
v_a_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_a_262_);
lean_dec_ref(v___x_261_);
v_macroStack_263_ = lean_ctor_get(v___y_253_, 1);
v___x_264_ = l_Lean_Elab_getBetterRef(v_ref_260_, v_macroStack_263_);
lean_inc(v_macroStack_263_);
v___x_265_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_a_262_, v_macroStack_263_, v___y_257_);
v_a_266_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_274_ == 0)
{
v___x_268_ = v___x_265_;
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_265_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_274_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_272_; 
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_264_);
lean_ctor_set(v___x_270_, 1, v_a_266_);
if (v_isShared_269_ == 0)
{
lean_ctor_set_tag(v___x_268_, 1);
lean_ctor_set(v___x_268_, 0, v___x_270_);
v___x_272_ = v___x_268_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg___boxed(lean_object* v_msg_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v_msg_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
return v_res_283_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_mk_string_unchecked("DSL", 3, 3);
return v___x_284_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_mk_string_unchecked("verLit", 6, 6);
return v___x_285_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_286_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1);
v___x_287_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_288_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_289_ = l_Lean_Name_mkStr3(v___x_288_, v___x_287_, v___x_286_);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_mk_string_unchecked("Except", 6, 6);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3);
v___x_292_ = l_Lean_Name_mkStr1(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("String", 6, 6);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5);
v___x_295_ = l_Lean_Name_mkStr1(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_box(0);
v___x_297_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6);
v___x_298_ = l_Lean_mkConst(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7);
v___x_300_ = lean_unsigned_to_nat(2u);
v___x_301_ = lean_mk_empty_array_with_capacity(v___x_300_);
v___x_302_ = lean_array_push(v___x_301_, v___x_299_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_303_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10(void){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_304_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_305_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_306_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_307_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12);
v___x_308_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11);
v___x_309_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10);
v___x_310_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9);
v___x_311_ = l_Lean_Name_mkStr4(v___x_310_, v___x_309_, v___x_308_, v___x_307_);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14(void){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_mk_string_unchecked("decodeVersion", 13, 13);
return v___x_312_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_314_ = l_String_toRawSubstring_x27(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_316_ = l_Lean_Name_mkStr1(v___x_315_);
return v___x_316_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_mk_string_unchecked("DecodeVersion", 13, 13);
return v___x_317_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_319_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17);
v___x_320_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_321_ = l_Lean_Name_mkStr3(v___x_320_, v___x_319_, v___x_318_);
return v___x_321_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_box(0);
v___x_323_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18);
v___x_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___x_322_);
return v___x_324_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = lean_box(0);
v___x_326_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19);
v___x_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set(v___x_327_, 1, v___x_325_);
return v___x_327_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21(void){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_328_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21);
v___x_330_ = l_Lean_Name_mkStr1(v___x_329_);
return v___x_330_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23(void){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = lean_mk_string_unchecked("termS!_", 7, 7);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23);
v___x_333_ = l_Lean_Name_mkStr1(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_mk_string_unchecked("s!", 2, 2);
return v___x_334_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_mk_string_unchecked("Expr", 4, 4);
return v___x_335_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26);
v___x_337_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9);
v___x_338_ = l_Lean_Name_mkStr2(v___x_337_, v___x_336_);
return v___x_338_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_box(0);
v___x_340_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27);
v___x_341_ = l_Lean_mkConst(v___x_340_, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28);
v___x_343_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8);
v___x_344_ = lean_array_push(v___x_343_, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_mk_string_unchecked("toResultExpr", 12, 12);
return v___x_345_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_346_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30);
v___x_347_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_348_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_349_ = l_Lean_Name_mkStr3(v___x_348_, v___x_347_, v___x_346_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32(void){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_mk_string_unchecked("expected type is not known", 26, 26);
return v___x_350_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32);
v___x_352_ = l_Lean_stringToMessageData(v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit(lean_object* v_stx_353_, lean_object* v_expectedType_x3f_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2);
lean_inc(v_stx_353_);
v___x_363_ = l_Lean_Syntax_isOfKind(v_stx_353_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
lean_dec(v_expectedType_x3f_354_);
lean_dec(v_stx_353_);
v___x_364_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg();
return v___x_364_;
}
else
{
lean_object* v___x_365_; 
lean_inc(v_expectedType_x3f_354_);
v___x_365_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_dec_ref(v___x_365_);
if (lean_obj_tag(v_expectedType_x3f_354_) == 1)
{
lean_object* v_val_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_437_; 
v_val_366_ = lean_ctor_get(v_expectedType_x3f_354_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v_expectedType_x3f_354_);
if (v_isSharedCheck_437_ == 0)
{
v___x_368_ = v_expectedType_x3f_354_;
v_isShared_369_ = v_isSharedCheck_437_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_val_366_);
lean_dec(v_expectedType_x3f_354_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_437_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_370_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4);
v___x_371_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8);
v___x_372_ = lean_array_push(v___x_371_, v_val_366_);
v___x_373_ = l_Lean_Meta_mkAppM(v___x_370_, v___x_372_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v_ref_375_; lean_object* v_quotContext_376_; lean_object* v_currMacroScope_377_; lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref(v___x_373_);
v_ref_375_ = lean_ctor_get(v_a_359_, 5);
v_quotContext_376_ = lean_ctor_get(v_a_359_, 10);
v_currMacroScope_377_ = lean_ctor_get(v_a_359_, 11);
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = l_Lean_Syntax_getArg(v_stx_353_, v___x_378_);
lean_dec(v_stx_353_);
v___x_380_ = 0;
v___x_381_ = l_Lean_SourceInfo_fromRef(v_ref_375_, v___x_380_);
v___x_382_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13);
v___x_383_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15);
v___x_384_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16);
lean_inc(v_currMacroScope_377_);
lean_inc(v_quotContext_376_);
v___x_385_ = l_Lean_addMacroScope(v_quotContext_376_, v___x_384_, v_currMacroScope_377_);
v___x_386_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20);
lean_inc_n(v___x_381_, 4);
v___x_387_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_387_, 0, v___x_381_);
lean_ctor_set(v___x_387_, 1, v___x_383_);
lean_ctor_set(v___x_387_, 2, v___x_385_);
lean_ctor_set(v___x_387_, 3, v___x_386_);
v___x_388_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22);
v___x_389_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24);
v___x_390_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25);
v___x_391_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_381_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = l_Lean_Syntax_node2(v___x_381_, v___x_389_, v___x_391_, v___x_379_);
v___x_393_ = l_Lean_Syntax_node1(v___x_381_, v___x_388_, v___x_392_);
v___x_394_ = l_Lean_Syntax_node2(v___x_381_, v___x_382_, v___x_387_, v___x_393_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v_a_374_);
v___x_396_ = v___x_368_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_374_);
v___x_396_ = v_reuseFailAlloc_436_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_box(0);
v___x_398_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_394_, v___x_396_, v___x_363_, v___x_363_, v___x_397_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref(v___x_398_);
v___x_400_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29);
v___x_401_ = l_Lean_Meta_mkAppM(v___x_370_, v___x_400_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref(v___x_401_);
v___x_403_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_378_);
v___x_405_ = lean_array_push(v___x_404_, v_a_399_);
v___x_406_ = l_Lean_Meta_mkAppM(v___x_403_, v___x_405_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_408_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref(v___x_406_);
v___x_408_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1(v_a_402_, v_a_407_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_427_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_427_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_427_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_427_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
if (lean_obj_tag(v_a_409_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_422_; 
lean_del_object(v___x_411_);
v_a_413_ = lean_ctor_get(v_a_409_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v_a_409_);
if (v_isSharedCheck_422_ == 0)
{
v___x_415_ = v_a_409_;
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v_a_409_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_422_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
lean_ctor_set_tag(v___x_415_, 3);
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_421_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = l_Lean_MessageData_ofFormat(v___x_418_);
v___x_420_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v___x_419_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_420_;
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; 
v_a_423_ = lean_ctor_get(v_a_409_, 0);
lean_inc(v_a_423_);
lean_dec_ref(v_a_409_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v_a_423_);
v___x_425_ = v___x_411_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
v_a_428_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_408_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_408_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_dec(v_a_402_);
return v___x_406_;
}
}
else
{
lean_dec(v_a_399_);
return v___x_401_;
}
}
else
{
return v___x_398_;
}
}
}
else
{
lean_del_object(v___x_368_);
lean_dec(v_stx_353_);
return v___x_373_;
}
}
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec(v_expectedType_x3f_354_);
lean_dec(v_stx_353_);
v___x_438_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33);
v___x_439_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v___x_438_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
return v___x_439_;
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec(v_expectedType_x3f_354_);
lean_dec(v_stx_353_);
v_a_440_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_365_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_365_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___boxed(lean_object* v_stx_448_, lean_object* v_expectedType_x3f_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit(v_stx_448_, v_expectedType_x3f_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1(lean_object* v_00_u03b1_458_, lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v_msg_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___boxed(lean_object* v_00_u03b1_468_, lean_object* v_msg_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1(v_00_u03b1_468_, v_msg_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2(lean_object* v_msgData_478_, lean_object* v_macroStack_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_msgData_478_, v_macroStack_479_, v___y_484_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___boxed(lean_object* v_msgData_488_, lean_object* v_macroStack_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2(v_msgData_488_, v_macroStack_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_497_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0(void){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_498_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_499_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0);
v___x_500_ = lean_box(0);
v___x_501_ = l_Lean_Name_str___override(v___x_500_, v___x_499_);
return v___x_501_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_503_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1);
v___x_504_ = l_Lean_Name_str___override(v___x_503_, v___x_502_);
return v___x_504_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_506_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2);
v___x_507_ = l_Lean_Name_str___override(v___x_506_, v___x_505_);
return v___x_507_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4(void){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_mk_string_unchecked("VerLit", 6, 6);
return v___x_508_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4);
v___x_510_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3);
v___x_511_ = l_Lean_Name_str___override(v___x_510_, v___x_509_);
return v___x_511_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5);
v___x_514_ = l_Lean_Name_num___override(v___x_513_, v___x_512_);
return v___x_514_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_516_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6);
v___x_517_ = l_Lean_Name_str___override(v___x_516_, v___x_515_);
return v___x_517_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_519_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7);
v___x_520_ = l_Lean_Name_str___override(v___x_519_, v___x_518_);
return v___x_520_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9(void){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_mk_string_unchecked("elabVerLit", 10, 10);
return v___x_521_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_522_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9);
v___x_523_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8);
v___x_524_ = l_Lean_Name_str___override(v___x_523_, v___x_522_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1(){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_526_ = l_Lean_Elab_Term_termElabAttribute;
v___x_527_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2);
v___x_528_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10);
v___x_529_ = lean_alloc_closure((void*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___boxed), 9, 0);
v___x_530_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_526_, v___x_527_, v___x_528_, v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___boxed(lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1();
return v_res_532_;
}
}
lean_object* runtime_initialize_Lean_ToExpr(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_DSL_instToExprSemVerCore = _init_l_Lake_DSL_instToExprSemVerCore();
lean_mark_persistent(l_Lake_DSL_instToExprSemVerCore);
l_Lake_DSL_instToExprStdVer = _init_l_Lake_DSL_instToExprStdVer();
lean_mark_persistent(l_Lake_DSL_instToExprStdVer);
res = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ToExpr(uint8_t builtin);
lean_object* initialize_Lake_Util_Version(uint8_t builtin);
lean_object* initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_VerLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_DSL_VerLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_DSL_VerLit(builtin);
}
#ifdef __cplusplus
}
#endif
