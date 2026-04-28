// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Lets
// Imports: public import Lean.Elab.Tactic.Lets public import Lean.Elab.Tactic.Conv.Basic
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
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhsRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_extractLetsAddVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_changeLhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(lean_object*, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(lean_object* v_mvarId_31_, lean_object* v_x_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_31_, v_x_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
if (lean_obj_tag(v___x_38_) == 0)
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_38_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_38_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_38_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
else
{
lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_54_; 
v_a_47_ = lean_ctor_get(v___x_38_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_54_ == 0)
{
v___x_49_ = v___x_38_;
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v___x_38_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_54_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_52_; 
if (v_isShared_50_ == 0)
{
v___x_52_ = v___x_49_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_a_47_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg___boxed(lean_object* v_mvarId_55_, lean_object* v_x_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvarId_55_, v_x_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(lean_object* v_00_u03b1_63_, lean_object* v_mvarId_64_, lean_object* v_x_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvarId_64_, v_x_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___boxed(lean_object* v_00_u03b1_72_, lean_object* v_mvarId_73_, lean_object* v_x_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4(v_00_u03b1_72_, v_mvarId_73_, v_x_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(lean_object* v_k_81_, lean_object* v_b_82_, lean_object* v_c_83_, lean_object* v_d_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; 
lean_inc(v___y_88_);
lean_inc_ref(v___y_87_);
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
v___x_90_ = lean_apply_8(v_k_81_, v_b_82_, v_c_83_, v_d_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, lean_box(0));
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed(lean_object* v_k_91_, lean_object* v_b_92_, lean_object* v_c_93_, lean_object* v_d_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0(v_k_91_, v_b_92_, v_c_93_, v_d_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(lean_object* v_es_101_, lean_object* v_givenNames_102_, lean_object* v_k_103_, lean_object* v_config_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___f_110_; lean_object* v___x_111_; 
v___f_110_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_110_, 0, v_k_103_);
v___x_111_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_box(0), v_es_101_, v_givenNames_102_, v___f_110_, v_config_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
if (lean_obj_tag(v___x_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_111_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_111_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg___boxed(lean_object* v_es_128_, lean_object* v_givenNames_129_, lean_object* v_k_130_, lean_object* v_config_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v_es_128_, v_givenNames_129_, v_k_130_, v_config_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec_ref(v_config_131_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(lean_object* v_00_u03b1_138_, lean_object* v_es_139_, lean_object* v_givenNames_140_, lean_object* v_k_141_, lean_object* v_config_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v_es_139_, v_givenNames_140_, v_k_141_, v_config_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___boxed(lean_object* v_00_u03b1_149_, lean_object* v_es_150_, lean_object* v_givenNames_151_, lean_object* v_k_152_, lean_object* v_config_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5(v_00_u03b1_149_, v_es_150_, v_givenNames_151_, v_k_152_, v_config_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec_ref(v_config_153_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
lean_object* v_ks_164_; lean_object* v_vs_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_189_; 
v_ks_164_ = lean_ctor_get(v_x_160_, 0);
v_vs_165_ = lean_ctor_get(v_x_160_, 1);
v_isSharedCheck_189_ = !lean_is_exclusive(v_x_160_);
if (v_isSharedCheck_189_ == 0)
{
v___x_167_ = v_x_160_;
v_isShared_168_ = v_isSharedCheck_189_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_vs_165_);
lean_inc(v_ks_164_);
lean_dec(v_x_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_189_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = lean_array_get_size(v_ks_164_);
v___x_170_ = lean_nat_dec_lt(v_x_161_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
lean_dec(v_x_161_);
v___x_171_ = lean_array_push(v_ks_164_, v_x_162_);
v___x_172_ = lean_array_push(v_vs_165_, v_x_163_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_172_);
lean_ctor_set(v___x_167_, 0, v___x_171_);
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
else
{
lean_object* v_k_x27_176_; uint8_t v___x_177_; 
v_k_x27_176_ = lean_array_fget_borrowed(v_ks_164_, v_x_161_);
v___x_177_ = l_Lean_instBEqMVarId_beq(v_x_162_, v_k_x27_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_179_; 
if (v_isShared_168_ == 0)
{
v___x_179_ = v___x_167_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_ks_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_vs_165_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(1u);
v___x_181_ = lean_nat_add(v_x_161_, v___x_180_);
lean_dec(v_x_161_);
v_x_160_ = v___x_179_;
v_x_161_ = v___x_181_;
goto _start;
}
}
else
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_184_ = lean_array_fset(v_ks_164_, v_x_161_, v_x_162_);
v___x_185_ = lean_array_fset(v_vs_165_, v_x_161_, v_x_163_);
lean_dec(v_x_161_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_185_);
lean_ctor_set(v___x_167_, 0, v___x_184_);
v___x_187_ = v___x_167_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(lean_object* v_n_190_, lean_object* v_k_191_, lean_object* v_v_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(v_n_190_, v___x_193_, v_k_191_, v_v_192_);
return v___x_194_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_195_; size_t v___x_196_; size_t v___x_197_; 
v___x_195_ = ((size_t)5ULL);
v___x_196_ = ((size_t)1ULL);
v___x_197_ = lean_usize_shift_left(v___x_196_, v___x_195_);
return v___x_197_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_198_; size_t v___x_199_; size_t v___x_200_; 
v___x_198_ = ((size_t)1ULL);
v___x_199_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__0);
v___x_200_ = lean_usize_sub(v___x_199_, v___x_198_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(lean_object* v_x_202_, size_t v_x_203_, size_t v_x_204_, lean_object* v_x_205_, lean_object* v_x_206_){
_start:
{
if (lean_obj_tag(v_x_202_) == 0)
{
lean_object* v_es_207_; size_t v___x_208_; size_t v___x_209_; size_t v___x_210_; size_t v___x_211_; lean_object* v_j_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_es_207_ = lean_ctor_get(v_x_202_, 0);
v___x_208_ = ((size_t)5ULL);
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__1);
v___x_211_ = lean_usize_land(v_x_203_, v___x_210_);
v_j_212_ = lean_usize_to_nat(v___x_211_);
v___x_213_ = lean_array_get_size(v_es_207_);
v___x_214_ = lean_nat_dec_lt(v_j_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_dec(v_j_212_);
lean_dec(v_x_206_);
lean_dec(v_x_205_);
return v_x_202_;
}
else
{
lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_251_; 
lean_inc_ref(v_es_207_);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_202_);
if (v_isSharedCheck_251_ == 0)
{
lean_object* v_unused_252_; 
v_unused_252_ = lean_ctor_get(v_x_202_, 0);
lean_dec(v_unused_252_);
v___x_216_ = v_x_202_;
v_isShared_217_ = v_isSharedCheck_251_;
goto v_resetjp_215_;
}
else
{
lean_dec(v_x_202_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_251_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v_v_218_; lean_object* v___x_219_; lean_object* v_xs_x27_220_; lean_object* v___y_222_; 
v_v_218_ = lean_array_fget(v_es_207_, v_j_212_);
v___x_219_ = lean_box(0);
v_xs_x27_220_ = lean_array_fset(v_es_207_, v_j_212_, v___x_219_);
switch(lean_obj_tag(v_v_218_))
{
case 0:
{
lean_object* v_key_227_; lean_object* v_val_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_238_; 
v_key_227_ = lean_ctor_get(v_v_218_, 0);
v_val_228_ = lean_ctor_get(v_v_218_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_v_218_);
if (v_isSharedCheck_238_ == 0)
{
v___x_230_ = v_v_218_;
v_isShared_231_ = v_isSharedCheck_238_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_val_228_);
lean_inc(v_key_227_);
lean_dec(v_v_218_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_238_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
uint8_t v___x_232_; 
v___x_232_ = l_Lean_instBEqMVarId_beq(v_x_205_, v_key_227_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_del_object(v___x_230_);
v___x_233_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_227_, v_val_228_, v_x_205_, v_x_206_);
v___x_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
v___y_222_ = v___x_234_;
goto v___jp_221_;
}
else
{
lean_object* v___x_236_; 
lean_dec(v_val_228_);
lean_dec(v_key_227_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v_x_206_);
lean_ctor_set(v___x_230_, 0, v_x_205_);
v___x_236_ = v___x_230_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_x_205_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_x_206_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
v___y_222_ = v___x_236_;
goto v___jp_221_;
}
}
}
}
case 1:
{
lean_object* v_node_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_249_; 
v_node_239_ = lean_ctor_get(v_v_218_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v_v_218_);
if (v_isSharedCheck_249_ == 0)
{
v___x_241_ = v_v_218_;
v_isShared_242_ = v_isSharedCheck_249_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_node_239_);
lean_dec(v_v_218_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_249_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
size_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_243_ = lean_usize_shift_right(v_x_203_, v___x_208_);
v___x_244_ = lean_usize_add(v_x_204_, v___x_209_);
v___x_245_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_node_239_, v___x_243_, v___x_244_, v_x_205_, v_x_206_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___x_245_);
v___x_247_ = v___x_241_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
v___y_222_ = v___x_247_;
goto v___jp_221_;
}
}
}
default: 
{
lean_object* v___x_250_; 
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v_x_205_);
lean_ctor_set(v___x_250_, 1, v_x_206_);
v___y_222_ = v___x_250_;
goto v___jp_221_;
}
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_223_ = lean_array_fset(v_xs_x27_220_, v_j_212_, v___y_222_);
lean_dec(v_j_212_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_223_);
v___x_225_ = v___x_216_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
else
{
lean_object* v_ks_253_; lean_object* v_vs_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_274_; 
v_ks_253_ = lean_ctor_get(v_x_202_, 0);
v_vs_254_ = lean_ctor_get(v_x_202_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v_x_202_);
if (v_isSharedCheck_274_ == 0)
{
v___x_256_ = v_x_202_;
v_isShared_257_ = v_isSharedCheck_274_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_vs_254_);
lean_inc(v_ks_253_);
lean_dec(v_x_202_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_274_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_ks_253_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_vs_254_);
v___x_259_ = v_reuseFailAlloc_273_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v_newNode_260_; uint8_t v___y_262_; size_t v___x_268_; uint8_t v___x_269_; 
v_newNode_260_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(v___x_259_, v_x_205_, v_x_206_);
v___x_268_ = ((size_t)7ULL);
v___x_269_ = lean_usize_dec_le(v___x_268_, v_x_204_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_270_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_260_);
v___x_271_ = lean_unsigned_to_nat(4u);
v___x_272_ = lean_nat_dec_lt(v___x_270_, v___x_271_);
lean_dec(v___x_270_);
v___y_262_ = v___x_272_;
goto v___jp_261_;
}
else
{
v___y_262_ = v___x_269_;
goto v___jp_261_;
}
v___jp_261_:
{
if (v___y_262_ == 0)
{
lean_object* v_ks_263_; lean_object* v_vs_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_ks_263_ = lean_ctor_get(v_newNode_260_, 0);
lean_inc_ref(v_ks_263_);
v_vs_264_ = lean_ctor_get(v_newNode_260_, 1);
lean_inc_ref(v_vs_264_);
lean_dec_ref(v_newNode_260_);
v___x_265_ = lean_unsigned_to_nat(0u);
v___x_266_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___closed__2);
v___x_267_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_x_204_, v_ks_263_, v_vs_264_, v___x_265_, v___x_266_);
lean_dec_ref(v_vs_264_);
lean_dec_ref(v_ks_263_);
return v___x_267_;
}
else
{
return v_newNode_260_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(size_t v_depth_275_, lean_object* v_keys_276_, lean_object* v_vals_277_, lean_object* v_i_278_, lean_object* v_entries_279_){
_start:
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_array_get_size(v_keys_276_);
v___x_281_ = lean_nat_dec_lt(v_i_278_, v___x_280_);
if (v___x_281_ == 0)
{
lean_dec(v_i_278_);
return v_entries_279_;
}
else
{
lean_object* v_k_282_; lean_object* v_v_283_; uint64_t v___x_284_; size_t v_h_285_; size_t v___x_286_; lean_object* v___x_287_; size_t v___x_288_; size_t v___x_289_; size_t v___x_290_; size_t v_h_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_k_282_ = lean_array_fget_borrowed(v_keys_276_, v_i_278_);
v_v_283_ = lean_array_fget_borrowed(v_vals_277_, v_i_278_);
v___x_284_ = l_Lean_instHashableMVarId_hash(v_k_282_);
v_h_285_ = lean_uint64_to_usize(v___x_284_);
v___x_286_ = ((size_t)5ULL);
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = ((size_t)1ULL);
v___x_289_ = lean_usize_sub(v_depth_275_, v___x_288_);
v___x_290_ = lean_usize_mul(v___x_286_, v___x_289_);
v_h_291_ = lean_usize_shift_right(v_h_285_, v___x_290_);
v___x_292_ = lean_nat_add(v_i_278_, v___x_287_);
lean_dec(v_i_278_);
lean_inc(v_v_283_);
lean_inc(v_k_282_);
v___x_293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_entries_279_, v_h_291_, v_depth_275_, v_k_282_, v_v_283_);
v_i_278_ = v___x_292_;
v_entries_279_ = v___x_293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_depth_295_, lean_object* v_keys_296_, lean_object* v_vals_297_, lean_object* v_i_298_, lean_object* v_entries_299_){
_start:
{
size_t v_depth_boxed_300_; lean_object* v_res_301_; 
v_depth_boxed_300_ = lean_unbox_usize(v_depth_295_);
lean_dec(v_depth_295_);
v_res_301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_depth_boxed_300_, v_keys_296_, v_vals_297_, v_i_298_, v_entries_299_);
lean_dec_ref(v_vals_297_);
lean_dec_ref(v_keys_296_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg___boxed(lean_object* v_x_302_, lean_object* v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_, lean_object* v_x_306_){
_start:
{
size_t v_x_6161__boxed_307_; size_t v_x_6162__boxed_308_; lean_object* v_res_309_; 
v_x_6161__boxed_307_ = lean_unbox_usize(v_x_303_);
lean_dec(v_x_303_);
v_x_6162__boxed_308_ = lean_unbox_usize(v_x_304_);
lean_dec(v_x_304_);
v_res_309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_302_, v_x_6161__boxed_307_, v_x_6162__boxed_308_, v_x_305_, v_x_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(lean_object* v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
uint64_t v___x_313_; size_t v___x_314_; size_t v___x_315_; lean_object* v___x_316_; 
v___x_313_ = l_Lean_instHashableMVarId_hash(v_x_311_);
v___x_314_ = lean_uint64_to_usize(v___x_313_);
v___x_315_ = ((size_t)1ULL);
v___x_316_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_310_, v___x_314_, v___x_315_, v_x_311_, v_x_312_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(lean_object* v_mvarId_317_, lean_object* v_val_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v_mctx_324_; lean_object* v_cache_325_; lean_object* v_zetaDeltaFVarIds_326_; lean_object* v_postponed_327_; lean_object* v_diag_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_356_; 
v___x_322_ = lean_st_ref_get(v___y_320_);
lean_dec(v___x_322_);
v___x_323_ = lean_st_ref_take(v___y_319_);
v_mctx_324_ = lean_ctor_get(v___x_323_, 0);
v_cache_325_ = lean_ctor_get(v___x_323_, 1);
v_zetaDeltaFVarIds_326_ = lean_ctor_get(v___x_323_, 2);
v_postponed_327_ = lean_ctor_get(v___x_323_, 3);
v_diag_328_ = lean_ctor_get(v___x_323_, 4);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_356_ == 0)
{
v___x_330_ = v___x_323_;
v_isShared_331_ = v_isSharedCheck_356_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_diag_328_);
lean_inc(v_postponed_327_);
lean_inc(v_zetaDeltaFVarIds_326_);
lean_inc(v_cache_325_);
lean_inc(v_mctx_324_);
lean_dec(v___x_323_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_356_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v_depth_332_; lean_object* v_levelAssignDepth_333_; lean_object* v_lmvarCounter_334_; lean_object* v_mvarCounter_335_; lean_object* v_lDecls_336_; lean_object* v_decls_337_; lean_object* v_userNames_338_; lean_object* v_lAssignment_339_; lean_object* v_eAssignment_340_; lean_object* v_dAssignment_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_355_; 
v_depth_332_ = lean_ctor_get(v_mctx_324_, 0);
v_levelAssignDepth_333_ = lean_ctor_get(v_mctx_324_, 1);
v_lmvarCounter_334_ = lean_ctor_get(v_mctx_324_, 2);
v_mvarCounter_335_ = lean_ctor_get(v_mctx_324_, 3);
v_lDecls_336_ = lean_ctor_get(v_mctx_324_, 4);
v_decls_337_ = lean_ctor_get(v_mctx_324_, 5);
v_userNames_338_ = lean_ctor_get(v_mctx_324_, 6);
v_lAssignment_339_ = lean_ctor_get(v_mctx_324_, 7);
v_eAssignment_340_ = lean_ctor_get(v_mctx_324_, 8);
v_dAssignment_341_ = lean_ctor_get(v_mctx_324_, 9);
v_isSharedCheck_355_ = !lean_is_exclusive(v_mctx_324_);
if (v_isSharedCheck_355_ == 0)
{
v___x_343_ = v_mctx_324_;
v_isShared_344_ = v_isSharedCheck_355_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_dAssignment_341_);
lean_inc(v_eAssignment_340_);
lean_inc(v_lAssignment_339_);
lean_inc(v_userNames_338_);
lean_inc(v_decls_337_);
lean_inc(v_lDecls_336_);
lean_inc(v_mvarCounter_335_);
lean_inc(v_lmvarCounter_334_);
lean_inc(v_levelAssignDepth_333_);
lean_inc(v_depth_332_);
lean_dec(v_mctx_324_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_355_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_345_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(v_eAssignment_340_, v_mvarId_317_, v_val_318_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 8, v___x_345_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_depth_332_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_levelAssignDepth_333_);
lean_ctor_set(v_reuseFailAlloc_354_, 2, v_lmvarCounter_334_);
lean_ctor_set(v_reuseFailAlloc_354_, 3, v_mvarCounter_335_);
lean_ctor_set(v_reuseFailAlloc_354_, 4, v_lDecls_336_);
lean_ctor_set(v_reuseFailAlloc_354_, 5, v_decls_337_);
lean_ctor_set(v_reuseFailAlloc_354_, 6, v_userNames_338_);
lean_ctor_set(v_reuseFailAlloc_354_, 7, v_lAssignment_339_);
lean_ctor_set(v_reuseFailAlloc_354_, 8, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_354_, 9, v_dAssignment_341_);
v___x_347_ = v_reuseFailAlloc_354_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_349_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_347_);
v___x_349_ = v___x_330_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_347_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_cache_325_);
lean_ctor_set(v_reuseFailAlloc_353_, 2, v_zetaDeltaFVarIds_326_);
lean_ctor_set(v_reuseFailAlloc_353_, 3, v_postponed_327_);
lean_ctor_set(v_reuseFailAlloc_353_, 4, v_diag_328_);
v___x_349_ = v_reuseFailAlloc_353_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_st_ref_set(v___y_319_, v___x_349_);
v___x_351_ = lean_box(0);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg___boxed(lean_object* v_mvarId_357_, lean_object* v_val_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvarId_357_, v_val_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec(v___y_359_);
return v_res_362_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0(void){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_mk_string_unchecked("(internal error) non-defeq in assignment", 40, 40);
return v___x_363_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__0);
v___x_365_ = l_Lean_stringToMessageData(v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__1);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(lean_object* v___x_368_, lean_object* v_a_369_, lean_object* v___x_370_, lean_object* v_a_371_, lean_object* v_mvar_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; 
lean_inc_ref(v_a_369_);
v___x_378_ = l_Lean_Meta_isExprDefEq(v___x_368_, v_a_369_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; uint8_t v___x_380_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref(v___x_378_);
v___x_380_ = lean_unbox(v_a_379_);
lean_dec(v_a_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___closed__2);
v___x_382_ = l_Lean_Meta_throwTacticEx___redArg(v___x_370_, v_a_371_, v___x_381_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; 
lean_dec_ref(v___x_382_);
v___x_383_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvar_372_, v_a_369_, v___y_374_, v___y_376_);
return v___x_383_;
}
else
{
lean_dec(v_mvar_372_);
lean_dec_ref(v_a_369_);
return v___x_382_;
}
}
else
{
lean_object* v___x_384_; 
lean_dec(v_a_371_);
lean_dec(v___x_370_);
v___x_384_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvar_372_, v_a_369_, v___y_374_, v___y_376_);
return v___x_384_;
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec(v_mvar_372_);
lean_dec(v_a_371_);
lean_dec(v___x_370_);
lean_dec_ref(v_a_369_);
v_a_385_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_378_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_378_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed(lean_object* v___x_393_, lean_object* v_a_394_, lean_object* v___x_395_, lean_object* v_a_396_, lean_object* v_mvar_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0(v___x_393_, v_a_394_, v___x_395_, v_a_396_, v_mvar_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(lean_object* v___x_404_, uint8_t v___x_405_, lean_object* v___x_406_, lean_object* v_a_407_, lean_object* v_mvar_408_, lean_object* v_e_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
uint8_t v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; 
v___x_415_ = 0;
v___x_416_ = 1;
v___x_417_ = l_Lean_Meta_mkLetFVars(v___x_404_, v_e_409_, v___x_415_, v___x_405_, v___x_416_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___x_421_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref(v___x_417_);
lean_inc_n(v_mvar_408_, 2);
v___x_419_ = l_Lean_Expr_mvar___override(v_mvar_408_);
v___f_420_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__0___boxed), 10, 5);
lean_closure_set(v___f_420_, 0, v___x_419_);
lean_closure_set(v___f_420_, 1, v_a_418_);
lean_closure_set(v___f_420_, 2, v___x_406_);
lean_closure_set(v___f_420_, 3, v_a_407_);
lean_closure_set(v___f_420_, 4, v_mvar_408_);
v___x_421_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__4___redArg(v_mvar_408_, v___f_420_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
return v___x_421_;
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_mvar_408_);
lean_dec(v_a_407_);
lean_dec(v___x_406_);
v_a_422_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_417_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_417_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1___boxed(lean_object* v___x_430_, lean_object* v___x_431_, lean_object* v___x_432_, lean_object* v_a_433_, lean_object* v_mvar_434_, lean_object* v_e_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
uint8_t v___x_6460__boxed_441_; lean_object* v_res_442_; 
v___x_6460__boxed_441_ = lean_unbox(v___x_431_);
v_res_442_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_430_, v___x_6460__boxed_441_, v___x_432_, v_a_433_, v_mvar_434_, v_e_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec_ref(v___x_430_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(size_t v_sz_443_, size_t v_i_444_, lean_object* v_bs_445_){
_start:
{
uint8_t v___x_446_; 
v___x_446_ = lean_usize_dec_lt(v_i_444_, v_sz_443_);
if (v___x_446_ == 0)
{
return v_bs_445_;
}
else
{
lean_object* v_v_447_; lean_object* v___x_448_; lean_object* v_bs_x27_449_; lean_object* v___x_450_; size_t v___x_451_; size_t v___x_452_; lean_object* v___x_453_; 
v_v_447_ = lean_array_uget(v_bs_445_, v_i_444_);
v___x_448_ = lean_unsigned_to_nat(0u);
v_bs_x27_449_ = lean_array_uset(v_bs_445_, v_i_444_, v___x_448_);
v___x_450_ = l_Lean_Expr_fvar___override(v_v_447_);
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_add(v_i_444_, v___x_451_);
v___x_453_ = lean_array_uset(v_bs_x27_449_, v_i_444_, v___x_450_);
v_i_444_ = v___x_452_;
v_bs_445_ = v___x_453_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2___boxed(lean_object* v_sz_455_, lean_object* v_i_456_, lean_object* v_bs_457_){
_start:
{
size_t v_sz_boxed_458_; size_t v_i_boxed_459_; lean_object* v_res_460_; 
v_sz_boxed_458_ = lean_unbox_usize(v_sz_455_);
lean_dec(v_sz_455_);
v_i_boxed_459_ = lean_unbox_usize(v_i_456_);
lean_dec(v_i_456_);
v_res_460_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(v_sz_boxed_458_, v_i_boxed_459_, v_bs_457_);
return v_res_460_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0(void){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_mk_string_unchecked("made no progress", 16, 16);
return v___x_461_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__0);
v___x_463_ = l_Lean_stringToMessageData(v___x_462_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__1);
v___x_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(lean_object* v___x_466_, lean_object* v_a_467_, size_t v___x_468_, uint8_t v___x_469_, lean_object* v___x_470_, lean_object* v_snd_471_, lean_object* v_fst_472_, lean_object* v_fvarIds_473_, lean_object* v_es_474_, lean_object* v_x_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___y_546_; lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_481_ = l_Lean_instInhabitedExpr;
v___x_482_ = lean_array_get_borrowed(v___x_481_, v_es_474_, v___x_466_);
v___x_557_ = lean_array_get_size(v_fvarIds_473_);
v___x_558_ = lean_nat_dec_eq(v___x_557_, v___x_466_);
if (v___x_558_ == 0)
{
v___y_546_ = v___x_558_;
goto v___jp_545_;
}
else
{
uint8_t v___x_559_; 
v___x_559_ = lean_expr_eqv(v_fst_472_, v___x_482_);
v___y_546_ = v___x_559_;
goto v___jp_545_;
}
v___jp_483_:
{
lean_object* v___x_484_; 
lean_inc(v_a_467_);
v___x_484_ = l_Lean_MVarId_getTag(v_a_467_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; lean_object* v___x_486_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref(v___x_484_);
lean_inc(v___x_482_);
v___x_486_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_482_, v_a_485_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_528_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref(v___x_486_);
v_fst_488_ = lean_ctor_get(v_a_487_, 0);
v_snd_489_ = lean_ctor_get(v_a_487_, 1);
v_isSharedCheck_528_ = !lean_is_exclusive(v_a_487_);
if (v_isSharedCheck_528_ == 0)
{
v___x_491_ = v_a_487_;
v_isShared_492_ = v_isSharedCheck_528_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_snd_489_);
lean_inc(v_fst_488_);
lean_dec(v_a_487_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_528_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
size_t v_sz_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_sz_493_ = lean_array_size(v_fvarIds_473_);
lean_inc_ref(v_fvarIds_473_);
v___x_494_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__2(v_sz_493_, v___x_468_, v_fvarIds_473_);
v___x_495_ = l_Lean_Expr_mvarId_x21(v_fst_488_);
lean_dec(v_fst_488_);
lean_inc(v_a_467_);
lean_inc(v___x_470_);
v___x_496_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_494_, v___x_469_, v___x_470_, v_a_467_, v___x_495_, v_snd_471_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; 
lean_dec_ref(v___x_496_);
lean_inc(v_snd_489_);
lean_inc(v_a_467_);
v___x_497_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__1(v___x_494_, v___x_469_, v___x_470_, v_a_467_, v_a_467_, v_snd_489_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec_ref(v___x_494_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_510_; 
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v___x_497_, 0);
lean_dec(v_unused_511_);
v___x_499_ = v___x_497_;
v_isShared_500_ = v_isSharedCheck_510_;
goto v_resetjp_498_;
}
else
{
lean_dec(v___x_497_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_510_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_501_ = l_Lean_Expr_mvarId_x21(v_snd_489_);
lean_dec(v_snd_489_);
v___x_502_ = lean_box(0);
v___x_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 1, v___x_503_);
lean_ctor_set(v___x_491_, 0, v_fvarIds_473_);
v___x_505_ = v___x_491_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_fvarIds_473_);
lean_ctor_set(v_reuseFailAlloc_509_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_509_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_507_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_505_);
v___x_507_ = v___x_499_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_del_object(v___x_491_);
lean_dec(v_snd_489_);
lean_dec_ref(v_fvarIds_473_);
v_a_512_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_497_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_497_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec_ref(v___x_494_);
lean_del_object(v___x_491_);
lean_dec(v_snd_489_);
lean_dec_ref(v_fvarIds_473_);
lean_dec(v___x_470_);
lean_dec(v_a_467_);
v_a_520_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_496_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_496_);
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
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v_fvarIds_473_);
lean_dec_ref(v_snd_471_);
lean_dec(v___x_470_);
lean_dec(v_a_467_);
v_a_529_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_486_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_486_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v_fvarIds_473_);
lean_dec_ref(v_snd_471_);
lean_dec(v___x_470_);
lean_dec(v_a_467_);
v_a_537_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_484_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_484_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
v___jp_545_:
{
if (v___y_546_ == 0)
{
goto v___jp_483_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
lean_inc(v_a_467_);
lean_inc(v___x_470_);
v___x_548_ = l_Lean_Meta_throwTacticEx___redArg(v___x_470_, v_a_467_, v___x_547_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_dec_ref(v___x_548_);
goto v___jp_483_;
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v_fvarIds_473_);
lean_dec_ref(v_snd_471_);
lean_dec(v___x_470_);
lean_dec(v_a_467_);
v_a_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed(lean_object* v___x_560_, lean_object* v_a_561_, lean_object* v___x_562_, lean_object* v___x_563_, lean_object* v___x_564_, lean_object* v_snd_565_, lean_object* v_fst_566_, lean_object* v_fvarIds_567_, lean_object* v_es_568_, lean_object* v_x_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
size_t v___x_6542__boxed_575_; uint8_t v___x_6543__boxed_576_; lean_object* v_res_577_; 
v___x_6542__boxed_575_ = lean_unbox_usize(v___x_562_);
lean_dec(v___x_562_);
v___x_6543__boxed_576_ = lean_unbox(v___x_563_);
v_res_577_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2(v___x_560_, v_a_561_, v___x_6542__boxed_575_, v___x_6543__boxed_576_, v___x_564_, v_snd_565_, v_fst_566_, v_fvarIds_567_, v_es_568_, v_x_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v_x_569_);
lean_dec_ref(v_es_568_);
lean_dec_ref(v_fst_566_);
lean_dec(v___x_560_);
return v_res_577_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0(void){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = lean_mk_string_unchecked("extract_lets", 12, 12);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__0);
v___x_580_ = l_Lean_Name_mkStr1(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(lean_object* v___x_581_, size_t v___x_582_, uint8_t v___x_583_, lean_object* v_snd_584_, lean_object* v_fst_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_a_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_590_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_a_599_ = lean_ctor_get(v___x_598_, 0);
lean_inc_n(v_a_599_, 2);
lean_dec_ref(v___x_598_);
v___x_600_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___closed__1);
v___x_601_ = l_Lean_MVarId_checkNotAssigned(v_a_599_, v___x_600_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___f_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
lean_dec_ref(v___x_601_);
v___x_602_ = lean_box_usize(v___x_582_);
v___x_603_ = lean_box(v___x_583_);
lean_inc_ref(v_fst_585_);
v___f_604_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___boxed), 15, 7);
lean_closure_set(v___f_604_, 0, v___x_581_);
lean_closure_set(v___f_604_, 1, v_a_599_);
lean_closure_set(v___f_604_, 2, v___x_602_);
lean_closure_set(v___f_604_, 3, v___x_603_);
lean_closure_set(v___f_604_, 4, v___x_600_);
lean_closure_set(v___f_604_, 5, v_snd_584_);
lean_closure_set(v___f_604_, 6, v_fst_585_);
v___x_605_ = lean_mk_empty_array_with_capacity(v___x_586_);
v___x_606_ = lean_array_push(v___x_605_, v_fst_585_);
v___x_607_ = l_Lean_Meta_extractLets___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__5___redArg(v___x_606_, v___x_587_, v___f_604_, v_a_588_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v_fst_609_; lean_object* v_snd_610_; lean_object* v___x_611_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref(v___x_607_);
v_fst_609_ = lean_ctor_get(v_a_608_, 0);
lean_inc(v_fst_609_);
v_snd_610_ = lean_ctor_get(v_a_608_, 1);
lean_inc(v_snd_610_);
lean_dec(v_a_608_);
v___x_611_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_snd_610_, v___y_590_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_611_, 0);
lean_dec(v_unused_619_);
v___x_613_ = v___x_611_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_dec(v___x_611_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v_fst_609_);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_fst_609_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
lean_dec(v_fst_609_);
v_a_620_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_611_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_611_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
v_a_628_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_607_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_607_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec(v_a_599_);
lean_dec(v___x_587_);
lean_dec_ref(v_fst_585_);
lean_dec_ref(v_snd_584_);
lean_dec(v___x_581_);
v_a_636_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_601_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_601_);
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
lean_dec(v___x_587_);
lean_dec_ref(v_fst_585_);
lean_dec_ref(v_snd_584_);
lean_dec(v___x_581_);
v_a_644_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_598_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_598_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed(lean_object** _args){
lean_object* v___x_652_ = _args[0];
lean_object* v___x_653_ = _args[1];
lean_object* v___x_654_ = _args[2];
lean_object* v_snd_655_ = _args[3];
lean_object* v_fst_656_ = _args[4];
lean_object* v___x_657_ = _args[5];
lean_object* v___x_658_ = _args[6];
lean_object* v_a_659_ = _args[7];
lean_object* v___y_660_ = _args[8];
lean_object* v___y_661_ = _args[9];
lean_object* v___y_662_ = _args[10];
lean_object* v___y_663_ = _args[11];
lean_object* v___y_664_ = _args[12];
lean_object* v___y_665_ = _args[13];
lean_object* v___y_666_ = _args[14];
lean_object* v___y_667_ = _args[15];
lean_object* v___y_668_ = _args[16];
_start:
{
size_t v___x_6750__boxed_669_; uint8_t v___x_6751__boxed_670_; lean_object* v_res_671_; 
v___x_6750__boxed_669_ = lean_unbox_usize(v___x_653_);
lean_dec(v___x_653_);
v___x_6751__boxed_670_ = lean_unbox(v___x_654_);
v_res_671_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3(v___x_652_, v___x_6750__boxed_669_, v___x_6751__boxed_670_, v_snd_655_, v_fst_656_, v___x_657_, v___x_658_, v_a_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec_ref(v_a_659_);
lean_dec(v___x_657_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(size_t v_sz_672_, size_t v_i_673_, lean_object* v_bs_674_){
_start:
{
uint8_t v___x_675_; 
v___x_675_ = lean_usize_dec_lt(v_i_673_, v_sz_672_);
if (v___x_675_ == 0)
{
return v_bs_674_;
}
else
{
lean_object* v_v_676_; lean_object* v___x_677_; lean_object* v_bs_x27_678_; lean_object* v___x_679_; size_t v___x_680_; size_t v___x_681_; lean_object* v___x_682_; 
v_v_676_ = lean_array_uget(v_bs_674_, v_i_673_);
v___x_677_ = lean_unsigned_to_nat(0u);
v_bs_x27_678_ = lean_array_uset(v_bs_674_, v_i_673_, v___x_677_);
v___x_679_ = l_Lean_Elab_Tactic_getNameOfIdent_x27(v_v_676_);
lean_dec(v_v_676_);
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_add(v_i_673_, v___x_680_);
v___x_682_ = lean_array_uset(v_bs_x27_678_, v_i_673_, v___x_679_);
v_i_673_ = v___x_681_;
v_bs_674_ = v___x_682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1___boxed(lean_object* v_sz_684_, lean_object* v_i_685_, lean_object* v_bs_686_){
_start:
{
size_t v_sz_boxed_687_; size_t v_i_boxed_688_; lean_object* v_res_689_; 
v_sz_boxed_687_ = lean_unbox_usize(v_sz_684_);
lean_dec(v_sz_684_);
v_i_boxed_688_ = lean_unbox_usize(v_i_685_);
lean_dec(v_i_685_);
v_res_689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(v_sz_boxed_687_, v_i_boxed_688_, v_bs_686_);
return v_res_689_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0(void){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1(void){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_691_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2(void){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_mk_string_unchecked("Conv", 4, 4);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4(void){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = lean_mk_string_unchecked("extractLets", 11, 11);
return v___x_694_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_695_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__4);
v___x_696_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_697_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_698_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1);
v___x_699_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_700_ = l_Lean_Name_mkStr5(v___x_699_, v___x_698_, v___x_697_, v___x_696_, v___x_695_);
return v___x_700_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6(void){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lean_mk_string_unchecked("optConfig", 9, 9);
return v___x_701_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7(void){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_702_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__6);
v___x_703_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_704_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1);
v___x_705_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_706_ = l_Lean_Name_mkStr4(v___x_705_, v___x_704_, v___x_703_, v___x_702_);
return v___x_706_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1(void){
_start:
{
size_t v___x_707_; lean_object* v___x_708_; 
v___x_707_ = ((size_t)0ULL);
v___x_708_ = lean_box_usize(v___x_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets(lean_object* v_x_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5);
lean_inc(v_x_709_);
v___x_720_ = l_Lean_Syntax_isOfKind(v_x_709_, v___x_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; 
lean_dec(v_x_709_);
v___x_721_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_721_;
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = l_Lean_Syntax_getArg(v_x_709_, v___x_722_);
v___x_724_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7);
lean_inc(v___x_723_);
v___x_725_ = l_Lean_Syntax_isOfKind(v___x_723_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; 
lean_dec(v___x_723_);
lean_dec(v_x_709_);
v___x_726_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_726_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_Elab_Tactic_elabExtractLetsConfig___redArg(v___x_723_, v_a_710_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_729_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref(v___x_727_);
v___x_729_ = l_Lean_Elab_Tactic_Conv_getLhsRhs___redArg(v_a_711_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v_fst_731_; lean_object* v_snd_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v_ids_735_; size_t v_sz_736_; lean_object* v___x_737_; size_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___f_743_; lean_object* v___x_744_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref(v___x_729_);
v_fst_731_ = lean_ctor_get(v_a_730_, 0);
lean_inc(v_fst_731_);
v_snd_732_ = lean_ctor_get(v_a_730_, 1);
lean_inc(v_snd_732_);
lean_dec(v_a_730_);
v___x_733_ = lean_unsigned_to_nat(2u);
v___x_734_ = l_Lean_Syntax_getArg(v_x_709_, v___x_733_);
lean_dec(v_x_709_);
v_ids_735_ = l_Lean_Syntax_getArgs(v___x_734_);
lean_dec(v___x_734_);
v_sz_736_ = lean_array_size(v_ids_735_);
v___x_737_ = lean_unsigned_to_nat(0u);
v___x_738_ = ((size_t)0ULL);
lean_inc_ref(v_ids_735_);
v___x_739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__1(v_sz_736_, v___x_738_, v_ids_735_);
v___x_740_ = lean_array_to_list(v___x_739_);
v___x_741_ = l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1;
v___x_742_ = lean_box(v___x_725_);
v___f_743_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__3___boxed), 17, 8);
lean_closure_set(v___f_743_, 0, v___x_737_);
lean_closure_set(v___f_743_, 1, v___x_741_);
lean_closure_set(v___f_743_, 2, v___x_742_);
lean_closure_set(v___f_743_, 3, v_snd_732_);
lean_closure_set(v___f_743_, 4, v_fst_731_);
lean_closure_set(v___f_743_, 5, v___x_722_);
lean_closure_set(v___f_743_, 6, v___x_740_);
lean_closure_set(v___f_743_, 7, v_a_728_);
v___x_744_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_743_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref(v___x_744_);
v___x_746_ = l_Lean_Elab_Tactic_extractLetsAddVarInfo(v_ids_735_, v_a_745_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
return v___x_746_;
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v_ids_735_);
v_a_747_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_744_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_744_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_a_728_);
lean_dec(v_x_709_);
v_a_755_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_729_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_729_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_x_709_);
v_a_763_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_727_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_727_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed(lean_object* v_x_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_Elab_Tactic_Conv_evalExtractLets(v_x_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_);
lean_dec(v_a_779_);
lean_dec_ref(v_a_778_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(lean_object* v_mvarId_782_, lean_object* v_val_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___redArg(v_mvarId_782_, v_val_783_, v___y_785_, v___y_787_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3___boxed(lean_object* v_mvarId_790_, lean_object* v_val_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3(v_mvarId_790_, v_val_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3(lean_object* v_00_u03b2_798_, lean_object* v_x_799_, lean_object* v_x_800_, lean_object* v_x_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3___redArg(v_x_799_, v_x_800_, v_x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(lean_object* v_00_u03b2_803_, lean_object* v_x_804_, size_t v_x_805_, size_t v_x_806_, lean_object* v_x_807_, lean_object* v_x_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___redArg(v_x_804_, v_x_805_, v_x_806_, v_x_807_, v_x_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6___boxed(lean_object* v_00_u03b2_810_, lean_object* v_x_811_, lean_object* v_x_812_, lean_object* v_x_813_, lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
size_t v_x_7114__boxed_816_; size_t v_x_7115__boxed_817_; lean_object* v_res_818_; 
v_x_7114__boxed_816_ = lean_unbox_usize(v_x_812_);
lean_dec(v_x_812_);
v_x_7115__boxed_817_ = lean_unbox_usize(v_x_813_);
lean_dec(v_x_813_);
v_res_818_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6(v_00_u03b2_810_, v_x_811_, v_x_7114__boxed_816_, v_x_7115__boxed_817_, v_x_814_, v_x_815_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_819_, lean_object* v_n_820_, lean_object* v_k_821_, lean_object* v_v_822_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7___redArg(v_n_820_, v_k_821_, v_v_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_824_, size_t v_depth_825_, lean_object* v_keys_826_, lean_object* v_vals_827_, lean_object* v_heq_828_, lean_object* v_i_829_, lean_object* v_entries_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___redArg(v_depth_825_, v_keys_826_, v_vals_827_, v_i_829_, v_entries_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b2_832_, lean_object* v_depth_833_, lean_object* v_keys_834_, lean_object* v_vals_835_, lean_object* v_heq_836_, lean_object* v_i_837_, lean_object* v_entries_838_){
_start:
{
size_t v_depth_boxed_839_; lean_object* v_res_840_; 
v_depth_boxed_839_ = lean_unbox_usize(v_depth_833_);
lean_dec(v_depth_833_);
v_res_840_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__8(v_00_u03b2_832_, v_depth_boxed_839_, v_keys_834_, v_vals_835_, v_heq_836_, v_i_837_, v_entries_838_);
lean_dec_ref(v_vals_835_);
lean_dec_ref(v_keys_834_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_841_, lean_object* v_x_842_, lean_object* v_x_843_, lean_object* v_x_844_, lean_object* v_x_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__3_spec__3_spec__6_spec__7_spec__8___redArg(v_x_842_, v_x_843_, v_x_844_, v_x_845_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_847_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1(void){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_mk_string_unchecked("evalExtractLets", 15, 15);
return v___x_848_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_849_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__1);
v___x_850_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_851_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_852_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0);
v___x_853_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_854_ = l_Lean_Name_mkStr5(v___x_853_, v___x_852_, v___x_851_, v___x_850_, v___x_849_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1(){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_856_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_857_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__5);
v___x_858_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__2);
v___x_859_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed), 10, 0);
v___x_860_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_856_, v___x_857_, v___x_858_, v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___boxed(lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
return v_res_862_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0(void){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = lean_mk_string_unchecked("lift_lets", 9, 9);
return v___x_863_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__0);
v___x_865_ = l_Lean_Name_mkStr1(v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(lean_object* v_a_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_868_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc_n(v_a_877_, 2);
lean_dec_ref(v___x_876_);
v___x_878_ = l_Lean_Meta_liftLets(v_a_877_, v_a_866_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; uint8_t v___x_880_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_879_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_expr_eqv(v_a_877_, v_a_879_);
lean_dec(v_a_877_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_879_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
return v___x_881_;
}
else
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_868_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref(v___x_882_);
v___x_884_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___closed__1);
v___x_885_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
v___x_886_ = l_Lean_Meta_throwTacticEx___redArg(v___x_884_, v_a_883_, v___x_885_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v___x_887_; 
lean_dec_ref(v___x_886_);
v___x_887_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_879_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
return v___x_887_;
}
else
{
lean_dec(v_a_879_);
return v___x_886_;
}
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v_a_879_);
v_a_888_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_882_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_882_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_a_877_);
v_a_896_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_878_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_878_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_a_866_);
v_a_904_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_876_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_876_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed(lean_object* v_a_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0(v_a_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
return v_res_922_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0(void){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = lean_mk_string_unchecked("liftLets", 8, 8);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_924_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__0);
v___x_925_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_926_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_927_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1);
v___x_928_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_929_ = l_Lean_Name_mkStr5(v___x_928_, v___x_927_, v___x_926_, v___x_925_, v___x_924_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets(lean_object* v_x_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1);
lean_inc(v_x_930_);
v___x_941_ = l_Lean_Syntax_isOfKind(v_x_930_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
lean_dec(v_x_930_);
v___x_942_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_942_;
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_943_ = lean_unsigned_to_nat(1u);
v___x_944_ = l_Lean_Syntax_getArg(v_x_930_, v___x_943_);
lean_dec(v_x_930_);
v___x_945_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__7);
lean_inc(v___x_944_);
v___x_946_ = l_Lean_Syntax_isOfKind(v___x_944_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v___x_944_);
v___x_947_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_947_;
}
else
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_Elab_Tactic_elabLiftLetsConfig___redArg(v___x_944_, v_a_931_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___f_950_; lean_object* v___x_951_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref(v___x_948_);
v___f_950_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___lam__0___boxed), 10, 1);
lean_closure_set(v___f_950_, 0, v_a_949_);
v___x_951_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_950_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
return v___x_951_;
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
v_a_952_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_948_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_948_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed(lean_object* v_x_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Elab_Tactic_Conv_evalLiftLets(v_x_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
return v_res_970_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0(void){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_mk_string_unchecked("evalLiftLets", 12, 12);
return v___x_971_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_972_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__0);
v___x_973_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_974_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_975_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0);
v___x_976_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_977_ = l_Lean_Name_mkStr5(v___x_976_, v___x_975_, v___x_974_, v___x_973_, v___x_972_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1(){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_979_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_980_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLiftLets___closed__1);
v___x_981_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___closed__1);
v___x_982_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLiftLets___boxed), 10, 0);
v___x_983_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_979_, v___x_980_, v___x_981_, v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1___boxed(lean_object* v_a_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
return v_res_985_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0(void){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = lean_mk_string_unchecked("let_to_have", 11, 11);
return v___x_986_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__0);
v___x_988_ = l_Lean_Name_mkStr1(v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_990_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1000_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc_n(v_a_999_, 2);
lean_dec_ref(v___x_998_);
v___x_1000_ = l_Lean_Meta_letToHave(v_a_999_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; uint8_t v___x_1002_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
lean_dec_ref(v___x_1000_);
v___x_1002_ = lean_expr_eqv(v_a_999_, v_a_1001_);
lean_dec(v_a_999_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_1001_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
return v___x_1003_;
}
else
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_990_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref(v___x_1004_);
v___x_1006_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___closed__1);
v___x_1007_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___lam__2___closed__2);
v___x_1008_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1006_, v_a_1005_, v___x_1007_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v___x_1009_; 
lean_dec_ref(v___x_1008_);
v___x_1009_ = l_Lean_Elab_Tactic_Conv_changeLhs(v_a_1001_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
return v___x_1009_;
}
else
{
lean_dec(v_a_1001_);
return v___x_1008_;
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_a_1001_);
v_a_1010_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1004_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1004_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v_a_999_);
v_a_1018_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_1000_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1000_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1026_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_998_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_998_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed(lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0(v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
return v_res_1043_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0(void){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_mk_string_unchecked("letToHave", 9, 9);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1045_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0, &l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__0);
v___x_1046_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_1047_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_1048_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__1);
v___x_1049_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_1050_ = l_Lean_Name_mkStr5(v___x_1049_, v___x_1048_, v___x_1047_, v___x_1046_, v___x_1045_);
return v___x_1050_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2(void){
_start:
{
lean_object* v___f_1051_; 
v___f_1051_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___lam__0___boxed), 9, 0);
return v___f_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave(lean_object* v_x_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1062_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1, &l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1);
v___x_1063_ = l_Lean_Syntax_isOfKind(v_x_1052_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalExtractLets_spec__0___redArg();
return v___x_1064_;
}
else
{
lean_object* v___f_1065_; lean_object* v___x_1066_; 
v___f_1065_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2, &l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__2);
v___x_1066_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_1065_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
return v___x_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed(lean_object* v_x_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_Elab_Tactic_Conv_evalLetToHave(v_x_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v_a_1068_);
return v_res_1077_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0(void){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_mk_string_unchecked("evalLetToHave", 13, 13);
return v___x_1078_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1079_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__0);
v___x_1080_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__3);
v___x_1081_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__2);
v___x_1082_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1___closed__0);
v___x_1083_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0, &l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___closed__0);
v___x_1084_ = l_Lean_Name_mkStr5(v___x_1083_, v___x_1082_, v___x_1081_, v___x_1080_, v___x_1079_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1(){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1086_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1087_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1, &l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalLetToHave___closed__1);
v___x_1088_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1, &l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___closed__1);
v___x_1089_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLetToHave___boxed), 10, 0);
v___x_1090_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1086_, v___x_1087_, v___x_1088_, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1___boxed(lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
return v_res_1092_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Lets(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1 = _init_l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Conv_evalExtractLets___boxed__const__1);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalExtractLets___regBuiltin_Lean_Elab_Tactic_Conv_evalExtractLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLiftLets___regBuiltin_Lean_Elab_Tactic_Conv_evalLiftLets__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Lets_0__Lean_Elab_Tactic_Conv_evalLetToHave___regBuiltin_Lean_Elab_Tactic_Conv_evalLetToHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Lets(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
