// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Pattern
// Imports: public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Conv.Basic
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Meta_Simp_Context_setMemoize(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object*);
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_a_8_);
lean_dec_ref(v___x_7_);
v___x_9_ = l_Lean_Meta_Simp_neutralConfig;
v___x_10_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0);
v___x_11_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_9_, v___x_10_, v_a_8_, v_a_3_, v_a_4_, v_a_5_);
return v___x_11_;
}
else
{
lean_object* v_a_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_19_; 
v_a_12_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_19_ == 0)
{
v___x_14_ = v___x_7_;
v_isShared_15_ = v_isSharedCheck_19_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_a_12_);
lean_dec(v___x_7_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_19_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_17_; 
if (v_isShared_15_ == 0)
{
v___x_17_ = v___x_14_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v_a_12_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec_ref(v_a_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_25_, v_a_27_, v_a_28_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(v_a_31_, v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
return v_res_36_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_mk_empty_array_with_capacity(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object* v_pattern_39_, lean_object* v_e_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
lean_inc_ref(v_e_40_);
v___x_46_ = l_Lean_Expr_toHeadIndex(v_e_40_);
lean_inc_ref(v_pattern_39_);
v___x_47_ = l_Lean_Expr_toHeadIndex(v_pattern_39_);
v___x_48_ = l_Lean_instBEqHeadIndex_beq(v___x_46_, v___x_47_);
lean_dec(v___x_47_);
lean_dec(v___x_46_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; lean_object* v___x_50_; 
lean_dec_ref(v_e_40_);
lean_dec_ref(v_pattern_39_);
v___x_49_ = lean_box(0);
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
else
{
lean_object* v___x_51_; 
lean_inc_ref(v_e_40_);
lean_inc_ref(v_pattern_39_);
v___x_51_ = l_Lean_Meta_isExprDefEqGuarded(v_pattern_39_, v_e_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_98_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_98_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_98_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_98_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
uint8_t v___x_56_; 
v___x_56_ = lean_unbox(v_a_52_);
lean_dec(v_a_52_);
if (v___x_56_ == 0)
{
uint8_t v___x_57_; 
v___x_57_ = l_Lean_Expr_isApp(v_e_40_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_60_; 
lean_dec_ref(v_e_40_);
lean_dec_ref(v_pattern_39_);
v___x_58_ = lean_box(0);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_58_);
v___x_60_ = v___x_54_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; 
lean_del_object(v___x_54_);
v___x_62_ = l_Lean_Expr_appFn_x21(v_e_40_);
v___x_63_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_39_, v___x_62_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
if (lean_obj_tag(v___x_63_) == 0)
{
lean_object* v_a_64_; 
v_a_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_a_64_);
if (lean_obj_tag(v_a_64_) == 0)
{
lean_dec_ref(v_e_40_);
return v___x_63_;
}
else
{
lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_90_; 
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; 
v_unused_91_ = lean_ctor_get(v___x_63_, 0);
lean_dec(v_unused_91_);
v___x_66_ = v___x_63_;
v_isShared_67_ = v_isSharedCheck_90_;
goto v_resetjp_65_;
}
else
{
lean_dec(v___x_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_90_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v_val_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_89_; 
v_val_68_ = lean_ctor_get(v_a_64_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_a_64_);
if (v_isSharedCheck_89_ == 0)
{
v___x_70_ = v_a_64_;
v_isShared_71_ = v_isSharedCheck_89_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_val_68_);
lean_dec(v_a_64_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_89_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v_fst_72_; lean_object* v_snd_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_88_; 
v_fst_72_ = lean_ctor_get(v_val_68_, 0);
v_snd_73_ = lean_ctor_get(v_val_68_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_val_68_);
if (v_isSharedCheck_88_ == 0)
{
v___x_75_ = v_val_68_;
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_snd_73_);
lean_inc(v_fst_72_);
lean_dec(v_val_68_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_88_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_77_ = l_Lean_Expr_appArg_x21(v_e_40_);
lean_dec_ref(v_e_40_);
v___x_78_ = lean_array_push(v_snd_73_, v___x_77_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___x_78_);
v___x_80_ = v___x_75_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_fst_72_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v___x_78_);
v___x_80_ = v_reuseFailAlloc_87_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_82_; 
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_80_);
v___x_82_ = v___x_70_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_80_);
v___x_82_ = v_reuseFailAlloc_86_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_84_; 
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 0, v___x_82_);
v___x_84_ = v___x_66_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
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
lean_dec_ref(v_e_40_);
return v___x_63_;
}
}
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
lean_dec_ref(v_pattern_39_);
v___x_92_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v_e_40_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_94_);
v___x_96_ = v___x_54_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v___x_94_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
else
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_106_; 
lean_dec_ref(v_e_40_);
lean_dec_ref(v_pattern_39_);
v_a_99_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_106_ == 0)
{
v___x_101_ = v___x_51_;
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_51_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_a_99_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object* v_pattern_107_, lean_object* v_e_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_107_, v_e_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object* v_k_115_, uint8_t v_allowLevelAssignments_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_116_, v_k_115_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
v_a_131_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_122_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_122_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object* v_k_139_, lean_object* v_allowLevelAssignments_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_146_; lean_object* v_res_147_; 
v_allowLevelAssignments_boxed_146_ = lean_unbox(v_allowLevelAssignments_140_);
v_res_147_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_139_, v_allowLevelAssignments_boxed_146_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object* v_00_u03b1_148_, lean_object* v_k_149_, uint8_t v_allowLevelAssignments_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_149_, v_allowLevelAssignments_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object* v_00_u03b1_157_, lean_object* v_k_158_, lean_object* v_allowLevelAssignments_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_165_; lean_object* v_res_166_; 
v_allowLevelAssignments_boxed_165_ = lean_unbox(v_allowLevelAssignments_159_);
v_res_166_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(v_00_u03b1_157_, v_k_158_, v_allowLevelAssignments_boxed_165_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_166_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0(void){
_start:
{
uint8_t v___x_167_; uint64_t v___x_168_; 
v___x_167_ = 2;
v___x_168_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object* v_pattern_169_, lean_object* v_e_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Meta_openAbstractMVarsResult(v_pattern_169_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v_snd_178_; lean_object* v_snd_179_; lean_object* v___x_180_; uint8_t v_foApprox_181_; uint8_t v_ctxApprox_182_; uint8_t v_quasiPatternApprox_183_; uint8_t v_constApprox_184_; uint8_t v_isDefEqStuckEx_185_; uint8_t v_unificationHints_186_; uint8_t v_proofIrrelevance_187_; uint8_t v_assignSyntheticOpaque_188_; uint8_t v_offsetCnstrs_189_; uint8_t v_etaStruct_190_; uint8_t v_univApprox_191_; uint8_t v_iota_192_; uint8_t v_beta_193_; uint8_t v_proj_194_; uint8_t v_zeta_195_; uint8_t v_zetaDelta_196_; uint8_t v_zetaUnused_197_; uint8_t v_zetaHave_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_238_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref(v___x_176_);
v_snd_178_ = lean_ctor_get(v_a_177_, 1);
lean_inc(v_snd_178_);
lean_dec(v_a_177_);
v_snd_179_ = lean_ctor_get(v_snd_178_, 1);
lean_inc(v_snd_179_);
lean_dec(v_snd_178_);
v___x_180_ = l_Lean_Meta_Context_config(v___y_171_);
v_foApprox_181_ = lean_ctor_get_uint8(v___x_180_, 0);
v_ctxApprox_182_ = lean_ctor_get_uint8(v___x_180_, 1);
v_quasiPatternApprox_183_ = lean_ctor_get_uint8(v___x_180_, 2);
v_constApprox_184_ = lean_ctor_get_uint8(v___x_180_, 3);
v_isDefEqStuckEx_185_ = lean_ctor_get_uint8(v___x_180_, 4);
v_unificationHints_186_ = lean_ctor_get_uint8(v___x_180_, 5);
v_proofIrrelevance_187_ = lean_ctor_get_uint8(v___x_180_, 6);
v_assignSyntheticOpaque_188_ = lean_ctor_get_uint8(v___x_180_, 7);
v_offsetCnstrs_189_ = lean_ctor_get_uint8(v___x_180_, 8);
v_etaStruct_190_ = lean_ctor_get_uint8(v___x_180_, 10);
v_univApprox_191_ = lean_ctor_get_uint8(v___x_180_, 11);
v_iota_192_ = lean_ctor_get_uint8(v___x_180_, 12);
v_beta_193_ = lean_ctor_get_uint8(v___x_180_, 13);
v_proj_194_ = lean_ctor_get_uint8(v___x_180_, 14);
v_zeta_195_ = lean_ctor_get_uint8(v___x_180_, 15);
v_zetaDelta_196_ = lean_ctor_get_uint8(v___x_180_, 16);
v_zetaUnused_197_ = lean_ctor_get_uint8(v___x_180_, 17);
v_zetaHave_198_ = lean_ctor_get_uint8(v___x_180_, 18);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_238_ == 0)
{
v___x_200_ = v___x_180_;
v_isShared_201_ = v_isSharedCheck_238_;
goto v_resetjp_199_;
}
else
{
lean_dec(v___x_180_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_238_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
uint8_t v_trackZetaDelta_202_; lean_object* v_zetaDeltaSet_203_; lean_object* v_lctx_204_; lean_object* v_localInstances_205_; lean_object* v_defEqCtx_x3f_206_; lean_object* v_synthPendingDepth_207_; lean_object* v_canUnfold_x3f_208_; uint8_t v_univApprox_209_; uint8_t v_inTypeClassResolution_210_; uint8_t v_cacheInferType_211_; uint8_t v___x_212_; lean_object* v_config_214_; 
v_trackZetaDelta_202_ = lean_ctor_get_uint8(v___y_171_, sizeof(void*)*7);
v_zetaDeltaSet_203_ = lean_ctor_get(v___y_171_, 1);
lean_inc(v_zetaDeltaSet_203_);
v_lctx_204_ = lean_ctor_get(v___y_171_, 2);
lean_inc_ref(v_lctx_204_);
v_localInstances_205_ = lean_ctor_get(v___y_171_, 3);
lean_inc_ref(v_localInstances_205_);
v_defEqCtx_x3f_206_ = lean_ctor_get(v___y_171_, 4);
lean_inc(v_defEqCtx_x3f_206_);
v_synthPendingDepth_207_ = lean_ctor_get(v___y_171_, 5);
lean_inc(v_synthPendingDepth_207_);
v_canUnfold_x3f_208_ = lean_ctor_get(v___y_171_, 6);
lean_inc(v_canUnfold_x3f_208_);
v_univApprox_209_ = lean_ctor_get_uint8(v___y_171_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_210_ = lean_ctor_get_uint8(v___y_171_, sizeof(void*)*7 + 2);
v_cacheInferType_211_ = lean_ctor_get_uint8(v___y_171_, sizeof(void*)*7 + 3);
v___x_212_ = 2;
if (v_isShared_201_ == 0)
{
v_config_214_ = v___x_200_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 0, v_foApprox_181_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 1, v_ctxApprox_182_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 2, v_quasiPatternApprox_183_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 3, v_constApprox_184_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 4, v_isDefEqStuckEx_185_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 5, v_unificationHints_186_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 6, v_proofIrrelevance_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 7, v_assignSyntheticOpaque_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 8, v_offsetCnstrs_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 10, v_etaStruct_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 11, v_univApprox_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 12, v_iota_192_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 13, v_beta_193_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 14, v_proj_194_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 15, v_zeta_195_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 16, v_zetaDelta_196_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 17, v_zetaUnused_197_);
lean_ctor_set_uint8(v_reuseFailAlloc_237_, 18, v_zetaHave_198_);
v_config_214_ = v_reuseFailAlloc_237_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
uint64_t v___x_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_229_; 
lean_ctor_set_uint8(v_config_214_, 9, v___x_212_);
v___x_215_ = l_Lean_Meta_Context_configKey(v___y_171_);
v_isSharedCheck_229_ = !lean_is_exclusive(v___y_171_);
if (v_isSharedCheck_229_ == 0)
{
lean_object* v_unused_230_; lean_object* v_unused_231_; lean_object* v_unused_232_; lean_object* v_unused_233_; lean_object* v_unused_234_; lean_object* v_unused_235_; lean_object* v_unused_236_; 
v_unused_230_ = lean_ctor_get(v___y_171_, 6);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v___y_171_, 5);
lean_dec(v_unused_231_);
v_unused_232_ = lean_ctor_get(v___y_171_, 4);
lean_dec(v_unused_232_);
v_unused_233_ = lean_ctor_get(v___y_171_, 3);
lean_dec(v_unused_233_);
v_unused_234_ = lean_ctor_get(v___y_171_, 2);
lean_dec(v_unused_234_);
v_unused_235_ = lean_ctor_get(v___y_171_, 1);
lean_dec(v_unused_235_);
v_unused_236_ = lean_ctor_get(v___y_171_, 0);
lean_dec(v_unused_236_);
v___x_217_ = v___y_171_;
v_isShared_218_ = v_isSharedCheck_229_;
goto v_resetjp_216_;
}
else
{
lean_dec(v___y_171_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_229_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
uint64_t v___x_219_; uint64_t v___x_220_; uint64_t v___x_221_; uint64_t v___x_222_; uint64_t v_key_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_219_ = 2ULL;
v___x_220_ = lean_uint64_shift_right(v___x_215_, v___x_219_);
v___x_221_ = lean_uint64_shift_left(v___x_220_, v___x_219_);
v___x_222_ = lean_uint64_once(&l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___closed__0);
v_key_223_ = lean_uint64_lor(v___x_221_, v___x_222_);
v___x_224_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_224_, 0, v_config_214_);
lean_ctor_set_uint64(v___x_224_, sizeof(void*)*1, v_key_223_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_224_);
v___x_226_ = v___x_217_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_zetaDeltaSet_203_);
lean_ctor_set(v_reuseFailAlloc_228_, 2, v_lctx_204_);
lean_ctor_set(v_reuseFailAlloc_228_, 3, v_localInstances_205_);
lean_ctor_set(v_reuseFailAlloc_228_, 4, v_defEqCtx_x3f_206_);
lean_ctor_set(v_reuseFailAlloc_228_, 5, v_synthPendingDepth_207_);
lean_ctor_set(v_reuseFailAlloc_228_, 6, v_canUnfold_x3f_208_);
lean_ctor_set_uint8(v_reuseFailAlloc_228_, sizeof(void*)*7, v_trackZetaDelta_202_);
lean_ctor_set_uint8(v_reuseFailAlloc_228_, sizeof(void*)*7 + 1, v_univApprox_209_);
lean_ctor_set_uint8(v_reuseFailAlloc_228_, sizeof(void*)*7 + 2, v_inTypeClassResolution_210_);
lean_ctor_set_uint8(v_reuseFailAlloc_228_, sizeof(void*)*7 + 3, v_cacheInferType_211_);
v___x_226_ = v_reuseFailAlloc_228_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_227_; 
v___x_227_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_snd_179_, v_e_170_, v___x_226_, v___y_172_, v___y_173_, v___y_174_);
lean_dec_ref(v___x_226_);
return v___x_227_;
}
}
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v___y_171_);
lean_dec_ref(v_e_170_);
v_a_239_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_176_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_176_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object* v_pattern_247_, lean_object* v_e_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(v_pattern_247_, v_e_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object* v_pattern_255_, lean_object* v_e_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___f_262_; uint8_t v___x_263_; lean_object* v___x_264_; 
v___f_262_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_262_, 0, v_pattern_255_);
lean_closure_set(v___f_262_, 1, v_e_256_);
v___x_263_ = 0;
v___x_264_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v___f_262_, v___x_263_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object* v_pattern_265_, lean_object* v_e_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_265_, v_e_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_unsigned_to_nat(0u);
return v___x_274_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_unsigned_to_nat(1u);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___boxed(lean_object* v_x_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(v_x_276_);
lean_dec_ref(v_x_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object* v_t_278_, lean_object* v_k_279_){
_start:
{
if (lean_obj_tag(v_t_278_) == 0)
{
lean_object* v_subgoals_280_; lean_object* v___x_281_; 
v_subgoals_280_ = lean_ctor_get(v_t_278_, 0);
lean_inc_ref(v_subgoals_280_);
lean_dec_ref(v_t_278_);
v___x_281_ = lean_apply_1(v_k_279_, v_subgoals_280_);
return v___x_281_;
}
else
{
lean_object* v_subgoals_282_; lean_object* v_idx_283_; lean_object* v_remaining_284_; lean_object* v___x_285_; 
v_subgoals_282_ = lean_ctor_get(v_t_278_, 0);
lean_inc_ref(v_subgoals_282_);
v_idx_283_ = lean_ctor_get(v_t_278_, 1);
lean_inc(v_idx_283_);
v_remaining_284_ = lean_ctor_get(v_t_278_, 2);
lean_inc(v_remaining_284_);
lean_dec_ref(v_t_278_);
v___x_285_ = lean_apply_3(v_k_279_, v_subgoals_282_, v_idx_283_, v_remaining_284_);
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object* v_motive_286_, lean_object* v_ctorIdx_287_, lean_object* v_t_288_, lean_object* v_h_289_, lean_object* v_k_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_288_, v_k_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object* v_motive_292_, lean_object* v_ctorIdx_293_, lean_object* v_t_294_, lean_object* v_h_295_, lean_object* v_k_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(v_motive_292_, v_ctorIdx_293_, v_t_294_, v_h_295_, v_k_296_);
lean_dec(v_ctorIdx_293_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object* v_t_298_, lean_object* v_all_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_298_, v_all_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object* v_motive_301_, lean_object* v_t_302_, lean_object* v_h_303_, lean_object* v_all_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_302_, v_all_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object* v_t_306_, lean_object* v_occs_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_306_, v_occs_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object* v_motive_309_, lean_object* v_t_310_, lean_object* v_h_311_, lean_object* v_occs_312_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_310_, v_occs_312_);
return v___x_313_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
uint8_t v___x_315_; 
v___x_315_ = 0;
return v___x_315_;
}
else
{
lean_object* v_remaining_316_; uint8_t v___x_317_; 
v_remaining_316_ = lean_ctor_get(v_x_314_, 2);
v___x_317_ = l_List_isEmpty___redArg(v_remaining_316_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object* v_x_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v_x_318_);
lean_dec_ref(v_x_318_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
uint8_t v___x_322_; 
v___x_322_ = 1;
return v___x_322_;
}
else
{
lean_object* v_remaining_323_; 
v_remaining_323_ = lean_ctor_get(v_x_321_, 2);
if (lean_obj_tag(v_remaining_323_) == 1)
{
lean_object* v_head_324_; lean_object* v_idx_325_; lean_object* v_fst_326_; uint8_t v___x_327_; 
v_head_324_ = lean_ctor_get(v_remaining_323_, 0);
v_idx_325_ = lean_ctor_get(v_x_321_, 1);
v_fst_326_ = lean_ctor_get(v_head_324_, 0);
v___x_327_ = lean_nat_dec_eq(v_idx_325_, v_fst_326_);
return v___x_327_;
}
else
{
uint8_t v___x_328_; 
v___x_328_ = 0;
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object* v_x_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v_x_329_);
lean_dec_ref(v_x_329_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object* v_x_332_){
_start:
{
if (lean_obj_tag(v_x_332_) == 1)
{
lean_object* v_subgoals_333_; lean_object* v_idx_334_; lean_object* v_remaining_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_344_; 
v_subgoals_333_ = lean_ctor_get(v_x_332_, 0);
v_idx_334_ = lean_ctor_get(v_x_332_, 1);
v_remaining_335_ = lean_ctor_get(v_x_332_, 2);
v_isSharedCheck_344_ = !lean_is_exclusive(v_x_332_);
if (v_isSharedCheck_344_ == 0)
{
v___x_337_ = v_x_332_;
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_remaining_335_);
lean_inc(v_idx_334_);
lean_inc(v_subgoals_333_);
lean_dec(v_x_332_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_344_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_idx_334_, v___x_339_);
lean_dec(v_idx_334_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 1, v___x_340_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_subgoals_333_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_343_, 2, v_remaining_335_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
return v_x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object* v_mvarId_345_, lean_object* v_x_346_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
lean_object* v_subgoals_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_355_; 
v_subgoals_347_ = lean_ctor_get(v_x_346_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v_x_346_);
if (v_isSharedCheck_355_ == 0)
{
v___x_349_ = v_x_346_;
v_isShared_350_ = v_isSharedCheck_355_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_subgoals_347_);
lean_dec(v_x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_355_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_351_ = lean_array_push(v_subgoals_347_, v_mvarId_345_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_remaining_356_; 
v_remaining_356_ = lean_ctor_get(v_x_346_, 2);
if (lean_obj_tag(v_remaining_356_) == 1)
{
lean_object* v_head_357_; lean_object* v_subgoals_358_; lean_object* v_idx_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_379_; 
lean_inc_ref(v_remaining_356_);
v_head_357_ = lean_ctor_get(v_remaining_356_, 0);
lean_inc(v_head_357_);
v_subgoals_358_ = lean_ctor_get(v_x_346_, 0);
v_idx_359_ = lean_ctor_get(v_x_346_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_346_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; 
v_unused_380_ = lean_ctor_get(v_x_346_, 2);
lean_dec(v_unused_380_);
v___x_361_ = v_x_346_;
v_isShared_362_ = v_isSharedCheck_379_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_idx_359_);
lean_inc(v_subgoals_358_);
lean_dec(v_x_346_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_379_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v_tail_363_; lean_object* v_snd_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_377_; 
v_tail_363_ = lean_ctor_get(v_remaining_356_, 1);
lean_inc(v_tail_363_);
lean_dec_ref(v_remaining_356_);
v_snd_364_ = lean_ctor_get(v_head_357_, 1);
v_isSharedCheck_377_ = !lean_is_exclusive(v_head_357_);
if (v_isSharedCheck_377_ == 0)
{
lean_object* v_unused_378_; 
v_unused_378_ = lean_ctor_get(v_head_357_, 0);
lean_dec(v_unused_378_);
v___x_366_ = v_head_357_;
v_isShared_367_ = v_isSharedCheck_377_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_snd_364_);
lean_dec(v_head_357_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_377_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v_mvarId_345_);
lean_ctor_set(v___x_366_, 0, v_snd_364_);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_snd_364_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v_mvarId_345_);
v___x_369_ = v_reuseFailAlloc_376_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_370_ = lean_array_push(v_subgoals_358_, v___x_369_);
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_nat_add(v_idx_359_, v___x_371_);
lean_dec(v_idx_359_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 2, v_tail_363_);
lean_ctor_set(v___x_361_, 1, v___x_372_);
lean_ctor_set(v___x_361_, 0, v___x_370_);
v___x_374_ = v___x_361_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_375_, 2, v_tail_363_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
else
{
lean_dec(v_mvarId_345_);
return v_x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object* v_as_381_, size_t v_sz_382_, size_t v_i_383_, lean_object* v_b_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
uint8_t v___x_390_; 
v___x_390_ = lean_usize_dec_lt(v_i_383_, v_sz_382_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v_b_384_);
return v___x_391_;
}
else
{
lean_object* v_a_392_; lean_object* v___x_393_; 
v_a_392_ = lean_array_uget_borrowed(v_as_381_, v_i_383_);
lean_inc(v_a_392_);
v___x_393_ = l_Lean_Meta_mkCongrFun(v_b_384_, v_a_392_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; size_t v___x_395_; size_t v___x_396_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref(v___x_393_);
v___x_395_ = ((size_t)1ULL);
v___x_396_ = lean_usize_add(v_i_383_, v___x_395_);
v_i_383_ = v___x_396_;
v_b_384_ = v_a_394_;
goto _start;
}
else
{
return v___x_393_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object* v_as_398_, lean_object* v_sz_399_, lean_object* v_i_400_, lean_object* v_b_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
size_t v_sz_boxed_407_; size_t v_i_boxed_408_; lean_object* v_res_409_; 
v_sz_boxed_407_ = lean_unbox_usize(v_sz_399_);
lean_dec(v_sz_399_);
v_i_boxed_408_ = lean_unbox_usize(v_i_400_);
lean_dec(v_i_400_);
v_res_409_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_398_, v_sz_boxed_407_, v_i_boxed_408_, v_b_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v_as_398_);
return v_res_409_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_box(0);
v___x_411_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object* v_pattern_412_, lean_object* v_state_413_, lean_object* v_e_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; uint8_t v___x_426_; 
v___x_423_ = lean_st_ref_get(v_a_421_);
lean_dec(v___x_423_);
v___x_424_ = lean_st_ref_get(v_state_413_);
v___x_425_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v___x_424_);
lean_dec(v___x_424_);
v___x_426_ = 1;
if (v___x_425_ == 0)
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_412_, v_e_414_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_497_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_497_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_497_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_497_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
if (lean_obj_tag(v_a_428_) == 1)
{
lean_object* v_val_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_492_; 
v_val_432_ = lean_ctor_get(v_a_428_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v_a_428_);
if (v_isSharedCheck_492_ == 0)
{
v___x_434_ = v_a_428_;
v_isShared_435_ = v_isSharedCheck_492_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_val_432_);
lean_dec(v_a_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_492_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v_fst_436_; lean_object* v_snd_437_; lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v_fst_436_ = lean_ctor_get(v_val_432_, 0);
lean_inc(v_fst_436_);
v_snd_437_ = lean_ctor_get(v_val_432_, 1);
lean_inc(v_snd_437_);
lean_dec(v_val_432_);
v___x_438_ = lean_st_ref_get(v_a_421_);
lean_dec(v___x_438_);
v___x_439_ = lean_st_ref_get(v_state_413_);
v___x_440_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v___x_439_);
lean_dec(v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
lean_dec(v_snd_437_);
lean_dec(v_fst_436_);
lean_del_object(v___x_434_);
v___x_441_ = lean_st_ref_get(v_a_421_);
lean_dec(v___x_441_);
v___x_442_ = lean_st_ref_take(v_state_413_);
v___x_443_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(v___x_442_);
v___x_444_ = lean_st_ref_set(v_state_413_, v___x_443_);
v___x_445_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_445_);
v___x_447_ = v___x_430_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
else
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_del_object(v___x_430_);
v___x_449_ = lean_box(0);
v___x_450_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_fst_436_, v___x_449_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v_fst_452_; lean_object* v_snd_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; size_t v_sz_459_; size_t v___x_460_; lean_object* v___x_461_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref(v___x_450_);
v_fst_452_ = lean_ctor_get(v_a_451_, 0);
lean_inc(v_fst_452_);
v_snd_453_ = lean_ctor_get(v_a_451_, 1);
lean_inc(v_snd_453_);
lean_dec(v_a_451_);
v___x_454_ = lean_st_ref_get(v_a_421_);
lean_dec(v___x_454_);
v___x_455_ = lean_st_ref_take(v_state_413_);
v___x_456_ = l_Lean_Expr_mvarId_x21(v_snd_453_);
v___x_457_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(v___x_456_, v___x_455_);
v___x_458_ = lean_st_ref_set(v_state_413_, v___x_457_);
v_sz_459_ = lean_array_size(v_snd_437_);
v___x_460_ = ((size_t)0ULL);
v___x_461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_snd_437_, v_sz_459_, v___x_460_, v_snd_453_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_475_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_475_ == 0)
{
v___x_464_ = v___x_461_;
v_isShared_465_ = v_isSharedCheck_475_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_475_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_466_ = l_Lean_mkAppN(v_fst_452_, v_snd_437_);
lean_dec(v_snd_437_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_a_462_);
v___x_468_ = v___x_434_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_462_);
v___x_468_ = v_reuseFailAlloc_474_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_469_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_469_, 0, v___x_466_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
lean_ctor_set_uint8(v___x_469_, sizeof(void*)*2, v___x_426_);
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_470_);
v___x_472_ = v___x_464_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec(v_fst_452_);
lean_dec(v_snd_437_);
lean_del_object(v___x_434_);
v_a_476_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_461_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_461_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v_snd_437_);
lean_del_object(v___x_434_);
v_a_484_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_450_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_450_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
}
else
{
lean_object* v___x_493_; lean_object* v___x_495_; 
lean_dec(v_a_428_);
v___x_493_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_493_);
v___x_495_ = v___x_430_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
else
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
v_a_498_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___x_427_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_427_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_dec_ref(v_pattern_412_);
v___x_506_ = lean_box(0);
v___x_507_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_507_, 0, v_e_414_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
lean_ctor_set_uint8(v___x_507_, sizeof(void*)*2, v___x_426_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object* v_pattern_510_, lean_object* v_state_511_, lean_object* v_e_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(v_pattern_510_, v_state_511_, v_e_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
lean_dec(v_a_513_);
lean_dec(v_state_511_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object* v_as_522_, size_t v_sz_523_, size_t v_i_524_, lean_object* v_b_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_522_, v_sz_523_, v_i_524_, v_b_525_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object* v_as_535_, lean_object* v_sz_536_, lean_object* v_i_537_, lean_object* v_b_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
size_t v_sz_boxed_547_; size_t v_i_boxed_548_; lean_object* v_res_549_; 
v_sz_boxed_547_ = lean_unbox_usize(v_sz_536_);
lean_dec(v_sz_536_);
v_i_boxed_548_ = lean_unbox_usize(v_i_537_);
lean_dec(v_i_537_);
v_res_549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(v_as_535_, v_sz_boxed_547_, v_i_boxed_548_, v_b_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v_as_535_);
return v_res_549_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = lean_box(0);
v___x_551_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___x_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___closed__0);
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object* v_00_u03b1_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object* v_00_u03b1_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(v_00_u03b1_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object* v_a_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object* v_a_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(v_a_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object* v_00_u03b1_598_, lean_object* v_a_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object* v_00_u03b1_608_, lean_object* v_a_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(v_00_u03b1_608_, v_a_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object* v_e_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v_e_618_);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object* v_e_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(v_e_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object* v___x_639_, lean_object* v___x_640_, uint8_t v___x_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_Elab_Term_elabTerm(v___x_639_, v___x_640_, v___x_641_, v___x_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_651_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref(v___x_649_);
v___x_651_ = l_Lean_Meta_abstractMVars(v_a_650_, v___x_641_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
return v___x_651_;
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_652_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_649_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_649_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object* v___x_660_, lean_object* v___x_661_, lean_object* v___x_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
uint8_t v___x_18782__boxed_670_; lean_object* v_res_671_; 
v___x_18782__boxed_670_ = lean_unbox(v___x_662_);
v_res_671_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(v___x_660_, v___x_661_, v___x_18782__boxed_670_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object* v___x_672_, lean_object* v___f_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_fileName_681_; lean_object* v_fileMap_682_; lean_object* v_options_683_; lean_object* v_currRecDepth_684_; lean_object* v_maxRecDepth_685_; lean_object* v_ref_686_; lean_object* v_currNamespace_687_; lean_object* v_openDecls_688_; lean_object* v_initHeartbeats_689_; lean_object* v_maxHeartbeats_690_; lean_object* v_quotContext_691_; lean_object* v_currMacroScope_692_; uint8_t v_diag_693_; lean_object* v_cancelTk_x3f_694_; uint8_t v_suppressElabErrors_695_; lean_object* v_inheritedTraceOptions_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_705_; 
v_fileName_681_ = lean_ctor_get(v___y_678_, 0);
v_fileMap_682_ = lean_ctor_get(v___y_678_, 1);
v_options_683_ = lean_ctor_get(v___y_678_, 2);
v_currRecDepth_684_ = lean_ctor_get(v___y_678_, 3);
v_maxRecDepth_685_ = lean_ctor_get(v___y_678_, 4);
v_ref_686_ = lean_ctor_get(v___y_678_, 5);
v_currNamespace_687_ = lean_ctor_get(v___y_678_, 6);
v_openDecls_688_ = lean_ctor_get(v___y_678_, 7);
v_initHeartbeats_689_ = lean_ctor_get(v___y_678_, 8);
v_maxHeartbeats_690_ = lean_ctor_get(v___y_678_, 9);
v_quotContext_691_ = lean_ctor_get(v___y_678_, 10);
v_currMacroScope_692_ = lean_ctor_get(v___y_678_, 11);
v_diag_693_ = lean_ctor_get_uint8(v___y_678_, sizeof(void*)*14);
v_cancelTk_x3f_694_ = lean_ctor_get(v___y_678_, 12);
v_suppressElabErrors_695_ = lean_ctor_get_uint8(v___y_678_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_696_ = lean_ctor_get(v___y_678_, 13);
v_isSharedCheck_705_ = !lean_is_exclusive(v___y_678_);
if (v_isSharedCheck_705_ == 0)
{
v___x_698_ = v___y_678_;
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_inheritedTraceOptions_696_);
lean_inc(v_cancelTk_x3f_694_);
lean_inc(v_currMacroScope_692_);
lean_inc(v_quotContext_691_);
lean_inc(v_maxHeartbeats_690_);
lean_inc(v_initHeartbeats_689_);
lean_inc(v_openDecls_688_);
lean_inc(v_currNamespace_687_);
lean_inc(v_ref_686_);
lean_inc(v_maxRecDepth_685_);
lean_inc(v_currRecDepth_684_);
lean_inc(v_options_683_);
lean_inc(v_fileMap_682_);
lean_inc(v_fileName_681_);
lean_dec(v___y_678_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_705_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_ref_700_; lean_object* v___x_702_; 
v_ref_700_ = l_Lean_replaceRef(v___x_672_, v_ref_686_);
lean_dec(v_ref_686_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 5, v_ref_700_);
v___x_702_ = v___x_698_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_fileName_681_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_fileMap_682_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_options_683_);
lean_ctor_set(v_reuseFailAlloc_704_, 3, v_currRecDepth_684_);
lean_ctor_set(v_reuseFailAlloc_704_, 4, v_maxRecDepth_685_);
lean_ctor_set(v_reuseFailAlloc_704_, 5, v_ref_700_);
lean_ctor_set(v_reuseFailAlloc_704_, 6, v_currNamespace_687_);
lean_ctor_set(v_reuseFailAlloc_704_, 7, v_openDecls_688_);
lean_ctor_set(v_reuseFailAlloc_704_, 8, v_initHeartbeats_689_);
lean_ctor_set(v_reuseFailAlloc_704_, 9, v_maxHeartbeats_690_);
lean_ctor_set(v_reuseFailAlloc_704_, 10, v_quotContext_691_);
lean_ctor_set(v_reuseFailAlloc_704_, 11, v_currMacroScope_692_);
lean_ctor_set(v_reuseFailAlloc_704_, 12, v_cancelTk_x3f_694_);
lean_ctor_set(v_reuseFailAlloc_704_, 13, v_inheritedTraceOptions_696_);
lean_ctor_set_uint8(v_reuseFailAlloc_704_, sizeof(void*)*14, v_diag_693_);
lean_ctor_set_uint8(v_reuseFailAlloc_704_, sizeof(void*)*14 + 1, v_suppressElabErrors_695_);
v___x_702_ = v_reuseFailAlloc_704_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; 
v___x_703_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___x_702_, v___y_679_);
lean_dec_ref(v___x_702_);
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object* v___x_706_, lean_object* v___f_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(v___x_706_, v___f_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___x_706_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object* v___x_716_, uint8_t v___x_717_, lean_object* v_e_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_727_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_727_, 0, v_e_718_);
lean_ctor_set(v___x_727_, 1, v___x_716_);
lean_ctor_set_uint8(v___x_727_, sizeof(void*)*2, v___x_717_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object* v___x_730_, lean_object* v___x_731_, lean_object* v_e_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
uint8_t v___x_18876__boxed_741_; lean_object* v_res_742_; 
v___x_18876__boxed_741_ = lean_unbox(v___x_731_);
v_res_742_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(v___x_730_, v___x_18876__boxed_741_, v_e_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object* v___x_743_, lean_object* v_x_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_743_);
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object* v___x_755_, lean_object* v_x_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(v___x_755_, v_x_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v_x_756_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object* v___x_766_, lean_object* v_x_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_766_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object* v___x_777_, lean_object* v_x_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(v___x_777_, v_x_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v_x_778_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object* v_msgData_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; lean_object* v_env_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_mctx_798_; lean_object* v_lctx_799_; lean_object* v_options_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_794_ = lean_st_ref_get(v___y_792_);
v_env_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc_ref(v_env_795_);
lean_dec(v___x_794_);
v___x_796_ = lean_st_ref_get(v___y_792_);
lean_dec(v___x_796_);
v___x_797_ = lean_st_ref_get(v___y_790_);
v_mctx_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc_ref(v_mctx_798_);
lean_dec(v___x_797_);
v_lctx_799_ = lean_ctor_get(v___y_789_, 2);
v_options_800_ = lean_ctor_get(v___y_791_, 2);
lean_inc_ref(v_options_800_);
lean_inc_ref(v_lctx_799_);
v___x_801_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_801_, 0, v_env_795_);
lean_ctor_set(v___x_801_, 1, v_mctx_798_);
lean_ctor_set(v___x_801_, 2, v_lctx_799_);
lean_ctor_set(v___x_801_, 3, v_options_800_);
v___x_802_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
lean_ctor_set(v___x_802_, 1, v_msgData_788_);
v___x_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object* v_msgData_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msgData_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object* v_msg_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_ref_817_; lean_object* v___x_818_; lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_827_; 
v_ref_817_ = lean_ctor_get(v___y_814_, 5);
v___x_818_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msg_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_827_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_827_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_827_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_823_; lean_object* v___x_825_; 
lean_inc(v_ref_817_);
v___x_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_823_, 0, v_ref_817_);
lean_ctor_set(v___x_823_, 1, v_a_819_);
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 1);
lean_ctor_set(v___x_821_, 0, v___x_823_);
v___x_825_ = v___x_821_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object* v_msg_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v_res_834_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object* v_as_835_, lean_object* v_a_836_, lean_object* v_x_837_){
_start:
{
lean_object* v_zero_838_; uint8_t v_isZero_839_; 
v_zero_838_ = lean_unsigned_to_nat(0u);
v_isZero_839_ = lean_nat_dec_eq(v_x_837_, v_zero_838_);
if (v_isZero_839_ == 1)
{
lean_dec(v_x_837_);
return v_isZero_839_;
}
else
{
lean_object* v_fst_840_; lean_object* v_one_841_; lean_object* v_n_842_; lean_object* v___x_843_; lean_object* v_fst_844_; uint8_t v___x_845_; 
v_fst_840_ = lean_ctor_get(v_a_836_, 0);
v_one_841_ = lean_unsigned_to_nat(1u);
v_n_842_ = lean_nat_sub(v_x_837_, v_one_841_);
lean_dec(v_x_837_);
v___x_843_ = lean_array_fget_borrowed(v_as_835_, v_n_842_);
v_fst_844_ = lean_ctor_get(v___x_843_, 0);
v___x_845_ = lean_nat_dec_eq(v_fst_840_, v_fst_844_);
if (v___x_845_ == 0)
{
v_x_837_ = v_n_842_;
goto _start;
}
else
{
lean_dec(v_n_842_);
return v_isZero_839_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_as_847_, lean_object* v_a_848_, lean_object* v_x_849_){
_start:
{
uint8_t v_res_850_; lean_object* v_r_851_; 
v_res_850_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_847_, v_a_848_, v_x_849_);
lean_dec_ref(v_a_848_);
lean_dec_ref(v_as_847_);
v_r_851_ = lean_box(v_res_850_);
return v_r_851_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object* v_as_852_, lean_object* v_i_853_){
_start:
{
lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_854_ = lean_array_get_size(v_as_852_);
v___x_855_ = lean_nat_dec_lt(v_i_853_, v___x_854_);
if (v___x_855_ == 0)
{
uint8_t v___x_856_; 
lean_dec(v_i_853_);
v___x_856_ = 1;
return v___x_856_;
}
else
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = lean_array_fget_borrowed(v_as_852_, v_i_853_);
lean_inc(v_i_853_);
v___x_858_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_852_, v___x_857_, v_i_853_);
if (v___x_858_ == 0)
{
lean_dec(v_i_853_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_unsigned_to_nat(1u);
v___x_860_ = lean_nat_add(v_i_853_, v___x_859_);
lean_dec(v_i_853_);
v_i_853_ = v___x_860_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object* v_as_862_, lean_object* v_i_863_){
_start:
{
uint8_t v_res_864_; lean_object* v_r_865_; 
v_res_864_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_862_, v_i_863_);
lean_dec_ref(v_as_862_);
v_r_865_ = lean_box(v_res_864_);
return v_r_865_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object* v_as_866_){
_start:
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = lean_unsigned_to_nat(0u);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_866_, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object* v_as_869_){
_start:
{
uint8_t v_res_870_; lean_object* v_r_871_; 
v_res_870_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v_as_869_);
lean_dec_ref(v_as_869_);
v_r_871_ = lean_box(v_res_870_);
return v_r_871_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object* v_x1_872_, lean_object* v_x2_873_){
_start:
{
lean_object* v_fst_874_; lean_object* v_fst_875_; uint8_t v___x_876_; 
v_fst_874_ = lean_ctor_get(v_x1_872_, 0);
v_fst_875_ = lean_ctor_get(v_x2_873_, 0);
v___x_876_ = lean_nat_dec_lt(v_fst_874_, v_fst_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object* v_x1_877_, lean_object* v_x2_878_){
_start:
{
uint8_t v_res_879_; lean_object* v_r_880_; 
v_res_879_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v_x1_877_, v_x2_878_);
lean_dec_ref(v_x2_878_);
lean_dec_ref(v_x1_877_);
v_r_880_ = lean_box(v_res_879_);
return v_r_880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object* v_hi_881_, lean_object* v_pivot_882_, lean_object* v_as_883_, lean_object* v_i_884_, lean_object* v_k_885_){
_start:
{
uint8_t v___x_886_; 
v___x_886_ = lean_nat_dec_lt(v_k_885_, v_hi_881_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec(v_k_885_);
v___x_887_ = lean_array_fswap(v_as_883_, v_i_884_, v_hi_881_);
v___x_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_888_, 0, v_i_884_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
return v___x_888_;
}
else
{
lean_object* v___x_889_; lean_object* v_fst_890_; lean_object* v_fst_891_; uint8_t v___x_892_; 
v___x_889_ = lean_array_fget_borrowed(v_as_883_, v_k_885_);
v_fst_890_ = lean_ctor_get(v___x_889_, 0);
v_fst_891_ = lean_ctor_get(v_pivot_882_, 0);
v___x_892_ = lean_nat_dec_lt(v_fst_890_, v_fst_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_nat_add(v_k_885_, v___x_893_);
lean_dec(v_k_885_);
v_k_885_ = v___x_894_;
goto _start;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_896_ = lean_array_fswap(v_as_883_, v_i_884_, v_k_885_);
v___x_897_ = lean_unsigned_to_nat(1u);
v___x_898_ = lean_nat_add(v_i_884_, v___x_897_);
lean_dec(v_i_884_);
v___x_899_ = lean_nat_add(v_k_885_, v___x_897_);
lean_dec(v_k_885_);
v_as_883_ = v___x_896_;
v_i_884_ = v___x_898_;
v_k_885_ = v___x_899_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object* v_hi_901_, lean_object* v_pivot_902_, lean_object* v_as_903_, lean_object* v_i_904_, lean_object* v_k_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_901_, v_pivot_902_, v_as_903_, v_i_904_, v_k_905_);
lean_dec_ref(v_pivot_902_);
lean_dec(v_hi_901_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object* v_n_907_, lean_object* v_as_908_, lean_object* v_lo_909_, lean_object* v_hi_910_){
_start:
{
lean_object* v___y_912_; uint8_t v___x_922_; 
v___x_922_ = lean_nat_dec_lt(v_lo_909_, v_hi_910_);
if (v___x_922_ == 0)
{
lean_dec(v_lo_909_);
return v_as_908_;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v_mid_925_; lean_object* v___y_927_; lean_object* v___y_933_; lean_object* v___x_938_; lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_923_ = lean_nat_add(v_lo_909_, v_hi_910_);
v___x_924_ = lean_unsigned_to_nat(1u);
v_mid_925_ = lean_nat_shiftr(v___x_923_, v___x_924_);
lean_dec(v___x_923_);
v___x_938_ = lean_array_fget_borrowed(v_as_908_, v_mid_925_);
v___x_939_ = lean_array_fget_borrowed(v_as_908_, v_lo_909_);
v___x_940_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_938_, v___x_939_);
if (v___x_940_ == 0)
{
v___y_933_ = v_as_908_;
goto v___jp_932_;
}
else
{
lean_object* v___x_941_; 
v___x_941_ = lean_array_fswap(v_as_908_, v_lo_909_, v_mid_925_);
v___y_933_ = v___x_941_;
goto v___jp_932_;
}
v___jp_926_:
{
lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_928_ = lean_array_fget_borrowed(v___y_927_, v_mid_925_);
v___x_929_ = lean_array_fget_borrowed(v___y_927_, v_hi_910_);
v___x_930_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_928_, v___x_929_);
if (v___x_930_ == 0)
{
lean_dec(v_mid_925_);
v___y_912_ = v___y_927_;
goto v___jp_911_;
}
else
{
lean_object* v___x_931_; 
v___x_931_ = lean_array_fswap(v___y_927_, v_mid_925_, v_hi_910_);
lean_dec(v_mid_925_);
v___y_912_ = v___x_931_;
goto v___jp_911_;
}
}
v___jp_932_:
{
lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_934_ = lean_array_fget_borrowed(v___y_933_, v_hi_910_);
v___x_935_ = lean_array_fget_borrowed(v___y_933_, v_lo_909_);
v___x_936_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_934_, v___x_935_);
if (v___x_936_ == 0)
{
v___y_927_ = v___y_933_;
goto v___jp_926_;
}
else
{
lean_object* v___x_937_; 
v___x_937_ = lean_array_fswap(v___y_933_, v_lo_909_, v_hi_910_);
v___y_927_ = v___x_937_;
goto v___jp_926_;
}
}
}
v___jp_911_:
{
lean_object* v_pivot_913_; lean_object* v___x_914_; lean_object* v_fst_915_; lean_object* v_snd_916_; uint8_t v___x_917_; 
v_pivot_913_ = lean_array_fget(v___y_912_, v_hi_910_);
lean_inc_n(v_lo_909_, 2);
v___x_914_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_910_, v_pivot_913_, v___y_912_, v_lo_909_, v_lo_909_);
lean_dec(v_pivot_913_);
v_fst_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_fst_915_);
v_snd_916_ = lean_ctor_get(v___x_914_, 1);
lean_inc(v_snd_916_);
lean_dec_ref(v___x_914_);
v___x_917_ = lean_nat_dec_le(v_hi_910_, v_fst_915_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_907_, v_snd_916_, v_lo_909_, v_fst_915_);
v___x_919_ = lean_unsigned_to_nat(1u);
v___x_920_ = lean_nat_add(v_fst_915_, v___x_919_);
lean_dec(v_fst_915_);
v_as_908_ = v___x_918_;
v_lo_909_ = v___x_920_;
goto _start;
}
else
{
lean_dec(v_fst_915_);
lean_dec(v_lo_909_);
return v_snd_916_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object* v_n_942_, lean_object* v_as_943_, lean_object* v_lo_944_, lean_object* v_hi_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_942_, v_as_943_, v_lo_944_, v_hi_945_);
lean_dec(v_hi_945_);
lean_dec(v_n_942_);
return v_res_946_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object* v_x1_947_, lean_object* v_x2_948_){
_start:
{
lean_object* v_fst_949_; lean_object* v_fst_950_; uint8_t v___x_951_; 
v_fst_949_ = lean_ctor_get(v_x1_947_, 0);
v_fst_950_ = lean_ctor_get(v_x2_948_, 0);
v___x_951_ = lean_nat_dec_lt(v_fst_949_, v_fst_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object* v_x1_952_, lean_object* v_x2_953_){
_start:
{
uint8_t v_res_954_; lean_object* v_r_955_; 
v_res_954_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v_x1_952_, v_x2_953_);
lean_dec_ref(v_x2_953_);
lean_dec_ref(v_x1_952_);
v_r_955_ = lean_box(v_res_954_);
return v_r_955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object* v_hi_956_, lean_object* v_pivot_957_, lean_object* v_as_958_, lean_object* v_i_959_, lean_object* v_k_960_){
_start:
{
uint8_t v___x_961_; 
v___x_961_ = lean_nat_dec_lt(v_k_960_, v_hi_956_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v___x_963_; 
lean_dec(v_k_960_);
v___x_962_ = lean_array_fswap(v_as_958_, v_i_959_, v_hi_956_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v_i_959_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
return v___x_963_;
}
else
{
lean_object* v___x_964_; lean_object* v_fst_965_; lean_object* v_fst_966_; uint8_t v___x_967_; 
v___x_964_ = lean_array_fget_borrowed(v_as_958_, v_k_960_);
v_fst_965_ = lean_ctor_get(v___x_964_, 0);
v_fst_966_ = lean_ctor_get(v_pivot_957_, 0);
v___x_967_ = lean_nat_dec_lt(v_fst_965_, v_fst_966_);
if (v___x_967_ == 0)
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(1u);
v___x_969_ = lean_nat_add(v_k_960_, v___x_968_);
lean_dec(v_k_960_);
v_k_960_ = v___x_969_;
goto _start;
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_971_ = lean_array_fswap(v_as_958_, v_i_959_, v_k_960_);
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_nat_add(v_i_959_, v___x_972_);
lean_dec(v_i_959_);
v___x_974_ = lean_nat_add(v_k_960_, v___x_972_);
lean_dec(v_k_960_);
v_as_958_ = v___x_971_;
v_i_959_ = v___x_973_;
v_k_960_ = v___x_974_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object* v_hi_976_, lean_object* v_pivot_977_, lean_object* v_as_978_, lean_object* v_i_979_, lean_object* v_k_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_976_, v_pivot_977_, v_as_978_, v_i_979_, v_k_980_);
lean_dec_ref(v_pivot_977_);
lean_dec(v_hi_976_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object* v_n_982_, lean_object* v_as_983_, lean_object* v_lo_984_, lean_object* v_hi_985_){
_start:
{
lean_object* v___y_987_; uint8_t v___x_997_; 
v___x_997_ = lean_nat_dec_lt(v_lo_984_, v_hi_985_);
if (v___x_997_ == 0)
{
lean_dec(v_lo_984_);
return v_as_983_;
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_mid_1000_; lean_object* v___y_1002_; lean_object* v___y_1008_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_998_ = lean_nat_add(v_lo_984_, v_hi_985_);
v___x_999_ = lean_unsigned_to_nat(1u);
v_mid_1000_ = lean_nat_shiftr(v___x_998_, v___x_999_);
lean_dec(v___x_998_);
v___x_1013_ = lean_array_fget_borrowed(v_as_983_, v_mid_1000_);
v___x_1014_ = lean_array_fget_borrowed(v_as_983_, v_lo_984_);
v___x_1015_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1013_, v___x_1014_);
if (v___x_1015_ == 0)
{
v___y_1008_ = v_as_983_;
goto v___jp_1007_;
}
else
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_array_fswap(v_as_983_, v_lo_984_, v_mid_1000_);
v___y_1008_ = v___x_1016_;
goto v___jp_1007_;
}
v___jp_1001_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1003_ = lean_array_fget_borrowed(v___y_1002_, v_mid_1000_);
v___x_1004_ = lean_array_fget_borrowed(v___y_1002_, v_hi_985_);
v___x_1005_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1003_, v___x_1004_);
if (v___x_1005_ == 0)
{
lean_dec(v_mid_1000_);
v___y_987_ = v___y_1002_;
goto v___jp_986_;
}
else
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_array_fswap(v___y_1002_, v_mid_1000_, v_hi_985_);
lean_dec(v_mid_1000_);
v___y_987_ = v___x_1006_;
goto v___jp_986_;
}
}
v___jp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1009_ = lean_array_fget_borrowed(v___y_1008_, v_hi_985_);
v___x_1010_ = lean_array_fget_borrowed(v___y_1008_, v_lo_984_);
v___x_1011_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
v___y_1002_ = v___y_1008_;
goto v___jp_1001_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_array_fswap(v___y_1008_, v_lo_984_, v_hi_985_);
v___y_1002_ = v___x_1012_;
goto v___jp_1001_;
}
}
}
v___jp_986_:
{
lean_object* v_pivot_988_; lean_object* v___x_989_; lean_object* v_fst_990_; lean_object* v_snd_991_; uint8_t v___x_992_; 
v_pivot_988_ = lean_array_fget(v___y_987_, v_hi_985_);
lean_inc_n(v_lo_984_, 2);
v___x_989_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_985_, v_pivot_988_, v___y_987_, v_lo_984_, v_lo_984_);
lean_dec(v_pivot_988_);
v_fst_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_fst_990_);
v_snd_991_ = lean_ctor_get(v___x_989_, 1);
lean_inc(v_snd_991_);
lean_dec_ref(v___x_989_);
v___x_992_ = lean_nat_dec_le(v_hi_985_, v_fst_990_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_993_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_982_, v_snd_991_, v_lo_984_, v_fst_990_);
v___x_994_ = lean_unsigned_to_nat(1u);
v___x_995_ = lean_nat_add(v_fst_990_, v___x_994_);
lean_dec(v_fst_990_);
v_as_983_ = v___x_993_;
v_lo_984_ = v___x_995_;
goto _start;
}
else
{
lean_dec(v_fst_990_);
lean_dec(v_lo_984_);
return v_snd_991_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object* v_n_1017_, lean_object* v_as_1018_, lean_object* v_lo_1019_, lean_object* v_hi_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1017_, v_as_1018_, v_lo_1019_, v_hi_1020_);
lean_dec(v_hi_1020_);
lean_dec(v_n_1017_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object* v_x_1022_, lean_object* v_x_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
lean_object* v_ks_1026_; lean_object* v_vs_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1051_; 
v_ks_1026_ = lean_ctor_get(v_x_1022_, 0);
v_vs_1027_ = lean_ctor_get(v_x_1022_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_x_1022_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1029_ = v_x_1022_;
v_isShared_1030_ = v_isSharedCheck_1051_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_vs_1027_);
lean_inc(v_ks_1026_);
lean_dec(v_x_1022_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1051_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1031_ = lean_array_get_size(v_ks_1026_);
v___x_1032_ = lean_nat_dec_lt(v_x_1023_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
lean_dec(v_x_1023_);
v___x_1033_ = lean_array_push(v_ks_1026_, v_x_1024_);
v___x_1034_ = lean_array_push(v_vs_1027_, v_x_1025_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1034_);
lean_ctor_set(v___x_1029_, 0, v___x_1033_);
v___x_1036_ = v___x_1029_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
else
{
lean_object* v_k_x27_1038_; uint8_t v___x_1039_; 
v_k_x27_1038_ = lean_array_fget_borrowed(v_ks_1026_, v_x_1023_);
v___x_1039_ = l_Lean_instBEqMVarId_beq(v_x_1024_, v_k_x27_1038_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1041_; 
if (v_isShared_1030_ == 0)
{
v___x_1041_ = v___x_1029_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_ks_1026_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_vs_1027_);
v___x_1041_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_unsigned_to_nat(1u);
v___x_1043_ = lean_nat_add(v_x_1023_, v___x_1042_);
lean_dec(v_x_1023_);
v_x_1022_ = v___x_1041_;
v_x_1023_ = v___x_1043_;
goto _start;
}
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
v___x_1046_ = lean_array_fset(v_ks_1026_, v_x_1023_, v_x_1024_);
v___x_1047_ = lean_array_fset(v_vs_1027_, v_x_1023_, v_x_1025_);
lean_dec(v_x_1023_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1047_);
lean_ctor_set(v___x_1029_, 0, v___x_1046_);
v___x_1049_ = v___x_1029_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v___x_1047_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object* v_n_1052_, lean_object* v_k_1053_, lean_object* v_v_1054_){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lean_unsigned_to_nat(0u);
v___x_1056_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_n_1052_, v___x_1055_, v_k_1053_, v_v_1054_);
return v___x_1056_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_1057_; size_t v___x_1058_; size_t v___x_1059_; 
v___x_1057_ = ((size_t)5ULL);
v___x_1058_ = ((size_t)1ULL);
v___x_1059_ = lean_usize_shift_left(v___x_1058_, v___x_1057_);
return v___x_1059_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; 
v___x_1060_ = ((size_t)1ULL);
v___x_1061_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0);
v___x_1062_ = lean_usize_sub(v___x_1061_, v___x_1060_);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object* v_x_1064_, size_t v_x_1065_, size_t v_x_1066_, lean_object* v_x_1067_, lean_object* v_x_1068_){
_start:
{
if (lean_obj_tag(v_x_1064_) == 0)
{
lean_object* v_es_1069_; size_t v___x_1070_; size_t v___x_1071_; size_t v___x_1072_; size_t v___x_1073_; lean_object* v_j_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; 
v_es_1069_ = lean_ctor_get(v_x_1064_, 0);
v___x_1070_ = ((size_t)5ULL);
v___x_1071_ = ((size_t)1ULL);
v___x_1072_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1);
v___x_1073_ = lean_usize_land(v_x_1065_, v___x_1072_);
v_j_1074_ = lean_usize_to_nat(v___x_1073_);
v___x_1075_ = lean_array_get_size(v_es_1069_);
v___x_1076_ = lean_nat_dec_lt(v_j_1074_, v___x_1075_);
if (v___x_1076_ == 0)
{
lean_dec(v_j_1074_);
lean_dec(v_x_1068_);
lean_dec(v_x_1067_);
return v_x_1064_;
}
else
{
lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1113_; 
lean_inc_ref(v_es_1069_);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_x_1064_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; 
v_unused_1114_ = lean_ctor_get(v_x_1064_, 0);
lean_dec(v_unused_1114_);
v___x_1078_ = v_x_1064_;
v_isShared_1079_ = v_isSharedCheck_1113_;
goto v_resetjp_1077_;
}
else
{
lean_dec(v_x_1064_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1113_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v_v_1080_; lean_object* v___x_1081_; lean_object* v_xs_x27_1082_; lean_object* v___y_1084_; 
v_v_1080_ = lean_array_fget(v_es_1069_, v_j_1074_);
v___x_1081_ = lean_box(0);
v_xs_x27_1082_ = lean_array_fset(v_es_1069_, v_j_1074_, v___x_1081_);
switch(lean_obj_tag(v_v_1080_))
{
case 0:
{
lean_object* v_key_1089_; lean_object* v_val_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1100_; 
v_key_1089_ = lean_ctor_get(v_v_1080_, 0);
v_val_1090_ = lean_ctor_get(v_v_1080_, 1);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_v_1080_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1092_ = v_v_1080_;
v_isShared_1093_ = v_isSharedCheck_1100_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_val_1090_);
lean_inc(v_key_1089_);
lean_dec(v_v_1080_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1100_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
uint8_t v___x_1094_; 
v___x_1094_ = l_Lean_instBEqMVarId_beq(v_x_1067_, v_key_1089_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
lean_del_object(v___x_1092_);
v___x_1095_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1089_, v_val_1090_, v_x_1067_, v_x_1068_);
v___x_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
v___y_1084_ = v___x_1096_;
goto v___jp_1083_;
}
else
{
lean_object* v___x_1098_; 
lean_dec(v_val_1090_);
lean_dec(v_key_1089_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v_x_1068_);
lean_ctor_set(v___x_1092_, 0, v_x_1067_);
v___x_1098_ = v___x_1092_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_x_1067_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_x_1068_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
v___y_1084_ = v___x_1098_;
goto v___jp_1083_;
}
}
}
}
case 1:
{
lean_object* v_node_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1111_; 
v_node_1101_ = lean_ctor_get(v_v_1080_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_v_1080_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1103_ = v_v_1080_;
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_node_1101_);
lean_dec(v_v_1080_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
size_t v___x_1105_; size_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1105_ = lean_usize_shift_right(v_x_1065_, v___x_1070_);
v___x_1106_ = lean_usize_add(v_x_1066_, v___x_1071_);
v___x_1107_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_node_1101_, v___x_1105_, v___x_1106_, v_x_1067_, v_x_1068_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1107_);
v___x_1109_ = v___x_1103_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
v___y_1084_ = v___x_1109_;
goto v___jp_1083_;
}
}
}
default: 
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v_x_1067_);
lean_ctor_set(v___x_1112_, 1, v_x_1068_);
v___y_1084_ = v___x_1112_;
goto v___jp_1083_;
}
}
v___jp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___x_1085_ = lean_array_fset(v_xs_x27_1082_, v_j_1074_, v___y_1084_);
lean_dec(v_j_1074_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1085_);
v___x_1087_ = v___x_1078_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
else
{
lean_object* v_ks_1115_; lean_object* v_vs_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1136_; 
v_ks_1115_ = lean_ctor_get(v_x_1064_, 0);
v_vs_1116_ = lean_ctor_get(v_x_1064_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_x_1064_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1118_ = v_x_1064_;
v_isShared_1119_ = v_isSharedCheck_1136_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_vs_1116_);
lean_inc(v_ks_1115_);
lean_dec(v_x_1064_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1136_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_ks_1115_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_vs_1116_);
v___x_1121_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v_newNode_1122_; uint8_t v___y_1124_; size_t v___x_1130_; uint8_t v___x_1131_; 
v_newNode_1122_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v___x_1121_, v_x_1067_, v_x_1068_);
v___x_1130_ = ((size_t)7ULL);
v___x_1131_ = lean_usize_dec_le(v___x_1130_, v_x_1066_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1132_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1122_);
v___x_1133_ = lean_unsigned_to_nat(4u);
v___x_1134_ = lean_nat_dec_lt(v___x_1132_, v___x_1133_);
lean_dec(v___x_1132_);
v___y_1124_ = v___x_1134_;
goto v___jp_1123_;
}
else
{
v___y_1124_ = v___x_1131_;
goto v___jp_1123_;
}
v___jp_1123_:
{
if (v___y_1124_ == 0)
{
lean_object* v_ks_1125_; lean_object* v_vs_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_ks_1125_ = lean_ctor_get(v_newNode_1122_, 0);
lean_inc_ref(v_ks_1125_);
v_vs_1126_ = lean_ctor_get(v_newNode_1122_, 1);
lean_inc_ref(v_vs_1126_);
lean_dec_ref(v_newNode_1122_);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__2);
v___x_1129_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_x_1066_, v_ks_1125_, v_vs_1126_, v___x_1127_, v___x_1128_);
lean_dec_ref(v_vs_1126_);
lean_dec_ref(v_ks_1125_);
return v___x_1129_;
}
else
{
return v_newNode_1122_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t v_depth_1137_, lean_object* v_keys_1138_, lean_object* v_vals_1139_, lean_object* v_i_1140_, lean_object* v_entries_1141_){
_start:
{
lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1142_ = lean_array_get_size(v_keys_1138_);
v___x_1143_ = lean_nat_dec_lt(v_i_1140_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_dec(v_i_1140_);
return v_entries_1141_;
}
else
{
lean_object* v_k_1144_; lean_object* v_v_1145_; uint64_t v___x_1146_; size_t v_h_1147_; size_t v___x_1148_; lean_object* v___x_1149_; size_t v___x_1150_; size_t v___x_1151_; size_t v___x_1152_; size_t v_h_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_k_1144_ = lean_array_fget_borrowed(v_keys_1138_, v_i_1140_);
v_v_1145_ = lean_array_fget_borrowed(v_vals_1139_, v_i_1140_);
v___x_1146_ = l_Lean_instHashableMVarId_hash(v_k_1144_);
v_h_1147_ = lean_uint64_to_usize(v___x_1146_);
v___x_1148_ = ((size_t)5ULL);
v___x_1149_ = lean_unsigned_to_nat(1u);
v___x_1150_ = ((size_t)1ULL);
v___x_1151_ = lean_usize_sub(v_depth_1137_, v___x_1150_);
v___x_1152_ = lean_usize_mul(v___x_1148_, v___x_1151_);
v_h_1153_ = lean_usize_shift_right(v_h_1147_, v___x_1152_);
v___x_1154_ = lean_nat_add(v_i_1140_, v___x_1149_);
lean_dec(v_i_1140_);
lean_inc(v_v_1145_);
lean_inc(v_k_1144_);
v___x_1155_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_entries_1141_, v_h_1153_, v_depth_1137_, v_k_1144_, v_v_1145_);
v_i_1140_ = v___x_1154_;
v_entries_1141_ = v___x_1155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object* v_depth_1157_, lean_object* v_keys_1158_, lean_object* v_vals_1159_, lean_object* v_i_1160_, lean_object* v_entries_1161_){
_start:
{
size_t v_depth_boxed_1162_; lean_object* v_res_1163_; 
v_depth_boxed_1162_ = lean_unbox_usize(v_depth_1157_);
lean_dec(v_depth_1157_);
v_res_1163_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_boxed_1162_, v_keys_1158_, v_vals_1159_, v_i_1160_, v_entries_1161_);
lean_dec_ref(v_vals_1159_);
lean_dec_ref(v_keys_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_x_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_, lean_object* v_x_1167_, lean_object* v_x_1168_){
_start:
{
size_t v_x_19344__boxed_1169_; size_t v_x_19345__boxed_1170_; lean_object* v_res_1171_; 
v_x_19344__boxed_1169_ = lean_unbox_usize(v_x_1165_);
lean_dec(v_x_1165_);
v_x_19345__boxed_1170_ = lean_unbox_usize(v_x_1166_);
lean_dec(v_x_1166_);
v_res_1171_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1164_, v_x_19344__boxed_1169_, v_x_19345__boxed_1170_, v_x_1167_, v_x_1168_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
uint64_t v___x_1175_; size_t v___x_1176_; size_t v___x_1177_; lean_object* v___x_1178_; 
v___x_1175_ = l_Lean_instHashableMVarId_hash(v_x_1173_);
v___x_1176_ = lean_uint64_to_usize(v___x_1175_);
v___x_1177_ = ((size_t)1ULL);
v___x_1178_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1172_, v___x_1176_, v___x_1177_, v_x_1173_, v_x_1174_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object* v_mvarId_1179_, lean_object* v_val_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v_mctx_1186_; lean_object* v_cache_1187_; lean_object* v_zetaDeltaFVarIds_1188_; lean_object* v_postponed_1189_; lean_object* v_diag_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1218_; 
v___x_1184_ = lean_st_ref_get(v___y_1182_);
lean_dec(v___x_1184_);
v___x_1185_ = lean_st_ref_take(v___y_1181_);
v_mctx_1186_ = lean_ctor_get(v___x_1185_, 0);
v_cache_1187_ = lean_ctor_get(v___x_1185_, 1);
v_zetaDeltaFVarIds_1188_ = lean_ctor_get(v___x_1185_, 2);
v_postponed_1189_ = lean_ctor_get(v___x_1185_, 3);
v_diag_1190_ = lean_ctor_get(v___x_1185_, 4);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1192_ = v___x_1185_;
v_isShared_1193_ = v_isSharedCheck_1218_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_diag_1190_);
lean_inc(v_postponed_1189_);
lean_inc(v_zetaDeltaFVarIds_1188_);
lean_inc(v_cache_1187_);
lean_inc(v_mctx_1186_);
lean_dec(v___x_1185_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1218_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v_depth_1194_; lean_object* v_levelAssignDepth_1195_; lean_object* v_lmvarCounter_1196_; lean_object* v_mvarCounter_1197_; lean_object* v_lDecls_1198_; lean_object* v_decls_1199_; lean_object* v_userNames_1200_; lean_object* v_lAssignment_1201_; lean_object* v_eAssignment_1202_; lean_object* v_dAssignment_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1217_; 
v_depth_1194_ = lean_ctor_get(v_mctx_1186_, 0);
v_levelAssignDepth_1195_ = lean_ctor_get(v_mctx_1186_, 1);
v_lmvarCounter_1196_ = lean_ctor_get(v_mctx_1186_, 2);
v_mvarCounter_1197_ = lean_ctor_get(v_mctx_1186_, 3);
v_lDecls_1198_ = lean_ctor_get(v_mctx_1186_, 4);
v_decls_1199_ = lean_ctor_get(v_mctx_1186_, 5);
v_userNames_1200_ = lean_ctor_get(v_mctx_1186_, 6);
v_lAssignment_1201_ = lean_ctor_get(v_mctx_1186_, 7);
v_eAssignment_1202_ = lean_ctor_get(v_mctx_1186_, 8);
v_dAssignment_1203_ = lean_ctor_get(v_mctx_1186_, 9);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_mctx_1186_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1205_ = v_mctx_1186_;
v_isShared_1206_ = v_isSharedCheck_1217_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_dAssignment_1203_);
lean_inc(v_eAssignment_1202_);
lean_inc(v_lAssignment_1201_);
lean_inc(v_userNames_1200_);
lean_inc(v_decls_1199_);
lean_inc(v_lDecls_1198_);
lean_inc(v_mvarCounter_1197_);
lean_inc(v_lmvarCounter_1196_);
lean_inc(v_levelAssignDepth_1195_);
lean_inc(v_depth_1194_);
lean_dec(v_mctx_1186_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1217_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_eAssignment_1202_, v_mvarId_1179_, v_val_1180_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 8, v___x_1207_);
v___x_1209_ = v___x_1205_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_depth_1194_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_levelAssignDepth_1195_);
lean_ctor_set(v_reuseFailAlloc_1216_, 2, v_lmvarCounter_1196_);
lean_ctor_set(v_reuseFailAlloc_1216_, 3, v_mvarCounter_1197_);
lean_ctor_set(v_reuseFailAlloc_1216_, 4, v_lDecls_1198_);
lean_ctor_set(v_reuseFailAlloc_1216_, 5, v_decls_1199_);
lean_ctor_set(v_reuseFailAlloc_1216_, 6, v_userNames_1200_);
lean_ctor_set(v_reuseFailAlloc_1216_, 7, v_lAssignment_1201_);
lean_ctor_set(v_reuseFailAlloc_1216_, 8, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1216_, 9, v_dAssignment_1203_);
v___x_1209_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1211_; 
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1209_);
v___x_1211_ = v___x_1192_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_cache_1187_);
lean_ctor_set(v_reuseFailAlloc_1215_, 2, v_zetaDeltaFVarIds_1188_);
lean_ctor_set(v_reuseFailAlloc_1215_, 3, v_postponed_1189_);
lean_ctor_set(v_reuseFailAlloc_1215_, 4, v_diag_1190_);
v___x_1211_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = lean_st_ref_set(v___y_1181_, v___x_1211_);
v___x_1213_ = lean_box(0);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object* v_mvarId_1219_, lean_object* v_val_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1219_, v_val_1220_, v___y_1221_, v___y_1222_);
lean_dec(v___y_1222_);
lean_dec(v___y_1221_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(lean_object* v_ref_1225_, lean_object* v_msg_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_fileName_1236_; lean_object* v_fileMap_1237_; lean_object* v_options_1238_; lean_object* v_currRecDepth_1239_; lean_object* v_maxRecDepth_1240_; lean_object* v_ref_1241_; lean_object* v_currNamespace_1242_; lean_object* v_openDecls_1243_; lean_object* v_initHeartbeats_1244_; lean_object* v_maxHeartbeats_1245_; lean_object* v_quotContext_1246_; lean_object* v_currMacroScope_1247_; uint8_t v_diag_1248_; lean_object* v_cancelTk_x3f_1249_; uint8_t v_suppressElabErrors_1250_; lean_object* v_inheritedTraceOptions_1251_; lean_object* v_ref_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v_fileName_1236_ = lean_ctor_get(v___y_1233_, 0);
v_fileMap_1237_ = lean_ctor_get(v___y_1233_, 1);
v_options_1238_ = lean_ctor_get(v___y_1233_, 2);
v_currRecDepth_1239_ = lean_ctor_get(v___y_1233_, 3);
v_maxRecDepth_1240_ = lean_ctor_get(v___y_1233_, 4);
v_ref_1241_ = lean_ctor_get(v___y_1233_, 5);
v_currNamespace_1242_ = lean_ctor_get(v___y_1233_, 6);
v_openDecls_1243_ = lean_ctor_get(v___y_1233_, 7);
v_initHeartbeats_1244_ = lean_ctor_get(v___y_1233_, 8);
v_maxHeartbeats_1245_ = lean_ctor_get(v___y_1233_, 9);
v_quotContext_1246_ = lean_ctor_get(v___y_1233_, 10);
v_currMacroScope_1247_ = lean_ctor_get(v___y_1233_, 11);
v_diag_1248_ = lean_ctor_get_uint8(v___y_1233_, sizeof(void*)*14);
v_cancelTk_x3f_1249_ = lean_ctor_get(v___y_1233_, 12);
v_suppressElabErrors_1250_ = lean_ctor_get_uint8(v___y_1233_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1251_ = lean_ctor_get(v___y_1233_, 13);
v_ref_1252_ = l_Lean_replaceRef(v_ref_1225_, v_ref_1241_);
lean_inc_ref(v_inheritedTraceOptions_1251_);
lean_inc(v_cancelTk_x3f_1249_);
lean_inc(v_currMacroScope_1247_);
lean_inc(v_quotContext_1246_);
lean_inc(v_maxHeartbeats_1245_);
lean_inc(v_initHeartbeats_1244_);
lean_inc(v_openDecls_1243_);
lean_inc(v_currNamespace_1242_);
lean_inc(v_maxRecDepth_1240_);
lean_inc(v_currRecDepth_1239_);
lean_inc_ref(v_options_1238_);
lean_inc_ref(v_fileMap_1237_);
lean_inc_ref(v_fileName_1236_);
v___x_1253_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1253_, 0, v_fileName_1236_);
lean_ctor_set(v___x_1253_, 1, v_fileMap_1237_);
lean_ctor_set(v___x_1253_, 2, v_options_1238_);
lean_ctor_set(v___x_1253_, 3, v_currRecDepth_1239_);
lean_ctor_set(v___x_1253_, 4, v_maxRecDepth_1240_);
lean_ctor_set(v___x_1253_, 5, v_ref_1252_);
lean_ctor_set(v___x_1253_, 6, v_currNamespace_1242_);
lean_ctor_set(v___x_1253_, 7, v_openDecls_1243_);
lean_ctor_set(v___x_1253_, 8, v_initHeartbeats_1244_);
lean_ctor_set(v___x_1253_, 9, v_maxHeartbeats_1245_);
lean_ctor_set(v___x_1253_, 10, v_quotContext_1246_);
lean_ctor_set(v___x_1253_, 11, v_currMacroScope_1247_);
lean_ctor_set(v___x_1253_, 12, v_cancelTk_x3f_1249_);
lean_ctor_set(v___x_1253_, 13, v_inheritedTraceOptions_1251_);
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*14, v_diag_1248_);
lean_ctor_set_uint8(v___x_1253_, sizeof(void*)*14 + 1, v_suppressElabErrors_1250_);
v___x_1254_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_1226_, v___y_1231_, v___y_1232_, v___x_1253_, v___y_1234_);
lean_dec_ref(v___x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object* v_ref_1255_, lean_object* v_msg_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(v_ref_1255_, v_msg_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v_ref_1255_);
return v_res_1266_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_mk_string_unchecked("positive integer expected", 25, 25);
return v___x_1267_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0);
v___x_1269_ = l_Lean_stringToMessageData(v___x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(lean_object* v_as_1270_, lean_object* v_i_1271_, lean_object* v_j_1272_, lean_object* v_bs_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_zero_1283_; uint8_t v_isZero_1284_; 
v_zero_1283_ = lean_unsigned_to_nat(0u);
v_isZero_1284_ = lean_nat_dec_eq(v_i_1271_, v_zero_1283_);
if (v_isZero_1284_ == 1)
{
lean_object* v___x_1285_; 
lean_dec(v_j_1272_);
lean_dec(v_i_1271_);
v___x_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1285_, 0, v_bs_1273_);
return v___x_1285_;
}
else
{
lean_object* v_one_1286_; lean_object* v_n_1287_; lean_object* v_a_1289_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v_isZero_1295_; 
v_one_1286_ = lean_unsigned_to_nat(1u);
v_n_1287_ = lean_nat_sub(v_i_1271_, v_one_1286_);
lean_dec(v_i_1271_);
v___x_1293_ = lean_array_fget_borrowed(v_as_1270_, v_j_1272_);
v___x_1294_ = l_Lean_TSyntax_getNat(v___x_1293_);
v_isZero_1295_ = lean_nat_dec_eq(v___x_1294_, v_zero_1283_);
if (v_isZero_1295_ == 1)
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_dec(v___x_1294_);
lean_dec(v_n_1287_);
lean_dec_ref(v_bs_1273_);
lean_dec(v_j_1272_);
v___x_1296_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1);
v___x_1297_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(v___x_1293_, v___x_1296_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1297_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1297_);
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
else
{
lean_object* v_n_1306_; lean_object* v___x_1307_; 
v_n_1306_ = lean_nat_sub(v___x_1294_, v_one_1286_);
lean_dec(v___x_1294_);
lean_inc(v_j_1272_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v_n_1306_);
lean_ctor_set(v___x_1307_, 1, v_j_1272_);
v_a_1289_ = v___x_1307_;
goto v___jp_1288_;
}
v___jp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_nat_add(v_j_1272_, v_one_1286_);
lean_dec(v_j_1272_);
v___x_1291_ = lean_array_push(v_bs_1273_, v_a_1289_);
v_i_1271_ = v_n_1287_;
v_j_1272_ = v___x_1290_;
v_bs_1273_ = v___x_1291_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object* v_as_1308_, lean_object* v_i_1309_, lean_object* v_j_1310_, lean_object* v_bs_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_as_1308_, v_i_1309_, v_j_1310_, v_bs_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec_ref(v_as_1308_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t v_sz_1322_, size_t v_i_1323_, lean_object* v_bs_1324_){
_start:
{
uint8_t v___x_1325_; 
v___x_1325_ = lean_usize_dec_lt(v_i_1323_, v_sz_1322_);
if (v___x_1325_ == 0)
{
return v_bs_1324_;
}
else
{
lean_object* v_v_1326_; lean_object* v_snd_1327_; lean_object* v___x_1328_; lean_object* v_bs_x27_1329_; size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; 
v_v_1326_ = lean_array_uget_borrowed(v_bs_1324_, v_i_1323_);
v_snd_1327_ = lean_ctor_get(v_v_1326_, 1);
lean_inc(v_snd_1327_);
v___x_1328_ = lean_unsigned_to_nat(0u);
v_bs_x27_1329_ = lean_array_uset(v_bs_1324_, v_i_1323_, v___x_1328_);
v___x_1330_ = ((size_t)1ULL);
v___x_1331_ = lean_usize_add(v_i_1323_, v___x_1330_);
v___x_1332_ = lean_array_uset(v_bs_x27_1329_, v_i_1323_, v_snd_1327_);
v_i_1323_ = v___x_1331_;
v_bs_1324_ = v___x_1332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object* v_sz_1334_, lean_object* v_i_1335_, lean_object* v_bs_1336_){
_start:
{
size_t v_sz_boxed_1337_; size_t v_i_boxed_1338_; lean_object* v_res_1339_; 
v_sz_boxed_1337_ = lean_unbox_usize(v_sz_1334_);
lean_dec(v_sz_1334_);
v_i_boxed_1338_ = lean_unbox_usize(v_i_1335_);
lean_dec(v_i_1335_);
v_res_1339_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_boxed_1337_, v_i_boxed_1338_, v_bs_1336_);
return v_res_1339_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1340_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0);
v___x_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
return v___x_1342_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1343_ = lean_unsigned_to_nat(0u);
v___x_1344_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
lean_ctor_set(v___x_1345_, 1, v___x_1343_);
return v___x_1345_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_unsigned_to_nat(32u);
v___x_1347_ = lean_mk_empty_array_with_capacity(v___x_1346_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4(void){
_start:
{
size_t v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1349_ = ((size_t)5ULL);
v___x_1350_ = lean_unsigned_to_nat(0u);
v___x_1351_ = lean_unsigned_to_nat(32u);
v___x_1352_ = lean_mk_empty_array_with_capacity(v___x_1351_);
v___x_1353_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3);
v___x_1354_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v___x_1352_);
lean_ctor_set(v___x_1354_, 2, v___x_1350_);
lean_ctor_set(v___x_1354_, 3, v___x_1350_);
lean_ctor_set_usize(v___x_1354_, 4, v___x_1349_);
return v___x_1354_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4);
v___x_1356_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1357_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
lean_ctor_set(v___x_1357_, 2, v___x_1356_);
lean_ctor_set(v___x_1357_, 3, v___x_1355_);
return v___x_1357_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5);
v___x_1359_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2);
v___x_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v___x_1358_);
return v___x_1360_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7(void){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_mk_string_unchecked("'pattern' conv tactic failed, pattern was not found", 51, 51);
return v___x_1361_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7);
v___x_1363_ = l_Lean_stringToMessageData(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9(void){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_mk_string_unchecked("'pattern' conv tactic failed, pattern was found only ", 53, 53);
return v___x_1364_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9);
v___x_1366_ = l_Lean_stringToMessageData(v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11(void){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_mk_string_unchecked(" times but ", 11, 11);
return v___x_1367_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11);
v___x_1369_ = l_Lean_stringToMessageData(v___x_1368_);
return v___x_1369_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13(void){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_mk_string_unchecked(" expected", 9, 9);
return v___x_1370_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13);
v___x_1372_ = l_Lean_stringToMessageData(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_unsigned_to_nat(0u);
v___x_1374_ = lean_mk_empty_array_with_capacity(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16(void){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_mk_string_unchecked("occurrence list is not distinct", 31, 31);
return v___x_1375_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16);
v___x_1377_ = l_Lean_stringToMessageData(v___x_1376_);
return v___x_1377_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___f_1379_; 
v___x_1378_ = lean_box(0);
v___f_1379_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed), 10, 1);
lean_closure_set(v___f_1379_, 0, v___x_1378_);
return v___f_1379_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___f_1381_; 
v___x_1380_ = lean_box(0);
v___f_1381_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed), 10, 1);
lean_closure_set(v___f_1381_, 0, v___x_1380_);
return v___f_1381_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
return v___x_1383_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20);
v___x_1386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
lean_ctor_set(v___x_1386_, 1, v___x_1384_);
return v___x_1386_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1387_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21);
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15);
v___x_1390_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v___x_1388_);
lean_ctor_set(v___x_1390_, 2, v___x_1387_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23(void){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_mk_string_unchecked("occsWildcard", 12, 12);
return v___x_1391_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24(void){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_mk_string_unchecked("occsIndexed", 11, 11);
return v___x_1392_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = lean_unsigned_to_nat(0u);
v___x_1394_ = lean_mk_empty_array_with_capacity(v___x_1393_);
return v___x_1394_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25);
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
return v___x_1396_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27(void){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_mk_string_unchecked("occs", 4, 4);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t v___x_1398_, lean_object* v___f_1399_, uint8_t v___x_1400_, lean_object* v_stx_1401_, lean_object* v___x_1402_, lean_object* v___x_1403_, lean_object* v___x_1404_, lean_object* v___x_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v___y_1416_; lean_object* v_subgoals_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v___y_1500_; lean_object* v___y_1501_; lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1504_; 
if (v___x_1398_ == 0)
{
lean_object* v___x_1506_; 
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___f_1399_);
v___x_1506_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
return v___x_1506_;
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; uint8_t v___y_1540_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v_occs_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v_occs_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = lean_unsigned_to_nat(1u);
v___x_1831_ = l_Lean_Syntax_getArg(v_stx_1401_, v___x_1508_);
v___x_1832_ = l_Lean_Syntax_isNone(v___x_1831_);
if (v___x_1832_ == 0)
{
uint8_t v___x_1833_; 
lean_inc(v___x_1831_);
v___x_1833_ = l_Lean_Syntax_matchesNull(v___x_1831_, v___x_1508_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; 
lean_dec(v___x_1831_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___f_1399_);
v___x_1834_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1835_ = l_Lean_Syntax_getArg(v___x_1831_, v___x_1507_);
lean_dec(v___x_1831_);
v___x_1836_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
lean_inc_ref(v___x_1403_);
lean_inc_ref(v___x_1402_);
v___x_1837_ = l_Lean_Name_mkStr5(v___x_1402_, v___x_1403_, v___x_1404_, v___x_1405_, v___x_1836_);
lean_inc(v___x_1835_);
v___x_1838_ = l_Lean_Syntax_isOfKind(v___x_1835_, v___x_1837_);
lean_dec(v___x_1837_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
lean_dec(v___x_1835_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___f_1399_);
v___x_1839_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
return v___x_1839_;
}
else
{
lean_object* v___x_1840_; lean_object* v_occs_1841_; lean_object* v___x_1842_; 
v___x_1840_ = lean_unsigned_to_nat(3u);
v_occs_1841_ = l_Lean_Syntax_getArg(v___x_1835_, v___x_1840_);
lean_dec(v___x_1835_);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_occs_1841_);
v_occs_1737_ = v___x_1842_;
v___y_1738_ = v___y_1406_;
v___y_1739_ = v___y_1407_;
v___y_1740_ = v___y_1408_;
v___y_1741_ = v___y_1409_;
v___y_1742_ = v___y_1410_;
v___y_1743_ = v___y_1411_;
v___y_1744_ = v___y_1412_;
v___y_1745_ = v___y_1413_;
goto v___jp_1736_;
}
}
}
else
{
lean_object* v___x_1843_; 
lean_dec(v___x_1831_);
v___x_1843_ = lean_box(0);
v_occs_1737_ = v___x_1843_;
v___y_1738_ = v___y_1406_;
v___y_1739_ = v___y_1407_;
v___y_1740_ = v___y_1408_;
v___y_1741_ = v___y_1409_;
v___y_1742_ = v___y_1410_;
v___y_1743_ = v___y_1411_;
v___y_1744_ = v___y_1412_;
v___y_1745_ = v___y_1413_;
goto v___jp_1736_;
}
v___jp_1509_:
{
lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1520_ = lean_array_get_size(v___y_1511_);
v___x_1521_ = lean_nat_dec_eq(v___x_1520_, v___x_1507_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1522_ = lean_nat_sub(v___x_1520_, v___x_1508_);
v___x_1523_ = lean_nat_dec_le(v___x_1507_, v___x_1522_);
if (v___x_1523_ == 0)
{
lean_inc(v___x_1522_);
v___y_1492_ = v___y_1513_;
v___y_1493_ = v___x_1522_;
v___y_1494_ = v___y_1517_;
v___y_1495_ = v___x_1520_;
v___y_1496_ = v___y_1515_;
v___y_1497_ = v___y_1514_;
v___y_1498_ = v___y_1519_;
v___y_1499_ = v___y_1518_;
v___y_1500_ = v___y_1510_;
v___y_1501_ = v___y_1511_;
v___y_1502_ = v___y_1516_;
v___y_1503_ = v___y_1512_;
v___y_1504_ = v___x_1522_;
goto v___jp_1491_;
}
else
{
v___y_1492_ = v___y_1513_;
v___y_1493_ = v___x_1522_;
v___y_1494_ = v___y_1517_;
v___y_1495_ = v___x_1520_;
v___y_1496_ = v___y_1515_;
v___y_1497_ = v___y_1514_;
v___y_1498_ = v___y_1519_;
v___y_1499_ = v___y_1518_;
v___y_1500_ = v___y_1510_;
v___y_1501_ = v___y_1511_;
v___y_1502_ = v___y_1516_;
v___y_1503_ = v___y_1512_;
v___y_1504_ = v___x_1507_;
goto v___jp_1491_;
}
}
else
{
v___y_1463_ = v___y_1517_;
v___y_1464_ = v___y_1515_;
v___y_1465_ = v___y_1513_;
v___y_1466_ = v___y_1514_;
v___y_1467_ = v___y_1519_;
v___y_1468_ = v___y_1518_;
v___y_1469_ = v___y_1510_;
v___y_1470_ = v___y_1516_;
v___y_1471_ = v___y_1512_;
v___y_1472_ = v___y_1511_;
goto v___jp_1462_;
}
}
v___jp_1524_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1541_ = l_Lean_Meta_Simp_Context_setMemoize(v___y_1526_, v___y_1540_);
v___x_1542_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6);
lean_inc(v___y_1535_);
lean_inc_ref(v___y_1534_);
v___x_1543_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed), 11, 2);
lean_closure_set(v___x_1543_, 0, v___y_1534_);
lean_closure_set(v___x_1543_, 1, v___y_1535_);
lean_inc_ref(v___y_1538_);
lean_inc_ref(v___y_1536_);
v___x_1544_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
lean_ctor_set(v___x_1544_, 1, v___y_1537_);
lean_ctor_set(v___x_1544_, 2, v___y_1536_);
lean_ctor_set(v___x_1544_, 3, v___f_1399_);
lean_ctor_set(v___x_1544_, 4, v___y_1538_);
lean_ctor_set_uint8(v___x_1544_, sizeof(void*)*5, v___x_1400_);
v___x_1545_ = l_Lean_Meta_Simp_main(v___y_1528_, v___x_1541_, v___x_1542_, v___x_1544_, v___y_1529_, v___y_1527_, v___y_1539_, v___y_1531_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v_fst_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1623_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref(v___x_1545_);
v_fst_1547_ = lean_ctor_get(v_a_1546_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_a_1546_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; 
v_unused_1624_ = lean_ctor_get(v_a_1546_, 1);
lean_dec(v_unused_1624_);
v___x_1549_ = v_a_1546_;
v_isShared_1550_ = v_isSharedCheck_1623_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_fst_1547_);
lean_dec(v_a_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1623_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = lean_st_ref_get(v___y_1531_);
lean_dec(v___x_1551_);
v___x_1552_ = lean_st_ref_get(v___y_1535_);
lean_dec(v___y_1535_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_subgoals_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_subgoals_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc_ref(v_subgoals_1553_);
lean_dec_ref(v___x_1552_);
v___x_1554_ = lean_array_get_size(v_subgoals_1553_);
v___x_1555_ = lean_nat_dec_eq(v___x_1554_, v___x_1507_);
if (v___x_1555_ == 0)
{
lean_del_object(v___x_1549_);
lean_dec_ref(v___y_1534_);
v___y_1416_ = v_fst_1547_;
v_subgoals_1417_ = v_subgoals_1553_;
v___y_1418_ = v___y_1525_;
v___y_1419_ = v___y_1530_;
v___y_1420_ = v___y_1533_;
v___y_1421_ = v___y_1532_;
v___y_1422_ = v___y_1529_;
v___y_1423_ = v___y_1527_;
v___y_1424_ = v___y_1539_;
v___y_1425_ = v___y_1531_;
goto v___jp_1415_;
}
else
{
lean_object* v_expr_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1560_; 
lean_dec_ref(v_subgoals_1553_);
lean_dec(v_fst_1547_);
v_expr_1556_ = lean_ctor_get(v___y_1534_, 2);
lean_inc_ref(v_expr_1556_);
lean_dec_ref(v___y_1534_);
v___x_1557_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1558_ = l_Lean_indentExpr(v_expr_1556_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 7);
lean_ctor_set(v___x_1549_, 1, v___x_1558_);
lean_ctor_set(v___x_1549_, 0, v___x_1557_);
v___x_1560_ = v___x_1549_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1561_; lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v___x_1561_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1560_, v___y_1529_, v___y_1527_, v___y_1539_, v___y_1531_);
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1561_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1561_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
else
{
lean_object* v_subgoals_1571_; lean_object* v_idx_1572_; lean_object* v_remaining_1573_; uint8_t v___x_1574_; 
v_subgoals_1571_ = lean_ctor_get(v___x_1552_, 0);
lean_inc_ref(v_subgoals_1571_);
v_idx_1572_ = lean_ctor_get(v___x_1552_, 1);
lean_inc(v_idx_1572_);
v_remaining_1573_ = lean_ctor_get(v___x_1552_, 2);
lean_inc(v_remaining_1573_);
lean_dec_ref(v___x_1552_);
v___x_1574_ = lean_nat_dec_eq(v_idx_1572_, v___x_1507_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
lean_dec_ref(v___y_1534_);
v___x_1575_ = l_List_getLast_x3f___redArg(v_remaining_1573_);
lean_dec(v_remaining_1573_);
if (lean_obj_tag(v___x_1575_) == 1)
{
lean_object* v_val_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1607_; 
lean_dec_ref(v_subgoals_1571_);
lean_dec(v_fst_1547_);
v_val_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1607_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_val_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1607_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v_fst_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1605_; 
v_fst_1580_ = lean_ctor_get(v_val_1576_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_val_1576_);
if (v_isSharedCheck_1605_ == 0)
{
lean_object* v_unused_1606_; 
v_unused_1606_ = lean_ctor_get(v_val_1576_, 1);
lean_dec(v_unused_1606_);
v___x_1582_ = v_val_1576_;
v_isShared_1583_ = v_isSharedCheck_1605_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_fst_1580_);
lean_dec(v_val_1576_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1605_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1584_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10);
v___x_1585_ = l_Nat_reprFast(v_idx_1572_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 3);
lean_ctor_set(v___x_1578_, 0, v___x_1585_);
v___x_1587_ = v___x_1578_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1588_ = l_Lean_MessageData_ofFormat(v___x_1587_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set_tag(v___x_1582_, 7);
lean_ctor_set(v___x_1582_, 1, v___x_1588_);
lean_ctor_set(v___x_1582_, 0, v___x_1584_);
v___x_1590_ = v___x_1582_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1588_);
v___x_1590_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1591_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 7);
lean_ctor_set(v___x_1549_, 1, v___x_1591_);
lean_ctor_set(v___x_1549_, 0, v___x_1590_);
v___x_1593_ = v___x_1549_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1590_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1594_ = lean_nat_add(v_fst_1580_, v___x_1508_);
lean_dec(v_fst_1580_);
v___x_1595_ = l_Nat_reprFast(v___x_1594_);
v___x_1596_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
v___x_1597_ = l_Lean_MessageData_ofFormat(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1593_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14);
v___x_1600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1600_, v___y_1529_, v___y_1527_, v___y_1539_, v___y_1531_);
return v___x_1601_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1575_);
lean_dec(v_idx_1572_);
lean_del_object(v___x_1549_);
v___y_1510_ = v_fst_1547_;
v___y_1511_ = v_subgoals_1571_;
v___y_1512_ = v___y_1525_;
v___y_1513_ = v___y_1530_;
v___y_1514_ = v___y_1533_;
v___y_1515_ = v___y_1532_;
v___y_1516_ = v___y_1529_;
v___y_1517_ = v___y_1527_;
v___y_1518_ = v___y_1539_;
v___y_1519_ = v___y_1531_;
goto v___jp_1509_;
}
}
else
{
lean_object* v_expr_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
lean_dec(v_remaining_1573_);
lean_dec(v_idx_1572_);
lean_dec_ref(v_subgoals_1571_);
lean_dec(v_fst_1547_);
v_expr_1608_ = lean_ctor_get(v___y_1534_, 2);
lean_inc_ref(v_expr_1608_);
lean_dec_ref(v___y_1534_);
v___x_1609_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1610_ = l_Lean_indentExpr(v_expr_1608_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 7);
lean_ctor_set(v___x_1549_, 1, v___x_1610_);
lean_ctor_set(v___x_1549_, 0, v___x_1609_);
v___x_1612_ = v___x_1549_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1609_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1613_; lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
v___x_1613_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1612_, v___y_1529_, v___y_1527_, v___y_1539_, v___y_1531_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
v_a_1625_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1545_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1545_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
v___jp_1633_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1648_ = lean_st_ref_get(v___y_1647_);
lean_dec(v___x_1648_);
lean_inc_ref(v_occs_1639_);
v___x_1649_ = lean_st_mk_ref(v_occs_1639_);
v___x_1650_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v___y_1644_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1650_) == 0)
{
if (lean_obj_tag(v_occs_1639_) == 0)
{
lean_object* v_a_1651_; 
lean_dec_ref(v_occs_1639_);
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref(v___x_1650_);
v___y_1525_ = v___y_1640_;
v___y_1526_ = v_a_1651_;
v___y_1527_ = v___y_1645_;
v___y_1528_ = v___y_1636_;
v___y_1529_ = v___y_1644_;
v___y_1530_ = v___y_1641_;
v___y_1531_ = v___y_1647_;
v___y_1532_ = v___y_1643_;
v___y_1533_ = v___y_1642_;
v___y_1534_ = v___y_1634_;
v___y_1535_ = v___x_1649_;
v___y_1536_ = v___y_1635_;
v___y_1537_ = v___y_1638_;
v___y_1538_ = v___y_1637_;
v___y_1539_ = v___y_1646_;
v___y_1540_ = v___x_1400_;
goto v___jp_1524_;
}
else
{
lean_object* v_a_1652_; uint8_t v___x_1653_; 
lean_dec_ref(v_occs_1639_);
v_a_1652_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1652_);
lean_dec_ref(v___x_1650_);
v___x_1653_ = 0;
v___y_1525_ = v___y_1640_;
v___y_1526_ = v_a_1652_;
v___y_1527_ = v___y_1645_;
v___y_1528_ = v___y_1636_;
v___y_1529_ = v___y_1644_;
v___y_1530_ = v___y_1641_;
v___y_1531_ = v___y_1647_;
v___y_1532_ = v___y_1643_;
v___y_1533_ = v___y_1642_;
v___y_1534_ = v___y_1634_;
v___y_1535_ = v___x_1649_;
v___y_1536_ = v___y_1635_;
v___y_1537_ = v___y_1638_;
v___y_1538_ = v___y_1637_;
v___y_1539_ = v___y_1646_;
v___y_1540_ = v___x_1653_;
goto v___jp_1524_;
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v___x_1649_);
lean_dec_ref(v_occs_1639_);
lean_dec_ref(v___y_1638_);
lean_dec_ref(v___y_1636_);
lean_dec_ref(v___y_1634_);
lean_dec_ref(v___f_1399_);
v_a_1654_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1650_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1650_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
v___jp_1662_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15);
v___x_1678_ = lean_array_to_list(v___y_1663_);
v___x_1679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1507_);
lean_ctor_set(v___x_1679_, 2, v___x_1678_);
v___y_1634_ = v___y_1664_;
v___y_1635_ = v___y_1665_;
v___y_1636_ = v___y_1666_;
v___y_1637_ = v___y_1668_;
v___y_1638_ = v___y_1667_;
v_occs_1639_ = v___x_1679_;
v___y_1640_ = v___y_1669_;
v___y_1641_ = v___y_1670_;
v___y_1642_ = v___y_1671_;
v___y_1643_ = v___y_1672_;
v___y_1644_ = v___y_1673_;
v___y_1645_ = v___y_1674_;
v___y_1646_ = v___y_1675_;
v___y_1647_ = v___y_1676_;
goto v___jp_1633_;
}
v___jp_1680_:
{
uint8_t v___x_1695_; 
v___x_1695_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v___y_1694_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
lean_dec_ref(v___y_1694_);
lean_dec_ref(v___y_1690_);
lean_dec_ref(v___y_1687_);
lean_dec_ref(v___y_1684_);
lean_dec_ref(v___f_1399_);
v___x_1696_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17);
v___x_1697_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1696_, v___y_1681_, v___y_1683_, v___y_1686_, v___y_1692_);
return v___x_1697_;
}
else
{
v___y_1663_ = v___y_1694_;
v___y_1664_ = v___y_1687_;
v___y_1665_ = v___y_1688_;
v___y_1666_ = v___y_1684_;
v___y_1667_ = v___y_1690_;
v___y_1668_ = v___y_1691_;
v___y_1669_ = v___y_1693_;
v___y_1670_ = v___y_1682_;
v___y_1671_ = v___y_1689_;
v___y_1672_ = v___y_1685_;
v___y_1673_ = v___y_1681_;
v___y_1674_ = v___y_1683_;
v___y_1675_ = v___y_1686_;
v___y_1676_ = v___y_1692_;
goto v___jp_1662_;
}
}
v___jp_1698_:
{
lean_object* v___x_1716_; 
v___x_1716_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v___y_1702_, v___y_1704_, v___y_1708_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec(v___y_1702_);
v___y_1681_ = v___y_1699_;
v___y_1682_ = v___y_1700_;
v___y_1683_ = v___y_1701_;
v___y_1684_ = v___y_1703_;
v___y_1685_ = v___y_1705_;
v___y_1686_ = v___y_1706_;
v___y_1687_ = v___y_1707_;
v___y_1688_ = v___y_1709_;
v___y_1689_ = v___y_1710_;
v___y_1690_ = v___y_1713_;
v___y_1691_ = v___y_1712_;
v___y_1692_ = v___y_1711_;
v___y_1693_ = v___y_1714_;
v___y_1694_ = v___x_1716_;
goto v___jp_1680_;
}
v___jp_1717_:
{
uint8_t v___x_1735_; 
v___x_1735_ = lean_nat_dec_le(v___y_1734_, v___y_1721_);
if (v___x_1735_ == 0)
{
lean_dec(v___y_1721_);
lean_inc(v___y_1734_);
v___y_1699_ = v___y_1718_;
v___y_1700_ = v___y_1719_;
v___y_1701_ = v___y_1720_;
v___y_1702_ = v___y_1722_;
v___y_1703_ = v___y_1723_;
v___y_1704_ = v___y_1724_;
v___y_1705_ = v___y_1725_;
v___y_1706_ = v___y_1726_;
v___y_1707_ = v___y_1727_;
v___y_1708_ = v___y_1734_;
v___y_1709_ = v___y_1728_;
v___y_1710_ = v___y_1729_;
v___y_1711_ = v___y_1732_;
v___y_1712_ = v___y_1731_;
v___y_1713_ = v___y_1730_;
v___y_1714_ = v___y_1733_;
v___y_1715_ = v___y_1734_;
goto v___jp_1698_;
}
else
{
v___y_1699_ = v___y_1718_;
v___y_1700_ = v___y_1719_;
v___y_1701_ = v___y_1720_;
v___y_1702_ = v___y_1722_;
v___y_1703_ = v___y_1723_;
v___y_1704_ = v___y_1724_;
v___y_1705_ = v___y_1725_;
v___y_1706_ = v___y_1726_;
v___y_1707_ = v___y_1727_;
v___y_1708_ = v___y_1734_;
v___y_1709_ = v___y_1728_;
v___y_1710_ = v___y_1729_;
v___y_1711_ = v___y_1732_;
v___y_1712_ = v___y_1731_;
v___y_1713_ = v___y_1730_;
v___y_1714_ = v___y_1733_;
v___y_1715_ = v___y_1721_;
goto v___jp_1698_;
}
}
v___jp_1736_:
{
lean_object* v_declName_x3f_1746_; lean_object* v_macroStack_1747_; uint8_t v_mayPostpone_1748_; uint8_t v_errToSorry_1749_; lean_object* v_autoBoundImplicitContext_1750_; lean_object* v_autoBoundImplicitForbidden_1751_; lean_object* v_sectionVars_1752_; lean_object* v_sectionFVars_1753_; uint8_t v_implicitLambda_1754_; uint8_t v_heedElabAsElim_1755_; uint8_t v_isNoncomputableSection_1756_; uint8_t v_isMetaSection_1757_; uint8_t v_inPattern_1758_; lean_object* v_tacSnap_x3f_1759_; uint8_t v_saveRecAppSyntax_1760_; uint8_t v_holesAsSyntheticOpaque_1761_; uint8_t v_checkDeprecated_1762_; lean_object* v_fixedTermElabs_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___f_1768_; lean_object* v___f_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_declName_x3f_1746_ = lean_ctor_get(v___y_1740_, 0);
v_macroStack_1747_ = lean_ctor_get(v___y_1740_, 1);
v_mayPostpone_1748_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8);
v_errToSorry_1749_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1750_ = lean_ctor_get(v___y_1740_, 2);
v_autoBoundImplicitForbidden_1751_ = lean_ctor_get(v___y_1740_, 3);
v_sectionVars_1752_ = lean_ctor_get(v___y_1740_, 4);
v_sectionFVars_1753_ = lean_ctor_get(v___y_1740_, 5);
v_implicitLambda_1754_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1755_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1756_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 4);
v_isMetaSection_1757_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 5);
v_inPattern_1758_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1759_ = lean_ctor_get(v___y_1740_, 6);
v_saveRecAppSyntax_1760_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1761_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 9);
v_checkDeprecated_1762_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*8 + 10);
v_fixedTermElabs_1763_ = lean_ctor_get(v___y_1740_, 7);
v___x_1764_ = lean_unsigned_to_nat(2u);
v___x_1765_ = l_Lean_Syntax_getArg(v_stx_1401_, v___x_1764_);
v___x_1766_ = lean_box(0);
v___x_1767_ = lean_box(v___x_1400_);
lean_inc(v___x_1765_);
v___f_1768_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1768_, 0, v___x_1765_);
lean_closure_set(v___f_1768_, 1, v___x_1766_);
lean_closure_set(v___f_1768_, 2, v___x_1767_);
v___f_1769_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed), 9, 2);
lean_closure_set(v___f_1769_, 0, v___x_1765_);
lean_closure_set(v___f_1769_, 1, v___f_1768_);
lean_inc_ref(v_fixedTermElabs_1763_);
lean_inc(v_tacSnap_x3f_1759_);
lean_inc(v_sectionFVars_1753_);
lean_inc(v_sectionVars_1752_);
lean_inc_ref(v_autoBoundImplicitForbidden_1751_);
lean_inc(v_autoBoundImplicitContext_1750_);
lean_inc(v_macroStack_1747_);
lean_inc(v_declName_x3f_1746_);
v___x_1770_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_1770_, 0, v_declName_x3f_1746_);
lean_ctor_set(v___x_1770_, 1, v_macroStack_1747_);
lean_ctor_set(v___x_1770_, 2, v_autoBoundImplicitContext_1750_);
lean_ctor_set(v___x_1770_, 3, v_autoBoundImplicitForbidden_1751_);
lean_ctor_set(v___x_1770_, 4, v_sectionVars_1752_);
lean_ctor_set(v___x_1770_, 5, v_sectionFVars_1753_);
lean_ctor_set(v___x_1770_, 6, v_tacSnap_x3f_1759_);
lean_ctor_set(v___x_1770_, 7, v_fixedTermElabs_1763_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8, v_mayPostpone_1748_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 1, v_errToSorry_1749_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 2, v_implicitLambda_1754_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 3, v_heedElabAsElim_1755_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1756_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 5, v_isMetaSection_1757_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 6, v___x_1400_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 7, v_inPattern_1758_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1760_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_1761_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*8 + 10, v_checkDeprecated_1762_);
v___x_1771_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_1769_, v___x_1770_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec_ref(v___x_1770_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref(v___x_1771_);
v___x_1773_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_1739_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___f_1776_; lean_object* v___f_1777_; lean_object* v___f_1778_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = lean_box(v___x_1400_);
v___f_1776_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed), 11, 2);
lean_closure_set(v___f_1776_, 0, v___x_1766_);
lean_closure_set(v___f_1776_, 1, v___x_1775_);
v___f_1777_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18);
v___f_1778_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19);
if (lean_obj_tag(v_occs_1737_) == 0)
{
lean_object* v___x_1779_; 
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
v___x_1779_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22);
v___y_1634_ = v_a_1772_;
v___y_1635_ = v___f_1777_;
v___y_1636_ = v_a_1774_;
v___y_1637_ = v___f_1778_;
v___y_1638_ = v___f_1776_;
v_occs_1639_ = v___x_1779_;
v___y_1640_ = v___y_1738_;
v___y_1641_ = v___y_1739_;
v___y_1642_ = v___y_1740_;
v___y_1643_ = v___y_1741_;
v___y_1644_ = v___y_1742_;
v___y_1645_ = v___y_1743_;
v___y_1646_ = v___y_1744_;
v___y_1647_ = v___y_1745_;
goto v___jp_1633_;
}
else
{
lean_object* v_val_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v_val_1780_ = lean_ctor_get(v_occs_1737_, 0);
lean_inc_n(v_val_1780_, 2);
lean_dec_ref(v_occs_1737_);
v___x_1781_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23);
lean_inc_ref(v___x_1405_);
lean_inc_ref(v___x_1404_);
lean_inc_ref(v___x_1403_);
lean_inc_ref(v___x_1402_);
v___x_1782_ = l_Lean_Name_mkStr5(v___x_1402_, v___x_1403_, v___x_1404_, v___x_1405_, v___x_1781_);
v___x_1783_ = l_Lean_Syntax_isOfKind(v_val_1780_, v___x_1782_);
lean_dec(v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1784_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24);
v___x_1785_ = l_Lean_Name_mkStr5(v___x_1402_, v___x_1403_, v___x_1404_, v___x_1405_, v___x_1784_);
lean_inc(v_val_1780_);
v___x_1786_ = l_Lean_Syntax_isOfKind(v_val_1780_, v___x_1785_);
lean_dec(v___x_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1795_; 
lean_dec(v_val_1780_);
lean_dec_ref(v___f_1776_);
lean_dec(v_a_1774_);
lean_dec(v_a_1772_);
lean_dec_ref(v___f_1399_);
v___x_1787_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg();
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1788_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1796_ = l_Lean_Syntax_getArg(v_val_1780_, v___x_1507_);
lean_dec(v_val_1780_);
v___x_1797_ = l_Lean_Syntax_getArgs(v___x_1796_);
lean_dec(v___x_1796_);
v___x_1798_ = lean_array_get_size(v___x_1797_);
v___x_1799_ = lean_mk_empty_array_with_capacity(v___x_1798_);
v___x_1800_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v___x_1797_, v___x_1798_, v___x_1507_, v___x_1799_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
lean_dec_ref(v___x_1797_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref(v___x_1800_);
v___x_1802_ = lean_array_get_size(v_a_1801_);
v___x_1803_ = lean_nat_dec_eq(v___x_1802_, v___x_1507_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; uint8_t v___x_1805_; 
v___x_1804_ = lean_nat_sub(v___x_1802_, v___x_1508_);
v___x_1805_ = lean_nat_dec_le(v___x_1507_, v___x_1804_);
if (v___x_1805_ == 0)
{
lean_inc(v___x_1804_);
v___y_1718_ = v___y_1742_;
v___y_1719_ = v___y_1739_;
v___y_1720_ = v___y_1743_;
v___y_1721_ = v___x_1804_;
v___y_1722_ = v___x_1802_;
v___y_1723_ = v_a_1774_;
v___y_1724_ = v_a_1801_;
v___y_1725_ = v___y_1741_;
v___y_1726_ = v___y_1744_;
v___y_1727_ = v_a_1772_;
v___y_1728_ = v___f_1777_;
v___y_1729_ = v___y_1740_;
v___y_1730_ = v___f_1776_;
v___y_1731_ = v___f_1778_;
v___y_1732_ = v___y_1745_;
v___y_1733_ = v___y_1738_;
v___y_1734_ = v___x_1804_;
goto v___jp_1717_;
}
else
{
v___y_1718_ = v___y_1742_;
v___y_1719_ = v___y_1739_;
v___y_1720_ = v___y_1743_;
v___y_1721_ = v___x_1804_;
v___y_1722_ = v___x_1802_;
v___y_1723_ = v_a_1774_;
v___y_1724_ = v_a_1801_;
v___y_1725_ = v___y_1741_;
v___y_1726_ = v___y_1744_;
v___y_1727_ = v_a_1772_;
v___y_1728_ = v___f_1777_;
v___y_1729_ = v___y_1740_;
v___y_1730_ = v___f_1776_;
v___y_1731_ = v___f_1778_;
v___y_1732_ = v___y_1745_;
v___y_1733_ = v___y_1738_;
v___y_1734_ = v___x_1507_;
goto v___jp_1717_;
}
}
else
{
v___y_1681_ = v___y_1742_;
v___y_1682_ = v___y_1739_;
v___y_1683_ = v___y_1743_;
v___y_1684_ = v_a_1774_;
v___y_1685_ = v___y_1741_;
v___y_1686_ = v___y_1744_;
v___y_1687_ = v_a_1772_;
v___y_1688_ = v___f_1777_;
v___y_1689_ = v___y_1740_;
v___y_1690_ = v___f_1776_;
v___y_1691_ = v___f_1778_;
v___y_1692_ = v___y_1745_;
v___y_1693_ = v___y_1738_;
v___y_1694_ = v_a_1801_;
goto v___jp_1680_;
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_dec_ref(v___f_1776_);
lean_dec(v_a_1774_);
lean_dec(v_a_1772_);
lean_dec_ref(v___f_1399_);
v_a_1806_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1800_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1800_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
else
{
lean_object* v___x_1814_; 
lean_dec(v_val_1780_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
v___x_1814_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26);
v___y_1634_ = v_a_1772_;
v___y_1635_ = v___f_1777_;
v___y_1636_ = v_a_1774_;
v___y_1637_ = v___f_1778_;
v___y_1638_ = v___f_1776_;
v_occs_1639_ = v___x_1814_;
v___y_1640_ = v___y_1738_;
v___y_1641_ = v___y_1739_;
v___y_1642_ = v___y_1740_;
v___y_1643_ = v___y_1741_;
v___y_1644_ = v___y_1742_;
v___y_1645_ = v___y_1743_;
v___y_1646_ = v___y_1744_;
v___y_1647_ = v___y_1745_;
goto v___jp_1633_;
}
}
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
lean_dec(v_a_1772_);
lean_dec(v_occs_1737_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___f_1399_);
v_a_1815_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1773_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1773_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
lean_dec(v_occs_1737_);
lean_dec_ref(v___x_1405_);
lean_dec_ref(v___x_1404_);
lean_dec_ref(v___x_1403_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v___f_1399_);
v_a_1823_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1771_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1771_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
v___jp_1415_:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_Elab_Tactic_Conv_getRhs___redArg(v___y_1419_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v_expr_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref(v___x_1426_);
v_expr_1428_ = lean_ctor_get(v___y_1416_, 0);
v___x_1429_ = l_Lean_Expr_mvarId_x21(v_a_1427_);
lean_dec(v_a_1427_);
lean_inc_ref(v_expr_1428_);
v___x_1430_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v___x_1429_, v_expr_1428_, v___y_1423_, v___y_1425_);
lean_dec_ref(v___x_1430_);
v___x_1431_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1419_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1433_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref(v___x_1431_);
v___x_1433_ = l_Lean_Meta_Simp_Result_getProof(v___y_1416_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_a_1432_, v_a_1434_, v___y_1423_, v___y_1425_);
lean_dec_ref(v___x_1435_);
v___x_1436_ = lean_array_to_list(v_subgoals_1417_);
v___x_1437_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1436_, v___y_1419_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_);
return v___x_1437_;
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec(v_a_1432_);
lean_dec_ref(v_subgoals_1417_);
v_a_1438_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1433_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1433_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v_subgoals_1417_);
lean_dec_ref(v___y_1416_);
v_a_1446_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1431_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1431_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v_subgoals_1417_);
lean_dec_ref(v___y_1416_);
v_a_1454_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1426_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1426_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
v___jp_1462_:
{
size_t v_sz_1473_; size_t v___x_1474_; lean_object* v___x_1475_; 
v_sz_1473_ = lean_array_size(v___y_1472_);
v___x_1474_ = ((size_t)0ULL);
v___x_1475_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_1473_, v___x_1474_, v___y_1472_);
v___y_1416_ = v___y_1469_;
v_subgoals_1417_ = v___x_1475_;
v___y_1418_ = v___y_1471_;
v___y_1419_ = v___y_1465_;
v___y_1420_ = v___y_1466_;
v___y_1421_ = v___y_1464_;
v___y_1422_ = v___y_1470_;
v___y_1423_ = v___y_1463_;
v___y_1424_ = v___y_1468_;
v___y_1425_ = v___y_1467_;
goto v___jp_1415_;
}
v___jp_1476_:
{
lean_object* v___x_1490_; 
v___x_1490_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v___y_1480_, v___y_1486_, v___y_1478_, v___y_1489_);
lean_dec(v___y_1489_);
lean_dec(v___y_1480_);
v___y_1463_ = v___y_1479_;
v___y_1464_ = v___y_1481_;
v___y_1465_ = v___y_1477_;
v___y_1466_ = v___y_1482_;
v___y_1467_ = v___y_1483_;
v___y_1468_ = v___y_1484_;
v___y_1469_ = v___y_1485_;
v___y_1470_ = v___y_1487_;
v___y_1471_ = v___y_1488_;
v___y_1472_ = v___x_1490_;
goto v___jp_1462_;
}
v___jp_1491_:
{
uint8_t v___x_1505_; 
v___x_1505_ = lean_nat_dec_le(v___y_1504_, v___y_1493_);
if (v___x_1505_ == 0)
{
lean_dec(v___y_1493_);
lean_inc(v___y_1504_);
v___y_1477_ = v___y_1492_;
v___y_1478_ = v___y_1504_;
v___y_1479_ = v___y_1494_;
v___y_1480_ = v___y_1495_;
v___y_1481_ = v___y_1496_;
v___y_1482_ = v___y_1497_;
v___y_1483_ = v___y_1498_;
v___y_1484_ = v___y_1499_;
v___y_1485_ = v___y_1500_;
v___y_1486_ = v___y_1501_;
v___y_1487_ = v___y_1502_;
v___y_1488_ = v___y_1503_;
v___y_1489_ = v___y_1504_;
goto v___jp_1476_;
}
else
{
v___y_1477_ = v___y_1492_;
v___y_1478_ = v___y_1504_;
v___y_1479_ = v___y_1494_;
v___y_1480_ = v___y_1495_;
v___y_1481_ = v___y_1496_;
v___y_1482_ = v___y_1497_;
v___y_1483_ = v___y_1498_;
v___y_1484_ = v___y_1499_;
v___y_1485_ = v___y_1500_;
v___y_1486_ = v___y_1501_;
v___y_1487_ = v___y_1502_;
v___y_1488_ = v___y_1503_;
v___y_1489_ = v___y_1493_;
goto v___jp_1476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object** _args){
lean_object* v___x_1844_ = _args[0];
lean_object* v___f_1845_ = _args[1];
lean_object* v___x_1846_ = _args[2];
lean_object* v_stx_1847_ = _args[3];
lean_object* v___x_1848_ = _args[4];
lean_object* v___x_1849_ = _args[5];
lean_object* v___x_1850_ = _args[6];
lean_object* v___x_1851_ = _args[7];
lean_object* v___y_1852_ = _args[8];
lean_object* v___y_1853_ = _args[9];
lean_object* v___y_1854_ = _args[10];
lean_object* v___y_1855_ = _args[11];
lean_object* v___y_1856_ = _args[12];
lean_object* v___y_1857_ = _args[13];
lean_object* v___y_1858_ = _args[14];
lean_object* v___y_1859_ = _args[15];
lean_object* v___y_1860_ = _args[16];
_start:
{
uint8_t v___x_19819__boxed_1861_; uint8_t v___x_19821__boxed_1862_; lean_object* v_res_1863_; 
v___x_19819__boxed_1861_ = lean_unbox(v___x_1844_);
v___x_19821__boxed_1862_ = lean_unbox(v___x_1846_);
v_res_1863_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(v___x_19819__boxed_1861_, v___f_1845_, v___x_19821__boxed_1862_, v_stx_1847_, v___x_1848_, v___x_1849_, v___x_1850_, v___x_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v_stx_1847_);
return v_res_1863_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__0(void){
_start:
{
lean_object* v___f_1864_; 
v___f_1864_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed), 9, 0);
return v___f_1864_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__1(void){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1865_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__2(void){
_start:
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_1866_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__3(void){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_1867_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__4(void){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_mk_string_unchecked("Conv", 4, 4);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__5(void){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_mk_string_unchecked("pattern", 7, 7);
return v___x_1869_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__6(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1870_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__5, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__5);
v___x_1871_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__4);
v___x_1872_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__3);
v___x_1873_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__2);
v___x_1874_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__1);
v___x_1875_ = l_Lean_Name_mkStr5(v___x_1874_, v___x_1873_, v___x_1872_, v___x_1871_, v___x_1870_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object* v_stx_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___f_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; uint8_t v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___y_1896_; lean_object* v___x_1897_; 
v___f_1886_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__0, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__0);
v___x_1887_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__1);
v___x_1888_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__2);
v___x_1889_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__3);
v___x_1890_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__4);
v___x_1891_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__6);
lean_inc(v_stx_1876_);
v___x_1892_ = l_Lean_Syntax_isOfKind(v_stx_1876_, v___x_1891_);
v___x_1893_ = 1;
v___x_1894_ = lean_box(v___x_1892_);
v___x_1895_ = lean_box(v___x_1893_);
v___y_1896_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed), 17, 8);
lean_closure_set(v___y_1896_, 0, v___x_1894_);
lean_closure_set(v___y_1896_, 1, v___f_1886_);
lean_closure_set(v___y_1896_, 2, v___x_1895_);
lean_closure_set(v___y_1896_, 3, v_stx_1876_);
lean_closure_set(v___y_1896_, 4, v___x_1887_);
lean_closure_set(v___y_1896_, 5, v___x_1888_);
lean_closure_set(v___y_1896_, 6, v___x_1889_);
lean_closure_set(v___y_1896_, 7, v___x_1890_);
v___x_1897_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_1896_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object* v_stx_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lean_Elab_Tactic_Conv_evalPattern(v_stx_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
lean_dec(v_a_1906_);
lean_dec_ref(v_a_1905_);
lean_dec(v_a_1904_);
lean_dec_ref(v_a_1903_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object* v_00_u03b1_1909_, lean_object* v_ref_1910_, lean_object* v_msg_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(v_ref_1910_, v_msg_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object* v_00_u03b1_1922_, lean_object* v_ref_1923_, lean_object* v_msg_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(v_00_u03b1_1922_, v_ref_1923_, v_msg_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v_ref_1923_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object* v_mvarId_1935_, lean_object* v_val_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1935_, v_val_1936_, v___y_1942_, v___y_1944_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object* v_mvarId_1947_, lean_object* v_val_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v_res_1958_; 
v_res_1958_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(v_mvarId_1947_, v_val_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object* v_00_u03b1_1959_, lean_object* v_msg_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_1960_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object* v_00_u03b1_1971_, lean_object* v_msg_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(v_00_u03b1_1971_, v_msg_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object* v_n_1983_, lean_object* v_as_1984_, lean_object* v_lo_1985_, lean_object* v_hi_1986_, lean_object* v_w_1987_, lean_object* v_hlo_1988_, lean_object* v_hhi_1989_){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_1983_, v_as_1984_, v_lo_1985_, v_hi_1986_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object* v_n_1991_, lean_object* v_as_1992_, lean_object* v_lo_1993_, lean_object* v_hi_1994_, lean_object* v_w_1995_, lean_object* v_hlo_1996_, lean_object* v_hhi_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(v_n_1991_, v_as_1992_, v_lo_1993_, v_hi_1994_, v_w_1995_, v_hlo_1996_, v_hhi_1997_);
lean_dec(v_hi_1994_);
lean_dec(v_n_1991_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object* v_as_1999_, lean_object* v_i_2000_, lean_object* v_j_2001_, lean_object* v_inv_2002_, lean_object* v_bs_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v___x_2013_; 
v___x_2013_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_as_1999_, v_i_2000_, v_j_2001_, v_bs_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object* v_as_2014_, lean_object* v_i_2015_, lean_object* v_j_2016_, lean_object* v_inv_2017_, lean_object* v_bs_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(v_as_2014_, v_i_2015_, v_j_2016_, v_inv_2017_, v_bs_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
lean_dec(v___y_2020_);
lean_dec_ref(v___y_2019_);
lean_dec_ref(v_as_2014_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object* v_n_2029_, lean_object* v_as_2030_, lean_object* v_lo_2031_, lean_object* v_hi_2032_, lean_object* v_w_2033_, lean_object* v_hlo_2034_, lean_object* v_hhi_2035_){
_start:
{
lean_object* v___x_2036_; 
v___x_2036_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_2029_, v_as_2030_, v_lo_2031_, v_hi_2032_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object* v_n_2037_, lean_object* v_as_2038_, lean_object* v_lo_2039_, lean_object* v_hi_2040_, lean_object* v_w_2041_, lean_object* v_hlo_2042_, lean_object* v_hhi_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(v_n_2037_, v_as_2038_, v_lo_2039_, v_hi_2040_, v_w_2041_, v_hlo_2042_, v_hhi_2043_);
lean_dec(v_hi_2040_);
lean_dec(v_n_2037_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object* v_00_u03b2_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_, lean_object* v_x_2048_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_x_2046_, v_x_2047_, v_x_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object* v_n_2050_, lean_object* v_lo_2051_, lean_object* v_hi_2052_, lean_object* v_hhi_2053_, lean_object* v_pivot_2054_, lean_object* v_as_2055_, lean_object* v_i_2056_, lean_object* v_k_2057_, lean_object* v_ilo_2058_, lean_object* v_ik_2059_, lean_object* v_w_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_2052_, v_pivot_2054_, v_as_2055_, v_i_2056_, v_k_2057_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object* v_n_2062_, lean_object* v_lo_2063_, lean_object* v_hi_2064_, lean_object* v_hhi_2065_, lean_object* v_pivot_2066_, lean_object* v_as_2067_, lean_object* v_i_2068_, lean_object* v_k_2069_, lean_object* v_ilo_2070_, lean_object* v_ik_2071_, lean_object* v_w_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(v_n_2062_, v_lo_2063_, v_hi_2064_, v_hhi_2065_, v_pivot_2066_, v_as_2067_, v_i_2068_, v_k_2069_, v_ilo_2070_, v_ik_2071_, v_w_2072_);
lean_dec_ref(v_pivot_2066_);
lean_dec(v_hi_2064_);
lean_dec(v_lo_2063_);
lean_dec(v_n_2062_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object* v_n_2074_, lean_object* v_lo_2075_, lean_object* v_hi_2076_, lean_object* v_hhi_2077_, lean_object* v_pivot_2078_, lean_object* v_as_2079_, lean_object* v_i_2080_, lean_object* v_k_2081_, lean_object* v_ilo_2082_, lean_object* v_ik_2083_, lean_object* v_w_2084_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_2076_, v_pivot_2078_, v_as_2079_, v_i_2080_, v_k_2081_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object* v_n_2086_, lean_object* v_lo_2087_, lean_object* v_hi_2088_, lean_object* v_hhi_2089_, lean_object* v_pivot_2090_, lean_object* v_as_2091_, lean_object* v_i_2092_, lean_object* v_k_2093_, lean_object* v_ilo_2094_, lean_object* v_ik_2095_, lean_object* v_w_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(v_n_2086_, v_lo_2087_, v_hi_2088_, v_hhi_2089_, v_pivot_2090_, v_as_2091_, v_i_2092_, v_k_2093_, v_ilo_2094_, v_ik_2095_, v_w_2096_);
lean_dec_ref(v_pivot_2090_);
lean_dec(v_hi_2088_);
lean_dec(v_lo_2087_);
lean_dec(v_n_2086_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object* v_00_u03b2_2098_, lean_object* v_x_2099_, size_t v_x_2100_, size_t v_x_2101_, lean_object* v_x_2102_, lean_object* v_x_2103_){
_start:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_2099_, v_x_2100_, v_x_2101_, v_x_2102_, v_x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2105_, lean_object* v_x_2106_, lean_object* v_x_2107_, lean_object* v_x_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
size_t v_x_20941__boxed_2111_; size_t v_x_20942__boxed_2112_; lean_object* v_res_2113_; 
v_x_20941__boxed_2111_ = lean_unbox_usize(v_x_2107_);
lean_dec(v_x_2107_);
v_x_20942__boxed_2112_ = lean_unbox_usize(v_x_2108_);
lean_dec(v_x_2108_);
v_res_2113_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(v_00_u03b2_2105_, v_x_2106_, v_x_20941__boxed_2111_, v_x_20942__boxed_2112_, v_x_2109_, v_x_2110_);
return v_res_2113_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object* v_as_2114_, lean_object* v_a_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_){
_start:
{
uint8_t v___x_2118_; 
v___x_2118_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_2114_, v_a_2115_, v_x_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object* v_as_2119_, lean_object* v_a_2120_, lean_object* v_x_2121_, lean_object* v_x_2122_){
_start:
{
uint8_t v_res_2123_; lean_object* v_r_2124_; 
v_res_2123_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(v_as_2119_, v_a_2120_, v_x_2121_, v_x_2122_);
lean_dec_ref(v_a_2120_);
lean_dec_ref(v_as_2119_);
v_r_2124_ = lean_box(v_res_2123_);
return v_r_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object* v_00_u03b2_2125_, lean_object* v_n_2126_, lean_object* v_k_2127_, lean_object* v_v_2128_){
_start:
{
lean_object* v___x_2129_; 
v___x_2129_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v_n_2126_, v_k_2127_, v_v_2128_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object* v_00_u03b2_2130_, size_t v_depth_2131_, lean_object* v_keys_2132_, lean_object* v_vals_2133_, lean_object* v_heq_2134_, lean_object* v_i_2135_, lean_object* v_entries_2136_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_2131_, v_keys_2132_, v_vals_2133_, v_i_2135_, v_entries_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object* v_00_u03b2_2138_, lean_object* v_depth_2139_, lean_object* v_keys_2140_, lean_object* v_vals_2141_, lean_object* v_heq_2142_, lean_object* v_i_2143_, lean_object* v_entries_2144_){
_start:
{
size_t v_depth_boxed_2145_; lean_object* v_res_2146_; 
v_depth_boxed_2145_ = lean_unbox_usize(v_depth_2139_);
lean_dec(v_depth_2139_);
v_res_2146_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(v_00_u03b2_2138_, v_depth_boxed_2145_, v_keys_2140_, v_vals_2141_, v_heq_2142_, v_i_2143_, v_entries_2144_);
lean_dec_ref(v_vals_2141_);
lean_dec_ref(v_keys_2140_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object* v_00_u03b2_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_, lean_object* v_x_2150_, lean_object* v_x_2151_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_x_2148_, v_x_2149_, v_x_2150_, v_x_2151_);
return v___x_2152_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0(void){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_2153_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1(void){
_start:
{
lean_object* v___x_2154_; 
v___x_2154_ = lean_mk_string_unchecked("evalPattern", 11, 11);
return v___x_2154_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2155_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1);
v___x_2156_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__4);
v___x_2157_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__3);
v___x_2158_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0);
v___x_2159_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__1);
v___x_2160_ = l_Lean_Name_mkStr5(v___x_2159_, v___x_2158_, v___x_2157_, v___x_2156_, v___x_2155_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1(){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2162_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2163_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6, &l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___closed__6);
v___x_2164_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2);
v___x_2165_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___boxed), 10, 0);
v___x_2166_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2162_, v___x_2163_, v___x_2164_, v___x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object* v_a_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
return v_res_2168_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_unsigned_to_nat(50u);
v___x_2170_ = lean_unsigned_to_nat(105u);
v___x_2171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2170_);
lean_ctor_set(v___x_2171_, 1, v___x_2169_);
return v___x_2171_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = lean_unsigned_to_nat(31u);
v___x_2173_ = lean_unsigned_to_nat(142u);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v___x_2172_);
return v___x_2174_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2175_ = lean_unsigned_to_nat(31u);
v___x_2176_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1);
v___x_2177_ = lean_unsigned_to_nat(50u);
v___x_2178_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0);
v___x_2179_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
lean_ctor_set(v___x_2179_, 1, v___x_2177_);
lean_ctor_set(v___x_2179_, 2, v___x_2176_);
lean_ctor_set(v___x_2179_, 3, v___x_2175_);
return v___x_2179_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2180_ = lean_unsigned_to_nat(54u);
v___x_2181_ = lean_unsigned_to_nat(105u);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___x_2180_);
return v___x_2182_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2183_ = lean_unsigned_to_nat(65u);
v___x_2184_ = lean_unsigned_to_nat(105u);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2183_);
return v___x_2185_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2186_ = lean_unsigned_to_nat(65u);
v___x_2187_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4);
v___x_2188_ = lean_unsigned_to_nat(54u);
v___x_2189_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3);
v___x_2190_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
lean_ctor_set(v___x_2190_, 1, v___x_2188_);
lean_ctor_set(v___x_2190_, 2, v___x_2187_);
lean_ctor_set(v___x_2190_, 3, v___x_2186_);
return v___x_2190_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2191_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5);
v___x_2192_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
lean_ctor_set(v___x_2193_, 1, v___x_2191_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3(){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2);
v___x_2196_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6);
v___x_2197_ = l_Lean_addBuiltinDeclarationRanges(v___x_2195_, v___x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
return v_res_2199_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
}
#ifdef __cplusplus
}
#endif
