// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Exact
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.Basic public import Lean.Elab.Tactic.Do.ProofMode.Focus public import Lean.Elab.Tactic.ElabTerm
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
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_5_);
lean_dec(v___x_9_);
v___x_10_ = lean_st_ref_get(v___y_3_);
v_mctx_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_10_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_mk_string_unchecked("Exact", 5, 5);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked("assumption", 10, 10);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__5);
v___x_55_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4);
v___x_56_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3);
v___x_57_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2);
v___x_58_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1);
v___x_59_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0);
v___x_60_ = l_Lean_Name_mkStr6(v___x_59_, v___x_58_, v___x_57_, v___x_56_, v___x_55_, v___x_54_);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_mk_string_unchecked("mexact tactic failed, hypothesis ", 33, 33);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__7);
v___x_63_ = l_Lean_stringToMessageData(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked(" is not definitionally equal to ", 32, 32);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__9);
v___x_66_ = l_Lean_stringToMessageData(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact(lean_object* v_goal_67_, lean_object* v_hyp_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = l_Lean_Syntax_getId(v_hyp_68_);
lean_inc_ref(v_goal_67_);
v___x_75_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(v_goal_67_, v___x_74_);
lean_dec(v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec(v_hyp_68_);
lean_dec_ref(v_goal_67_);
v___x_76_ = lean_box(0);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
else
{
lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v___x_75_, 0);
lean_dec(v_unused_142_);
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_141_;
goto v_resetjp_78_;
}
else
{
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_141_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; 
lean_inc(v_hyp_68_);
lean_inc_ref(v_goal_67_);
v___x_81_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_goal_67_, v_hyp_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_132_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_132_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_132_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_132_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v_u_86_; lean_object* v_00_u03c3s_87_; lean_object* v_hyps_88_; lean_object* v_target_89_; lean_object* v_focusHyp_90_; lean_object* v_restHyps_91_; lean_object* v_proof_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_105_; 
v_u_86_ = lean_ctor_get(v_goal_67_, 0);
lean_inc(v_u_86_);
v_00_u03c3s_87_ = lean_ctor_get(v_goal_67_, 1);
lean_inc_ref(v_00_u03c3s_87_);
v_hyps_88_ = lean_ctor_get(v_goal_67_, 2);
lean_inc_ref(v_hyps_88_);
v_target_89_ = lean_ctor_get(v_goal_67_, 3);
lean_inc_ref_n(v_target_89_, 3);
lean_dec_ref(v_goal_67_);
v_focusHyp_90_ = lean_ctor_get(v_a_82_, 0);
lean_inc_ref(v_focusHyp_90_);
v_restHyps_91_ = lean_ctor_get(v_a_82_, 1);
lean_inc_ref(v_restHyps_91_);
v_proof_92_ = lean_ctor_get(v_a_82_, 2);
lean_inc_ref(v_proof_92_);
lean_dec(v_a_82_);
v___x_93_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__6);
v___x_94_ = lean_box(0);
v___x_95_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_95_, 0, v_u_86_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = l_Lean_mkConst(v___x_93_, v___x_95_);
v___x_97_ = l_Lean_mkApp5(v___x_96_, v_00_u03c3s_87_, v_hyps_88_, v_restHyps_91_, v_target_89_, v_proof_92_);
v___x_105_ = l_Lean_Meta_isExprDefEq(v_focusHyp_90_, v_target_89_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; uint8_t v___x_107_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref(v___x_105_);
v___x_107_ = lean_unbox(v_a_106_);
lean_dec(v_a_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v___x_97_);
lean_del_object(v___x_84_);
lean_del_object(v___x_79_);
v___x_108_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__8);
v___x_109_ = l_Lean_MessageData_ofSyntax(v_hyp_68_);
v___x_110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__10);
v___x_112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = l_Lean_MessageData_ofExpr(v_target_89_);
v___x_114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg(v___x_114_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
else
{
lean_dec_ref(v_target_89_);
lean_dec(v_hyp_68_);
goto v___jp_98_;
}
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref(v___x_97_);
lean_dec_ref(v_target_89_);
lean_del_object(v___x_84_);
lean_del_object(v___x_79_);
lean_dec(v_hyp_68_);
v_a_124_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_105_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_105_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
v___jp_98_:
{
lean_object* v___x_100_; 
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v___x_97_);
v___x_100_ = v___x_79_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_97_);
v___x_100_ = v_reuseFailAlloc_104_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_102_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v___x_100_);
v___x_102_ = v___x_84_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_140_; 
lean_del_object(v___x_79_);
lean_dec(v_hyp_68_);
lean_dec_ref(v_goal_67_);
v_a_133_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_140_ == 0)
{
v___x_135_ = v___x_81_;
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_81_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_138_; 
if (v_isShared_136_ == 0)
{
v___x_138_ = v___x_135_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_133_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___boxed(lean_object* v_goal_143_, lean_object* v_hyp_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact(v_goal_143_, v_hyp_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0(lean_object* v_00_u03b1_151_, lean_object* v_msg_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___redArg(v_msg_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0___boxed(lean_object* v_00_u03b1_159_, lean_object* v_msg_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0(v_00_u03b1_159_, v_msg_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(lean_object* v_msg_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_ref_173_; lean_object* v___x_174_; lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_183_; 
v_ref_173_ = lean_ctor_get(v___y_170_, 5);
v___x_174_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exact_spec__0_spec__0(v_msg_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_183_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_183_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_181_; 
lean_inc(v_ref_173_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_ref_173_);
lean_ctor_set(v___x_179_, 1, v_a_175_);
if (v_isShared_178_ == 0)
{
lean_ctor_set_tag(v___x_177_, 1);
lean_ctor_set(v___x_177_, 0, v___x_179_);
v___x_181_ = v___x_177_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg___boxed(lean_object* v_msg_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(v_msg_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
return v_res_190_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_box(0);
v___x_192_ = l_Lean_mkSort(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__0);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_195_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2);
v___x_196_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1);
v___x_197_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0);
v___x_198_ = l_Lean_Name_mkStr3(v___x_197_, v___x_196_, v___x_195_);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3(void){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = lean_mk_string_unchecked("PropAsSPredTautology", 20, 20);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_200_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__3);
v___x_201_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3);
v___x_202_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2);
v___x_203_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1);
v___x_204_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0);
v___x_205_ = l_Lean_Name_mkStr5(v___x_204_, v___x_203_, v___x_202_, v___x_201_, v___x_200_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_mk_string_unchecked("from_tautology", 14, 14);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_207_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__5);
v___x_208_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__4);
v___x_209_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3);
v___x_210_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__2);
v___x_211_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1);
v___x_212_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__0);
v___x_213_ = l_Lean_Name_mkStr6(v___x_212_, v___x_211_, v___x_210_, v___x_209_, v___x_208_, v___x_207_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_mk_string_unchecked("mexact tactic failed, ", 22, 22);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__7);
v___x_216_ = l_Lean_stringToMessageData(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9(void){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = lean_mk_string_unchecked(" is not an SPred tautology", 26, 26);
return v___x_217_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__9);
v___x_219_ = l_Lean_stringToMessageData(v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure(lean_object* v_goal_220_, lean_object* v_hyp_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_231_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__1);
v___x_232_ = 0;
v___x_233_ = lean_box(0);
v___x_234_ = l_Lean_Meta_mkFreshExprMVar(v___x_231_, v___x_232_, v___x_233_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_294_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_294_ == 0)
{
v___x_237_ = v___x_234_;
v_isShared_238_ = v_isSharedCheck_294_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_234_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_294_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
lean_inc(v_a_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 1);
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_293_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
uint8_t v___x_241_; lean_object* v___x_242_; 
v___x_241_ = 0;
lean_inc(v_hyp_221_);
v___x_242_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v_hyp_221_, v___x_240_, v___x_241_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_292_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_292_ == 0)
{
v___x_245_ = v___x_242_;
v_isShared_246_ = v_isSharedCheck_292_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_292_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v_u_247_; lean_object* v_00_u03c3s_248_; lean_object* v_hyps_249_; lean_object* v_target_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v_u_247_ = lean_ctor_get(v_goal_220_, 0);
lean_inc(v_u_247_);
v_00_u03c3s_248_ = lean_ctor_get(v_goal_220_, 1);
lean_inc_ref_n(v_00_u03c3s_248_, 2);
v_hyps_249_ = lean_ctor_get(v_goal_220_, 2);
lean_inc_ref(v_hyps_249_);
v_target_250_ = lean_ctor_get(v_goal_220_, 3);
lean_inc_ref(v_target_250_);
lean_dec_ref(v_goal_220_);
v___x_251_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__2);
v___x_252_ = lean_box(0);
v___x_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_253_, 0, v_u_247_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
lean_inc_ref(v___x_253_);
v___x_254_ = l_Lean_mkConst(v___x_251_, v___x_253_);
v___x_255_ = l_Lean_Expr_app___override(v___x_254_, v_00_u03c3s_248_);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 1);
lean_ctor_set(v___x_245_, 0, v___x_255_);
v___x_257_ = v___x_245_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_291_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_Meta_mkFreshExprMVar(v___x_257_, v___x_232_, v___x_233_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref(v___x_258_);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__4);
lean_inc_ref(v___x_253_);
v___x_261_ = l_Lean_mkConst(v___x_260_, v___x_253_);
lean_inc_ref(v_00_u03c3s_248_);
lean_inc(v_a_235_);
v___x_262_ = l_Lean_mkApp3(v___x_261_, v_a_235_, v_00_u03c3s_248_, v_a_259_);
v___x_263_ = lean_box(0);
v___x_264_ = l_Lean_Meta_synthInstance_x3f(v___x_262_, v___x_263_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_282_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_282_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_282_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_282_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
if (lean_obj_tag(v_a_265_) == 1)
{
lean_object* v_val_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec(v_hyp_221_);
v_val_269_ = lean_ctor_get(v_a_265_, 0);
lean_inc(v_val_269_);
lean_dec_ref(v_a_265_);
v___x_270_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__6);
v___x_271_ = l_Lean_mkConst(v___x_270_, v___x_253_);
v___x_272_ = l_Lean_mkApp6(v___x_271_, v_00_u03c3s_248_, v_a_235_, v_hyps_249_, v_target_250_, v_val_269_, v_a_243_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_272_);
v___x_274_ = v___x_267_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
lean_del_object(v___x_267_);
lean_dec(v_a_265_);
lean_dec_ref(v___x_253_);
lean_dec_ref(v_target_250_);
lean_dec_ref(v_hyps_249_);
lean_dec_ref(v_00_u03c3s_248_);
lean_dec(v_a_243_);
lean_dec(v_a_235_);
v___x_276_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__8);
v___x_277_ = l_Lean_MessageData_ofSyntax(v_hyp_221_);
v___x_278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___closed__10);
v___x_280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(v___x_280_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
return v___x_281_;
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec_ref(v___x_253_);
lean_dec_ref(v_target_250_);
lean_dec_ref(v_hyps_249_);
lean_dec_ref(v_00_u03c3s_248_);
lean_dec(v_a_243_);
lean_dec(v_a_235_);
lean_dec(v_hyp_221_);
v_a_283_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_264_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_264_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
else
{
lean_dec_ref(v___x_253_);
lean_dec_ref(v_target_250_);
lean_dec_ref(v_hyps_249_);
lean_dec_ref(v_00_u03c3s_248_);
lean_dec(v_a_243_);
lean_dec(v_a_235_);
lean_dec(v_hyp_221_);
return v___x_258_;
}
}
}
}
else
{
lean_dec(v_a_235_);
lean_dec(v_hyp_221_);
lean_dec_ref(v_goal_220_);
return v___x_242_;
}
}
}
}
else
{
lean_dec(v_hyp_221_);
lean_dec_ref(v_goal_220_);
return v___x_234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure___boxed(lean_object* v_goal_295_, lean_object* v_hyp_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure(v_goal_295_, v_hyp_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0(lean_object* v_00_u03b1_307_, lean_object* v_msg_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(v_msg_308_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___boxed(lean_object* v_00_u03b1_319_, lean_object* v_msg_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0(v_00_u03b1_319_, v_msg_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_330_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_box(0);
v___x_332_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg(){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___closed__0);
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg___boxed(lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg();
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0(lean_object* v_00_u03b1_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg();
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___boxed(lean_object* v_00_u03b1_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0(v_00_u03b1_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg(lean_object* v_e_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = l_Lean_Expr_hasMVar(v_e_361_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v_e_361_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v_mctx_369_; lean_object* v___x_370_; lean_object* v_fst_371_; lean_object* v_snd_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_cache_375_; lean_object* v_zetaDeltaFVarIds_376_; lean_object* v_postponed_377_; lean_object* v_diag_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_387_; 
v___x_367_ = lean_st_ref_get(v___y_363_);
lean_dec(v___x_367_);
v___x_368_ = lean_st_ref_get(v___y_362_);
v_mctx_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc_ref(v_mctx_369_);
lean_dec(v___x_368_);
v___x_370_ = l_Lean_instantiateMVarsCore(v_mctx_369_, v_e_361_);
v_fst_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_fst_371_);
v_snd_372_ = lean_ctor_get(v___x_370_, 1);
lean_inc(v_snd_372_);
lean_dec_ref(v___x_370_);
v___x_373_ = lean_st_ref_get(v___y_363_);
lean_dec(v___x_373_);
v___x_374_ = lean_st_ref_take(v___y_362_);
v_cache_375_ = lean_ctor_get(v___x_374_, 1);
v_zetaDeltaFVarIds_376_ = lean_ctor_get(v___x_374_, 2);
v_postponed_377_ = lean_ctor_get(v___x_374_, 3);
v_diag_378_ = lean_ctor_get(v___x_374_, 4);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_387_ == 0)
{
lean_object* v_unused_388_; 
v_unused_388_ = lean_ctor_get(v___x_374_, 0);
lean_dec(v_unused_388_);
v___x_380_ = v___x_374_;
v_isShared_381_ = v_isSharedCheck_387_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_diag_378_);
lean_inc(v_postponed_377_);
lean_inc(v_zetaDeltaFVarIds_376_);
lean_inc(v_cache_375_);
lean_dec(v___x_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_387_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v_snd_372_);
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_snd_372_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_cache_375_);
lean_ctor_set(v_reuseFailAlloc_386_, 2, v_zetaDeltaFVarIds_376_);
lean_ctor_set(v_reuseFailAlloc_386_, 3, v_postponed_377_);
lean_ctor_set(v_reuseFailAlloc_386_, 4, v_diag_378_);
v___x_383_ = v_reuseFailAlloc_386_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_st_ref_set(v___y_362_, v___x_383_);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v_fst_371_);
return v___x_385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg___boxed(lean_object* v_e_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg(v_e_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec(v___y_390_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1(lean_object* v_e_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg(v_e_394_, v___y_400_, v___y_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___boxed(lean_object* v_e_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1(v_e_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0(lean_object* v_x_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v___x_426_; 
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
lean_inc(v___y_418_);
lean_inc_ref(v___y_417_);
v___x_426_ = lean_apply_9(v_x_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, lean_box(0));
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0___boxed(lean_object* v_x_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0(v_x_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg(lean_object* v_mvarId_438_, lean_object* v_x_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___f_449_; lean_object* v___x_450_; 
lean_inc(v___y_443_);
lean_inc_ref(v___y_442_);
lean_inc(v___y_441_);
lean_inc_ref(v___y_440_);
v___f_449_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_449_, 0, v_x_439_);
lean_closure_set(v___f_449_, 1, v___y_440_);
lean_closure_set(v___f_449_, 2, v___y_441_);
lean_closure_set(v___f_449_, 3, v___y_442_);
lean_closure_set(v___f_449_, 4, v___y_443_);
v___x_450_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_438_, v___f_449_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
if (lean_obj_tag(v___x_450_) == 0)
{
return v___x_450_;
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg___boxed(lean_object* v_mvarId_459_, lean_object* v_x_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg(v_mvarId_459_, v_x_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3(lean_object* v_00_u03b1_471_, lean_object* v_mvarId_472_, lean_object* v_x_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg(v_mvarId_472_, v_x_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___boxed(lean_object* v_00_u03b1_484_, lean_object* v_mvarId_485_, lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3(v_00_u03b1_484_, v_mvarId_485_, v_x_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
lean_object* v_ks_501_; lean_object* v_vs_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_526_; 
v_ks_501_ = lean_ctor_get(v_x_497_, 0);
v_vs_502_ = lean_ctor_get(v_x_497_, 1);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_497_);
if (v_isSharedCheck_526_ == 0)
{
v___x_504_ = v_x_497_;
v_isShared_505_ = v_isSharedCheck_526_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_vs_502_);
lean_inc(v_ks_501_);
lean_dec(v_x_497_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_526_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_array_get_size(v_ks_501_);
v___x_507_ = lean_nat_dec_lt(v_x_498_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
lean_dec(v_x_498_);
v___x_508_ = lean_array_push(v_ks_501_, v_x_499_);
v___x_509_ = lean_array_push(v_vs_502_, v_x_500_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___x_509_);
lean_ctor_set(v___x_504_, 0, v___x_508_);
v___x_511_ = v___x_504_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_508_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
else
{
lean_object* v_k_x27_513_; uint8_t v___x_514_; 
v_k_x27_513_ = lean_array_fget_borrowed(v_ks_501_, v_x_498_);
v___x_514_ = l_Lean_instBEqMVarId_beq(v_x_499_, v_k_x27_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_516_; 
if (v_isShared_505_ == 0)
{
v___x_516_ = v___x_504_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_ks_501_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v_vs_502_);
v___x_516_ = v_reuseFailAlloc_520_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = lean_nat_add(v_x_498_, v___x_517_);
lean_dec(v_x_498_);
v_x_497_ = v___x_516_;
v_x_498_ = v___x_518_;
goto _start;
}
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_521_ = lean_array_fset(v_ks_501_, v_x_498_, v_x_499_);
v___x_522_ = lean_array_fset(v_vs_502_, v_x_498_, v_x_500_);
lean_dec(v_x_498_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___x_522_);
lean_ctor_set(v___x_504_, 0, v___x_521_);
v___x_524_ = v___x_504_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5___redArg(lean_object* v_n_527_, lean_object* v_k_528_, lean_object* v_v_529_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_n_527_, v___x_530_, v_k_528_, v_v_529_);
return v___x_531_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_532_; size_t v___x_533_; size_t v___x_534_; 
v___x_532_ = ((size_t)5ULL);
v___x_533_ = ((size_t)1ULL);
v___x_534_ = lean_usize_shift_left(v___x_533_, v___x_532_);
return v___x_534_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_535_; size_t v___x_536_; size_t v___x_537_; 
v___x_535_ = ((size_t)1ULL);
v___x_536_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_537_ = lean_usize_sub(v___x_536_, v___x_535_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(lean_object* v_x_539_, size_t v_x_540_, size_t v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_es_544_; size_t v___x_545_; size_t v___x_546_; size_t v___x_547_; size_t v___x_548_; lean_object* v_j_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_es_544_ = lean_ctor_get(v_x_539_, 0);
v___x_545_ = ((size_t)5ULL);
v___x_546_ = ((size_t)1ULL);
v___x_547_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__1);
v___x_548_ = lean_usize_land(v_x_540_, v___x_547_);
v_j_549_ = lean_usize_to_nat(v___x_548_);
v___x_550_ = lean_array_get_size(v_es_544_);
v___x_551_ = lean_nat_dec_lt(v_j_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_dec(v_j_549_);
lean_dec(v_x_543_);
lean_dec(v_x_542_);
return v_x_539_;
}
else
{
lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_588_; 
lean_inc_ref(v_es_544_);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_x_539_, 0);
lean_dec(v_unused_589_);
v___x_553_ = v_x_539_;
v_isShared_554_ = v_isSharedCheck_588_;
goto v_resetjp_552_;
}
else
{
lean_dec(v_x_539_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_588_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v_v_555_; lean_object* v___x_556_; lean_object* v_xs_x27_557_; lean_object* v___y_559_; 
v_v_555_ = lean_array_fget(v_es_544_, v_j_549_);
v___x_556_ = lean_box(0);
v_xs_x27_557_ = lean_array_fset(v_es_544_, v_j_549_, v___x_556_);
switch(lean_obj_tag(v_v_555_))
{
case 0:
{
lean_object* v_key_564_; lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_575_; 
v_key_564_ = lean_ctor_get(v_v_555_, 0);
v_val_565_ = lean_ctor_get(v_v_555_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v_v_555_);
if (v_isSharedCheck_575_ == 0)
{
v___x_567_ = v_v_555_;
v_isShared_568_ = v_isSharedCheck_575_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_inc(v_key_564_);
lean_dec(v_v_555_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_575_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
uint8_t v___x_569_; 
v___x_569_ = l_Lean_instBEqMVarId_beq(v_x_542_, v_key_564_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_del_object(v___x_567_);
v___x_570_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_564_, v_val_565_, v_x_542_, v_x_543_);
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
v___y_559_ = v___x_571_;
goto v___jp_558_;
}
else
{
lean_object* v___x_573_; 
lean_dec(v_val_565_);
lean_dec(v_key_564_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 1, v_x_543_);
lean_ctor_set(v___x_567_, 0, v_x_542_);
v___x_573_ = v___x_567_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_x_542_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_x_543_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
v___y_559_ = v___x_573_;
goto v___jp_558_;
}
}
}
}
case 1:
{
lean_object* v_node_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_586_; 
v_node_576_ = lean_ctor_get(v_v_555_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v_v_555_);
if (v_isSharedCheck_586_ == 0)
{
v___x_578_ = v_v_555_;
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_node_576_);
lean_dec(v_v_555_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
size_t v___x_580_; size_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_580_ = lean_usize_shift_right(v_x_540_, v___x_545_);
v___x_581_ = lean_usize_add(v_x_541_, v___x_546_);
v___x_582_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(v_node_576_, v___x_580_, v___x_581_, v_x_542_, v_x_543_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_582_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
v___y_559_ = v___x_584_;
goto v___jp_558_;
}
}
}
default: 
{
lean_object* v___x_587_; 
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_x_542_);
lean_ctor_set(v___x_587_, 1, v_x_543_);
v___y_559_ = v___x_587_;
goto v___jp_558_;
}
}
v___jp_558_:
{
lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_560_ = lean_array_fset(v_xs_x27_557_, v_j_549_, v___y_559_);
lean_dec(v_j_549_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_560_);
v___x_562_ = v___x_553_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_560_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
else
{
lean_object* v_ks_590_; lean_object* v_vs_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_611_; 
v_ks_590_ = lean_ctor_get(v_x_539_, 0);
v_vs_591_ = lean_ctor_get(v_x_539_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_611_ == 0)
{
v___x_593_ = v_x_539_;
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_vs_591_);
lean_inc(v_ks_590_);
lean_dec(v_x_539_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_ks_590_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_vs_591_);
v___x_596_ = v_reuseFailAlloc_610_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v_newNode_597_; uint8_t v___y_599_; size_t v___x_605_; uint8_t v___x_606_; 
v_newNode_597_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5___redArg(v___x_596_, v_x_542_, v_x_543_);
v___x_605_ = ((size_t)7ULL);
v___x_606_ = lean_usize_dec_le(v___x_605_, v_x_541_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_607_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_597_);
v___x_608_ = lean_unsigned_to_nat(4u);
v___x_609_ = lean_nat_dec_lt(v___x_607_, v___x_608_);
lean_dec(v___x_607_);
v___y_599_ = v___x_609_;
goto v___jp_598_;
}
else
{
v___y_599_ = v___x_606_;
goto v___jp_598_;
}
v___jp_598_:
{
if (v___y_599_ == 0)
{
lean_object* v_ks_600_; lean_object* v_vs_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_ks_600_ = lean_ctor_get(v_newNode_597_, 0);
lean_inc_ref(v_ks_600_);
v_vs_601_ = lean_ctor_get(v_newNode_597_, 1);
lean_inc_ref(v_vs_601_);
lean_dec_ref(v_newNode_597_);
v___x_602_ = lean_unsigned_to_nat(0u);
v___x_603_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___closed__2);
v___x_604_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg(v_x_541_, v_ks_600_, v_vs_601_, v___x_602_, v___x_603_);
lean_dec_ref(v_vs_601_);
lean_dec_ref(v_ks_600_);
return v___x_604_;
}
else
{
return v_newNode_597_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg(size_t v_depth_612_, lean_object* v_keys_613_, lean_object* v_vals_614_, lean_object* v_i_615_, lean_object* v_entries_616_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_get_size(v_keys_613_);
v___x_618_ = lean_nat_dec_lt(v_i_615_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec(v_i_615_);
return v_entries_616_;
}
else
{
lean_object* v_k_619_; lean_object* v_v_620_; uint64_t v___x_621_; size_t v_h_622_; size_t v___x_623_; lean_object* v___x_624_; size_t v___x_625_; size_t v___x_626_; size_t v___x_627_; size_t v_h_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_k_619_ = lean_array_fget_borrowed(v_keys_613_, v_i_615_);
v_v_620_ = lean_array_fget_borrowed(v_vals_614_, v_i_615_);
v___x_621_ = l_Lean_instHashableMVarId_hash(v_k_619_);
v_h_622_ = lean_uint64_to_usize(v___x_621_);
v___x_623_ = ((size_t)5ULL);
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_sub(v_depth_612_, v___x_625_);
v___x_627_ = lean_usize_mul(v___x_623_, v___x_626_);
v_h_628_ = lean_usize_shift_right(v_h_622_, v___x_627_);
v___x_629_ = lean_nat_add(v_i_615_, v___x_624_);
lean_dec(v_i_615_);
lean_inc(v_v_620_);
lean_inc(v_k_619_);
v___x_630_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(v_entries_616_, v_h_628_, v_depth_612_, v_k_619_, v_v_620_);
v_i_615_ = v___x_629_;
v_entries_616_ = v___x_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_depth_632_, lean_object* v_keys_633_, lean_object* v_vals_634_, lean_object* v_i_635_, lean_object* v_entries_636_){
_start:
{
size_t v_depth_boxed_637_; lean_object* v_res_638_; 
v_depth_boxed_637_ = lean_unbox_usize(v_depth_632_);
lean_dec(v_depth_632_);
v_res_638_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg(v_depth_boxed_637_, v_keys_633_, v_vals_634_, v_i_635_, v_entries_636_);
lean_dec_ref(v_vals_634_);
lean_dec_ref(v_keys_633_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_, lean_object* v_x_642_, lean_object* v_x_643_){
_start:
{
size_t v_x_5178__boxed_644_; size_t v_x_5179__boxed_645_; lean_object* v_res_646_; 
v_x_5178__boxed_644_ = lean_unbox_usize(v_x_640_);
lean_dec(v_x_640_);
v_x_5179__boxed_645_ = lean_unbox_usize(v_x_641_);
lean_dec(v_x_641_);
v_res_646_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(v_x_639_, v_x_5178__boxed_644_, v_x_5179__boxed_645_, v_x_642_, v_x_643_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2___redArg(lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
uint64_t v___x_650_; size_t v___x_651_; size_t v___x_652_; lean_object* v___x_653_; 
v___x_650_ = l_Lean_instHashableMVarId_hash(v_x_648_);
v___x_651_ = lean_uint64_to_usize(v___x_650_);
v___x_652_ = ((size_t)1ULL);
v___x_653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(v_x_647_, v___x_651_, v___x_652_, v_x_648_, v_x_649_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(lean_object* v_mvarId_654_, lean_object* v_val_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v_mctx_661_; lean_object* v_cache_662_; lean_object* v_zetaDeltaFVarIds_663_; lean_object* v_postponed_664_; lean_object* v_diag_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_693_; 
v___x_659_ = lean_st_ref_get(v___y_657_);
lean_dec(v___x_659_);
v___x_660_ = lean_st_ref_take(v___y_656_);
v_mctx_661_ = lean_ctor_get(v___x_660_, 0);
v_cache_662_ = lean_ctor_get(v___x_660_, 1);
v_zetaDeltaFVarIds_663_ = lean_ctor_get(v___x_660_, 2);
v_postponed_664_ = lean_ctor_get(v___x_660_, 3);
v_diag_665_ = lean_ctor_get(v___x_660_, 4);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_693_ == 0)
{
v___x_667_ = v___x_660_;
v_isShared_668_ = v_isSharedCheck_693_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_diag_665_);
lean_inc(v_postponed_664_);
lean_inc(v_zetaDeltaFVarIds_663_);
lean_inc(v_cache_662_);
lean_inc(v_mctx_661_);
lean_dec(v___x_660_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_693_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v_depth_669_; lean_object* v_levelAssignDepth_670_; lean_object* v_lmvarCounter_671_; lean_object* v_mvarCounter_672_; lean_object* v_lDecls_673_; lean_object* v_decls_674_; lean_object* v_userNames_675_; lean_object* v_lAssignment_676_; lean_object* v_eAssignment_677_; lean_object* v_dAssignment_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_692_; 
v_depth_669_ = lean_ctor_get(v_mctx_661_, 0);
v_levelAssignDepth_670_ = lean_ctor_get(v_mctx_661_, 1);
v_lmvarCounter_671_ = lean_ctor_get(v_mctx_661_, 2);
v_mvarCounter_672_ = lean_ctor_get(v_mctx_661_, 3);
v_lDecls_673_ = lean_ctor_get(v_mctx_661_, 4);
v_decls_674_ = lean_ctor_get(v_mctx_661_, 5);
v_userNames_675_ = lean_ctor_get(v_mctx_661_, 6);
v_lAssignment_676_ = lean_ctor_get(v_mctx_661_, 7);
v_eAssignment_677_ = lean_ctor_get(v_mctx_661_, 8);
v_dAssignment_678_ = lean_ctor_get(v_mctx_661_, 9);
v_isSharedCheck_692_ = !lean_is_exclusive(v_mctx_661_);
if (v_isSharedCheck_692_ == 0)
{
v___x_680_ = v_mctx_661_;
v_isShared_681_ = v_isSharedCheck_692_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_dAssignment_678_);
lean_inc(v_eAssignment_677_);
lean_inc(v_lAssignment_676_);
lean_inc(v_userNames_675_);
lean_inc(v_decls_674_);
lean_inc(v_lDecls_673_);
lean_inc(v_mvarCounter_672_);
lean_inc(v_lmvarCounter_671_);
lean_inc(v_levelAssignDepth_670_);
lean_inc(v_depth_669_);
lean_dec(v_mctx_661_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_692_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_682_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2___redArg(v_eAssignment_677_, v_mvarId_654_, v_val_655_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 8, v___x_682_);
v___x_684_ = v___x_680_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_depth_669_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_levelAssignDepth_670_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_lmvarCounter_671_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_mvarCounter_672_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v_lDecls_673_);
lean_ctor_set(v_reuseFailAlloc_691_, 5, v_decls_674_);
lean_ctor_set(v_reuseFailAlloc_691_, 6, v_userNames_675_);
lean_ctor_set(v_reuseFailAlloc_691_, 7, v_lAssignment_676_);
lean_ctor_set(v_reuseFailAlloc_691_, 8, v___x_682_);
lean_ctor_set(v_reuseFailAlloc_691_, 9, v_dAssignment_678_);
v___x_684_ = v_reuseFailAlloc_691_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_686_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_684_);
v___x_686_ = v___x_667_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_cache_662_);
lean_ctor_set(v_reuseFailAlloc_690_, 2, v_zetaDeltaFVarIds_663_);
lean_ctor_set(v_reuseFailAlloc_690_, 3, v_postponed_664_);
lean_ctor_set(v_reuseFailAlloc_690_, 4, v_diag_665_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_st_ref_set(v___y_656_, v___x_686_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg___boxed(lean_object* v_mvarId_694_, lean_object* v_val_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(v_mvarId_694_, v_val_695_, v___y_696_, v___y_697_);
lean_dec(v___y_697_);
lean_dec(v___y_696_);
return v_res_699_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0(void){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = lean_mk_string_unchecked("not in proof mode", 17, 17);
return v___x_700_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__0);
v___x_702_ = l_Lean_stringToMessageData(v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0(lean_object* v_a_703_, lean_object* v___x_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___x_722_; 
lean_inc(v_a_703_);
v___x_722_ = l_Lean_MVarId_getType(v_a_703_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_724_; lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref(v___x_722_);
v___x_724_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__1___redArg(v_a_723_, v___y_710_, v___y_712_);
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref(v___x_724_);
v___x_726_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_725_);
lean_dec(v_a_725_);
if (lean_obj_tag(v___x_726_) == 1)
{
lean_object* v_val_727_; lean_object* v___x_728_; 
v_val_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc_n(v_val_727_, 2);
lean_dec_ref(v___x_726_);
lean_inc(v___x_704_);
v___x_728_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact(v_val_727_, v___x_704_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref(v___x_728_);
if (lean_obj_tag(v_a_729_) == 1)
{
lean_object* v_val_730_; lean_object* v___x_731_; 
lean_dec(v_val_727_);
lean_dec(v___x_704_);
v_val_730_ = lean_ctor_get(v_a_729_, 0);
lean_inc(v_val_730_);
lean_dec_ref(v_a_729_);
v___x_731_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(v_a_703_, v_val_730_, v___y_710_, v___y_712_);
lean_dec_ref(v___x_731_);
v___y_715_ = v___y_706_;
v___y_716_ = v___y_709_;
v___y_717_ = v___y_710_;
v___y_718_ = v___y_711_;
v___y_719_ = v___y_712_;
goto v___jp_714_;
}
else
{
lean_object* v___x_732_; 
lean_dec(v_a_729_);
v___x_732_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure(v_val_727_, v___x_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_734_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref(v___x_732_);
v___x_734_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(v_a_703_, v_a_733_, v___y_710_, v___y_712_);
lean_dec_ref(v___x_734_);
v___y_715_ = v___y_706_;
v___y_716_ = v___y_709_;
v___y_717_ = v___y_710_;
v___y_718_ = v___y_711_;
v___y_719_ = v___y_712_;
goto v___jp_714_;
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_703_);
v_a_735_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_732_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_732_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_val_727_);
lean_dec(v___x_704_);
lean_dec(v_a_703_);
v_a_743_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_728_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_728_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec(v___x_726_);
lean_dec(v___x_704_);
lean_dec(v_a_703_);
v___x_751_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___closed__1);
v___x_752_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_exactPure_spec__0___redArg(v___x_751_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
return v___x_752_;
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec(v___x_704_);
lean_dec(v_a_703_);
v_a_753_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_722_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_722_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
v___jp_714_:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_box(0);
v___x_721_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_720_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___boxed(lean_object* v_a_761_, lean_object* v___x_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0(v_a_761_, v___x_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
return v_res_772_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1(void){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_774_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2(void){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = lean_mk_string_unchecked("mexact", 6, 6);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_776_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__2);
v___x_777_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3);
v___x_778_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__1);
v___x_779_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0);
v___x_780_ = l_Lean_Name_mkStr4(v___x_779_, v___x_778_, v___x_777_, v___x_776_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact(lean_object* v_x_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_791_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3);
lean_inc(v_x_781_);
v___x_792_ = l_Lean_Syntax_isOfKind(v_x_781_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; 
lean_dec(v_x_781_);
v___x_793_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__0___redArg();
return v___x_793_;
}
else
{
lean_object* v___x_794_; 
v___x_794_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_783_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___f_798_; lean_object* v___x_799_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc_n(v_a_795_, 2);
lean_dec_ref(v___x_794_);
v___x_796_ = lean_unsigned_to_nat(1u);
v___x_797_ = l_Lean_Syntax_getArg(v_x_781_, v___x_796_);
lean_dec(v_x_781_);
v___f_798_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___lam__0___boxed), 11, 2);
lean_closure_set(v___f_798_, 0, v_a_795_);
lean_closure_set(v___f_798_, 1, v___x_797_);
v___x_799_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__3___redArg(v_a_795_, v___f_798_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
return v___x_799_;
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_x_781_);
v_a_800_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_794_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_794_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___boxed(lean_object* v_x_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMExact(v_x_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_a_809_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2(lean_object* v_mvarId_819_, lean_object* v_val_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___redArg(v_mvarId_819_, v_val_820_, v___y_826_, v___y_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2___boxed(lean_object* v_mvarId_831_, lean_object* v_val_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2(v_mvarId_831_, v_val_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2(lean_object* v_00_u03b2_843_, lean_object* v_x_844_, lean_object* v_x_845_, lean_object* v_x_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2___redArg(v_x_844_, v_x_845_, v_x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_848_, lean_object* v_x_849_, size_t v_x_850_, size_t v_x_851_, lean_object* v_x_852_, lean_object* v_x_853_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___redArg(v_x_849_, v_x_850_, v_x_851_, v_x_852_, v_x_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_855_, lean_object* v_x_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
size_t v_x_5646__boxed_861_; size_t v_x_5647__boxed_862_; lean_object* v_res_863_; 
v_x_5646__boxed_861_ = lean_unbox_usize(v_x_857_);
lean_dec(v_x_857_);
v_x_5647__boxed_862_ = lean_unbox_usize(v_x_858_);
lean_dec(v_x_858_);
v_res_863_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4(v_00_u03b2_855_, v_x_856_, v_x_5646__boxed_861_, v_x_5647__boxed_862_, v_x_859_, v_x_860_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_864_, lean_object* v_n_865_, lean_object* v_k_866_, lean_object* v_v_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5___redArg(v_n_865_, v_k_866_, v_v_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_869_, size_t v_depth_870_, lean_object* v_keys_871_, lean_object* v_vals_872_, lean_object* v_heq_873_, lean_object* v_i_874_, lean_object* v_entries_875_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___redArg(v_depth_870_, v_keys_871_, v_vals_872_, v_i_874_, v_entries_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_877_, lean_object* v_depth_878_, lean_object* v_keys_879_, lean_object* v_vals_880_, lean_object* v_heq_881_, lean_object* v_i_882_, lean_object* v_entries_883_){
_start:
{
size_t v_depth_boxed_884_; lean_object* v_res_885_; 
v_depth_boxed_884_ = lean_unbox_usize(v_depth_878_);
lean_dec(v_depth_878_);
v_res_885_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__6(v_00_u03b2_877_, v_depth_boxed_884_, v_keys_879_, v_vals_880_, v_heq_881_, v_i_882_, v_entries_883_);
lean_dec_ref(v_vals_880_);
lean_dec_ref(v_keys_879_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_886_, lean_object* v_x_887_, lean_object* v_x_888_, lean_object* v_x_889_, lean_object* v_x_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMExact_spec__2_spec__2_spec__4_spec__5_spec__6___redArg(v_x_887_, v_x_888_, v_x_889_, v_x_890_);
return v___x_891_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0(void){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_892_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1(void){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_893_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2(void){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = lean_mk_string_unchecked("elabMExact", 10, 10);
return v___x_894_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_895_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__2);
v___x_896_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__1);
v___x_897_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__1);
v___x_898_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_exact___closed__3);
v___x_899_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__0);
v___x_900_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__0);
v___x_901_ = l_Lean_Name_mkStr6(v___x_900_, v___x_899_, v___x_898_, v___x_897_, v___x_896_, v___x_895_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1(){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_903_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_904_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___closed__3);
v___x_905_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___closed__3);
v___x_906_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMExact___boxed), 10, 0);
v___x_907_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_903_, v___x_904_, v___x_905_, v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1___boxed(lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1();
return v_res_909_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Exact_0__Lean_Elab_Tactic_Do_ProofMode_elabMExact___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMExact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(builtin);
}
#ifdef __cplusplus
}
#endif
