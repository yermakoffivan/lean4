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
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(lean_object* v_msgData_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v___x_152_; lean_object* v_env_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_mctx_156_; lean_object* v_lctx_157_; lean_object* v_options_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_152_ = lean_st_ref_get(v___y_150_);
v_env_153_ = lean_ctor_get(v___x_152_, 0);
lean_inc_ref(v_env_153_);
lean_dec(v___x_152_);
v___x_154_ = lean_st_ref_get(v___y_150_);
lean_dec(v___x_154_);
v___x_155_ = lean_st_ref_get(v___y_148_);
v_mctx_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc_ref(v_mctx_156_);
lean_dec(v___x_155_);
v_lctx_157_ = lean_ctor_get(v___y_147_, 2);
v_options_158_ = lean_ctor_get(v___y_149_, 2);
lean_inc_ref(v_options_158_);
lean_inc_ref(v_lctx_157_);
v___x_159_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_159_, 0, v_env_153_);
lean_ctor_set(v___x_159_, 1, v_mctx_156_);
lean_ctor_set(v___x_159_, 2, v_lctx_157_);
lean_ctor_set(v___x_159_, 3, v_options_158_);
v___x_160_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v_msgData_146_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1___boxed(lean_object* v_msgData_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(v_msgData_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
return v_res_168_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(1);
v___x_170_ = l_Lean_MessageData_ofFormat(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_171_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__1);
v___x_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__2);
v___x_175_ = l_Lean_MessageData_ofFormat(v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4(lean_object* v_x_176_, lean_object* v_x_177_){
_start:
{
if (lean_obj_tag(v_x_177_) == 0)
{
return v_x_176_;
}
else
{
lean_object* v_head_178_; lean_object* v_tail_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_201_; 
v_head_178_ = lean_ctor_get(v_x_177_, 0);
v_tail_179_ = lean_ctor_get(v_x_177_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_177_);
if (v_isSharedCheck_201_ == 0)
{
v___x_181_ = v_x_177_;
v_isShared_182_ = v_isSharedCheck_201_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_tail_179_);
lean_inc(v_head_178_);
lean_dec(v_x_177_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_201_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_before_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_199_; 
v_before_183_ = lean_ctor_get(v_head_178_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v_head_178_);
if (v_isSharedCheck_199_ == 0)
{
lean_object* v_unused_200_; 
v_unused_200_ = lean_ctor_get(v_head_178_, 1);
lean_dec(v_unused_200_);
v___x_185_ = v_head_178_;
v_isShared_186_ = v_isSharedCheck_199_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_before_183_);
lean_dec(v_head_178_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_199_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_187_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 7);
lean_ctor_set(v___x_185_, 1, v___x_187_);
lean_ctor_set(v___x_185_, 0, v_x_176_);
v___x_189_ = v___x_185_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_x_176_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_187_);
v___x_189_ = v_reuseFailAlloc_198_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; lean_object* v___x_192_; 
v___x_190_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 7);
lean_ctor_set(v___x_181_, 1, v___x_190_);
lean_ctor_set(v___x_181_, 0, v___x_189_);
v___x_192_ = v___x_181_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_190_);
v___x_192_ = v_reuseFailAlloc_197_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = l_Lean_MessageData_ofSyntax(v_before_183_);
v___x_194_ = l_Lean_indentD(v___x_193_);
v___x_195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_192_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v_x_176_ = v___x_195_;
v_x_177_ = v_tail_179_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(lean_object* v_opts_202_, lean_object* v_opt_203_){
_start:
{
lean_object* v_name_204_; lean_object* v_defValue_205_; lean_object* v_map_206_; lean_object* v___x_207_; 
v_name_204_ = lean_ctor_get(v_opt_203_, 0);
v_defValue_205_ = lean_ctor_get(v_opt_203_, 1);
v_map_206_ = lean_ctor_get(v_opts_202_, 0);
v___x_207_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_206_, v_name_204_);
if (lean_obj_tag(v___x_207_) == 0)
{
uint8_t v___x_208_; 
v___x_208_ = lean_unbox(v_defValue_205_);
return v___x_208_;
}
else
{
lean_object* v_val_209_; 
v_val_209_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_val_209_);
lean_dec_ref(v___x_207_);
if (lean_obj_tag(v_val_209_) == 1)
{
uint8_t v_v_210_; 
v_v_210_ = lean_ctor_get_uint8(v_val_209_, 0);
lean_dec_ref(v_val_209_);
return v_v_210_;
}
else
{
uint8_t v___x_211_; 
lean_dec(v_val_209_);
v___x_211_ = lean_unbox(v_defValue_205_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_212_, lean_object* v_opt_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(v_opts_212_, v_opt_213_);
lean_dec_ref(v_opt_213_);
lean_dec_ref(v_opts_212_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__0);
v___x_218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__1);
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(lean_object* v_msgData_221_, lean_object* v_macroStack_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_options_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v_options_225_ = lean_ctor_get(v___y_223_, 2);
v___x_226_ = l_Lean_Elab_pp_macroStack;
v___x_227_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__3(v_options_225_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
lean_dec(v_macroStack_222_);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v_msgData_221_);
return v___x_228_;
}
else
{
if (lean_obj_tag(v_macroStack_222_) == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_msgData_221_);
return v___x_229_;
}
else
{
lean_object* v_head_230_; lean_object* v_after_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_246_; 
v_head_230_ = lean_ctor_get(v_macroStack_222_, 0);
lean_inc(v_head_230_);
v_after_231_ = lean_ctor_get(v_head_230_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_head_230_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v_head_230_, 0);
lean_dec(v_unused_247_);
v___x_233_ = v_head_230_;
v_isShared_234_ = v_isSharedCheck_246_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_after_231_);
lean_dec(v_head_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_246_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_235_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_234_ == 0)
{
lean_ctor_set_tag(v___x_233_, 7);
lean_ctor_set(v___x_233_, 1, v___x_235_);
lean_ctor_set(v___x_233_, 0, v_msgData_221_);
v___x_237_ = v___x_233_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_msgData_221_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_235_);
v___x_237_ = v_reuseFailAlloc_245_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_msgData_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_238_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___closed__2);
v___x_239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_MessageData_ofSyntax(v_after_231_);
v___x_241_ = l_Lean_indentD(v___x_240_);
v_msgData_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_242_, 0, v___x_239_);
lean_ctor_set(v_msgData_242_, 1, v___x_241_);
v___x_243_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2_spec__4(v_msgData_242_, v_macroStack_222_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_248_, lean_object* v_macroStack_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_msgData_248_, v_macroStack_249_, v___y_250_);
lean_dec_ref(v___y_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(lean_object* v_msg_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_ref_261_; lean_object* v___x_262_; lean_object* v_a_263_; lean_object* v_macroStack_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_275_; 
v_ref_261_ = lean_ctor_get(v___y_258_, 5);
v___x_262_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__1(v_msg_253_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref(v___x_262_);
v_macroStack_264_ = lean_ctor_get(v___y_254_, 1);
v___x_265_ = l_Lean_Elab_getBetterRef(v_ref_261_, v_macroStack_264_);
lean_inc(v_macroStack_264_);
v___x_266_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_a_263_, v_macroStack_264_, v___y_258_);
v_a_267_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_275_ == 0)
{
v___x_269_ = v___x_266_;
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_266_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_275_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_265_);
lean_ctor_set(v___x_271_, 1, v_a_267_);
if (v_isShared_270_ == 0)
{
lean_ctor_set_tag(v___x_269_, 1);
lean_ctor_set(v___x_269_, 0, v___x_271_);
v___x_273_ = v___x_269_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg___boxed(lean_object* v_msg_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v_msg_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
return v_res_284_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0(void){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = lean_mk_string_unchecked("DSL", 3, 3);
return v___x_285_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_mk_string_unchecked("verLit", 6, 6);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__1);
v___x_288_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_289_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_290_ = l_Lean_Name_mkStr3(v___x_289_, v___x_288_, v___x_287_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3(void){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lean_mk_string_unchecked("Except", 6, 6);
return v___x_291_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__3);
v___x_293_ = l_Lean_Name_mkStr1(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5(void){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = lean_mk_string_unchecked("String", 6, 6);
return v___x_294_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__5);
v___x_296_ = l_Lean_Name_mkStr1(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__6);
v___x_299_ = l_Lean_mkConst(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__7);
v___x_301_ = lean_unsigned_to_nat(2u);
v___x_302_ = lean_mk_empty_array_with_capacity(v___x_301_);
v___x_303_ = lean_array_push(v___x_302_, v___x_300_);
return v___x_303_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9(void){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_304_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_305_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_306_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12(void){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_307_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_308_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__12);
v___x_309_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__11);
v___x_310_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__10);
v___x_311_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9);
v___x_312_ = l_Lean_Name_mkStr4(v___x_311_, v___x_310_, v___x_309_, v___x_308_);
return v___x_312_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14(void){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = lean_mk_string_unchecked("decodeVersion", 13, 13);
return v___x_313_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_315_ = l_String_toRawSubstring_x27(v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_317_ = l_Lean_Name_mkStr1(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17(void){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_mk_string_unchecked("DecodeVersion", 13, 13);
return v___x_318_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_319_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__14);
v___x_320_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__17);
v___x_321_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_322_ = l_Lean_Name_mkStr3(v___x_321_, v___x_320_, v___x_319_);
return v___x_322_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_box(0);
v___x_324_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__18);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_box(0);
v___x_327_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__19);
v___x_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_329_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__21);
v___x_331_ = l_Lean_Name_mkStr1(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23(void){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = lean_mk_string_unchecked("termS!_", 7, 7);
return v___x_332_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__23);
v___x_334_ = l_Lean_Name_mkStr1(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25(void){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_mk_string_unchecked("s!", 2, 2);
return v___x_335_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26(void){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_mk_string_unchecked("Expr", 4, 4);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__26);
v___x_338_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__9);
v___x_339_ = l_Lean_Name_mkStr2(v___x_338_, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_box(0);
v___x_341_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__27);
v___x_342_ = l_Lean_mkConst(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__28);
v___x_344_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8);
v___x_345_ = lean_array_push(v___x_344_, v___x_343_);
return v___x_345_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30(void){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = lean_mk_string_unchecked("toResultExpr", 12, 12);
return v___x_346_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_347_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__30);
v___x_348_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_349_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_350_ = l_Lean_Name_mkStr3(v___x_349_, v___x_348_, v___x_347_);
return v___x_350_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32(void){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lean_mk_string_unchecked("expected type is not known", 26, 26);
return v___x_351_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__32);
v___x_353_ = l_Lean_stringToMessageData(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit(lean_object* v_stx_354_, lean_object* v_expectedType_x3f_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2);
lean_inc(v_stx_354_);
v___x_364_ = l_Lean_Syntax_isOfKind(v_stx_354_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
lean_dec(v_expectedType_x3f_355_);
lean_dec(v_stx_354_);
v___x_365_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__0___redArg();
return v___x_365_;
}
else
{
lean_object* v___x_366_; 
lean_inc(v_expectedType_x3f_355_);
v___x_366_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_dec_ref(v___x_366_);
if (lean_obj_tag(v_expectedType_x3f_355_) == 1)
{
lean_object* v_val_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_438_; 
v_val_367_ = lean_ctor_get(v_expectedType_x3f_355_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v_expectedType_x3f_355_);
if (v_isSharedCheck_438_ == 0)
{
v___x_369_ = v_expectedType_x3f_355_;
v_isShared_370_ = v_isSharedCheck_438_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_val_367_);
lean_dec(v_expectedType_x3f_355_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_438_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_371_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__4);
v___x_372_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__8);
v___x_373_ = lean_array_push(v___x_372_, v_val_367_);
v___x_374_ = l_Lean_Meta_mkAppM(v___x_371_, v___x_373_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v_ref_376_; lean_object* v_quotContext_377_; lean_object* v_currMacroScope_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref(v___x_374_);
v_ref_376_ = lean_ctor_get(v_a_360_, 5);
v_quotContext_377_ = lean_ctor_get(v_a_360_, 10);
v_currMacroScope_378_ = lean_ctor_get(v_a_360_, 11);
v___x_379_ = lean_unsigned_to_nat(1u);
v___x_380_ = l_Lean_Syntax_getArg(v_stx_354_, v___x_379_);
lean_dec(v_stx_354_);
v___x_381_ = 0;
v___x_382_ = l_Lean_SourceInfo_fromRef(v_ref_376_, v___x_381_);
v___x_383_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__13);
v___x_384_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__15);
v___x_385_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__16);
lean_inc(v_currMacroScope_378_);
lean_inc(v_quotContext_377_);
v___x_386_ = l_Lean_addMacroScope(v_quotContext_377_, v___x_385_, v_currMacroScope_378_);
v___x_387_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__20);
lean_inc_n(v___x_382_, 4);
v___x_388_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_388_, 0, v___x_382_);
lean_ctor_set(v___x_388_, 1, v___x_384_);
lean_ctor_set(v___x_388_, 2, v___x_386_);
lean_ctor_set(v___x_388_, 3, v___x_387_);
v___x_389_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__22);
v___x_390_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__24);
v___x_391_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__25);
v___x_392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_382_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = l_Lean_Syntax_node2(v___x_382_, v___x_390_, v___x_392_, v___x_380_);
v___x_394_ = l_Lean_Syntax_node1(v___x_382_, v___x_389_, v___x_393_);
v___x_395_ = l_Lean_Syntax_node2(v___x_382_, v___x_383_, v___x_388_, v___x_394_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v_a_375_);
v___x_397_ = v___x_369_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_375_);
v___x_397_ = v_reuseFailAlloc_437_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_box(0);
v___x_399_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_395_, v___x_397_, v___x_364_, v___x_364_, v___x_398_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref(v___x_399_);
v___x_401_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__29);
v___x_402_ = l_Lean_Meta_mkAppM(v___x_371_, v___x_401_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref(v___x_402_);
v___x_404_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__31);
v___x_405_ = lean_mk_empty_array_with_capacity(v___x_379_);
v___x_406_ = lean_array_push(v___x_405_, v_a_400_);
v___x_407_ = l_Lean_Meta_mkAppM(v___x_404_, v___x_406_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_409_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_408_);
lean_dec_ref(v___x_407_);
v___x_409_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_unsafe__1(v_a_403_, v_a_408_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_428_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_428_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_428_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_428_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
if (lean_obj_tag(v_a_410_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_423_; 
lean_del_object(v___x_412_);
v_a_414_ = lean_ctor_get(v_a_410_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_a_410_);
if (v_isSharedCheck_423_ == 0)
{
v___x_416_ = v_a_410_;
v_isShared_417_ = v_isSharedCheck_423_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v_a_410_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_423_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set_tag(v___x_416_, 3);
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_422_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = l_Lean_MessageData_ofFormat(v___x_419_);
v___x_421_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v___x_420_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
return v___x_421_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; 
v_a_424_ = lean_ctor_get(v_a_410_, 0);
lean_inc(v_a_424_);
lean_dec_ref(v_a_410_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v_a_424_);
v___x_426_ = v___x_412_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
v_a_429_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_409_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_409_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_dec(v_a_403_);
return v___x_407_;
}
}
else
{
lean_dec(v_a_400_);
return v___x_402_;
}
}
else
{
return v___x_399_;
}
}
}
else
{
lean_del_object(v___x_369_);
lean_dec(v_stx_354_);
return v___x_374_;
}
}
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec(v_expectedType_x3f_355_);
lean_dec(v_stx_354_);
v___x_439_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__33);
v___x_440_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v___x_439_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
return v___x_440_;
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec(v_expectedType_x3f_355_);
lean_dec(v_stx_354_);
v_a_441_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_366_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_366_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___boxed(lean_object* v_stx_449_, lean_object* v_expectedType_x3f_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit(v_stx_449_, v_expectedType_x3f_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1(lean_object* v_00_u03b1_459_, lean_object* v_msg_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___redArg(v_msg_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1___boxed(lean_object* v_00_u03b1_469_, lean_object* v_msg_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1(v_00_u03b1_469_, v_msg_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2(lean_object* v_msgData_479_, lean_object* v_macroStack_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___redArg(v_msgData_479_, v_macroStack_480_, v___y_485_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2___boxed(lean_object* v_msgData_489_, lean_object* v_macroStack_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit_spec__1_spec__2(v_msgData_489_, v_macroStack_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
return v_res_498_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0(void){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_499_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_500_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__0);
v___x_501_ = lean_box(0);
v___x_502_ = l_Lean_Name_str___override(v___x_501_, v___x_500_);
return v___x_502_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_504_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__1);
v___x_505_ = l_Lean_Name_str___override(v___x_504_, v___x_503_);
return v___x_505_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_506_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_507_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__2);
v___x_508_ = l_Lean_Name_str___override(v___x_507_, v___x_506_);
return v___x_508_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4(void){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_mk_string_unchecked("VerLit", 6, 6);
return v___x_509_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__4);
v___x_511_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__3);
v___x_512_ = l_Lean_Name_str___override(v___x_511_, v___x_510_);
return v___x_512_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_513_ = lean_unsigned_to_nat(0u);
v___x_514_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__5);
v___x_515_ = l_Lean_Name_num___override(v___x_514_, v___x_513_);
return v___x_515_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0, &l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0_once, _init_l_Lake_DSL_instToExprSemVerCore___lam__0___closed__0);
v___x_517_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__6);
v___x_518_ = l_Lean_Name_str___override(v___x_517_, v___x_516_);
return v___x_518_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__0);
v___x_520_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__7);
v___x_521_ = l_Lean_Name_str___override(v___x_520_, v___x_519_);
return v___x_521_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9(void){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_mk_string_unchecked("elabVerLit", 10, 10);
return v___x_522_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_523_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__9);
v___x_524_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__8);
v___x_525_ = l_Lean_Name_str___override(v___x_524_, v___x_523_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1(){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_527_ = l_Lean_Elab_Term_termElabAttribute;
v___x_528_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___closed__2);
v___x_529_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___closed__10);
v___x_530_ = lean_alloc_closure((void*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___boxed), 9, 0);
v___x_531_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_527_, v___x_528_, v___x_529_, v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1___boxed(lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabVerLit__1();
return v_res_533_;
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
