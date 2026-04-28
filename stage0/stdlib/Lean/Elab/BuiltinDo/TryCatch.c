// Lean compiler output
// Module: Lean.Elab.BuiltinDo.TryCatch
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.Do.Control
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinder___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ControlLifter_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ControlLifter_restoreCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkFreshResultType___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Term_registerMVarErrorHoleInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkPure___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_enterFinally(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ControlLifter_ofCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__7;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__8;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__9;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__10;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__11;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__12;
static lean_once_cell_t l_Lean_Elab_Do_elabDoTry___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoTry___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0(v_00_u03b1_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(lean_object* v___x_29_, uint8_t v___x_30_, lean_object* v_cont_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Do_elabDoSeq(v___x_29_, v_cont_31_, v___x_30_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed(lean_object* v___x_41_, lean_object* v___x_42_, lean_object* v_cont_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
uint8_t v___x_4680__boxed_52_; lean_object* v_res_53_; 
v___x_4680__boxed_52_ = lean_unbox(v___x_42_);
v_res_53_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0(v___x_41_, v___x_4680__boxed_52_, v_cont_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_53_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("MonadExcept", 11, 11);
return v___x_54_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0);
v___x_56_ = l_Lean_Name_mkStr1(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("tryCatch", 8, 8);
return v___x_57_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__2);
v___x_59_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__0);
v___x_60_ = l_Lean_Name_mkStr2(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked("MonadExceptOf", 13, 13);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__4);
v___x_63_ = l_Lean_Name_mkStr1(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked("tryCatchThe", 11, 11);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__6);
v___x_66_ = l_Lean_Name_mkStr1(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(lean_object* v_lifter_67_, lean_object* v___f_68_, lean_object* v___x_69_, uint8_t v___x_70_, lean_object* v_monadInfo_71_, lean_object* v_body_72_, lean_object* v___y_73_, lean_object* v_eType_x3f_74_, lean_object* v_x_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_catcher_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; lean_object* v___y_91_; lean_object* v___x_108_; 
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
lean_inc(v___y_79_);
lean_inc_ref(v___y_78_);
lean_inc_ref(v_x_75_);
v___x_108_ = lean_infer_type(v_x_75_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_110_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
lean_inc_n(v_a_109_, 2);
lean_dec_ref(v___x_108_);
v___x_110_ = l_Lean_Meta_getDecLevel(v_a_109_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref(v___x_110_);
if (lean_obj_tag(v_eType_x3f_74_) == 0)
{
goto v___jp_112_;
}
else
{
if (v___x_70_ == 0)
{
goto v___jp_112_;
}
else
{
lean_object* v_m_130_; lean_object* v_u_131_; lean_object* v_v_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_m_130_ = lean_ctor_get(v_monadInfo_71_, 0);
lean_inc_ref_n(v_m_130_, 2);
v_u_131_ = lean_ctor_get(v_monadInfo_71_, 1);
lean_inc(v_u_131_);
v_v_132_ = lean_ctor_get(v_monadInfo_71_, 2);
lean_inc(v_v_132_);
lean_dec_ref(v_monadInfo_71_);
v___x_133_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__5);
v___x_134_ = lean_box(0);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v_v_132_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v_u_131_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_137_, 0, v_a_111_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc_ref(v___x_137_);
v___x_138_ = l_Lean_mkConst(v___x_133_, v___x_137_);
lean_inc(v_a_109_);
v___x_139_ = l_Lean_mkAppB(v___x_138_, v_a_109_, v_m_130_);
v___x_140_ = lean_box(0);
v___x_141_ = l_Lean_Elab_Term_mkInstMVar(v___x_139_, v___x_140_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v_liftedDoBlockResultType_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
lean_inc(v_a_142_);
lean_dec_ref(v___x_141_);
v_liftedDoBlockResultType_143_ = lean_ctor_get(v_lifter_67_, 5);
v___x_144_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__7);
v___x_145_ = l_Lean_mkConst(v___x_144_, v___x_137_);
lean_inc_ref(v_liftedDoBlockResultType_143_);
v___x_146_ = lean_alloc_closure((void*)(l_Lean_mkApp6), 7, 6);
lean_closure_set(v___x_146_, 0, v___x_145_);
lean_closure_set(v___x_146_, 1, v_a_109_);
lean_closure_set(v___x_146_, 2, v_m_130_);
lean_closure_set(v___x_146_, 3, v_a_142_);
lean_closure_set(v___x_146_, 4, v_liftedDoBlockResultType_143_);
lean_closure_set(v___x_146_, 5, v_body_72_);
v_catcher_84_ = v___x_146_;
v___y_85_ = v___y_73_;
v___y_86_ = v___y_76_;
v___y_87_ = v___y_77_;
v___y_88_ = v___y_78_;
v___y_89_ = v___y_79_;
v___y_90_ = v___y_80_;
v___y_91_ = v___y_81_;
goto v___jp_83_;
}
else
{
lean_dec_ref(v___x_137_);
lean_dec_ref(v_m_130_);
lean_dec(v_a_109_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_141_;
}
}
}
v___jp_112_:
{
lean_object* v_m_113_; lean_object* v_u_114_; lean_object* v_v_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_m_113_ = lean_ctor_get(v_monadInfo_71_, 0);
lean_inc_ref_n(v_m_113_, 2);
v_u_114_ = lean_ctor_get(v_monadInfo_71_, 1);
lean_inc(v_u_114_);
v_v_115_ = lean_ctor_get(v_monadInfo_71_, 2);
lean_inc(v_v_115_);
lean_dec_ref(v_monadInfo_71_);
v___x_116_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__1);
v___x_117_ = lean_box(0);
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v_v_115_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v_u_114_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v_a_111_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
lean_inc_ref(v___x_120_);
v___x_121_ = l_Lean_mkConst(v___x_116_, v___x_120_);
lean_inc(v_a_109_);
v___x_122_ = l_Lean_mkAppB(v___x_121_, v_a_109_, v_m_113_);
v___x_123_ = lean_box(0);
v___x_124_ = l_Lean_Elab_Term_mkInstMVar(v___x_122_, v___x_123_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v_liftedDoBlockResultType_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref(v___x_124_);
v_liftedDoBlockResultType_126_ = lean_ctor_get(v_lifter_67_, 5);
v___x_127_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___closed__3);
v___x_128_ = l_Lean_mkConst(v___x_127_, v___x_120_);
lean_inc_ref(v_liftedDoBlockResultType_126_);
v___x_129_ = lean_alloc_closure((void*)(l_Lean_mkApp6), 7, 6);
lean_closure_set(v___x_129_, 0, v___x_128_);
lean_closure_set(v___x_129_, 1, v_a_109_);
lean_closure_set(v___x_129_, 2, v_m_113_);
lean_closure_set(v___x_129_, 3, v_a_125_);
lean_closure_set(v___x_129_, 4, v_liftedDoBlockResultType_126_);
lean_closure_set(v___x_129_, 5, v_body_72_);
v_catcher_84_ = v___x_129_;
v___y_85_ = v___y_73_;
v___y_86_ = v___y_76_;
v___y_87_ = v___y_77_;
v___y_88_ = v___y_78_;
v___y_89_ = v___y_79_;
v___y_90_ = v___y_80_;
v___y_91_ = v___y_81_;
goto v___jp_83_;
}
else
{
lean_dec_ref(v___x_120_);
lean_dec_ref(v_m_113_);
lean_dec(v_a_109_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_124_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec(v_a_109_);
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v_monadInfo_71_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
v_a_147_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_110_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_110_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
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
else
{
lean_dec_ref(v_x_75_);
lean_dec_ref(v_body_72_);
lean_dec_ref(v_monadInfo_71_);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_lifter_67_);
return v___x_108_;
}
v___jp_83_:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Elab_Do_ControlLifter_lift(v_lifter_67_, v___f_68_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_a_93_);
lean_dec_ref(v___x_92_);
v___x_94_ = lean_mk_empty_array_with_capacity(v___x_69_);
v___x_95_ = lean_array_push(v___x_94_, v_x_75_);
v___x_96_ = 0;
v___x_97_ = 1;
v___x_98_ = l_Lean_Meta_mkLambdaFVars(v___x_95_, v_a_93_, v___x_96_, v___x_70_, v___x_96_, v___x_70_, v___x_97_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec_ref(v___x_95_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_107_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_103_ = lean_apply_1(v_catcher_84_, v_a_99_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_dec_ref(v_catcher_84_);
return v___x_98_;
}
}
else
{
lean_dec_ref(v_catcher_84_);
lean_dec_ref(v_x_75_);
return v___x_92_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed(lean_object* v_lifter_155_, lean_object* v___f_156_, lean_object* v___x_157_, lean_object* v___x_158_, lean_object* v_monadInfo_159_, lean_object* v_body_160_, lean_object* v___y_161_, lean_object* v_eType_x3f_162_, lean_object* v_x_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
uint8_t v___x_4739__boxed_171_; lean_object* v_res_172_; 
v___x_4739__boxed_171_ = lean_unbox(v___x_158_);
v_res_172_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1(v_lifter_155_, v___f_156_, v___x_157_, v___x_4739__boxed_171_, v_monadInfo_159_, v_body_160_, v___y_161_, v_eType_x3f_162_, v_x_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v_eType_x3f_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___x_157_);
return v_res_172_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_173_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_174_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_175_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("doCatch", 7, 7);
return v___x_176_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_177_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__3);
v___x_178_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_179_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_180_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_181_ = l_Lean_Name_mkStr4(v___x_180_, v___x_179_, v___x_178_, v___x_177_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(lean_object* v_lifter_182_, lean_object* v_body_183_, lean_object* v_catch___184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4);
lean_inc(v_catch___184_);
v___x_194_ = l_Lean_Syntax_isOfKind(v_catch___184_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_dec(v_catch___184_);
lean_dec_ref(v_body_183_);
lean_dec_ref(v_lifter_182_);
v___x_195_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_195_;
}
else
{
lean_object* v_monadInfo_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___y_205_; lean_object* v___y_206_; lean_object* v___y_207_; lean_object* v_eType_x3f_211_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v_monadInfo_196_ = lean_ctor_get(v_a_185_, 0);
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = l_Lean_Syntax_getArg(v_catch___184_, v___x_197_);
v___x_228_ = lean_unsigned_to_nat(2u);
v___x_229_ = l_Lean_Syntax_getArg(v_catch___184_, v___x_228_);
v___x_230_ = l_Lean_Syntax_isNone(v___x_229_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
lean_inc(v___x_229_);
v___x_231_ = l_Lean_Syntax_matchesNull(v___x_229_, v___x_228_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; 
lean_dec(v___x_229_);
lean_dec(v___x_198_);
lean_dec(v_catch___184_);
lean_dec_ref(v_body_183_);
lean_dec_ref(v_lifter_182_);
v___x_232_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_232_;
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = l_Lean_Syntax_getArg(v___x_229_, v___x_197_);
lean_dec(v___x_229_);
v___x_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
v_eType_x3f_211_ = v___x_234_;
v___y_212_ = v_a_185_;
v___y_213_ = v_a_186_;
v___y_214_ = v_a_187_;
v___y_215_ = v_a_188_;
v___y_216_ = v_a_189_;
v___y_217_ = v_a_190_;
v___y_218_ = v_a_191_;
goto v___jp_210_;
}
}
else
{
lean_object* v___x_235_; 
lean_dec(v___x_229_);
v___x_235_ = lean_box(0);
v_eType_x3f_211_ = v___x_235_;
v___y_212_ = v_a_185_;
v___y_213_ = v_a_186_;
v___y_214_ = v_a_187_;
v___y_215_ = v_a_188_;
v___y_216_ = v_a_189_;
v___y_217_ = v_a_190_;
v___y_218_ = v_a_191_;
goto v___jp_210_;
}
v___jp_199_:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = l_Lean_Elab_Term_mkExplicitBinder(v___x_198_, v___y_207_);
v___x_209_ = l_Lean_Elab_Term_elabBinder___redArg(v___x_208_, v___y_203_, v___y_200_, v___y_202_, v___y_204_, v___y_201_, v___y_205_, v___y_206_);
return v___x_209_;
}
v___jp_210_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___x_223_; lean_object* v___f_224_; 
v___x_219_ = lean_unsigned_to_nat(4u);
v___x_220_ = l_Lean_Syntax_getArg(v_catch___184_, v___x_219_);
lean_dec(v_catch___184_);
v___x_221_ = lean_box(v___x_194_);
v___f_222_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__0___boxed), 11, 2);
lean_closure_set(v___f_222_, 0, v___x_220_);
lean_closure_set(v___f_222_, 1, v___x_221_);
v___x_223_ = lean_box(v___x_194_);
lean_inc(v_eType_x3f_211_);
lean_inc_ref(v___y_212_);
lean_inc_ref(v_monadInfo_196_);
v___f_224_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___lam__1___boxed), 16, 8);
lean_closure_set(v___f_224_, 0, v_lifter_182_);
lean_closure_set(v___f_224_, 1, v___f_222_);
lean_closure_set(v___f_224_, 2, v___x_197_);
lean_closure_set(v___f_224_, 3, v___x_223_);
lean_closure_set(v___f_224_, 4, v_monadInfo_196_);
lean_closure_set(v___f_224_, 5, v_body_183_);
lean_closure_set(v___f_224_, 6, v___y_212_);
lean_closure_set(v___f_224_, 7, v_eType_x3f_211_);
if (lean_obj_tag(v_eType_x3f_211_) == 0)
{
uint8_t v___x_225_; lean_object* v___x_226_; 
v___x_225_ = 0;
v___x_226_ = l_Lean_mkHole(v___x_198_, v___x_225_);
v___y_200_ = v___y_213_;
v___y_201_ = v___y_216_;
v___y_202_ = v___y_214_;
v___y_203_ = v___f_224_;
v___y_204_ = v___y_215_;
v___y_205_ = v___y_217_;
v___y_206_ = v___y_218_;
v___y_207_ = v___x_226_;
goto v___jp_199_;
}
else
{
lean_object* v_val_227_; 
v_val_227_ = lean_ctor_get(v_eType_x3f_211_, 0);
lean_inc(v_val_227_);
lean_dec_ref(v_eType_x3f_211_);
v___y_200_ = v___y_213_;
v___y_201_ = v___y_216_;
v___y_202_ = v___y_214_;
v___y_203_ = v___f_224_;
v___y_204_ = v___y_215_;
v___y_205_ = v___y_217_;
v___y_206_ = v___y_218_;
v___y_207_ = v_val_227_;
goto v___jp_199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___boxed(lean_object* v_lifter_236_, lean_object* v_body_237_, lean_object* v_catch___238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_lifter_236_, v_body_237_, v_catch___238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec_ref(v_a_239_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0(lean_object* v_trySeq_248_, uint8_t v___x_249_, lean_object* v_cont_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lean_Elab_Do_elabDoSeq(v_trySeq_248_, v_cont_250_, v___x_249_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___lam__0___boxed(lean_object* v_trySeq_260_, lean_object* v___x_261_, lean_object* v_cont_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
uint8_t v___x_15858__boxed_271_; lean_object* v_res_272_; 
v___x_15858__boxed_271_ = lean_unbox(v___x_261_);
v_res_272_ = l_Lean_Elab_Do_elabDoTry___lam__0(v_trySeq_260_, v___x_15858__boxed_271_, v_cont_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_272_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_273_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__0);
v___x_275_ = l_Lean_Name_mkStr1(v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1(lean_object* v_as_276_, size_t v_i_277_, size_t v_stop_278_, lean_object* v_b_279_){
_start:
{
lean_object* v___y_281_; uint8_t v___x_285_; 
v___x_285_ = lean_usize_dec_eq(v_i_277_, v_stop_278_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_286_ = lean_array_uget_borrowed(v_as_276_, v_i_277_);
v___x_287_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4);
lean_inc(v___x_286_);
v___x_288_ = l_Lean_Syntax_isOfKind(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
v___y_281_ = v_b_279_;
goto v___jp_280_;
}
else
{
lean_object* v___x_289_; lean_object* v_x_290_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_289_ = lean_unsigned_to_nat(1u);
v_x_290_ = l_Lean_Syntax_getArg(v___x_286_, v___x_289_);
v___x_293_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___closed__1);
lean_inc(v_x_290_);
v___x_294_ = l_Lean_Syntax_isOfKind(v_x_290_, v___x_293_);
if (v___x_294_ == 0)
{
lean_dec(v_x_290_);
v___y_281_ = v_b_279_;
goto v___jp_280_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = lean_unsigned_to_nat(2u);
v___x_296_ = l_Lean_Syntax_getArg(v___x_286_, v___x_295_);
v___x_297_ = l_Lean_Syntax_isNone(v___x_296_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
v___x_298_ = l_Lean_Syntax_matchesNull(v___x_296_, v___x_295_);
if (v___x_298_ == 0)
{
lean_dec(v_x_290_);
v___y_281_ = v_b_279_;
goto v___jp_280_;
}
else
{
goto v___jp_291_;
}
}
else
{
lean_dec(v___x_296_);
goto v___jp_291_;
}
}
v___jp_291_:
{
lean_object* v___x_292_; 
v___x_292_ = lean_array_push(v_b_279_, v_x_290_);
v___y_281_ = v___x_292_;
goto v___jp_280_;
}
}
}
else
{
return v_b_279_;
}
v___jp_280_:
{
size_t v___x_282_; size_t v___x_283_; 
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_add(v_i_277_, v___x_282_);
v_i_277_ = v___x_283_;
v_b_279_ = v___y_281_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1___boxed(lean_object* v_as_299_, lean_object* v_i_300_, lean_object* v_stop_301_, lean_object* v_b_302_){
_start:
{
size_t v_i_boxed_303_; size_t v_stop_boxed_304_; lean_object* v_res_305_; 
v_i_boxed_303_ = lean_unbox_usize(v_i_300_);
lean_dec(v_i_300_);
v_stop_boxed_304_ = lean_unbox_usize(v_stop_301_);
lean_dec(v_stop_301_);
v_res_305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1(v_as_299_, v_i_boxed_303_, v_stop_boxed_304_, v_b_302_);
lean_dec_ref(v_as_299_);
return v_res_305_;
}
}
static lean_object* _init_l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = lean_mk_empty_array_with_capacity(v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1(lean_object* v_as_308_, lean_object* v_start_309_, lean_object* v_stop_310_){
_start:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_obj_once(&l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0, &l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0_once, _init_l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___closed__0);
v___x_312_ = lean_nat_dec_lt(v_start_309_, v_stop_310_);
if (v___x_312_ == 0)
{
return v___x_311_;
}
else
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = lean_array_get_size(v_as_308_);
v___x_314_ = lean_nat_dec_le(v_stop_310_, v___x_313_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = lean_nat_dec_lt(v_start_309_, v___x_313_);
if (v___x_315_ == 0)
{
return v___x_311_;
}
else
{
size_t v___x_316_; size_t v___x_317_; lean_object* v___x_318_; 
v___x_316_ = lean_usize_of_nat(v_start_309_);
v___x_317_ = lean_usize_of_nat(v___x_313_);
v___x_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1(v_as_308_, v___x_316_, v___x_317_, v___x_311_);
return v___x_318_;
}
}
else
{
size_t v___x_319_; size_t v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_usize_of_nat(v_start_309_);
v___x_320_ = lean_usize_of_nat(v_stop_310_);
v___x_321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1_spec__1(v_as_308_, v___x_319_, v___x_320_, v___x_311_);
return v___x_321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1___boxed(lean_object* v_as_322_, lean_object* v_start_323_, lean_object* v_stop_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1(v_as_322_, v_start_323_, v_stop_324_);
lean_dec(v_stop_324_);
lean_dec(v_start_323_);
lean_dec_ref(v_as_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(lean_object* v_msgData_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v___x_332_; lean_object* v_env_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_mctx_336_; lean_object* v_lctx_337_; lean_object* v_options_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_332_ = lean_st_ref_get(v___y_330_);
v_env_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc_ref(v_env_333_);
lean_dec(v___x_332_);
v___x_334_ = lean_st_ref_get(v___y_330_);
lean_dec(v___x_334_);
v___x_335_ = lean_st_ref_get(v___y_328_);
v_mctx_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc_ref(v_mctx_336_);
lean_dec(v___x_335_);
v_lctx_337_ = lean_ctor_get(v___y_327_, 2);
v_options_338_ = lean_ctor_get(v___y_329_, 2);
lean_inc_ref(v_options_338_);
lean_inc_ref(v_lctx_337_);
v___x_339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_339_, 0, v_env_333_);
lean_ctor_set(v___x_339_, 1, v_mctx_336_);
lean_ctor_set(v___x_339_, 2, v_lctx_337_);
lean_ctor_set(v___x_339_, 3, v_options_338_);
v___x_340_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_msgData_326_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4___boxed(lean_object* v_msgData_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(v_msgData_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(lean_object* v_msg_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_ref_355_; lean_object* v___x_356_; lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_365_; 
v_ref_355_ = lean_ctor_get(v___y_352_, 5);
v___x_356_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3_spec__4(v_msg_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_365_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_365_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_363_; 
lean_inc(v_ref_355_);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_ref_355_);
lean_ctor_set(v___x_361_, 1, v_a_357_);
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 1);
lean_ctor_set(v___x_359_, 0, v___x_361_);
v___x_363_ = v___x_359_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg___boxed(lean_object* v_msg_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v_msg_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
return v_res_372_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_mk_string_unchecked("doCatchMatch", 12, 12);
return v___x_373_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_374_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__0);
v___x_375_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_376_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_377_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_378_ = l_Lean_Name_mkStr4(v___x_377_, v___x_376_, v___x_375_, v___x_374_);
return v___x_378_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_mk_string_unchecked("catch", 5, 5);
return v___x_379_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3(void){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_380_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3);
v___x_382_ = l_String_toRawSubstring_x27(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__3);
v___x_384_ = l_Lean_Name_mkStr1(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6(void){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_385_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__6);
v___x_387_ = l_Lean_Name_mkStr1(v___x_386_);
return v___x_387_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8(void){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = l_Array_mkArray0(lean_box(0));
return v___x_388_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9(void){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_mk_string_unchecked("=>", 2, 2);
return v___x_389_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10(void){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = lean_mk_string_unchecked("doSeqIndent", 11, 11);
return v___x_390_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_391_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__10);
v___x_392_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_393_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_394_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_395_ = l_Lean_Name_mkStr4(v___x_394_, v___x_393_, v___x_392_, v___x_391_);
return v___x_395_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = lean_mk_string_unchecked("doSeqItem", 9, 9);
return v___x_396_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_397_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__12);
v___x_398_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_399_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_400_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_401_ = l_Lean_Name_mkStr4(v___x_400_, v___x_399_, v___x_398_, v___x_397_);
return v___x_401_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14(void){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = lean_mk_string_unchecked("doMatch", 7, 7);
return v___x_402_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_403_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__14);
v___x_404_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_405_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_406_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_407_ = l_Lean_Name_mkStr4(v___x_406_, v___x_405_, v___x_404_, v___x_403_);
return v___x_407_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16(void){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_mk_string_unchecked("match", 5, 5);
return v___x_408_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_mk_string_unchecked("matchDiscr", 10, 10);
return v___x_409_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_410_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__17);
v___x_411_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_412_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_413_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_414_ = l_Lean_Name_mkStr4(v___x_413_, v___x_412_, v___x_411_, v___x_410_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19(void){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = lean_mk_string_unchecked("with", 4, 4);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2(lean_object* v_a_416_, lean_object* v_as_417_, size_t v_i_418_, size_t v_stop_419_, lean_object* v_b_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v___y_430_; uint8_t v___x_435_; 
v___x_435_ = lean_usize_dec_eq(v_i_418_, v_stop_419_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_436_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__1);
v___x_437_ = lean_array_uget_borrowed(v_as_417_, v_i_418_);
lean_inc(v___x_437_);
v___x_438_ = l_Lean_Syntax_isOfKind(v___x_437_, v___x_436_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_inc(v___x_437_);
lean_inc_ref(v_a_416_);
v___x_439_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_a_416_, v_b_420_, v___x_437_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
v___y_430_ = v___x_439_;
goto v___jp_429_;
}
else
{
lean_object* v_ref_440_; lean_object* v_quotContext_441_; lean_object* v_currMacroScope_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_ref_440_ = lean_ctor_get(v___y_426_, 5);
v_quotContext_441_ = lean_ctor_get(v___y_426_, 10);
v_currMacroScope_442_ = lean_ctor_get(v___y_426_, 11);
v___x_443_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__4);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = l_Lean_Syntax_getArg(v___x_437_, v___x_444_);
v___x_446_ = l_Lean_SourceInfo_fromRef(v_ref_440_, v___x_435_);
v___x_447_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__2);
lean_inc_n(v___x_446_, 12);
v___x_448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___x_449_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__4);
v___x_450_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__5);
lean_inc(v_currMacroScope_442_);
lean_inc(v_quotContext_441_);
v___x_451_ = l_Lean_addMacroScope(v_quotContext_441_, v___x_450_, v_currMacroScope_442_);
v___x_452_ = lean_box(0);
v___x_453_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_453_, 0, v___x_446_);
lean_ctor_set(v___x_453_, 1, v___x_449_);
lean_ctor_set(v___x_453_, 2, v___x_451_);
lean_ctor_set(v___x_453_, 3, v___x_452_);
v___x_454_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__7);
v___x_455_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__8);
v___x_456_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_456_, 0, v___x_446_);
lean_ctor_set(v___x_456_, 1, v___x_454_);
lean_ctor_set(v___x_456_, 2, v___x_455_);
v___x_457_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__9);
v___x_458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_446_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__11);
v___x_460_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__13);
v___x_461_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__15);
v___x_462_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__16);
v___x_463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_446_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__18);
lean_inc_ref(v___x_453_);
lean_inc_ref_n(v___x_456_, 5);
v___x_465_ = l_Lean_Syntax_node2(v___x_446_, v___x_464_, v___x_456_, v___x_453_);
v___x_466_ = l_Lean_Syntax_node1(v___x_446_, v___x_454_, v___x_465_);
v___x_467_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___closed__19);
v___x_468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_446_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = l_Lean_Syntax_node7(v___x_446_, v___x_461_, v___x_463_, v___x_456_, v___x_456_, v___x_456_, v___x_466_, v___x_468_, v___x_445_);
v___x_470_ = l_Lean_Syntax_node2(v___x_446_, v___x_460_, v___x_469_, v___x_456_);
v___x_471_ = l_Lean_Syntax_node1(v___x_446_, v___x_454_, v___x_470_);
v___x_472_ = l_Lean_Syntax_node1(v___x_446_, v___x_459_, v___x_471_);
v___x_473_ = l_Lean_Syntax_node5(v___x_446_, v___x_443_, v___x_448_, v___x_453_, v___x_456_, v___x_458_, v___x_472_);
lean_inc_ref(v_a_416_);
v___x_474_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch(v_a_416_, v_b_420_, v___x_473_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
v___y_430_ = v___x_474_;
goto v___jp_429_;
}
}
else
{
lean_object* v___x_475_; 
lean_dec_ref(v_a_416_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v_b_420_);
return v___x_475_;
}
v___jp_429_:
{
if (lean_obj_tag(v___y_430_) == 0)
{
lean_object* v_a_431_; size_t v___x_432_; size_t v___x_433_; 
v_a_431_ = lean_ctor_get(v___y_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref(v___y_430_);
v___x_432_ = ((size_t)1ULL);
v___x_433_ = lean_usize_add(v_i_418_, v___x_432_);
v_i_418_ = v___x_433_;
v_b_420_ = v_a_431_;
goto _start;
}
else
{
lean_dec_ref(v_a_416_);
return v___y_430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2___boxed(lean_object* v_a_476_, lean_object* v_as_477_, lean_object* v_i_478_, lean_object* v_stop_479_, lean_object* v_b_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
size_t v_i_boxed_489_; size_t v_stop_boxed_490_; lean_object* v_res_491_; 
v_i_boxed_489_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_stop_boxed_490_ = lean_unbox_usize(v_stop_479_);
lean_dec(v_stop_479_);
v_res_491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2(v_a_476_, v_as_477_, v_i_boxed_489_, v_stop_boxed_490_, v_b_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v_as_477_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(size_t v_sz_492_, size_t v_i_493_, lean_object* v_bs_494_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = lean_usize_dec_lt(v_i_493_, v_sz_492_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v_bs_494_);
return v___x_496_;
}
else
{
lean_object* v_v_497_; lean_object* v___x_498_; lean_object* v_bs_x27_499_; size_t v___x_500_; size_t v___x_501_; lean_object* v___x_502_; 
v_v_497_ = lean_array_uget(v_bs_494_, v_i_493_);
v___x_498_ = lean_unsigned_to_nat(0u);
v_bs_x27_499_ = lean_array_uset(v_bs_494_, v_i_493_, v___x_498_);
v___x_500_ = ((size_t)1ULL);
v___x_501_ = lean_usize_add(v_i_493_, v___x_500_);
v___x_502_ = lean_array_uset(v_bs_x27_499_, v_i_493_, v_v_497_);
v_i_493_ = v___x_501_;
v_bs_494_ = v___x_502_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0___boxed(lean_object* v_sz_504_, lean_object* v_i_505_, lean_object* v_bs_506_){
_start:
{
size_t v_sz_boxed_507_; size_t v_i_boxed_508_; lean_object* v_res_509_; 
v_sz_boxed_507_ = lean_unbox_usize(v_sz_504_);
lean_dec(v_sz_504_);
v_i_boxed_508_ = lean_unbox_usize(v_i_505_);
lean_dec(v_i_505_);
v_res_509_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(v_sz_boxed_507_, v_i_boxed_508_, v_bs_506_);
return v_res_509_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__0(void){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = lean_mk_string_unchecked("doTry", 5, 5);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__1(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__0, &l_Lean_Elab_Do_elabDoTry___closed__0_once, _init_l_Lean_Elab_Do_elabDoTry___closed__0);
v___x_512_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_513_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_514_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_515_ = l_Lean_Name_mkStr4(v___x_514_, v___x_513_, v___x_512_, v___x_511_);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__2(void){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_mk_string_unchecked("β", 2, 1);
return v___x_516_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__3(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__2, &l_Lean_Elab_Do_elabDoTry___closed__2_once, _init_l_Lean_Elab_Do_elabDoTry___closed__2);
v___x_518_ = l_Lean_Name_mkStr1(v___x_517_);
return v___x_518_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__4(void){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = lean_mk_string_unchecked("MonadFinally", 12, 12);
return v___x_519_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__5(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__4, &l_Lean_Elab_Do_elabDoTry___closed__4_once, _init_l_Lean_Elab_Do_elabDoTry___closed__4);
v___x_521_ = l_Lean_Name_mkStr1(v___x_520_);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__6(void){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_mk_string_unchecked("Functor", 7, 7);
return v___x_522_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__7(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__6, &l_Lean_Elab_Do_elabDoTry___closed__6_once, _init_l_Lean_Elab_Do_elabDoTry___closed__6);
v___x_524_ = l_Lean_Name_mkStr1(v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__8(void){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_mk_string_unchecked("tryFinally", 10, 10);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__9(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__8, &l_Lean_Elab_Do_elabDoTry___closed__8_once, _init_l_Lean_Elab_Do_elabDoTry___closed__8);
v___x_527_ = l_Lean_Name_mkStr1(v___x_526_);
return v___x_527_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__10(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_mk_string_unchecked("Invalid `try`. There must be a `catch` or `finally`.", 52, 52);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__11(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__10, &l_Lean_Elab_Do_elabDoTry___closed__10_once, _init_l_Lean_Elab_Do_elabDoTry___closed__10);
v___x_530_ = l_Lean_stringToMessageData(v___x_529_);
return v___x_530_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__12(void){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_mk_string_unchecked("doFinally", 9, 9);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoTry___closed__13(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__12, &l_Lean_Elab_Do_elabDoTry___closed__12_once, _init_l_Lean_Elab_Do_elabDoTry___closed__12);
v___x_533_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__2);
v___x_534_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__1);
v___x_535_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_536_ = l_Lean_Name_mkStr4(v___x_535_, v___x_534_, v___x_533_, v___x_532_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry(lean_object* v_stx_537_, lean_object* v_dec_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v___y_548_; lean_object* v_body_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; 
v___x_568_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__1, &l_Lean_Elab_Do_elabDoTry___closed__1_once, _init_l_Lean_Elab_Do_elabDoTry___closed__1);
lean_inc(v_stx_537_);
v___x_569_ = l_Lean_Syntax_isOfKind(v_stx_537_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_634_; 
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v___x_634_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_634_;
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; size_t v_sz_638_; size_t v___x_639_; lean_object* v___x_640_; 
v___x_635_ = lean_unsigned_to_nat(2u);
v___x_636_ = l_Lean_Syntax_getArg(v_stx_537_, v___x_635_);
v___x_637_ = l_Lean_Syntax_getArgs(v___x_636_);
lean_dec(v___x_636_);
v_sz_638_ = lean_array_size(v___x_637_);
v___x_639_ = ((size_t)0ULL);
v___x_640_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoTry_spec__0(v_sz_638_, v___x_639_, v___x_637_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v___x_641_; 
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v___x_641_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_641_;
}
else
{
lean_object* v_val_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_748_; 
v_val_642_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_748_ == 0)
{
v___x_644_ = v___x_640_;
v_isShared_645_ = v_isSharedCheck_748_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_val_642_);
lean_dec(v___x_640_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_748_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; uint8_t v___y_698_; lean_object* v___x_709_; lean_object* v_trySeq_710_; lean_object* v___x_711_; lean_object* v___f_712_; lean_object* v_finSeq_x3f_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_709_ = lean_unsigned_to_nat(1u);
v_trySeq_710_ = l_Lean_Syntax_getArg(v_stx_537_, v___x_709_);
v___x_711_ = lean_box(v___x_569_);
v___f_712_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoTry___lam__0___boxed), 11, 2);
lean_closure_set(v___f_712_, 0, v_trySeq_710_);
lean_closure_set(v___f_712_, 1, v___x_711_);
v___x_734_ = lean_unsigned_to_nat(3u);
v___x_735_ = l_Lean_Syntax_getArg(v_stx_537_, v___x_734_);
v___x_736_ = l_Lean_Syntax_isNone(v___x_735_);
if (v___x_736_ == 0)
{
uint8_t v___x_737_; 
lean_inc(v___x_735_);
v___x_737_ = l_Lean_Syntax_matchesNull(v___x_735_, v___x_709_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
lean_dec(v___x_735_);
lean_dec_ref(v___f_712_);
lean_del_object(v___x_644_);
lean_dec(v_val_642_);
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v___x_738_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_738_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = l_Lean_Syntax_getArg(v___x_735_, v___x_646_);
lean_dec(v___x_735_);
v___x_740_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__13, &l_Lean_Elab_Do_elabDoTry___closed__13_once, _init_l_Lean_Elab_Do_elabDoTry___closed__13);
lean_inc(v___x_739_);
v___x_741_ = l_Lean_Syntax_isOfKind(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v___x_739_);
lean_dec_ref(v___f_712_);
lean_del_object(v___x_644_);
lean_dec(v_val_642_);
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v___x_742_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch_spec__0___redArg();
return v___x_742_;
}
else
{
lean_object* v_finSeq_x3f_743_; lean_object* v___x_745_; 
v_finSeq_x3f_743_ = l_Lean_Syntax_getArg(v___x_739_, v___x_709_);
lean_dec(v___x_739_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v_finSeq_x3f_743_);
v___x_745_ = v___x_644_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_finSeq_x3f_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
v_finSeq_x3f_714_ = v___x_745_;
v___y_715_ = v_a_539_;
v___y_716_ = v_a_540_;
v___y_717_ = v_a_541_;
v___y_718_ = v_a_542_;
v___y_719_ = v_a_543_;
v___y_720_ = v_a_544_;
v___y_721_ = v_a_545_;
goto v___jp_713_;
}
}
}
}
else
{
lean_object* v___x_747_; 
lean_dec(v___x_735_);
lean_del_object(v___x_644_);
v___x_747_ = lean_box(0);
v_finSeq_x3f_714_ = v___x_747_;
v___y_715_ = v_a_539_;
v___y_716_ = v_a_540_;
v___y_717_ = v_a_541_;
v___y_718_ = v_a_542_;
v___y_719_ = v_a_543_;
v___y_720_ = v_a_544_;
v___y_721_ = v_a_545_;
goto v___jp_713_;
}
v___jp_647_:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_Elab_Do_inferControlInfoElem(v_stx_537_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref(v___x_658_);
v___x_660_ = l_Lean_Elab_Do_ControlLifter_ofCont(v_a_659_, v_dec_538_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v_a_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc_n(v_a_661_, 2);
lean_dec_ref(v___x_660_);
v___x_662_ = l_Lean_Elab_Do_ControlLifter_lift(v_a_661_, v___y_648_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v_monadInfo_664_; uint8_t v___x_665_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
v_monadInfo_664_ = lean_ctor_get(v___y_651_, 0);
v___x_665_ = lean_nat_dec_lt(v___x_646_, v___y_650_);
if (v___x_665_ == 0)
{
lean_dec(v_a_663_);
lean_dec(v___y_650_);
lean_dec(v_val_642_);
v___y_571_ = v___y_657_;
v___y_572_ = v_monadInfo_664_;
v___y_573_ = v___y_653_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_651_;
v___y_576_ = v___y_654_;
v___y_577_ = v_a_661_;
v___y_578_ = v___y_649_;
v___y_579_ = v___y_655_;
v___y_580_ = v___y_652_;
v___y_581_ = v___x_662_;
goto v___jp_570_;
}
else
{
uint8_t v___x_666_; 
v___x_666_ = lean_nat_dec_le(v___y_650_, v___y_650_);
if (v___x_666_ == 0)
{
if (v___x_665_ == 0)
{
lean_dec(v_a_663_);
lean_dec(v___y_650_);
lean_dec(v_val_642_);
v___y_571_ = v___y_657_;
v___y_572_ = v_monadInfo_664_;
v___y_573_ = v___y_653_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_651_;
v___y_576_ = v___y_654_;
v___y_577_ = v_a_661_;
v___y_578_ = v___y_649_;
v___y_579_ = v___y_655_;
v___y_580_ = v___y_652_;
v___y_581_ = v___x_662_;
goto v___jp_570_;
}
else
{
size_t v___x_667_; lean_object* v___x_668_; 
lean_dec_ref(v___x_662_);
v___x_667_ = lean_usize_of_nat(v___y_650_);
lean_dec(v___y_650_);
lean_inc(v_a_661_);
v___x_668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2(v_a_661_, v_val_642_, v___x_639_, v___x_667_, v_a_663_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v_val_642_);
v___y_571_ = v___y_657_;
v___y_572_ = v_monadInfo_664_;
v___y_573_ = v___y_653_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_651_;
v___y_576_ = v___y_654_;
v___y_577_ = v_a_661_;
v___y_578_ = v___y_649_;
v___y_579_ = v___y_655_;
v___y_580_ = v___y_652_;
v___y_581_ = v___x_668_;
goto v___jp_570_;
}
}
else
{
size_t v___x_669_; lean_object* v___x_670_; 
lean_dec_ref(v___x_662_);
v___x_669_ = lean_usize_of_nat(v___y_650_);
lean_dec(v___y_650_);
lean_inc(v_a_661_);
v___x_670_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoTry_spec__2(v_a_661_, v_val_642_, v___x_639_, v___x_669_, v_a_663_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v_val_642_);
v___y_571_ = v___y_657_;
v___y_572_ = v_monadInfo_664_;
v___y_573_ = v___y_653_;
v___y_574_ = v___y_656_;
v___y_575_ = v___y_651_;
v___y_576_ = v___y_654_;
v___y_577_ = v_a_661_;
v___y_578_ = v___y_649_;
v___y_579_ = v___y_655_;
v___y_580_ = v___y_652_;
v___y_581_ = v___x_670_;
goto v___jp_570_;
}
}
}
else
{
lean_dec(v_a_661_);
lean_dec(v___y_650_);
lean_dec(v___y_649_);
lean_dec(v_val_642_);
return v___x_662_;
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_dec(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v_val_642_);
v_a_671_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_660_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_660_);
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
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v_val_642_);
lean_dec_ref(v_dec_538_);
v_a_679_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_658_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_658_);
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
v___jp_687_:
{
if (v___y_698_ == 0)
{
v___y_648_ = v___y_690_;
v___y_649_ = v___y_693_;
v___y_650_ = v___y_695_;
v___y_651_ = v___y_694_;
v___y_652_ = v___y_697_;
v___y_653_ = v___y_689_;
v___y_654_ = v___y_692_;
v___y_655_ = v___y_688_;
v___y_656_ = v___y_696_;
v___y_657_ = v___y_691_;
goto v___jp_647_;
}
else
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v___y_695_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_690_);
lean_dec(v_val_642_);
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v___x_699_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__11, &l_Lean_Elab_Do_elabDoTry___closed__11_once, _init_l_Lean_Elab_Do_elabDoTry___closed__11);
v___x_700_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v___x_699_, v___y_692_, v___y_688_, v___y_696_, v___y_691_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
v___jp_713_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = lean_array_get_size(v_val_642_);
v___x_723_ = l_Array_filterMapM___at___00Lean_Elab_Do_elabDoTry_spec__1(v_val_642_, v___x_646_, v___x_722_);
v___x_724_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v___x_723_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec_ref(v___x_723_);
if (lean_obj_tag(v___x_724_) == 0)
{
uint8_t v___x_725_; 
lean_dec_ref(v___x_724_);
v___x_725_ = lean_nat_dec_eq(v___x_722_, v___x_646_);
if (v___x_725_ == 0)
{
v___y_688_ = v___y_719_;
v___y_689_ = v___y_717_;
v___y_690_ = v___f_712_;
v___y_691_ = v___y_721_;
v___y_692_ = v___y_718_;
v___y_693_ = v_finSeq_x3f_714_;
v___y_694_ = v___y_715_;
v___y_695_ = v___x_722_;
v___y_696_ = v___y_720_;
v___y_697_ = v___y_716_;
v___y_698_ = v___x_725_;
goto v___jp_687_;
}
else
{
if (lean_obj_tag(v_finSeq_x3f_714_) == 0)
{
v___y_688_ = v___y_719_;
v___y_689_ = v___y_717_;
v___y_690_ = v___f_712_;
v___y_691_ = v___y_721_;
v___y_692_ = v___y_718_;
v___y_693_ = v_finSeq_x3f_714_;
v___y_694_ = v___y_715_;
v___y_695_ = v___x_722_;
v___y_696_ = v___y_720_;
v___y_697_ = v___y_716_;
v___y_698_ = v___x_725_;
goto v___jp_687_;
}
else
{
v___y_648_ = v___f_712_;
v___y_649_ = v_finSeq_x3f_714_;
v___y_650_ = v___x_722_;
v___y_651_ = v___y_715_;
v___y_652_ = v___y_716_;
v___y_653_ = v___y_717_;
v___y_654_ = v___y_718_;
v___y_655_ = v___y_719_;
v___y_656_ = v___y_720_;
v___y_657_ = v___y_721_;
goto v___jp_647_;
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec(v_finSeq_x3f_714_);
lean_dec_ref(v___f_712_);
lean_dec(v_val_642_);
lean_dec_ref(v_dec_538_);
lean_dec(v_stx_537_);
v_a_726_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_724_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_724_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
}
}
v___jp_547_:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Elab_Do_ControlLifter_restoreCont(v___y_548_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref(v___x_557_);
v___x_559_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v_a_558_, v_body_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
return v___x_559_;
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v_body_549_);
v_a_560_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_557_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_557_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
v___jp_570_:
{
if (lean_obj_tag(v___y_581_) == 0)
{
if (lean_obj_tag(v___y_578_) == 0)
{
lean_object* v_a_582_; 
v_a_582_ = lean_ctor_get(v___y_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref(v___y_581_);
v___y_548_ = v___y_577_;
v_body_549_ = v_a_582_;
v___y_550_ = v___y_575_;
v___y_551_ = v___y_580_;
v___y_552_ = v___y_573_;
v___y_553_ = v___y_576_;
v___y_554_ = v___y_579_;
v___y_555_ = v___y_574_;
v___y_556_ = v___y_571_;
goto v___jp_547_;
}
else
{
lean_object* v_a_583_; lean_object* v_val_584_; lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_587_; 
v_a_583_ = lean_ctor_get(v___y_581_, 0);
lean_inc(v_a_583_);
lean_dec_ref(v___y_581_);
v_val_584_ = lean_ctor_get(v___y_578_, 0);
lean_inc(v_val_584_);
lean_dec_ref(v___y_578_);
v___x_585_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__3, &l_Lean_Elab_Do_elabDoTry___closed__3_once, _init_l_Lean_Elab_Do_elabDoTry___closed__3);
v___x_586_ = 0;
v___x_587_ = l_Lean_Elab_Do_mkFreshResultType___redArg(v___x_585_, v___x_586_, v___y_575_, v___y_576_, v___y_579_, v___y_574_, v___y_571_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref(v___x_587_);
v___x_589_ = l_Lean_Expr_mvarId_x21(v_a_588_);
lean_inc(v_val_584_);
v___x_590_ = l_Lean_Elab_Term_registerMVarErrorHoleInfo___redArg(v___x_589_, v_val_584_, v___y_573_, v___y_571_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v___x_591_; 
lean_dec_ref(v___x_590_);
lean_inc(v_a_588_);
v___x_591_ = l_Lean_Elab_Do_DoElemCont_mkPure___redArg(v_a_588_, v___y_574_, v___y_571_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref(v___x_591_);
v___x_593_ = lean_box(v___x_569_);
v___x_594_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_594_, 0, v_val_584_);
lean_closure_set(v___x_594_, 1, v_a_592_);
lean_closure_set(v___x_594_, 2, v___x_593_);
lean_inc(v_a_588_);
v___x_595_ = l_Lean_Elab_Do_enterFinally(v_a_588_, v___x_594_, v___y_575_, v___y_580_, v___y_573_, v___y_576_, v___y_579_, v___y_574_, v___y_571_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v_m_597_; lean_object* v_u_598_; lean_object* v_v_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref(v___x_595_);
v_m_597_ = lean_ctor_get(v___y_572_, 0);
v_u_598_ = lean_ctor_get(v___y_572_, 1);
v_v_599_ = lean_ctor_get(v___y_572_, 2);
v___x_600_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__5, &l_Lean_Elab_Do_elabDoTry___closed__5_once, _init_l_Lean_Elab_Do_elabDoTry___closed__5);
v___x_601_ = lean_box(0);
lean_inc(v_v_599_);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v_v_599_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
lean_inc(v_u_598_);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v_u_598_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
lean_inc_ref(v___x_603_);
v___x_604_ = l_Lean_mkConst(v___x_600_, v___x_603_);
lean_inc_ref(v_m_597_);
v___x_605_ = l_Lean_Expr_app___override(v___x_604_, v_m_597_);
v___x_606_ = lean_box(0);
v___x_607_ = l_Lean_Elab_Term_mkInstMVar(v___x_605_, v___x_606_, v___y_580_, v___y_573_, v___y_576_, v___y_579_, v___y_574_, v___y_571_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref(v___x_607_);
v___x_609_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__7, &l_Lean_Elab_Do_elabDoTry___closed__7_once, _init_l_Lean_Elab_Do_elabDoTry___closed__7);
lean_inc_ref(v___x_603_);
v___x_610_ = l_Lean_mkConst(v___x_609_, v___x_603_);
lean_inc_ref(v_m_597_);
v___x_611_ = l_Lean_Expr_app___override(v___x_610_, v_m_597_);
v___x_612_ = l_Lean_Elab_Term_mkInstMVar(v___x_611_, v___x_606_, v___y_580_, v___y_573_, v___y_576_, v___y_579_, v___y_574_, v___y_571_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v_liftedDoBlockResultType_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref(v___x_612_);
v_liftedDoBlockResultType_614_ = lean_ctor_get(v___y_577_, 5);
v___x_615_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__9, &l_Lean_Elab_Do_elabDoTry___closed__9_once, _init_l_Lean_Elab_Do_elabDoTry___closed__9);
v___x_616_ = l_Lean_mkConst(v___x_615_, v___x_603_);
lean_inc_ref(v_liftedDoBlockResultType_614_);
lean_inc_ref(v_m_597_);
v___x_617_ = l_Lean_mkApp7(v___x_616_, v_m_597_, v_liftedDoBlockResultType_614_, v_a_588_, v_a_608_, v_a_613_, v_a_583_, v_a_596_);
v___y_548_ = v___y_577_;
v_body_549_ = v___x_617_;
v___y_550_ = v___y_575_;
v___y_551_ = v___y_580_;
v___y_552_ = v___y_573_;
v___y_553_ = v___y_576_;
v___y_554_ = v___y_579_;
v___y_555_ = v___y_574_;
v___y_556_ = v___y_571_;
goto v___jp_547_;
}
else
{
lean_dec(v_a_608_);
lean_dec_ref(v___x_603_);
lean_dec(v_a_596_);
lean_dec(v_a_588_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
return v___x_612_;
}
}
else
{
lean_dec_ref(v___x_603_);
lean_dec(v_a_596_);
lean_dec(v_a_588_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
return v___x_607_;
}
}
else
{
lean_dec(v_a_588_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
return v___x_595_;
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec(v_a_588_);
lean_dec(v_val_584_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
v_a_618_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_591_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_591_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_588_);
lean_dec(v_val_584_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
v_a_626_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_590_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_590_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_dec(v_val_584_);
lean_dec(v_a_583_);
lean_dec_ref(v___y_577_);
return v___x_587_;
}
}
}
else
{
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v___y_581_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoTry___boxed(lean_object* v_stx_749_, lean_object* v_dec_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_Elab_Do_elabDoTry(v_stx_749_, v_dec_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
lean_dec_ref(v_a_751_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(lean_object* v_00_u03b1_760_, lean_object* v_msg_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___redArg(v_msg_761_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3___boxed(lean_object* v_00_u03b1_771_, lean_object* v_msg_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoTry_spec__3(v_00_u03b1_771_, v_msg_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec_ref(v___y_773_);
return v_res_781_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0(void){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_782_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1(void){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_783_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2(void){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = lean_mk_string_unchecked("elabDoTry", 9, 9);
return v___x_784_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_785_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__2);
v___x_786_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__1);
v___x_787_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__0);
v___x_788_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoCatch___closed__0);
v___x_789_ = l_Lean_Name_mkStr4(v___x_788_, v___x_787_, v___x_786_, v___x_785_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1(){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_791_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_792_ = lean_obj_once(&l_Lean_Elab_Do_elabDoTry___closed__1, &l_Lean_Elab_Do_elabDoTry___closed__1_once, _init_l_Lean_Elab_Do_elabDoTry___closed__1);
v___x_793_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3, &l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___closed__3);
v___x_794_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoTry___boxed), 10, 0);
v___x_795_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_791_, v___x_792_, v___x_793_, v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1___boxed(lean_object* v_a_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
return v_res_797_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Control(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_TryCatch_0__Lean_Elab_Do_elabDoTry___regBuiltin_Lean_Elab_Do_elabDoTry__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
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
lean_object* initialize_Lean_Elab_Do_Control(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_TryCatch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_TryCatch(builtin);
}
#ifdef __cplusplus
}
#endif
