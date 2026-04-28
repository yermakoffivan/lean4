// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Have
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus import Lean.Elab.Tactic.ElabTerm
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(lean_object* v___y_31_){
_start:
{
lean_object* v___x_33_; lean_object* v_ngen_34_; lean_object* v_namePrefix_35_; lean_object* v_idx_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_65_; 
v___x_33_ = lean_st_ref_get(v___y_31_);
v_ngen_34_ = lean_ctor_get(v___x_33_, 2);
lean_inc_ref(v_ngen_34_);
lean_dec(v___x_33_);
v_namePrefix_35_ = lean_ctor_get(v_ngen_34_, 0);
v_idx_36_ = lean_ctor_get(v_ngen_34_, 1);
v_isSharedCheck_65_ = !lean_is_exclusive(v_ngen_34_);
if (v_isSharedCheck_65_ == 0)
{
v___x_38_ = v_ngen_34_;
v_isShared_39_ = v_isSharedCheck_65_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_idx_36_);
lean_inc(v_namePrefix_35_);
lean_dec(v_ngen_34_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_65_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_40_; lean_object* v_env_41_; lean_object* v_nextMacroScope_42_; lean_object* v_auxDeclNGen_43_; lean_object* v_traceState_44_; lean_object* v_cache_45_; lean_object* v_messages_46_; lean_object* v_infoState_47_; lean_object* v_snapshotTasks_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_63_; 
v___x_40_ = lean_st_ref_take(v___y_31_);
v_env_41_ = lean_ctor_get(v___x_40_, 0);
v_nextMacroScope_42_ = lean_ctor_get(v___x_40_, 1);
v_auxDeclNGen_43_ = lean_ctor_get(v___x_40_, 3);
v_traceState_44_ = lean_ctor_get(v___x_40_, 4);
v_cache_45_ = lean_ctor_get(v___x_40_, 5);
v_messages_46_ = lean_ctor_get(v___x_40_, 6);
v_infoState_47_ = lean_ctor_get(v___x_40_, 7);
v_snapshotTasks_48_ = lean_ctor_get(v___x_40_, 8);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_63_ == 0)
{
lean_object* v_unused_64_; 
v_unused_64_ = lean_ctor_get(v___x_40_, 2);
lean_dec(v_unused_64_);
v___x_50_ = v___x_40_;
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_snapshotTasks_48_);
lean_inc(v_infoState_47_);
lean_inc(v_messages_46_);
lean_inc(v_cache_45_);
lean_inc(v_traceState_44_);
lean_inc(v_auxDeclNGen_43_);
lean_inc(v_nextMacroScope_42_);
lean_inc(v_env_41_);
lean_dec(v___x_40_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v_r_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
lean_inc(v_idx_36_);
lean_inc(v_namePrefix_35_);
v_r_52_ = l_Lean_Name_num___override(v_namePrefix_35_, v_idx_36_);
v___x_53_ = lean_unsigned_to_nat(1u);
v___x_54_ = lean_nat_add(v_idx_36_, v___x_53_);
lean_dec(v_idx_36_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 1, v___x_54_);
v___x_56_ = v___x_38_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_namePrefix_35_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___x_54_);
v___x_56_ = v_reuseFailAlloc_62_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
lean_object* v___x_58_; 
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 2, v___x_56_);
v___x_58_ = v___x_50_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_env_41_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v_nextMacroScope_42_);
lean_ctor_set(v_reuseFailAlloc_61_, 2, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_61_, 3, v_auxDeclNGen_43_);
lean_ctor_set(v_reuseFailAlloc_61_, 4, v_traceState_44_);
lean_ctor_set(v_reuseFailAlloc_61_, 5, v_cache_45_);
lean_ctor_set(v_reuseFailAlloc_61_, 6, v_messages_46_);
lean_ctor_set(v_reuseFailAlloc_61_, 7, v_infoState_47_);
lean_ctor_set(v_reuseFailAlloc_61_, 8, v_snapshotTasks_48_);
v___x_58_ = v_reuseFailAlloc_61_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_st_ref_set(v___y_31_, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v_r_52_);
return v___x_60_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg___boxed(lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_66_);
lean_dec(v___y_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___boxed(lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1(v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(lean_object* v_x_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
v___x_99_ = lean_apply_9(v_x_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, lean_box(0));
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed(lean_object* v_x_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0(v_x_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(lean_object* v_mvarId_111_, lean_object* v_x_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___f_122_; lean_object* v___x_123_; 
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_122_, 0, v_x_112_);
lean_closure_set(v___f_122_, 1, v___y_113_);
lean_closure_set(v___f_122_, 2, v___y_114_);
lean_closure_set(v___f_122_, 3, v___y_115_);
lean_closure_set(v___f_122_, 4, v___y_116_);
v___x_123_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_111_, v___f_122_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
if (lean_obj_tag(v___x_123_) == 0)
{
return v___x_123_;
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg___boxed(lean_object* v_mvarId_132_, lean_object* v_x_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_mvarId_132_, v_x_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(lean_object* v_00_u03b1_144_, lean_object* v_mvarId_145_, lean_object* v_x_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_mvarId_145_, v_x_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___boxed(lean_object* v_00_u03b1_157_, lean_object* v_mvarId_158_, lean_object* v_x_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4(v_00_u03b1_157_, v_mvarId_158_, v_x_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(lean_object* v_msgData_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; lean_object* v_env_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v_mctx_180_; lean_object* v_lctx_181_; lean_object* v_options_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_176_ = lean_st_ref_get(v___y_174_);
v_env_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc_ref(v_env_177_);
lean_dec(v___x_176_);
v___x_178_ = lean_st_ref_get(v___y_174_);
lean_dec(v___x_178_);
v___x_179_ = lean_st_ref_get(v___y_172_);
v_mctx_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_mctx_180_);
lean_dec(v___x_179_);
v_lctx_181_ = lean_ctor_get(v___y_171_, 2);
v_options_182_ = lean_ctor_get(v___y_173_, 2);
lean_inc_ref(v_options_182_);
lean_inc_ref(v_lctx_181_);
v___x_183_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_183_, 0, v_env_177_);
lean_ctor_set(v___x_183_, 1, v_mctx_180_);
lean_ctor_set(v___x_183_, 2, v_lctx_181_);
lean_ctor_set(v___x_183_, 3, v_options_182_);
v___x_184_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v_msgData_170_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4___boxed(lean_object* v_msgData_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(v_msgData_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(lean_object* v_msg_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_ref_199_; lean_object* v___x_200_; lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_209_; 
v_ref_199_ = lean_ctor_get(v___y_196_, 5);
v___x_200_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3_spec__4(v_msg_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_209_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
lean_inc(v_ref_199_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v_ref_199_);
lean_ctor_set(v___x_205_, 1, v_a_201_);
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 1);
lean_ctor_set(v___x_203_, 0, v___x_205_);
v___x_207_ = v___x_203_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg___boxed(lean_object* v_msg_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v_msg_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(lean_object* v_x_217_, lean_object* v_x_218_, lean_object* v_x_219_, lean_object* v_x_220_){
_start:
{
lean_object* v_ks_221_; lean_object* v_vs_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_246_; 
v_ks_221_ = lean_ctor_get(v_x_217_, 0);
v_vs_222_ = lean_ctor_get(v_x_217_, 1);
v_isSharedCheck_246_ = !lean_is_exclusive(v_x_217_);
if (v_isSharedCheck_246_ == 0)
{
v___x_224_ = v_x_217_;
v_isShared_225_ = v_isSharedCheck_246_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_vs_222_);
lean_inc(v_ks_221_);
lean_dec(v_x_217_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_246_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_array_get_size(v_ks_221_);
v___x_227_ = lean_nat_dec_lt(v_x_218_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
lean_dec(v_x_218_);
v___x_228_ = lean_array_push(v_ks_221_, v_x_219_);
v___x_229_ = lean_array_push(v_vs_222_, v_x_220_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_229_);
lean_ctor_set(v___x_224_, 0, v___x_228_);
v___x_231_ = v___x_224_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v___x_229_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
else
{
lean_object* v_k_x27_233_; uint8_t v___x_234_; 
v_k_x27_233_ = lean_array_fget_borrowed(v_ks_221_, v_x_218_);
v___x_234_ = l_Lean_instBEqMVarId_beq(v_x_219_, v_k_x27_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_236_; 
if (v_isShared_225_ == 0)
{
v___x_236_ = v___x_224_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_ks_221_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v_vs_222_);
v___x_236_ = v_reuseFailAlloc_240_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_unsigned_to_nat(1u);
v___x_238_ = lean_nat_add(v_x_218_, v___x_237_);
lean_dec(v_x_218_);
v_x_217_ = v___x_236_;
v_x_218_ = v___x_238_;
goto _start;
}
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_241_ = lean_array_fset(v_ks_221_, v_x_218_, v_x_219_);
v___x_242_ = lean_array_fset(v_vs_222_, v_x_218_, v_x_220_);
lean_dec(v_x_218_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_242_);
lean_ctor_set(v___x_224_, 0, v___x_241_);
v___x_244_ = v___x_224_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_242_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(lean_object* v_n_247_, lean_object* v_k_248_, lean_object* v_v_249_){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_unsigned_to_nat(0u);
v___x_251_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_n_247_, v___x_250_, v_k_248_, v_v_249_);
return v___x_251_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_252_; size_t v___x_253_; size_t v___x_254_; 
v___x_252_ = ((size_t)5ULL);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_shift_left(v___x_253_, v___x_252_);
return v___x_254_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; 
v___x_255_ = ((size_t)1ULL);
v___x_256_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_257_ = lean_usize_sub(v___x_256_, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(lean_object* v_x_259_, size_t v_x_260_, size_t v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_){
_start:
{
if (lean_obj_tag(v_x_259_) == 0)
{
lean_object* v_es_264_; size_t v___x_265_; size_t v___x_266_; size_t v___x_267_; size_t v___x_268_; lean_object* v_j_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_es_264_ = lean_ctor_get(v_x_259_, 0);
v___x_265_ = ((size_t)5ULL);
v___x_266_ = ((size_t)1ULL);
v___x_267_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__1);
v___x_268_ = lean_usize_land(v_x_260_, v___x_267_);
v_j_269_ = lean_usize_to_nat(v___x_268_);
v___x_270_ = lean_array_get_size(v_es_264_);
v___x_271_ = lean_nat_dec_lt(v_j_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_j_269_);
lean_dec(v_x_263_);
lean_dec(v_x_262_);
return v_x_259_;
}
else
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_308_; 
lean_inc_ref(v_es_264_);
v_isSharedCheck_308_ = !lean_is_exclusive(v_x_259_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_x_259_, 0);
lean_dec(v_unused_309_);
v___x_273_ = v_x_259_;
v_isShared_274_ = v_isSharedCheck_308_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_x_259_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_308_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_v_275_; lean_object* v___x_276_; lean_object* v_xs_x27_277_; lean_object* v___y_279_; 
v_v_275_ = lean_array_fget(v_es_264_, v_j_269_);
v___x_276_ = lean_box(0);
v_xs_x27_277_ = lean_array_fset(v_es_264_, v_j_269_, v___x_276_);
switch(lean_obj_tag(v_v_275_))
{
case 0:
{
lean_object* v_key_284_; lean_object* v_val_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_295_; 
v_key_284_ = lean_ctor_get(v_v_275_, 0);
v_val_285_ = lean_ctor_get(v_v_275_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_295_ == 0)
{
v___x_287_ = v_v_275_;
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_val_285_);
lean_inc(v_key_284_);
lean_dec(v_v_275_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___x_289_; 
v___x_289_ = l_Lean_instBEqMVarId_beq(v_x_262_, v_key_284_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_del_object(v___x_287_);
v___x_290_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_284_, v_val_285_, v_x_262_, v_x_263_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___y_279_ = v___x_291_;
goto v___jp_278_;
}
else
{
lean_object* v___x_293_; 
lean_dec(v_val_285_);
lean_dec(v_key_284_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v_x_263_);
lean_ctor_set(v___x_287_, 0, v_x_262_);
v___x_293_ = v___x_287_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_x_262_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_x_263_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
v___y_279_ = v___x_293_;
goto v___jp_278_;
}
}
}
}
case 1:
{
lean_object* v_node_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_306_; 
v_node_296_ = lean_ctor_get(v_v_275_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_306_ == 0)
{
v___x_298_ = v_v_275_;
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_node_296_);
lean_dec(v_v_275_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
size_t v___x_300_; size_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_300_ = lean_usize_shift_right(v_x_260_, v___x_265_);
v___x_301_ = lean_usize_add(v_x_261_, v___x_266_);
v___x_302_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_node_296_, v___x_300_, v___x_301_, v_x_262_, v_x_263_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_302_);
v___x_304_ = v___x_298_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
v___y_279_ = v___x_304_;
goto v___jp_278_;
}
}
}
default: 
{
lean_object* v___x_307_; 
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_x_262_);
lean_ctor_set(v___x_307_, 1, v_x_263_);
v___y_279_ = v___x_307_;
goto v___jp_278_;
}
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_array_fset(v_xs_x27_277_, v_j_269_, v___y_279_);
lean_dec(v_j_269_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_280_);
v___x_282_ = v___x_273_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
else
{
lean_object* v_ks_310_; lean_object* v_vs_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_331_; 
v_ks_310_ = lean_ctor_get(v_x_259_, 0);
v_vs_311_ = lean_ctor_get(v_x_259_, 1);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_259_);
if (v_isSharedCheck_331_ == 0)
{
v___x_313_ = v_x_259_;
v_isShared_314_ = v_isSharedCheck_331_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_vs_311_);
lean_inc(v_ks_310_);
lean_dec(v_x_259_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_331_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_ks_310_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_vs_311_);
v___x_316_ = v_reuseFailAlloc_330_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v_newNode_317_; uint8_t v___y_319_; size_t v___x_325_; uint8_t v___x_326_; 
v_newNode_317_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(v___x_316_, v_x_262_, v_x_263_);
v___x_325_ = ((size_t)7ULL);
v___x_326_ = lean_usize_dec_le(v___x_325_, v_x_261_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_327_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_317_);
v___x_328_ = lean_unsigned_to_nat(4u);
v___x_329_ = lean_nat_dec_lt(v___x_327_, v___x_328_);
lean_dec(v___x_327_);
v___y_319_ = v___x_329_;
goto v___jp_318_;
}
else
{
v___y_319_ = v___x_326_;
goto v___jp_318_;
}
v___jp_318_:
{
if (v___y_319_ == 0)
{
lean_object* v_ks_320_; lean_object* v_vs_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_ks_320_ = lean_ctor_get(v_newNode_317_, 0);
lean_inc_ref(v_ks_320_);
v_vs_321_ = lean_ctor_get(v_newNode_317_, 1);
lean_inc_ref(v_vs_321_);
lean_dec_ref(v_newNode_317_);
v___x_322_ = lean_unsigned_to_nat(0u);
v___x_323_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___closed__2);
v___x_324_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_x_261_, v_ks_320_, v_vs_321_, v___x_322_, v___x_323_);
lean_dec_ref(v_vs_321_);
lean_dec_ref(v_ks_320_);
return v___x_324_;
}
else
{
return v_newNode_317_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(size_t v_depth_332_, lean_object* v_keys_333_, lean_object* v_vals_334_, lean_object* v_i_335_, lean_object* v_entries_336_){
_start:
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_array_get_size(v_keys_333_);
v___x_338_ = lean_nat_dec_lt(v_i_335_, v___x_337_);
if (v___x_338_ == 0)
{
lean_dec(v_i_335_);
return v_entries_336_;
}
else
{
lean_object* v_k_339_; lean_object* v_v_340_; uint64_t v___x_341_; size_t v_h_342_; size_t v___x_343_; lean_object* v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v___x_347_; size_t v_h_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_k_339_ = lean_array_fget_borrowed(v_keys_333_, v_i_335_);
v_v_340_ = lean_array_fget_borrowed(v_vals_334_, v_i_335_);
v___x_341_ = l_Lean_instHashableMVarId_hash(v_k_339_);
v_h_342_ = lean_uint64_to_usize(v___x_341_);
v___x_343_ = ((size_t)5ULL);
v___x_344_ = lean_unsigned_to_nat(1u);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_sub(v_depth_332_, v___x_345_);
v___x_347_ = lean_usize_mul(v___x_343_, v___x_346_);
v_h_348_ = lean_usize_shift_right(v_h_342_, v___x_347_);
v___x_349_ = lean_nat_add(v_i_335_, v___x_344_);
lean_dec(v_i_335_);
lean_inc(v_v_340_);
lean_inc(v_k_339_);
v___x_350_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_entries_336_, v_h_348_, v_depth_332_, v_k_339_, v_v_340_);
v_i_335_ = v___x_349_;
v_entries_336_ = v___x_350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_352_, lean_object* v_keys_353_, lean_object* v_vals_354_, lean_object* v_i_355_, lean_object* v_entries_356_){
_start:
{
size_t v_depth_boxed_357_; lean_object* v_res_358_; 
v_depth_boxed_357_ = lean_unbox_usize(v_depth_352_);
lean_dec(v_depth_352_);
v_res_358_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_boxed_357_, v_keys_353_, v_vals_354_, v_i_355_, v_entries_356_);
lean_dec_ref(v_vals_354_);
lean_dec_ref(v_keys_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
size_t v_x_7856__boxed_364_; size_t v_x_7857__boxed_365_; lean_object* v_res_366_; 
v_x_7856__boxed_364_ = lean_unbox_usize(v_x_360_);
lean_dec(v_x_360_);
v_x_7857__boxed_365_ = lean_unbox_usize(v_x_361_);
lean_dec(v_x_361_);
v_res_366_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_359_, v_x_7856__boxed_364_, v_x_7857__boxed_365_, v_x_362_, v_x_363_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
uint64_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; 
v___x_370_ = l_Lean_instHashableMVarId_hash(v_x_368_);
v___x_371_ = lean_uint64_to_usize(v___x_370_);
v___x_372_ = ((size_t)1ULL);
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_367_, v___x_371_, v___x_372_, v_x_368_, v_x_369_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(lean_object* v_mvarId_374_, lean_object* v_val_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_mctx_381_; lean_object* v_cache_382_; lean_object* v_zetaDeltaFVarIds_383_; lean_object* v_postponed_384_; lean_object* v_diag_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_413_; 
v___x_379_ = lean_st_ref_get(v___y_377_);
lean_dec(v___x_379_);
v___x_380_ = lean_st_ref_take(v___y_376_);
v_mctx_381_ = lean_ctor_get(v___x_380_, 0);
v_cache_382_ = lean_ctor_get(v___x_380_, 1);
v_zetaDeltaFVarIds_383_ = lean_ctor_get(v___x_380_, 2);
v_postponed_384_ = lean_ctor_get(v___x_380_, 3);
v_diag_385_ = lean_ctor_get(v___x_380_, 4);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_413_ == 0)
{
v___x_387_ = v___x_380_;
v_isShared_388_ = v_isSharedCheck_413_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_diag_385_);
lean_inc(v_postponed_384_);
lean_inc(v_zetaDeltaFVarIds_383_);
lean_inc(v_cache_382_);
lean_inc(v_mctx_381_);
lean_dec(v___x_380_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_413_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v_depth_389_; lean_object* v_levelAssignDepth_390_; lean_object* v_lmvarCounter_391_; lean_object* v_mvarCounter_392_; lean_object* v_lDecls_393_; lean_object* v_decls_394_; lean_object* v_userNames_395_; lean_object* v_lAssignment_396_; lean_object* v_eAssignment_397_; lean_object* v_dAssignment_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_412_; 
v_depth_389_ = lean_ctor_get(v_mctx_381_, 0);
v_levelAssignDepth_390_ = lean_ctor_get(v_mctx_381_, 1);
v_lmvarCounter_391_ = lean_ctor_get(v_mctx_381_, 2);
v_mvarCounter_392_ = lean_ctor_get(v_mctx_381_, 3);
v_lDecls_393_ = lean_ctor_get(v_mctx_381_, 4);
v_decls_394_ = lean_ctor_get(v_mctx_381_, 5);
v_userNames_395_ = lean_ctor_get(v_mctx_381_, 6);
v_lAssignment_396_ = lean_ctor_get(v_mctx_381_, 7);
v_eAssignment_397_ = lean_ctor_get(v_mctx_381_, 8);
v_dAssignment_398_ = lean_ctor_get(v_mctx_381_, 9);
v_isSharedCheck_412_ = !lean_is_exclusive(v_mctx_381_);
if (v_isSharedCheck_412_ == 0)
{
v___x_400_ = v_mctx_381_;
v_isShared_401_ = v_isSharedCheck_412_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_dAssignment_398_);
lean_inc(v_eAssignment_397_);
lean_inc(v_lAssignment_396_);
lean_inc(v_userNames_395_);
lean_inc(v_decls_394_);
lean_inc(v_lDecls_393_);
lean_inc(v_mvarCounter_392_);
lean_inc(v_lmvarCounter_391_);
lean_inc(v_levelAssignDepth_390_);
lean_inc(v_depth_389_);
lean_dec(v_mctx_381_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_412_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_402_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(v_eAssignment_397_, v_mvarId_374_, v_val_375_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 8, v___x_402_);
v___x_404_ = v___x_400_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_depth_389_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_levelAssignDepth_390_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_lmvarCounter_391_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v_mvarCounter_392_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v_lDecls_393_);
lean_ctor_set(v_reuseFailAlloc_411_, 5, v_decls_394_);
lean_ctor_set(v_reuseFailAlloc_411_, 6, v_userNames_395_);
lean_ctor_set(v_reuseFailAlloc_411_, 7, v_lAssignment_396_);
lean_ctor_set(v_reuseFailAlloc_411_, 8, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_411_, 9, v_dAssignment_398_);
v___x_404_ = v_reuseFailAlloc_411_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_406_; 
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_404_);
v___x_406_ = v___x_387_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_cache_382_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_zetaDeltaFVarIds_383_);
lean_ctor_set(v_reuseFailAlloc_410_, 3, v_postponed_384_);
lean_ctor_set(v_reuseFailAlloc_410_, 4, v_diag_385_);
v___x_406_ = v_reuseFailAlloc_410_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_st_ref_set(v___y_376_, v___x_406_);
v___x_408_ = lean_box(0);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg___boxed(lean_object* v_mvarId_414_, lean_object* v_val_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_mvarId_414_, v_val_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec(v___y_416_);
return v_res_419_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0(void){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_420_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1(void){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2(void){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_422_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3(void){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lean_mk_string_unchecked("Have", 4, 4);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4(void){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = lean_mk_string_unchecked("dup", 3, 3);
return v___x_424_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5(void){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = lean_mk_string_unchecked("Hypothesis ", 11, 11);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__5);
v___x_427_ = l_Lean_stringToMessageData(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7(void){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = lean_mk_string_unchecked(" not found", 10, 10);
return v___x_428_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__7);
v___x_430_ = l_Lean_stringToMessageData(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(lean_object* v___x_431_, lean_object* v_snd_432_, lean_object* v___x_433_, lean_object* v___x_434_, uint8_t v___x_435_, lean_object* v___x_436_, lean_object* v_fst_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
if (lean_obj_tag(v___x_431_) == 1)
{
lean_object* v_val_447_; lean_object* v___x_448_; lean_object* v_a_449_; lean_object* v_focusHyp_450_; lean_object* v_restHyps_451_; lean_object* v_proof_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_501_; 
v_val_447_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_val_447_);
lean_dec_ref(v___x_431_);
v___x_448_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_445_);
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref(v___x_448_);
v_focusHyp_450_ = lean_ctor_get(v_val_447_, 0);
v_restHyps_451_ = lean_ctor_get(v_val_447_, 1);
v_proof_452_ = lean_ctor_get(v_val_447_, 2);
v_isSharedCheck_501_ = !lean_is_exclusive(v_val_447_);
if (v_isSharedCheck_501_ == 0)
{
v___x_454_ = v_val_447_;
v_isShared_455_ = v_isSharedCheck_501_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_proof_452_);
lean_inc(v_restHyps_451_);
lean_inc(v_focusHyp_450_);
lean_dec(v_val_447_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_501_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_u_456_; lean_object* v_00_u03c3s_457_; lean_object* v_hyps_458_; lean_object* v_target_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_500_; 
v_u_456_ = lean_ctor_get(v_snd_432_, 0);
v_00_u03c3s_457_ = lean_ctor_get(v_snd_432_, 1);
v_hyps_458_ = lean_ctor_get(v_snd_432_, 2);
v_target_459_ = lean_ctor_get(v_snd_432_, 3);
v_isSharedCheck_500_ = !lean_is_exclusive(v_snd_432_);
if (v_isSharedCheck_500_ == 0)
{
v___x_461_ = v_snd_432_;
v_isShared_462_ = v_isSharedCheck_500_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_target_459_);
lean_inc(v_hyps_458_);
lean_inc(v_00_u03c3s_457_);
lean_inc(v_u_456_);
lean_dec(v_snd_432_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_500_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_463_ = l_Lean_Syntax_getId(v___x_433_);
v___x_464_ = l_Lean_Expr_consumeMData(v_focusHyp_450_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 2, v___x_464_);
lean_ctor_set(v___x_454_, 1, v_a_449_);
lean_ctor_set(v___x_454_, 0, v___x_463_);
v___x_466_ = v___x_454_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_a_449_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v___x_464_);
v___x_466_ = v_reuseFailAlloc_499_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; 
lean_inc_ref(v___x_466_);
lean_inc_ref(v_00_u03c3s_457_);
v___x_467_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_434_, v_00_u03c3s_457_, v___x_466_, v___x_435_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
lean_dec_ref(v___x_467_);
v___x_468_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_466_);
lean_inc_ref(v_hyps_458_);
lean_inc_ref_n(v_00_u03c3s_457_, 2);
lean_inc_n(v_u_456_, 2);
v___x_469_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_456_, v_00_u03c3s_457_, v_hyps_458_, v___x_468_);
lean_inc_ref(v_target_459_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 2, v___x_469_);
v___x_471_ = v___x_461_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_u_456_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_00_u03c3s_457_);
lean_ctor_set(v_reuseFailAlloc_498_, 2, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_498_, 3, v_target_459_);
v___x_471_ = v_reuseFailAlloc_498_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_471_);
v___x_473_ = lean_box(0);
v___x_474_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_472_, v___x_473_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc_n(v_a_475_, 2);
lean_dec_ref(v___x_474_);
v___x_476_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0);
v___x_477_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_478_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2);
v___x_479_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3);
v___x_480_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__4);
v___x_481_ = l_Lean_Name_mkStr6(v___x_476_, v___x_477_, v___x_478_, v___x_436_, v___x_479_, v___x_480_);
v___x_482_ = lean_box(0);
v___x_483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_483_, 0, v_u_456_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = l_Lean_mkConst(v___x_481_, v___x_483_);
v___x_485_ = l_Lean_mkApp7(v___x_484_, v_00_u03c3s_457_, v_hyps_458_, v_restHyps_451_, v_focusHyp_450_, v_target_459_, v_proof_452_, v_a_475_);
v___x_486_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_437_, v___x_485_, v___y_443_, v___y_445_);
lean_dec_ref(v___x_486_);
v___x_487_ = l_Lean_Expr_mvarId_x21(v_a_475_);
lean_dec(v_a_475_);
v___x_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set(v___x_488_, 1, v___x_482_);
v___x_489_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_488_, v___y_439_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_489_;
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec_ref(v_target_459_);
lean_dec_ref(v_hyps_458_);
lean_dec_ref(v_00_u03c3s_457_);
lean_dec(v_u_456_);
lean_dec_ref(v_proof_452_);
lean_dec_ref(v_restHyps_451_);
lean_dec_ref(v_focusHyp_450_);
lean_dec(v_fst_437_);
lean_dec_ref(v___x_436_);
v_a_490_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_474_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_474_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
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
}
else
{
lean_dec_ref(v___x_466_);
lean_del_object(v___x_461_);
lean_dec_ref(v_target_459_);
lean_dec_ref(v_hyps_458_);
lean_dec_ref(v_00_u03c3s_457_);
lean_dec(v_u_456_);
lean_dec_ref(v_proof_452_);
lean_dec_ref(v_restHyps_451_);
lean_dec_ref(v_focusHyp_450_);
lean_dec(v_fst_437_);
lean_dec_ref(v___x_436_);
return v___x_467_;
}
}
}
}
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
lean_dec(v_fst_437_);
lean_dec_ref(v___x_436_);
lean_dec_ref(v_snd_432_);
lean_dec(v___x_431_);
v___x_502_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_503_ = l_Lean_MessageData_ofSyntax(v___x_434_);
v___x_504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_506_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed(lean_object* v___x_508_, lean_object* v_snd_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v_fst_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
uint8_t v___x_8106__boxed_524_; lean_object* v_res_525_; 
v___x_8106__boxed_524_ = lean_unbox(v___x_512_);
v_res_525_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0(v___x_508_, v_snd_509_, v___x_510_, v___x_511_, v___x_8106__boxed_524_, v___x_513_, v_fst_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___x_510_);
return v_res_525_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0(void){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1(void){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_527_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_mk_string_unchecked("mdup", 4, 4);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_530_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__3);
v___x_531_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_532_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1);
v___x_533_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_534_ = l_Lean_Name_mkStr4(v___x_533_, v___x_532_, v___x_531_, v___x_530_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_535_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__5);
v___x_537_ = l_Lean_Name_mkStr1(v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(lean_object* v_x_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_548_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_549_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4);
lean_inc(v_x_538_);
v___x_550_ = l_Lean_Syntax_isOfKind(v_x_538_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
lean_dec(v_x_538_);
v___x_551_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_551_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = l_Lean_Syntax_getArg(v_x_538_, v___x_552_);
v___x_554_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__6);
lean_inc(v___x_553_);
v___x_555_ = l_Lean_Syntax_isOfKind(v___x_553_, v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
lean_dec(v___x_553_);
lean_dec(v_x_538_);
v___x_556_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_556_;
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_557_ = lean_unsigned_to_nat(3u);
v___x_558_ = l_Lean_Syntax_getArg(v_x_538_, v___x_557_);
lean_dec(v_x_538_);
lean_inc(v___x_558_);
v___x_559_ = l_Lean_Syntax_isOfKind(v___x_558_, v___x_554_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
lean_dec(v___x_558_);
lean_dec(v___x_553_);
v___x_560_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_560_;
}
else
{
lean_object* v___x_561_; 
v___x_561_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___y_568_; lean_object* v___x_569_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref(v___x_561_);
v_fst_563_ = lean_ctor_get(v_a_562_, 0);
lean_inc_n(v_fst_563_, 2);
v_snd_564_ = lean_ctor_get(v_a_562_, 1);
lean_inc_n(v_snd_564_, 2);
lean_dec(v_a_562_);
v___x_565_ = l_Lean_Syntax_getId(v___x_553_);
v___x_566_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(v_snd_564_, v___x_565_);
lean_dec(v___x_565_);
v___x_567_ = lean_box(v___x_559_);
v___y_568_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___boxed), 16, 7);
lean_closure_set(v___y_568_, 0, v___x_566_);
lean_closure_set(v___y_568_, 1, v_snd_564_);
lean_closure_set(v___y_568_, 2, v___x_558_);
lean_closure_set(v___y_568_, 3, v___x_553_);
lean_closure_set(v___y_568_, 4, v___x_567_);
lean_closure_set(v___y_568_, 5, v___x_548_);
lean_closure_set(v___y_568_, 6, v_fst_563_);
v___x_569_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_563_, v___y_568_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
return v___x_569_;
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v___x_558_);
lean_dec(v___x_553_);
v_a_570_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_561_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_561_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___boxed(lean_object* v_x_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMDup(v_x_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
lean_dec(v_a_586_);
lean_dec_ref(v_a_585_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(lean_object* v_mvarId_589_, lean_object* v_val_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_mvarId_589_, v_val_590_, v___y_596_, v___y_598_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___boxed(lean_object* v_mvarId_601_, lean_object* v_val_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2(v_mvarId_601_, v_val_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(lean_object* v_00_u03b1_613_, lean_object* v_msg_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v_msg_614_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___boxed(lean_object* v_00_u03b1_625_, lean_object* v_msg_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3(v_00_u03b1_625_, v_msg_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2(lean_object* v_00_u03b2_637_, lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2___redArg(v_x_638_, v_x_639_, v_x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_642_, lean_object* v_x_643_, size_t v_x_644_, size_t v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___redArg(v_x_643_, v_x_644_, v_x_645_, v_x_646_, v_x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_649_, lean_object* v_x_650_, lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_){
_start:
{
size_t v_x_8443__boxed_655_; size_t v_x_8444__boxed_656_; lean_object* v_res_657_; 
v_x_8443__boxed_655_ = lean_unbox_usize(v_x_651_);
lean_dec(v_x_651_);
v_x_8444__boxed_656_ = lean_unbox_usize(v_x_652_);
lean_dec(v_x_652_);
v_res_657_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4(v_00_u03b2_649_, v_x_650_, v_x_8443__boxed_655_, v_x_8444__boxed_656_, v_x_653_, v_x_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_658_, lean_object* v_n_659_, lean_object* v_k_660_, lean_object* v_v_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7___redArg(v_n_659_, v_k_660_, v_v_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_663_, size_t v_depth_664_, lean_object* v_keys_665_, lean_object* v_vals_666_, lean_object* v_heq_667_, lean_object* v_i_668_, lean_object* v_entries_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___redArg(v_depth_664_, v_keys_665_, v_vals_666_, v_i_668_, v_entries_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_671_, lean_object* v_depth_672_, lean_object* v_keys_673_, lean_object* v_vals_674_, lean_object* v_heq_675_, lean_object* v_i_676_, lean_object* v_entries_677_){
_start:
{
size_t v_depth_boxed_678_; lean_object* v_res_679_; 
v_depth_boxed_678_ = lean_unbox_usize(v_depth_672_);
lean_dec(v_depth_672_);
v_res_679_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__8(v_00_u03b2_671_, v_depth_boxed_678_, v_keys_673_, v_vals_674_, v_heq_675_, v_i_676_, v_entries_677_);
lean_dec_ref(v_vals_674_);
lean_dec_ref(v_keys_673_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_680_, lean_object* v_x_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2_spec__2_spec__4_spec__7_spec__8___redArg(v_x_681_, v_x_682_, v_x_683_, v_x_684_);
return v___x_685_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0(void){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_686_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1(void){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_687_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2(void){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = lean_mk_string_unchecked("elabMDup", 8, 8);
return v___x_688_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_689_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__2);
v___x_690_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1);
v___x_691_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_692_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_693_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0);
v___x_694_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_695_ = l_Lean_Name_mkStr6(v___x_694_, v___x_693_, v___x_692_, v___x_691_, v___x_690_, v___x_689_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1(){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_697_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_698_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__4);
v___x_699_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__3);
v___x_700_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___boxed), 10, 0);
v___x_701_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_697_, v___x_698_, v___x_699_, v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___boxed(lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1();
return v_res_703_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0(void){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = lean_mk_string_unchecked("have", 4, 4);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(lean_object* v___x_705_, lean_object* v_00_u03c3s_706_, uint8_t v___x_707_, lean_object* v_u_708_, lean_object* v_hyps_709_, lean_object* v___x_710_, lean_object* v_target_711_, lean_object* v___x_712_, lean_object* v___x_713_, lean_object* v___x_714_, lean_object* v___x_715_, lean_object* v___x_716_, lean_object* v_fst_717_, lean_object* v_H_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_728_; lean_object* v_a_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_728_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_726_);
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref(v___x_728_);
v___x_730_ = l_Lean_Syntax_getId(v___x_705_);
v___x_731_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
lean_ctor_set(v___x_731_, 1, v_a_729_);
lean_ctor_set(v___x_731_, 2, v_H_718_);
lean_inc_ref(v___x_731_);
lean_inc_ref(v_00_u03c3s_706_);
v___x_732_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_705_, v_00_u03c3s_706_, v___x_731_, v___x_707_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_785_; 
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v___x_732_, 0);
lean_dec(v_unused_786_);
v___x_734_ = v___x_732_;
v_isShared_735_ = v_isSharedCheck_785_;
goto v_resetjp_733_;
}
else
{
lean_dec(v___x_732_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_785_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v_fst_738_; lean_object* v_snd_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_784_; 
v___x_736_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_731_);
lean_inc_ref(v___x_736_);
lean_inc_ref(v_hyps_709_);
lean_inc_ref(v_00_u03c3s_706_);
lean_inc(v_u_708_);
v___x_737_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_708_, v_00_u03c3s_706_, v_hyps_709_, v___x_736_);
v_fst_738_ = lean_ctor_get(v___x_737_, 0);
v_snd_739_ = lean_ctor_get(v___x_737_, 1);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_784_ == 0)
{
v___x_741_ = v___x_737_;
v_isShared_742_ = v_isSharedCheck_784_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_snd_739_);
lean_inc(v_fst_738_);
lean_dec(v___x_737_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_784_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_746_; 
lean_inc_ref(v___x_736_);
lean_inc_ref(v_hyps_709_);
lean_inc_ref(v_00_u03c3s_706_);
lean_inc(v_u_708_);
v___x_743_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_743_, 0, v_u_708_);
lean_ctor_set(v___x_743_, 1, v_00_u03c3s_706_);
lean_ctor_set(v___x_743_, 2, v_hyps_709_);
lean_ctor_set(v___x_743_, 3, v___x_736_);
v___x_744_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_743_);
if (v_isShared_735_ == 0)
{
lean_ctor_set_tag(v___x_734_, 1);
lean_ctor_set(v___x_734_, 0, v___x_744_);
v___x_746_ = v___x_734_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_783_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
uint8_t v___x_747_; lean_object* v___x_748_; 
v___x_747_ = 0;
v___x_748_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_710_, v___x_746_, v___x_747_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref(v___x_748_);
lean_inc_ref(v_target_711_);
lean_inc(v_fst_738_);
lean_inc_ref(v_00_u03c3s_706_);
v___x_750_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_750_, 0, v_u_708_);
lean_ctor_set(v___x_750_, 1, v_00_u03c3s_706_);
lean_ctor_set(v___x_750_, 2, v_fst_738_);
lean_ctor_set(v___x_750_, 3, v_target_711_);
v___x_751_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_750_);
v___x_752_ = lean_box(0);
v___x_753_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_751_, v___x_752_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc_n(v_a_754_, 2);
lean_dec_ref(v___x_753_);
v___x_755_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3);
v___x_756_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___closed__0);
v___x_757_ = l_Lean_Name_mkStr6(v___x_712_, v___x_713_, v___x_714_, v___x_715_, v___x_755_, v___x_756_);
v___x_758_ = l_Lean_mkConst(v___x_757_, v___x_716_);
v___x_759_ = l_Lean_mkApp8(v___x_758_, v_00_u03c3s_706_, v_hyps_709_, v___x_736_, v_fst_738_, v_target_711_, v_snd_739_, v_a_749_, v_a_754_);
v___x_760_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_717_, v___x_759_, v___y_724_, v___y_726_);
lean_dec_ref(v___x_760_);
v___x_761_ = l_Lean_Expr_mvarId_x21(v_a_754_);
lean_dec(v_a_754_);
v___x_762_ = lean_box(0);
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 1);
lean_ctor_set(v___x_741_, 1, v___x_762_);
lean_ctor_set(v___x_741_, 0, v___x_761_);
v___x_764_ = v___x_741_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_766_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_764_, v___y_720_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
return v___x_765_;
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec(v_a_749_);
lean_del_object(v___x_741_);
lean_dec(v_snd_739_);
lean_dec(v_fst_738_);
lean_dec_ref(v___x_736_);
lean_dec(v_fst_717_);
lean_dec(v___x_716_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v_target_711_);
lean_dec_ref(v_hyps_709_);
lean_dec_ref(v_00_u03c3s_706_);
v_a_767_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_753_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_753_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_del_object(v___x_741_);
lean_dec(v_snd_739_);
lean_dec(v_fst_738_);
lean_dec_ref(v___x_736_);
lean_dec(v_fst_717_);
lean_dec(v___x_716_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v_target_711_);
lean_dec_ref(v_hyps_709_);
lean_dec(v_u_708_);
lean_dec_ref(v_00_u03c3s_706_);
v_a_775_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_748_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_748_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_731_);
lean_dec(v_fst_717_);
lean_dec(v___x_716_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v___x_714_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v_target_711_);
lean_dec(v___x_710_);
lean_dec_ref(v_hyps_709_);
lean_dec(v_u_708_);
lean_dec_ref(v_00_u03c3s_706_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed(lean_object** _args){
lean_object* v___x_787_ = _args[0];
lean_object* v_00_u03c3s_788_ = _args[1];
lean_object* v___x_789_ = _args[2];
lean_object* v_u_790_ = _args[3];
lean_object* v_hyps_791_ = _args[4];
lean_object* v___x_792_ = _args[5];
lean_object* v_target_793_ = _args[6];
lean_object* v___x_794_ = _args[7];
lean_object* v___x_795_ = _args[8];
lean_object* v___x_796_ = _args[9];
lean_object* v___x_797_ = _args[10];
lean_object* v___x_798_ = _args[11];
lean_object* v_fst_799_ = _args[12];
lean_object* v_H_800_ = _args[13];
lean_object* v___y_801_ = _args[14];
lean_object* v___y_802_ = _args[15];
lean_object* v___y_803_ = _args[16];
lean_object* v___y_804_ = _args[17];
lean_object* v___y_805_ = _args[18];
lean_object* v___y_806_ = _args[19];
lean_object* v___y_807_ = _args[20];
lean_object* v___y_808_ = _args[21];
lean_object* v___y_809_ = _args[22];
_start:
{
uint8_t v___x_2876__boxed_810_; lean_object* v_res_811_; 
v___x_2876__boxed_810_ = lean_unbox(v___x_789_);
v_res_811_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0(v___x_787_, v_00_u03c3s_788_, v___x_2876__boxed_810_, v_u_790_, v_hyps_791_, v___x_792_, v_target_793_, v___x_794_, v___x_795_, v___x_796_, v___x_797_, v___x_798_, v_fst_799_, v_H_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(lean_object* v_ty_x3f_812_, lean_object* v___x_813_, lean_object* v___f_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
if (lean_obj_tag(v_ty_x3f_812_) == 1)
{
lean_object* v_val_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_843_; 
v_val_824_ = lean_ctor_get(v_ty_x3f_812_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_ty_x3f_812_);
if (v_isSharedCheck_843_ == 0)
{
v___x_826_ = v_ty_x3f_812_;
v_isShared_827_ = v_isSharedCheck_843_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_val_824_);
lean_dec(v_ty_x3f_812_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_843_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_813_);
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_813_);
v___x_829_ = v_reuseFailAlloc_842_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
uint8_t v___x_830_; lean_object* v___x_831_; 
v___x_830_ = 0;
v___x_831_ = l_Lean_Elab_Tactic_elabTerm(v_val_824_, v___x_829_, v___x_830_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_833_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref(v___x_831_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
v___x_833_ = lean_apply_10(v___f_814_, v_a_832_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, lean_box(0));
return v___x_833_;
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec_ref(v___f_814_);
v_a_834_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_831_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_831_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
}
else
{
lean_object* v___x_844_; uint8_t v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
lean_dec(v_ty_x3f_812_);
v___x_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_813_);
v___x_845_ = 0;
v___x_846_ = lean_box(0);
v___x_847_ = l_Lean_Meta_mkFreshExprMVar(v___x_844_, v___x_845_, v___x_846_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_849_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref(v___x_847_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
v___x_849_ = lean_apply_10(v___f_814_, v_a_848_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, lean_box(0));
return v___x_849_;
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec_ref(v___f_814_);
v_a_850_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_847_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_847_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed(lean_object* v_ty_x3f_858_, lean_object* v___x_859_, lean_object* v___f_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1(v_ty_x3f_858_, v___x_859_, v___f_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_870_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0(void){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = lean_mk_string_unchecked("mhave", 5, 5);
return v___x_871_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_872_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__0);
v___x_873_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_874_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1);
v___x_875_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_876_ = l_Lean_Name_mkStr4(v___x_875_, v___x_874_, v___x_873_, v___x_872_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_877_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2);
v___x_878_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_879_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0);
v___x_880_ = l_Lean_Name_mkStr3(v___x_879_, v___x_878_, v___x_877_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(lean_object* v_x_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v___x_891_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_892_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1);
lean_inc(v_x_881_);
v___x_893_ = l_Lean_Syntax_isOfKind(v_x_881_, v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; 
lean_dec(v_x_881_);
v___x_894_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_894_;
}
else
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v_ty_x3f_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___x_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_895_ = lean_unsigned_to_nat(1u);
v___x_896_ = l_Lean_Syntax_getArg(v_x_881_, v___x_895_);
v___x_943_ = lean_unsigned_to_nat(2u);
v___x_944_ = l_Lean_Syntax_getArg(v_x_881_, v___x_943_);
v___x_945_ = l_Lean_Syntax_isNone(v___x_944_);
if (v___x_945_ == 0)
{
uint8_t v___x_946_; 
lean_inc(v___x_944_);
v___x_946_ = l_Lean_Syntax_matchesNull(v___x_944_, v___x_943_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v___x_944_);
lean_dec(v___x_896_);
lean_dec(v_x_881_);
v___x_947_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_947_;
}
else
{
lean_object* v_ty_x3f_948_; lean_object* v___x_949_; 
v_ty_x3f_948_ = l_Lean_Syntax_getArg(v___x_944_, v___x_895_);
lean_dec(v___x_944_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v_ty_x3f_948_);
v_ty_x3f_898_ = v___x_949_;
v___y_899_ = v_a_882_;
v___y_900_ = v_a_883_;
v___y_901_ = v_a_884_;
v___y_902_ = v_a_885_;
v___y_903_ = v_a_886_;
v___y_904_ = v_a_887_;
v___y_905_ = v_a_888_;
v___y_906_ = v_a_889_;
goto v___jp_897_;
}
}
else
{
lean_object* v___x_950_; 
lean_dec(v___x_944_);
v___x_950_ = lean_box(0);
v_ty_x3f_898_ = v___x_950_;
v___y_899_ = v_a_882_;
v___y_900_ = v_a_883_;
v___y_901_ = v_a_884_;
v___y_902_ = v_a_885_;
v___y_903_ = v_a_886_;
v___y_904_ = v_a_887_;
v___y_905_ = v_a_888_;
v___y_906_ = v_a_889_;
goto v___jp_897_;
}
v___jp_897_:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v_snd_909_; lean_object* v_fst_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_934_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref(v___x_907_);
v_snd_909_ = lean_ctor_get(v_a_908_, 1);
v_fst_910_ = lean_ctor_get(v_a_908_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v_a_908_);
if (v_isSharedCheck_934_ == 0)
{
v___x_912_ = v_a_908_;
v_isShared_913_ = v_isSharedCheck_934_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_snd_909_);
lean_inc(v_fst_910_);
lean_dec(v_a_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_934_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v_u_914_; lean_object* v_00_u03c3s_915_; lean_object* v_hyps_916_; lean_object* v_target_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v_u_914_ = lean_ctor_get(v_snd_909_, 0);
lean_inc_n(v_u_914_, 2);
v_00_u03c3s_915_ = lean_ctor_get(v_snd_909_, 1);
lean_inc_ref(v_00_u03c3s_915_);
v_hyps_916_ = lean_ctor_get(v_snd_909_, 2);
lean_inc_ref(v_hyps_916_);
v_target_917_ = lean_ctor_get(v_snd_909_, 3);
lean_inc_ref(v_target_917_);
lean_dec(v_snd_909_);
v___x_918_ = lean_unsigned_to_nat(4u);
v___x_919_ = l_Lean_Syntax_getArg(v_x_881_, v___x_918_);
lean_dec(v_x_881_);
v___x_920_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0);
v___x_921_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_922_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2);
v___x_923_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2);
v___x_924_ = lean_box(0);
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 1);
lean_ctor_set(v___x_912_, 1, v___x_924_);
lean_ctor_set(v___x_912_, 0, v_u_914_);
v___x_926_ = v___x_912_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_u_914_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v___x_924_);
v___x_926_ = v_reuseFailAlloc_933_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_927_; lean_object* v___f_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___y_931_; lean_object* v___x_932_; 
v___x_927_ = lean_box(v___x_893_);
lean_inc(v_fst_910_);
lean_inc_ref(v___x_926_);
lean_inc_ref(v_00_u03c3s_915_);
v___f_928_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__0___boxed), 23, 13);
lean_closure_set(v___f_928_, 0, v___x_896_);
lean_closure_set(v___f_928_, 1, v_00_u03c3s_915_);
lean_closure_set(v___f_928_, 2, v___x_927_);
lean_closure_set(v___f_928_, 3, v_u_914_);
lean_closure_set(v___f_928_, 4, v_hyps_916_);
lean_closure_set(v___f_928_, 5, v___x_919_);
lean_closure_set(v___f_928_, 6, v_target_917_);
lean_closure_set(v___f_928_, 7, v___x_920_);
lean_closure_set(v___f_928_, 8, v___x_921_);
lean_closure_set(v___f_928_, 9, v___x_922_);
lean_closure_set(v___f_928_, 10, v___x_891_);
lean_closure_set(v___f_928_, 11, v___x_926_);
lean_closure_set(v___f_928_, 12, v_fst_910_);
v___x_929_ = l_Lean_mkConst(v___x_923_, v___x_926_);
v___x_930_ = l_Lean_Expr_app___override(v___x_929_, v_00_u03c3s_915_);
v___y_931_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___lam__1___boxed), 12, 3);
lean_closure_set(v___y_931_, 0, v_ty_x3f_898_);
lean_closure_set(v___y_931_, 1, v___x_930_);
lean_closure_set(v___y_931_, 2, v___f_928_);
v___x_932_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_910_, v___y_931_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
return v___x_932_;
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec(v_ty_x3f_898_);
lean_dec(v___x_896_);
lean_dec(v_x_881_);
v_a_935_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_907_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_907_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___boxed(lean_object* v_x_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMHave(v_x_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_961_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0(void){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = lean_mk_string_unchecked("elabMHave", 9, 9);
return v___x_962_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_963_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__0);
v___x_964_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1);
v___x_965_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_966_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_967_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0);
v___x_968_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_969_ = l_Lean_Name_mkStr6(v___x_968_, v___x_967_, v___x_966_, v___x_965_, v___x_964_, v___x_963_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1(){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_971_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_972_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__1);
v___x_973_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___closed__1);
v___x_974_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___boxed), 10, 0);
v___x_975_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_971_, v___x_972_, v___x_973_, v___x_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1___boxed(lean_object* v_a_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1();
return v_res_977_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0(void){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lean_mk_string_unchecked("replace", 7, 7);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(lean_object* v___x_979_, lean_object* v_u_980_, lean_object* v___x_981_, lean_object* v___x_982_, lean_object* v_00_u03c3s_983_, uint8_t v___x_984_, lean_object* v_hyps_985_, lean_object* v___x_986_, lean_object* v_target_987_, lean_object* v___x_988_, lean_object* v_fst_989_, lean_object* v_ty_x3f_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
if (lean_obj_tag(v___x_979_) == 1)
{
lean_object* v_val_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1116_; 
v_val_1000_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1002_ = v___x_979_;
v_isShared_1003_ = v_isSharedCheck_1116_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_val_1000_);
lean_dec(v___x_979_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1116_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_focusHyp_1004_; lean_object* v_restHyps_1005_; lean_object* v_proof_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1115_; 
v_focusHyp_1004_ = lean_ctor_get(v_val_1000_, 0);
v_restHyps_1005_ = lean_ctor_get(v_val_1000_, 1);
v_proof_1006_ = lean_ctor_get(v_val_1000_, 2);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_val_1000_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1008_ = v_val_1000_;
v_isShared_1009_ = v_isSharedCheck_1115_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_proof_1006_);
lean_inc(v_restHyps_1005_);
lean_inc(v_focusHyp_1004_);
lean_dec(v_val_1000_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1115_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v_H_x27_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1010_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__0);
v___x_1011_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_1012_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__2);
v___x_1013_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMHave___closed__2);
v___x_1014_ = lean_box(0);
lean_inc(v_u_980_);
v___x_1015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1015_, 0, v_u_980_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
lean_inc_ref(v___x_1015_);
v___x_1081_ = l_Lean_mkConst(v___x_1013_, v___x_1015_);
lean_inc_ref(v_00_u03c3s_983_);
v___x_1082_ = l_Lean_Expr_app___override(v___x_1081_, v_00_u03c3s_983_);
if (lean_obj_tag(v_ty_x3f_990_) == 1)
{
lean_object* v_val_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1101_; 
v_val_1083_ = lean_ctor_get(v_ty_x3f_990_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_ty_x3f_990_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1085_ = v_ty_x3f_990_;
v_isShared_1086_ = v_isSharedCheck_1101_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_val_1083_);
lean_dec(v_ty_x3f_990_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1101_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1082_);
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1082_);
v___x_1088_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
uint8_t v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = 0;
v___x_1090_ = l_Lean_Elab_Tactic_elabTerm(v_val_1083_, v___x_1088_, v___x_1089_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref(v___x_1090_);
v_H_x27_1017_ = v_a_1091_;
v___y_1018_ = v___y_991_;
v___y_1019_ = v___y_992_;
v___y_1020_ = v___y_993_;
v___y_1021_ = v___y_994_;
v___y_1022_ = v___y_995_;
v___y_1023_ = v___y_996_;
v___y_1024_ = v___y_997_;
v___y_1025_ = v___y_998_;
goto v___jp_1016_;
}
else
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
lean_dec_ref(v___x_1015_);
lean_del_object(v___x_1008_);
lean_dec_ref(v_proof_1006_);
lean_dec_ref(v_restHyps_1005_);
lean_dec_ref(v_focusHyp_1004_);
lean_del_object(v___x_1002_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec(v___x_986_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
lean_dec(v___x_982_);
lean_dec(v___x_981_);
lean_dec(v_u_980_);
v_a_1092_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1094_ = v___x_1090_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1090_);
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
else
{
lean_object* v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec(v_ty_x3f_990_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1082_);
v___x_1103_ = 0;
v___x_1104_ = lean_box(0);
v___x_1105_ = l_Lean_Meta_mkFreshExprMVar(v___x_1102_, v___x_1103_, v___x_1104_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref(v___x_1105_);
v_H_x27_1017_ = v_a_1106_;
v___y_1018_ = v___y_991_;
v___y_1019_ = v___y_992_;
v___y_1020_ = v___y_993_;
v___y_1021_ = v___y_994_;
v___y_1022_ = v___y_995_;
v___y_1023_ = v___y_996_;
v___y_1024_ = v___y_997_;
v___y_1025_ = v___y_998_;
goto v___jp_1016_;
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref(v___x_1015_);
lean_del_object(v___x_1008_);
lean_dec_ref(v_proof_1006_);
lean_dec_ref(v_restHyps_1005_);
lean_dec_ref(v_focusHyp_1004_);
lean_del_object(v___x_1002_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec(v___x_986_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
lean_dec(v___x_982_);
lean_dec(v___x_981_);
lean_dec(v_u_980_);
v_a_1107_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1105_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1105_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
v___jp_1016_:
{
lean_object* v___x_1026_; lean_object* v_a_1027_; lean_object* v___x_1029_; 
v___x_1026_ = l_Lean_mkFreshId___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__1___redArg(v___y_1025_);
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref(v___x_1026_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 2, v_H_x27_1017_);
lean_ctor_set(v___x_1008_, 1, v_a_1027_);
lean_ctor_set(v___x_1008_, 0, v___x_981_);
v___x_1029_ = v___x_1008_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_981_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_a_1027_);
lean_ctor_set(v_reuseFailAlloc_1080_, 2, v_H_x27_1017_);
v___x_1029_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1030_; 
lean_inc_ref(v___x_1029_);
lean_inc_ref(v_00_u03c3s_983_);
v___x_1030_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v___x_982_, v_00_u03c3s_983_, v___x_1029_, v___x_984_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_dec_ref(v___x_1030_);
v___x_1031_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1029_);
lean_inc_ref(v___x_1031_);
lean_inc_ref(v_hyps_985_);
lean_inc_ref(v_00_u03c3s_983_);
lean_inc(v_u_980_);
v___x_1032_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1032_, 0, v_u_980_);
lean_ctor_set(v___x_1032_, 1, v_00_u03c3s_983_);
lean_ctor_set(v___x_1032_, 2, v_hyps_985_);
lean_ctor_set(v___x_1032_, 3, v___x_1031_);
v___x_1033_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_1032_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1033_);
v___x_1035_ = v___x_1002_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
uint8_t v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = 0;
v___x_1037_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_986_, v___x_1035_, v___x_1036_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; lean_object* v_fst_1040_; lean_object* v_snd_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1070_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref(v___x_1037_);
lean_inc_ref(v___x_1031_);
lean_inc_ref(v_restHyps_1005_);
lean_inc_ref(v_00_u03c3s_983_);
lean_inc(v_u_980_);
v___x_1039_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_980_, v_00_u03c3s_983_, v_restHyps_1005_, v___x_1031_);
v_fst_1040_ = lean_ctor_get(v___x_1039_, 0);
v_snd_1041_ = lean_ctor_get(v___x_1039_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1043_ = v___x_1039_;
v_isShared_1044_ = v_isSharedCheck_1070_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_snd_1041_);
lean_inc(v_fst_1040_);
lean_dec(v___x_1039_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1070_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_inc_ref(v_target_987_);
lean_inc(v_fst_1040_);
lean_inc_ref(v_00_u03c3s_983_);
v___x_1045_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1045_, 0, v_u_980_);
lean_ctor_set(v___x_1045_, 1, v_00_u03c3s_983_);
lean_ctor_set(v___x_1045_, 2, v_fst_1040_);
lean_ctor_set(v___x_1045_, 3, v_target_987_);
v___x_1046_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_1045_);
v___x_1047_ = lean_box(0);
v___x_1048_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1046_, v___x_1047_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc_n(v_a_1049_, 2);
lean_dec_ref(v___x_1048_);
v___x_1050_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__3);
v___x_1051_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___closed__0);
v___x_1052_ = l_Lean_Name_mkStr6(v___x_1010_, v___x_1011_, v___x_1012_, v___x_988_, v___x_1050_, v___x_1051_);
v___x_1053_ = l_Lean_mkConst(v___x_1052_, v___x_1015_);
v___x_1054_ = l_Lean_mkApp10(v___x_1053_, v_00_u03c3s_983_, v_restHyps_1005_, v_focusHyp_1004_, v___x_1031_, v_hyps_985_, v_fst_1040_, v_target_987_, v_proof_1006_, v_snd_1041_, v_a_1038_);
v___x_1055_ = l_Lean_Expr_app___override(v___x_1054_, v_a_1049_);
v___x_1056_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__2___redArg(v_fst_989_, v___x_1055_, v___y_1023_, v___y_1025_);
lean_dec_ref(v___x_1056_);
v___x_1057_ = l_Lean_Expr_mvarId_x21(v_a_1049_);
lean_dec(v_a_1049_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set_tag(v___x_1043_, 1);
lean_ctor_set(v___x_1043_, 1, v___x_1014_);
lean_ctor_set(v___x_1043_, 0, v___x_1057_);
v___x_1059_ = v___x_1043_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___x_1014_);
v___x_1059_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1059_, v___y_1019_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
return v___x_1060_;
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_del_object(v___x_1043_);
lean_dec(v_snd_1041_);
lean_dec(v_fst_1040_);
lean_dec(v_a_1038_);
lean_dec_ref(v___x_1031_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v_proof_1006_);
lean_dec_ref(v_restHyps_1005_);
lean_dec_ref(v_focusHyp_1004_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
v_a_1062_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1048_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1048_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v___x_1031_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v_proof_1006_);
lean_dec_ref(v_restHyps_1005_);
lean_dec_ref(v_focusHyp_1004_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
lean_dec(v_u_980_);
v_a_1071_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1037_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1037_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1029_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v_proof_1006_);
lean_dec_ref(v_restHyps_1005_);
lean_dec_ref(v_focusHyp_1004_);
lean_del_object(v___x_1002_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec(v___x_986_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
lean_dec(v_u_980_);
return v___x_1030_;
}
}
}
}
}
}
else
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_dec(v_ty_x3f_990_);
lean_dec(v_fst_989_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v_target_987_);
lean_dec(v___x_986_);
lean_dec_ref(v_hyps_985_);
lean_dec_ref(v_00_u03c3s_983_);
lean_dec(v___x_981_);
lean_dec(v_u_980_);
lean_dec(v___x_979_);
v___x_1117_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__6);
v___x_1118_ = l_Lean_MessageData_ofSyntax(v___x_982_);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__8);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__3___redArg(v___x_1121_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
return v___x_1122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed(lean_object** _args){
lean_object* v___x_1123_ = _args[0];
lean_object* v_u_1124_ = _args[1];
lean_object* v___x_1125_ = _args[2];
lean_object* v___x_1126_ = _args[3];
lean_object* v_00_u03c3s_1127_ = _args[4];
lean_object* v___x_1128_ = _args[5];
lean_object* v_hyps_1129_ = _args[6];
lean_object* v___x_1130_ = _args[7];
lean_object* v_target_1131_ = _args[8];
lean_object* v___x_1132_ = _args[9];
lean_object* v_fst_1133_ = _args[10];
lean_object* v_ty_x3f_1134_ = _args[11];
lean_object* v___y_1135_ = _args[12];
lean_object* v___y_1136_ = _args[13];
lean_object* v___y_1137_ = _args[14];
lean_object* v___y_1138_ = _args[15];
lean_object* v___y_1139_ = _args[16];
lean_object* v___y_1140_ = _args[17];
lean_object* v___y_1141_ = _args[18];
lean_object* v___y_1142_ = _args[19];
lean_object* v___y_1143_ = _args[20];
_start:
{
uint8_t v___x_3615__boxed_1144_; lean_object* v_res_1145_; 
v___x_3615__boxed_1144_ = lean_unbox(v___x_1128_);
v_res_1145_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0(v___x_1123_, v_u_1124_, v___x_1125_, v___x_1126_, v_00_u03c3s_1127_, v___x_3615__boxed_1144_, v_hyps_1129_, v___x_1130_, v_target_1131_, v___x_1132_, v_fst_1133_, v_ty_x3f_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1145_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0(void){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_mk_string_unchecked("mreplace", 8, 8);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1147_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__0);
v___x_1148_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_1149_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__1);
v___x_1150_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_1151_ = l_Lean_Name_mkStr4(v___x_1150_, v___x_1149_, v___x_1148_, v___x_1147_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(lean_object* v_x_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1162_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_1163_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1);
lean_inc(v_x_1152_);
v___x_1164_ = l_Lean_Syntax_isOfKind(v_x_1152_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; 
lean_dec(v_x_1152_);
v___x_1165_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1165_;
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v_ty_x3f_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = l_Lean_Syntax_getArg(v_x_1152_, v___x_1166_);
v___x_1201_ = lean_unsigned_to_nat(2u);
v___x_1202_ = l_Lean_Syntax_getArg(v_x_1152_, v___x_1201_);
v___x_1203_ = l_Lean_Syntax_isNone(v___x_1202_);
if (v___x_1203_ == 0)
{
uint8_t v___x_1204_; 
lean_inc(v___x_1202_);
v___x_1204_ = l_Lean_Syntax_matchesNull(v___x_1202_, v___x_1201_);
if (v___x_1204_ == 0)
{
lean_object* v___x_1205_; 
lean_dec(v___x_1202_);
lean_dec(v___x_1167_);
lean_dec(v_x_1152_);
v___x_1205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__0___redArg();
return v___x_1205_;
}
else
{
lean_object* v_ty_x3f_1206_; lean_object* v___x_1207_; 
v_ty_x3f_1206_ = l_Lean_Syntax_getArg(v___x_1202_, v___x_1166_);
lean_dec(v___x_1202_);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_ty_x3f_1206_);
v_ty_x3f_1169_ = v___x_1207_;
v___y_1170_ = v_a_1153_;
v___y_1171_ = v_a_1154_;
v___y_1172_ = v_a_1155_;
v___y_1173_ = v_a_1156_;
v___y_1174_ = v_a_1157_;
v___y_1175_ = v_a_1158_;
v___y_1176_ = v_a_1159_;
v___y_1177_ = v_a_1160_;
goto v___jp_1168_;
}
}
else
{
lean_object* v___x_1208_; 
lean_dec(v___x_1202_);
v___x_1208_ = lean_box(0);
v_ty_x3f_1169_ = v___x_1208_;
v___y_1170_ = v_a_1153_;
v___y_1171_ = v_a_1154_;
v___y_1172_ = v_a_1155_;
v___y_1173_ = v_a_1156_;
v___y_1174_ = v_a_1157_;
v___y_1175_ = v_a_1158_;
v___y_1176_ = v_a_1159_;
v___y_1177_ = v_a_1160_;
goto v___jp_1168_;
}
v___jp_1168_:
{
lean_object* v___x_1178_; 
v___x_1178_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v_snd_1180_; lean_object* v_fst_1181_; lean_object* v_u_1182_; lean_object* v_00_u03c3s_1183_; lean_object* v_hyps_1184_; lean_object* v_target_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___y_1191_; lean_object* v___x_1192_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref(v___x_1178_);
v_snd_1180_ = lean_ctor_get(v_a_1179_, 1);
lean_inc(v_snd_1180_);
v_fst_1181_ = lean_ctor_get(v_a_1179_, 0);
lean_inc_n(v_fst_1181_, 2);
lean_dec(v_a_1179_);
v_u_1182_ = lean_ctor_get(v_snd_1180_, 0);
lean_inc(v_u_1182_);
v_00_u03c3s_1183_ = lean_ctor_get(v_snd_1180_, 1);
lean_inc_ref(v_00_u03c3s_1183_);
v_hyps_1184_ = lean_ctor_get(v_snd_1180_, 2);
lean_inc_ref(v_hyps_1184_);
v_target_1185_ = lean_ctor_get(v_snd_1180_, 3);
lean_inc_ref(v_target_1185_);
v___x_1186_ = lean_unsigned_to_nat(4u);
v___x_1187_ = l_Lean_Syntax_getArg(v_x_1152_, v___x_1186_);
lean_dec(v_x_1152_);
v___x_1188_ = l_Lean_Syntax_getId(v___x_1167_);
v___x_1189_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHyp(v_snd_1180_, v___x_1188_);
v___x_1190_ = lean_box(v___x_1164_);
v___y_1191_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___lam__0___boxed), 21, 12);
lean_closure_set(v___y_1191_, 0, v___x_1189_);
lean_closure_set(v___y_1191_, 1, v_u_1182_);
lean_closure_set(v___y_1191_, 2, v___x_1188_);
lean_closure_set(v___y_1191_, 3, v___x_1167_);
lean_closure_set(v___y_1191_, 4, v_00_u03c3s_1183_);
lean_closure_set(v___y_1191_, 5, v___x_1190_);
lean_closure_set(v___y_1191_, 6, v_hyps_1184_);
lean_closure_set(v___y_1191_, 7, v___x_1187_);
lean_closure_set(v___y_1191_, 8, v_target_1185_);
lean_closure_set(v___y_1191_, 9, v___x_1162_);
lean_closure_set(v___y_1191_, 10, v_fst_1181_);
lean_closure_set(v___y_1191_, 11, v_ty_x3f_1169_);
v___x_1192_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMDup_spec__4___redArg(v_fst_1181_, v___y_1191_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
return v___x_1192_;
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_ty_x3f_1169_);
lean_dec(v___x_1167_);
lean_dec(v_x_1152_);
v_a_1193_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1178_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1178_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___boxed(lean_object* v_x_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace(v_x_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
lean_dec(v_a_1213_);
lean_dec_ref(v_a_1212_);
lean_dec(v_a_1211_);
lean_dec_ref(v_a_1210_);
return v_res_1219_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0(void){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_mk_string_unchecked("elabMReplace", 12, 12);
return v___x_1220_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1221_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__0);
v___x_1222_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__1);
v___x_1223_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___lam__0___closed__1);
v___x_1224_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__2);
v___x_1225_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1___closed__0);
v___x_1226_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMDup___closed__0);
v___x_1227_ = l_Lean_Name_mkStr6(v___x_1226_, v___x_1225_, v___x_1224_, v___x_1223_, v___x_1222_, v___x_1221_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1(){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1229_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1230_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___closed__1);
v___x_1231_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___closed__1);
v___x_1232_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMReplace___boxed), 10, 0);
v___x_1233_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1229_, v___x_1230_, v___x_1231_, v___x_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1___boxed(lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1();
return v_res_1235_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMDup___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMDup__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMHave___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Have_0__Lean_Elab_Tactic_Do_ProofMode_elabMReplace___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMReplace__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Have(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Have(builtin);
}
#ifdef __cplusplus
}
#endif
