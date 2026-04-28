// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Assumption
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.Exact import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instInhabitedOfPure___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___boxed(lean_object*);
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO(lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1(void){
_start:
{
lean_object* v___f_2_; 
v___f_2_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_2_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2(void){
_start:
{
lean_object* v___f_3_; 
v___f_3_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_3_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0(lean_object* v_msg_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v_toApplicative_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_44_; 
v___x_10_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0, &l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__0);
v___x_11_ = l_StateRefT_x27_instMonad___redArg(v___x_10_);
v_toApplicative_12_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_44_ == 0)
{
lean_object* v_unused_45_; 
v_unused_45_ = lean_ctor_get(v___x_11_, 1);
lean_dec(v_unused_45_);
v___x_14_ = v___x_11_;
v_isShared_15_ = v_isSharedCheck_44_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_toApplicative_12_);
lean_dec(v___x_11_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_44_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v_toFunctor_16_; lean_object* v_toSeq_17_; lean_object* v_toSeqLeft_18_; lean_object* v_toSeqRight_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_42_; 
v_toFunctor_16_ = lean_ctor_get(v_toApplicative_12_, 0);
v_toSeq_17_ = lean_ctor_get(v_toApplicative_12_, 2);
v_toSeqLeft_18_ = lean_ctor_get(v_toApplicative_12_, 3);
v_toSeqRight_19_ = lean_ctor_get(v_toApplicative_12_, 4);
v_isSharedCheck_42_ = !lean_is_exclusive(v_toApplicative_12_);
if (v_isSharedCheck_42_ == 0)
{
lean_object* v_unused_43_; 
v_unused_43_ = lean_ctor_get(v_toApplicative_12_, 1);
lean_dec(v_unused_43_);
v___x_21_ = v_toApplicative_12_;
v_isShared_22_ = v_isSharedCheck_42_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_toSeqRight_19_);
lean_inc(v_toSeqLeft_18_);
lean_inc(v_toSeq_17_);
lean_inc(v_toFunctor_16_);
lean_dec(v_toApplicative_12_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_42_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___f_28_; lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___x_32_; 
v___f_23_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1, &l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1_once, _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__1);
v___f_24_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2, &l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2_once, _init_l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___closed__2);
lean_inc_ref(v_toFunctor_16_);
v___f_25_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_25_, 0, v_toFunctor_16_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_26_, 0, v_toFunctor_16_);
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___f_25_);
lean_ctor_set(v___x_27_, 1, v___f_26_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_28_, 0, v_toSeqRight_19_);
v___f_29_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_29_, 0, v_toSeqLeft_18_);
v___f_30_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_30_, 0, v_toSeq_17_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 4, v___f_28_);
lean_ctor_set(v___x_21_, 3, v___f_29_);
lean_ctor_set(v___x_21_, 2, v___f_30_);
lean_ctor_set(v___x_21_, 1, v___f_23_);
lean_ctor_set(v___x_21_, 0, v___x_27_);
v___x_32_ = v___x_21_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___f_23_);
lean_ctor_set(v_reuseFailAlloc_41_, 2, v___f_30_);
lean_ctor_set(v_reuseFailAlloc_41_, 3, v___f_29_);
lean_ctor_set(v_reuseFailAlloc_41_, 4, v___f_28_);
v___x_32_ = v_reuseFailAlloc_41_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
lean_object* v___x_34_; 
if (v_isShared_15_ == 0)
{
lean_ctor_set(v___x_14_, 1, v___f_24_);
lean_ctor_set(v___x_14_, 0, v___x_32_);
v___x_34_ = v___x_14_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v___f_24_);
v___x_34_ = v_reuseFailAlloc_40_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_3557__overap_38_; lean_object* v___x_39_; 
v___x_35_ = l_StateRefT_x27_instMonad___redArg(v___x_34_);
v___x_36_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_36_, 0, lean_box(0));
lean_closure_set(v___x_36_, 1, lean_box(0));
lean_closure_set(v___x_36_, 2, v___x_35_);
v___x_37_ = l_OptionT_instInhabitedOfPure___redArg(v___x_36_);
v___x_3557__overap_38_ = lean_panic_fn_borrowed(v___x_37_, v_msg_4_);
lean_dec(v___x_37_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
v___x_39_ = lean_apply_5(v___x_3557__overap_38_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, lean_box(0));
return v___x_39_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0___boxed(lean_object* v_msg_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0(v_msg_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
return v_res_52_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("entails", 7, 7);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_58_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__4);
v___x_59_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__3);
v___x_60_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_61_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_62_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_63_ = l_Lean_Name_mkStr5(v___x_62_, v___x_61_, v___x_60_, v___x_59_, v___x_58_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6(void){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_mk_string_unchecked("Assumption", 10, 10);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_mk_string_unchecked("left", 4, 4);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_67_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__8);
v___x_68_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7);
v___x_69_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_70_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_71_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_72_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_73_ = l_Lean_Name_mkStr6(v___x_72_, v___x_71_, v___x_70_, v___x_69_, v___x_68_, v___x_67_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked("right", 5, 5);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_75_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__10);
v___x_76_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__7);
v___x_77_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_78_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_79_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_80_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_81_ = l_Lean_Name_mkStr6(v___x_80_, v___x_79_, v___x_78_, v___x_77_, v___x_76_, v___x_75_);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_mk_string_unchecked("Lean.Elab.Tactic.Do.ProofMode.Assumption", 40, 40);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13(void){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lean_mk_string_unchecked("Lean.Elab.Tactic.Do.ProofMode.MGoal.assumption", 46, 46);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_mk_string_unchecked("assumption: hypothesis without proper metadata: ", 48, 48);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(lean_object* v_goal_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_u_91_; lean_object* v_00_u03c3s_92_; lean_object* v_hyps_93_; lean_object* v_target_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_219_; 
v_u_91_ = lean_ctor_get(v_goal_85_, 0);
v_00_u03c3s_92_ = lean_ctor_get(v_goal_85_, 1);
v_hyps_93_ = lean_ctor_get(v_goal_85_, 2);
v_target_94_ = lean_ctor_get(v_goal_85_, 3);
v_isSharedCheck_219_ = !lean_is_exclusive(v_goal_85_);
if (v_isSharedCheck_219_ == 0)
{
v___x_96_ = v_goal_85_;
v_isShared_97_ = v_isSharedCheck_219_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_target_94_);
lean_inc(v_hyps_93_);
lean_inc(v_00_u03c3s_92_);
lean_inc(v_u_91_);
lean_dec(v_goal_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_219_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_98_; 
lean_inc_ref(v_hyps_93_);
v___x_98_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_hyps_93_);
if (lean_obj_tag(v___x_98_) == 1)
{
lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
lean_del_object(v___x_96_);
lean_dec_ref(v_target_94_);
lean_dec_ref(v_hyps_93_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_98_, 0);
lean_dec(v_unused_107_);
v___x_100_ = v___x_98_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_dec(v___x_98_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_box(0);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 0);
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
else
{
lean_object* v___x_108_; 
lean_dec(v___x_98_);
lean_inc_ref(v_hyps_93_);
v___x_108_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_hyps_93_);
if (lean_obj_tag(v___x_108_) == 1)
{
lean_object* v_val_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_144_; 
lean_del_object(v___x_96_);
lean_dec_ref(v_hyps_93_);
v_val_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_144_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_val_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_p_113_; lean_object* v___x_114_; 
v_p_113_ = lean_ctor_get(v_val_109_, 2);
lean_inc_ref_n(v_p_113_, 2);
lean_dec(v_val_109_);
v___x_114_ = l_Lean_Meta_isExprDefEq(v_p_113_, v_target_94_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_135_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_135_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_135_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_135_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
uint8_t v___x_119_; 
v___x_119_ = lean_unbox(v_a_115_);
lean_dec(v_a_115_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_122_; 
lean_dec_ref(v_p_113_);
lean_del_object(v___x_111_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
v___x_120_ = lean_box(0);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v___x_120_);
v___x_122_ = v___x_117_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_124_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__5);
v___x_125_ = lean_box(0);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v_u_91_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = l_Lean_mkConst(v___x_124_, v___x_126_);
v___x_128_ = l_Lean_mkAppB(v___x_127_, v_00_u03c3s_92_, v_p_113_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_128_);
v___x_130_ = v___x_111_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_128_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v___x_130_);
v___x_132_ = v___x_117_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec_ref(v_p_113_);
lean_del_object(v___x_111_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
v_a_136_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_114_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_114_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
else
{
lean_object* v___x_145_; 
lean_dec(v___x_108_);
v___x_145_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_hyps_93_);
if (lean_obj_tag(v___x_145_) == 1)
{
lean_object* v_val_146_; lean_object* v_snd_147_; lean_object* v_snd_148_; lean_object* v_fst_149_; lean_object* v_fst_150_; lean_object* v_fst_151_; lean_object* v_snd_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_209_; 
lean_dec_ref(v_hyps_93_);
v_val_146_ = lean_ctor_get(v___x_145_, 0);
lean_inc(v_val_146_);
lean_dec_ref(v___x_145_);
v_snd_147_ = lean_ctor_get(v_val_146_, 1);
lean_inc(v_snd_147_);
v_snd_148_ = lean_ctor_get(v_snd_147_, 1);
lean_inc(v_snd_148_);
v_fst_149_ = lean_ctor_get(v_val_146_, 0);
lean_inc(v_fst_149_);
lean_dec(v_val_146_);
v_fst_150_ = lean_ctor_get(v_snd_147_, 0);
lean_inc(v_fst_150_);
lean_dec(v_snd_147_);
v_fst_151_ = lean_ctor_get(v_snd_148_, 0);
v_snd_152_ = lean_ctor_get(v_snd_148_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_snd_148_);
if (v_isSharedCheck_209_ == 0)
{
v___x_154_ = v_snd_148_;
v_isShared_155_ = v_isSharedCheck_209_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_snd_152_);
lean_inc(v_fst_151_);
lean_dec(v_snd_148_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_209_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = lean_box(0);
if (v_isShared_155_ == 0)
{
lean_ctor_set_tag(v___x_154_, 1);
lean_ctor_set(v___x_154_, 1, v___x_156_);
lean_ctor_set(v___x_154_, 0, v_fst_149_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_fst_149_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v___x_156_);
v___x_158_ = v_reuseFailAlloc_208_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___y_160_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc_ref(v_target_94_);
lean_inc(v_snd_152_);
lean_inc_ref(v_00_u03c3s_92_);
lean_inc(v_u_91_);
v___x_186_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_186_, 0, v_u_91_);
lean_ctor_set(v___x_186_, 1, v_00_u03c3s_92_);
lean_ctor_set(v___x_186_, 2, v_snd_152_);
lean_ctor_set(v___x_186_, 3, v_target_94_);
v___x_187_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(v___x_186_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_188_);
if (lean_obj_tag(v_a_188_) == 0)
{
v___y_160_ = v___x_187_;
goto v___jp_159_;
}
else
{
lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_206_; 
lean_del_object(v___x_96_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; 
v_unused_207_ = lean_ctor_get(v___x_187_, 0);
lean_dec(v_unused_207_);
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_206_;
goto v_resetjp_189_;
}
else
{
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_206_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v_val_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_205_; 
v_val_192_ = lean_ctor_get(v_a_188_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v_a_188_);
if (v_isSharedCheck_205_ == 0)
{
v___x_194_ = v_a_188_;
v_isShared_195_ = v_isSharedCheck_205_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_val_192_);
lean_dec(v_a_188_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_205_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_196_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__11);
v___x_197_ = l_Lean_mkConst(v___x_196_, v___x_158_);
v___x_198_ = l_Lean_mkApp5(v___x_197_, v_fst_150_, v_fst_151_, v_snd_152_, v_target_94_, v_val_192_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_198_);
v___x_200_ = v___x_194_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_204_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_202_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_200_);
v___x_202_ = v___x_190_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_200_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
}
else
{
v___y_160_ = v___x_187_;
goto v___jp_159_;
}
v___jp_159_:
{
if (lean_obj_tag(v___y_160_) == 0)
{
lean_object* v_a_161_; 
v_a_161_ = lean_ctor_get(v___y_160_, 0);
if (lean_obj_tag(v_a_161_) == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___y_160_);
lean_inc_ref(v_target_94_);
lean_inc(v_fst_151_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 2, v_fst_151_);
v___x_163_ = v___x_96_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_u_91_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_00_u03c3s_92_);
lean_ctor_set(v_reuseFailAlloc_185_, 2, v_fst_151_);
lean_ctor_set(v_reuseFailAlloc_185_, 3, v_target_94_);
v___x_163_ = v_reuseFailAlloc_185_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(v___x_163_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_a_165_);
if (lean_obj_tag(v_a_165_) == 0)
{
lean_dec_ref(v___x_158_);
lean_dec(v_snd_152_);
lean_dec(v_fst_151_);
lean_dec(v_fst_150_);
lean_dec_ref(v_target_94_);
return v___x_164_;
}
else
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_183_; 
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v___x_164_, 0);
lean_dec(v_unused_184_);
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_183_;
goto v_resetjp_166_;
}
else
{
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_183_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_val_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_182_; 
v_val_169_ = lean_ctor_get(v_a_165_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_182_ == 0)
{
v___x_171_ = v_a_165_;
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_val_169_);
lean_dec(v_a_165_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_182_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_173_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__9);
v___x_174_ = l_Lean_mkConst(v___x_173_, v___x_158_);
v___x_175_ = l_Lean_mkApp5(v___x_174_, v_fst_150_, v_fst_151_, v_snd_152_, v_target_94_, v_val_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_175_);
v___x_177_ = v___x_171_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_181_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_179_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_177_);
v___x_179_ = v___x_167_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_158_);
lean_dec(v_snd_152_);
lean_dec(v_fst_151_);
lean_dec(v_fst_150_);
lean_dec_ref(v_target_94_);
return v___x_164_;
}
}
}
else
{
lean_dec_ref(v___x_158_);
lean_dec(v_snd_152_);
lean_dec(v_fst_151_);
lean_dec(v_fst_150_);
lean_del_object(v___x_96_);
lean_dec_ref(v_target_94_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
return v___y_160_;
}
}
else
{
lean_dec_ref(v___x_158_);
lean_dec(v_snd_152_);
lean_dec(v_fst_151_);
lean_dec(v_fst_150_);
lean_del_object(v___x_96_);
lean_dec_ref(v_target_94_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
return v___y_160_;
}
}
}
}
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
lean_dec(v___x_145_);
lean_del_object(v___x_96_);
lean_dec_ref(v_target_94_);
lean_dec_ref(v_00_u03c3s_92_);
lean_dec(v_u_91_);
v___x_210_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__12);
v___x_211_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__13);
v___x_212_ = lean_unsigned_to_nat(30u);
v___x_213_ = lean_unsigned_to_nat(4u);
v___x_214_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__14);
v___x_215_ = lean_expr_dbg_to_string(v_hyps_93_);
lean_dec_ref(v_hyps_93_);
v___x_216_ = lean_string_append(v___x_214_, v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = l_mkPanicMessageWithDecl(v___x_210_, v___x_211_, v___x_212_, v___x_213_, v___x_216_);
lean_dec_ref(v___x_216_);
v___x_218_ = l_panic___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption_spec__0(v___x_217_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
return v___x_218_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___boxed(lean_object* v_goal_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(v_goal_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
return v_res_226_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_mk_string_unchecked("tautological", 12, 12);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_228_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__0);
v___x_229_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_230_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_231_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_232_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_233_ = l_Lean_Name_mkStr5(v___x_232_, v___x_231_, v___x_230_, v___x_229_, v___x_228_);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_mk_string_unchecked("PropAsSPredTautology", 20, 20);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_235_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__2);
v___x_236_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_237_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_238_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_239_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_240_ = l_Lean_Name_mkStr5(v___x_239_, v___x_238_, v___x_237_, v___x_236_, v___x_235_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_mk_string_unchecked("Exact", 5, 5);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_mk_string_unchecked("from_tautology", 14, 14);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_243_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__5);
v___x_244_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__4);
v___x_245_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_246_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__2);
v___x_247_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_248_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__0);
v___x_249_ = l_Lean_Name_mkStr6(v___x_248_, v___x_247_, v___x_246_, v___x_245_, v___x_244_, v___x_243_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure(lean_object* v_goal_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_u_256_; lean_object* v_00_u03c3s_257_; lean_object* v_hyps_258_; lean_object* v_target_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_00_u03c6_264_; lean_object* v___x_265_; 
v_u_256_ = lean_ctor_get(v_goal_250_, 0);
lean_inc(v_u_256_);
v_00_u03c3s_257_ = lean_ctor_get(v_goal_250_, 1);
lean_inc_ref_n(v_00_u03c3s_257_, 2);
v_hyps_258_ = lean_ctor_get(v_goal_250_, 2);
lean_inc_ref(v_hyps_258_);
v_target_259_ = lean_ctor_get(v_goal_250_, 3);
lean_inc_ref_n(v_target_259_, 2);
lean_dec_ref(v_goal_250_);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__1);
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_262_, 0, v_u_256_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
lean_inc_ref(v___x_262_);
v___x_263_ = l_Lean_mkConst(v___x_260_, v___x_262_);
v_00_u03c6_264_ = l_Lean_mkAppB(v___x_263_, v_00_u03c3s_257_, v_target_259_);
lean_inc_ref(v_00_u03c6_264_);
v___x_265_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_00_u03c6_264_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_301_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_301_ == 0)
{
v___x_268_ = v___x_265_;
v_isShared_269_ = v_isSharedCheck_301_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_265_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_301_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
if (lean_obj_tag(v_a_266_) == 0)
{
lean_object* v___x_270_; lean_object* v___x_272_; 
lean_dec_ref(v_00_u03c6_264_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v_target_259_);
lean_dec_ref(v_hyps_258_);
lean_dec_ref(v_00_u03c3s_257_);
v___x_270_ = lean_box(0);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v___x_270_);
v___x_272_ = v___x_268_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
else
{
lean_object* v_val_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_del_object(v___x_268_);
v_val_274_ = lean_ctor_get(v_a_266_, 0);
lean_inc(v_val_274_);
lean_dec_ref(v_a_266_);
v___x_275_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__3);
lean_inc_ref(v___x_262_);
v___x_276_ = l_Lean_mkConst(v___x_275_, v___x_262_);
lean_inc_ref(v_target_259_);
lean_inc_ref(v_00_u03c3s_257_);
lean_inc_ref(v_00_u03c6_264_);
v___x_277_ = l_Lean_mkApp3(v___x_276_, v_00_u03c6_264_, v_00_u03c3s_257_, v_target_259_);
v___x_278_ = lean_box(0);
v___x_279_ = l_Lean_Meta_synthInstance_x3f(v___x_277_, v___x_278_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_280_);
if (lean_obj_tag(v_a_280_) == 0)
{
lean_dec(v_val_274_);
lean_dec_ref(v_00_u03c6_264_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v_target_259_);
lean_dec_ref(v_hyps_258_);
lean_dec_ref(v_00_u03c3s_257_);
return v___x_279_;
}
else
{
lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_299_; 
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v___x_279_, 0);
lean_dec(v_unused_300_);
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_299_;
goto v_resetjp_281_;
}
else
{
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_299_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v_val_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_298_; 
v_val_284_ = lean_ctor_get(v_a_280_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v_a_280_);
if (v_isSharedCheck_298_ == 0)
{
v___x_286_ = v_a_280_;
v_isShared_287_ = v_isSharedCheck_298_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_val_284_);
lean_dec(v_a_280_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_298_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_288_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___closed__6);
v___x_289_ = l_Lean_mkConst(v___x_288_, v___x_262_);
v___x_290_ = l_Lean_Expr_fvar___override(v_val_274_);
v___x_291_ = l_Lean_mkApp6(v___x_289_, v_00_u03c3s_257_, v_00_u03c6_264_, v_hyps_258_, v_target_259_, v_val_284_, v___x_290_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_291_);
v___x_293_ = v___x_286_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_297_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_293_);
v___x_295_ = v___x_282_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
}
else
{
lean_dec(v_val_274_);
lean_dec_ref(v_00_u03c6_264_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v_target_259_);
lean_dec_ref(v_hyps_258_);
lean_dec_ref(v_00_u03c3s_257_);
return v___x_279_;
}
}
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
lean_dec_ref(v_00_u03c6_264_);
lean_dec_ref(v___x_262_);
lean_dec_ref(v_target_259_);
lean_dec_ref(v_hyps_258_);
lean_dec_ref(v_00_u03c3s_257_);
v_a_302_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_265_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_265_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure___boxed(lean_object* v_goal_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure(v_goal_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
lean_dec(v_a_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg(lean_object* v_e_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
uint8_t v___x_321_; 
v___x_321_ = l_Lean_Expr_hasMVar(v_e_317_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
v___x_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_322_, 0, v_e_317_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v_mctx_325_; lean_object* v___x_326_; lean_object* v_fst_327_; lean_object* v_snd_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v_cache_331_; lean_object* v_zetaDeltaFVarIds_332_; lean_object* v_postponed_333_; lean_object* v_diag_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_343_; 
v___x_323_ = lean_st_ref_get(v___y_319_);
lean_dec(v___x_323_);
v___x_324_ = lean_st_ref_get(v___y_318_);
v_mctx_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc_ref(v_mctx_325_);
lean_dec(v___x_324_);
v___x_326_ = l_Lean_instantiateMVarsCore(v_mctx_325_, v_e_317_);
v_fst_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_fst_327_);
v_snd_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_snd_328_);
lean_dec_ref(v___x_326_);
v___x_329_ = lean_st_ref_get(v___y_319_);
lean_dec(v___x_329_);
v___x_330_ = lean_st_ref_take(v___y_318_);
v_cache_331_ = lean_ctor_get(v___x_330_, 1);
v_zetaDeltaFVarIds_332_ = lean_ctor_get(v___x_330_, 2);
v_postponed_333_ = lean_ctor_get(v___x_330_, 3);
v_diag_334_ = lean_ctor_get(v___x_330_, 4);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; 
v_unused_344_ = lean_ctor_get(v___x_330_, 0);
lean_dec(v_unused_344_);
v___x_336_ = v___x_330_;
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_diag_334_);
lean_inc(v_postponed_333_);
lean_inc(v_zetaDeltaFVarIds_332_);
lean_inc(v_cache_331_);
lean_dec(v___x_330_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_343_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v_snd_328_);
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_snd_328_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_cache_331_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v_zetaDeltaFVarIds_332_);
lean_ctor_set(v_reuseFailAlloc_342_, 3, v_postponed_333_);
lean_ctor_set(v_reuseFailAlloc_342_, 4, v_diag_334_);
v___x_339_ = v_reuseFailAlloc_342_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_st_ref_set(v___y_318_, v___x_339_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v_fst_327_);
return v___x_341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg___boxed(lean_object* v_e_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg(v_e_345_, v___y_346_, v___y_347_);
lean_dec(v___y_347_);
lean_dec(v___y_346_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2(lean_object* v_e_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg(v_e_350_, v___y_356_, v___y_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___boxed(lean_object* v_e_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2(v_e_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0(lean_object* v_x_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; 
lean_inc(v___y_376_);
lean_inc_ref(v___y_375_);
lean_inc(v___y_374_);
lean_inc_ref(v___y_373_);
v___x_382_ = lean_apply_9(v_x_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, lean_box(0));
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0___boxed(lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0(v_x_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg(lean_object* v_mvarId_394_, lean_object* v_x_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_406_; 
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
lean_inc(v___y_397_);
lean_inc_ref(v___y_396_);
v___f_405_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_405_, 0, v_x_395_);
lean_closure_set(v___f_405_, 1, v___y_396_);
lean_closure_set(v___f_405_, 2, v___y_397_);
lean_closure_set(v___f_405_, 3, v___y_398_);
lean_closure_set(v___f_405_, 4, v___y_399_);
v___x_406_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_394_, v___f_405_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_406_) == 0)
{
return v___x_406_;
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg___boxed(lean_object* v_mvarId_415_, lean_object* v_x_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg(v_mvarId_415_, v_x_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3(lean_object* v_00_u03b1_427_, lean_object* v_mvarId_428_, lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg(v_mvarId_428_, v_x_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___boxed(lean_object* v_00_u03b1_440_, lean_object* v_mvarId_441_, lean_object* v_x_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3(v_00_u03b1_440_, v_mvarId_441_, v_x_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7___redArg(lean_object* v_x_453_, lean_object* v_x_454_, lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
lean_object* v_ks_457_; lean_object* v_vs_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_482_; 
v_ks_457_ = lean_ctor_get(v_x_453_, 0);
v_vs_458_ = lean_ctor_get(v_x_453_, 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_482_ == 0)
{
v___x_460_ = v_x_453_;
v_isShared_461_ = v_isSharedCheck_482_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_vs_458_);
lean_inc(v_ks_457_);
lean_dec(v_x_453_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_482_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = lean_array_get_size(v_ks_457_);
v___x_463_ = lean_nat_dec_lt(v_x_454_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
lean_dec(v_x_454_);
v___x_464_ = lean_array_push(v_ks_457_, v_x_455_);
v___x_465_ = lean_array_push(v_vs_458_, v_x_456_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 1, v___x_465_);
lean_ctor_set(v___x_460_, 0, v___x_464_);
v___x_467_ = v___x_460_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
else
{
lean_object* v_k_x27_469_; uint8_t v___x_470_; 
v_k_x27_469_ = lean_array_fget_borrowed(v_ks_457_, v_x_454_);
v___x_470_ = l_Lean_instBEqMVarId_beq(v_x_455_, v_k_x27_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_472_; 
if (v_isShared_461_ == 0)
{
v___x_472_ = v___x_460_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_ks_457_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_vs_458_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_unsigned_to_nat(1u);
v___x_474_ = lean_nat_add(v_x_454_, v___x_473_);
lean_dec(v_x_454_);
v_x_453_ = v___x_472_;
v_x_454_ = v___x_474_;
goto _start;
}
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_477_ = lean_array_fset(v_ks_457_, v_x_454_, v_x_455_);
v___x_478_ = lean_array_fset(v_vs_458_, v_x_454_, v_x_456_);
lean_dec(v_x_454_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 1, v___x_478_);
lean_ctor_set(v___x_460_, 0, v___x_477_);
v___x_480_ = v___x_460_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6___redArg(lean_object* v_n_483_, lean_object* v_k_484_, lean_object* v_v_485_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7___redArg(v_n_483_, v___x_486_, v_k_484_, v_v_485_);
return v___x_487_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_488_; size_t v___x_489_; size_t v___x_490_; 
v___x_488_ = ((size_t)5ULL);
v___x_489_ = ((size_t)1ULL);
v___x_490_ = lean_usize_shift_left(v___x_489_, v___x_488_);
return v___x_490_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_491_; size_t v___x_492_; size_t v___x_493_; 
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_493_ = lean_usize_sub(v___x_492_, v___x_491_);
return v___x_493_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(lean_object* v_x_495_, size_t v_x_496_, size_t v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_es_500_; size_t v___x_501_; size_t v___x_502_; size_t v___x_503_; size_t v___x_504_; lean_object* v_j_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v_es_500_ = lean_ctor_get(v_x_495_, 0);
v___x_501_ = ((size_t)5ULL);
v___x_502_ = ((size_t)1ULL);
v___x_503_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__1);
v___x_504_ = lean_usize_land(v_x_496_, v___x_503_);
v_j_505_ = lean_usize_to_nat(v___x_504_);
v___x_506_ = lean_array_get_size(v_es_500_);
v___x_507_ = lean_nat_dec_lt(v_j_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_dec(v_j_505_);
lean_dec(v_x_499_);
lean_dec(v_x_498_);
return v_x_495_;
}
else
{
lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_544_; 
lean_inc_ref(v_es_500_);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_544_ == 0)
{
lean_object* v_unused_545_; 
v_unused_545_ = lean_ctor_get(v_x_495_, 0);
lean_dec(v_unused_545_);
v___x_509_ = v_x_495_;
v_isShared_510_ = v_isSharedCheck_544_;
goto v_resetjp_508_;
}
else
{
lean_dec(v_x_495_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_544_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v_v_511_; lean_object* v___x_512_; lean_object* v_xs_x27_513_; lean_object* v___y_515_; 
v_v_511_ = lean_array_fget(v_es_500_, v_j_505_);
v___x_512_ = lean_box(0);
v_xs_x27_513_ = lean_array_fset(v_es_500_, v_j_505_, v___x_512_);
switch(lean_obj_tag(v_v_511_))
{
case 0:
{
lean_object* v_key_520_; lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
v_key_520_ = lean_ctor_get(v_v_511_, 0);
v_val_521_ = lean_ctor_get(v_v_511_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v_v_511_);
if (v_isSharedCheck_531_ == 0)
{
v___x_523_ = v_v_511_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_inc(v_key_520_);
lean_dec(v_v_511_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
uint8_t v___x_525_; 
v___x_525_ = l_Lean_instBEqMVarId_beq(v_x_498_, v_key_520_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; 
lean_del_object(v___x_523_);
v___x_526_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_520_, v_val_521_, v_x_498_, v_x_499_);
v___x_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
v___y_515_ = v___x_527_;
goto v___jp_514_;
}
else
{
lean_object* v___x_529_; 
lean_dec(v_val_521_);
lean_dec(v_key_520_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 1, v_x_499_);
lean_ctor_set(v___x_523_, 0, v_x_498_);
v___x_529_ = v___x_523_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_x_498_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_x_499_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v___y_515_ = v___x_529_;
goto v___jp_514_;
}
}
}
}
case 1:
{
lean_object* v_node_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_542_; 
v_node_532_ = lean_ctor_get(v_v_511_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v_v_511_);
if (v_isSharedCheck_542_ == 0)
{
v___x_534_ = v_v_511_;
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_node_532_);
lean_dec(v_v_511_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
size_t v___x_536_; size_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_536_ = lean_usize_shift_right(v_x_496_, v___x_501_);
v___x_537_ = lean_usize_add(v_x_497_, v___x_502_);
v___x_538_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(v_node_532_, v___x_536_, v___x_537_, v_x_498_, v_x_499_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_538_);
v___x_540_ = v___x_534_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
v___y_515_ = v___x_540_;
goto v___jp_514_;
}
}
}
default: 
{
lean_object* v___x_543_; 
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v_x_498_);
lean_ctor_set(v___x_543_, 1, v_x_499_);
v___y_515_ = v___x_543_;
goto v___jp_514_;
}
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_516_ = lean_array_fset(v_xs_x27_513_, v_j_505_, v___y_515_);
lean_dec(v_j_505_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_516_);
v___x_518_ = v___x_509_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
}
else
{
lean_object* v_ks_546_; lean_object* v_vs_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_567_; 
v_ks_546_ = lean_ctor_get(v_x_495_, 0);
v_vs_547_ = lean_ctor_get(v_x_495_, 1);
v_isSharedCheck_567_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_567_ == 0)
{
v___x_549_ = v_x_495_;
v_isShared_550_ = v_isSharedCheck_567_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_vs_547_);
lean_inc(v_ks_546_);
lean_dec(v_x_495_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_567_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_ks_546_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_vs_547_);
v___x_552_ = v_reuseFailAlloc_566_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v_newNode_553_; uint8_t v___y_555_; size_t v___x_561_; uint8_t v___x_562_; 
v_newNode_553_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6___redArg(v___x_552_, v_x_498_, v_x_499_);
v___x_561_ = ((size_t)7ULL);
v___x_562_ = lean_usize_dec_le(v___x_561_, v_x_497_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_553_);
v___x_564_ = lean_unsigned_to_nat(4u);
v___x_565_ = lean_nat_dec_lt(v___x_563_, v___x_564_);
lean_dec(v___x_563_);
v___y_555_ = v___x_565_;
goto v___jp_554_;
}
else
{
v___y_555_ = v___x_562_;
goto v___jp_554_;
}
v___jp_554_:
{
if (v___y_555_ == 0)
{
lean_object* v_ks_556_; lean_object* v_vs_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_ks_556_ = lean_ctor_get(v_newNode_553_, 0);
lean_inc_ref(v_ks_556_);
v_vs_557_ = lean_ctor_get(v_newNode_553_, 1);
lean_inc_ref(v_vs_557_);
lean_dec_ref(v_newNode_553_);
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_560_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg(v_x_497_, v_ks_556_, v_vs_557_, v___x_558_, v___x_559_);
lean_dec_ref(v_vs_557_);
lean_dec_ref(v_ks_556_);
return v___x_560_;
}
else
{
return v_newNode_553_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg(size_t v_depth_568_, lean_object* v_keys_569_, lean_object* v_vals_570_, lean_object* v_i_571_, lean_object* v_entries_572_){
_start:
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_array_get_size(v_keys_569_);
v___x_574_ = lean_nat_dec_lt(v_i_571_, v___x_573_);
if (v___x_574_ == 0)
{
lean_dec(v_i_571_);
return v_entries_572_;
}
else
{
lean_object* v_k_575_; lean_object* v_v_576_; uint64_t v___x_577_; size_t v_h_578_; size_t v___x_579_; lean_object* v___x_580_; size_t v___x_581_; size_t v___x_582_; size_t v___x_583_; size_t v_h_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_k_575_ = lean_array_fget_borrowed(v_keys_569_, v_i_571_);
v_v_576_ = lean_array_fget_borrowed(v_vals_570_, v_i_571_);
v___x_577_ = l_Lean_instHashableMVarId_hash(v_k_575_);
v_h_578_ = lean_uint64_to_usize(v___x_577_);
v___x_579_ = ((size_t)5ULL);
v___x_580_ = lean_unsigned_to_nat(1u);
v___x_581_ = ((size_t)1ULL);
v___x_582_ = lean_usize_sub(v_depth_568_, v___x_581_);
v___x_583_ = lean_usize_mul(v___x_579_, v___x_582_);
v_h_584_ = lean_usize_shift_right(v_h_578_, v___x_583_);
v___x_585_ = lean_nat_add(v_i_571_, v___x_580_);
lean_dec(v_i_571_);
lean_inc(v_v_576_);
lean_inc(v_k_575_);
v___x_586_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(v_entries_572_, v_h_584_, v_depth_568_, v_k_575_, v_v_576_);
v_i_571_ = v___x_585_;
v_entries_572_ = v___x_586_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg___boxed(lean_object* v_depth_588_, lean_object* v_keys_589_, lean_object* v_vals_590_, lean_object* v_i_591_, lean_object* v_entries_592_){
_start:
{
size_t v_depth_boxed_593_; lean_object* v_res_594_; 
v_depth_boxed_593_ = lean_unbox_usize(v_depth_588_);
lean_dec(v_depth_588_);
v_res_594_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg(v_depth_boxed_593_, v_keys_589_, v_vals_590_, v_i_591_, v_entries_592_);
lean_dec_ref(v_vals_590_);
lean_dec_ref(v_keys_589_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_, lean_object* v_x_598_, lean_object* v_x_599_){
_start:
{
size_t v_x_6343__boxed_600_; size_t v_x_6344__boxed_601_; lean_object* v_res_602_; 
v_x_6343__boxed_600_ = lean_unbox_usize(v_x_596_);
lean_dec(v_x_596_);
v_x_6344__boxed_601_ = lean_unbox_usize(v_x_597_);
lean_dec(v_x_597_);
v_res_602_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(v_x_595_, v_x_6343__boxed_600_, v_x_6344__boxed_601_, v_x_598_, v_x_599_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0___redArg(lean_object* v_x_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
uint64_t v___x_606_; size_t v___x_607_; size_t v___x_608_; lean_object* v___x_609_; 
v___x_606_ = l_Lean_instHashableMVarId_hash(v_x_604_);
v___x_607_ = lean_uint64_to_usize(v___x_606_);
v___x_608_ = ((size_t)1ULL);
v___x_609_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(v_x_603_, v___x_607_, v___x_608_, v_x_604_, v_x_605_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg(lean_object* v_mvarId_610_, lean_object* v_val_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_mctx_617_; lean_object* v_cache_618_; lean_object* v_zetaDeltaFVarIds_619_; lean_object* v_postponed_620_; lean_object* v_diag_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_649_; 
v___x_615_ = lean_st_ref_get(v___y_613_);
lean_dec(v___x_615_);
v___x_616_ = lean_st_ref_take(v___y_612_);
v_mctx_617_ = lean_ctor_get(v___x_616_, 0);
v_cache_618_ = lean_ctor_get(v___x_616_, 1);
v_zetaDeltaFVarIds_619_ = lean_ctor_get(v___x_616_, 2);
v_postponed_620_ = lean_ctor_get(v___x_616_, 3);
v_diag_621_ = lean_ctor_get(v___x_616_, 4);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_649_ == 0)
{
v___x_623_ = v___x_616_;
v_isShared_624_ = v_isSharedCheck_649_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_diag_621_);
lean_inc(v_postponed_620_);
lean_inc(v_zetaDeltaFVarIds_619_);
lean_inc(v_cache_618_);
lean_inc(v_mctx_617_);
lean_dec(v___x_616_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_649_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_depth_625_; lean_object* v_levelAssignDepth_626_; lean_object* v_lmvarCounter_627_; lean_object* v_mvarCounter_628_; lean_object* v_lDecls_629_; lean_object* v_decls_630_; lean_object* v_userNames_631_; lean_object* v_lAssignment_632_; lean_object* v_eAssignment_633_; lean_object* v_dAssignment_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_648_; 
v_depth_625_ = lean_ctor_get(v_mctx_617_, 0);
v_levelAssignDepth_626_ = lean_ctor_get(v_mctx_617_, 1);
v_lmvarCounter_627_ = lean_ctor_get(v_mctx_617_, 2);
v_mvarCounter_628_ = lean_ctor_get(v_mctx_617_, 3);
v_lDecls_629_ = lean_ctor_get(v_mctx_617_, 4);
v_decls_630_ = lean_ctor_get(v_mctx_617_, 5);
v_userNames_631_ = lean_ctor_get(v_mctx_617_, 6);
v_lAssignment_632_ = lean_ctor_get(v_mctx_617_, 7);
v_eAssignment_633_ = lean_ctor_get(v_mctx_617_, 8);
v_dAssignment_634_ = lean_ctor_get(v_mctx_617_, 9);
v_isSharedCheck_648_ = !lean_is_exclusive(v_mctx_617_);
if (v_isSharedCheck_648_ == 0)
{
v___x_636_ = v_mctx_617_;
v_isShared_637_ = v_isSharedCheck_648_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_dAssignment_634_);
lean_inc(v_eAssignment_633_);
lean_inc(v_lAssignment_632_);
lean_inc(v_userNames_631_);
lean_inc(v_decls_630_);
lean_inc(v_lDecls_629_);
lean_inc(v_mvarCounter_628_);
lean_inc(v_lmvarCounter_627_);
lean_inc(v_levelAssignDepth_626_);
lean_inc(v_depth_625_);
lean_dec(v_mctx_617_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_648_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0___redArg(v_eAssignment_633_, v_mvarId_610_, v_val_611_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 8, v___x_638_);
v___x_640_ = v___x_636_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_depth_625_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_levelAssignDepth_626_);
lean_ctor_set(v_reuseFailAlloc_647_, 2, v_lmvarCounter_627_);
lean_ctor_set(v_reuseFailAlloc_647_, 3, v_mvarCounter_628_);
lean_ctor_set(v_reuseFailAlloc_647_, 4, v_lDecls_629_);
lean_ctor_set(v_reuseFailAlloc_647_, 5, v_decls_630_);
lean_ctor_set(v_reuseFailAlloc_647_, 6, v_userNames_631_);
lean_ctor_set(v_reuseFailAlloc_647_, 7, v_lAssignment_632_);
lean_ctor_set(v_reuseFailAlloc_647_, 8, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_647_, 9, v_dAssignment_634_);
v___x_640_ = v_reuseFailAlloc_647_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_642_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_640_);
v___x_642_ = v___x_623_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_640_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_cache_618_);
lean_ctor_set(v_reuseFailAlloc_646_, 2, v_zetaDeltaFVarIds_619_);
lean_ctor_set(v_reuseFailAlloc_646_, 3, v_postponed_620_);
lean_ctor_set(v_reuseFailAlloc_646_, 4, v_diag_621_);
v___x_642_ = v_reuseFailAlloc_646_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_643_ = lean_st_ref_set(v___y_612_, v___x_642_);
v___x_644_ = lean_box(0);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg___boxed(lean_object* v_mvarId_650_, lean_object* v_val_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg(v_mvarId_650_, v_val_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2(lean_object* v_msgData_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; lean_object* v_env_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v_mctx_666_; lean_object* v_lctx_667_; lean_object* v_options_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_662_ = lean_st_ref_get(v___y_660_);
v_env_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc_ref(v_env_663_);
lean_dec(v___x_662_);
v___x_664_ = lean_st_ref_get(v___y_660_);
lean_dec(v___x_664_);
v___x_665_ = lean_st_ref_get(v___y_658_);
v_mctx_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc_ref(v_mctx_666_);
lean_dec(v___x_665_);
v_lctx_667_ = lean_ctor_get(v___y_657_, 2);
v_options_668_ = lean_ctor_get(v___y_659_, 2);
lean_inc_ref(v_options_668_);
lean_inc_ref(v_lctx_667_);
v___x_669_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_669_, 0, v_env_663_);
lean_ctor_set(v___x_669_, 1, v_mctx_666_);
lean_ctor_set(v___x_669_, 2, v_lctx_667_);
lean_ctor_set(v___x_669_, 3, v_options_668_);
v___x_670_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
lean_ctor_set(v___x_670_, 1, v_msgData_656_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2___boxed(lean_object* v_msgData_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2(v_msgData_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(lean_object* v_msg_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_ref_685_; lean_object* v___x_686_; lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_695_; 
v_ref_685_ = lean_ctor_get(v___y_682_, 5);
v___x_686_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1_spec__2(v_msg_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_695_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_695_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_695_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_693_; 
lean_inc(v_ref_685_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_ref_685_);
lean_ctor_set(v___x_691_, 1, v_a_687_);
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 1);
lean_ctor_set(v___x_689_, 0, v___x_691_);
v___x_693_ = v___x_689_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg___boxed(lean_object* v_msg_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(v_msg_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
return v_res_702_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_mk_string_unchecked("hypothesis not found", 20, 20);
return v___x_703_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__0);
v___x_705_ = l_Lean_stringToMessageData(v___x_704_);
return v___x_705_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_mk_string_unchecked("not in proof mode", 17, 17);
return v___x_706_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__2);
v___x_708_ = l_Lean_stringToMessageData(v___x_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0(lean_object* v_a_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v___y_720_; lean_object* v___x_736_; 
lean_inc(v_a_709_);
v___x_736_ = l_Lean_MVarId_getType(v_a_709_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_738_; lean_object* v_a_739_; lean_object* v___x_740_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref(v___x_736_);
v___x_738_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__2___redArg(v_a_737_, v___y_715_, v___y_717_);
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref(v___x_738_);
v___x_740_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_739_);
lean_dec(v_a_739_);
if (lean_obj_tag(v___x_740_) == 1)
{
lean_object* v_val_741_; lean_object* v___x_742_; 
v_val_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc_n(v_val_741_, 2);
lean_dec_ref(v___x_740_);
v___x_742_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption(v_val_741_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
if (lean_obj_tag(v_a_743_) == 0)
{
lean_object* v___x_744_; 
lean_dec_ref(v___x_742_);
v___x_744_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumptionPure(v_val_741_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
v___y_720_ = v___x_744_;
goto v___jp_719_;
}
else
{
lean_dec_ref(v_a_743_);
lean_dec(v_val_741_);
v___y_720_ = v___x_742_;
goto v___jp_719_;
}
}
else
{
lean_dec(v_val_741_);
v___y_720_ = v___x_742_;
goto v___jp_719_;
}
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; 
lean_dec(v___x_740_);
lean_dec(v_a_709_);
v___x_745_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__3);
v___x_746_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(v___x_745_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
return v___x_746_;
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v_a_709_);
v_a_747_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_736_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_736_);
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
v___jp_719_:
{
if (lean_obj_tag(v___y_720_) == 0)
{
lean_object* v_a_721_; 
v_a_721_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref(v___y_720_);
if (lean_obj_tag(v_a_721_) == 1)
{
lean_object* v_val_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_val_722_ = lean_ctor_get(v_a_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref(v_a_721_);
v___x_723_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg(v_a_709_, v_val_722_, v___y_715_, v___y_717_);
lean_dec_ref(v___x_723_);
v___x_724_ = lean_box(0);
v___x_725_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_724_, v___y_711_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
return v___x_725_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec(v_a_721_);
lean_dec(v_a_709_);
v___x_726_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___closed__1);
v___x_727_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(v___x_726_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
return v___x_727_;
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec(v_a_709_);
v_a_728_ = lean_ctor_get(v___y_720_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___y_720_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___y_720_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___y_720_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___boxed(lean_object* v_a_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0(v_a_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg(lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_767_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___f_777_; lean_object* v___x_778_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc_n(v_a_776_, 2);
lean_dec_ref(v___x_775_);
v___f_777_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_777_, 0, v_a_776_);
v___x_778_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__3___redArg(v_a_776_, v___f_777_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
return v___x_778_;
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_775_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_775_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg___boxed(lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg(v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption(lean_object* v_x_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___redArg(v_a_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___boxed(lean_object* v_x_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption(v_x_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_a_809_);
lean_dec(v_x_808_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0(lean_object* v_mvarId_819_, lean_object* v_val_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___redArg(v_mvarId_819_, v_val_820_, v___y_826_, v___y_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0___boxed(lean_object* v_mvarId_831_, lean_object* v_val_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0(v_mvarId_831_, v_val_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1(lean_object* v_00_u03b1_843_, lean_object* v_msg_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___redArg(v_msg_844_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1___boxed(lean_object* v_00_u03b1_855_, lean_object* v_msg_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__1(v_00_u03b1_855_, v_msg_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0(lean_object* v_00_u03b2_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0___redArg(v_x_868_, v_x_869_, v_x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_872_, lean_object* v_x_873_, size_t v_x_874_, size_t v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___redArg(v_x_873_, v_x_874_, v_x_875_, v_x_876_, v_x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_879_, lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v_x_884_){
_start:
{
size_t v_x_6857__boxed_885_; size_t v_x_6858__boxed_886_; lean_object* v_res_887_; 
v_x_6857__boxed_885_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_x_6858__boxed_886_ = lean_unbox_usize(v_x_882_);
lean_dec(v_x_882_);
v_res_887_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3(v_00_u03b2_879_, v_x_880_, v_x_6857__boxed_885_, v_x_6858__boxed_886_, v_x_883_, v_x_884_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6(lean_object* v_00_u03b2_888_, lean_object* v_n_889_, lean_object* v_k_890_, lean_object* v_v_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6___redArg(v_n_889_, v_k_890_, v_v_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7(lean_object* v_00_u03b2_893_, size_t v_depth_894_, lean_object* v_keys_895_, lean_object* v_vals_896_, lean_object* v_heq_897_, lean_object* v_i_898_, lean_object* v_entries_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___redArg(v_depth_894_, v_keys_895_, v_vals_896_, v_i_898_, v_entries_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_00_u03b2_901_, lean_object* v_depth_902_, lean_object* v_keys_903_, lean_object* v_vals_904_, lean_object* v_heq_905_, lean_object* v_i_906_, lean_object* v_entries_907_){
_start:
{
size_t v_depth_boxed_908_; lean_object* v_res_909_; 
v_depth_boxed_908_ = lean_unbox_usize(v_depth_902_);
lean_dec(v_depth_902_);
v_res_909_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__7(v_00_u03b2_901_, v_depth_boxed_908_, v_keys_903_, v_vals_904_, v_heq_905_, v_i_906_, v_entries_907_);
lean_dec_ref(v_vals_904_);
lean_dec_ref(v_keys_903_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_910_, lean_object* v_x_911_, lean_object* v_x_912_, lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMAssumption_spec__0_spec__0_spec__3_spec__6_spec__7___redArg(v_x_911_, v_x_912_, v_x_913_, v_x_914_);
return v___x_915_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0(void){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_916_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1(void){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_917_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2(void){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = lean_mk_string_unchecked("massumption", 11, 11);
return v___x_918_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_919_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__2);
v___x_920_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_921_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__1);
v___x_922_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0);
v___x_923_ = l_Lean_Name_mkStr4(v___x_922_, v___x_921_, v___x_920_, v___x_919_);
return v___x_923_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4(void){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_924_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5(void){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_925_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6(void){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = lean_mk_string_unchecked("elabMAssumption", 15, 15);
return v___x_926_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_927_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__6);
v___x_928_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__5);
v___x_929_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__1);
v___x_930_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_assumption___closed__6);
v___x_931_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__4);
v___x_932_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__0);
v___x_933_ = l_Lean_Name_mkStr6(v___x_932_, v___x_931_, v___x_930_, v___x_929_, v___x_928_, v___x_927_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1(){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_935_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_936_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__3);
v___x_937_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7, &l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___closed__7);
v___x_938_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___boxed), 10, 0);
v___x_939_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_935_, v___x_936_, v___x_937_, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1___boxed(lean_object* v_a_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1();
return v_res_941_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Assumption_0__Lean_Elab_Tactic_Do_ProofMode_elabMAssumption___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMAssumption__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Exact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Assumption(builtin);
}
#ifdef __cplusplus
}
#endif
