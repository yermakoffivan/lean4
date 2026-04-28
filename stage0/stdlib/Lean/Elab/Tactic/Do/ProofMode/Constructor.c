// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Constructor
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_e_1_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_mctx_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_cache_15_; lean_object* v_zetaDeltaFVarIds_16_; lean_object* v_postponed_17_; lean_object* v_diag_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v___x_7_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_7_);
v___x_8_ = lean_st_ref_get(v___y_2_);
v_mctx_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_mctx_9_);
lean_dec(v___x_8_);
v___x_10_ = l_Lean_instantiateMVarsCore(v_mctx_9_, v_e_1_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
v_snd_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_snd_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_13_);
v___x_14_ = lean_st_ref_take(v___y_2_);
v_cache_15_ = lean_ctor_get(v___x_14_, 1);
v_zetaDeltaFVarIds_16_ = lean_ctor_get(v___x_14_, 2);
v_postponed_17_ = lean_ctor_get(v___x_14_, 3);
v_diag_18_ = lean_ctor_get(v___x_14_, 4);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_28_);
v___x_20_ = v___x_14_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_diag_18_);
lean_inc(v_postponed_17_);
lean_inc(v_zetaDeltaFVarIds_16_);
lean_inc(v_cache_15_);
lean_dec(v___x_14_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v_snd_12_);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_12_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_cache_15_);
lean_ctor_set(v_reuseFailAlloc_26_, 2, v_zetaDeltaFVarIds_16_);
lean_ctor_set(v_reuseFailAlloc_26_, 3, v_postponed_17_);
lean_ctor_set(v_reuseFailAlloc_26_, 4, v_diag_18_);
v___x_23_ = v_reuseFailAlloc_26_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_st_ref_set(v___y_2_, v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_11_);
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(lean_object* v_msgData_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_54_; lean_object* v_env_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v_mctx_58_; lean_object* v_lctx_59_; lean_object* v_options_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_54_ = lean_st_ref_get(v___y_52_);
v_env_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc_ref(v_env_55_);
lean_dec(v___x_54_);
v___x_56_ = lean_st_ref_get(v___y_52_);
lean_dec(v___x_56_);
v___x_57_ = lean_st_ref_get(v___y_50_);
v_mctx_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_mctx_58_);
lean_dec(v___x_57_);
v_lctx_59_ = lean_ctor_get(v___y_49_, 2);
v_options_60_ = lean_ctor_get(v___y_51_, 2);
lean_inc_ref(v_options_60_);
lean_inc_ref(v_lctx_59_);
v___x_61_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_61_, 0, v_env_55_);
lean_ctor_set(v___x_61_, 1, v_mctx_58_);
lean_ctor_set(v___x_61_, 2, v_lctx_59_);
lean_ctor_set(v___x_61_, 3, v_options_60_);
v___x_62_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v_msgData_48_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0___boxed(lean_object* v_msgData_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(v_msgData_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(lean_object* v_msg_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v_ref_77_; lean_object* v___x_78_; lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_87_; 
v_ref_77_ = lean_ctor_get(v___y_74_, 5);
v___x_78_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0_spec__0(v_msg_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_);
v_a_79_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_87_ == 0)
{
v___x_81_ = v___x_78_;
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_78_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_85_; 
lean_inc(v_ref_77_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v_ref_77_);
lean_ctor_set(v___x_83_, 1, v_a_79_);
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 1);
lean_ctor_set(v___x_81_, 0, v___x_83_);
v___x_85_ = v___x_81_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg___boxed(lean_object* v_msg_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v_msg_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
lean_object* v_ks_99_; lean_object* v_vs_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_124_; 
v_ks_99_ = lean_ctor_get(v_x_95_, 0);
v_vs_100_ = lean_ctor_get(v_x_95_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_124_ == 0)
{
v___x_102_ = v_x_95_;
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_vs_100_);
lean_inc(v_ks_99_);
lean_dec(v_x_95_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_array_get_size(v_ks_99_);
v___x_105_ = lean_nat_dec_lt(v_x_96_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
lean_dec(v_x_96_);
v___x_106_ = lean_array_push(v_ks_99_, v_x_97_);
v___x_107_ = lean_array_push(v_vs_100_, v_x_98_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_107_);
lean_ctor_set(v___x_102_, 0, v___x_106_);
v___x_109_ = v___x_102_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v_k_x27_111_; uint8_t v___x_112_; 
v_k_x27_111_ = lean_array_fget_borrowed(v_ks_99_, v_x_96_);
v___x_112_ = l_Lean_instBEqMVarId_beq(v_x_97_, v_k_x27_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_114_; 
if (v_isShared_103_ == 0)
{
v___x_114_ = v___x_102_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_ks_99_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_vs_100_);
v___x_114_ = v_reuseFailAlloc_118_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_x_96_, v___x_115_);
lean_dec(v_x_96_);
v_x_95_ = v___x_114_;
v_x_96_ = v___x_116_;
goto _start;
}
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_array_fset(v_ks_99_, v_x_96_, v_x_97_);
v___x_120_ = lean_array_fset(v_vs_100_, v_x_96_, v_x_98_);
lean_dec(v_x_96_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_120_);
lean_ctor_set(v___x_102_, 0, v___x_119_);
v___x_122_ = v___x_102_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_n_125_, lean_object* v_k_126_, lean_object* v_v_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_n_125_, v___x_128_, v_k_126_, v_v_127_);
return v___x_129_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; 
v___x_130_ = ((size_t)5ULL);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_shift_left(v___x_131_, v___x_130_);
return v___x_132_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; 
v___x_133_ = ((size_t)1ULL);
v___x_134_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_135_ = lean_usize_sub(v___x_134_, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(lean_object* v_x_137_, size_t v_x_138_, size_t v_x_139_, lean_object* v_x_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_object* v_es_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; lean_object* v_j_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_es_142_ = lean_ctor_get(v_x_137_, 0);
v___x_143_ = ((size_t)5ULL);
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_146_ = lean_usize_land(v_x_138_, v___x_145_);
v_j_147_ = lean_usize_to_nat(v___x_146_);
v___x_148_ = lean_array_get_size(v_es_142_);
v___x_149_ = lean_nat_dec_lt(v_j_147_, v___x_148_);
if (v___x_149_ == 0)
{
lean_dec(v_j_147_);
lean_dec(v_x_141_);
lean_dec(v_x_140_);
return v_x_137_;
}
else
{
lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_186_; 
lean_inc_ref(v_es_142_);
v_isSharedCheck_186_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v_x_137_, 0);
lean_dec(v_unused_187_);
v___x_151_ = v_x_137_;
v_isShared_152_ = v_isSharedCheck_186_;
goto v_resetjp_150_;
}
else
{
lean_dec(v_x_137_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_186_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v_v_153_; lean_object* v___x_154_; lean_object* v_xs_x27_155_; lean_object* v___y_157_; 
v_v_153_ = lean_array_fget(v_es_142_, v_j_147_);
v___x_154_ = lean_box(0);
v_xs_x27_155_ = lean_array_fset(v_es_142_, v_j_147_, v___x_154_);
switch(lean_obj_tag(v_v_153_))
{
case 0:
{
lean_object* v_key_162_; lean_object* v_val_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_173_; 
v_key_162_ = lean_ctor_get(v_v_153_, 0);
v_val_163_ = lean_ctor_get(v_v_153_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_173_ == 0)
{
v___x_165_ = v_v_153_;
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_val_163_);
lean_inc(v_key_162_);
lean_dec(v_v_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
uint8_t v___x_167_; 
v___x_167_ = l_Lean_instBEqMVarId_beq(v_x_140_, v_key_162_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_del_object(v___x_165_);
v___x_168_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_162_, v_val_163_, v_x_140_, v_x_141_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___y_157_ = v___x_169_;
goto v___jp_156_;
}
else
{
lean_object* v___x_171_; 
lean_dec(v_val_163_);
lean_dec(v_key_162_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v_x_141_);
lean_ctor_set(v___x_165_, 0, v_x_140_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_x_140_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_x_141_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
v___y_157_ = v___x_171_;
goto v___jp_156_;
}
}
}
}
case 1:
{
lean_object* v_node_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_184_; 
v_node_174_ = lean_ctor_get(v_v_153_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_184_ == 0)
{
v___x_176_ = v_v_153_;
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_node_174_);
lean_dec(v_v_153_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
size_t v___x_178_; size_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_178_ = lean_usize_shift_right(v_x_138_, v___x_143_);
v___x_179_ = lean_usize_add(v_x_139_, v___x_144_);
v___x_180_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_node_174_, v___x_178_, v___x_179_, v_x_140_, v_x_141_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_180_);
v___x_182_ = v___x_176_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
v___y_157_ = v___x_182_;
goto v___jp_156_;
}
}
}
default: 
{
lean_object* v___x_185_; 
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_x_140_);
lean_ctor_set(v___x_185_, 1, v_x_141_);
v___y_157_ = v___x_185_;
goto v___jp_156_;
}
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = lean_array_fset(v_xs_x27_155_, v_j_147_, v___y_157_);
lean_dec(v_j_147_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_158_);
v___x_160_ = v___x_151_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
}
else
{
lean_object* v_ks_188_; lean_object* v_vs_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_209_; 
v_ks_188_ = lean_ctor_get(v_x_137_, 0);
v_vs_189_ = lean_ctor_get(v_x_137_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_209_ == 0)
{
v___x_191_ = v_x_137_;
v_isShared_192_ = v_isSharedCheck_209_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_vs_189_);
lean_inc(v_ks_188_);
lean_dec(v_x_137_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_209_;
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
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_ks_188_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_vs_189_);
v___x_194_ = v_reuseFailAlloc_208_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v_newNode_195_; uint8_t v___y_197_; size_t v___x_203_; uint8_t v___x_204_; 
v_newNode_195_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(v___x_194_, v_x_140_, v_x_141_);
v___x_203_ = ((size_t)7ULL);
v___x_204_ = lean_usize_dec_le(v___x_203_, v_x_139_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_205_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_195_);
v___x_206_ = lean_unsigned_to_nat(4u);
v___x_207_ = lean_nat_dec_lt(v___x_205_, v___x_206_);
lean_dec(v___x_205_);
v___y_197_ = v___x_207_;
goto v___jp_196_;
}
else
{
v___y_197_ = v___x_204_;
goto v___jp_196_;
}
v___jp_196_:
{
if (v___y_197_ == 0)
{
lean_object* v_ks_198_; lean_object* v_vs_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_ks_198_ = lean_ctor_get(v_newNode_195_, 0);
lean_inc_ref(v_ks_198_);
v_vs_199_ = lean_ctor_get(v_newNode_195_, 1);
lean_inc_ref(v_vs_199_);
lean_dec_ref(v_newNode_195_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_202_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_x_139_, v_ks_198_, v_vs_199_, v___x_200_, v___x_201_);
lean_dec_ref(v_vs_199_);
lean_dec_ref(v_ks_198_);
return v___x_202_;
}
else
{
return v_newNode_195_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(size_t v_depth_210_, lean_object* v_keys_211_, lean_object* v_vals_212_, lean_object* v_i_213_, lean_object* v_entries_214_){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_keys_211_);
v___x_216_ = lean_nat_dec_lt(v_i_213_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec(v_i_213_);
return v_entries_214_;
}
else
{
lean_object* v_k_217_; lean_object* v_v_218_; uint64_t v___x_219_; size_t v_h_220_; size_t v___x_221_; lean_object* v___x_222_; size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v_h_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_k_217_ = lean_array_fget_borrowed(v_keys_211_, v_i_213_);
v_v_218_ = lean_array_fget_borrowed(v_vals_212_, v_i_213_);
v___x_219_ = l_Lean_instHashableMVarId_hash(v_k_217_);
v_h_220_ = lean_uint64_to_usize(v___x_219_);
v___x_221_ = ((size_t)5ULL);
v___x_222_ = lean_unsigned_to_nat(1u);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_sub(v_depth_210_, v___x_223_);
v___x_225_ = lean_usize_mul(v___x_221_, v___x_224_);
v_h_226_ = lean_usize_shift_right(v_h_220_, v___x_225_);
v___x_227_ = lean_nat_add(v_i_213_, v___x_222_);
lean_dec(v_i_213_);
lean_inc(v_v_218_);
lean_inc(v_k_217_);
v___x_228_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_entries_214_, v_h_226_, v_depth_210_, v_k_217_, v_v_218_);
v_i_213_ = v___x_227_;
v_entries_214_ = v___x_228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg___boxed(lean_object* v_depth_230_, lean_object* v_keys_231_, lean_object* v_vals_232_, lean_object* v_i_233_, lean_object* v_entries_234_){
_start:
{
size_t v_depth_boxed_235_; lean_object* v_res_236_; 
v_depth_boxed_235_ = lean_unbox_usize(v_depth_230_);
lean_dec(v_depth_230_);
v_res_236_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_boxed_235_, v_keys_231_, v_vals_232_, v_i_233_, v_entries_234_);
lean_dec_ref(v_vals_232_);
lean_dec_ref(v_keys_231_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_237_, lean_object* v_x_238_, lean_object* v_x_239_, lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
size_t v_x_3658__boxed_242_; size_t v_x_3659__boxed_243_; lean_object* v_res_244_; 
v_x_3658__boxed_242_ = lean_unbox_usize(v_x_238_);
lean_dec(v_x_238_);
v_x_3659__boxed_243_ = lean_unbox_usize(v_x_239_);
lean_dec(v_x_239_);
v_res_244_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_237_, v_x_3658__boxed_242_, v_x_3659__boxed_243_, v_x_240_, v_x_241_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(lean_object* v_x_245_, lean_object* v_x_246_, lean_object* v_x_247_){
_start:
{
uint64_t v___x_248_; size_t v___x_249_; size_t v___x_250_; lean_object* v___x_251_; 
v___x_248_ = l_Lean_instHashableMVarId_hash(v_x_246_);
v___x_249_ = lean_uint64_to_usize(v___x_248_);
v___x_250_ = ((size_t)1ULL);
v___x_251_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_245_, v___x_249_, v___x_250_, v_x_246_, v_x_247_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(lean_object* v_mvarId_252_, lean_object* v_val_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_mctx_259_; lean_object* v_cache_260_; lean_object* v_zetaDeltaFVarIds_261_; lean_object* v_postponed_262_; lean_object* v_diag_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_291_; 
v___x_257_ = lean_st_ref_get(v___y_255_);
lean_dec(v___x_257_);
v___x_258_ = lean_st_ref_take(v___y_254_);
v_mctx_259_ = lean_ctor_get(v___x_258_, 0);
v_cache_260_ = lean_ctor_get(v___x_258_, 1);
v_zetaDeltaFVarIds_261_ = lean_ctor_get(v___x_258_, 2);
v_postponed_262_ = lean_ctor_get(v___x_258_, 3);
v_diag_263_ = lean_ctor_get(v___x_258_, 4);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_291_ == 0)
{
v___x_265_ = v___x_258_;
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_diag_263_);
lean_inc(v_postponed_262_);
lean_inc(v_zetaDeltaFVarIds_261_);
lean_inc(v_cache_260_);
lean_inc(v_mctx_259_);
lean_dec(v___x_258_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_depth_267_; lean_object* v_levelAssignDepth_268_; lean_object* v_lmvarCounter_269_; lean_object* v_mvarCounter_270_; lean_object* v_lDecls_271_; lean_object* v_decls_272_; lean_object* v_userNames_273_; lean_object* v_lAssignment_274_; lean_object* v_eAssignment_275_; lean_object* v_dAssignment_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_290_; 
v_depth_267_ = lean_ctor_get(v_mctx_259_, 0);
v_levelAssignDepth_268_ = lean_ctor_get(v_mctx_259_, 1);
v_lmvarCounter_269_ = lean_ctor_get(v_mctx_259_, 2);
v_mvarCounter_270_ = lean_ctor_get(v_mctx_259_, 3);
v_lDecls_271_ = lean_ctor_get(v_mctx_259_, 4);
v_decls_272_ = lean_ctor_get(v_mctx_259_, 5);
v_userNames_273_ = lean_ctor_get(v_mctx_259_, 6);
v_lAssignment_274_ = lean_ctor_get(v_mctx_259_, 7);
v_eAssignment_275_ = lean_ctor_get(v_mctx_259_, 8);
v_dAssignment_276_ = lean_ctor_get(v_mctx_259_, 9);
v_isSharedCheck_290_ = !lean_is_exclusive(v_mctx_259_);
if (v_isSharedCheck_290_ == 0)
{
v___x_278_ = v_mctx_259_;
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_dAssignment_276_);
lean_inc(v_eAssignment_275_);
lean_inc(v_lAssignment_274_);
lean_inc(v_userNames_273_);
lean_inc(v_decls_272_);
lean_inc(v_lDecls_271_);
lean_inc(v_mvarCounter_270_);
lean_inc(v_lmvarCounter_269_);
lean_inc(v_levelAssignDepth_268_);
lean_inc(v_depth_267_);
lean_dec(v_mctx_259_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(v_eAssignment_275_, v_mvarId_252_, v_val_253_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 8, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_depth_267_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_levelAssignDepth_268_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_lmvarCounter_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_mvarCounter_270_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_lDecls_271_);
lean_ctor_set(v_reuseFailAlloc_289_, 5, v_decls_272_);
lean_ctor_set(v_reuseFailAlloc_289_, 6, v_userNames_273_);
lean_ctor_set(v_reuseFailAlloc_289_, 7, v_lAssignment_274_);
lean_ctor_set(v_reuseFailAlloc_289_, 8, v___x_280_);
lean_ctor_set(v_reuseFailAlloc_289_, 9, v_dAssignment_276_);
v___x_282_ = v_reuseFailAlloc_289_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_282_);
v___x_284_ = v___x_265_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_cache_260_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v_zetaDeltaFVarIds_261_);
lean_ctor_set(v_reuseFailAlloc_288_, 3, v_postponed_262_);
lean_ctor_set(v_reuseFailAlloc_288_, 4, v_diag_263_);
v___x_284_ = v_reuseFailAlloc_288_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_st_ref_set(v___y_254_, v___x_284_);
v___x_286_ = lean_box(0);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg___boxed(lean_object* v_mvarId_292_, lean_object* v_val_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvarId_292_, v_val_293_, v___y_294_, v___y_295_);
lean_dec(v___y_295_);
lean_dec(v___y_294_);
return v_res_297_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lean_mk_string_unchecked("target is not SPred.and", 23, 23);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__0);
v___x_300_ = l_Lean_stringToMessageData(v___x_299_);
return v___x_300_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2(void){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5(void){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_mk_string_unchecked("and", 3, 3);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_mk_string_unchecked("and_intro", 9, 9);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_306_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__6);
v___x_307_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4);
v___x_308_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3);
v___x_309_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2);
v___x_310_ = l_Lean_Name_mkStr4(v___x_309_, v___x_308_, v___x_307_, v___x_306_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_mk_string_unchecked("not in proof mode", 17, 17);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__8);
v___x_313_ = l_Lean_stringToMessageData(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(lean_object* v_mvar_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___x_327_; 
lean_inc(v_mvar_314_);
v___x_327_ = l_Lean_MVarId_getType(v_mvar_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_a_328_);
lean_dec_ref(v___x_327_);
v___x_329_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__1___redArg(v_a_328_, v_a_316_, v_a_318_);
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref(v___x_329_);
v___x_331_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_330_);
lean_dec(v_a_330_);
if (lean_obj_tag(v___x_331_) == 1)
{
lean_object* v_val_332_; lean_object* v_target_333_; 
v_val_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_val_332_);
lean_dec_ref(v___x_331_);
v_target_333_ = lean_ctor_get(v_val_332_, 3);
lean_inc_ref(v_target_333_);
if (lean_obj_tag(v_target_333_) == 5)
{
lean_object* v_fn_334_; 
v_fn_334_ = lean_ctor_get(v_target_333_, 0);
lean_inc_ref(v_fn_334_);
if (lean_obj_tag(v_fn_334_) == 5)
{
lean_object* v_fn_335_; 
v_fn_335_ = lean_ctor_get(v_fn_334_, 0);
lean_inc_ref(v_fn_335_);
if (lean_obj_tag(v_fn_335_) == 5)
{
lean_object* v_fn_336_; 
v_fn_336_ = lean_ctor_get(v_fn_335_, 0);
if (lean_obj_tag(v_fn_336_) == 4)
{
lean_object* v_declName_337_; 
v_declName_337_ = lean_ctor_get(v_fn_336_, 0);
lean_inc(v_declName_337_);
if (lean_obj_tag(v_declName_337_) == 1)
{
lean_object* v_pre_338_; 
v_pre_338_ = lean_ctor_get(v_declName_337_, 0);
lean_inc(v_pre_338_);
if (lean_obj_tag(v_pre_338_) == 1)
{
lean_object* v_pre_339_; 
v_pre_339_ = lean_ctor_get(v_pre_338_, 0);
lean_inc(v_pre_339_);
if (lean_obj_tag(v_pre_339_) == 1)
{
lean_object* v_pre_340_; 
v_pre_340_ = lean_ctor_get(v_pre_339_, 0);
lean_inc(v_pre_340_);
if (lean_obj_tag(v_pre_340_) == 1)
{
lean_object* v_pre_341_; 
v_pre_341_ = lean_ctor_get(v_pre_340_, 0);
lean_inc(v_pre_341_);
if (lean_obj_tag(v_pre_341_) == 0)
{
lean_object* v_u_342_; lean_object* v_00_u03c3s_343_; lean_object* v_hyps_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_406_; 
v_u_342_ = lean_ctor_get(v_val_332_, 0);
v_00_u03c3s_343_ = lean_ctor_get(v_val_332_, 1);
v_hyps_344_ = lean_ctor_get(v_val_332_, 2);
v_isSharedCheck_406_ = !lean_is_exclusive(v_val_332_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v_val_332_, 3);
lean_dec(v_unused_407_);
v___x_346_ = v_val_332_;
v_isShared_347_ = v_isSharedCheck_406_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_hyps_344_);
lean_inc(v_00_u03c3s_343_);
lean_inc(v_u_342_);
lean_dec(v_val_332_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_406_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v_arg_348_; lean_object* v_arg_349_; lean_object* v_arg_350_; lean_object* v_str_351_; lean_object* v_str_352_; lean_object* v_str_353_; lean_object* v_str_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_arg_348_ = lean_ctor_get(v_target_333_, 1);
lean_inc_ref(v_arg_348_);
lean_dec_ref(v_target_333_);
v_arg_349_ = lean_ctor_get(v_fn_334_, 1);
lean_inc_ref(v_arg_349_);
lean_dec_ref(v_fn_334_);
v_arg_350_ = lean_ctor_get(v_fn_335_, 1);
lean_inc_ref(v_arg_350_);
lean_dec_ref(v_fn_335_);
v_str_351_ = lean_ctor_get(v_declName_337_, 1);
lean_inc_ref(v_str_351_);
lean_dec_ref(v_declName_337_);
v_str_352_ = lean_ctor_get(v_pre_338_, 1);
lean_inc_ref(v_str_352_);
lean_dec_ref(v_pre_338_);
v_str_353_ = lean_ctor_get(v_pre_339_, 1);
lean_inc_ref(v_str_353_);
lean_dec_ref(v_pre_339_);
v_str_354_ = lean_ctor_get(v_pre_340_, 1);
lean_inc_ref(v_str_354_);
lean_dec_ref(v_pre_340_);
v___x_355_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__2);
v___x_356_ = lean_string_dec_eq(v_str_354_, v___x_355_);
lean_dec_ref(v_str_354_);
if (v___x_356_ == 0)
{
lean_dec_ref(v_str_353_);
lean_dec_ref(v_str_352_);
lean_dec_ref(v_str_351_);
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_del_object(v___x_346_);
lean_dec_ref(v_hyps_344_);
lean_dec_ref(v_00_u03c3s_343_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
else
{
lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_357_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3);
v___x_358_ = lean_string_dec_eq(v_str_353_, v___x_357_);
lean_dec_ref(v_str_353_);
if (v___x_358_ == 0)
{
lean_dec_ref(v_str_352_);
lean_dec_ref(v_str_351_);
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_del_object(v___x_346_);
lean_dec_ref(v_hyps_344_);
lean_dec_ref(v_00_u03c3s_343_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
else
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__4);
v___x_360_ = lean_string_dec_eq(v_str_352_, v___x_359_);
lean_dec_ref(v_str_352_);
if (v___x_360_ == 0)
{
lean_dec_ref(v_str_351_);
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_del_object(v___x_346_);
lean_dec_ref(v_hyps_344_);
lean_dec_ref(v_00_u03c3s_343_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
else
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__5);
v___x_362_ = lean_string_dec_eq(v_str_351_, v___x_361_);
lean_dec_ref(v_str_351_);
if (v___x_362_ == 0)
{
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_del_object(v___x_346_);
lean_dec_ref(v_hyps_344_);
lean_dec_ref(v_00_u03c3s_343_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
else
{
lean_object* v___x_364_; 
lean_inc_ref(v_arg_349_);
lean_inc_ref(v_hyps_344_);
lean_inc_ref(v_00_u03c3s_343_);
lean_inc(v_u_342_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 3, v_arg_349_);
v___x_364_ = v___x_346_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_u_342_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_00_u03c3s_343_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v_hyps_344_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v_arg_349_);
v___x_364_ = v_reuseFailAlloc_405_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_364_);
v___x_366_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_365_, v_pre_341_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref(v___x_366_);
lean_inc_ref(v_arg_348_);
lean_inc_ref(v_hyps_344_);
lean_inc(v_u_342_);
v___x_368_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_368_, 0, v_u_342_);
lean_ctor_set(v___x_368_, 1, v_00_u03c3s_343_);
lean_ctor_set(v___x_368_, 2, v_hyps_344_);
lean_ctor_set(v___x_368_, 3, v_arg_348_);
v___x_369_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_368_);
v___x_370_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_369_, v_pre_341_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_387_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc_n(v_a_371_, 2);
lean_dec_ref(v___x_370_);
v___x_372_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__7);
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_374_, 0, v_u_342_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = l_Lean_mkConst(v___x_372_, v___x_374_);
lean_inc(v_a_367_);
v___x_376_ = l_Lean_mkApp6(v___x_375_, v_arg_350_, v_hyps_344_, v_arg_349_, v_arg_348_, v_a_367_, v_a_371_);
v___x_377_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvar_314_, v___x_376_, v_a_316_, v_a_318_);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_387_ == 0)
{
lean_object* v_unused_388_; 
v_unused_388_ = lean_ctor_get(v___x_377_, 0);
lean_dec(v_unused_388_);
v___x_379_ = v___x_377_;
v_isShared_380_ = v_isSharedCheck_387_;
goto v_resetjp_378_;
}
else
{
lean_dec(v___x_377_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_387_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_381_ = l_Lean_Expr_mvarId_x21(v_a_367_);
lean_dec(v_a_367_);
v___x_382_ = l_Lean_Expr_mvarId_x21(v_a_371_);
lean_dec(v_a_371_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_381_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_383_);
v___x_385_ = v___x_379_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec(v_a_367_);
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_hyps_344_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v_a_389_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_370_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_370_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec_ref(v_arg_350_);
lean_dec_ref(v_arg_349_);
lean_dec_ref(v_arg_348_);
lean_dec_ref(v_hyps_344_);
lean_dec_ref(v_00_u03c3s_343_);
lean_dec(v_u_342_);
lean_dec(v_mvar_314_);
v_a_397_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_366_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_366_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
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
else
{
lean_dec(v_pre_341_);
lean_dec_ref(v_pre_340_);
lean_dec_ref(v_pre_339_);
lean_dec_ref(v_pre_338_);
lean_dec_ref(v_declName_337_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec(v_pre_340_);
lean_dec_ref(v_pre_339_);
lean_dec_ref(v_pre_338_);
lean_dec_ref(v_declName_337_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_pre_338_);
lean_dec(v_pre_339_);
lean_dec_ref(v_declName_337_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_declName_337_);
lean_dec(v_pre_338_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec(v_declName_337_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_fn_335_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_fn_334_);
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_dec_ref(v_target_333_);
lean_dec(v_val_332_);
lean_dec(v_mvar_314_);
v___y_321_ = v_a_315_;
v___y_322_ = v_a_316_;
v___y_323_ = v_a_317_;
v___y_324_ = v_a_318_;
goto v___jp_320_;
}
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec(v___x_331_);
lean_dec(v_mvar_314_);
v___x_408_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__9);
v___x_409_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_408_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
return v___x_409_;
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec(v_mvar_314_);
v_a_410_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_327_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_327_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
v___jp_320_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__1);
v___x_326_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v___x_325_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___boxed(lean_object* v_mvar_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(v_mvar_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(lean_object* v_00_u03b1_425_, lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___redArg(v_msg_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0___boxed(lean_object* v_00_u03b1_433_, lean_object* v_msg_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__0(v_00_u03b1_433_, v_msg_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(lean_object* v_mvarId_441_, lean_object* v_val_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___redArg(v_mvarId_441_, v_val_442_, v___y_444_, v___y_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2___boxed(lean_object* v_mvarId_449_, lean_object* v_val_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2(v_mvarId_449_, v_val_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3(lean_object* v_00_u03b2_457_, lean_object* v_x_458_, lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3___redArg(v_x_458_, v_x_459_, v_x_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_462_, lean_object* v_x_463_, size_t v_x_464_, size_t v_x_465_, lean_object* v_x_466_, lean_object* v_x_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___redArg(v_x_463_, v_x_464_, v_x_465_, v_x_466_, v_x_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_469_, lean_object* v_x_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v_x_474_){
_start:
{
size_t v_x_4167__boxed_475_; size_t v_x_4168__boxed_476_; lean_object* v_res_477_; 
v_x_4167__boxed_475_ = lean_unbox_usize(v_x_471_);
lean_dec(v_x_471_);
v_x_4168__boxed_476_ = lean_unbox_usize(v_x_472_);
lean_dec(v_x_472_);
v_res_477_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4(v_00_u03b2_469_, v_x_470_, v_x_4167__boxed_475_, v_x_4168__boxed_476_, v_x_473_, v_x_474_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_478_, lean_object* v_n_479_, lean_object* v_k_480_, lean_object* v_v_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5___redArg(v_n_479_, v_k_480_, v_v_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_483_, size_t v_depth_484_, lean_object* v_keys_485_, lean_object* v_vals_486_, lean_object* v_heq_487_, lean_object* v_i_488_, lean_object* v_entries_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___redArg(v_depth_484_, v_keys_485_, v_vals_486_, v_i_488_, v_entries_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6___boxed(lean_object* v_00_u03b2_491_, lean_object* v_depth_492_, lean_object* v_keys_493_, lean_object* v_vals_494_, lean_object* v_heq_495_, lean_object* v_i_496_, lean_object* v_entries_497_){
_start:
{
size_t v_depth_boxed_498_; lean_object* v_res_499_; 
v_depth_boxed_498_ = lean_unbox_usize(v_depth_492_);
lean_dec(v_depth_492_);
v_res_499_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__6(v_00_u03b2_491_, v_depth_boxed_498_, v_keys_493_, v_vals_494_, v_heq_495_, v_i_496_, v_entries_497_);
lean_dec_ref(v_vals_494_);
lean_dec_ref(v_keys_493_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_mConstructorCore_spec__2_spec__3_spec__4_spec__5_spec__6___redArg(v_x_501_, v_x_502_, v_x_503_, v_x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(lean_object* v_x_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
lean_inc(v___y_510_);
lean_inc_ref(v___y_509_);
lean_inc(v___y_508_);
lean_inc_ref(v___y_507_);
v___x_516_ = lean_apply_9(v_x_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed(lean_object* v_x_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0(v_x_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(lean_object* v_mvarId_528_, lean_object* v_x_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___f_539_; lean_object* v___x_540_; 
lean_inc(v___y_533_);
lean_inc_ref(v___y_532_);
lean_inc(v___y_531_);
lean_inc_ref(v___y_530_);
v___f_539_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_539_, 0, v_x_529_);
lean_closure_set(v___f_539_, 1, v___y_530_);
lean_closure_set(v___f_539_, 2, v___y_531_);
lean_closure_set(v___f_539_, 3, v___y_532_);
lean_closure_set(v___f_539_, 4, v___y_533_);
v___x_540_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_528_, v___f_539_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
if (lean_obj_tag(v___x_540_) == 0)
{
return v___x_540_;
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg___boxed(lean_object* v_mvarId_549_, lean_object* v_x_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_mvarId_549_, v_x_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(lean_object* v_00_u03b1_561_, lean_object* v_mvarId_562_, lean_object* v_x_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_mvarId_562_, v_x_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___boxed(lean_object* v_00_u03b1_574_, lean_object* v_mvarId_575_, lean_object* v_x_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0(v_00_u03b1_574_, v_mvarId_575_, v_x_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(lean_object* v_a_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore(v_a_587_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v_fst_599_; lean_object* v_snd_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_610_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref(v___x_597_);
v_fst_599_ = lean_ctor_get(v_a_598_, 0);
v_snd_600_ = lean_ctor_get(v_a_598_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_a_598_);
if (v_isSharedCheck_610_ == 0)
{
v___x_602_ = v_a_598_;
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_snd_600_);
lean_inc(v_fst_599_);
lean_dec(v_a_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_604_ = lean_box(0);
if (v_isShared_603_ == 0)
{
lean_ctor_set_tag(v___x_602_, 1);
lean_ctor_set(v___x_602_, 1, v___x_604_);
lean_ctor_set(v___x_602_, 0, v_snd_600_);
v___x_606_ = v___x_602_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_snd_600_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___x_604_);
v___x_606_ = v_reuseFailAlloc_609_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_607_, 0, v_fst_599_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_607_, v___y_589_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
return v___x_608_;
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_597_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_597_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed(lean_object* v_a_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0(v_a_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_631_, v_a_634_, v_a_635_, v_a_636_, v_a_637_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___f_641_; lean_object* v___x_642_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc_n(v_a_640_, 2);
lean_dec_ref(v___x_639_);
v___f_641_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_641_, 0, v_a_640_);
v___x_642_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMConstructor_spec__0___redArg(v_a_640_, v___f_641_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_);
return v___x_642_;
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_639_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_639_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg___boxed(lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(v_a_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
lean_dec(v_a_656_);
lean_dec_ref(v_a_655_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(lean_object* v_x_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___redArg(v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___boxed(lean_object* v_x_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor(v_x_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
lean_dec(v_x_672_);
return v_res_682_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0(void){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1(void){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_684_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2(void){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_685_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_mk_string_unchecked("mconstructor", 12, 12);
return v___x_686_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_687_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__3);
v___x_688_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2);
v___x_689_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__1);
v___x_690_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0);
v___x_691_ = l_Lean_Name_mkStr4(v___x_690_, v___x_689_, v___x_688_, v___x_687_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5(void){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_692_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_693_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7(void){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = lean_mk_string_unchecked("elabMConstructor", 16, 16);
return v___x_694_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_695_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__7);
v___x_696_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__6);
v___x_697_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mConstructorCore___closed__3);
v___x_698_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__2);
v___x_699_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__5);
v___x_700_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__0);
v___x_701_ = l_Lean_Name_mkStr6(v___x_700_, v___x_699_, v___x_698_, v___x_697_, v___x_696_, v___x_695_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1(){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_703_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_704_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__4);
v___x_705_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8, &l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___closed__8);
v___x_706_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___boxed), 10, 0);
v___x_707_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_703_, v___x_704_, v___x_705_, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1___boxed(lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1();
return v_res_709_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Constructor_0__Lean_Elab_Tactic_Do_ProofMode_elabMConstructor___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMConstructor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Constructor(builtin);
}
#ifdef __cplusplus
}
#endif
