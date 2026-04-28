// Lean compiler output
// Module: Lean.Elab.Tactic.Rewrites
// Imports: public import Lean.Elab.Tactic.Location public import Lean.Meta.Tactic.Replace public import Lean.Meta.Tactic.Rewrites
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_reportOutOfHeartbeats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Rewrites_localHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Rewrites_findRewrites(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__0;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__1;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__2;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__3;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__4;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__5;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__6;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__7;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__8;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__9;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__10;
static lean_once_cell_t l_Lean_Elab_Rewrites_evalExact___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Rewrites_evalExact___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg___boxed(lean_object* v_e_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(v_e_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec(v___y_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2(lean_object* v_e_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(v_e_64_, v___y_70_, v___y_72_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___boxed(lean_object* v_e_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2(v_e_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0(lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___x_96_; 
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
lean_inc(v___y_88_);
lean_inc_ref(v___y_87_);
v___x_96_ = lean_apply_9(v_x_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, lean_box(0));
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0___boxed(lean_object* v_x_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0(v_x_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg(lean_object* v_mctx_108_, lean_object* v_x_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v___f_119_; lean_object* v___x_120_; 
lean_inc(v___y_113_);
lean_inc_ref(v___y_112_);
lean_inc(v___y_111_);
lean_inc_ref(v___y_110_);
v___f_119_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_119_, 0, v_x_109_);
lean_closure_set(v___f_119_, 1, v___y_110_);
lean_closure_set(v___f_119_, 2, v___y_111_);
lean_closure_set(v___f_119_, 3, v___y_112_);
lean_closure_set(v___f_119_, 4, v___y_113_);
v___x_120_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_box(0), v_mctx_108_, v___f_119_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
if (lean_obj_tag(v___x_120_) == 0)
{
return v___x_120_;
}
else
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg___boxed(lean_object* v_mctx_129_, lean_object* v_x_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg(v_mctx_129_, v_x_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4(lean_object* v_00_u03b1_141_, lean_object* v_mctx_142_, lean_object* v_x_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg(v_mctx_142_, v_x_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___boxed(lean_object* v_00_u03b1_154_, lean_object* v_mctx_155_, lean_object* v_x_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4(v_00_u03b1_154_, v_mctx_155_, v_x_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1(lean_object* v_msgData_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v___x_173_; lean_object* v_env_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v_mctx_177_; lean_object* v_lctx_178_; lean_object* v_options_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_173_ = lean_st_ref_get(v___y_171_);
v_env_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc_ref(v_env_174_);
lean_dec(v___x_173_);
v___x_175_ = lean_st_ref_get(v___y_171_);
lean_dec(v___x_175_);
v___x_176_ = lean_st_ref_get(v___y_169_);
v_mctx_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc_ref(v_mctx_177_);
lean_dec(v___x_176_);
v_lctx_178_ = lean_ctor_get(v___y_168_, 2);
v_options_179_ = lean_ctor_get(v___y_170_, 2);
lean_inc_ref(v_options_179_);
lean_inc_ref(v_lctx_178_);
v___x_180_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_180_, 0, v_env_174_);
lean_ctor_set(v___x_180_, 1, v_mctx_177_);
lean_ctor_set(v___x_180_, 2, v_lctx_178_);
lean_ctor_set(v___x_180_, 3, v_options_179_);
v___x_181_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v_msgData_167_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1___boxed(lean_object* v_msgData_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1(v_msgData_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(lean_object* v_msg_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_ref_196_; lean_object* v___x_197_; lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
v_ref_196_ = lean_ctor_get(v___y_193_, 5);
v___x_197_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1_spec__1(v_msg_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_206_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
lean_inc(v_ref_196_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_ref_196_);
lean_ctor_set(v___x_202_, 1, v_a_198_);
if (v_isShared_201_ == 0)
{
lean_ctor_set_tag(v___x_200_, 1);
lean_ctor_set(v___x_200_, 0, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg___boxed(lean_object* v_msg_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(v_msg_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
return v_res_213_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked("Failed to find a rewrite for some location", 42, 42);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0, &l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__0___closed__0);
v___x_216_ = l_Lean_stringToMessageData(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0(lean_object* v_x_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1, &l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__0___closed__1);
v___x_228_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(v___x_227_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__0___boxed(lean_object* v_x_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Elab_Rewrites_evalExact___lam__0(v_x_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v_x_229_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0(lean_object* v_result_240_, lean_object* v_expr_241_, uint8_t v_symm_242_, lean_object* v_f_243_, lean_object* v_tk_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_246_, v___y_248_, v___y_250_, v___y_252_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v_ref_256_; lean_object* v_eNew_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref(v___x_254_);
v_ref_256_ = lean_ctor_get(v___y_251_, 5);
v_eNew_257_ = lean_ctor_get(v_result_240_, 0);
v___x_258_ = lean_box(v_symm_242_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_expr_241_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_box(0);
v___x_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
lean_inc_ref(v_eNew_257_);
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v_eNew_257_);
v___x_263_ = l_Lean_Expr_fvar___override(v_f_243_);
v___x_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_inc(v_ref_256_);
v___x_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_265_, 0, v_ref_256_);
v___x_266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_266_, 0, v_a_255_);
v___x_267_ = l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(v_tk_244_, v___x_261_, v___x_262_, v___x_264_, v___x_265_, v___x_266_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
return v___x_267_;
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec(v_tk_244_);
lean_dec(v_f_243_);
lean_dec_ref(v_expr_241_);
v_a_268_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_254_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_254_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
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
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0___boxed(lean_object* v_result_276_, lean_object* v_expr_277_, lean_object* v_symm_278_, lean_object* v_f_279_, lean_object* v_tk_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
uint8_t v_symm_boxed_290_; lean_object* v_res_291_; 
v_symm_boxed_290_ = lean_unbox(v_symm_278_);
v_res_291_ = l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0(v_result_276_, v_expr_277_, v_symm_boxed_290_, v_f_279_, v_tk_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec_ref(v_result_276_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg(lean_object* v_f_292_, lean_object* v_tk_293_, lean_object* v_as_x27_294_, lean_object* v_b_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
if (lean_obj_tag(v_as_x27_294_) == 0)
{
lean_object* v___x_305_; 
lean_dec(v_tk_293_);
lean_dec(v_f_292_);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_b_295_);
return v___x_305_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v_expr_308_; uint8_t v_symm_309_; lean_object* v_result_310_; lean_object* v_mctx_311_; lean_object* v___x_312_; lean_object* v___f_313_; lean_object* v___x_314_; 
v_head_306_ = lean_ctor_get(v_as_x27_294_, 0);
v_tail_307_ = lean_ctor_get(v_as_x27_294_, 1);
v_expr_308_ = lean_ctor_get(v_head_306_, 0);
v_symm_309_ = lean_ctor_get_uint8(v_head_306_, sizeof(void*)*4);
v_result_310_ = lean_ctor_get(v_head_306_, 2);
v_mctx_311_ = lean_ctor_get(v_head_306_, 3);
v___x_312_ = lean_box(v_symm_309_);
lean_inc(v_tk_293_);
lean_inc(v_f_292_);
lean_inc_ref(v_expr_308_);
lean_inc_ref(v_result_310_);
v___f_313_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___lam__0___boxed), 14, 5);
lean_closure_set(v___f_313_, 0, v_result_310_);
lean_closure_set(v___f_313_, 1, v_expr_308_);
lean_closure_set(v___f_313_, 2, v___x_312_);
lean_closure_set(v___f_313_, 3, v_f_292_);
lean_closure_set(v___f_313_, 4, v_tk_293_);
lean_inc_ref(v_mctx_311_);
v___x_314_ = l_Lean_Meta_withMCtx___at___00Lean_Elab_Rewrites_evalExact_spec__4___redArg(v_mctx_311_, v___f_313_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v___x_315_; 
lean_dec_ref(v___x_314_);
v___x_315_ = lean_box(0);
v_as_x27_294_ = v_tail_307_;
v_b_295_ = v___x_315_;
goto _start;
}
else
{
lean_dec(v_tk_293_);
lean_dec(v_f_292_);
return v___x_314_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg___boxed(lean_object* v_f_317_, lean_object* v_tk_318_, lean_object* v_as_x27_319_, lean_object* v_b_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg(v_f_317_, v_tk_318_, v_as_x27_319_, v_b_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
lean_dec(v_as_x27_319_);
return v_res_330_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0(void){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = lean_mk_string_unchecked("rewrites", 8, 8);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0, &l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__0);
v___x_333_ = l_Lean_Name_mkStr1(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2(void){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_mk_string_unchecked("Could not find any lemmas which can rewrite the hypothesis ", 59, 59);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2, &l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__2);
v___x_336_ = l_Lean_stringToMessageData(v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1(lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v___y_339_, lean_object* v_tk_340_, lean_object* v___x_341_, lean_object* v___x_342_, lean_object* v_f_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; 
lean_inc(v_f_343_);
v___x_353_ = l_Lean_FVarId_findDecl_x3f___redArg(v_f_343_, v___y_348_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_476_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_476_ == 0)
{
v___x_356_ = v___x_353_;
v_isShared_357_ = v_isSharedCheck_476_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_476_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
if (lean_obj_tag(v_a_354_) == 1)
{
lean_object* v_val_358_; uint8_t v___x_359_; 
v_val_358_ = lean_ctor_get(v_a_354_, 0);
lean_inc(v_val_358_);
lean_dec_ref(v_a_354_);
v___x_359_ = l_Lean_LocalDecl_isImplementationDetail(v_val_358_);
lean_dec(v_val_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_del_object(v___x_356_);
lean_inc(v_f_343_);
v___x_360_ = l_Lean_FVarId_getType___redArg(v_f_343_, v___y_348_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_362_; lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref(v___x_360_);
v___x_362_ = l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(v_a_361_, v___y_349_, v___y_351_);
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref(v___x_362_);
v___x_364_ = lean_box(0);
lean_inc(v_f_343_);
v___x_365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_365_, 0, v_f_343_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = l_Lean_Meta_Rewrites_localHypotheses(v___x_365_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
lean_dec_ref(v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref(v___x_366_);
v___x_368_ = 2;
v___x_369_ = lean_unsigned_to_nat(20u);
v___x_370_ = lean_unsigned_to_nat(10u);
lean_inc(v_a_338_);
v___x_371_ = l_Lean_Meta_Rewrites_findRewrites(v_a_367_, v_a_337_, v_a_338_, v_a_363_, v___y_339_, v___x_368_, v___x_359_, v___x_369_, v___x_370_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; lean_object* v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_372_);
lean_dec_ref(v___x_371_);
v___x_427_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1, &l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1);
v___x_428_ = l_Lean_reportOutOfHeartbeats(v___x_427_, v_tk_340_, v___x_341_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_428_) == 0)
{
uint8_t v___x_429_; 
lean_dec_ref(v___x_428_);
v___x_429_ = l_List_isEmpty___redArg(v_a_372_);
if (v___x_429_ == 0)
{
v___y_374_ = v___y_344_;
v___y_375_ = v___y_345_;
v___y_376_ = v___y_346_;
v___y_377_ = v___y_347_;
v___y_378_ = v___y_348_;
v___y_379_ = v___y_349_;
v___y_380_ = v___y_350_;
v___y_381_ = v___y_351_;
goto v___jp_373_;
}
else
{
lean_object* v___x_430_; 
lean_dec(v_a_372_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
v___x_430_ = l_Lean_FVarId_getUserName___redArg(v_f_343_, v___y_348_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref(v___x_430_);
v___x_432_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3, &l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__3);
v___x_433_ = l_Lean_MessageData_ofName(v_a_431_);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_432_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(v___x_434_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
return v___x_435_;
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
v_a_436_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_430_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_430_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
}
else
{
lean_dec(v_a_372_);
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
return v___x_428_;
}
v___jp_373_:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_box(0);
lean_inc(v_f_343_);
v___x_383_ = l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg(v_f_343_, v_tk_340_, v_a_372_, v___x_382_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_425_; 
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v___x_383_, 0);
lean_dec(v_unused_426_);
v___x_385_ = v___x_383_;
v_isShared_386_ = v_isSharedCheck_425_;
goto v_resetjp_384_;
}
else
{
lean_dec(v___x_383_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_425_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; 
v___x_387_ = l_List_get_x3fInternal___redArg(v_a_372_, v___x_342_);
lean_dec(v_a_372_);
if (lean_obj_tag(v___x_387_) == 1)
{
lean_object* v_val_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_result_391_; lean_object* v_mctx_392_; lean_object* v_cache_393_; lean_object* v_zetaDeltaFVarIds_394_; lean_object* v_postponed_395_; lean_object* v_diag_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_420_; 
lean_del_object(v___x_385_);
v_val_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_val_388_);
lean_dec_ref(v___x_387_);
v___x_389_ = lean_st_ref_get(v___y_381_);
lean_dec(v___x_389_);
v___x_390_ = lean_st_ref_take(v___y_379_);
v_result_391_ = lean_ctor_get(v_val_388_, 2);
lean_inc_ref(v_result_391_);
v_mctx_392_ = lean_ctor_get(v_val_388_, 3);
lean_inc_ref(v_mctx_392_);
lean_dec(v_val_388_);
v_cache_393_ = lean_ctor_get(v___x_390_, 1);
v_zetaDeltaFVarIds_394_ = lean_ctor_get(v___x_390_, 2);
v_postponed_395_ = lean_ctor_get(v___x_390_, 3);
v_diag_396_ = lean_ctor_get(v___x_390_, 4);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_420_ == 0)
{
lean_object* v_unused_421_; 
v_unused_421_ = lean_ctor_get(v___x_390_, 0);
lean_dec(v_unused_421_);
v___x_398_ = v___x_390_;
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_diag_396_);
lean_inc(v_postponed_395_);
lean_inc(v_zetaDeltaFVarIds_394_);
lean_inc(v_cache_393_);
lean_dec(v___x_390_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 0, v_mctx_392_);
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_mctx_392_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_cache_393_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_zetaDeltaFVarIds_394_);
lean_ctor_set(v_reuseFailAlloc_419_, 3, v_postponed_395_);
lean_ctor_set(v_reuseFailAlloc_419_, 4, v_diag_396_);
v___x_401_ = v_reuseFailAlloc_419_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v___x_402_; lean_object* v_eNew_403_; lean_object* v_eqProof_404_; lean_object* v_mvarIds_405_; lean_object* v___x_406_; 
v___x_402_ = lean_st_ref_set(v___y_379_, v___x_401_);
v_eNew_403_ = lean_ctor_get(v_result_391_, 0);
lean_inc_ref(v_eNew_403_);
v_eqProof_404_ = lean_ctor_get(v_result_391_, 1);
lean_inc_ref(v_eqProof_404_);
v_mvarIds_405_ = lean_ctor_get(v_result_391_, 2);
lean_inc(v_mvarIds_405_);
lean_dec_ref(v_result_391_);
v___x_406_ = l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(v_a_338_, v_f_343_, v_eNew_403_, v_eqProof_404_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v_mvarId_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref(v___x_406_);
v_mvarId_408_ = lean_ctor_get(v_a_407_, 1);
lean_inc(v_mvarId_408_);
lean_dec(v_a_407_);
v___x_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_409_, 0, v_mvarId_408_);
lean_ctor_set(v___x_409_, 1, v_mvarIds_405_);
v___x_410_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_409_, v___y_375_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
return v___x_410_;
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_dec(v_mvarIds_405_);
v_a_411_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_406_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_406_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
}
else
{
lean_object* v___x_423_; 
lean_dec(v___x_387_);
lean_dec(v_f_343_);
lean_dec(v_a_338_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_382_);
v___x_423_ = v___x_385_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_382_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
else
{
lean_dec(v_a_372_);
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_a_338_);
return v___x_383_;
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
v_a_444_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_371_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_371_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
lean_dec(v_a_363_);
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
lean_dec(v_a_337_);
v_a_452_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_366_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_366_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
lean_dec(v_a_337_);
v_a_460_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_360_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_360_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
else
{
lean_object* v___x_468_; lean_object* v___x_470_; 
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
lean_dec(v_a_337_);
v___x_468_ = lean_box(0);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_468_);
v___x_470_ = v___x_356_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
else
{
lean_object* v___x_472_; lean_object* v___x_474_; 
lean_dec(v_a_354_);
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
lean_dec(v_a_337_);
v___x_472_ = lean_box(0);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_472_);
v___x_474_ = v___x_356_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec(v_f_343_);
lean_dec(v___x_342_);
lean_dec(v_tk_340_);
lean_dec(v_a_338_);
lean_dec(v_a_337_);
v_a_477_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_353_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_353_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__1___boxed(lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v___y_487_, lean_object* v_tk_488_, lean_object* v___x_489_, lean_object* v___x_490_, lean_object* v_f_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_Elab_Rewrites_evalExact___lam__1(v_a_485_, v_a_486_, v___y_487_, v_tk_488_, v___x_489_, v___x_490_, v_f_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___x_489_);
lean_dec(v___y_487_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3(lean_object* v_state_502_, lean_object* v_tk_503_, lean_object* v_as_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
if (lean_obj_tag(v_as_504_) == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; 
lean_dec(v_tk_503_);
lean_dec_ref(v_state_502_);
v___x_514_ = lean_box(0);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
else
{
lean_object* v_head_516_; lean_object* v_tail_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_head_516_ = lean_ctor_get(v_as_504_, 0);
lean_inc(v_head_516_);
v_tail_517_ = lean_ctor_get(v_as_504_, 1);
lean_inc(v_tail_517_);
lean_dec_ref(v_as_504_);
lean_inc_ref(v_state_502_);
v___x_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_518_, 0, v_state_502_);
lean_inc(v_tk_503_);
v___x_519_ = l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(v_tk_503_, v_head_516_, v___x_518_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_dec_ref(v___x_519_);
v_as_504_ = v_tail_517_;
goto _start;
}
else
{
lean_dec(v_tail_517_);
lean_dec(v_tk_503_);
lean_dec_ref(v_state_502_);
return v___x_519_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3___boxed(lean_object* v_state_521_, lean_object* v_tk_522_, lean_object* v_as_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3(v_state_521_, v_tk_522_, v_as_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
return v_res_533_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0(void){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_mk_string_unchecked("tacticTry_", 10, 10);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_mk_string_unchecked("try", 3, 3);
return v___x_535_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2(void){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_mk_string_unchecked("tacticSeq", 9, 9);
return v___x_536_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3(void){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4(void){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_538_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__4);
v___x_540_ = l_Lean_Name_mkStr1(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6(void){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_mk_string_unchecked("tacticRfl", 9, 9);
return v___x_541_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7(void){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = lean_mk_string_unchecked("rfl", 3, 3);
return v___x_542_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8(void){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_mk_string_unchecked("Could not find any lemmas which can rewrite the goal", 52, 52);
return v___x_543_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__8);
v___x_545_ = l_Lean_stringToMessageData(v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2(lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v___y_548_, uint8_t v___x_549_, lean_object* v_tk_550_, lean_object* v___x_551_, lean_object* v___x_552_, lean_object* v___x_553_, lean_object* v___x_554_, lean_object* v___x_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; 
lean_inc(v_a_546_);
v___x_565_ = l_Lean_MVarId_getType(v_a_546_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_567_; lean_object* v_a_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref(v___x_565_);
v___x_567_ = l_Lean_instantiateMVars___at___00Lean_Elab_Rewrites_evalExact_spec__2___redArg(v_a_566_, v___y_561_, v___y_563_);
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref(v___x_567_);
v___x_569_ = lean_box(0);
v___x_570_ = l_Lean_Meta_Rewrites_localHypotheses(v___x_569_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref(v___x_570_);
v___x_572_ = 2;
v___x_573_ = lean_unsigned_to_nat(20u);
v___x_574_ = lean_unsigned_to_nat(10u);
lean_inc(v_a_546_);
v___x_575_ = l_Lean_Meta_Rewrites_findRewrites(v_a_571_, v_a_547_, v_a_546_, v_a_568_, v___y_548_, v___x_572_, v___x_549_, v___x_573_, v___x_574_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref(v___x_575_);
v___x_664_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1, &l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__1___closed__1);
v___x_665_ = l_Lean_reportOutOfHeartbeats(v___x_664_, v_tk_550_, v___x_551_, v___y_562_, v___y_563_);
if (lean_obj_tag(v___x_665_) == 0)
{
uint8_t v___x_666_; 
lean_dec_ref(v___x_665_);
v___x_666_ = l_List_isEmpty___redArg(v_a_576_);
if (v___x_666_ == 0)
{
v___y_578_ = v___y_556_;
v___y_579_ = v___y_557_;
v___y_580_ = v___y_558_;
v___y_581_ = v___y_559_;
v___y_582_ = v___y_560_;
v___y_583_ = v___y_561_;
v___y_584_ = v___y_562_;
v___y_585_ = v___y_563_;
goto v___jp_577_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; 
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_546_);
v___x_667_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__9);
v___x_668_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(v___x_667_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
return v___x_668_;
}
}
else
{
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_546_);
return v___x_665_;
}
v___jp_577_:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_579_, v___y_581_, v___y_583_, v___y_585_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref(v___x_586_);
v___x_588_ = l_List_get_x3fInternal___redArg(v_a_576_, v___x_552_);
if (lean_obj_tag(v___x_588_) == 1)
{
lean_object* v_val_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v_result_592_; lean_object* v_mctx_593_; lean_object* v_cache_594_; lean_object* v_zetaDeltaFVarIds_595_; lean_object* v_postponed_596_; lean_object* v_diag_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_653_; 
lean_dec(v_a_587_);
v_val_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_val_589_);
lean_dec_ref(v___x_588_);
v___x_590_ = lean_st_ref_get(v___y_585_);
lean_dec(v___x_590_);
v___x_591_ = lean_st_ref_take(v___y_583_);
v_result_592_ = lean_ctor_get(v_val_589_, 2);
lean_inc_ref(v_result_592_);
v_mctx_593_ = lean_ctor_get(v_val_589_, 3);
lean_inc_ref(v_mctx_593_);
lean_dec(v_val_589_);
v_cache_594_ = lean_ctor_get(v___x_591_, 1);
v_zetaDeltaFVarIds_595_ = lean_ctor_get(v___x_591_, 2);
v_postponed_596_ = lean_ctor_get(v___x_591_, 3);
v_diag_597_ = lean_ctor_get(v___x_591_, 4);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_653_ == 0)
{
lean_object* v_unused_654_; 
v_unused_654_ = lean_ctor_get(v___x_591_, 0);
lean_dec(v_unused_654_);
v___x_599_ = v___x_591_;
v_isShared_600_ = v_isSharedCheck_653_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_diag_597_);
lean_inc(v_postponed_596_);
lean_inc(v_zetaDeltaFVarIds_595_);
lean_inc(v_cache_594_);
lean_dec(v___x_591_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_653_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v_mctx_593_);
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_mctx_593_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_cache_594_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_zetaDeltaFVarIds_595_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v_postponed_596_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_diag_597_);
v___x_602_ = v_reuseFailAlloc_652_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_st_ref_set(v___y_583_, v___x_602_);
v___x_604_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_579_, v___y_581_, v___y_583_, v___y_585_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v_eNew_606_; lean_object* v_eqProof_607_; lean_object* v_mvarIds_608_; lean_object* v___x_609_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref(v___x_604_);
v_eNew_606_ = lean_ctor_get(v_result_592_, 0);
lean_inc_ref(v_eNew_606_);
v_eqProof_607_ = lean_ctor_get(v_result_592_, 1);
lean_inc_ref(v_eqProof_607_);
v_mvarIds_608_ = lean_ctor_get(v_result_592_, 2);
lean_inc(v_mvarIds_608_);
lean_dec_ref(v_result_592_);
v___x_609_ = l_Lean_MVarId_replaceTargetEq(v_a_546_, v_eNew_606_, v_eqProof_607_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref(v___x_609_);
v___x_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_611_, 0, v_a_610_);
lean_ctor_set(v___x_611_, 1, v_mvarIds_608_);
v___x_612_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_611_, v___y_579_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_ref_613_; uint8_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec_ref(v___x_612_);
v_ref_613_ = lean_ctor_get(v___y_584_, 5);
v___x_614_ = 0;
v___x_615_ = l_Lean_SourceInfo_fromRef(v_ref_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__0);
lean_inc_ref_n(v___x_555_, 3);
lean_inc_ref_n(v___x_554_, 3);
lean_inc_ref_n(v___x_553_, 3);
v___x_617_ = l_Lean_Name_mkStr4(v___x_553_, v___x_554_, v___x_555_, v___x_616_);
v___x_618_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__1);
lean_inc_n(v___x_615_, 6);
v___x_619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_615_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__2);
v___x_621_ = l_Lean_Name_mkStr4(v___x_553_, v___x_554_, v___x_555_, v___x_620_);
v___x_622_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__3);
v___x_623_ = l_Lean_Name_mkStr4(v___x_553_, v___x_554_, v___x_555_, v___x_622_);
v___x_624_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__5);
v___x_625_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__6);
v___x_626_ = l_Lean_Name_mkStr4(v___x_553_, v___x_554_, v___x_555_, v___x_625_);
v___x_627_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7, &l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7_once, _init_l_Lean_Elab_Rewrites_evalExact___lam__2___closed__7);
v___x_628_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_615_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = l_Lean_Syntax_node1(v___x_615_, v___x_626_, v___x_628_);
v___x_630_ = l_Lean_Syntax_node1(v___x_615_, v___x_624_, v___x_629_);
v___x_631_ = l_Lean_Syntax_node1(v___x_615_, v___x_623_, v___x_630_);
v___x_632_ = l_Lean_Syntax_node1(v___x_615_, v___x_621_, v___x_631_);
v___x_633_ = l_Lean_Syntax_node2(v___x_615_, v___x_617_, v___x_619_, v___x_632_);
v___x_634_ = l_Lean_Elab_Tactic_evalTactic(v___x_633_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v___x_635_; 
lean_dec_ref(v___x_634_);
v___x_635_ = l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3(v_a_605_, v_tk_550_, v_a_576_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
return v___x_635_;
}
else
{
lean_dec(v_a_605_);
lean_dec(v_a_576_);
lean_dec(v_tk_550_);
return v___x_634_;
}
}
else
{
lean_dec(v_a_605_);
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v_tk_550_);
return v___x_612_;
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec(v_mvarIds_608_);
lean_dec(v_a_605_);
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v_tk_550_);
v_a_636_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_609_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_609_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
lean_dec_ref(v_result_592_);
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v_tk_550_);
lean_dec(v_a_546_);
v_a_644_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_604_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_604_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
}
else
{
lean_object* v___x_655_; 
lean_dec(v___x_588_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v_a_546_);
v___x_655_ = l_List_forM___at___00Lean_Elab_Rewrites_evalExact_spec__3(v_a_587_, v_tk_550_, v_a_576_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
return v___x_655_;
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_a_576_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_546_);
v_a_656_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_586_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_586_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_546_);
v_a_669_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_575_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_575_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v_a_568_);
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_547_);
lean_dec(v_a_546_);
v_a_677_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_570_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_570_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec_ref(v___x_555_);
lean_dec_ref(v___x_554_);
lean_dec_ref(v___x_553_);
lean_dec(v___x_552_);
lean_dec(v_tk_550_);
lean_dec(v_a_547_);
lean_dec(v_a_546_);
v_a_685_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_565_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_565_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___lam__2___boxed(lean_object** _args){
lean_object* v_a_693_ = _args[0];
lean_object* v_a_694_ = _args[1];
lean_object* v___y_695_ = _args[2];
lean_object* v___x_696_ = _args[3];
lean_object* v_tk_697_ = _args[4];
lean_object* v___x_698_ = _args[5];
lean_object* v___x_699_ = _args[6];
lean_object* v___x_700_ = _args[7];
lean_object* v___x_701_ = _args[8];
lean_object* v___x_702_ = _args[9];
lean_object* v___y_703_ = _args[10];
lean_object* v___y_704_ = _args[11];
lean_object* v___y_705_ = _args[12];
lean_object* v___y_706_ = _args[13];
lean_object* v___y_707_ = _args[14];
lean_object* v___y_708_ = _args[15];
lean_object* v___y_709_ = _args[16];
lean_object* v___y_710_ = _args[17];
lean_object* v___y_711_ = _args[18];
_start:
{
uint8_t v___x_25840__boxed_712_; lean_object* v_res_713_; 
v___x_25840__boxed_712_ = lean_unbox(v___x_696_);
v_res_713_ = l_Lean_Elab_Rewrites_evalExact___lam__2(v_a_693_, v_a_694_, v___y_695_, v___x_25840__boxed_712_, v_tk_697_, v___x_698_, v___x_699_, v___x_700_, v___x_701_, v___x_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___x_698_);
lean_dec(v___y_695_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7(lean_object* v_as_714_, size_t v_i_715_, size_t v_stop_716_, lean_object* v_b_717_){
_start:
{
uint8_t v___x_718_; 
v___x_718_ = lean_usize_dec_eq(v_i_715_, v_stop_716_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; size_t v___x_721_; size_t v___x_722_; 
v___x_719_ = lean_array_uget_borrowed(v_as_714_, v_i_715_);
lean_inc(v___x_719_);
v___x_720_ = l_Lean_NameSet_insert(v_b_717_, v___x_719_);
v___x_721_ = ((size_t)1ULL);
v___x_722_ = lean_usize_add(v_i_715_, v___x_721_);
v_i_715_ = v___x_722_;
v_b_717_ = v___x_720_;
goto _start;
}
else
{
return v_b_717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7___boxed(lean_object* v_as_724_, lean_object* v_i_725_, lean_object* v_stop_726_, lean_object* v_b_727_){
_start:
{
size_t v_i_boxed_728_; size_t v_stop_boxed_729_; lean_object* v_res_730_; 
v_i_boxed_728_ = lean_unbox_usize(v_i_725_);
lean_dec(v_i_725_);
v_stop_boxed_729_ = lean_unbox_usize(v_stop_726_);
lean_dec(v_stop_726_);
v_res_730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7(v_as_724_, v_i_boxed_728_, v_stop_boxed_729_, v_b_727_);
lean_dec_ref(v_as_724_);
return v_res_730_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0(void){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_mk_string_unchecked("group", 5, 5);
return v___x_731_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__0);
v___x_733_ = l_Lean_Name_mkStr1(v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8(size_t v_sz_734_, size_t v_i_735_, lean_object* v_bs_736_){
_start:
{
uint8_t v___x_737_; 
v___x_737_ = lean_usize_dec_lt(v_i_735_, v_sz_734_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_738_, 0, v_bs_736_);
return v___x_738_;
}
else
{
lean_object* v_v_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_v_739_ = lean_array_uget(v_bs_736_, v_i_735_);
v___x_740_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___closed__1);
lean_inc(v_v_739_);
v___x_741_ = l_Lean_Syntax_isOfKind(v_v_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_v_739_);
lean_dec_ref(v_bs_736_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v_bs_x27_745_; lean_object* v_forbidden_746_; size_t v___x_747_; size_t v___x_748_; lean_object* v___x_749_; 
v___x_743_ = lean_unsigned_to_nat(1u);
v___x_744_ = lean_unsigned_to_nat(0u);
v_bs_x27_745_ = lean_array_uset(v_bs_736_, v_i_735_, v___x_744_);
v_forbidden_746_ = l_Lean_Syntax_getArg(v_v_739_, v___x_743_);
lean_dec(v_v_739_);
v___x_747_ = ((size_t)1ULL);
v___x_748_ = lean_usize_add(v_i_735_, v___x_747_);
v___x_749_ = lean_array_uset(v_bs_x27_745_, v_i_735_, v_forbidden_746_);
v_i_735_ = v___x_748_;
v_bs_736_ = v___x_749_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8___boxed(lean_object* v_sz_751_, lean_object* v_i_752_, lean_object* v_bs_753_){
_start:
{
size_t v_sz_boxed_754_; size_t v_i_boxed_755_; lean_object* v_res_756_; 
v_sz_boxed_754_ = lean_unbox_usize(v_sz_751_);
lean_dec(v_sz_751_);
v_i_boxed_755_ = lean_unbox_usize(v_i_752_);
lean_dec(v_i_752_);
v_res_756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8(v_sz_boxed_754_, v_i_boxed_755_, v_bs_753_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6(size_t v_sz_757_, size_t v_i_758_, lean_object* v_bs_759_){
_start:
{
uint8_t v___x_760_; 
v___x_760_ = lean_usize_dec_lt(v_i_758_, v_sz_757_);
if (v___x_760_ == 0)
{
return v_bs_759_;
}
else
{
lean_object* v_v_761_; lean_object* v___x_762_; lean_object* v_bs_x27_763_; lean_object* v___x_764_; size_t v___x_765_; size_t v___x_766_; lean_object* v___x_767_; 
v_v_761_ = lean_array_uget(v_bs_759_, v_i_758_);
v___x_762_ = lean_unsigned_to_nat(0u);
v_bs_x27_763_ = lean_array_uset(v_bs_759_, v_i_758_, v___x_762_);
v___x_764_ = l_Lean_Syntax_getId(v_v_761_);
lean_dec(v_v_761_);
v___x_765_ = ((size_t)1ULL);
v___x_766_ = lean_usize_add(v_i_758_, v___x_765_);
v___x_767_ = lean_array_uset(v_bs_x27_763_, v_i_758_, v___x_764_);
v_i_758_ = v___x_766_;
v_bs_759_ = v___x_767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6___boxed(lean_object* v_sz_769_, lean_object* v_i_770_, lean_object* v_bs_771_){
_start:
{
size_t v_sz_boxed_772_; size_t v_i_boxed_773_; lean_object* v_res_774_; 
v_sz_boxed_772_ = lean_unbox_usize(v_sz_769_);
lean_dec(v_sz_769_);
v_i_boxed_773_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_res_774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6(v_sz_boxed_772_, v_i_boxed_773_, v_bs_771_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9(uint8_t v___x_775_, uint8_t v___x_776_, lean_object* v_as_777_, size_t v_i_778_, size_t v_stop_779_, lean_object* v_b_780_){
_start:
{
lean_object* v___y_782_; uint8_t v___x_786_; 
v___x_786_ = lean_usize_dec_eq(v_i_778_, v_stop_779_);
if (v___x_786_ == 0)
{
lean_object* v_fst_787_; uint8_t v___x_788_; 
v_fst_787_ = lean_ctor_get(v_b_780_, 0);
v___x_788_ = lean_unbox(v_fst_787_);
if (v___x_788_ == 0)
{
lean_object* v_snd_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_797_; 
v_snd_789_ = lean_ctor_get(v_b_780_, 1);
v_isSharedCheck_797_ = !lean_is_exclusive(v_b_780_);
if (v_isSharedCheck_797_ == 0)
{
lean_object* v_unused_798_; 
v_unused_798_ = lean_ctor_get(v_b_780_, 0);
lean_dec(v_unused_798_);
v___x_791_ = v_b_780_;
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_snd_789_);
lean_dec(v_b_780_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = lean_box(v___x_775_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 0, v___x_793_);
v___x_795_ = v___x_791_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_snd_789_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v___y_782_ = v___x_795_;
goto v___jp_781_;
}
}
}
else
{
lean_object* v_snd_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_809_; 
v_snd_799_ = lean_ctor_get(v_b_780_, 1);
v_isSharedCheck_809_ = !lean_is_exclusive(v_b_780_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v_b_780_, 0);
lean_dec(v_unused_810_);
v___x_801_ = v_b_780_;
v_isShared_802_ = v_isSharedCheck_809_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_snd_799_);
lean_dec(v_b_780_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_809_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_803_ = lean_array_uget_borrowed(v_as_777_, v_i_778_);
lean_inc(v___x_803_);
v___x_804_ = lean_array_push(v_snd_799_, v___x_803_);
v___x_805_ = lean_box(v___x_776_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v___x_804_);
lean_ctor_set(v___x_801_, 0, v___x_805_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v___x_804_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
v___y_782_ = v___x_807_;
goto v___jp_781_;
}
}
}
}
else
{
return v_b_780_;
}
v___jp_781_:
{
size_t v___x_783_; size_t v___x_784_; 
v___x_783_ = ((size_t)1ULL);
v___x_784_ = lean_usize_add(v_i_778_, v___x_783_);
v_i_778_ = v___x_784_;
v_b_780_ = v___y_782_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9___boxed(lean_object* v___x_811_, lean_object* v___x_812_, lean_object* v_as_813_, lean_object* v_i_814_, lean_object* v_stop_815_, lean_object* v_b_816_){
_start:
{
uint8_t v___x_26204__boxed_817_; uint8_t v___x_26205__boxed_818_; size_t v_i_boxed_819_; size_t v_stop_boxed_820_; lean_object* v_res_821_; 
v___x_26204__boxed_817_ = lean_unbox(v___x_811_);
v___x_26205__boxed_818_ = lean_unbox(v___x_812_);
v_i_boxed_819_ = lean_unbox_usize(v_i_814_);
lean_dec(v_i_814_);
v_stop_boxed_820_ = lean_unbox_usize(v_stop_815_);
lean_dec(v_stop_815_);
v_res_821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9(v___x_26204__boxed_817_, v___x_26205__boxed_818_, v_as_813_, v_i_boxed_819_, v_stop_boxed_820_, v_b_816_);
lean_dec_ref(v_as_813_);
return v_res_821_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__0(void){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_822_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__1(void){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_823_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__2(void){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_824_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__3(void){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = lean_mk_string_unchecked("rewrites\?", 9, 9);
return v___x_825_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__4(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_826_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__3, &l_Lean_Elab_Rewrites_evalExact___closed__3_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__3);
v___x_827_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__2, &l_Lean_Elab_Rewrites_evalExact___closed__2_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__2);
v___x_828_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__1, &l_Lean_Elab_Rewrites_evalExact___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__1);
v___x_829_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__0, &l_Lean_Elab_Rewrites_evalExact___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__0);
v___x_830_ = l_Lean_Name_mkStr4(v___x_829_, v___x_828_, v___x_827_, v___x_826_);
return v___x_830_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__5(void){
_start:
{
lean_object* v___f_831_; 
v___f_831_ = lean_alloc_closure((void*)(l_Lean_Elab_Rewrites_evalExact___lam__0___boxed), 10, 0);
return v___f_831_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__6(void){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = lean_mk_string_unchecked("findRewrites", 12, 12);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__7(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__6, &l_Lean_Elab_Rewrites_evalExact___closed__6_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__6);
v___x_834_ = l_Lean_Name_mkStr1(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__8(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_unsigned_to_nat(0u);
v___x_836_ = lean_mk_empty_array_with_capacity(v___x_835_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__9(void){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_mk_string_unchecked("rewrites_forbidden", 18, 18);
return v___x_837_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__10(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_838_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__9, &l_Lean_Elab_Rewrites_evalExact___closed__9_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__9);
v___x_839_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__2, &l_Lean_Elab_Rewrites_evalExact___closed__2_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__2);
v___x_840_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__1, &l_Lean_Elab_Rewrites_evalExact___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__1);
v___x_841_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__0, &l_Lean_Elab_Rewrites_evalExact___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__0);
v___x_842_ = l_Lean_Name_mkStr4(v___x_841_, v___x_840_, v___x_839_, v___x_838_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Elab_Rewrites_evalExact___closed__11(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_mk_empty_array_with_capacity(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact(lean_object* v_stx_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_871_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__0, &l_Lean_Elab_Rewrites_evalExact___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__0);
v___x_872_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__1, &l_Lean_Elab_Rewrites_evalExact___closed__1_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__1);
v___x_873_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__2, &l_Lean_Elab_Rewrites_evalExact___closed__2_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__2);
v___x_874_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__4, &l_Lean_Elab_Rewrites_evalExact___closed__4_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__4);
lean_inc(v_stx_845_);
v___x_875_ = l_Lean_Syntax_isOfKind(v_stx_845_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; 
lean_dec(v_stx_845_);
v___x_876_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_876_;
}
else
{
lean_object* v___f_877_; lean_object* v___x_878_; lean_object* v_tk_879_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_943_; lean_object* v_forbidden_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_951_; lean_object* v___y_952_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___x_981_; lean_object* v_loc_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___f_877_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__5, &l_Lean_Elab_Rewrites_evalExact___closed__5_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__5);
v___x_878_ = lean_unsigned_to_nat(0u);
v_tk_879_ = l_Lean_Syntax_getArg(v_stx_845_, v___x_878_);
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_1018_ = l_Lean_Syntax_getArg(v_stx_845_, v___x_981_);
v___x_1019_ = l_Lean_Syntax_isNone(v___x_1018_);
if (v___x_1019_ == 0)
{
uint8_t v___x_1020_; 
lean_inc(v___x_1018_);
v___x_1020_ = l_Lean_Syntax_matchesNull(v___x_1018_, v___x_981_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; 
lean_dec(v___x_1018_);
lean_dec(v_tk_879_);
lean_dec(v_stx_845_);
v___x_1021_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_1021_;
}
else
{
lean_object* v_loc_1022_; lean_object* v___x_1023_; 
v_loc_1022_ = l_Lean_Syntax_getArg(v___x_1018_, v___x_878_);
lean_dec(v___x_1018_);
v___x_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1023_, 0, v_loc_1022_);
v_loc_983_ = v___x_1023_;
v___y_984_ = v_a_846_;
v___y_985_ = v_a_847_;
v___y_986_ = v_a_848_;
v___y_987_ = v_a_849_;
v___y_988_ = v_a_850_;
v___y_989_ = v_a_851_;
v___y_990_ = v_a_852_;
v___y_991_ = v_a_853_;
goto v___jp_982_;
}
}
else
{
lean_object* v___x_1024_; 
lean_dec(v___x_1018_);
v___x_1024_ = lean_box(0);
v_loc_983_ = v___x_1024_;
v___y_984_ = v_a_846_;
v___y_985_ = v_a_847_;
v___y_986_ = v_a_848_;
v___y_987_ = v_a_849_;
v___y_988_ = v_a_850_;
v___y_989_ = v_a_851_;
v___y_990_ = v_a_852_;
v___y_991_ = v_a_853_;
goto v___jp_982_;
}
v___jp_880_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__7, &l_Lean_Elab_Rewrites_evalExact___closed__7_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__7);
v___x_894_ = lean_unsigned_to_nat(90u);
v___x_895_ = l_Lean_reportOutOfHeartbeats(v___x_893_, v_tk_879_, v___x_894_, v___y_888_, v___y_889_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v___x_896_; 
lean_dec_ref(v___x_895_);
v___x_896_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_886_, v___y_891_, v___y_883_, v___y_888_, v___y_889_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___f_898_; lean_object* v___x_899_; lean_object* v___f_900_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc_n(v_a_897_, 2);
lean_dec_ref(v___x_896_);
lean_inc(v_tk_879_);
lean_inc(v___y_892_);
lean_inc(v___y_881_);
v___f_898_ = lean_alloc_closure((void*)(l_Lean_Elab_Rewrites_evalExact___lam__1___boxed), 16, 6);
lean_closure_set(v___f_898_, 0, v___y_881_);
lean_closure_set(v___f_898_, 1, v_a_897_);
lean_closure_set(v___f_898_, 2, v___y_892_);
lean_closure_set(v___f_898_, 3, v_tk_879_);
lean_closure_set(v___f_898_, 4, v___x_894_);
lean_closure_set(v___f_898_, 5, v___x_878_);
v___x_899_ = lean_box(v___x_875_);
v___f_900_ = lean_alloc_closure((void*)(l_Lean_Elab_Rewrites_evalExact___lam__2___boxed), 19, 10);
lean_closure_set(v___f_900_, 0, v_a_897_);
lean_closure_set(v___f_900_, 1, v___y_881_);
lean_closure_set(v___f_900_, 2, v___y_892_);
lean_closure_set(v___f_900_, 3, v___x_899_);
lean_closure_set(v___f_900_, 4, v_tk_879_);
lean_closure_set(v___f_900_, 5, v___x_894_);
lean_closure_set(v___f_900_, 6, v___x_878_);
lean_closure_set(v___f_900_, 7, v___x_871_);
lean_closure_set(v___f_900_, 8, v___x_872_);
lean_closure_set(v___f_900_, 9, v___x_873_);
if (lean_obj_tag(v___y_890_) == 0)
{
lean_object* v___x_901_; 
v___x_901_ = lean_box(0);
v___y_856_ = v___y_882_;
v___y_857_ = v___y_883_;
v___y_858_ = v___y_884_;
v___y_859_ = v___f_900_;
v___y_860_ = v___y_886_;
v___y_861_ = v___y_885_;
v___y_862_ = v___f_898_;
v___y_863_ = v___y_888_;
v___y_864_ = v___y_887_;
v___y_865_ = v___y_889_;
v___y_866_ = v___y_891_;
v___y_867_ = v___x_901_;
goto v___jp_855_;
}
else
{
lean_object* v_val_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_val_902_ = lean_ctor_get(v___y_890_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___y_890_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___y_890_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_val_902_);
lean_dec(v___y_890_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_val_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
v___y_856_ = v___y_882_;
v___y_857_ = v___y_883_;
v___y_858_ = v___y_884_;
v___y_859_ = v___f_900_;
v___y_860_ = v___y_886_;
v___y_861_ = v___y_885_;
v___y_862_ = v___f_898_;
v___y_863_ = v___y_888_;
v___y_864_ = v___y_887_;
v___y_865_ = v___y_889_;
v___y_866_ = v___y_891_;
v___y_867_ = v___x_907_;
goto v___jp_855_;
}
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec(v___y_892_);
lean_dec(v___y_890_);
lean_dec(v___y_881_);
lean_dec(v_tk_879_);
v_a_910_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_896_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_896_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
else
{
lean_dec(v___y_892_);
lean_dec(v___y_890_);
lean_dec(v___y_881_);
lean_dec(v_tk_879_);
return v___x_895_;
}
}
v___jp_918_:
{
size_t v_sz_932_; size_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v_sz_932_ = lean_array_size(v___y_931_);
v___x_933_ = ((size_t)0ULL);
v___x_934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__6(v_sz_932_, v___x_933_, v___y_931_);
v___x_935_ = lean_array_get_size(v___x_934_);
v___x_936_ = lean_nat_dec_lt(v___x_878_, v___x_935_);
if (v___x_936_ == 0)
{
lean_dec_ref(v___x_934_);
lean_inc(v___y_923_);
v___y_881_ = v___y_919_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_921_;
v___y_884_ = v___y_922_;
v___y_885_ = v___y_925_;
v___y_886_ = v___y_924_;
v___y_887_ = v___y_927_;
v___y_888_ = v___y_926_;
v___y_889_ = v___y_928_;
v___y_890_ = v___y_929_;
v___y_891_ = v___y_930_;
v___y_892_ = v___y_923_;
goto v___jp_880_;
}
else
{
uint8_t v___x_937_; 
v___x_937_ = lean_nat_dec_le(v___x_935_, v___x_935_);
if (v___x_937_ == 0)
{
if (v___x_936_ == 0)
{
lean_dec_ref(v___x_934_);
lean_inc(v___y_923_);
v___y_881_ = v___y_919_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_921_;
v___y_884_ = v___y_922_;
v___y_885_ = v___y_925_;
v___y_886_ = v___y_924_;
v___y_887_ = v___y_927_;
v___y_888_ = v___y_926_;
v___y_889_ = v___y_928_;
v___y_890_ = v___y_929_;
v___y_891_ = v___y_930_;
v___y_892_ = v___y_923_;
goto v___jp_880_;
}
else
{
size_t v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_usize_of_nat(v___x_935_);
lean_inc(v___y_923_);
v___x_939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7(v___x_934_, v___x_933_, v___x_938_, v___y_923_);
lean_dec_ref(v___x_934_);
v___y_881_ = v___y_919_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_921_;
v___y_884_ = v___y_922_;
v___y_885_ = v___y_925_;
v___y_886_ = v___y_924_;
v___y_887_ = v___y_927_;
v___y_888_ = v___y_926_;
v___y_889_ = v___y_928_;
v___y_890_ = v___y_929_;
v___y_891_ = v___y_930_;
v___y_892_ = v___x_939_;
goto v___jp_880_;
}
}
else
{
size_t v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_usize_of_nat(v___x_935_);
lean_inc(v___y_923_);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__7(v___x_934_, v___x_933_, v___x_940_, v___y_923_);
lean_dec_ref(v___x_934_);
v___y_881_ = v___y_919_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_921_;
v___y_884_ = v___y_922_;
v___y_885_ = v___y_925_;
v___y_886_ = v___y_924_;
v___y_887_ = v___y_927_;
v___y_888_ = v___y_926_;
v___y_889_ = v___y_928_;
v___y_890_ = v___y_929_;
v___y_891_ = v___y_930_;
v___y_892_ = v___x_941_;
goto v___jp_880_;
}
}
}
v___jp_942_:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_Meta_Rewrites_createModuleTreeRef(v___y_949_, v___y_950_, v___y_951_, v___y_952_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref(v___x_953_);
v___x_955_ = l_Lean_NameSet_empty;
if (lean_obj_tag(v_forbidden_944_) == 0)
{
lean_object* v___x_956_; 
v___x_956_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__8, &l_Lean_Elab_Rewrites_evalExact___closed__8_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__8);
v___y_919_ = v_a_954_;
v___y_920_ = v___y_948_;
v___y_921_ = v___y_950_;
v___y_922_ = v___y_947_;
v___y_923_ = v___x_955_;
v___y_924_ = v___y_946_;
v___y_925_ = v___y_945_;
v___y_926_ = v___y_951_;
v___y_927_ = v___f_877_;
v___y_928_ = v___y_952_;
v___y_929_ = v___y_943_;
v___y_930_ = v___y_949_;
v___y_931_ = v___x_956_;
goto v___jp_918_;
}
else
{
lean_object* v_val_957_; 
v_val_957_ = lean_ctor_get(v_forbidden_944_, 0);
lean_inc(v_val_957_);
lean_dec_ref(v_forbidden_944_);
v___y_919_ = v_a_954_;
v___y_920_ = v___y_948_;
v___y_921_ = v___y_950_;
v___y_922_ = v___y_947_;
v___y_923_ = v___x_955_;
v___y_924_ = v___y_946_;
v___y_925_ = v___y_945_;
v___y_926_ = v___y_951_;
v___y_927_ = v___f_877_;
v___y_928_ = v___y_952_;
v___y_929_ = v___y_943_;
v___y_930_ = v___y_949_;
v___y_931_ = v_val_957_;
goto v___jp_918_;
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_forbidden_944_);
lean_dec(v___y_943_);
lean_dec(v_tk_879_);
v_a_958_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_953_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_953_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
v___jp_966_:
{
size_t v_sz_977_; size_t v___x_978_; lean_object* v___x_979_; 
v_sz_977_ = lean_array_size(v___y_976_);
v___x_978_ = ((size_t)0ULL);
v___x_979_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Rewrites_evalExact_spec__8(v_sz_977_, v___x_978_, v___y_976_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v___x_980_; 
lean_dec(v___y_973_);
lean_dec(v_tk_879_);
v___x_980_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_980_;
}
else
{
v___y_943_ = v___y_973_;
v_forbidden_944_ = v___x_979_;
v___y_945_ = v___y_972_;
v___y_946_ = v___y_968_;
v___y_947_ = v___y_970_;
v___y_948_ = v___y_975_;
v___y_949_ = v___y_971_;
v___y_950_ = v___y_967_;
v___y_951_ = v___y_974_;
v___y_952_ = v___y_969_;
goto v___jp_942_;
}
}
v___jp_982_:
{
lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_992_ = lean_unsigned_to_nat(2u);
v___x_993_ = l_Lean_Syntax_getArg(v_stx_845_, v___x_992_);
lean_dec(v_stx_845_);
v___x_994_ = l_Lean_Syntax_isNone(v___x_993_);
if (v___x_994_ == 0)
{
uint8_t v___x_995_; 
lean_inc(v___x_993_);
v___x_995_ = l_Lean_Syntax_matchesNull(v___x_993_, v___x_981_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; 
lean_dec(v___x_993_);
lean_dec(v_loc_983_);
lean_dec(v_tk_879_);
v___x_996_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_996_;
}
else
{
lean_object* v___x_997_; lean_object* v___x_998_; uint8_t v___x_999_; 
v___x_997_ = l_Lean_Syntax_getArg(v___x_993_, v___x_878_);
lean_dec(v___x_993_);
v___x_998_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__10, &l_Lean_Elab_Rewrites_evalExact___closed__10_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__10);
lean_inc(v___x_997_);
v___x_999_ = l_Lean_Syntax_isOfKind(v___x_997_, v___x_998_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; 
lean_dec(v___x_997_);
lean_dec(v_loc_983_);
lean_dec(v_tk_879_);
v___x_1000_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Rewrites_evalExact_spec__0___redArg();
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1001_ = l_Lean_Syntax_getArg(v___x_997_, v___x_981_);
lean_dec(v___x_997_);
v___x_1002_ = l_Lean_Syntax_getArgs(v___x_1001_);
lean_dec(v___x_1001_);
v___x_1003_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__11, &l_Lean_Elab_Rewrites_evalExact___closed__11_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__11);
v___x_1004_ = lean_array_get_size(v___x_1002_);
v___x_1005_ = lean_nat_dec_lt(v___x_878_, v___x_1004_);
if (v___x_1005_ == 0)
{
lean_dec_ref(v___x_1002_);
v___y_967_ = v___y_989_;
v___y_968_ = v___y_985_;
v___y_969_ = v___y_991_;
v___y_970_ = v___y_986_;
v___y_971_ = v___y_988_;
v___y_972_ = v___y_984_;
v___y_973_ = v_loc_983_;
v___y_974_ = v___y_990_;
v___y_975_ = v___y_987_;
v___y_976_ = v___x_1003_;
goto v___jp_966_;
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1006_ = lean_box(v___x_999_);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v___x_1003_);
v___x_1008_ = lean_nat_dec_le(v___x_1004_, v___x_1004_);
if (v___x_1008_ == 0)
{
if (v___x_1005_ == 0)
{
lean_dec_ref(v___x_1007_);
lean_dec_ref(v___x_1002_);
v___y_967_ = v___y_989_;
v___y_968_ = v___y_985_;
v___y_969_ = v___y_991_;
v___y_970_ = v___y_986_;
v___y_971_ = v___y_988_;
v___y_972_ = v___y_984_;
v___y_973_ = v_loc_983_;
v___y_974_ = v___y_990_;
v___y_975_ = v___y_987_;
v___y_976_ = v___x_1003_;
goto v___jp_966_;
}
else
{
size_t v___x_1009_; size_t v___x_1010_; lean_object* v___x_1011_; lean_object* v_snd_1012_; 
v___x_1009_ = ((size_t)0ULL);
v___x_1010_ = lean_usize_of_nat(v___x_1004_);
v___x_1011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9(v___x_999_, v___x_994_, v___x_1002_, v___x_1009_, v___x_1010_, v___x_1007_);
lean_dec_ref(v___x_1002_);
v_snd_1012_ = lean_ctor_get(v___x_1011_, 1);
lean_inc(v_snd_1012_);
lean_dec_ref(v___x_1011_);
v___y_967_ = v___y_989_;
v___y_968_ = v___y_985_;
v___y_969_ = v___y_991_;
v___y_970_ = v___y_986_;
v___y_971_ = v___y_988_;
v___y_972_ = v___y_984_;
v___y_973_ = v_loc_983_;
v___y_974_ = v___y_990_;
v___y_975_ = v___y_987_;
v___y_976_ = v_snd_1012_;
goto v___jp_966_;
}
}
else
{
size_t v___x_1013_; size_t v___x_1014_; lean_object* v___x_1015_; lean_object* v_snd_1016_; 
v___x_1013_ = ((size_t)0ULL);
v___x_1014_ = lean_usize_of_nat(v___x_1004_);
v___x_1015_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Rewrites_evalExact_spec__9(v___x_999_, v___x_994_, v___x_1002_, v___x_1013_, v___x_1014_, v___x_1007_);
lean_dec_ref(v___x_1002_);
v_snd_1016_ = lean_ctor_get(v___x_1015_, 1);
lean_inc(v_snd_1016_);
lean_dec_ref(v___x_1015_);
v___y_967_ = v___y_989_;
v___y_968_ = v___y_985_;
v___y_969_ = v___y_991_;
v___y_970_ = v___y_986_;
v___y_971_ = v___y_988_;
v___y_972_ = v___y_984_;
v___y_973_ = v_loc_983_;
v___y_974_ = v___y_990_;
v___y_975_ = v___y_987_;
v___y_976_ = v_snd_1016_;
goto v___jp_966_;
}
}
}
}
}
else
{
lean_object* v___x_1017_; 
lean_dec(v___x_993_);
v___x_1017_ = lean_box(0);
v___y_943_ = v_loc_983_;
v_forbidden_944_ = v___x_1017_;
v___y_945_ = v___y_984_;
v___y_946_ = v___y_985_;
v___y_947_ = v___y_986_;
v___y_948_ = v___y_987_;
v___y_949_ = v___y_988_;
v___y_950_ = v___y_989_;
v___y_951_ = v___y_990_;
v___y_952_ = v___y_991_;
goto v___jp_942_;
}
}
}
v___jp_855_:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_868_ = l_Lean_mkOptionalNode(v___y_867_);
v___x_869_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_868_);
lean_dec(v___x_868_);
lean_inc_ref(v___y_864_);
v___x_870_ = l_Lean_Elab_Tactic_withLocation(v___x_869_, v___y_862_, v___y_859_, v___y_864_, v___y_861_, v___y_860_, v___y_858_, v___y_856_, v___y_866_, v___y_857_, v___y_863_, v___y_865_);
lean_dec(v___x_869_);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Rewrites_evalExact___boxed(lean_object* v_stx_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_Elab_Rewrites_evalExact(v_stx_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1(lean_object* v_00_u03b1_1036_, lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___redArg(v_msg_1037_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_msg_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_throwError___at___00Lean_Elab_Rewrites_evalExact_spec__1(v_00_u03b1_1048_, v_msg_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5(lean_object* v_f_1060_, lean_object* v_tk_1061_, lean_object* v_as_1062_, lean_object* v_as_x27_1063_, lean_object* v_b_1064_, lean_object* v_a_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___redArg(v_f_1060_, v_tk_1061_, v_as_x27_1063_, v_b_1064_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5___boxed(lean_object* v_f_1076_, lean_object* v_tk_1077_, lean_object* v_as_1078_, lean_object* v_as_x27_1079_, lean_object* v_b_1080_, lean_object* v_a_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_List_forIn_x27_loop___at___00Lean_Elab_Rewrites_evalExact_spec__5(v_f_1076_, v_tk_1077_, v_as_1078_, v_as_x27_1079_, v_b_1080_, v_a_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v_as_x27_1079_);
lean_dec(v_as_1078_);
return v_res_1091_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0(void){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_1092_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1(void){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_mk_string_unchecked("Rewrites", 8, 8);
return v___x_1093_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2(void){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_mk_string_unchecked("evalExact", 9, 9);
return v___x_1094_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1095_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__2);
v___x_1096_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__1);
v___x_1097_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__0);
v___x_1098_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__0, &l_Lean_Elab_Rewrites_evalExact___closed__0_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__0);
v___x_1099_ = l_Lean_Name_mkStr4(v___x_1098_, v___x_1097_, v___x_1096_, v___x_1095_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1(){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1101_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1102_ = lean_obj_once(&l_Lean_Elab_Rewrites_evalExact___closed__4, &l_Lean_Elab_Rewrites_evalExact___closed__4_once, _init_l_Lean_Elab_Rewrites_evalExact___closed__4);
v___x_1103_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3);
v___x_1104_ = lean_alloc_closure((void*)(l_Lean_Elab_Rewrites_evalExact___boxed), 10, 0);
v___x_1105_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1101_, v___x_1102_, v___x_1103_, v___x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___boxed(lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1();
return v_res_1107_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_unsigned_to_nat(29u);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
lean_ctor_set(v___x_1110_, 1, v___x_1108_);
return v___x_1110_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1111_ = lean_unsigned_to_nat(70u);
v___x_1112_ = lean_unsigned_to_nat(67u);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v___x_1111_);
return v___x_1113_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1114_ = lean_unsigned_to_nat(70u);
v___x_1115_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__1);
v___x_1116_ = lean_unsigned_to_nat(0u);
v___x_1117_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__0);
v___x_1118_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
lean_ctor_set(v___x_1118_, 1, v___x_1116_);
lean_ctor_set(v___x_1118_, 2, v___x_1115_);
lean_ctor_set(v___x_1118_, 3, v___x_1114_);
return v___x_1118_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_unsigned_to_nat(4u);
v___x_1120_ = lean_unsigned_to_nat(29u);
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
lean_ctor_set(v___x_1121_, 1, v___x_1119_);
return v___x_1121_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = lean_unsigned_to_nat(13u);
v___x_1123_ = lean_unsigned_to_nat(29u);
v___x_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
lean_ctor_set(v___x_1124_, 1, v___x_1122_);
return v___x_1124_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1125_ = lean_unsigned_to_nat(13u);
v___x_1126_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__4);
v___x_1127_ = lean_unsigned_to_nat(4u);
v___x_1128_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__3);
v___x_1129_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
lean_ctor_set(v___x_1129_, 1, v___x_1127_);
lean_ctor_set(v___x_1129_, 2, v___x_1126_);
lean_ctor_set(v___x_1129_, 3, v___x_1125_);
return v___x_1129_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__5);
v___x_1131_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__2);
v___x_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3(){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1___closed__3);
v___x_1135_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___closed__6);
v___x_1136_ = l_Lean_addBuiltinDeclarationRanges(v___x_1134_, v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3___boxed(lean_object* v_a_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3();
return v_res_1138_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rewrites_0__Lean_Elab_Rewrites_evalExact___regBuiltin_Lean_Elab_Rewrites_evalExact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Rewrites(builtin);
}
#ifdef __cplusplus
}
#endif
