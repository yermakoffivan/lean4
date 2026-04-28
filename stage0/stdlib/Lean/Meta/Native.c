// Lean compiler output
// Module: Lean.Meta.Native
// Imports: public import Lean.Meta.Basic import Lean.Util.CollectLevelParams import Lean.Elab.DeclarationRange import Lean.Compiler.Options
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_async;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0;
static lean_once_cell_t l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__11;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__0;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__1;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__2;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__3;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__4;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__5;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__6;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__7;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__8;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__9;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__10;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__11;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__12;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__13;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__14;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__15;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__16;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__17;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__18;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__19;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__20;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__21;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__22;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_NativeEqTrueResult_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_prf_8_; lean_object* v___x_9_; 
v_prf_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_prf_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_prf_8_);
return v___x_9_;
}
else
{
return v_k_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Meta_NativeEqTrueResult_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object* v_t_22_, lean_object* v_success_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_22_, v_success_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_success_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_26_, v_success_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object* v_t_30_, lean_object* v_notTrue_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_30_, v_notTrue_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_notTrue_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_34_, v_notTrue_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_box(0);
v___x_39_ = l_Lean_Elab_abortCommandExceptionId;
v___x_40_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___closed__0);
v___x_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg___boxed(lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg();
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3(lean_object* v_msgData_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v___x_52_; lean_object* v_env_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v_mctx_56_; lean_object* v_lctx_57_; lean_object* v_options_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_52_ = lean_st_ref_get(v___y_50_);
v_env_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc_ref(v_env_53_);
lean_dec(v___x_52_);
v___x_54_ = lean_st_ref_get(v___y_50_);
lean_dec(v___x_54_);
v___x_55_ = lean_st_ref_get(v___y_48_);
v_mctx_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_mctx_56_);
lean_dec(v___x_55_);
v_lctx_57_ = lean_ctor_get(v___y_47_, 2);
v_options_58_ = lean_ctor_get(v___y_49_, 2);
lean_inc_ref(v_options_58_);
lean_inc_ref(v_lctx_57_);
v___x_59_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_59_, 0, v_env_53_);
lean_ctor_set(v___x_59_, 1, v_mctx_56_);
lean_ctor_set(v___x_59_, 2, v_lctx_57_);
lean_ctor_set(v___x_59_, 3, v_options_58_);
v___x_60_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v_msgData_46_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3(v_msgData_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_ref_75_; lean_object* v___x_76_; lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_85_; 
v_ref_75_ = lean_ctor_get(v___y_72_, 5);
v___x_76_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1_spec__3(v_msg_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
v_a_77_ = lean_ctor_get(v___x_76_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_85_ == 0)
{
v___x_79_ = v___x_76_;
v_isShared_80_ = v_isSharedCheck_85_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_76_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_85_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; lean_object* v___x_83_; 
lean_inc(v_ref_75_);
v___x_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_81_, 0, v_ref_75_);
lean_ctor_set(v___x_81_, 1, v_a_77_);
if (v_isShared_80_ == 0)
{
lean_ctor_set_tag(v___x_79_, 1);
lean_ctor_set(v___x_79_, 0, v___x_81_);
v___x_83_ = v___x_79_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v_msg_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(lean_object* v_x_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_a_99_ = lean_ctor_get(v_x_93_, 0);
lean_inc(v_a_99_);
lean_dec_ref(v_x_93_);
v___x_100_ = l_Lean_stringToMessageData(v_a_99_);
v___x_101_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v___x_100_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_101_;
}
else
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
v_a_102_ = lean_ctor_get(v_x_93_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_109_ == 0)
{
v___x_104_ = v_x_93_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v_x_93_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
lean_ctor_set_tag(v___x_104_, 0);
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_102_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg___boxed(lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(v_x_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg(lean_object* v_constName_117_, uint8_t v_checkMeta_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v___x_124_; lean_object* v_env_125_; uint8_t v___x_126_; 
v___x_124_ = lean_st_ref_get(v___y_122_);
v_env_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc_ref(v_env_125_);
lean_dec(v___x_124_);
lean_inc(v_constName_117_);
v___x_126_ = lean_has_compile_error(v_env_125_, v_constName_117_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v_env_128_; lean_object* v_options_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_127_ = lean_st_ref_get(v___y_122_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_env_128_);
lean_dec(v___x_127_);
v_options_129_ = lean_ctor_get(v___y_121_, 2);
v___x_130_ = l_Lean_Environment_evalConst___redArg(v_env_128_, v_options_129_, v_constName_117_, v_checkMeta_118_);
lean_dec(v_constName_117_);
lean_dec_ref(v_env_128_);
v___x_131_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(v___x_130_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v___x_133_; lean_object* v_env_134_; lean_object* v_options_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec_ref(v___x_132_);
v___x_133_ = lean_st_ref_get(v___y_122_);
v_env_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_env_134_);
lean_dec(v___x_133_);
v_options_135_ = lean_ctor_get(v___y_121_, 2);
v___x_136_ = l_Lean_Environment_evalConst___redArg(v_env_134_, v_options_135_, v_constName_117_, v_checkMeta_118_);
lean_dec(v_constName_117_);
lean_dec_ref(v_env_134_);
v___x_137_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(v___x_136_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
return v___x_137_;
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_dec(v_constName_117_);
v_a_138_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_132_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_132_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg___boxed(lean_object* v_constName_146_, lean_object* v_checkMeta_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
uint8_t v_checkMeta_boxed_153_; lean_object* v_res_154_; 
v_checkMeta_boxed_153_ = lean_unbox(v_checkMeta_147_);
v_res_154_ = l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg(v_constName_146_, v_checkMeta_boxed_153_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object* v_auxDeclName_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
uint8_t v___x_161_; lean_object* v___x_162_; 
v___x_161_ = 1;
v___x_162_ = l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg(v_auxDeclName_155_, v___x_161_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object* v_auxDeclName_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(v_auxDeclName_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1(lean_object* v_00_u03b1_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___redArg();
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1___boxed(lean_object* v_00_u03b1_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__1(v_00_u03b1_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0(lean_object* v_00_u03b1_184_, lean_object* v_constName_185_, uint8_t v_checkMeta_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___redArg(v_constName_185_, v_checkMeta_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0___boxed(lean_object* v_00_u03b1_193_, lean_object* v_constName_194_, lean_object* v_checkMeta_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
uint8_t v_checkMeta_boxed_201_; lean_object* v_res_202_; 
v_checkMeta_boxed_201_ = lean_unbox(v_checkMeta_195_);
v_res_202_ = l_Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0(v_00_u03b1_193_, v_constName_194_, v_checkMeta_boxed_201_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0(lean_object* v_00_u03b1_203_, lean_object* v_x_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___redArg(v_x_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0___boxed(lean_object* v_00_u03b1_211_, lean_object* v_x_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0(v_00_u03b1_211_, v_x_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_219_, lean_object* v_msg_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v_msg_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_227_, lean_object* v_msg_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1(v_00_u03b1_227_, v_msg_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object* v_e_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = l_Lean_Expr_hasMVar(v_e_235_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v_e_235_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_mctx_243_; lean_object* v___x_244_; lean_object* v_fst_245_; lean_object* v_snd_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_cache_249_; lean_object* v_zetaDeltaFVarIds_250_; lean_object* v_postponed_251_; lean_object* v_diag_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_261_; 
v___x_241_ = lean_st_ref_get(v___y_237_);
lean_dec(v___x_241_);
v___x_242_ = lean_st_ref_get(v___y_236_);
v_mctx_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc_ref(v_mctx_243_);
lean_dec(v___x_242_);
v___x_244_ = l_Lean_instantiateMVarsCore(v_mctx_243_, v_e_235_);
v_fst_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_fst_245_);
v_snd_246_ = lean_ctor_get(v___x_244_, 1);
lean_inc(v_snd_246_);
lean_dec_ref(v___x_244_);
v___x_247_ = lean_st_ref_get(v___y_237_);
lean_dec(v___x_247_);
v___x_248_ = lean_st_ref_take(v___y_236_);
v_cache_249_ = lean_ctor_get(v___x_248_, 1);
v_zetaDeltaFVarIds_250_ = lean_ctor_get(v___x_248_, 2);
v_postponed_251_ = lean_ctor_get(v___x_248_, 3);
v_diag_252_ = lean_ctor_get(v___x_248_, 4);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_261_ == 0)
{
lean_object* v_unused_262_; 
v_unused_262_ = lean_ctor_get(v___x_248_, 0);
lean_dec(v_unused_262_);
v___x_254_ = v___x_248_;
v_isShared_255_ = v_isSharedCheck_261_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_diag_252_);
lean_inc(v_postponed_251_);
lean_inc(v_zetaDeltaFVarIds_250_);
lean_inc(v_cache_249_);
lean_dec(v___x_248_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_261_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v_snd_246_);
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_snd_246_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_cache_249_);
lean_ctor_set(v_reuseFailAlloc_260_, 2, v_zetaDeltaFVarIds_250_);
lean_ctor_set(v_reuseFailAlloc_260_, 3, v_postponed_251_);
lean_ctor_set(v_reuseFailAlloc_260_, 4, v_diag_252_);
v___x_257_ = v_reuseFailAlloc_260_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_st_ref_set(v___y_236_, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v_fst_245_);
return v___x_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object* v_e_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec(v___y_264_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object* v_e_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_268_, v___y_270_, v___y_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object* v_e_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(v_e_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object* v_kind_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; lean_object* v_auxDeclNGen_286_; lean_object* v___x_287_; lean_object* v_env_288_; lean_object* v___x_289_; lean_object* v_fst_290_; lean_object* v_snd_291_; lean_object* v___x_292_; lean_object* v_env_293_; lean_object* v_nextMacroScope_294_; lean_object* v_ngen_295_; lean_object* v_traceState_296_; lean_object* v_cache_297_; lean_object* v_messages_298_; lean_object* v_infoState_299_; lean_object* v_snapshotTasks_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_309_; 
v___x_285_ = lean_st_ref_get(v___y_283_);
v_auxDeclNGen_286_ = lean_ctor_get(v___x_285_, 3);
lean_inc_ref(v_auxDeclNGen_286_);
lean_dec(v___x_285_);
v___x_287_ = lean_st_ref_get(v___y_283_);
v_env_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc_ref(v_env_288_);
lean_dec(v___x_287_);
v___x_289_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_288_, v_auxDeclNGen_286_, v_kind_282_);
v_fst_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_fst_290_);
v_snd_291_ = lean_ctor_get(v___x_289_, 1);
lean_inc(v_snd_291_);
lean_dec_ref(v___x_289_);
v___x_292_ = lean_st_ref_take(v___y_283_);
v_env_293_ = lean_ctor_get(v___x_292_, 0);
v_nextMacroScope_294_ = lean_ctor_get(v___x_292_, 1);
v_ngen_295_ = lean_ctor_get(v___x_292_, 2);
v_traceState_296_ = lean_ctor_get(v___x_292_, 4);
v_cache_297_ = lean_ctor_get(v___x_292_, 5);
v_messages_298_ = lean_ctor_get(v___x_292_, 6);
v_infoState_299_ = lean_ctor_get(v___x_292_, 7);
v_snapshotTasks_300_ = lean_ctor_get(v___x_292_, 8);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v___x_292_, 3);
lean_dec(v_unused_310_);
v___x_302_ = v___x_292_;
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_snapshotTasks_300_);
lean_inc(v_infoState_299_);
lean_inc(v_messages_298_);
lean_inc(v_cache_297_);
lean_inc(v_traceState_296_);
lean_inc(v_ngen_295_);
lean_inc(v_nextMacroScope_294_);
lean_inc(v_env_293_);
lean_dec(v___x_292_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 3, v_snd_291_);
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_env_293_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_nextMacroScope_294_);
lean_ctor_set(v_reuseFailAlloc_308_, 2, v_ngen_295_);
lean_ctor_set(v_reuseFailAlloc_308_, 3, v_snd_291_);
lean_ctor_set(v_reuseFailAlloc_308_, 4, v_traceState_296_);
lean_ctor_set(v_reuseFailAlloc_308_, 5, v_cache_297_);
lean_ctor_set(v_reuseFailAlloc_308_, 6, v_messages_298_);
lean_ctor_set(v_reuseFailAlloc_308_, 7, v_infoState_299_);
lean_ctor_set(v_reuseFailAlloc_308_, 8, v_snapshotTasks_300_);
v___x_305_ = v_reuseFailAlloc_308_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_st_ref_set(v___y_283_, v___x_305_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v_fst_290_);
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object* v_kind_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_311_, v___y_312_);
lean_dec(v___y_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object* v_kind_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_315_, v___y_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object* v_kind_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(v_kind_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
return v_res_328_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object* v_opts_329_, lean_object* v_opt_330_){
_start:
{
lean_object* v_name_331_; lean_object* v_defValue_332_; lean_object* v_map_333_; lean_object* v___x_334_; 
v_name_331_ = lean_ctor_get(v_opt_330_, 0);
v_defValue_332_ = lean_ctor_get(v_opt_330_, 1);
v_map_333_ = lean_ctor_get(v_opts_329_, 0);
v___x_334_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_333_, v_name_331_);
if (lean_obj_tag(v___x_334_) == 0)
{
uint8_t v___x_335_; 
v___x_335_ = lean_unbox(v_defValue_332_);
return v___x_335_;
}
else
{
lean_object* v_val_336_; 
v_val_336_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_val_336_);
lean_dec_ref(v___x_334_);
if (lean_obj_tag(v_val_336_) == 1)
{
uint8_t v_v_337_; 
v_v_337_ = lean_ctor_get_uint8(v_val_336_, 0);
lean_dec_ref(v_val_336_);
return v_v_337_;
}
else
{
uint8_t v___x_338_; 
lean_dec(v_val_336_);
v___x_338_ = lean_unbox(v_defValue_332_);
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object* v_opts_339_, lean_object* v_opt_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(v_opts_339_, v_opt_340_);
lean_dec_ref(v_opt_340_);
lean_dec_ref(v_opts_339_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object* v_opts_343_, lean_object* v_opt_344_){
_start:
{
lean_object* v_name_345_; lean_object* v_defValue_346_; lean_object* v_map_347_; lean_object* v___x_348_; 
v_name_345_ = lean_ctor_get(v_opt_344_, 0);
v_defValue_346_ = lean_ctor_get(v_opt_344_, 1);
v_map_347_ = lean_ctor_get(v_opts_343_, 0);
v___x_348_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_347_, v_name_345_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_inc(v_defValue_346_);
return v_defValue_346_;
}
else
{
lean_object* v_val_349_; 
v_val_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_val_349_);
lean_dec_ref(v___x_348_);
if (lean_obj_tag(v_val_349_) == 3)
{
lean_object* v_v_350_; 
v_v_350_ = lean_ctor_get(v_val_349_, 0);
lean_inc(v_v_350_);
lean_dec_ref(v_val_349_);
return v_v_350_;
}
else
{
lean_dec(v_val_349_);
lean_inc(v_defValue_346_);
return v_defValue_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4___boxed(lean_object* v_opts_351_, lean_object* v_opt_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(v_opts_351_, v_opt_352_);
lean_dec_ref(v_opt_352_);
lean_dec_ref(v_opts_351_);
return v_res_353_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__0);
v___x_356_ = l_Lean_Name_mkStr1(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object* v_o_357_, lean_object* v_k_358_, uint8_t v_v_359_){
_start:
{
lean_object* v_map_360_; uint8_t v_hasTrace_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_375_; 
v_map_360_ = lean_ctor_get(v_o_357_, 0);
v_hasTrace_361_ = lean_ctor_get_uint8(v_o_357_, sizeof(void*)*1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_o_357_);
if (v_isSharedCheck_375_ == 0)
{
v___x_363_ = v_o_357_;
v_isShared_364_ = v_isSharedCheck_375_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_map_360_);
lean_dec(v_o_357_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_375_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_365_, 0, v_v_359_);
lean_inc(v_k_358_);
v___x_366_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_358_, v___x_365_, v_map_360_);
if (v_hasTrace_361_ == 0)
{
lean_object* v___x_367_; uint8_t v___x_368_; lean_object* v___x_370_; 
v___x_367_ = lean_obj_once(&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1, &l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1_once, _init_l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___closed__1);
v___x_368_ = l_Lean_Name_isPrefixOf(v___x_367_, v_k_358_);
lean_dec(v_k_358_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_366_);
v___x_370_ = v___x_363_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_366_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_ctor_set_uint8(v___x_370_, sizeof(void*)*1, v___x_368_);
return v___x_370_;
}
}
else
{
lean_object* v___x_373_; 
lean_dec(v_k_358_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_366_);
v___x_373_ = v___x_363_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_366_);
lean_ctor_set_uint8(v_reuseFailAlloc_374_, sizeof(void*)*1, v_hasTrace_361_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object* v_o_376_, lean_object* v_k_377_, lean_object* v_v_378_){
_start:
{
uint8_t v_v_boxed_379_; lean_object* v_res_380_; 
v_v_boxed_379_ = lean_unbox(v_v_378_);
v_res_380_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(v_o_376_, v_k_377_, v_v_boxed_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object* v_opts_381_, lean_object* v_opt_382_, uint8_t v_val_383_){
_start:
{
lean_object* v_name_384_; lean_object* v___x_385_; 
v_name_384_ = lean_ctor_get(v_opt_382_, 0);
lean_inc(v_name_384_);
lean_dec_ref(v_opt_382_);
v___x_385_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(v_opts_381_, v_name_384_, v_val_383_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object* v_opts_386_, lean_object* v_opt_387_, lean_object* v_val_388_){
_start:
{
uint8_t v_val_boxed_389_; lean_object* v_res_390_; 
v_val_boxed_389_ = lean_unbox(v_val_388_);
v_res_390_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(v_opts_386_, v_opt_387_, v_val_boxed_389_);
return v_res_390_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__0(void){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_mk_string_unchecked("Tactic `", 8, 8);
return v___x_391_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__0, &l_Lean_Meta_nativeEqTrue___lam__0___closed__0_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__0);
v___x_393_ = l_Lean_stringToMessageData(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__2(void){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_mk_string_unchecked("` failed: Could not evaluate decidable instance. Error: ", 56, 56);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__2, &l_Lean_Meta_nativeEqTrue___lam__0___closed__2_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__2);
v___x_396_ = l_Lean_stringToMessageData(v___x_395_);
return v___x_396_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__4(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_mk_string_unchecked("` failed. Error: ", 17, 17);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__5(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__4, &l_Lean_Meta_nativeEqTrue___lam__0___closed__4_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__4);
v___x_399_ = l_Lean_stringToMessageData(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__6(void){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_mk_string_unchecked("Bool", 4, 4);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__6, &l_Lean_Meta_nativeEqTrue___lam__0___closed__6_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__6);
v___x_402_ = l_Lean_Name_mkStr1(v___x_401_);
return v___x_402_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_box(0);
v___x_404_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_405_ = l_Lean_mkConst(v___x_404_, v___x_403_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_412_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
lean_ctor_set(v___x_412_, 2, v___x_411_);
lean_ctor_set(v___x_412_, 3, v___x_411_);
lean_ctor_set(v___x_412_, 4, v___x_411_);
lean_ctor_set(v___x_412_, 5, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object* v___x_413_, lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_tacticName_416_, lean_object* v_a_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___y_424_; lean_object* v___y_425_; uint8_t v___y_426_; lean_object* v___x_435_; lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_705_; 
v___x_435_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_413_, v___y_421_);
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_705_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_705_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_705_;
goto v_resetjp_437_;
}
v___jp_423_:
{
if (v___y_426_ == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec_ref(v___y_424_);
v___x_427_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_428_ = l_Lean_MessageData_ofName(v_tacticName_416_);
v___x_429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__3, &l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3);
v___x_431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = l_Lean_Exception_toMessageData(v___y_425_);
v___x_433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v___x_433_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec_ref(v___y_420_);
return v___x_434_;
}
else
{
lean_dec_ref(v___y_425_);
lean_dec_ref(v___y_420_);
lean_dec(v_tacticName_416_);
return v___y_424_;
}
}
v_resetjp_437_:
{
lean_object* v___y_441_; lean_object* v___y_455_; lean_object* v___y_456_; uint8_t v___y_457_; lean_object* v___x_466_; lean_object* v_env_467_; lean_object* v_nextMacroScope_468_; lean_object* v_ngen_469_; lean_object* v_auxDeclNGen_470_; lean_object* v_traceState_471_; lean_object* v_messages_472_; lean_object* v_infoState_473_; lean_object* v_snapshotTasks_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_703_; 
v___x_466_ = lean_st_ref_take(v___y_421_);
v_env_467_ = lean_ctor_get(v___x_466_, 0);
v_nextMacroScope_468_ = lean_ctor_get(v___x_466_, 1);
v_ngen_469_ = lean_ctor_get(v___x_466_, 2);
v_auxDeclNGen_470_ = lean_ctor_get(v___x_466_, 3);
v_traceState_471_ = lean_ctor_get(v___x_466_, 4);
v_messages_472_ = lean_ctor_get(v___x_466_, 6);
v_infoState_473_ = lean_ctor_get(v___x_466_, 7);
v_snapshotTasks_474_ = lean_ctor_get(v___x_466_, 8);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; 
v_unused_704_ = lean_ctor_get(v___x_466_, 5);
lean_dec(v_unused_704_);
v___x_476_ = v___x_466_;
v_isShared_477_ = v_isSharedCheck_703_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_snapshotTasks_474_);
lean_inc(v_infoState_473_);
lean_inc(v_messages_472_);
lean_inc(v_traceState_471_);
lean_inc(v_auxDeclNGen_470_);
lean_inc(v_ngen_469_);
lean_inc(v_nextMacroScope_468_);
lean_inc(v_env_467_);
lean_dec(v___x_466_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_703_;
goto v_resetjp_475_;
}
v___jp_440_:
{
if (lean_obj_tag(v___y_441_) == 0)
{
lean_object* v___x_442_; 
lean_dec_ref(v___y_441_);
v___x_442_ = l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(v_a_436_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_dec_ref(v___y_420_);
lean_dec(v_tacticName_416_);
return v___x_442_;
}
else
{
lean_object* v_a_443_; uint8_t v___x_444_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
v___x_444_ = l_Lean_Exception_isInterrupt(v_a_443_);
if (v___x_444_ == 0)
{
uint8_t v___x_445_; 
lean_inc(v_a_443_);
v___x_445_ = l_Lean_Exception_isRuntime(v_a_443_);
v___y_424_ = v___x_442_;
v___y_425_ = v_a_443_;
v___y_426_ = v___x_445_;
goto v___jp_423_;
}
else
{
v___y_424_ = v___x_442_;
v___y_425_ = v_a_443_;
v___y_426_ = v___x_444_;
goto v___jp_423_;
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec(v_a_436_);
lean_dec_ref(v___y_420_);
lean_dec(v_tacticName_416_);
v_a_446_ = lean_ctor_get(v___y_441_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___y_441_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___y_441_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___y_441_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
v___jp_454_:
{
if (v___y_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec_ref(v___y_455_);
v___x_458_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
lean_inc(v_tacticName_416_);
v___x_459_ = l_Lean_MessageData_ofName(v_tacticName_416_);
v___x_460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__5, &l_Lean_Meta_nativeEqTrue___lam__0___closed__5_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__5);
v___x_462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_460_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
v___x_463_ = l_Lean_Exception_toMessageData(v___y_456_);
v___x_464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v___x_464_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
v___y_441_ = v___x_465_;
goto v___jp_440_;
}
else
{
lean_dec_ref(v___y_456_);
v___y_441_ = v___y_455_;
goto v___jp_440_;
}
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_478_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__8, &l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8);
lean_inc_n(v_a_436_, 3);
v___x_479_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_479_, 0, v_a_436_);
lean_ctor_set(v___x_479_, 1, v___x_414_);
lean_ctor_set(v___x_479_, 2, v___x_478_);
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v_a_436_);
lean_ctor_set(v___x_480_, 1, v___x_415_);
v___x_481_ = l_Lean_markMeta(v_env_467_, v_a_436_);
v___x_482_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 5, v___x_482_);
lean_ctor_set(v___x_476_, 0, v___x_481_);
v___x_484_ = v___x_476_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_481_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_nextMacroScope_468_);
lean_ctor_set(v_reuseFailAlloc_702_, 2, v_ngen_469_);
lean_ctor_set(v_reuseFailAlloc_702_, 3, v_auxDeclNGen_470_);
lean_ctor_set(v_reuseFailAlloc_702_, 4, v_traceState_471_);
lean_ctor_set(v_reuseFailAlloc_702_, 5, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_702_, 6, v_messages_472_);
lean_ctor_set(v_reuseFailAlloc_702_, 7, v_infoState_473_);
lean_ctor_set(v_reuseFailAlloc_702_, 8, v_snapshotTasks_474_);
v___x_484_ = v_reuseFailAlloc_702_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v_mctx_488_; lean_object* v_zetaDeltaFVarIds_489_; lean_object* v_postponed_490_; lean_object* v_diag_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_700_; 
v___x_485_ = lean_st_ref_set(v___y_421_, v___x_484_);
v___x_486_ = lean_st_ref_get(v___y_421_);
lean_dec(v___x_486_);
v___x_487_ = lean_st_ref_take(v___y_419_);
v_mctx_488_ = lean_ctor_get(v___x_487_, 0);
v_zetaDeltaFVarIds_489_ = lean_ctor_get(v___x_487_, 2);
v_postponed_490_ = lean_ctor_get(v___x_487_, 3);
v_diag_491_ = lean_ctor_get(v___x_487_, 4);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_700_ == 0)
{
lean_object* v_unused_701_; 
v_unused_701_ = lean_ctor_get(v___x_487_, 1);
lean_dec(v_unused_701_);
v___x_493_ = v___x_487_;
v_isShared_494_ = v_isSharedCheck_700_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_diag_491_);
lean_inc(v_postponed_490_);
lean_inc(v_zetaDeltaFVarIds_489_);
lean_inc(v_mctx_488_);
lean_dec(v___x_487_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_700_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_495_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 1, v___x_495_);
v___x_497_ = v___x_493_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_mctx_488_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_zetaDeltaFVarIds_489_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_postponed_490_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_diag_491_);
v___x_497_ = v_reuseFailAlloc_699_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_options_500_; lean_object* v_env_501_; lean_object* v___x_502_; uint8_t v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_498_ = lean_st_ref_set(v___y_419_, v___x_497_);
v___x_499_ = lean_st_ref_get(v___y_421_);
v_options_500_ = lean_ctor_get(v___y_420_, 2);
v_env_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc_ref(v_env_501_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(1);
v___x_503_ = 1;
v___x_504_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_504_, 0, v___x_479_);
lean_ctor_set(v___x_504_, 1, v_a_417_);
lean_ctor_set(v___x_504_, 2, v___x_502_);
lean_ctor_set(v___x_504_, 3, v___x_480_);
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*4, v___x_503_);
if (v_isShared_439_ == 0)
{
lean_ctor_set_tag(v___x_438_, 1);
lean_ctor_set(v___x_438_, 0, v___x_504_);
v___x_506_ = v___x_438_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_698_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
uint8_t v___x_507_; uint8_t v___x_508_; uint8_t v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v_fileName_513_; lean_object* v_fileMap_514_; lean_object* v_currRecDepth_515_; lean_object* v_ref_516_; lean_object* v_currNamespace_517_; lean_object* v_openDecls_518_; lean_object* v_initHeartbeats_519_; lean_object* v_maxHeartbeats_520_; lean_object* v_quotContext_521_; lean_object* v_currMacroScope_522_; lean_object* v_cancelTk_x3f_523_; uint8_t v_suppressElabErrors_524_; lean_object* v_inheritedTraceOptions_525_; lean_object* v___y_526_; uint8_t v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_553_; uint8_t v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; uint8_t v___y_558_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___y_582_; uint8_t v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_617_; lean_object* v___y_618_; uint8_t v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; uint8_t v___y_622_; uint8_t v___x_642_; lean_object* v___y_644_; lean_object* v___y_645_; uint8_t v___y_677_; uint8_t v___x_697_; 
v___x_507_ = 1;
v___x_508_ = 0;
v___x_578_ = l_Lean_Elab_async;
lean_inc_ref(v_options_500_);
v___x_579_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(v_options_500_, v___x_578_, v___x_508_);
v___x_580_ = l_Lean_diagnostics;
v___x_642_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(v___x_579_, v___x_580_);
v___x_697_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_501_);
lean_dec_ref(v_env_501_);
if (v___x_697_ == 0)
{
if (v___x_642_ == 0)
{
lean_inc_ref(v___y_420_);
v___y_644_ = v___y_420_;
v___y_645_ = v___y_421_;
goto v___jp_643_;
}
else
{
v___y_677_ = v___x_697_;
goto v___jp_676_;
}
}
else
{
v___y_677_ = v___x_642_;
goto v___jp_676_;
}
v___jp_509_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_527_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(v___y_511_, v___y_512_);
v___x_528_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_528_, 0, v_fileName_513_);
lean_ctor_set(v___x_528_, 1, v_fileMap_514_);
lean_ctor_set(v___x_528_, 2, v___y_511_);
lean_ctor_set(v___x_528_, 3, v_currRecDepth_515_);
lean_ctor_set(v___x_528_, 4, v___x_527_);
lean_ctor_set(v___x_528_, 5, v_ref_516_);
lean_ctor_set(v___x_528_, 6, v_currNamespace_517_);
lean_ctor_set(v___x_528_, 7, v_openDecls_518_);
lean_ctor_set(v___x_528_, 8, v_initHeartbeats_519_);
lean_ctor_set(v___x_528_, 9, v_maxHeartbeats_520_);
lean_ctor_set(v___x_528_, 10, v_quotContext_521_);
lean_ctor_set(v___x_528_, 11, v_currMacroScope_522_);
lean_ctor_set(v___x_528_, 12, v_cancelTk_x3f_523_);
lean_ctor_set(v___x_528_, 13, v_inheritedTraceOptions_525_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*14, v___y_510_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*14 + 1, v_suppressElabErrors_524_);
v___x_529_ = l_Lean_addAndCompile(v___x_506_, v___x_507_, v___x_508_, v___x_528_, v___y_526_);
lean_dec_ref(v___x_528_);
if (lean_obj_tag(v___x_529_) == 0)
{
v___y_441_ = v___x_529_;
goto v___jp_440_;
}
else
{
lean_object* v_a_530_; uint8_t v___x_531_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
v___x_531_ = l_Lean_Exception_isInterrupt(v_a_530_);
if (v___x_531_ == 0)
{
uint8_t v___x_532_; 
lean_inc(v_a_530_);
v___x_532_ = l_Lean_Exception_isRuntime(v_a_530_);
v___y_455_ = v___x_529_;
v___y_456_ = v_a_530_;
v___y_457_ = v___x_532_;
goto v___jp_454_;
}
else
{
v___y_455_ = v___x_529_;
v___y_456_ = v_a_530_;
v___y_457_ = v___x_531_;
goto v___jp_454_;
}
}
}
v___jp_533_:
{
lean_object* v_fileName_539_; lean_object* v_fileMap_540_; lean_object* v_currRecDepth_541_; lean_object* v_ref_542_; lean_object* v_currNamespace_543_; lean_object* v_openDecls_544_; lean_object* v_initHeartbeats_545_; lean_object* v_maxHeartbeats_546_; lean_object* v_quotContext_547_; lean_object* v_currMacroScope_548_; lean_object* v_cancelTk_x3f_549_; uint8_t v_suppressElabErrors_550_; lean_object* v_inheritedTraceOptions_551_; 
v_fileName_539_ = lean_ctor_get(v___y_537_, 0);
lean_inc_ref(v_fileName_539_);
v_fileMap_540_ = lean_ctor_get(v___y_537_, 1);
lean_inc_ref(v_fileMap_540_);
v_currRecDepth_541_ = lean_ctor_get(v___y_537_, 3);
lean_inc(v_currRecDepth_541_);
v_ref_542_ = lean_ctor_get(v___y_537_, 5);
lean_inc(v_ref_542_);
v_currNamespace_543_ = lean_ctor_get(v___y_537_, 6);
lean_inc(v_currNamespace_543_);
v_openDecls_544_ = lean_ctor_get(v___y_537_, 7);
lean_inc(v_openDecls_544_);
v_initHeartbeats_545_ = lean_ctor_get(v___y_537_, 8);
lean_inc(v_initHeartbeats_545_);
v_maxHeartbeats_546_ = lean_ctor_get(v___y_537_, 9);
lean_inc(v_maxHeartbeats_546_);
v_quotContext_547_ = lean_ctor_get(v___y_537_, 10);
lean_inc(v_quotContext_547_);
v_currMacroScope_548_ = lean_ctor_get(v___y_537_, 11);
lean_inc(v_currMacroScope_548_);
v_cancelTk_x3f_549_ = lean_ctor_get(v___y_537_, 12);
lean_inc(v_cancelTk_x3f_549_);
v_suppressElabErrors_550_ = lean_ctor_get_uint8(v___y_537_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_551_ = lean_ctor_get(v___y_537_, 13);
lean_inc_ref(v_inheritedTraceOptions_551_);
lean_dec_ref(v___y_537_);
v___y_510_ = v___y_534_;
v___y_511_ = v___y_535_;
v___y_512_ = v___y_536_;
v_fileName_513_ = v_fileName_539_;
v_fileMap_514_ = v_fileMap_540_;
v_currRecDepth_515_ = v_currRecDepth_541_;
v_ref_516_ = v_ref_542_;
v_currNamespace_517_ = v_currNamespace_543_;
v_openDecls_518_ = v_openDecls_544_;
v_initHeartbeats_519_ = v_initHeartbeats_545_;
v_maxHeartbeats_520_ = v_maxHeartbeats_546_;
v_quotContext_521_ = v_quotContext_547_;
v_currMacroScope_522_ = v_currMacroScope_548_;
v_cancelTk_x3f_523_ = v_cancelTk_x3f_549_;
v_suppressElabErrors_524_ = v_suppressElabErrors_550_;
v_inheritedTraceOptions_525_ = v_inheritedTraceOptions_551_;
v___y_526_ = v___y_538_;
goto v___jp_509_;
}
v___jp_552_:
{
if (v___y_558_ == 0)
{
lean_object* v___x_559_; lean_object* v_env_560_; lean_object* v_nextMacroScope_561_; lean_object* v_ngen_562_; lean_object* v_auxDeclNGen_563_; lean_object* v_traceState_564_; lean_object* v_messages_565_; lean_object* v_infoState_566_; lean_object* v_snapshotTasks_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_576_; 
v___x_559_ = lean_st_ref_take(v___y_555_);
v_env_560_ = lean_ctor_get(v___x_559_, 0);
v_nextMacroScope_561_ = lean_ctor_get(v___x_559_, 1);
v_ngen_562_ = lean_ctor_get(v___x_559_, 2);
v_auxDeclNGen_563_ = lean_ctor_get(v___x_559_, 3);
v_traceState_564_ = lean_ctor_get(v___x_559_, 4);
v_messages_565_ = lean_ctor_get(v___x_559_, 6);
v_infoState_566_ = lean_ctor_get(v___x_559_, 7);
v_snapshotTasks_567_ = lean_ctor_get(v___x_559_, 8);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v___x_559_, 5);
lean_dec(v_unused_577_);
v___x_569_ = v___x_559_;
v_isShared_570_ = v_isSharedCheck_576_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_snapshotTasks_567_);
lean_inc(v_infoState_566_);
lean_inc(v_messages_565_);
lean_inc(v_traceState_564_);
lean_inc(v_auxDeclNGen_563_);
lean_inc(v_ngen_562_);
lean_inc(v_nextMacroScope_561_);
lean_inc(v_env_560_);
lean_dec(v___x_559_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_576_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = l_Lean_Kernel_enableDiag(v_env_560_, v___y_554_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 5, v___x_482_);
lean_ctor_set(v___x_569_, 0, v___x_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_nextMacroScope_561_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v_ngen_562_);
lean_ctor_set(v_reuseFailAlloc_575_, 3, v_auxDeclNGen_563_);
lean_ctor_set(v_reuseFailAlloc_575_, 4, v_traceState_564_);
lean_ctor_set(v_reuseFailAlloc_575_, 5, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_575_, 6, v_messages_565_);
lean_ctor_set(v_reuseFailAlloc_575_, 7, v_infoState_566_);
lean_ctor_set(v_reuseFailAlloc_575_, 8, v_snapshotTasks_567_);
v___x_573_ = v_reuseFailAlloc_575_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; 
v___x_574_ = lean_st_ref_set(v___y_555_, v___x_573_);
v___y_534_ = v___y_554_;
v___y_535_ = v___y_553_;
v___y_536_ = v___y_556_;
v___y_537_ = v___y_557_;
v___y_538_ = v___y_555_;
goto v___jp_533_;
}
}
}
else
{
v___y_534_ = v___y_554_;
v___y_535_ = v___y_553_;
v___y_536_ = v___y_556_;
v___y_537_ = v___y_557_;
v___y_538_ = v___y_555_;
goto v___jp_533_;
}
}
v___jp_581_:
{
lean_object* v___x_587_; lean_object* v_fileName_588_; lean_object* v_fileMap_589_; lean_object* v_currRecDepth_590_; lean_object* v_ref_591_; lean_object* v_currNamespace_592_; lean_object* v_openDecls_593_; lean_object* v_initHeartbeats_594_; lean_object* v_maxHeartbeats_595_; lean_object* v_quotContext_596_; lean_object* v_currMacroScope_597_; lean_object* v_cancelTk_x3f_598_; uint8_t v_suppressElabErrors_599_; lean_object* v_inheritedTraceOptions_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_613_; 
v___x_587_ = lean_st_ref_get(v___y_586_);
v_fileName_588_ = lean_ctor_get(v___y_585_, 0);
v_fileMap_589_ = lean_ctor_get(v___y_585_, 1);
v_currRecDepth_590_ = lean_ctor_get(v___y_585_, 3);
v_ref_591_ = lean_ctor_get(v___y_585_, 5);
v_currNamespace_592_ = lean_ctor_get(v___y_585_, 6);
v_openDecls_593_ = lean_ctor_get(v___y_585_, 7);
v_initHeartbeats_594_ = lean_ctor_get(v___y_585_, 8);
v_maxHeartbeats_595_ = lean_ctor_get(v___y_585_, 9);
v_quotContext_596_ = lean_ctor_get(v___y_585_, 10);
v_currMacroScope_597_ = lean_ctor_get(v___y_585_, 11);
v_cancelTk_x3f_598_ = lean_ctor_get(v___y_585_, 12);
v_suppressElabErrors_599_ = lean_ctor_get_uint8(v___y_585_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_600_ = lean_ctor_get(v___y_585_, 13);
v_isSharedCheck_613_ = !lean_is_exclusive(v___y_585_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_614_ = lean_ctor_get(v___y_585_, 4);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v___y_585_, 2);
lean_dec(v_unused_615_);
v___x_602_ = v___y_585_;
v_isShared_603_ = v_isSharedCheck_613_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_inheritedTraceOptions_600_);
lean_inc(v_cancelTk_x3f_598_);
lean_inc(v_currMacroScope_597_);
lean_inc(v_quotContext_596_);
lean_inc(v_maxHeartbeats_595_);
lean_inc(v_initHeartbeats_594_);
lean_inc(v_openDecls_593_);
lean_inc(v_currNamespace_592_);
lean_inc(v_ref_591_);
lean_inc(v_currRecDepth_590_);
lean_inc(v_fileMap_589_);
lean_inc(v_fileName_588_);
lean_dec(v___y_585_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_613_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v_env_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v_env_604_ = lean_ctor_get(v___x_587_, 0);
lean_inc_ref(v_env_604_);
lean_dec(v___x_587_);
v___x_605_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(v___y_582_, v___y_584_);
lean_inc_ref(v_inheritedTraceOptions_600_);
lean_inc(v_cancelTk_x3f_598_);
lean_inc(v_currMacroScope_597_);
lean_inc(v_quotContext_596_);
lean_inc(v_maxHeartbeats_595_);
lean_inc(v_initHeartbeats_594_);
lean_inc(v_openDecls_593_);
lean_inc(v_currNamespace_592_);
lean_inc(v_ref_591_);
lean_inc(v_currRecDepth_590_);
lean_inc_ref(v___y_582_);
lean_inc_ref(v_fileMap_589_);
lean_inc_ref(v_fileName_588_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 4, v___x_605_);
lean_ctor_set(v___x_602_, 2, v___y_582_);
v___x_607_ = v___x_602_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_fileName_588_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_fileMap_589_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v___y_582_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_currRecDepth_590_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_612_, 5, v_ref_591_);
lean_ctor_set(v_reuseFailAlloc_612_, 6, v_currNamespace_592_);
lean_ctor_set(v_reuseFailAlloc_612_, 7, v_openDecls_593_);
lean_ctor_set(v_reuseFailAlloc_612_, 8, v_initHeartbeats_594_);
lean_ctor_set(v_reuseFailAlloc_612_, 9, v_maxHeartbeats_595_);
lean_ctor_set(v_reuseFailAlloc_612_, 10, v_quotContext_596_);
lean_ctor_set(v_reuseFailAlloc_612_, 11, v_currMacroScope_597_);
lean_ctor_set(v_reuseFailAlloc_612_, 12, v_cancelTk_x3f_598_);
lean_ctor_set(v_reuseFailAlloc_612_, 13, v_inheritedTraceOptions_600_);
lean_ctor_set_uint8(v_reuseFailAlloc_612_, sizeof(void*)*14 + 1, v_suppressElabErrors_599_);
v___x_607_ = v_reuseFailAlloc_612_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; uint8_t v___x_611_; 
lean_ctor_set_uint8(v___x_607_, sizeof(void*)*14, v___y_583_);
v___x_608_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_609_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(v___y_582_, v___x_608_, v___x_507_);
v___x_610_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(v___x_609_, v___x_580_);
v___x_611_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_604_);
lean_dec_ref(v_env_604_);
if (v___x_611_ == 0)
{
if (v___x_610_ == 0)
{
lean_dec_ref(v___x_607_);
v___y_510_ = v___x_610_;
v___y_511_ = v___x_609_;
v___y_512_ = v___y_584_;
v_fileName_513_ = v_fileName_588_;
v_fileMap_514_ = v_fileMap_589_;
v_currRecDepth_515_ = v_currRecDepth_590_;
v_ref_516_ = v_ref_591_;
v_currNamespace_517_ = v_currNamespace_592_;
v_openDecls_518_ = v_openDecls_593_;
v_initHeartbeats_519_ = v_initHeartbeats_594_;
v_maxHeartbeats_520_ = v_maxHeartbeats_595_;
v_quotContext_521_ = v_quotContext_596_;
v_currMacroScope_522_ = v_currMacroScope_597_;
v_cancelTk_x3f_523_ = v_cancelTk_x3f_598_;
v_suppressElabErrors_524_ = v_suppressElabErrors_599_;
v_inheritedTraceOptions_525_ = v_inheritedTraceOptions_600_;
v___y_526_ = v___y_586_;
goto v___jp_509_;
}
else
{
lean_dec_ref(v_inheritedTraceOptions_600_);
lean_dec(v_cancelTk_x3f_598_);
lean_dec(v_currMacroScope_597_);
lean_dec(v_quotContext_596_);
lean_dec(v_maxHeartbeats_595_);
lean_dec(v_initHeartbeats_594_);
lean_dec(v_openDecls_593_);
lean_dec(v_currNamespace_592_);
lean_dec(v_ref_591_);
lean_dec(v_currRecDepth_590_);
lean_dec_ref(v_fileMap_589_);
lean_dec_ref(v_fileName_588_);
v___y_553_ = v___x_609_;
v___y_554_ = v___x_610_;
v___y_555_ = v___y_586_;
v___y_556_ = v___y_584_;
v___y_557_ = v___x_607_;
v___y_558_ = v___x_611_;
goto v___jp_552_;
}
}
else
{
lean_dec_ref(v_inheritedTraceOptions_600_);
lean_dec(v_cancelTk_x3f_598_);
lean_dec(v_currMacroScope_597_);
lean_dec(v_quotContext_596_);
lean_dec(v_maxHeartbeats_595_);
lean_dec(v_initHeartbeats_594_);
lean_dec(v_openDecls_593_);
lean_dec(v_currNamespace_592_);
lean_dec(v_ref_591_);
lean_dec(v_currRecDepth_590_);
lean_dec_ref(v_fileMap_589_);
lean_dec_ref(v_fileName_588_);
v___y_553_ = v___x_609_;
v___y_554_ = v___x_610_;
v___y_555_ = v___y_586_;
v___y_556_ = v___y_584_;
v___y_557_ = v___x_607_;
v___y_558_ = v___x_610_;
goto v___jp_552_;
}
}
}
}
v___jp_616_:
{
if (v___y_622_ == 0)
{
lean_object* v___x_623_; lean_object* v_env_624_; lean_object* v_nextMacroScope_625_; lean_object* v_ngen_626_; lean_object* v_auxDeclNGen_627_; lean_object* v_traceState_628_; lean_object* v_messages_629_; lean_object* v_infoState_630_; lean_object* v_snapshotTasks_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_640_; 
v___x_623_ = lean_st_ref_take(v___y_621_);
v_env_624_ = lean_ctor_get(v___x_623_, 0);
v_nextMacroScope_625_ = lean_ctor_get(v___x_623_, 1);
v_ngen_626_ = lean_ctor_get(v___x_623_, 2);
v_auxDeclNGen_627_ = lean_ctor_get(v___x_623_, 3);
v_traceState_628_ = lean_ctor_get(v___x_623_, 4);
v_messages_629_ = lean_ctor_get(v___x_623_, 6);
v_infoState_630_ = lean_ctor_get(v___x_623_, 7);
v_snapshotTasks_631_ = lean_ctor_get(v___x_623_, 8);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v___x_623_, 5);
lean_dec(v_unused_641_);
v___x_633_ = v___x_623_;
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_snapshotTasks_631_);
lean_inc(v_infoState_630_);
lean_inc(v_messages_629_);
lean_inc(v_traceState_628_);
lean_inc(v_auxDeclNGen_627_);
lean_inc(v_ngen_626_);
lean_inc(v_nextMacroScope_625_);
lean_inc(v_env_624_);
lean_dec(v___x_623_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = l_Lean_Kernel_enableDiag(v_env_624_, v___y_619_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 5, v___x_482_);
lean_ctor_set(v___x_633_, 0, v___x_635_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_nextMacroScope_625_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v_ngen_626_);
lean_ctor_set(v_reuseFailAlloc_639_, 3, v_auxDeclNGen_627_);
lean_ctor_set(v_reuseFailAlloc_639_, 4, v_traceState_628_);
lean_ctor_set(v_reuseFailAlloc_639_, 5, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_639_, 6, v_messages_629_);
lean_ctor_set(v_reuseFailAlloc_639_, 7, v_infoState_630_);
lean_ctor_set(v_reuseFailAlloc_639_, 8, v_snapshotTasks_631_);
v___x_637_ = v_reuseFailAlloc_639_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; 
v___x_638_ = lean_st_ref_set(v___y_621_, v___x_637_);
v___y_582_ = v___y_618_;
v___y_583_ = v___y_619_;
v___y_584_ = v___y_620_;
v___y_585_ = v___y_617_;
v___y_586_ = v___y_621_;
goto v___jp_581_;
}
}
}
else
{
v___y_582_ = v___y_618_;
v___y_583_ = v___y_619_;
v___y_584_ = v___y_620_;
v___y_585_ = v___y_617_;
v___y_586_ = v___y_621_;
goto v___jp_581_;
}
}
v___jp_643_:
{
lean_object* v___x_646_; lean_object* v_fileName_647_; lean_object* v_fileMap_648_; lean_object* v_currRecDepth_649_; lean_object* v_ref_650_; lean_object* v_currNamespace_651_; lean_object* v_openDecls_652_; lean_object* v_initHeartbeats_653_; lean_object* v_maxHeartbeats_654_; lean_object* v_quotContext_655_; lean_object* v_currMacroScope_656_; lean_object* v_cancelTk_x3f_657_; uint8_t v_suppressElabErrors_658_; lean_object* v_inheritedTraceOptions_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_673_; 
v___x_646_ = lean_st_ref_get(v___y_645_);
v_fileName_647_ = lean_ctor_get(v___y_644_, 0);
v_fileMap_648_ = lean_ctor_get(v___y_644_, 1);
v_currRecDepth_649_ = lean_ctor_get(v___y_644_, 3);
v_ref_650_ = lean_ctor_get(v___y_644_, 5);
v_currNamespace_651_ = lean_ctor_get(v___y_644_, 6);
v_openDecls_652_ = lean_ctor_get(v___y_644_, 7);
v_initHeartbeats_653_ = lean_ctor_get(v___y_644_, 8);
v_maxHeartbeats_654_ = lean_ctor_get(v___y_644_, 9);
v_quotContext_655_ = lean_ctor_get(v___y_644_, 10);
v_currMacroScope_656_ = lean_ctor_get(v___y_644_, 11);
v_cancelTk_x3f_657_ = lean_ctor_get(v___y_644_, 12);
v_suppressElabErrors_658_ = lean_ctor_get_uint8(v___y_644_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_659_ = lean_ctor_get(v___y_644_, 13);
v_isSharedCheck_673_ = !lean_is_exclusive(v___y_644_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; lean_object* v_unused_675_; 
v_unused_674_ = lean_ctor_get(v___y_644_, 4);
lean_dec(v_unused_674_);
v_unused_675_ = lean_ctor_get(v___y_644_, 2);
lean_dec(v_unused_675_);
v___x_661_ = v___y_644_;
v_isShared_662_ = v_isSharedCheck_673_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_inheritedTraceOptions_659_);
lean_inc(v_cancelTk_x3f_657_);
lean_inc(v_currMacroScope_656_);
lean_inc(v_quotContext_655_);
lean_inc(v_maxHeartbeats_654_);
lean_inc(v_initHeartbeats_653_);
lean_inc(v_openDecls_652_);
lean_inc(v_currNamespace_651_);
lean_inc(v_ref_650_);
lean_inc(v_currRecDepth_649_);
lean_inc(v_fileMap_648_);
lean_inc(v_fileName_647_);
lean_dec(v___y_644_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_673_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_env_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v_env_663_ = lean_ctor_get(v___x_646_, 0);
lean_inc_ref(v_env_663_);
lean_dec(v___x_646_);
v___x_664_ = l_Lean_maxRecDepth;
v___x_665_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__4(v___x_579_, v___x_664_);
lean_inc_ref(v___x_579_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 4, v___x_665_);
lean_ctor_set(v___x_661_, 2, v___x_579_);
v___x_667_ = v___x_661_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_fileName_647_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v_fileMap_648_);
lean_ctor_set(v_reuseFailAlloc_672_, 2, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_672_, 3, v_currRecDepth_649_);
lean_ctor_set(v_reuseFailAlloc_672_, 4, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_672_, 5, v_ref_650_);
lean_ctor_set(v_reuseFailAlloc_672_, 6, v_currNamespace_651_);
lean_ctor_set(v_reuseFailAlloc_672_, 7, v_openDecls_652_);
lean_ctor_set(v_reuseFailAlloc_672_, 8, v_initHeartbeats_653_);
lean_ctor_set(v_reuseFailAlloc_672_, 9, v_maxHeartbeats_654_);
lean_ctor_set(v_reuseFailAlloc_672_, 10, v_quotContext_655_);
lean_ctor_set(v_reuseFailAlloc_672_, 11, v_currMacroScope_656_);
lean_ctor_set(v_reuseFailAlloc_672_, 12, v_cancelTk_x3f_657_);
lean_ctor_set(v_reuseFailAlloc_672_, 13, v_inheritedTraceOptions_659_);
lean_ctor_set_uint8(v_reuseFailAlloc_672_, sizeof(void*)*14 + 1, v_suppressElabErrors_658_);
v___x_667_ = v_reuseFailAlloc_672_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; uint8_t v___x_671_; 
lean_ctor_set_uint8(v___x_667_, sizeof(void*)*14, v___x_642_);
v___x_668_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_669_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__2(v___x_579_, v___x_668_, v___x_508_);
v___x_670_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__3(v___x_669_, v___x_580_);
v___x_671_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_663_);
lean_dec_ref(v_env_663_);
if (v___x_671_ == 0)
{
if (v___x_670_ == 0)
{
v___y_582_ = v___x_669_;
v___y_583_ = v___x_670_;
v___y_584_ = v___x_664_;
v___y_585_ = v___x_667_;
v___y_586_ = v___y_645_;
goto v___jp_581_;
}
else
{
v___y_617_ = v___x_667_;
v___y_618_ = v___x_669_;
v___y_619_ = v___x_670_;
v___y_620_ = v___x_664_;
v___y_621_ = v___y_645_;
v___y_622_ = v___x_671_;
goto v___jp_616_;
}
}
else
{
v___y_617_ = v___x_667_;
v___y_618_ = v___x_669_;
v___y_619_ = v___x_670_;
v___y_620_ = v___x_664_;
v___y_621_ = v___y_645_;
v___y_622_ = v___x_670_;
goto v___jp_616_;
}
}
}
}
v___jp_676_:
{
if (v___y_677_ == 0)
{
lean_object* v___x_678_; lean_object* v_env_679_; lean_object* v_nextMacroScope_680_; lean_object* v_ngen_681_; lean_object* v_auxDeclNGen_682_; lean_object* v_traceState_683_; lean_object* v_messages_684_; lean_object* v_infoState_685_; lean_object* v_snapshotTasks_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_695_; 
v___x_678_ = lean_st_ref_take(v___y_421_);
v_env_679_ = lean_ctor_get(v___x_678_, 0);
v_nextMacroScope_680_ = lean_ctor_get(v___x_678_, 1);
v_ngen_681_ = lean_ctor_get(v___x_678_, 2);
v_auxDeclNGen_682_ = lean_ctor_get(v___x_678_, 3);
v_traceState_683_ = lean_ctor_get(v___x_678_, 4);
v_messages_684_ = lean_ctor_get(v___x_678_, 6);
v_infoState_685_ = lean_ctor_get(v___x_678_, 7);
v_snapshotTasks_686_ = lean_ctor_get(v___x_678_, 8);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; 
v_unused_696_ = lean_ctor_get(v___x_678_, 5);
lean_dec(v_unused_696_);
v___x_688_ = v___x_678_;
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_snapshotTasks_686_);
lean_inc(v_infoState_685_);
lean_inc(v_messages_684_);
lean_inc(v_traceState_683_);
lean_inc(v_auxDeclNGen_682_);
lean_inc(v_ngen_681_);
lean_inc(v_nextMacroScope_680_);
lean_inc(v_env_679_);
lean_dec(v___x_678_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_695_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_Kernel_enableDiag(v_env_679_, v___x_642_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 5, v___x_482_);
lean_ctor_set(v___x_688_, 0, v___x_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_nextMacroScope_680_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v_ngen_681_);
lean_ctor_set(v_reuseFailAlloc_694_, 3, v_auxDeclNGen_682_);
lean_ctor_set(v_reuseFailAlloc_694_, 4, v_traceState_683_);
lean_ctor_set(v_reuseFailAlloc_694_, 5, v___x_482_);
lean_ctor_set(v_reuseFailAlloc_694_, 6, v_messages_684_);
lean_ctor_set(v_reuseFailAlloc_694_, 7, v_infoState_685_);
lean_ctor_set(v_reuseFailAlloc_694_, 8, v_snapshotTasks_686_);
v___x_692_ = v_reuseFailAlloc_694_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; 
v___x_693_ = lean_st_ref_set(v___y_421_, v___x_692_);
lean_inc_ref(v___y_420_);
v___y_644_ = v___y_420_;
v___y_645_ = v___y_421_;
goto v___jp_643_;
}
}
}
else
{
lean_inc_ref(v___y_420_);
v___y_644_ = v___y_420_;
v___y_645_ = v___y_421_;
goto v___jp_643_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v___x_708_, lean_object* v_tacticName_709_, lean_object* v_a_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Meta_nativeEqTrue___lam__0(v___x_706_, v___x_707_, v___x_708_, v_tacticName_709_, v_a_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
if (lean_obj_tag(v_a_717_) == 0)
{
lean_object* v___x_719_; 
v___x_719_ = l_List_reverse___redArg(v_a_718_);
return v___x_719_;
}
else
{
lean_object* v_head_720_; lean_object* v_tail_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_730_; 
v_head_720_ = lean_ctor_get(v_a_717_, 0);
v_tail_721_ = lean_ctor_get(v_a_717_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_a_717_);
if (v_isSharedCheck_730_ == 0)
{
v___x_723_ = v_a_717_;
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_tail_721_);
lean_inc(v_head_720_);
lean_dec(v_a_717_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
v___x_725_ = l_Lean_mkLevelParam(v_head_720_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v_a_718_);
lean_ctor_set(v___x_723_, 0, v___x_725_);
v___x_727_ = v___x_723_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_a_718_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
v_a_717_ = v_tail_721_;
v_a_718_ = v___x_727_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(lean_object* v_stx_731_, lean_object* v___y_732_){
_start:
{
uint8_t v___x_734_; lean_object* v___x_735_; 
v___x_734_ = 0;
v___x_735_ = l_Lean_Syntax_getRange_x3f(v_stx_731_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 1)
{
lean_object* v_val_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_748_; 
v_val_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_748_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_748_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_val_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_748_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v_fileMap_740_; lean_object* v_start_741_; lean_object* v_stop_742_; lean_object* v___x_743_; lean_object* v___x_745_; 
v_fileMap_740_ = lean_ctor_get(v___y_732_, 1);
v_start_741_ = lean_ctor_get(v_val_736_, 0);
lean_inc(v_start_741_);
v_stop_742_ = lean_ctor_get(v_val_736_, 1);
lean_inc(v_stop_742_);
lean_dec(v_val_736_);
lean_inc_ref(v_fileMap_740_);
v___x_743_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_740_, v_start_741_, v_stop_742_);
lean_dec(v_stop_742_);
lean_dec(v_start_741_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v___x_743_);
v___x_745_ = v___x_738_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_747_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec(v___x_735_);
v___x_749_ = lean_box(0);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg___boxed(lean_object* v_stx_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(v_stx_751_, v___y_752_);
lean_dec_ref(v___y_752_);
lean_dec(v_stx_751_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg(lean_object* v_declName_755_, lean_object* v_declRanges_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
uint8_t v___x_760_; 
v___x_760_ = l_Lean_Name_isAnonymous(v_declName_755_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v_env_762_; lean_object* v_nextMacroScope_763_; lean_object* v_ngen_764_; lean_object* v_auxDeclNGen_765_; lean_object* v_traceState_766_; lean_object* v_messages_767_; lean_object* v_infoState_768_; lean_object* v_snapshotTasks_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_798_; 
v___x_761_ = lean_st_ref_take(v___y_758_);
v_env_762_ = lean_ctor_get(v___x_761_, 0);
v_nextMacroScope_763_ = lean_ctor_get(v___x_761_, 1);
v_ngen_764_ = lean_ctor_get(v___x_761_, 2);
v_auxDeclNGen_765_ = lean_ctor_get(v___x_761_, 3);
v_traceState_766_ = lean_ctor_get(v___x_761_, 4);
v_messages_767_ = lean_ctor_get(v___x_761_, 6);
v_infoState_768_ = lean_ctor_get(v___x_761_, 7);
v_snapshotTasks_769_ = lean_ctor_get(v___x_761_, 8);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; 
v_unused_799_ = lean_ctor_get(v___x_761_, 5);
lean_dec(v_unused_799_);
v___x_771_ = v___x_761_;
v_isShared_772_ = v_isSharedCheck_798_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_snapshotTasks_769_);
lean_inc(v_infoState_768_);
lean_inc(v_messages_767_);
lean_inc(v_traceState_766_);
lean_inc(v_auxDeclNGen_765_);
lean_inc(v_ngen_764_);
lean_inc(v_nextMacroScope_763_);
lean_inc(v_env_762_);
lean_dec(v___x_761_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_798_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_773_ = l_Lean_declRangeExt;
v___x_774_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_773_, v_env_762_, v_declName_755_, v_declRanges_756_);
v___x_775_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 5, v___x_775_);
lean_ctor_set(v___x_771_, 0, v___x_774_);
v___x_777_ = v___x_771_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_nextMacroScope_763_);
lean_ctor_set(v_reuseFailAlloc_797_, 2, v_ngen_764_);
lean_ctor_set(v_reuseFailAlloc_797_, 3, v_auxDeclNGen_765_);
lean_ctor_set(v_reuseFailAlloc_797_, 4, v_traceState_766_);
lean_ctor_set(v_reuseFailAlloc_797_, 5, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_797_, 6, v_messages_767_);
lean_ctor_set(v_reuseFailAlloc_797_, 7, v_infoState_768_);
lean_ctor_set(v_reuseFailAlloc_797_, 8, v_snapshotTasks_769_);
v___x_777_ = v_reuseFailAlloc_797_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v_mctx_781_; lean_object* v_zetaDeltaFVarIds_782_; lean_object* v_postponed_783_; lean_object* v_diag_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_795_; 
v___x_778_ = lean_st_ref_set(v___y_758_, v___x_777_);
v___x_779_ = lean_st_ref_get(v___y_758_);
lean_dec(v___x_779_);
v___x_780_ = lean_st_ref_take(v___y_757_);
v_mctx_781_ = lean_ctor_get(v___x_780_, 0);
v_zetaDeltaFVarIds_782_ = lean_ctor_get(v___x_780_, 2);
v_postponed_783_ = lean_ctor_get(v___x_780_, 3);
v_diag_784_ = lean_ctor_get(v___x_780_, 4);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v___x_780_, 1);
lean_dec(v_unused_796_);
v___x_786_ = v___x_780_;
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_diag_784_);
lean_inc(v_postponed_783_);
lean_inc(v_zetaDeltaFVarIds_782_);
lean_inc(v_mctx_781_);
lean_dec(v___x_780_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_mctx_781_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_zetaDeltaFVarIds_782_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v_postponed_783_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v_diag_784_);
v___x_790_ = v_reuseFailAlloc_794_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = lean_st_ref_set(v___y_757_, v___x_790_);
v___x_792_ = lean_box(0);
v___x_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
return v___x_793_;
}
}
}
}
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec_ref(v_declRanges_756_);
lean_dec(v_declName_755_);
v___x_800_ = lean_box(0);
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg___boxed(lean_object* v_declName_802_, lean_object* v_declRanges_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg(v_declName_802_, v_declRanges_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec(v___y_804_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object* v_declName_808_, lean_object* v_rangeStx_809_, lean_object* v_selectionRangeStx_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; lean_object* v_a_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_833_; 
v___x_816_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(v_rangeStx_809_, v___y_813_);
v_a_817_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_833_ == 0)
{
v___x_819_ = v___x_816_;
v_isShared_820_ = v_isSharedCheck_833_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_a_817_);
lean_dec(v___x_816_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_833_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
if (lean_obj_tag(v_a_817_) == 1)
{
lean_object* v_val_821_; lean_object* v___x_822_; lean_object* v_a_823_; lean_object* v_a_825_; 
lean_del_object(v___x_819_);
v_val_821_ = lean_ctor_get(v_a_817_, 0);
lean_inc(v_val_821_);
lean_dec_ref(v_a_817_);
v___x_822_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(v_selectionRangeStx_810_, v___y_813_);
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref(v___x_822_);
if (lean_obj_tag(v_a_823_) == 0)
{
lean_inc(v_val_821_);
v_a_825_ = v_val_821_;
goto v___jp_824_;
}
else
{
lean_object* v_val_828_; 
v_val_828_ = lean_ctor_get(v_a_823_, 0);
lean_inc(v_val_828_);
lean_dec_ref(v_a_823_);
v_a_825_ = v_val_828_;
goto v___jp_824_;
}
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_val_821_);
lean_ctor_set(v___x_826_, 1, v_a_825_);
v___x_827_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg(v_declName_808_, v___x_826_, v___y_812_, v___y_814_);
return v___x_827_;
}
}
else
{
lean_object* v___x_829_; lean_object* v___x_831_; 
lean_dec(v_a_817_);
lean_dec(v_declName_808_);
v___x_829_ = lean_box(0);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_829_);
v___x_831_ = v___x_819_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object* v_declName_834_, lean_object* v_rangeStx_835_, lean_object* v_selectionRangeStx_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7(v_declName_834_, v_rangeStx_835_, v_selectionRangeStx_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v_selectionRangeStx_836_);
lean_dec(v_rangeStx_835_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(lean_object* v_env_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; lean_object* v_nextMacroScope_848_; lean_object* v_ngen_849_; lean_object* v_auxDeclNGen_850_; lean_object* v_traceState_851_; lean_object* v_messages_852_; lean_object* v_infoState_853_; lean_object* v_snapshotTasks_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_881_; 
v___x_847_ = lean_st_ref_take(v___y_845_);
v_nextMacroScope_848_ = lean_ctor_get(v___x_847_, 1);
v_ngen_849_ = lean_ctor_get(v___x_847_, 2);
v_auxDeclNGen_850_ = lean_ctor_get(v___x_847_, 3);
v_traceState_851_ = lean_ctor_get(v___x_847_, 4);
v_messages_852_ = lean_ctor_get(v___x_847_, 6);
v_infoState_853_ = lean_ctor_get(v___x_847_, 7);
v_snapshotTasks_854_ = lean_ctor_get(v___x_847_, 8);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_881_ == 0)
{
lean_object* v_unused_882_; lean_object* v_unused_883_; 
v_unused_882_ = lean_ctor_get(v___x_847_, 5);
lean_dec(v_unused_882_);
v_unused_883_ = lean_ctor_get(v___x_847_, 0);
lean_dec(v_unused_883_);
v___x_856_ = v___x_847_;
v_isShared_857_ = v_isSharedCheck_881_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snapshotTasks_854_);
lean_inc(v_infoState_853_);
lean_inc(v_messages_852_);
lean_inc(v_traceState_851_);
lean_inc(v_auxDeclNGen_850_);
lean_inc(v_ngen_849_);
lean_inc(v_nextMacroScope_848_);
lean_dec(v___x_847_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_881_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_858_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 5, v___x_858_);
lean_ctor_set(v___x_856_, 0, v_env_843_);
v___x_860_ = v___x_856_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_env_843_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_nextMacroScope_848_);
lean_ctor_set(v_reuseFailAlloc_880_, 2, v_ngen_849_);
lean_ctor_set(v_reuseFailAlloc_880_, 3, v_auxDeclNGen_850_);
lean_ctor_set(v_reuseFailAlloc_880_, 4, v_traceState_851_);
lean_ctor_set(v_reuseFailAlloc_880_, 5, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_880_, 6, v_messages_852_);
lean_ctor_set(v_reuseFailAlloc_880_, 7, v_infoState_853_);
lean_ctor_set(v_reuseFailAlloc_880_, 8, v_snapshotTasks_854_);
v___x_860_ = v_reuseFailAlloc_880_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_mctx_864_; lean_object* v_zetaDeltaFVarIds_865_; lean_object* v_postponed_866_; lean_object* v_diag_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_878_; 
v___x_861_ = lean_st_ref_set(v___y_845_, v___x_860_);
v___x_862_ = lean_st_ref_get(v___y_845_);
lean_dec(v___x_862_);
v___x_863_ = lean_st_ref_take(v___y_844_);
v_mctx_864_ = lean_ctor_get(v___x_863_, 0);
v_zetaDeltaFVarIds_865_ = lean_ctor_get(v___x_863_, 2);
v_postponed_866_ = lean_ctor_get(v___x_863_, 3);
v_diag_867_ = lean_ctor_get(v___x_863_, 4);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_878_ == 0)
{
lean_object* v_unused_879_; 
v_unused_879_ = lean_ctor_get(v___x_863_, 1);
lean_dec(v_unused_879_);
v___x_869_ = v___x_863_;
v_isShared_870_ = v_isSharedCheck_878_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_diag_867_);
lean_inc(v_postponed_866_);
lean_inc(v_zetaDeltaFVarIds_865_);
lean_inc(v_mctx_864_);
lean_dec(v___x_863_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_878_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_873_; 
v___x_871_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_871_);
v___x_873_ = v___x_869_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_mctx_864_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___x_871_);
lean_ctor_set(v_reuseFailAlloc_877_, 2, v_zetaDeltaFVarIds_865_);
lean_ctor_set(v_reuseFailAlloc_877_, 3, v_postponed_866_);
lean_ctor_set(v_reuseFailAlloc_877_, 4, v_diag_867_);
v___x_873_ = v_reuseFailAlloc_877_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_874_ = lean_st_ref_set(v___y_844_, v___x_873_);
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
return v___x_876_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg___boxed(lean_object* v_env_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(v_env_884_, v___y_885_, v___y_886_);
lean_dec(v___y_886_);
lean_dec(v___y_885_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg(lean_object* v_env_889_, lean_object* v_x_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v_env_897_; lean_object* v_a_899_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_896_ = lean_st_ref_get(v___y_894_);
v_env_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc_ref(v_env_897_);
lean_dec(v___x_896_);
v___x_909_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(v_env_889_, v___y_892_, v___y_894_);
lean_dec_ref(v___x_909_);
lean_inc(v___y_894_);
lean_inc_ref(v___y_893_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
v___x_910_ = lean_apply_5(v_x_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, lean_box(0));
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
lean_dec_ref(v___x_910_);
v___x_912_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(v_env_897_, v___y_892_, v___y_894_);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; 
v_unused_920_ = lean_ctor_get(v___x_912_, 0);
lean_dec(v_unused_920_);
v___x_914_ = v___x_912_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_dec(v___x_912_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v_a_911_);
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_911_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_921_; 
v_a_921_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_921_);
lean_dec_ref(v___x_910_);
v_a_899_ = v_a_921_;
goto v___jp_898_;
}
v___jp_898_:
{
lean_object* v___x_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
v___x_900_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(v_env_897_, v___y_892_, v___y_894_);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v___x_900_, 0);
lean_dec(v_unused_908_);
v___x_902_ = v___x_900_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_dec(v___x_900_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 1);
lean_ctor_set(v___x_902_, 0, v_a_899_);
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_899_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg___boxed(lean_object* v_env_922_, lean_object* v_x_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg(v_env_922_, v_x_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_929_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__0(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_930_ = lean_box(0);
v___x_931_ = lean_unsigned_to_nat(16u);
v___x_932_ = lean_mk_array(v___x_931_, v___x_930_);
return v___x_932_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__1(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_933_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__0, &l_Lean_Meta_nativeEqTrue___closed__0_once, _init_l_Lean_Meta_nativeEqTrue___closed__0);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__2(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(0u);
v___x_937_ = lean_mk_empty_array_with_capacity(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__3(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__2, &l_Lean_Meta_nativeEqTrue___closed__2_once, _init_l_Lean_Meta_nativeEqTrue___closed__2);
v___x_939_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__1, &l_Lean_Meta_nativeEqTrue___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___closed__1);
v___x_940_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
lean_ctor_set(v___x_940_, 2, v___x_938_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__4(void){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = lean_mk_string_unchecked("_native", 7, 7);
return v___x_941_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__5(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__4, &l_Lean_Meta_nativeEqTrue___closed__4_once, _init_l_Lean_Meta_nativeEqTrue___closed__4);
v___x_943_ = l_Lean_Name_mkStr1(v___x_942_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__6(void){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_mk_string_unchecked("decl", 4, 4);
return v___x_944_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__7(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__6, &l_Lean_Meta_nativeEqTrue___closed__6_once, _init_l_Lean_Meta_nativeEqTrue___closed__6);
v___x_946_ = l_Lean_Name_mkStr1(v___x_945_);
return v___x_946_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__8(void){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = lean_mk_string_unchecked("ax", 2, 2);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__9(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__8, &l_Lean_Meta_nativeEqTrue___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___closed__8);
v___x_949_ = l_Lean_Name_mkStr1(v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__10(void){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_950_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__11(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__10, &l_Lean_Meta_nativeEqTrue___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___closed__10);
v___x_952_ = l_Lean_Name_mkStr1(v___x_951_);
return v___x_952_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__12(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(1u);
v___x_954_ = l_Lean_Level_ofNat(v___x_953_);
return v___x_954_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__13(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = lean_box(0);
v___x_956_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__12, &l_Lean_Meta_nativeEqTrue___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___closed__12);
v___x_957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v___x_955_);
return v___x_957_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__14(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_958_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__13, &l_Lean_Meta_nativeEqTrue___closed__13_once, _init_l_Lean_Meta_nativeEqTrue___closed__13);
v___x_959_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__11, &l_Lean_Meta_nativeEqTrue___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___closed__11);
v___x_960_ = l_Lean_mkConst(v___x_959_, v___x_958_);
return v___x_960_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__15(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_961_ = lean_box(0);
v___x_962_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__7, &l_Lean_Meta_nativeEqTrue___lam__0___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__7);
v___x_963_ = l_Lean_mkConst(v___x_962_, v___x_961_);
return v___x_963_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__16(void){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = lean_mk_string_unchecked("true", 4, 4);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__17(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_965_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__16, &l_Lean_Meta_nativeEqTrue___closed__16_once, _init_l_Lean_Meta_nativeEqTrue___closed__16);
v___x_966_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__6, &l_Lean_Meta_nativeEqTrue___lam__0___closed__6_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__6);
v___x_967_ = l_Lean_Name_mkStr2(v___x_966_, v___x_965_);
return v___x_967_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__18(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = lean_box(0);
v___x_969_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__17, &l_Lean_Meta_nativeEqTrue___closed__17_once, _init_l_Lean_Meta_nativeEqTrue___closed__17);
v___x_970_ = l_Lean_mkConst(v___x_969_, v___x_968_);
return v___x_970_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__19(void){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_mk_string_unchecked("` failed: Cannot native decide proposition with metavariables:", 62, 62);
return v___x_971_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__20(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__19, &l_Lean_Meta_nativeEqTrue___closed__19_once, _init_l_Lean_Meta_nativeEqTrue___closed__19);
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__21(void){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = lean_mk_string_unchecked("` failed: Cannot native decide proposition with free variables:", 63, 63);
return v___x_974_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__22(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__21, &l_Lean_Meta_nativeEqTrue___closed__21_once, _init_l_Lean_Meta_nativeEqTrue___closed__21);
v___x_976_ = l_Lean_stringToMessageData(v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object* v_tacticName_977_, lean_object* v_e_978_, lean_object* v_axiomDeclRange_x3f_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___x_993_; lean_object* v_a_994_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; uint8_t v___x_1100_; 
v___x_993_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_978_, v_a_981_, v_a_983_);
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref(v___x_993_);
v___x_1100_ = l_Lean_Expr_hasFVar(v_a_994_);
if (v___x_1100_ == 0)
{
v___y_1079_ = v_a_980_;
v___y_1080_ = v_a_981_;
v___y_1081_ = v_a_982_;
v___y_1082_ = v_a_983_;
goto v___jp_1078_;
}
else
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v___x_1101_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1102_ = l_Lean_MessageData_ofName(v_tacticName_977_);
v___x_1103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__22, &l_Lean_Meta_nativeEqTrue___closed__22_once, _init_l_Lean_Meta_nativeEqTrue___closed__22);
v___x_1105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = l_Lean_indentExpr(v_a_994_);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v___x_1107_, v_a_980_, v_a_981_, v_a_982_, v_a_983_);
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
v___jp_985_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_988_ = lean_box(0);
v___x_989_ = l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__6(v___y_987_, v___x_988_);
v___x_990_ = l_Lean_mkConst(v___y_986_, v___x_989_);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
return v___x_992_;
}
v___jp_995_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v_params_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1075_; 
v___x_1000_ = lean_st_ref_get(v___y_999_);
v___x_1001_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__3, &l_Lean_Meta_nativeEqTrue___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___closed__3);
lean_inc(v_a_994_);
v___x_1002_ = l_Lean_collectLevelParams(v___x_1001_, v_a_994_);
v_params_1003_ = lean_ctor_get(v___x_1002_, 2);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; lean_object* v_unused_1077_; 
v_unused_1076_ = lean_ctor_get(v___x_1002_, 1);
lean_dec(v_unused_1076_);
v_unused_1077_ = lean_ctor_get(v___x_1002_, 0);
lean_dec(v_unused_1077_);
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1075_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_params_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1075_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_env_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_env_1007_ = lean_ctor_get(v___x_1000_, 0);
lean_inc_ref(v_env_1007_);
lean_dec(v___x_1000_);
v___x_1008_ = lean_box(0);
v___x_1009_ = lean_array_to_list(v_params_1003_);
v___x_1010_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__5, &l_Lean_Meta_nativeEqTrue___closed__5_once, _init_l_Lean_Meta_nativeEqTrue___closed__5);
lean_inc(v_tacticName_977_);
v___x_1011_ = l_Lean_Name_append(v___x_1010_, v_tacticName_977_);
v___x_1012_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__7, &l_Lean_Meta_nativeEqTrue___closed__7_once, _init_l_Lean_Meta_nativeEqTrue___closed__7);
lean_inc(v___x_1011_);
v___x_1013_ = l_Lean_Name_append(v___x_1011_, v___x_1012_);
lean_inc(v_a_994_);
lean_inc(v___x_1009_);
v___f_1014_ = lean_alloc_closure((void*)(l_Lean_Meta_nativeEqTrue___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1014_, 0, v___x_1013_);
lean_closure_set(v___f_1014_, 1, v___x_1009_);
lean_closure_set(v___f_1014_, 2, v___x_1008_);
lean_closure_set(v___f_1014_, 3, v_tacticName_977_);
lean_closure_set(v___f_1014_, 4, v_a_994_);
v___x_1015_ = l_Lean_Environment_unlockAsync(v_env_1007_);
v___x_1016_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg(v___x_1015_, v___f_1014_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1066_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1066_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1066_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
uint8_t v___x_1021_; 
v___x_1021_ = lean_unbox(v_a_1017_);
lean_dec(v_a_1017_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; lean_object* v___x_1024_; 
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_del_object(v___x_1005_);
lean_dec(v_a_994_);
v___x_1022_ = lean_box(1);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 0, v___x_1022_);
v___x_1024_ = v___x_1019_;
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
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1065_; 
lean_del_object(v___x_1019_);
v___x_1026_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__9, &l_Lean_Meta_nativeEqTrue___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___closed__9);
v___x_1027_ = l_Lean_Name_append(v___x_1011_, v___x_1026_);
v___x_1028_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_1027_, v___y_999_);
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1065_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1065_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1033_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__14, &l_Lean_Meta_nativeEqTrue___closed__14_once, _init_l_Lean_Meta_nativeEqTrue___closed__14);
v___x_1034_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__15, &l_Lean_Meta_nativeEqTrue___closed__15_once, _init_l_Lean_Meta_nativeEqTrue___closed__15);
v___x_1035_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__18, &l_Lean_Meta_nativeEqTrue___closed__18_once, _init_l_Lean_Meta_nativeEqTrue___closed__18);
v___x_1036_ = l_Lean_mkApp3(v___x_1033_, v___x_1034_, v_a_994_, v___x_1035_);
lean_inc(v___x_1009_);
lean_inc(v_a_1029_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 2, v___x_1036_);
lean_ctor_set(v___x_1005_, 1, v___x_1009_);
lean_ctor_set(v___x_1005_, 0, v_a_1029_);
v___x_1038_ = v___x_1005_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1029_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1064_, 2, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1039_ = 0;
v___x_1040_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*1, v___x_1039_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1040_);
v___x_1042_ = v___x_1031_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_Lean_addDecl(v___x_1042_, v___x_1039_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_dec_ref(v___x_1043_);
if (lean_obj_tag(v_axiomDeclRange_x3f_979_) == 1)
{
lean_object* v_val_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v_val_1044_ = lean_ctor_get(v_axiomDeclRange_x3f_979_, 0);
v___x_1045_ = lean_box(0);
lean_inc(v_a_1029_);
v___x_1046_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7(v_a_1029_, v_val_1044_, v___x_1045_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_dec_ref(v___x_1046_);
v___y_986_ = v_a_1029_;
v___y_987_ = v___x_1009_;
goto v___jp_985_;
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec(v_a_1029_);
lean_dec(v___x_1009_);
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
else
{
v___y_986_ = v_a_1029_;
v___y_987_ = v___x_1009_;
goto v___jp_985_;
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec(v_a_1029_);
lean_dec(v___x_1009_);
v_a_1055_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1043_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1043_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
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
}
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_del_object(v___x_1005_);
lean_dec(v_a_994_);
v_a_1067_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1016_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1016_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
v___jp_1078_:
{
uint8_t v___x_1083_; 
v___x_1083_ = l_Lean_Expr_hasMVar(v_a_994_);
if (v___x_1083_ == 0)
{
v___y_996_ = v___y_1079_;
v___y_997_ = v___y_1080_;
v___y_998_ = v___y_1081_;
v___y_999_ = v___y_1082_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v___x_1084_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1085_ = l_Lean_MessageData_ofName(v_tacticName_977_);
v___x_1086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__20, &l_Lean_Meta_nativeEqTrue___closed__20_once, _init_l_Lean_Meta_nativeEqTrue___closed__20);
v___x_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = l_Lean_indentExpr(v_a_994_);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1_spec__0_spec__0_spec__1___redArg(v___x_1090_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1091_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1092_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object* v_tacticName_1117_, lean_object* v_e_1118_, lean_object* v_axiomDeclRange_x3f_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Meta_nativeEqTrue(v_tacticName_1117_, v_e_1118_, v_axiomDeclRange_x3f_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
lean_dec(v_axiomDeclRange_x3f_1119_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6(lean_object* v_env_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___redArg(v_env_1126_, v___y_1128_, v___y_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6___boxed(lean_object* v_env_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5_spec__6(v_env_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object* v_00_u03b1_1140_, lean_object* v_env_1141_, lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___redArg(v_env_1141_, v_x_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object* v_00_u03b1_1149_, lean_object* v_env_1150_, lean_object* v_x_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__5(v_00_u03b1_1149_, v_env_1150_, v_x_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9(lean_object* v_stx_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___redArg(v_stx_1158_, v___y_1161_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9___boxed(lean_object* v_stx_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__9(v_stx_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v_stx_1165_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10(lean_object* v_declName_1172_, lean_object* v_declRanges_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___redArg(v_declName_1172_, v_declRanges_1173_, v___y_1175_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10___boxed(lean_object* v_declName_1180_, lean_object* v_declRanges_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__7_spec__10(v_declName_1180_, v_declRanges_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
return v_res_1187_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Native(builtin);
}
#ifdef __cplusplus
}
#endif
