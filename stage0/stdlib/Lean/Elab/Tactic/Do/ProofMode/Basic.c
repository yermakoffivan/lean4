// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Basic
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.MGoal
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(lean_object* v_l_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v_cache_13_; lean_object* v_zetaDeltaFVarIds_14_; lean_object* v_postponed_15_; lean_object* v_diag_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v___x_5_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_5_);
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = lean_instantiate_level_mvars(v_mctx_7_, v_l_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_11_);
v___x_12_ = lean_st_ref_take(v___y_2_);
v_cache_13_ = lean_ctor_get(v___x_12_, 1);
v_zetaDeltaFVarIds_14_ = lean_ctor_get(v___x_12_, 2);
v_postponed_15_ = lean_ctor_get(v___x_12_, 3);
v_diag_16_ = lean_ctor_get(v___x_12_, 4);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_25_ == 0)
{
lean_object* v_unused_26_; 
v_unused_26_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_26_);
v___x_18_ = v___x_12_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_diag_16_);
lean_inc(v_postponed_15_);
lean_inc(v_zetaDeltaFVarIds_14_);
lean_inc(v_cache_13_);
lean_dec(v___x_12_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 0, v_fst_9_);
v___x_21_ = v___x_18_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_fst_9_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_cache_13_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_zetaDeltaFVarIds_14_);
lean_ctor_set(v_reuseFailAlloc_24_, 3, v_postponed_15_);
lean_ctor_set(v_reuseFailAlloc_24_, 4, v_diag_16_);
v___x_21_ = v_reuseFailAlloc_24_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_st_ref_set(v___y_2_, v___x_21_);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v_snd_10_);
return v___x_23_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg___boxed(lean_object* v_l_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_l_27_, v___y_28_, v___y_29_);
lean_dec(v___y_29_);
lean_dec(v___y_28_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(lean_object* v_l_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_l_32_, v___y_34_, v___y_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___boxed(lean_object* v_l_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0(v_l_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(lean_object* v_e_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
uint8_t v___x_50_; 
v___x_50_ = l_Lean_Expr_hasMVar(v_e_46_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; 
v___x_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_51_, 0, v_e_46_);
return v___x_51_;
}
else
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v_mctx_54_; lean_object* v___x_55_; lean_object* v_fst_56_; lean_object* v_snd_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v_cache_60_; lean_object* v_zetaDeltaFVarIds_61_; lean_object* v_postponed_62_; lean_object* v_diag_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_72_; 
v___x_52_ = lean_st_ref_get(v___y_48_);
lean_dec(v___x_52_);
v___x_53_ = lean_st_ref_get(v___y_47_);
v_mctx_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc_ref(v_mctx_54_);
lean_dec(v___x_53_);
v___x_55_ = l_Lean_instantiateMVarsCore(v_mctx_54_, v_e_46_);
v_fst_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_fst_56_);
v_snd_57_ = lean_ctor_get(v___x_55_, 1);
lean_inc(v_snd_57_);
lean_dec_ref(v___x_55_);
v___x_58_ = lean_st_ref_get(v___y_48_);
lean_dec(v___x_58_);
v___x_59_ = lean_st_ref_take(v___y_47_);
v_cache_60_ = lean_ctor_get(v___x_59_, 1);
v_zetaDeltaFVarIds_61_ = lean_ctor_get(v___x_59_, 2);
v_postponed_62_ = lean_ctor_get(v___x_59_, 3);
v_diag_63_ = lean_ctor_get(v___x_59_, 4);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; 
v_unused_73_ = lean_ctor_get(v___x_59_, 0);
lean_dec(v_unused_73_);
v___x_65_ = v___x_59_;
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_diag_63_);
lean_inc(v_postponed_62_);
lean_inc(v_zetaDeltaFVarIds_61_);
lean_inc(v_cache_60_);
lean_dec(v___x_59_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v_snd_57_);
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_snd_57_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_cache_60_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v_zetaDeltaFVarIds_61_);
lean_ctor_set(v_reuseFailAlloc_71_, 3, v_postponed_62_);
lean_ctor_set(v_reuseFailAlloc_71_, 4, v_diag_63_);
v___x_68_ = v_reuseFailAlloc_71_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_st_ref_set(v___y_47_, v___x_68_);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v_fst_56_);
return v___x_70_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg___boxed(lean_object* v_e_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_e_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec(v___y_75_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(lean_object* v_e_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_e_79_, v___y_81_, v___y_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___boxed(lean_object* v_e_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1(v_e_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_92_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2);
v___x_97_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1);
v___x_98_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0);
v___x_99_ = l_Lean_Name_mkStr3(v___x_98_, v___x_97_, v___x_96_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("PropAsSPredTautology", 20, 20);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_102_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__5);
v___x_103_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_104_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2);
v___x_105_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1);
v___x_106_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0);
v___x_107_ = l_Lean_Name_mkStr5(v___x_106_, v___x_105_, v___x_104_, v___x_103_, v___x_102_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_mk_string_unchecked("start_entails", 13, 13);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_110_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__8);
v___x_111_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7);
v___x_112_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_113_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__2);
v___x_114_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1);
v___x_115_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__0);
v___x_116_ = l_Lean_Name_mkStr6(v___x_115_, v___x_114_, v___x_113_, v___x_112_, v___x_111_, v___x_110_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart(lean_object* v_goal_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_goal_117_);
if (lean_obj_tag(v___x_123_) == 1)
{
lean_object* v_val_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_133_; 
lean_dec_ref(v_goal_117_);
v_val_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_133_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_133_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_val_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_133_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_128_ = lean_box(0);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v_val_124_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
if (v_isShared_127_ == 0)
{
lean_ctor_set_tag(v___x_126_, 0);
lean_ctor_set(v___x_126_, 0, v___x_129_);
v___x_131_ = v___x_126_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
else
{
lean_object* v___x_134_; 
lean_dec(v___x_123_);
v___x_134_ = l_Lean_Meta_mkFreshLevelMVar(v_a_118_, v_a_119_, v_a_120_, v_a_121_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_n(v_a_135_, 2);
lean_dec_ref(v___x_134_);
v___x_136_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(v_a_135_);
v___x_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
v___x_138_ = 0;
v___x_139_ = lean_box(0);
v___x_140_ = l_Lean_Meta_mkFreshExprMVar(v___x_137_, v___x_138_, v___x_139_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc_n(v_a_141_, 2);
lean_dec_ref(v___x_140_);
v___x_142_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__3);
v___x_143_ = lean_box(0);
lean_inc(v_a_135_);
v___x_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_144_, 0, v_a_135_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
lean_inc_ref(v___x_144_);
v___x_145_ = l_Lean_mkConst(v___x_142_, v___x_144_);
v___x_146_ = l_Lean_Expr_app___override(v___x_145_, v_a_141_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
v___x_148_ = l_Lean_Meta_mkFreshExprMVar(v___x_147_, v___x_138_, v___x_139_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc_n(v_a_149_, 2);
lean_dec_ref(v___x_148_);
v___x_150_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__6);
v___x_151_ = l_Lean_mkConst(v___x_150_, v___x_144_);
lean_inc(v_a_141_);
lean_inc_ref(v_goal_117_);
v___x_152_ = l_Lean_mkApp3(v___x_151_, v_goal_117_, v_a_141_, v_a_149_);
v___x_153_ = lean_box(0);
v___x_154_ = l_Lean_Meta_synthInstance(v___x_152_, v___x_153_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_156_; lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_180_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref(v___x_154_);
v___x_156_ = l_Lean_instantiateLevelMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__0___redArg(v_a_135_, v_a_119_, v_a_121_);
v_a_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_180_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_180_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_179_; 
v___x_161_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__9);
lean_inc(v_a_157_);
v___x_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_162_, 0, v_a_157_);
lean_ctor_set(v___x_162_, 1, v___x_143_);
v___x_163_ = l_Lean_mkConst(v___x_161_, v___x_162_);
lean_inc(v_a_149_);
lean_inc(v_a_141_);
v___x_164_ = l_Lean_mkApp4(v___x_163_, v_a_141_, v_a_149_, v_goal_117_, v_a_155_);
v___x_165_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_149_, v_a_119_, v_a_121_);
v_a_166_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_179_ == 0)
{
v___x_168_ = v___x_165_;
v_isShared_169_ = v_isSharedCheck_179_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_179_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
lean_inc(v_a_141_);
lean_inc(v_a_157_);
v___x_170_ = l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(v_a_157_, v_a_141_);
v___x_171_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_171_, 0, v_a_157_);
lean_ctor_set(v___x_171_, 1, v_a_141_);
lean_ctor_set(v___x_171_, 2, v___x_170_);
lean_ctor_set(v___x_171_, 3, v_a_166_);
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 1);
lean_ctor_set(v___x_159_, 0, v___x_164_);
v___x_173_ = v___x_159_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_164_);
v___x_173_ = v_reuseFailAlloc_178_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_171_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_174_);
v___x_176_ = v___x_168_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
lean_dec(v_a_149_);
lean_dec(v_a_141_);
lean_dec(v_a_135_);
lean_dec_ref(v_goal_117_);
v_a_181_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_154_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_154_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec_ref(v___x_144_);
lean_dec(v_a_141_);
lean_dec(v_a_135_);
lean_dec_ref(v_goal_117_);
v_a_189_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_148_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_148_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_dec(v_a_135_);
lean_dec_ref(v_goal_117_);
v_a_197_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_140_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_140_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
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
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_dec_ref(v_goal_117_);
v_a_205_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_134_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_134_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStart___boxed(lean_object* v_goal_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Tactic_Do_ProofMode_mStart(v_goal_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(lean_object* v_mvarId_220_, lean_object* v_x_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_220_, v_x_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_a_236_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_227_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_227_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg___boxed(lean_object* v_mvarId_244_, lean_object* v_x_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvarId_244_, v_x_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(lean_object* v_00_u03b1_252_, lean_object* v_mvarId_253_, lean_object* v_x_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvarId_253_, v_x_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___boxed(lean_object* v_00_u03b1_261_, lean_object* v_mvarId_262_, lean_object* v_x_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2(v_00_u03b1_261_, v_mvarId_262_, v_x_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(lean_object* v_msgData_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v___x_276_; lean_object* v_env_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_mctx_280_; lean_object* v_lctx_281_; lean_object* v_options_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_276_ = lean_st_ref_get(v___y_274_);
v_env_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc_ref(v_env_277_);
lean_dec(v___x_276_);
v___x_278_ = lean_st_ref_get(v___y_274_);
lean_dec(v___x_278_);
v___x_279_ = lean_st_ref_get(v___y_272_);
v_mctx_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc_ref(v_mctx_280_);
lean_dec(v___x_279_);
v_lctx_281_ = lean_ctor_get(v___y_271_, 2);
v_options_282_ = lean_ctor_get(v___y_273_, 2);
lean_inc_ref(v_options_282_);
lean_inc_ref(v_lctx_281_);
v___x_283_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_283_, 0, v_env_277_);
lean_ctor_set(v___x_283_, 1, v_mctx_280_);
lean_ctor_set(v___x_283_, 2, v_lctx_281_);
lean_ctor_set(v___x_283_, 3, v_options_282_);
v___x_284_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_msgData_270_);
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2___boxed(lean_object* v_msgData_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msgData_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(lean_object* v_msg_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_ref_299_; lean_object* v___x_300_; lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
v_ref_299_ = lean_ctor_get(v___y_296_, 5);
v___x_300_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msg_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
v_a_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_309_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_inc(v_ref_299_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v_ref_299_);
lean_ctor_set(v___x_305_, 1, v_a_301_);
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 1);
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_307_ = v___x_303_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg___boxed(lean_object* v_msg_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v_msg_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object* v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
lean_object* v_ks_321_; lean_object* v_vs_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_346_; 
v_ks_321_ = lean_ctor_get(v_x_317_, 0);
v_vs_322_ = lean_ctor_get(v_x_317_, 1);
v_isSharedCheck_346_ = !lean_is_exclusive(v_x_317_);
if (v_isSharedCheck_346_ == 0)
{
v___x_324_ = v_x_317_;
v_isShared_325_ = v_isSharedCheck_346_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_vs_322_);
lean_inc(v_ks_321_);
lean_dec(v_x_317_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_346_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = lean_array_get_size(v_ks_321_);
v___x_327_ = lean_nat_dec_lt(v_x_318_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
lean_dec(v_x_318_);
v___x_328_ = lean_array_push(v_ks_321_, v_x_319_);
v___x_329_ = lean_array_push(v_vs_322_, v_x_320_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 1, v___x_329_);
lean_ctor_set(v___x_324_, 0, v___x_328_);
v___x_331_ = v___x_324_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
else
{
lean_object* v_k_x27_333_; uint8_t v___x_334_; 
v_k_x27_333_ = lean_array_fget_borrowed(v_ks_321_, v_x_318_);
v___x_334_ = l_Lean_instBEqMVarId_beq(v_x_319_, v_k_x27_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_336_; 
if (v_isShared_325_ == 0)
{
v___x_336_ = v___x_324_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_ks_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_vs_322_);
v___x_336_ = v_reuseFailAlloc_340_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_unsigned_to_nat(1u);
v___x_338_ = lean_nat_add(v_x_318_, v___x_337_);
lean_dec(v_x_318_);
v_x_317_ = v___x_336_;
v_x_318_ = v___x_338_;
goto _start;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_341_ = lean_array_fset(v_ks_321_, v_x_318_, v_x_319_);
v___x_342_ = lean_array_fset(v_vs_322_, v_x_318_, v_x_320_);
lean_dec(v_x_318_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 1, v___x_342_);
lean_ctor_set(v___x_324_, 0, v___x_341_);
v___x_344_ = v___x_324_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_341_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_n_347_, lean_object* v_k_348_, lean_object* v_v_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_n_347_, v___x_350_, v_k_348_, v_v_349_);
return v___x_351_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_352_; size_t v___x_353_; size_t v___x_354_; 
v___x_352_ = ((size_t)5ULL);
v___x_353_ = ((size_t)1ULL);
v___x_354_ = lean_usize_shift_left(v___x_353_, v___x_352_);
return v___x_354_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_355_; size_t v___x_356_; size_t v___x_357_; 
v___x_355_ = ((size_t)1ULL);
v___x_356_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_357_ = lean_usize_sub(v___x_356_, v___x_355_);
return v___x_357_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(lean_object* v_x_359_, size_t v_x_360_, size_t v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
lean_object* v_es_364_; size_t v___x_365_; size_t v___x_366_; size_t v___x_367_; size_t v___x_368_; lean_object* v_j_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v_es_364_ = lean_ctor_get(v_x_359_, 0);
v___x_365_ = ((size_t)5ULL);
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_368_ = lean_usize_land(v_x_360_, v___x_367_);
v_j_369_ = lean_usize_to_nat(v___x_368_);
v___x_370_ = lean_array_get_size(v_es_364_);
v___x_371_ = lean_nat_dec_lt(v_j_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_dec(v_j_369_);
lean_dec(v_x_363_);
lean_dec(v_x_362_);
return v_x_359_;
}
else
{
lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_408_; 
lean_inc_ref(v_es_364_);
v_isSharedCheck_408_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v_x_359_, 0);
lean_dec(v_unused_409_);
v___x_373_ = v_x_359_;
v_isShared_374_ = v_isSharedCheck_408_;
goto v_resetjp_372_;
}
else
{
lean_dec(v_x_359_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_408_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v_v_375_; lean_object* v___x_376_; lean_object* v_xs_x27_377_; lean_object* v___y_379_; 
v_v_375_ = lean_array_fget(v_es_364_, v_j_369_);
v___x_376_ = lean_box(0);
v_xs_x27_377_ = lean_array_fset(v_es_364_, v_j_369_, v___x_376_);
switch(lean_obj_tag(v_v_375_))
{
case 0:
{
lean_object* v_key_384_; lean_object* v_val_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_395_; 
v_key_384_ = lean_ctor_get(v_v_375_, 0);
v_val_385_ = lean_ctor_get(v_v_375_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v_v_375_);
if (v_isSharedCheck_395_ == 0)
{
v___x_387_ = v_v_375_;
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_val_385_);
lean_inc(v_key_384_);
lean_dec(v_v_375_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
uint8_t v___x_389_; 
v___x_389_ = l_Lean_instBEqMVarId_beq(v_x_362_, v_key_384_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; 
lean_del_object(v___x_387_);
v___x_390_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_384_, v_val_385_, v_x_362_, v_x_363_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
v___y_379_ = v___x_391_;
goto v___jp_378_;
}
else
{
lean_object* v___x_393_; 
lean_dec(v_val_385_);
lean_dec(v_key_384_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v_x_363_);
lean_ctor_set(v___x_387_, 0, v_x_362_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_x_362_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_x_363_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
v___y_379_ = v___x_393_;
goto v___jp_378_;
}
}
}
}
case 1:
{
lean_object* v_node_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_406_; 
v_node_396_ = lean_ctor_get(v_v_375_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v_v_375_);
if (v_isSharedCheck_406_ == 0)
{
v___x_398_ = v_v_375_;
v_isShared_399_ = v_isSharedCheck_406_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_node_396_);
lean_dec(v_v_375_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_406_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
size_t v___x_400_; size_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_400_ = lean_usize_shift_right(v_x_360_, v___x_365_);
v___x_401_ = lean_usize_add(v_x_361_, v___x_366_);
v___x_402_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_node_396_, v___x_400_, v___x_401_, v_x_362_, v_x_363_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 0, v___x_402_);
v___x_404_ = v___x_398_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_402_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
v___y_379_ = v___x_404_;
goto v___jp_378_;
}
}
}
default: 
{
lean_object* v___x_407_; 
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v_x_362_);
lean_ctor_set(v___x_407_, 1, v_x_363_);
v___y_379_ = v___x_407_;
goto v___jp_378_;
}
}
v___jp_378_:
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = lean_array_fset(v_xs_x27_377_, v_j_369_, v___y_379_);
lean_dec(v_j_369_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v___x_380_);
v___x_382_ = v___x_373_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
else
{
lean_object* v_ks_410_; lean_object* v_vs_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_431_; 
v_ks_410_ = lean_ctor_get(v_x_359_, 0);
v_vs_411_ = lean_ctor_get(v_x_359_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_431_ == 0)
{
v___x_413_ = v_x_359_;
v_isShared_414_ = v_isSharedCheck_431_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_vs_411_);
lean_inc(v_ks_410_);
lean_dec(v_x_359_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_431_;
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
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_ks_410_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_vs_411_);
v___x_416_ = v_reuseFailAlloc_430_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v_newNode_417_; uint8_t v___y_419_; size_t v___x_425_; uint8_t v___x_426_; 
v_newNode_417_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(v___x_416_, v_x_362_, v_x_363_);
v___x_425_ = ((size_t)7ULL);
v___x_426_ = lean_usize_dec_le(v___x_425_, v_x_361_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_427_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_417_);
v___x_428_ = lean_unsigned_to_nat(4u);
v___x_429_ = lean_nat_dec_lt(v___x_427_, v___x_428_);
lean_dec(v___x_427_);
v___y_419_ = v___x_429_;
goto v___jp_418_;
}
else
{
v___y_419_ = v___x_426_;
goto v___jp_418_;
}
v___jp_418_:
{
if (v___y_419_ == 0)
{
lean_object* v_ks_420_; lean_object* v_vs_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v_ks_420_ = lean_ctor_get(v_newNode_417_, 0);
lean_inc_ref(v_ks_420_);
v_vs_421_ = lean_ctor_get(v_newNode_417_, 1);
lean_inc_ref(v_vs_421_);
lean_dec_ref(v_newNode_417_);
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_424_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_x_361_, v_ks_420_, v_vs_421_, v___x_422_, v___x_423_);
lean_dec_ref(v_vs_421_);
lean_dec_ref(v_ks_420_);
return v___x_424_;
}
else
{
return v_newNode_417_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(size_t v_depth_432_, lean_object* v_keys_433_, lean_object* v_vals_434_, lean_object* v_i_435_, lean_object* v_entries_436_){
_start:
{
lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_437_ = lean_array_get_size(v_keys_433_);
v___x_438_ = lean_nat_dec_lt(v_i_435_, v___x_437_);
if (v___x_438_ == 0)
{
lean_dec(v_i_435_);
return v_entries_436_;
}
else
{
lean_object* v_k_439_; lean_object* v_v_440_; uint64_t v___x_441_; size_t v_h_442_; size_t v___x_443_; lean_object* v___x_444_; size_t v___x_445_; size_t v___x_446_; size_t v___x_447_; size_t v_h_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_k_439_ = lean_array_fget_borrowed(v_keys_433_, v_i_435_);
v_v_440_ = lean_array_fget_borrowed(v_vals_434_, v_i_435_);
v___x_441_ = l_Lean_instHashableMVarId_hash(v_k_439_);
v_h_442_ = lean_uint64_to_usize(v___x_441_);
v___x_443_ = ((size_t)5ULL);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = ((size_t)1ULL);
v___x_446_ = lean_usize_sub(v_depth_432_, v___x_445_);
v___x_447_ = lean_usize_mul(v___x_443_, v___x_446_);
v_h_448_ = lean_usize_shift_right(v_h_442_, v___x_447_);
v___x_449_ = lean_nat_add(v_i_435_, v___x_444_);
lean_dec(v_i_435_);
lean_inc(v_v_440_);
lean_inc(v_k_439_);
v___x_450_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_entries_436_, v_h_448_, v_depth_432_, v_k_439_, v_v_440_);
v_i_435_ = v___x_449_;
v_entries_436_ = v___x_450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_depth_452_, lean_object* v_keys_453_, lean_object* v_vals_454_, lean_object* v_i_455_, lean_object* v_entries_456_){
_start:
{
size_t v_depth_boxed_457_; lean_object* v_res_458_; 
v_depth_boxed_457_ = lean_unbox_usize(v_depth_452_);
lean_dec(v_depth_452_);
v_res_458_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_boxed_457_, v_keys_453_, v_vals_454_, v_i_455_, v_entries_456_);
lean_dec_ref(v_vals_454_);
lean_dec_ref(v_keys_453_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_459_, lean_object* v_x_460_, lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
size_t v_x_3623__boxed_464_; size_t v_x_3624__boxed_465_; lean_object* v_res_466_; 
v_x_3623__boxed_464_ = lean_unbox_usize(v_x_460_);
lean_dec(v_x_460_);
v_x_3624__boxed_465_ = lean_unbox_usize(v_x_461_);
lean_dec(v_x_461_);
v_res_466_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_459_, v_x_3623__boxed_464_, v_x_3624__boxed_465_, v_x_462_, v_x_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
uint64_t v___x_470_; size_t v___x_471_; size_t v___x_472_; lean_object* v___x_473_; 
v___x_470_ = l_Lean_instHashableMVarId_hash(v_x_468_);
v___x_471_ = lean_uint64_to_usize(v___x_470_);
v___x_472_ = ((size_t)1ULL);
v___x_473_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_467_, v___x_471_, v___x_472_, v_x_468_, v_x_469_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(lean_object* v_mvarId_474_, lean_object* v_val_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v_mctx_481_; lean_object* v_cache_482_; lean_object* v_zetaDeltaFVarIds_483_; lean_object* v_postponed_484_; lean_object* v_diag_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_513_; 
v___x_479_ = lean_st_ref_get(v___y_477_);
lean_dec(v___x_479_);
v___x_480_ = lean_st_ref_take(v___y_476_);
v_mctx_481_ = lean_ctor_get(v___x_480_, 0);
v_cache_482_ = lean_ctor_get(v___x_480_, 1);
v_zetaDeltaFVarIds_483_ = lean_ctor_get(v___x_480_, 2);
v_postponed_484_ = lean_ctor_get(v___x_480_, 3);
v_diag_485_ = lean_ctor_get(v___x_480_, 4);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_513_ == 0)
{
v___x_487_ = v___x_480_;
v_isShared_488_ = v_isSharedCheck_513_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_diag_485_);
lean_inc(v_postponed_484_);
lean_inc(v_zetaDeltaFVarIds_483_);
lean_inc(v_cache_482_);
lean_inc(v_mctx_481_);
lean_dec(v___x_480_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_513_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v_depth_489_; lean_object* v_levelAssignDepth_490_; lean_object* v_lmvarCounter_491_; lean_object* v_mvarCounter_492_; lean_object* v_lDecls_493_; lean_object* v_decls_494_; lean_object* v_userNames_495_; lean_object* v_lAssignment_496_; lean_object* v_eAssignment_497_; lean_object* v_dAssignment_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_512_; 
v_depth_489_ = lean_ctor_get(v_mctx_481_, 0);
v_levelAssignDepth_490_ = lean_ctor_get(v_mctx_481_, 1);
v_lmvarCounter_491_ = lean_ctor_get(v_mctx_481_, 2);
v_mvarCounter_492_ = lean_ctor_get(v_mctx_481_, 3);
v_lDecls_493_ = lean_ctor_get(v_mctx_481_, 4);
v_decls_494_ = lean_ctor_get(v_mctx_481_, 5);
v_userNames_495_ = lean_ctor_get(v_mctx_481_, 6);
v_lAssignment_496_ = lean_ctor_get(v_mctx_481_, 7);
v_eAssignment_497_ = lean_ctor_get(v_mctx_481_, 8);
v_dAssignment_498_ = lean_ctor_get(v_mctx_481_, 9);
v_isSharedCheck_512_ = !lean_is_exclusive(v_mctx_481_);
if (v_isSharedCheck_512_ == 0)
{
v___x_500_ = v_mctx_481_;
v_isShared_501_ = v_isSharedCheck_512_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_dAssignment_498_);
lean_inc(v_eAssignment_497_);
lean_inc(v_lAssignment_496_);
lean_inc(v_userNames_495_);
lean_inc(v_decls_494_);
lean_inc(v_lDecls_493_);
lean_inc(v_mvarCounter_492_);
lean_inc(v_lmvarCounter_491_);
lean_inc(v_levelAssignDepth_490_);
lean_inc(v_depth_489_);
lean_dec(v_mctx_481_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_512_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(v_eAssignment_497_, v_mvarId_474_, v_val_475_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 8, v___x_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_depth_489_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_levelAssignDepth_490_);
lean_ctor_set(v_reuseFailAlloc_511_, 2, v_lmvarCounter_491_);
lean_ctor_set(v_reuseFailAlloc_511_, 3, v_mvarCounter_492_);
lean_ctor_set(v_reuseFailAlloc_511_, 4, v_lDecls_493_);
lean_ctor_set(v_reuseFailAlloc_511_, 5, v_decls_494_);
lean_ctor_set(v_reuseFailAlloc_511_, 6, v_userNames_495_);
lean_ctor_set(v_reuseFailAlloc_511_, 7, v_lAssignment_496_);
lean_ctor_set(v_reuseFailAlloc_511_, 8, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_511_, 9, v_dAssignment_498_);
v___x_504_ = v_reuseFailAlloc_511_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_504_);
v___x_506_ = v___x_487_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_cache_482_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_zetaDeltaFVarIds_483_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_postponed_484_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_diag_485_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_507_ = lean_st_ref_set(v___y_476_, v___x_506_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg___boxed(lean_object* v_mvarId_514_, lean_object* v_val_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvarId_514_, v_val_515_, v___y_516_, v___y_517_);
lean_dec(v___y_517_);
lean_dec(v___y_516_);
return v_res_519_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0(void){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = lean_mk_string_unchecked("The goal type of `", 18, 18);
return v___x_520_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__0);
v___x_522_ = l_Lean_stringToMessageData(v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2(void){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = lean_mk_string_unchecked("` is not a proposition. It has type `", 37, 37);
return v___x_523_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__2);
v___x_525_ = l_Lean_stringToMessageData(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4(void){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__4);
v___x_528_ = l_Lean_stringToMessageData(v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(lean_object* v_mvar_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v___x_535_; 
lean_inc(v_mvar_529_);
v___x_535_ = l_Lean_MVarId_getType(v_mvar_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v_a_538_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___x_613_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref(v___x_535_);
v___x_537_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mStart_spec__1___redArg(v_a_536_, v___y_531_, v___y_533_);
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc_n(v_a_538_, 2);
lean_dec_ref(v___x_537_);
v___x_613_ = l_Lean_Meta_isProp(v_a_538_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; uint8_t v___x_615_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref(v___x_613_);
v___x_615_ = lean_unbox(v_a_614_);
lean_dec(v_a_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; 
lean_inc(v___y_533_);
lean_inc_ref(v___y_532_);
lean_inc(v___y_531_);
lean_inc_ref(v___y_530_);
v___x_616_ = lean_infer_type(v_a_538_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref(v___x_616_);
v___x_618_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__1);
v___x_619_ = l_Lean_mkMVar(v_mvar_529_);
v___x_620_ = l_Lean_MessageData_ofExpr(v___x_619_);
v___x_621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_618_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__3);
v___x_623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = l_Lean_MessageData_ofExpr(v_a_617_);
v___x_625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___closed__5);
v___x_627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_625_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v___x_627_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v_mvar_529_);
v_a_637_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_616_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_616_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
v___y_540_ = v___y_530_;
v___y_541_ = v___y_531_;
v___y_542_ = v___y_532_;
v___y_543_ = v___y_533_;
goto v___jp_539_;
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_a_538_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v_mvar_529_);
v_a_645_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_613_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_613_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
v___jp_539_:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Elab_Tactic_Do_ProofMode_mStart(v_a_538_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_604_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_604_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_604_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_604_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v_proof_x3f_549_; 
v_proof_x3f_549_ = lean_ctor_get(v_a_545_, 1);
if (lean_obj_tag(v_proof_x3f_549_) == 1)
{
lean_object* v_goal_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_590_; 
lean_inc_ref(v_proof_x3f_549_);
lean_del_object(v___x_547_);
v_goal_550_ = lean_ctor_get(v_a_545_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_a_545_);
if (v_isSharedCheck_590_ == 0)
{
lean_object* v_unused_591_; 
v_unused_591_ = lean_ctor_get(v_a_545_, 1);
lean_dec(v_unused_591_);
v___x_552_ = v_a_545_;
v_isShared_553_ = v_isSharedCheck_590_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_goal_550_);
lean_dec(v_a_545_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_590_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v_val_554_; lean_object* v___x_555_; 
v_val_554_ = lean_ctor_get(v_proof_x3f_549_, 0);
lean_inc(v_val_554_);
lean_dec_ref(v_proof_x3f_549_);
lean_inc(v_mvar_529_);
v___x_555_ = l_Lean_MVarId_getTag(v_mvar_529_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref(v___x_555_);
lean_inc_ref(v_goal_550_);
v___x_557_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_550_);
v___x_558_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_557_, v_a_556_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec_ref(v___y_540_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_572_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc_n(v_a_559_, 2);
lean_dec_ref(v___x_558_);
v___x_560_ = l_Lean_Expr_app___override(v_val_554_, v_a_559_);
v___x_561_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvar_529_, v___x_560_, v___y_541_, v___y_543_);
lean_dec(v___y_543_);
lean_dec(v___y_541_);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v___x_561_, 0);
lean_dec(v_unused_573_);
v___x_563_ = v___x_561_;
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
else
{
lean_dec(v___x_561_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_565_ = l_Lean_Expr_mvarId_x21(v_a_559_);
lean_dec(v_a_559_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 1, v_goal_550_);
lean_ctor_set(v___x_552_, 0, v___x_565_);
v___x_567_ = v___x_552_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_goal_550_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_567_);
v___x_569_ = v___x_563_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_dec(v_val_554_);
lean_del_object(v___x_552_);
lean_dec_ref(v_goal_550_);
lean_dec(v___y_543_);
lean_dec(v___y_541_);
lean_dec(v_mvar_529_);
v_a_574_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_558_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_558_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
lean_dec(v_val_554_);
lean_del_object(v___x_552_);
lean_dec_ref(v_goal_550_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v_mvar_529_);
v_a_582_ = lean_ctor_get(v___x_555_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_555_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_555_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
else
{
lean_object* v_goal_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_602_; 
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
v_goal_592_ = lean_ctor_get(v_a_545_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v_a_545_);
if (v_isSharedCheck_602_ == 0)
{
lean_object* v_unused_603_; 
v_unused_603_ = lean_ctor_get(v_a_545_, 1);
lean_dec(v_unused_603_);
v___x_594_ = v_a_545_;
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_goal_592_);
lean_dec(v_a_545_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_602_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v_goal_592_);
lean_ctor_set(v___x_594_, 0, v_mvar_529_);
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_mvar_529_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_goal_592_);
v___x_597_ = v_reuseFailAlloc_601_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_599_; 
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_597_);
v___x_599_ = v___x_547_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v_mvar_529_);
v_a_605_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_544_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_544_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v_mvar_529_);
v_a_653_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_535_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_535_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed(lean_object* v_mvar_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0(v_mvar_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(lean_object* v_mvar_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___f_674_; lean_object* v___x_675_; 
lean_inc(v_mvar_668_);
v___f_674_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___lam__0___boxed), 6, 1);
lean_closure_set(v___f_674_, 0, v_mvar_668_);
v___x_675_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__2___redArg(v_mvar_668_, v___f_674_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar___boxed(lean_object* v_mvar_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(v_mvar_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(lean_object* v_mvarId_683_, lean_object* v_val_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___redArg(v_mvarId_683_, v_val_684_, v___y_686_, v___y_688_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0___boxed(lean_object* v_mvarId_691_, lean_object* v_val_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0(v_mvarId_691_, v_val_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(lean_object* v_00_u03b1_699_, lean_object* v_msg_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___redArg(v_msg_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1___boxed(lean_object* v_00_u03b1_707_, lean_object* v_msg_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1(v_00_u03b1_707_, v_msg_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0(lean_object* v_00_u03b2_715_, lean_object* v_x_716_, lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0___redArg(v_x_716_, v_x_717_, v_x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_720_, lean_object* v_x_721_, size_t v_x_722_, size_t v_x_723_, lean_object* v_x_724_, lean_object* v_x_725_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___redArg(v_x_721_, v_x_722_, v_x_723_, v_x_724_, v_x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_727_, lean_object* v_x_728_, lean_object* v_x_729_, lean_object* v_x_730_, lean_object* v_x_731_, lean_object* v_x_732_){
_start:
{
size_t v_x_4189__boxed_733_; size_t v_x_4190__boxed_734_; lean_object* v_res_735_; 
v_x_4189__boxed_733_ = lean_unbox_usize(v_x_729_);
lean_dec(v_x_729_);
v_x_4190__boxed_734_ = lean_unbox_usize(v_x_730_);
lean_dec(v_x_730_);
v_res_735_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2(v_00_u03b2_727_, v_x_728_, v_x_4189__boxed_733_, v_x_4190__boxed_734_, v_x_731_, v_x_732_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_736_, lean_object* v_n_737_, lean_object* v_k_738_, lean_object* v_v_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5___redArg(v_n_737_, v_k_738_, v_v_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_741_, size_t v_depth_742_, lean_object* v_keys_743_, lean_object* v_vals_744_, lean_object* v_heq_745_, lean_object* v_i_746_, lean_object* v_entries_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_742_, v_keys_743_, v_vals_744_, v_i_746_, v_entries_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_749_, lean_object* v_depth_750_, lean_object* v_keys_751_, lean_object* v_vals_752_, lean_object* v_heq_753_, lean_object* v_i_754_, lean_object* v_entries_755_){
_start:
{
size_t v_depth_boxed_756_; lean_object* v_res_757_; 
v_depth_boxed_756_ = lean_unbox_usize(v_depth_750_);
lean_dec(v_depth_750_);
v_res_757_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__6(v_00_u03b2_749_, v_depth_boxed_756_, v_keys_751_, v_vals_752_, v_heq_753_, v_i_754_, v_entries_755_);
lean_dec_ref(v_vals_752_);
lean_dec_ref(v_keys_751_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_758_, lean_object* v_x_759_, lean_object* v_x_760_, lean_object* v_x_761_, lean_object* v_x_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_x_759_, v_x_760_, v_x_761_, v_x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref(v___x_770_);
v___x_772_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMVar(v_a_771_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v_fst_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref(v___x_772_);
v_fst_774_ = lean_ctor_get(v_a_773_, 0);
v___x_775_ = lean_box(0);
lean_inc(v_fst_774_);
v___x_776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_776_, 0, v_fst_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_776_, v_a_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_784_ == 0)
{
lean_object* v_unused_785_; 
v_unused_785_ = lean_ctor_get(v___x_777_, 0);
lean_dec(v_unused_785_);
v___x_779_ = v___x_777_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_dec(v___x_777_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v_a_773_);
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_773_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec(v_a_773_);
v_a_786_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_777_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_777_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
return v___x_772_;
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
v_a_794_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_770_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_770_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg___boxed(lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec(v_a_802_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_810_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___boxed(lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal(v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v___x_835_, 0);
lean_dec(v_unused_844_);
v___x_837_ = v___x_835_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_dec(v___x_835_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = lean_box(0);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_839_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_835_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_835_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg___boxed(lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_);
lean_dec(v_a_857_);
lean_dec_ref(v_a_856_);
lean_dec(v_a_855_);
lean_dec_ref(v_a_854_);
lean_dec(v_a_853_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(lean_object* v_x_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___redArg(v_a_862_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___boxed(lean_object* v_x_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStart(v_x_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
lean_dec(v_a_873_);
lean_dec_ref(v_a_872_);
lean_dec(v_x_871_);
return v_res_881_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0(void){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_882_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1(void){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_mk_string_unchecked("mstart", 6, 6);
return v___x_884_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_885_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__2);
v___x_886_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_887_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1);
v___x_888_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0);
v___x_889_ = l_Lean_Name_mkStr4(v___x_888_, v___x_887_, v___x_886_, v___x_885_);
return v___x_889_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_890_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5(void){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_mk_string_unchecked("elabMStart", 10, 10);
return v___x_891_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_892_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__5);
v___x_893_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7);
v___x_894_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1);
v___x_895_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_896_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4);
v___x_897_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0);
v___x_898_ = l_Lean_Name_mkStr6(v___x_897_, v___x_896_, v___x_895_, v___x_894_, v___x_893_, v___x_892_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1(){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_900_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_901_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__3);
v___x_902_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__6);
v___x_903_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStart___boxed), 10, 0);
v___x_904_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_900_, v___x_901_, v___x_902_, v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___boxed(lean_object* v_a_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1();
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(lean_object* v_e_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
uint8_t v___x_911_; 
v___x_911_ = l_Lean_Expr_hasMVar(v_e_907_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; 
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v_e_907_);
return v___x_912_;
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_mctx_915_; lean_object* v___x_916_; lean_object* v_fst_917_; lean_object* v_snd_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v_cache_921_; lean_object* v_zetaDeltaFVarIds_922_; lean_object* v_postponed_923_; lean_object* v_diag_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_933_; 
v___x_913_ = lean_st_ref_get(v___y_909_);
lean_dec(v___x_913_);
v___x_914_ = lean_st_ref_get(v___y_908_);
v_mctx_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc_ref(v_mctx_915_);
lean_dec(v___x_914_);
v___x_916_ = l_Lean_instantiateMVarsCore(v_mctx_915_, v_e_907_);
v_fst_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_fst_917_);
v_snd_918_ = lean_ctor_get(v___x_916_, 1);
lean_inc(v_snd_918_);
lean_dec_ref(v___x_916_);
v___x_919_ = lean_st_ref_get(v___y_909_);
lean_dec(v___x_919_);
v___x_920_ = lean_st_ref_take(v___y_908_);
v_cache_921_ = lean_ctor_get(v___x_920_, 1);
v_zetaDeltaFVarIds_922_ = lean_ctor_get(v___x_920_, 2);
v_postponed_923_ = lean_ctor_get(v___x_920_, 3);
v_diag_924_ = lean_ctor_get(v___x_920_, 4);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; 
v_unused_934_ = lean_ctor_get(v___x_920_, 0);
lean_dec(v_unused_934_);
v___x_926_ = v___x_920_;
v_isShared_927_ = v_isSharedCheck_933_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_diag_924_);
lean_inc(v_postponed_923_);
lean_inc(v_zetaDeltaFVarIds_922_);
lean_inc(v_cache_921_);
lean_dec(v___x_920_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_933_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v_snd_918_);
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_snd_918_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v_cache_921_);
lean_ctor_set(v_reuseFailAlloc_932_, 2, v_zetaDeltaFVarIds_922_);
lean_ctor_set(v_reuseFailAlloc_932_, 3, v_postponed_923_);
lean_ctor_set(v_reuseFailAlloc_932_, 4, v_diag_924_);
v___x_929_ = v_reuseFailAlloc_932_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_st_ref_set(v___y_908_, v___x_929_);
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_fst_917_);
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg___boxed(lean_object* v_e_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_e_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec(v___y_936_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(lean_object* v_e_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_e_940_, v___y_946_, v___y_948_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___boxed(lean_object* v_e_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0(v_e_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(lean_object* v_x_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v___x_972_; 
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
lean_inc(v___y_964_);
lean_inc_ref(v___y_963_);
v___x_972_ = lean_apply_9(v_x_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, lean_box(0));
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed(lean_object* v_x_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0(v_x_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(lean_object* v_mvarId_984_, lean_object* v_x_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___f_995_; lean_object* v___x_996_; 
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
lean_inc(v___y_987_);
lean_inc_ref(v___y_986_);
v___f_995_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_995_, 0, v_x_985_);
lean_closure_set(v___f_995_, 1, v___y_986_);
lean_closure_set(v___f_995_, 2, v___y_987_);
lean_closure_set(v___f_995_, 3, v___y_988_);
lean_closure_set(v___f_995_, 4, v___y_989_);
v___x_996_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_984_, v___f_995_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
if (lean_obj_tag(v___x_996_) == 0)
{
return v___x_996_;
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg___boxed(lean_object* v_mvarId_1005_, lean_object* v_x_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_mvarId_1005_, v_x_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(lean_object* v_00_u03b1_1017_, lean_object* v_mvarId_1018_, lean_object* v_x_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v___x_1029_; 
v___x_1029_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_mvarId_1018_, v_x_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___boxed(lean_object* v_00_u03b1_1030_, lean_object* v_mvarId_1031_, lean_object* v_x_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2(v_00_u03b1_1030_, v_mvarId_1031_, v_x_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_ref_1049_; lean_object* v___x_1050_; lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
v_ref_1049_ = lean_ctor_get(v___y_1046_, 5);
v___x_1050_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mStartMVar_spec__1_spec__2(v_msg_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_inc(v_ref_1049_);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v_ref_1049_);
lean_ctor_set(v___x_1055_, 1, v_a_1051_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 1);
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg___boxed(lean_object* v_msg_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v_msg_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1066_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_mk_string_unchecked("not in proof mode", 17, 17);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__0);
v___x_1069_ = l_Lean_stringToMessageData(v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(lean_object* v_a_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v___x_1080_; 
lean_inc(v_a_1070_);
v___x_1080_ = l_Lean_MVarId_getType(v_a_1070_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v_a_1083_; lean_object* v___x_1084_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__0___redArg(v_a_1081_, v___y_1076_, v___y_1078_);
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref(v___x_1082_);
v___x_1084_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_1083_);
lean_dec(v_a_1083_);
if (lean_obj_tag(v___x_1084_) == 1)
{
lean_object* v_val_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_val_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_val_1085_);
lean_dec_ref(v___x_1084_);
v___x_1086_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(v_val_1085_);
v___x_1087_ = l_Lean_MVarId_setType___redArg(v_a_1070_, v___x_1086_, v___y_1076_, v___y_1078_);
return v___x_1087_;
}
else
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_dec(v___x_1084_);
lean_dec(v_a_1070_);
v___x_1088_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___closed__1);
v___x_1089_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v___x_1088_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
return v___x_1089_;
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec(v_a_1070_);
v_a_1090_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1080_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1080_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed(lean_object* v_a_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0(v_a_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1110_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v___f_1120_; lean_object* v___x_1121_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc_n(v_a_1119_, 2);
lean_dec_ref(v___x_1118_);
v___f_1120_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1120_, 0, v_a_1119_);
v___x_1121_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__2___redArg(v_a_1119_, v___f_1120_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
return v___x_1121_;
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
v_a_1122_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1118_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1118_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg___boxed(lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(lean_object* v_x_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___redArg(v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___boxed(lean_object* v_x_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMStop(v_x_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_x_1151_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(lean_object* v_00_u03b1_1162_, lean_object* v_msg_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___redArg(v_msg_1163_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1___boxed(lean_object* v_00_u03b1_1174_, lean_object* v_msg_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMStop_spec__1(v_00_u03b1_1174_, v_msg_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1185_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0(void){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_mk_string_unchecked("mstop", 5, 5);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1187_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__0);
v___x_1188_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_1189_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__1);
v___x_1190_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0);
v___x_1191_ = l_Lean_Name_mkStr4(v___x_1190_, v___x_1189_, v___x_1188_, v___x_1187_);
return v___x_1191_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2(void){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_mk_string_unchecked("elabMStop", 9, 9);
return v___x_1192_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1193_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__2);
v___x_1194_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__7);
v___x_1195_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__1);
v___x_1196_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mStart___closed__4);
v___x_1197_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__4);
v___x_1198_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1___closed__0);
v___x_1199_ = l_Lean_Name_mkStr6(v___x_1198_, v___x_1197_, v___x_1196_, v___x_1195_, v___x_1194_, v___x_1193_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1(){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1201_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1202_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__1);
v___x_1203_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___closed__3);
v___x_1204_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMStop___boxed), 10, 0);
v___x_1205_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1201_, v___x_1202_, v___x_1203_, v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1___boxed(lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1();
return v_res_1207_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStart___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStart__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Basic_0__Lean_Elab_Tactic_Do_ProofMode_elabMStop___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMStop__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
