// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Pure
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.MGoal import Lean.Elab.Tactic.Meta import Lean.Elab.Tactic.Do.ProofMode.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus import Lean.Meta.Tactic.Rfl
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__0;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__1;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__2;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__3;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__4;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__5;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__6;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__7;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__8;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__9;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__10;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__11;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__12;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__13;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__14;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object* v___y_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v_lctx_6_; lean_object* v___x_7_; 
v_lctx_6_ = lean_ctor_get(v___y_1_, 2);
lean_inc_ref(v_lctx_6_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_lctx_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(v___y_8_, v___y_9_, v___y_10_, v___y_11_);
lean_dec(v___y_11_);
lean_dec_ref(v___y_10_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object* v_name_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_14_, v___y_17_, v___y_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object* v_name_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(v_name_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
return v_res_27_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("Pure", 4, 4);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_mk_string_unchecked("thm", 3, 3);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object* v_fst_30_, lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v___x_35_, lean_object* v_00_u03c3s_36_, lean_object* v_hyp_37_, lean_object* v_00_u03c6_38_, lean_object* v_inst_39_, lean_object* v_u_40_, lean_object* v_fst_41_, lean_object* v_toPure_42_, lean_object* v_prf_43_){
_start:
{
lean_object* v_u_44_; lean_object* v_00_u03c3s_45_; lean_object* v_hyps_46_; lean_object* v_target_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_63_; 
v_u_44_ = lean_ctor_get(v_fst_30_, 0);
v_00_u03c3s_45_ = lean_ctor_get(v_fst_30_, 1);
v_hyps_46_ = lean_ctor_get(v_fst_30_, 2);
v_target_47_ = lean_ctor_get(v_fst_30_, 3);
v_isSharedCheck_63_ = !lean_is_exclusive(v_fst_30_);
if (v_isSharedCheck_63_ == 0)
{
v___x_49_ = v_fst_30_;
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_target_47_);
lean_inc(v_hyps_46_);
lean_inc(v_00_u03c3s_45_);
lean_inc(v_u_44_);
lean_dec(v_fst_30_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v_prf_55_; lean_object* v___x_56_; lean_object* v_goal_58_; 
v___x_51_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0);
v___x_52_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1);
v___x_53_ = l_Lean_Name_mkStr6(v___x_31_, v___x_32_, v___x_33_, v___x_34_, v___x_51_, v___x_52_);
v___x_54_ = l_Lean_mkConst(v___x_53_, v___x_35_);
lean_inc_ref(v_target_47_);
lean_inc_ref(v_hyp_37_);
lean_inc_ref(v_hyps_46_);
lean_inc_ref(v_00_u03c3s_36_);
v_prf_55_ = l_Lean_mkApp7(v___x_54_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_, v_target_47_, v_00_u03c6_38_, v_inst_39_, v_prf_43_);
v___x_56_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_40_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_56_);
v_goal_58_ = v___x_49_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_u_44_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v_00_u03c3s_45_);
lean_ctor_set(v_reuseFailAlloc_62_, 2, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_62_, 3, v_target_47_);
v_goal_58_ = v_reuseFailAlloc_62_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v_goal_58_);
lean_ctor_set(v___x_59_, 1, v_prf_55_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_fst_41_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_60_);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object* v___x_64_, lean_object* v___x_65_, lean_object* v___x_66_, lean_object* v___x_67_, lean_object* v___x_68_, lean_object* v_00_u03c3s_69_, lean_object* v_hyp_70_, lean_object* v_00_u03c6_71_, lean_object* v_inst_72_, lean_object* v_u_73_, lean_object* v_toPure_74_, lean_object* v_h_75_, uint8_t v___x_76_, lean_object* v_inst_77_, lean_object* v_toBind_78_, lean_object* v_____x_79_){
_start:
{
lean_object* v_snd_80_; lean_object* v_fst_81_; lean_object* v_fst_82_; lean_object* v_snd_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_snd_80_ = lean_ctor_get(v_____x_79_, 1);
lean_inc(v_snd_80_);
v_fst_81_ = lean_ctor_get(v_____x_79_, 0);
lean_inc(v_fst_81_);
lean_dec_ref(v_____x_79_);
v_fst_82_ = lean_ctor_get(v_snd_80_, 0);
lean_inc(v_fst_82_);
v_snd_83_ = lean_ctor_get(v_snd_80_, 1);
lean_inc(v_snd_83_);
lean_dec(v_snd_80_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2), 14, 13);
lean_closure_set(v___f_84_, 0, v_fst_82_);
lean_closure_set(v___f_84_, 1, v___x_64_);
lean_closure_set(v___f_84_, 2, v___x_65_);
lean_closure_set(v___f_84_, 3, v___x_66_);
lean_closure_set(v___f_84_, 4, v___x_67_);
lean_closure_set(v___f_84_, 5, v___x_68_);
lean_closure_set(v___f_84_, 6, v_00_u03c3s_69_);
lean_closure_set(v___f_84_, 7, v_hyp_70_);
lean_closure_set(v___f_84_, 8, v_00_u03c6_71_);
lean_closure_set(v___f_84_, 9, v_inst_72_);
lean_closure_set(v___f_84_, 10, v_u_73_);
lean_closure_set(v___f_84_, 11, v_fst_81_);
lean_closure_set(v___f_84_, 12, v_toPure_74_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_array_push(v___x_86_, v_h_75_);
v___x_88_ = 1;
v___x_89_ = 1;
v___x_90_ = lean_box(v___x_76_);
v___x_91_ = lean_box(v___x_88_);
v___x_92_ = lean_box(v___x_76_);
v___x_93_ = lean_box(v___x_88_);
v___x_94_ = lean_box(v___x_89_);
v___x_95_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_95_, 0, v___x_87_);
lean_closure_set(v___x_95_, 1, v_snd_83_);
lean_closure_set(v___x_95_, 2, v___x_90_);
lean_closure_set(v___x_95_, 3, v___x_91_);
lean_closure_set(v___x_95_, 4, v___x_92_);
lean_closure_set(v___x_95_, 5, v___x_93_);
lean_closure_set(v___x_95_, 6, v___x_94_);
v___x_96_ = lean_apply_2(v_inst_77_, lean_box(0), v___x_95_);
v___x_97_ = lean_apply_4(v_toBind_78_, lean_box(0), lean_box(0), v___x_96_, v___f_84_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object* v___x_98_, lean_object* v___x_99_, lean_object* v___x_100_, lean_object* v___x_101_, lean_object* v___x_102_, lean_object* v_00_u03c3s_103_, lean_object* v_hyp_104_, lean_object* v_00_u03c6_105_, lean_object* v_inst_106_, lean_object* v_u_107_, lean_object* v_toPure_108_, lean_object* v_h_109_, lean_object* v___x_110_, lean_object* v_inst_111_, lean_object* v_toBind_112_, lean_object* v_____x_113_){
_start:
{
uint8_t v___x_486__boxed_114_; lean_object* v_res_115_; 
v___x_486__boxed_114_ = lean_unbox(v___x_110_);
v_res_115_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(v___x_98_, v___x_99_, v___x_100_, v___x_101_, v___x_102_, v_00_u03c3s_103_, v_hyp_104_, v_00_u03c6_105_, v_inst_106_, v_u_107_, v_toPure_108_, v_h_109_, v___x_486__boxed_114_, v_inst_111_, v_toBind_112_, v_____x_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object* v_k_116_, lean_object* v_00_u03c6_117_, lean_object* v_h_118_, lean_object* v_toBind_119_, lean_object* v___f_120_, lean_object* v_____r_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_apply_2(v_k_116_, v_00_u03c6_117_, v_h_118_);
v___x_123_ = lean_apply_4(v_toBind_119_, lean_box(0), lean_box(0), v___x_122_, v___f_120_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object* v_00_u03c6_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v___x_127_, lean_object* v___x_128_, lean_object* v___x_129_, lean_object* v_00_u03c3s_130_, lean_object* v_hyp_131_, lean_object* v_inst_132_, lean_object* v_u_133_, lean_object* v_toPure_134_, lean_object* v_h_135_, lean_object* v_inst_136_, lean_object* v_toBind_137_, lean_object* v_k_138_, lean_object* v_snd_139_, lean_object* v_____do__lift_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_inc_ref_n(v_00_u03c6_124_, 2);
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v_00_u03c6_124_);
v___x_142_ = 0;
v___x_143_ = lean_box(v___x_142_);
lean_inc_n(v_toBind_137_, 2);
lean_inc(v_inst_136_);
lean_inc_ref_n(v_h_135_, 2);
v___f_144_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed), 16, 15);
lean_closure_set(v___f_144_, 0, v___x_125_);
lean_closure_set(v___f_144_, 1, v___x_126_);
lean_closure_set(v___f_144_, 2, v___x_127_);
lean_closure_set(v___f_144_, 3, v___x_128_);
lean_closure_set(v___f_144_, 4, v___x_129_);
lean_closure_set(v___f_144_, 5, v_00_u03c3s_130_);
lean_closure_set(v___f_144_, 6, v_hyp_131_);
lean_closure_set(v___f_144_, 7, v_00_u03c6_124_);
lean_closure_set(v___f_144_, 8, v_inst_132_);
lean_closure_set(v___f_144_, 9, v_u_133_);
lean_closure_set(v___f_144_, 10, v_toPure_134_);
lean_closure_set(v___f_144_, 11, v_h_135_);
lean_closure_set(v___f_144_, 12, v___x_143_);
lean_closure_set(v___f_144_, 13, v_inst_136_);
lean_closure_set(v___f_144_, 14, v_toBind_137_);
v___f_145_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4), 6, 5);
lean_closure_set(v___f_145_, 0, v_k_138_);
lean_closure_set(v___f_145_, 1, v_00_u03c6_124_);
lean_closure_set(v___f_145_, 2, v_h_135_);
lean_closure_set(v___f_145_, 3, v_toBind_137_);
lean_closure_set(v___f_145_, 4, v___f_144_);
v___x_146_ = lean_box(v___x_142_);
v___x_147_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed), 10, 5);
lean_closure_set(v___x_147_, 0, v_snd_139_);
lean_closure_set(v___x_147_, 1, v_____do__lift_140_);
lean_closure_set(v___x_147_, 2, v_h_135_);
lean_closure_set(v___x_147_, 3, v___x_141_);
lean_closure_set(v___x_147_, 4, v___x_146_);
v___x_148_ = lean_apply_2(v_inst_136_, lean_box(0), v___x_147_);
v___x_149_ = lean_apply_4(v_toBind_137_, lean_box(0), lean_box(0), v___x_148_, v___f_145_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_00_u03c6_150_ = _args[0];
lean_object* v___x_151_ = _args[1];
lean_object* v___x_152_ = _args[2];
lean_object* v___x_153_ = _args[3];
lean_object* v___x_154_ = _args[4];
lean_object* v___x_155_ = _args[5];
lean_object* v_00_u03c3s_156_ = _args[6];
lean_object* v_hyp_157_ = _args[7];
lean_object* v_inst_158_ = _args[8];
lean_object* v_u_159_ = _args[9];
lean_object* v_toPure_160_ = _args[10];
lean_object* v_h_161_ = _args[11];
lean_object* v_inst_162_ = _args[12];
lean_object* v_toBind_163_ = _args[13];
lean_object* v_k_164_ = _args[14];
lean_object* v_snd_165_ = _args[15];
lean_object* v_____do__lift_166_ = _args[16];
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(v_00_u03c6_150_, v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_155_, v_00_u03c3s_156_, v_hyp_157_, v_inst_158_, v_u_159_, v_toPure_160_, v_h_161_, v_inst_162_, v_toBind_163_, v_k_164_, v_snd_165_, v_____do__lift_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object* v_00_u03c6_168_, lean_object* v___x_169_, lean_object* v___x_170_, lean_object* v___x_171_, lean_object* v___x_172_, lean_object* v___x_173_, lean_object* v_00_u03c3s_174_, lean_object* v_hyp_175_, lean_object* v_inst_176_, lean_object* v_u_177_, lean_object* v_toPure_178_, lean_object* v_inst_179_, lean_object* v_toBind_180_, lean_object* v_k_181_, lean_object* v_snd_182_, lean_object* v___f_183_, lean_object* v_h_184_){
_start:
{
lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v_toBind_180_);
lean_inc(v_inst_179_);
v___f_185_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_185_, 0, v_00_u03c6_168_);
lean_closure_set(v___f_185_, 1, v___x_169_);
lean_closure_set(v___f_185_, 2, v___x_170_);
lean_closure_set(v___f_185_, 3, v___x_171_);
lean_closure_set(v___f_185_, 4, v___x_172_);
lean_closure_set(v___f_185_, 5, v___x_173_);
lean_closure_set(v___f_185_, 6, v_00_u03c3s_174_);
lean_closure_set(v___f_185_, 7, v_hyp_175_);
lean_closure_set(v___f_185_, 8, v_inst_176_);
lean_closure_set(v___f_185_, 9, v_u_177_);
lean_closure_set(v___f_185_, 10, v_toPure_178_);
lean_closure_set(v___f_185_, 11, v_h_184_);
lean_closure_set(v___f_185_, 12, v_inst_179_);
lean_closure_set(v___f_185_, 13, v_toBind_180_);
lean_closure_set(v___f_185_, 14, v_k_181_);
lean_closure_set(v___f_185_, 15, v_snd_182_);
v___x_186_ = lean_apply_2(v_inst_179_, lean_box(0), v___f_183_);
v___x_187_ = lean_apply_4(v_toBind_180_, lean_box(0), lean_box(0), v___x_186_, v___f_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_00_u03c6_188_ = _args[0];
lean_object* v___x_189_ = _args[1];
lean_object* v___x_190_ = _args[2];
lean_object* v___x_191_ = _args[3];
lean_object* v___x_192_ = _args[4];
lean_object* v___x_193_ = _args[5];
lean_object* v_00_u03c3s_194_ = _args[6];
lean_object* v_hyp_195_ = _args[7];
lean_object* v_inst_196_ = _args[8];
lean_object* v_u_197_ = _args[9];
lean_object* v_toPure_198_ = _args[10];
lean_object* v_inst_199_ = _args[11];
lean_object* v_toBind_200_ = _args[12];
lean_object* v_k_201_ = _args[13];
lean_object* v_snd_202_ = _args[14];
lean_object* v___f_203_ = _args[15];
lean_object* v_h_204_ = _args[16];
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(v_00_u03c6_188_, v___x_189_, v___x_190_, v___x_191_, v___x_192_, v___x_193_, v_00_u03c3s_194_, v_hyp_195_, v_inst_196_, v_u_197_, v_toPure_198_, v_inst_199_, v_toBind_200_, v_k_201_, v_snd_202_, v___f_203_, v_h_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object* v_00_u03c6_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v___x_211_, lean_object* v_00_u03c3s_212_, lean_object* v_hyp_213_, lean_object* v_inst_214_, lean_object* v_u_215_, lean_object* v_toPure_216_, lean_object* v_inst_217_, lean_object* v_toBind_218_, lean_object* v_k_219_, lean_object* v___f_220_, lean_object* v_inst_221_, lean_object* v_inst_222_, lean_object* v_____x_223_){
_start:
{
lean_object* v_fst_224_; lean_object* v_snd_225_; lean_object* v___f_226_; lean_object* v___x_227_; 
v_fst_224_ = lean_ctor_get(v_____x_223_, 0);
lean_inc(v_fst_224_);
v_snd_225_ = lean_ctor_get(v_____x_223_, 1);
lean_inc(v_snd_225_);
lean_dec_ref(v_____x_223_);
lean_inc_ref(v_00_u03c6_206_);
v___f_226_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_226_, 0, v_00_u03c6_206_);
lean_closure_set(v___f_226_, 1, v___x_207_);
lean_closure_set(v___f_226_, 2, v___x_208_);
lean_closure_set(v___f_226_, 3, v___x_209_);
lean_closure_set(v___f_226_, 4, v___x_210_);
lean_closure_set(v___f_226_, 5, v___x_211_);
lean_closure_set(v___f_226_, 6, v_00_u03c3s_212_);
lean_closure_set(v___f_226_, 7, v_hyp_213_);
lean_closure_set(v___f_226_, 8, v_inst_214_);
lean_closure_set(v___f_226_, 9, v_u_215_);
lean_closure_set(v___f_226_, 10, v_toPure_216_);
lean_closure_set(v___f_226_, 11, v_inst_217_);
lean_closure_set(v___f_226_, 12, v_toBind_218_);
lean_closure_set(v___f_226_, 13, v_k_219_);
lean_closure_set(v___f_226_, 14, v_snd_225_);
lean_closure_set(v___f_226_, 15, v___f_220_);
v___x_227_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_221_, v_inst_222_, v_fst_224_, v_00_u03c6_206_, v___f_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_00_u03c6_228_ = _args[0];
lean_object* v___x_229_ = _args[1];
lean_object* v___x_230_ = _args[2];
lean_object* v___x_231_ = _args[3];
lean_object* v___x_232_ = _args[4];
lean_object* v___x_233_ = _args[5];
lean_object* v_00_u03c3s_234_ = _args[6];
lean_object* v_hyp_235_ = _args[7];
lean_object* v_inst_236_ = _args[8];
lean_object* v_u_237_ = _args[9];
lean_object* v_toPure_238_ = _args[10];
lean_object* v_inst_239_ = _args[11];
lean_object* v_toBind_240_ = _args[12];
lean_object* v_k_241_ = _args[13];
lean_object* v___f_242_ = _args[14];
lean_object* v_inst_243_ = _args[15];
lean_object* v_inst_244_ = _args[16];
lean_object* v_____x_245_ = _args[17];
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(v_00_u03c6_228_, v___x_229_, v___x_230_, v___x_231_, v___x_232_, v___x_233_, v_00_u03c3s_234_, v_hyp_235_, v_inst_236_, v_u_237_, v_toPure_238_, v_inst_239_, v_toBind_240_, v_k_241_, v___f_242_, v_inst_243_, v_inst_244_, v_____x_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object* v_00_u03c6_247_, lean_object* v___x_248_, lean_object* v___x_249_, lean_object* v___x_250_, lean_object* v___x_251_, lean_object* v___x_252_, lean_object* v_00_u03c3s_253_, lean_object* v_hyp_254_, lean_object* v_u_255_, lean_object* v_toPure_256_, lean_object* v_inst_257_, lean_object* v_toBind_258_, lean_object* v_k_259_, lean_object* v___f_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v___f_263_, lean_object* v_inst_264_){
_start:
{
lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
lean_inc(v_toBind_258_);
lean_inc(v_inst_257_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_265_, 0, v_00_u03c6_247_);
lean_closure_set(v___f_265_, 1, v___x_248_);
lean_closure_set(v___f_265_, 2, v___x_249_);
lean_closure_set(v___f_265_, 3, v___x_250_);
lean_closure_set(v___f_265_, 4, v___x_251_);
lean_closure_set(v___f_265_, 5, v___x_252_);
lean_closure_set(v___f_265_, 6, v_00_u03c3s_253_);
lean_closure_set(v___f_265_, 7, v_hyp_254_);
lean_closure_set(v___f_265_, 8, v_inst_264_);
lean_closure_set(v___f_265_, 9, v_u_255_);
lean_closure_set(v___f_265_, 10, v_toPure_256_);
lean_closure_set(v___f_265_, 11, v_inst_257_);
lean_closure_set(v___f_265_, 12, v_toBind_258_);
lean_closure_set(v___f_265_, 13, v_k_259_);
lean_closure_set(v___f_265_, 14, v___f_260_);
lean_closure_set(v___f_265_, 15, v_inst_261_);
lean_closure_set(v___f_265_, 16, v_inst_262_);
v___x_266_ = lean_apply_2(v_inst_257_, lean_box(0), v___f_263_);
v___x_267_ = lean_apply_4(v_toBind_258_, lean_box(0), lean_box(0), v___x_266_, v___f_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_00_u03c6_268_ = _args[0];
lean_object* v___x_269_ = _args[1];
lean_object* v___x_270_ = _args[2];
lean_object* v___x_271_ = _args[3];
lean_object* v___x_272_ = _args[4];
lean_object* v___x_273_ = _args[5];
lean_object* v_00_u03c3s_274_ = _args[6];
lean_object* v_hyp_275_ = _args[7];
lean_object* v_u_276_ = _args[8];
lean_object* v_toPure_277_ = _args[9];
lean_object* v_inst_278_ = _args[10];
lean_object* v_toBind_279_ = _args[11];
lean_object* v_k_280_ = _args[12];
lean_object* v___f_281_ = _args[13];
lean_object* v_inst_282_ = _args[14];
lean_object* v_inst_283_ = _args[15];
lean_object* v___f_284_ = _args[16];
lean_object* v_inst_285_ = _args[17];
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(v_00_u03c6_268_, v___x_269_, v___x_270_, v___x_271_, v___x_272_, v___x_273_, v_00_u03c3s_274_, v_hyp_275_, v_u_276_, v_toPure_277_, v_inst_278_, v_toBind_279_, v_k_280_, v___f_281_, v_inst_282_, v_inst_283_, v___f_284_, v_inst_285_);
return v_res_286_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_287_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_290_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4(void){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = lean_mk_string_unchecked("IsPure", 6, 6);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_292_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4);
v___x_293_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_294_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_295_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_296_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_297_ = l_Lean_Name_mkStr5(v___x_296_, v___x_295_, v___x_294_, v___x_293_, v___x_292_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object* v_u_298_, lean_object* v_00_u03c3s_299_, lean_object* v_hyp_300_, lean_object* v_toPure_301_, lean_object* v_inst_302_, lean_object* v_toBind_303_, lean_object* v_k_304_, lean_object* v___f_305_, lean_object* v_inst_306_, lean_object* v_inst_307_, lean_object* v___f_308_, lean_object* v_00_u03c6_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_310_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_311_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_312_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_313_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_314_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5);
v___x_315_ = lean_box(0);
lean_inc(v_u_298_);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v_u_298_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_inc(v_toBind_303_);
lean_inc(v_inst_302_);
lean_inc_ref(v_hyp_300_);
lean_inc_ref(v_00_u03c3s_299_);
lean_inc_ref(v___x_316_);
lean_inc_ref(v_00_u03c6_309_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_317_, 0, v_00_u03c6_309_);
lean_closure_set(v___f_317_, 1, v___x_310_);
lean_closure_set(v___f_317_, 2, v___x_311_);
lean_closure_set(v___f_317_, 3, v___x_312_);
lean_closure_set(v___f_317_, 4, v___x_313_);
lean_closure_set(v___f_317_, 5, v___x_316_);
lean_closure_set(v___f_317_, 6, v_00_u03c3s_299_);
lean_closure_set(v___f_317_, 7, v_hyp_300_);
lean_closure_set(v___f_317_, 8, v_u_298_);
lean_closure_set(v___f_317_, 9, v_toPure_301_);
lean_closure_set(v___f_317_, 10, v_inst_302_);
lean_closure_set(v___f_317_, 11, v_toBind_303_);
lean_closure_set(v___f_317_, 12, v_k_304_);
lean_closure_set(v___f_317_, 13, v___f_305_);
lean_closure_set(v___f_317_, 14, v_inst_306_);
lean_closure_set(v___f_317_, 15, v_inst_307_);
lean_closure_set(v___f_317_, 16, v___f_308_);
v___x_318_ = l_Lean_mkConst(v___x_314_, v___x_316_);
v___x_319_ = l_Lean_mkApp3(v___x_318_, v_00_u03c3s_299_, v_hyp_300_, v_00_u03c6_309_);
v___x_320_ = lean_box(0);
v___x_321_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_321_, 0, v___x_319_);
lean_closure_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_apply_2(v_inst_302_, lean_box(0), v___x_321_);
v___x_323_ = lean_apply_4(v_toBind_303_, lean_box(0), lean_box(0), v___x_322_, v___f_317_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_box(0);
v___x_325_ = l_Lean_mkSort(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0);
v___x_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2(void){
_start:
{
lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_328_ = lean_box(0);
v___x_329_ = 0;
v___x_330_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_331_ = lean_box(v___x_329_);
v___x_332_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_332_, 0, v___x_330_);
lean_closure_set(v___x_332_, 1, v___x_331_);
lean_closure_set(v___x_332_, 2, v___x_328_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object* v_00_u03c3s_333_, lean_object* v_hyp_334_, lean_object* v_toPure_335_, lean_object* v_inst_336_, lean_object* v_toBind_337_, lean_object* v_k_338_, lean_object* v___f_339_, lean_object* v_inst_340_, lean_object* v_inst_341_, lean_object* v___f_342_, lean_object* v_u_343_){
_start:
{
lean_object* v___f_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_inc(v_toBind_337_);
lean_inc(v_inst_336_);
v___f_344_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9), 12, 11);
lean_closure_set(v___f_344_, 0, v_u_343_);
lean_closure_set(v___f_344_, 1, v_00_u03c3s_333_);
lean_closure_set(v___f_344_, 2, v_hyp_334_);
lean_closure_set(v___f_344_, 3, v_toPure_335_);
lean_closure_set(v___f_344_, 4, v_inst_336_);
lean_closure_set(v___f_344_, 5, v_toBind_337_);
lean_closure_set(v___f_344_, 6, v_k_338_);
lean_closure_set(v___f_344_, 7, v___f_339_);
lean_closure_set(v___f_344_, 8, v_inst_340_);
lean_closure_set(v___f_344_, 9, v_inst_341_);
lean_closure_set(v___f_344_, 10, v___f_342_);
v___x_345_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_346_ = lean_apply_2(v_inst_336_, lean_box(0), v___x_345_);
v___x_347_ = lean_apply_4(v_toBind_337_, lean_box(0), lean_box(0), v___x_346_, v___f_344_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0(void){
_start:
{
lean_object* v___f_348_; 
v___f_348_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed), 5, 0);
return v___f_348_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___boxed), 5, 0);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_00_u03c3s_353_, lean_object* v_hyp_354_, lean_object* v_name_355_, lean_object* v_k_356_){
_start:
{
lean_object* v_toApplicative_357_; lean_object* v_toBind_358_; lean_object* v_toPure_359_; lean_object* v___f_360_; lean_object* v___f_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___f_364_; lean_object* v___x_365_; 
v_toApplicative_357_ = lean_ctor_get(v_inst_350_, 0);
v_toBind_358_ = lean_ctor_get(v_inst_350_, 1);
lean_inc_n(v_toBind_358_, 2);
v_toPure_359_ = lean_ctor_get(v_toApplicative_357_, 1);
lean_inc(v_toPure_359_);
v___f_360_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0);
v___f_361_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_361_, 0, v_name_355_);
v___x_362_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1);
lean_inc(v_inst_352_);
v___x_363_ = lean_apply_2(v_inst_352_, lean_box(0), v___x_362_);
v___f_364_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10), 11, 10);
lean_closure_set(v___f_364_, 0, v_00_u03c3s_353_);
lean_closure_set(v___f_364_, 1, v_hyp_354_);
lean_closure_set(v___f_364_, 2, v_toPure_359_);
lean_closure_set(v___f_364_, 3, v_inst_352_);
lean_closure_set(v___f_364_, 4, v_toBind_358_);
lean_closure_set(v___f_364_, 5, v_k_356_);
lean_closure_set(v___f_364_, 6, v___f_360_);
lean_closure_set(v___f_364_, 7, v_inst_351_);
lean_closure_set(v___f_364_, 8, v_inst_350_);
lean_closure_set(v___f_364_, 9, v___f_361_);
v___x_365_ = lean_apply_4(v_toBind_358_, lean_box(0), lean_box(0), v___x_363_, v___f_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object* v_m_366_, lean_object* v_00_u03b1_367_, lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_inst_370_, lean_object* v_00_u03c3s_371_, lean_object* v_hyp_372_, lean_object* v_name_373_, lean_object* v_k_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(v_inst_368_, v_inst_369_, v_inst_370_, v_00_u03c3s_371_, v_hyp_372_, v_name_373_, v_k_374_);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = lean_box(0);
v___x_377_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___x_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg(){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object* v_00_u03b1_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object* v_00_u03b1_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(v_00_u03b1_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object* v_x_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v___x_416_; 
lean_inc(v___y_410_);
lean_inc_ref(v___y_409_);
lean_inc(v___y_408_);
lean_inc_ref(v___y_407_);
v___x_416_ = lean_apply_9(v_x_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, lean_box(0));
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object* v_x_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(v_x_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object* v_mvarId_428_, lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___f_439_; lean_object* v___x_440_; 
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___f_439_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_439_, 0, v_x_429_);
lean_closure_set(v___f_439_, 1, v___y_430_);
lean_closure_set(v___f_439_, 2, v___y_431_);
lean_closure_set(v___f_439_, 3, v___y_432_);
lean_closure_set(v___f_439_, 4, v___y_433_);
v___x_440_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_428_, v___f_439_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
if (lean_obj_tag(v___x_440_) == 0)
{
return v___x_440_;
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object* v_mvarId_449_, lean_object* v_x_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_449_, v_x_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object* v_00_u03b1_461_, lean_object* v_mvarId_462_, lean_object* v_x_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_462_, v_x_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object* v_00_u03b1_474_, lean_object* v_mvarId_475_, lean_object* v_x_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(v_00_u03b1_474_, v_mvarId_475_, v_x_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object* v_a_487_, lean_object* v_snd_488_, lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_500_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(v_a_487_, v_snd_488_);
lean_inc_ref(v___x_500_);
v___x_501_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_500_);
v___x_502_ = lean_box(0);
v___x_503_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_501_, v___x_502_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_513_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_513_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_513_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
lean_inc(v_a_504_);
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_500_);
lean_ctor_set(v___x_508_, 1, v_a_504_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_a_504_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_509_);
v___x_511_ = v___x_506_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v___x_500_);
v_a_514_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_503_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_503_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object* v_a_522_, lean_object* v_snd_523_, lean_object* v_x_524_, lean_object* v_x_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(v_a_522_, v_snd_523_, v_x_524_, v_x_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_x_525_);
lean_dec_ref(v_x_524_);
lean_dec_ref(v_a_522_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_k_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v_b_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v___x_547_; 
lean_inc(v___y_545_);
lean_inc_ref(v___y_544_);
lean_inc(v___y_543_);
lean_inc_ref(v___y_542_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
v___x_547_ = lean_apply_10(v_k_536_, v_b_541_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, lean_box(0));
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_k_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v_b_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(v_k_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v_b_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object* v_name_560_, uint8_t v_bi_561_, lean_object* v_type_562_, lean_object* v_k_563_, uint8_t v_kind_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___f_574_; lean_object* v___x_575_; 
lean_inc(v___y_568_);
lean_inc_ref(v___y_567_);
lean_inc(v___y_566_);
lean_inc_ref(v___y_565_);
v___f_574_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_574_, 0, v_k_563_);
lean_closure_set(v___f_574_, 1, v___y_565_);
lean_closure_set(v___f_574_, 2, v___y_566_);
lean_closure_set(v___f_574_, 3, v___y_567_);
lean_closure_set(v___f_574_, 4, v___y_568_);
v___x_575_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_560_, v_bi_561_, v_type_562_, v___f_574_, v_kind_564_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_575_) == 0)
{
return v___x_575_;
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_name_584_, lean_object* v_bi_585_, lean_object* v_type_586_, lean_object* v_k_587_, lean_object* v_kind_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
uint8_t v_bi_boxed_598_; uint8_t v_kind_boxed_599_; lean_object* v_res_600_; 
v_bi_boxed_598_ = lean_unbox(v_bi_585_);
v_kind_boxed_599_ = lean_unbox(v_kind_588_);
v_res_600_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_584_, v_bi_boxed_598_, v_type_586_, v_k_587_, v_kind_boxed_599_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object* v_name_601_, lean_object* v_type_602_, lean_object* v_k_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
uint8_t v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; 
v___x_613_ = 0;
v___x_614_ = 0;
v___x_615_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_601_, v___x_613_, v_type_602_, v_k_603_, v___x_614_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object* v_name_616_, lean_object* v_type_617_, lean_object* v_k_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_616_, v_type_617_, v_k_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object* v_a_629_, lean_object* v_snd_630_, lean_object* v_k_631_, lean_object* v___x_632_, lean_object* v___x_633_, lean_object* v___x_634_, lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v_00_u03c3s_637_, lean_object* v_hyp_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_h_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_lctx_651_; lean_object* v___x_652_; uint8_t v___x_653_; lean_object* v___x_654_; 
v_lctx_651_ = lean_ctor_get(v___y_646_, 2);
lean_inc_ref(v_a_629_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v_a_629_);
v___x_653_ = 0;
lean_inc_ref(v_h_641_);
lean_inc_ref(v_lctx_651_);
v___x_654_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_snd_630_, v_lctx_651_, v_h_641_, v___x_652_, v___x_653_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v___x_655_; 
lean_dec_ref(v___x_654_);
lean_inc(v___y_649_);
lean_inc_ref(v___y_648_);
lean_inc(v___y_647_);
lean_inc_ref(v___y_646_);
lean_inc(v___y_645_);
lean_inc_ref(v___y_644_);
lean_inc(v___y_643_);
lean_inc_ref(v___y_642_);
lean_inc_ref(v_h_641_);
lean_inc_ref(v_a_629_);
v___x_655_ = lean_apply_11(v_k_631_, v_a_629_, v_h_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, lean_box(0));
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v_snd_657_; lean_object* v_fst_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_713_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref(v___x_655_);
v_snd_657_ = lean_ctor_get(v_a_656_, 1);
v_fst_658_ = lean_ctor_get(v_a_656_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_656_);
if (v_isSharedCheck_713_ == 0)
{
v___x_660_ = v_a_656_;
v_isShared_661_ = v_isSharedCheck_713_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_snd_657_);
lean_inc(v_fst_658_);
lean_dec(v_a_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_713_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_fst_662_; lean_object* v_snd_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_712_; 
v_fst_662_ = lean_ctor_get(v_snd_657_, 0);
v_snd_663_ = lean_ctor_get(v_snd_657_, 1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_712_ == 0)
{
v___x_665_ = v_snd_657_;
v_isShared_666_ = v_isSharedCheck_712_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_snd_663_);
lean_inc(v_fst_662_);
lean_dec(v_snd_657_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_712_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
v___x_667_ = lean_unsigned_to_nat(1u);
v___x_668_ = lean_mk_empty_array_with_capacity(v___x_667_);
v___x_669_ = lean_array_push(v___x_668_, v_h_641_);
v___x_670_ = 1;
v___x_671_ = 1;
v___x_672_ = l_Lean_Meta_mkLambdaFVars(v___x_669_, v_snd_663_, v___x_653_, v___x_670_, v___x_653_, v___x_670_, v___x_671_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
lean_dec_ref(v___x_669_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_703_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_703_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_703_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_703_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_u_677_; lean_object* v_00_u03c3s_678_; lean_object* v_hyps_679_; lean_object* v_target_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_702_; 
v_u_677_ = lean_ctor_get(v_fst_662_, 0);
v_00_u03c3s_678_ = lean_ctor_get(v_fst_662_, 1);
v_hyps_679_ = lean_ctor_get(v_fst_662_, 2);
v_target_680_ = lean_ctor_get(v_fst_662_, 3);
v_isSharedCheck_702_ = !lean_is_exclusive(v_fst_662_);
if (v_isSharedCheck_702_ == 0)
{
v___x_682_ = v_fst_662_;
v_isShared_683_ = v_isSharedCheck_702_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_target_680_);
lean_inc(v_hyps_679_);
lean_inc(v_00_u03c3s_678_);
lean_inc(v_u_677_);
lean_dec(v_fst_662_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_702_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v_prf_688_; lean_object* v___x_689_; lean_object* v_goal_691_; 
v___x_684_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0);
v___x_685_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1);
v___x_686_ = l_Lean_Name_mkStr6(v___x_632_, v___x_633_, v___x_634_, v___x_635_, v___x_684_, v___x_685_);
v___x_687_ = l_Lean_mkConst(v___x_686_, v___x_636_);
lean_inc_ref(v_target_680_);
lean_inc_ref(v_hyp_638_);
lean_inc_ref(v_hyps_679_);
lean_inc_ref(v_00_u03c3s_637_);
v_prf_688_ = l_Lean_mkApp7(v___x_687_, v_00_u03c3s_637_, v_hyps_679_, v_hyp_638_, v_target_680_, v_a_629_, v_a_639_, v_a_673_);
v___x_689_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_a_640_, v_00_u03c3s_637_, v_hyps_679_, v_hyp_638_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 2, v___x_689_);
v_goal_691_ = v___x_682_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_u_677_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_00_u03c3s_678_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v_target_680_);
v_goal_691_ = v_reuseFailAlloc_701_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_693_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v_prf_688_);
lean_ctor_set(v___x_665_, 0, v_goal_691_);
v___x_693_ = v___x_665_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_goal_691_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_prf_688_);
v___x_693_ = v_reuseFailAlloc_700_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_693_);
v___x_695_ = v___x_660_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_fst_658_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_699_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_695_);
v___x_697_ = v___x_675_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_del_object(v___x_665_);
lean_dec(v_fst_662_);
lean_del_object(v___x_660_);
lean_dec(v_fst_658_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_a_629_);
v_a_704_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_672_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_672_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_a_629_);
return v___x_655_;
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_721_; 
lean_dec_ref(v_h_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_hyp_638_);
lean_dec_ref(v_00_u03c3s_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v___x_633_);
lean_dec_ref(v___x_632_);
lean_dec_ref(v_k_631_);
lean_dec_ref(v_a_629_);
v_a_714_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_721_ == 0)
{
v___x_716_ = v___x_654_;
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_654_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_721_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_714_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_a_722_ = _args[0];
lean_object* v_snd_723_ = _args[1];
lean_object* v_k_724_ = _args[2];
lean_object* v___x_725_ = _args[3];
lean_object* v___x_726_ = _args[4];
lean_object* v___x_727_ = _args[5];
lean_object* v___x_728_ = _args[6];
lean_object* v___x_729_ = _args[7];
lean_object* v_00_u03c3s_730_ = _args[8];
lean_object* v_hyp_731_ = _args[9];
lean_object* v_a_732_ = _args[10];
lean_object* v_a_733_ = _args[11];
lean_object* v_h_734_ = _args[12];
lean_object* v___y_735_ = _args[13];
lean_object* v___y_736_ = _args[14];
lean_object* v___y_737_ = _args[15];
lean_object* v___y_738_ = _args[16];
lean_object* v___y_739_ = _args[17];
lean_object* v___y_740_ = _args[18];
lean_object* v___y_741_ = _args[19];
lean_object* v___y_742_ = _args[20];
lean_object* v___y_743_ = _args[21];
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(v_a_722_, v_snd_723_, v_k_724_, v___x_725_, v___x_726_, v___x_727_, v___x_728_, v___x_729_, v_00_u03c3s_730_, v_hyp_731_, v_a_732_, v_a_733_, v_h_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object* v_00_u03c3s_745_, lean_object* v_hyp_746_, lean_object* v_name_747_, lean_object* v_k_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_Meta_mkFreshLevelMVar(v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref(v___x_758_);
v___x_760_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_761_ = 0;
v___x_762_ = lean_box(0);
v___x_763_ = l_Lean_Meta_mkFreshExprMVar(v___x_760_, v___x_761_, v___x_762_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc_n(v_a_764_, 2);
lean_dec_ref(v___x_763_);
v___x_765_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_766_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_767_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_768_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_769_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5);
v___x_770_ = lean_box(0);
lean_inc(v_a_759_);
v___x_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_771_, 0, v_a_759_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
lean_inc_ref(v___x_771_);
v___x_772_ = l_Lean_mkConst(v___x_769_, v___x_771_);
lean_inc_ref(v_hyp_746_);
lean_inc_ref(v_00_u03c3s_745_);
v___x_773_ = l_Lean_mkApp3(v___x_772_, v_00_u03c3s_745_, v_hyp_746_, v_a_764_);
v___x_774_ = lean_box(0);
v___x_775_ = l_Lean_Meta_synthInstance(v___x_773_, v___x_774_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref(v___x_775_);
v___x_777_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_747_, v___y_755_, v___y_756_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___f_781_; lean_object* v___x_782_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref(v___x_777_);
v_fst_779_ = lean_ctor_get(v_a_778_, 0);
lean_inc(v_fst_779_);
v_snd_780_ = lean_ctor_get(v_a_778_, 1);
lean_inc(v_snd_780_);
lean_dec(v_a_778_);
lean_inc(v_a_764_);
v___f_781_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed), 22, 12);
lean_closure_set(v___f_781_, 0, v_a_764_);
lean_closure_set(v___f_781_, 1, v_snd_780_);
lean_closure_set(v___f_781_, 2, v_k_748_);
lean_closure_set(v___f_781_, 3, v___x_765_);
lean_closure_set(v___f_781_, 4, v___x_766_);
lean_closure_set(v___f_781_, 5, v___x_767_);
lean_closure_set(v___f_781_, 6, v___x_768_);
lean_closure_set(v___f_781_, 7, v___x_771_);
lean_closure_set(v___f_781_, 8, v_00_u03c3s_745_);
lean_closure_set(v___f_781_, 9, v_hyp_746_);
lean_closure_set(v___f_781_, 10, v_a_776_);
lean_closure_set(v___f_781_, 11, v_a_759_);
v___x_782_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_fst_779_, v_a_764_, v___f_781_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
return v___x_782_;
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_a_776_);
lean_dec_ref(v___x_771_);
lean_dec(v_a_764_);
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_783_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_777_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_777_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec_ref(v___x_771_);
lean_dec(v_a_764_);
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_791_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_775_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_775_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec(v_a_759_);
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_799_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_763_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_763_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_k_748_);
lean_dec(v_name_747_);
lean_dec_ref(v_hyp_746_);
lean_dec_ref(v_00_u03c3s_745_);
v_a_807_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_758_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_758_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object* v_00_u03c3s_815_, lean_object* v_hyp_816_, lean_object* v_name_817_, lean_object* v_k_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_815_, v_hyp_816_, v_name_817_, v_k_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_829_, lean_object* v_x_830_, lean_object* v_x_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_ks_833_; lean_object* v_vs_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_858_; 
v_ks_833_ = lean_ctor_get(v_x_829_, 0);
v_vs_834_ = lean_ctor_get(v_x_829_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_829_);
if (v_isSharedCheck_858_ == 0)
{
v___x_836_ = v_x_829_;
v_isShared_837_ = v_isSharedCheck_858_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_vs_834_);
lean_inc(v_ks_833_);
lean_dec(v_x_829_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_858_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_array_get_size(v_ks_833_);
v___x_839_ = lean_nat_dec_lt(v_x_830_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
lean_dec(v_x_830_);
v___x_840_ = lean_array_push(v_ks_833_, v_x_831_);
v___x_841_ = lean_array_push(v_vs_834_, v_x_832_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_841_);
lean_ctor_set(v___x_836_, 0, v___x_840_);
v___x_843_ = v___x_836_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
else
{
lean_object* v_k_x27_845_; uint8_t v___x_846_; 
v_k_x27_845_ = lean_array_fget_borrowed(v_ks_833_, v_x_830_);
v___x_846_ = l_Lean_instBEqMVarId_beq(v_x_831_, v_k_x27_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_848_; 
if (v_isShared_837_ == 0)
{
v___x_848_ = v___x_836_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_ks_833_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_vs_834_);
v___x_848_ = v_reuseFailAlloc_852_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_unsigned_to_nat(1u);
v___x_850_ = lean_nat_add(v_x_830_, v___x_849_);
lean_dec(v_x_830_);
v_x_829_ = v___x_848_;
v_x_830_ = v___x_850_;
goto _start;
}
}
else
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_853_ = lean_array_fset(v_ks_833_, v_x_830_, v_x_831_);
v___x_854_ = lean_array_fset(v_vs_834_, v_x_830_, v_x_832_);
lean_dec(v_x_830_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_854_);
lean_ctor_set(v___x_836_, 0, v___x_853_);
v___x_856_ = v___x_836_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object* v_n_859_, lean_object* v_k_860_, lean_object* v_v_861_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_n_859_, v___x_862_, v_k_860_, v_v_861_);
return v___x_863_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; 
v___x_864_ = ((size_t)5ULL);
v___x_865_ = ((size_t)1ULL);
v___x_866_ = lean_usize_shift_left(v___x_865_, v___x_864_);
return v___x_866_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_867_; size_t v___x_868_; size_t v___x_869_; 
v___x_867_ = ((size_t)1ULL);
v___x_868_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0);
v___x_869_ = lean_usize_sub(v___x_868_, v___x_867_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object* v_x_871_, size_t v_x_872_, size_t v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
lean_object* v_es_876_; size_t v___x_877_; size_t v___x_878_; size_t v___x_879_; size_t v___x_880_; lean_object* v_j_881_; lean_object* v___x_882_; uint8_t v___x_883_; 
v_es_876_ = lean_ctor_get(v_x_871_, 0);
v___x_877_ = ((size_t)5ULL);
v___x_878_ = ((size_t)1ULL);
v___x_879_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1);
v___x_880_ = lean_usize_land(v_x_872_, v___x_879_);
v_j_881_ = lean_usize_to_nat(v___x_880_);
v___x_882_ = lean_array_get_size(v_es_876_);
v___x_883_ = lean_nat_dec_lt(v_j_881_, v___x_882_);
if (v___x_883_ == 0)
{
lean_dec(v_j_881_);
lean_dec(v_x_875_);
lean_dec(v_x_874_);
return v_x_871_;
}
else
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_920_; 
lean_inc_ref(v_es_876_);
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_x_871_, 0);
lean_dec(v_unused_921_);
v___x_885_ = v_x_871_;
v_isShared_886_ = v_isSharedCheck_920_;
goto v_resetjp_884_;
}
else
{
lean_dec(v_x_871_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_920_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_v_887_; lean_object* v___x_888_; lean_object* v_xs_x27_889_; lean_object* v___y_891_; 
v_v_887_ = lean_array_fget(v_es_876_, v_j_881_);
v___x_888_ = lean_box(0);
v_xs_x27_889_ = lean_array_fset(v_es_876_, v_j_881_, v___x_888_);
switch(lean_obj_tag(v_v_887_))
{
case 0:
{
lean_object* v_key_896_; lean_object* v_val_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_907_; 
v_key_896_ = lean_ctor_get(v_v_887_, 0);
v_val_897_ = lean_ctor_get(v_v_887_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_v_887_);
if (v_isSharedCheck_907_ == 0)
{
v___x_899_ = v_v_887_;
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_val_897_);
lean_inc(v_key_896_);
lean_dec(v_v_887_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
uint8_t v___x_901_; 
v___x_901_ = l_Lean_instBEqMVarId_beq(v_x_874_, v_key_896_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v___x_903_; 
lean_del_object(v___x_899_);
v___x_902_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_896_, v_val_897_, v_x_874_, v_x_875_);
v___x_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
v___y_891_ = v___x_903_;
goto v___jp_890_;
}
else
{
lean_object* v___x_905_; 
lean_dec(v_val_897_);
lean_dec(v_key_896_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 1, v_x_875_);
lean_ctor_set(v___x_899_, 0, v_x_874_);
v___x_905_ = v___x_899_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_x_874_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_x_875_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
v___y_891_ = v___x_905_;
goto v___jp_890_;
}
}
}
}
case 1:
{
lean_object* v_node_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_918_; 
v_node_908_ = lean_ctor_get(v_v_887_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v_v_887_);
if (v_isSharedCheck_918_ == 0)
{
v___x_910_ = v_v_887_;
v_isShared_911_ = v_isSharedCheck_918_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_node_908_);
lean_dec(v_v_887_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_918_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_912_ = lean_usize_shift_right(v_x_872_, v___x_877_);
v___x_913_ = lean_usize_add(v_x_873_, v___x_878_);
v___x_914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_node_908_, v___x_912_, v___x_913_, v_x_874_, v_x_875_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_914_);
v___x_916_ = v___x_910_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
v___y_891_ = v___x_916_;
goto v___jp_890_;
}
}
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_x_874_);
lean_ctor_set(v___x_919_, 1, v_x_875_);
v___y_891_ = v___x_919_;
goto v___jp_890_;
}
}
v___jp_890_:
{
lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_892_ = lean_array_fset(v_xs_x27_889_, v_j_881_, v___y_891_);
lean_dec(v_j_881_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_892_);
v___x_894_ = v___x_885_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
else
{
lean_object* v_ks_922_; lean_object* v_vs_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_943_; 
v_ks_922_ = lean_ctor_get(v_x_871_, 0);
v_vs_923_ = lean_ctor_get(v_x_871_, 1);
v_isSharedCheck_943_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_943_ == 0)
{
v___x_925_ = v_x_871_;
v_isShared_926_ = v_isSharedCheck_943_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_vs_923_);
lean_inc(v_ks_922_);
lean_dec(v_x_871_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_943_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_ks_922_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_vs_923_);
v___x_928_ = v_reuseFailAlloc_942_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v_newNode_929_; uint8_t v___y_931_; size_t v___x_937_; uint8_t v___x_938_; 
v_newNode_929_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v___x_928_, v_x_874_, v_x_875_);
v___x_937_ = ((size_t)7ULL);
v___x_938_ = lean_usize_dec_le(v___x_937_, v_x_873_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_939_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_929_);
v___x_940_ = lean_unsigned_to_nat(4u);
v___x_941_ = lean_nat_dec_lt(v___x_939_, v___x_940_);
lean_dec(v___x_939_);
v___y_931_ = v___x_941_;
goto v___jp_930_;
}
else
{
v___y_931_ = v___x_938_;
goto v___jp_930_;
}
v___jp_930_:
{
if (v___y_931_ == 0)
{
lean_object* v_ks_932_; lean_object* v_vs_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_ks_932_ = lean_ctor_get(v_newNode_929_, 0);
lean_inc_ref(v_ks_932_);
v_vs_933_ = lean_ctor_get(v_newNode_929_, 1);
lean_inc_ref(v_vs_933_);
lean_dec_ref(v_newNode_929_);
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__2);
v___x_936_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_x_873_, v_ks_932_, v_vs_933_, v___x_934_, v___x_935_);
lean_dec_ref(v_vs_933_);
lean_dec_ref(v_ks_932_);
return v___x_936_;
}
else
{
return v_newNode_929_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t v_depth_944_, lean_object* v_keys_945_, lean_object* v_vals_946_, lean_object* v_i_947_, lean_object* v_entries_948_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_keys_945_);
v___x_950_ = lean_nat_dec_lt(v_i_947_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v_i_947_);
return v_entries_948_;
}
else
{
lean_object* v_k_951_; lean_object* v_v_952_; uint64_t v___x_953_; size_t v_h_954_; size_t v___x_955_; lean_object* v___x_956_; size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; size_t v_h_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_k_951_ = lean_array_fget_borrowed(v_keys_945_, v_i_947_);
v_v_952_ = lean_array_fget_borrowed(v_vals_946_, v_i_947_);
v___x_953_ = l_Lean_instHashableMVarId_hash(v_k_951_);
v_h_954_ = lean_uint64_to_usize(v___x_953_);
v___x_955_ = ((size_t)5ULL);
v___x_956_ = lean_unsigned_to_nat(1u);
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_sub(v_depth_944_, v___x_957_);
v___x_959_ = lean_usize_mul(v___x_955_, v___x_958_);
v_h_960_ = lean_usize_shift_right(v_h_954_, v___x_959_);
v___x_961_ = lean_nat_add(v_i_947_, v___x_956_);
lean_dec(v_i_947_);
lean_inc(v_v_952_);
lean_inc(v_k_951_);
v___x_962_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_entries_948_, v_h_960_, v_depth_944_, v_k_951_, v_v_952_);
v_i_947_ = v___x_961_;
v_entries_948_ = v___x_962_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_depth_964_, lean_object* v_keys_965_, lean_object* v_vals_966_, lean_object* v_i_967_, lean_object* v_entries_968_){
_start:
{
size_t v_depth_boxed_969_; lean_object* v_res_970_; 
v_depth_boxed_969_ = lean_unbox_usize(v_depth_964_);
lean_dec(v_depth_964_);
v_res_970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_boxed_969_, v_keys_965_, v_vals_966_, v_i_967_, v_entries_968_);
lean_dec_ref(v_vals_966_);
lean_dec_ref(v_keys_965_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_x_971_, lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
size_t v_x_10405__boxed_976_; size_t v_x_10406__boxed_977_; lean_object* v_res_978_; 
v_x_10405__boxed_976_ = lean_unbox_usize(v_x_972_);
lean_dec(v_x_972_);
v_x_10406__boxed_977_ = lean_unbox_usize(v_x_973_);
lean_dec(v_x_973_);
v_res_978_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_971_, v_x_10405__boxed_976_, v_x_10406__boxed_977_, v_x_974_, v_x_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object* v_x_979_, lean_object* v_x_980_, lean_object* v_x_981_){
_start:
{
uint64_t v___x_982_; size_t v___x_983_; size_t v___x_984_; lean_object* v___x_985_; 
v___x_982_ = l_Lean_instHashableMVarId_hash(v_x_980_);
v___x_983_ = lean_uint64_to_usize(v___x_982_);
v___x_984_ = ((size_t)1ULL);
v___x_985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_979_, v___x_983_, v___x_984_, v_x_980_, v_x_981_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object* v_mvarId_986_, lean_object* v_val_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v_mctx_993_; lean_object* v_cache_994_; lean_object* v_zetaDeltaFVarIds_995_; lean_object* v_postponed_996_; lean_object* v_diag_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1025_; 
v___x_991_ = lean_st_ref_get(v___y_989_);
lean_dec(v___x_991_);
v___x_992_ = lean_st_ref_take(v___y_988_);
v_mctx_993_ = lean_ctor_get(v___x_992_, 0);
v_cache_994_ = lean_ctor_get(v___x_992_, 1);
v_zetaDeltaFVarIds_995_ = lean_ctor_get(v___x_992_, 2);
v_postponed_996_ = lean_ctor_get(v___x_992_, 3);
v_diag_997_ = lean_ctor_get(v___x_992_, 4);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_999_ = v___x_992_;
v_isShared_1000_ = v_isSharedCheck_1025_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_diag_997_);
lean_inc(v_postponed_996_);
lean_inc(v_zetaDeltaFVarIds_995_);
lean_inc(v_cache_994_);
lean_inc(v_mctx_993_);
lean_dec(v___x_992_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1025_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v_depth_1001_; lean_object* v_levelAssignDepth_1002_; lean_object* v_lmvarCounter_1003_; lean_object* v_mvarCounter_1004_; lean_object* v_lDecls_1005_; lean_object* v_decls_1006_; lean_object* v_userNames_1007_; lean_object* v_lAssignment_1008_; lean_object* v_eAssignment_1009_; lean_object* v_dAssignment_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1024_; 
v_depth_1001_ = lean_ctor_get(v_mctx_993_, 0);
v_levelAssignDepth_1002_ = lean_ctor_get(v_mctx_993_, 1);
v_lmvarCounter_1003_ = lean_ctor_get(v_mctx_993_, 2);
v_mvarCounter_1004_ = lean_ctor_get(v_mctx_993_, 3);
v_lDecls_1005_ = lean_ctor_get(v_mctx_993_, 4);
v_decls_1006_ = lean_ctor_get(v_mctx_993_, 5);
v_userNames_1007_ = lean_ctor_get(v_mctx_993_, 6);
v_lAssignment_1008_ = lean_ctor_get(v_mctx_993_, 7);
v_eAssignment_1009_ = lean_ctor_get(v_mctx_993_, 8);
v_dAssignment_1010_ = lean_ctor_get(v_mctx_993_, 9);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_mctx_993_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1012_ = v_mctx_993_;
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_dAssignment_1010_);
lean_inc(v_eAssignment_1009_);
lean_inc(v_lAssignment_1008_);
lean_inc(v_userNames_1007_);
lean_inc(v_decls_1006_);
lean_inc(v_lDecls_1005_);
lean_inc(v_mvarCounter_1004_);
lean_inc(v_lmvarCounter_1003_);
lean_inc(v_levelAssignDepth_1002_);
lean_inc(v_depth_1001_);
lean_dec(v_mctx_993_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1014_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1009_, v_mvarId_986_, v_val_987_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 8, v___x_1014_);
v___x_1016_ = v___x_1012_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_depth_1001_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_levelAssignDepth_1002_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v_lmvarCounter_1003_);
lean_ctor_set(v_reuseFailAlloc_1023_, 3, v_mvarCounter_1004_);
lean_ctor_set(v_reuseFailAlloc_1023_, 4, v_lDecls_1005_);
lean_ctor_set(v_reuseFailAlloc_1023_, 5, v_decls_1006_);
lean_ctor_set(v_reuseFailAlloc_1023_, 6, v_userNames_1007_);
lean_ctor_set(v_reuseFailAlloc_1023_, 7, v_lAssignment_1008_);
lean_ctor_set(v_reuseFailAlloc_1023_, 8, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1023_, 9, v_dAssignment_1010_);
v___x_1016_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1016_);
v___x_1018_ = v___x_999_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_cache_994_);
lean_ctor_set(v_reuseFailAlloc_1022_, 2, v_zetaDeltaFVarIds_995_);
lean_ctor_set(v_reuseFailAlloc_1022_, 3, v_postponed_996_);
lean_ctor_set(v_reuseFailAlloc_1022_, 4, v_diag_997_);
v___x_1018_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = lean_st_ref_set(v___y_988_, v___x_1018_);
v___x_1020_ = lean_box(0);
v___x_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
return v___x_1021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object* v_mvarId_1026_, lean_object* v_val_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1026_, v_val_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec(v___y_1028_);
return v_res_1031_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = lean_mk_string_unchecked("binderIdent", 11, 11);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object* v_snd_1033_, lean_object* v_hyp_1034_, lean_object* v___x_1035_, lean_object* v_fst_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; 
lean_inc(v_hyp_1034_);
lean_inc_ref(v_snd_1033_);
v___x_1046_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_snd_1033_, v_hyp_1034_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v_ref_1048_; lean_object* v_00_u03c3s_1049_; lean_object* v_focusHyp_1050_; lean_object* v___f_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc_n(v_a_1047_, 2);
lean_dec_ref(v___x_1046_);
v_ref_1048_ = lean_ctor_get(v___y_1043_, 5);
v_00_u03c3s_1049_ = lean_ctor_get(v_snd_1033_, 1);
v_focusHyp_1050_ = lean_ctor_get(v_a_1047_, 0);
lean_inc_ref(v_snd_1033_);
v___f_1051_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1051_, 0, v_a_1047_);
lean_closure_set(v___f_1051_, 1, v_snd_1033_);
v___x_1052_ = 0;
v___x_1053_ = l_Lean_SourceInfo_fromRef(v_ref_1048_, v___x_1052_);
v___x_1054_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0);
v___x_1055_ = l_Lean_Name_mkStr2(v___x_1035_, v___x_1054_);
v___x_1056_ = l_Lean_Syntax_node1(v___x_1053_, v___x_1055_, v_hyp_1034_);
lean_inc_ref(v_focusHyp_1050_);
lean_inc_ref(v_00_u03c3s_1049_);
v___x_1057_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1049_, v_focusHyp_1050_, v___x_1056_, v___f_1051_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; lean_object* v_snd_1059_; lean_object* v_fst_1060_; lean_object* v_snd_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1073_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref(v___x_1057_);
v_snd_1059_ = lean_ctor_get(v_a_1058_, 1);
lean_inc(v_snd_1059_);
v_fst_1060_ = lean_ctor_get(v_a_1058_, 0);
lean_inc(v_fst_1060_);
lean_dec(v_a_1058_);
v_snd_1061_ = lean_ctor_get(v_snd_1059_, 1);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_snd_1059_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_snd_1059_, 0);
lean_dec(v_unused_1074_);
v___x_1063_ = v_snd_1059_;
v_isShared_1064_ = v_isSharedCheck_1073_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_snd_1061_);
lean_dec(v_snd_1059_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1073_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1065_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(v_a_1047_, v_snd_1033_, v_snd_1061_);
v___x_1066_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1036_, v___x_1065_, v___y_1042_, v___y_1044_);
lean_dec_ref(v___x_1066_);
v___x_1067_ = l_Lean_Expr_mvarId_x21(v_fst_1060_);
lean_dec(v_fst_1060_);
v___x_1068_ = lean_box(0);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
lean_ctor_set(v___x_1063_, 1, v___x_1068_);
lean_ctor_set(v___x_1063_, 0, v___x_1067_);
v___x_1070_ = v___x_1063_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1070_, v___y_1038_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
return v___x_1071_;
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v_a_1047_);
lean_dec(v_fst_1036_);
lean_dec_ref(v_snd_1033_);
v_a_1075_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1057_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1057_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
lean_dec(v_fst_1036_);
lean_dec_ref(v___x_1035_);
lean_dec(v_hyp_1034_);
lean_dec_ref(v_snd_1033_);
v_a_1083_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1046_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1046_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object* v_snd_1091_, lean_object* v_hyp_1092_, lean_object* v___x_1093_, lean_object* v_fst_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(v_snd_1091_, v_hyp_1092_, v___x_1093_, v_fst_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1104_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0(void){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1105_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1(void){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_1106_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2(void){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_mk_string_unchecked("mpure", 5, 5);
return v___x_1107_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1108_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2);
v___x_1109_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1110_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1);
v___x_1111_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_1112_ = l_Lean_Name_mkStr4(v___x_1111_, v___x_1110_, v___x_1109_, v___x_1108_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object* v_x_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1123_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_1124_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3);
lean_inc(v_x_1113_);
v___x_1125_ = l_Lean_Syntax_isOfKind(v_x_1113_, v___x_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_x_1113_);
v___x_1126_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1115_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; lean_object* v_fst_1129_; lean_object* v_snd_1130_; lean_object* v___x_1131_; lean_object* v_hyp_1132_; lean_object* v___f_1133_; lean_object* v___x_1134_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref(v___x_1127_);
v_fst_1129_ = lean_ctor_get(v_a_1128_, 0);
lean_inc_n(v_fst_1129_, 2);
v_snd_1130_ = lean_ctor_get(v_a_1128_, 1);
lean_inc(v_snd_1130_);
lean_dec(v_a_1128_);
v___x_1131_ = lean_unsigned_to_nat(1u);
v_hyp_1132_ = l_Lean_Syntax_getArg(v_x_1113_, v___x_1131_);
lean_dec(v_x_1113_);
v___f_1133_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed), 13, 4);
lean_closure_set(v___f_1133_, 0, v_snd_1130_);
lean_closure_set(v___f_1133_, 1, v_hyp_1132_);
lean_closure_set(v___f_1133_, 2, v___x_1123_);
lean_closure_set(v___f_1133_, 3, v_fst_1129_);
v___x_1134_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1129_, v___f_1133_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
return v___x_1134_;
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v_x_1113_);
v_a_1135_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1127_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1127_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object* v_x_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(v_x_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
lean_dec(v_a_1147_);
lean_dec_ref(v_a_1146_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object* v_00_u03b1_1154_, lean_object* v_00_u03c3s_1155_, lean_object* v_hyp_1156_, lean_object* v_name_1157_, lean_object* v_k_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1155_, v_hyp_1156_, v_name_1157_, v_k_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object* v_00_u03b1_1169_, lean_object* v_00_u03c3s_1170_, lean_object* v_hyp_1171_, lean_object* v_name_1172_, lean_object* v_k_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(v_00_u03b1_1169_, v_00_u03c3s_1170_, v_hyp_1171_, v_name_1172_, v_k_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object* v_mvarId_1184_, lean_object* v_val_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1184_, v_val_1185_, v___y_1191_, v___y_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object* v_mvarId_1196_, lean_object* v_val_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(v_mvarId_1196_, v_val_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_1208_, lean_object* v_name_1209_, uint8_t v_bi_1210_, lean_object* v_type_1211_, lean_object* v_k_1212_, uint8_t v_kind_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_1209_, v_bi_1210_, v_type_1211_, v_k_1212_, v_kind_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1224_, lean_object* v_name_1225_, lean_object* v_bi_1226_, lean_object* v_type_1227_, lean_object* v_k_1228_, lean_object* v_kind_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
uint8_t v_bi_boxed_1239_; uint8_t v_kind_boxed_1240_; lean_object* v_res_1241_; 
v_bi_boxed_1239_ = lean_unbox(v_bi_1226_);
v_kind_boxed_1240_ = lean_unbox(v_kind_1229_);
v_res_1241_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(v_00_u03b1_1224_, v_name_1225_, v_bi_boxed_1239_, v_type_1227_, v_k_1228_, v_kind_boxed_1240_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object* v_00_u03b1_1242_, lean_object* v_name_1243_, lean_object* v_type_1244_, lean_object* v_k_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_1243_, v_type_1244_, v_k_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1256_, lean_object* v_name_1257_, lean_object* v_type_1258_, lean_object* v_k_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(v_00_u03b1_1256_, v_name_1257_, v_type_1258_, v_k_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object* v_00_u03b2_1270_, lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_x_1271_, v_x_1272_, v_x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1275_, lean_object* v_x_1276_, size_t v_x_1277_, size_t v_x_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_1276_, v_x_1277_, v_x_1278_, v_x_1279_, v_x_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_1282_, lean_object* v_x_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
size_t v_x_10949__boxed_1288_; size_t v_x_10950__boxed_1289_; lean_object* v_res_1290_; 
v_x_10949__boxed_1288_ = lean_unbox_usize(v_x_1284_);
lean_dec(v_x_1284_);
v_x_10950__boxed_1289_ = lean_unbox_usize(v_x_1285_);
lean_dec(v_x_1285_);
v_res_1290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(v_00_u03b2_1282_, v_x_1283_, v_x_10949__boxed_1288_, v_x_10950__boxed_1289_, v_x_1286_, v_x_1287_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_1291_, lean_object* v_n_1292_, lean_object* v_k_1293_, lean_object* v_v_1294_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v_n_1292_, v_k_1293_, v_v_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_1296_, size_t v_depth_1297_, lean_object* v_keys_1298_, lean_object* v_vals_1299_, lean_object* v_heq_1300_, lean_object* v_i_1301_, lean_object* v_entries_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_1297_, v_keys_1298_, v_vals_1299_, v_i_1301_, v_entries_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1304_, lean_object* v_depth_1305_, lean_object* v_keys_1306_, lean_object* v_vals_1307_, lean_object* v_heq_1308_, lean_object* v_i_1309_, lean_object* v_entries_1310_){
_start:
{
size_t v_depth_boxed_1311_; lean_object* v_res_1312_; 
v_depth_boxed_1311_ = lean_unbox_usize(v_depth_1305_);
lean_dec(v_depth_1305_);
v_res_1312_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(v_00_u03b2_1304_, v_depth_boxed_1311_, v_keys_1306_, v_vals_1307_, v_heq_1308_, v_i_1309_, v_entries_1310_);
lean_dec_ref(v_vals_1307_);
lean_dec_ref(v_keys_1306_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_1313_, lean_object* v_x_1314_, lean_object* v_x_1315_, lean_object* v_x_1316_, lean_object* v_x_1317_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_x_1314_, v_x_1315_, v_x_1316_, v_x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0(void){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_1319_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1(void){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_1320_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2(void){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_mk_string_unchecked("elabMPure", 9, 9);
return v___x_1321_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1322_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2);
v___x_1323_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1);
v___x_1324_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1325_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1326_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0);
v___x_1327_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_1328_ = l_Lean_Name_mkStr6(v___x_1327_, v___x_1326_, v___x_1325_, v___x_1324_, v___x_1323_, v___x_1322_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1(){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1330_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1331_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3);
v___x_1332_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3);
v___x_1333_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed), 10, 0);
v___x_1334_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1330_, v___x_1331_, v___x_1332_, v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___boxed(lean_object* v_a_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
return v_res_1336_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_mk_string_unchecked("intro", 5, 5);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object* v___x_1338_, lean_object* v___x_1339_, lean_object* v___x_1340_, lean_object* v___x_1341_, lean_object* v___x_1342_, lean_object* v_00_u03c3s_1343_, lean_object* v_hyps_1344_, lean_object* v_target_1345_, lean_object* v_00_u03c6_1346_, lean_object* v_inst_1347_, lean_object* v_toPure_1348_, lean_object* v_____x_1349_){
_start:
{
lean_object* v_fst_1350_; lean_object* v_snd_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1364_; 
v_fst_1350_ = lean_ctor_get(v_____x_1349_, 0);
v_snd_1351_ = lean_ctor_get(v_____x_1349_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_____x_1349_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1353_ = v_____x_1349_;
v_isShared_1354_ = v_isSharedCheck_1364_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_snd_1351_);
lean_inc(v_fst_1350_);
lean_dec(v_____x_1349_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1364_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_prf_1359_; lean_object* v___x_1361_; 
v___x_1355_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0);
v___x_1356_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0);
v___x_1357_ = l_Lean_Name_mkStr6(v___x_1338_, v___x_1339_, v___x_1340_, v___x_1341_, v___x_1355_, v___x_1356_);
v___x_1358_ = l_Lean_mkConst(v___x_1357_, v___x_1342_);
v_prf_1359_ = l_Lean_mkApp6(v___x_1358_, v_00_u03c3s_1343_, v_hyps_1344_, v_target_1345_, v_00_u03c6_1346_, v_inst_1347_, v_snd_1351_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v_prf_1359_);
v___x_1361_ = v___x_1353_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_fst_1350_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_prf_1359_);
v___x_1361_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_apply_2(v_toPure_1348_, lean_box(0), v___x_1361_);
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object* v___x_1365_, lean_object* v___x_1366_, lean_object* v___x_1367_, lean_object* v___x_1368_, lean_object* v___x_1369_, lean_object* v_00_u03c3s_1370_, lean_object* v_hyps_1371_, lean_object* v_target_1372_, lean_object* v_00_u03c6_1373_, lean_object* v_toPure_1374_, lean_object* v_k_1375_, lean_object* v_toBind_1376_, lean_object* v_inst_1377_){
_start:
{
lean_object* v___f_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_inc_ref(v_00_u03c6_1373_);
v___f_1378_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0), 12, 11);
lean_closure_set(v___f_1378_, 0, v___x_1365_);
lean_closure_set(v___f_1378_, 1, v___x_1366_);
lean_closure_set(v___f_1378_, 2, v___x_1367_);
lean_closure_set(v___f_1378_, 3, v___x_1368_);
lean_closure_set(v___f_1378_, 4, v___x_1369_);
lean_closure_set(v___f_1378_, 5, v_00_u03c3s_1370_);
lean_closure_set(v___f_1378_, 6, v_hyps_1371_);
lean_closure_set(v___f_1378_, 7, v_target_1372_);
lean_closure_set(v___f_1378_, 8, v_00_u03c6_1373_);
lean_closure_set(v___f_1378_, 9, v_inst_1377_);
lean_closure_set(v___f_1378_, 10, v_toPure_1374_);
v___x_1379_ = lean_apply_1(v_k_1375_, v_00_u03c6_1373_);
v___x_1380_ = lean_apply_4(v_toBind_1376_, lean_box(0), lean_box(0), v___x_1379_, v___f_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object* v_goal_1381_, lean_object* v_toPure_1382_, lean_object* v_k_1383_, lean_object* v_toBind_1384_, lean_object* v_inst_1385_, lean_object* v_00_u03c6_1386_){
_start:
{
lean_object* v_u_1387_; lean_object* v_00_u03c3s_1388_; lean_object* v_hyps_1389_; lean_object* v_target_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___f_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v_u_1387_ = lean_ctor_get(v_goal_1381_, 0);
lean_inc(v_u_1387_);
v_00_u03c3s_1388_ = lean_ctor_get(v_goal_1381_, 1);
lean_inc_ref_n(v_00_u03c3s_1388_, 2);
v_hyps_1389_ = lean_ctor_get(v_goal_1381_, 2);
lean_inc_ref(v_hyps_1389_);
v_target_1390_ = lean_ctor_get(v_goal_1381_, 3);
lean_inc_ref_n(v_target_1390_, 2);
lean_dec_ref(v_goal_1381_);
v___x_1391_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_1392_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1393_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_1394_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1395_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5);
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1397_, 0, v_u_1387_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
lean_inc(v_toBind_1384_);
lean_inc_ref(v_00_u03c6_1386_);
lean_inc_ref(v___x_1397_);
v___f_1398_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1), 13, 12);
lean_closure_set(v___f_1398_, 0, v___x_1391_);
lean_closure_set(v___f_1398_, 1, v___x_1392_);
lean_closure_set(v___f_1398_, 2, v___x_1393_);
lean_closure_set(v___f_1398_, 3, v___x_1394_);
lean_closure_set(v___f_1398_, 4, v___x_1397_);
lean_closure_set(v___f_1398_, 5, v_00_u03c3s_1388_);
lean_closure_set(v___f_1398_, 6, v_hyps_1389_);
lean_closure_set(v___f_1398_, 7, v_target_1390_);
lean_closure_set(v___f_1398_, 8, v_00_u03c6_1386_);
lean_closure_set(v___f_1398_, 9, v_toPure_1382_);
lean_closure_set(v___f_1398_, 10, v_k_1383_);
lean_closure_set(v___f_1398_, 11, v_toBind_1384_);
v___x_1399_ = l_Lean_mkConst(v___x_1395_, v___x_1397_);
v___x_1400_ = l_Lean_mkApp3(v___x_1399_, v_00_u03c3s_1388_, v_target_1390_, v_00_u03c6_1386_);
v___x_1401_ = lean_box(0);
v___x_1402_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_1402_, 0, v___x_1400_);
lean_closure_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = lean_apply_2(v_inst_1385_, lean_box(0), v___x_1402_);
v___x_1404_ = lean_apply_4(v_toBind_1384_, lean_box(0), lean_box(0), v___x_1403_, v___f_1398_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object* v_inst_1405_, lean_object* v_inst_1406_, lean_object* v_goal_1407_, lean_object* v_k_1408_){
_start:
{
lean_object* v_toApplicative_1409_; lean_object* v_toBind_1410_; lean_object* v_toPure_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___f_1414_; lean_object* v___x_1415_; 
v_toApplicative_1409_ = lean_ctor_get(v_inst_1405_, 0);
lean_inc_ref(v_toApplicative_1409_);
v_toBind_1410_ = lean_ctor_get(v_inst_1405_, 1);
lean_inc_n(v_toBind_1410_, 2);
lean_dec_ref(v_inst_1405_);
v_toPure_1411_ = lean_ctor_get(v_toApplicative_1409_, 1);
lean_inc(v_toPure_1411_);
lean_dec_ref(v_toApplicative_1409_);
v___x_1412_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
lean_inc(v_inst_1406_);
v___x_1413_ = lean_apply_2(v_inst_1406_, lean_box(0), v___x_1412_);
v___f_1414_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1414_, 0, v_goal_1407_);
lean_closure_set(v___f_1414_, 1, v_toPure_1411_);
lean_closure_set(v___f_1414_, 2, v_k_1408_);
lean_closure_set(v___f_1414_, 3, v_toBind_1410_);
lean_closure_set(v___f_1414_, 4, v_inst_1406_);
v___x_1415_ = lean_apply_4(v_toBind_1410_, lean_box(0), lean_box(0), v___x_1413_, v___f_1414_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object* v_m_1416_, lean_object* v_00_u03b1_1417_, lean_object* v_inst_1418_, lean_object* v_inst_1419_, lean_object* v_goal_1420_, lean_object* v_k_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(v_inst_1418_, v_inst_1419_, v_goal_1420_, v_k_1421_);
return v___x_1422_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1423_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0);
v___x_1424_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0);
v___x_1425_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1426_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_1427_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1428_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_1429_ = l_Lean_Name_mkStr6(v___x_1428_, v___x_1427_, v___x_1426_, v___x_1425_, v___x_1424_, v___x_1423_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object* v_goal_1430_, lean_object* v_k_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v___x_1441_; uint8_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1441_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_1442_ = 0;
v___x_1443_ = lean_box(0);
v___x_1444_ = l_Lean_Meta_mkFreshExprMVar(v___x_1441_, v___x_1442_, v___x_1443_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v_u_1446_; lean_object* v_00_u03c3s_1447_; lean_object* v_hyps_1448_; lean_object* v_target_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc_n(v_a_1445_, 2);
lean_dec_ref(v___x_1444_);
v_u_1446_ = lean_ctor_get(v_goal_1430_, 0);
lean_inc(v_u_1446_);
v_00_u03c3s_1447_ = lean_ctor_get(v_goal_1430_, 1);
lean_inc_ref_n(v_00_u03c3s_1447_, 2);
v_hyps_1448_ = lean_ctor_get(v_goal_1430_, 2);
lean_inc_ref(v_hyps_1448_);
v_target_1449_ = lean_ctor_get(v_goal_1430_, 3);
lean_inc_ref_n(v_target_1449_, 2);
lean_dec_ref(v_goal_1430_);
v___x_1450_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5);
v___x_1451_ = lean_box(0);
v___x_1452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_u_1446_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
lean_inc_ref(v___x_1452_);
v___x_1453_ = l_Lean_mkConst(v___x_1450_, v___x_1452_);
v___x_1454_ = l_Lean_mkApp3(v___x_1453_, v_00_u03c3s_1447_, v_target_1449_, v_a_1445_);
v___x_1455_ = lean_box(0);
v___x_1456_ = l_Lean_Meta_synthInstance(v___x_1454_, v___x_1455_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1458_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref(v___x_1456_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
lean_inc(v___y_1437_);
lean_inc_ref(v___y_1436_);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
lean_inc(v___y_1433_);
lean_inc_ref(v___y_1432_);
lean_inc(v_a_1445_);
v___x_1458_ = lean_apply_10(v_k_1431_, v_a_1445_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, lean_box(0));
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1478_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1461_ = v___x_1458_;
v_isShared_1462_ = v_isSharedCheck_1478_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1458_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1478_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v_fst_1463_; lean_object* v_snd_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1477_; 
v_fst_1463_ = lean_ctor_get(v_a_1459_, 0);
v_snd_1464_ = lean_ctor_get(v_a_1459_, 1);
v_isSharedCheck_1477_ = !lean_is_exclusive(v_a_1459_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1466_ = v_a_1459_;
v_isShared_1467_ = v_isSharedCheck_1477_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_snd_1464_);
lean_inc(v_fst_1463_);
lean_dec(v_a_1459_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1477_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v_prf_1470_; lean_object* v___x_1472_; 
v___x_1468_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0);
v___x_1469_ = l_Lean_mkConst(v___x_1468_, v___x_1452_);
v_prf_1470_ = l_Lean_mkApp6(v___x_1469_, v_00_u03c3s_1447_, v_hyps_1448_, v_target_1449_, v_a_1445_, v_a_1457_, v_snd_1464_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 1, v_prf_1470_);
v___x_1472_ = v___x_1466_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_fst_1463_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_prf_1470_);
v___x_1472_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1474_; 
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1472_);
v___x_1474_ = v___x_1461_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
else
{
lean_dec(v_a_1457_);
lean_dec_ref(v___x_1452_);
lean_dec_ref(v_target_1449_);
lean_dec_ref(v_hyps_1448_);
lean_dec_ref(v_00_u03c3s_1447_);
lean_dec(v_a_1445_);
return v___x_1458_;
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___x_1452_);
lean_dec_ref(v_target_1449_);
lean_dec_ref(v_hyps_1448_);
lean_dec_ref(v_00_u03c3s_1447_);
lean_dec(v_a_1445_);
lean_dec_ref(v_k_1431_);
v_a_1479_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1456_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1456_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v_k_1431_);
lean_dec_ref(v_goal_1430_);
v_a_1487_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1444_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1444_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object* v_goal_1495_, lean_object* v_k_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1495_, v_k_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object* v_00_u03b1_1507_, lean_object* v_goal_1508_, lean_object* v_k_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1508_, v_k_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object* v_00_u03b1_1520_, lean_object* v_goal_1521_, lean_object* v_k_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(v_00_u03b1_1520_, v_goal_1521_, v_k_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object* v_fst_1533_, lean_object* v_00_u03c6_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lean_MVarId_getTag(v_fst_1533_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1546_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_a_1545_);
lean_dec_ref(v___x_1544_);
v___x_1546_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_00_u03c6_1534_, v_a_1545_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1556_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1556_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1556_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1554_; 
v___x_1551_ = l_Lean_Expr_mvarId_x21(v_a_1547_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
lean_ctor_set(v___x_1552_, 1, v_a_1547_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1552_);
v___x_1554_ = v___x_1549_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
v_a_1557_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1546_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1546_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v_00_u03c6_1534_);
v_a_1565_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1544_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1544_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object* v_fst_1573_, lean_object* v_00_u03c6_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(v_fst_1573_, v_00_u03c6_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object* v_snd_1585_, lean_object* v___f_1586_, lean_object* v_fst_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_snd_1585_, v___f_1586_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v_fst_1599_; lean_object* v_snd_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1610_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref(v___x_1597_);
v_fst_1599_ = lean_ctor_get(v_a_1598_, 0);
v_snd_1600_ = lean_ctor_get(v_a_1598_, 1);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_a_1598_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1602_ = v_a_1598_;
v_isShared_1603_ = v_isSharedCheck_1610_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_snd_1600_);
lean_inc(v_fst_1599_);
lean_dec(v_a_1598_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1610_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1604_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1587_, v_snd_1600_, v___y_1593_, v___y_1595_);
lean_dec_ref(v___x_1604_);
v___x_1605_ = lean_box(0);
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 1);
lean_ctor_set(v___x_1602_, 1, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_fst_1599_);
lean_ctor_set(v_reuseFailAlloc_1609_, 1, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1607_, v___y_1589_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
return v___x_1608_;
}
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec(v_fst_1587_);
v_a_1611_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1597_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1597_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object* v_snd_1619_, lean_object* v___f_1620_, lean_object* v_fst_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(v_snd_1619_, v___f_1620_, v_fst_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
return v_res_1631_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0(void){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_mk_string_unchecked("mpureIntro", 10, 10);
return v___x_1632_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1(void){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1633_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0);
v___x_1634_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1635_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1);
v___x_1636_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_1637_ = l_Lean_Name_mkStr4(v___x_1636_, v___x_1635_, v___x_1634_, v___x_1633_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object* v_x_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v___x_1648_; uint8_t v___x_1649_; 
v___x_1648_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1);
v___x_1649_ = l_Lean_Syntax_isOfKind(v_x_1638_, v___x_1648_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1650_;
}
else
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1640_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v_fst_1653_; lean_object* v_snd_1654_; lean_object* v___f_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref(v___x_1651_);
v_fst_1653_ = lean_ctor_get(v_a_1652_, 0);
lean_inc_n(v_fst_1653_, 3);
v_snd_1654_ = lean_ctor_get(v_a_1652_, 1);
lean_inc(v_snd_1654_);
lean_dec(v_a_1652_);
v___f_1655_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1655_, 0, v_fst_1653_);
v___f_1656_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1656_, 0, v_snd_1654_);
lean_closure_set(v___f_1656_, 1, v___f_1655_);
lean_closure_set(v___f_1656_, 2, v_fst_1653_);
v___x_1657_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1653_, v___f_1656_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1651_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1651_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object* v_x_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(v_x_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
lean_dec(v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
return v_res_1676_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0(void){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_mk_string_unchecked("elabMPureIntro", 14, 14);
return v___x_1677_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1(void){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1678_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0);
v___x_1679_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1);
v___x_1680_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1681_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1682_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0);
v___x_1683_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_1684_ = l_Lean_Name_mkStr6(v___x_1683_, v___x_1682_, v___x_1681_, v___x_1680_, v___x_1679_, v___x_1678_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1(){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1686_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1687_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1);
v___x_1688_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1);
v___x_1689_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed), 10, 0);
v___x_1690_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1686_, v___x_1687_, v___x_1688_, v___x_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___boxed(lean_object* v_a_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
return v_res_1692_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0(void){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_mk_string_unchecked("ULift", 5, 5);
return v___x_1693_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_mk_string_unchecked("down", 4, 4);
return v___x_1694_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2(void){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1);
v___x_1696_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0);
v___x_1697_ = l_Lean_Name_mkStr2(v___x_1696_, v___x_1695_);
return v___x_1697_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3(void){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_mk_string_unchecked("pure", 4, 4);
return v___x_1698_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4(void){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1699_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3);
v___x_1700_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2);
v___x_1701_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1702_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0);
v___x_1703_ = l_Lean_Name_mkStr4(v___x_1702_, v___x_1701_, v___x_1700_, v___x_1699_);
return v___x_1703_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5(void){
_start:
{
lean_object* v___x_1704_; lean_object* v_dummy_1705_; 
v___x_1704_ = lean_box(0);
v_dummy_1705_ = l_Lean_Expr_sort___override(v___x_1704_);
return v_dummy_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object* v_e_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1706_, v_a_1708_, v_a_1710_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1772_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1715_ = v___x_1712_;
v_isShared_1716_ = v_isSharedCheck_1772_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1712_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1772_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v___x_1717_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2);
v___x_1718_ = lean_unsigned_to_nat(2u);
v___x_1719_ = l_Lean_Expr_isAppOfArity(v_a_1713_, v___x_1717_, v___x_1718_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
lean_dec(v_a_1713_);
v___x_1720_ = lean_box(0);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1720_);
v___x_1722_ = v___x_1715_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; uint8_t v___x_1727_; 
v___x_1724_ = l_Lean_Expr_appArg_x21(v_a_1713_);
lean_dec(v_a_1713_);
v___x_1725_ = l_Lean_Expr_getAppFn(v___x_1724_);
v___x_1726_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4);
v___x_1727_ = l_Lean_Expr_isConstOf(v___x_1725_, v___x_1726_);
lean_dec_ref(v___x_1725_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1730_; 
lean_dec_ref(v___x_1724_);
v___x_1728_ = lean_box(0);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1728_);
v___x_1730_ = v___x_1715_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
else
{
lean_object* v_dummy_1732_; lean_object* v_nargs_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
v_dummy_1732_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5);
v_nargs_1733_ = l_Lean_Expr_getAppNumArgs(v___x_1724_);
lean_inc(v_nargs_1733_);
v___x_1734_ = lean_mk_array(v_nargs_1733_, v_dummy_1732_);
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1736_ = lean_nat_sub(v_nargs_1733_, v___x_1735_);
lean_dec(v_nargs_1733_);
v___x_1737_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1724_, v___x_1734_, v___x_1736_);
v___x_1738_ = lean_array_get_size(v___x_1737_);
v___x_1739_ = lean_nat_dec_lt(v___x_1738_, v___x_1718_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
lean_del_object(v___x_1715_);
v___x_1740_ = l_Lean_instInhabitedExpr;
v___x_1741_ = lean_unsigned_to_nat(0u);
v___x_1742_ = lean_array_get(v___x_1740_, v___x_1737_, v___x_1741_);
v___x_1743_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(v___x_1742_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1759_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1746_ = v___x_1743_;
v_isShared_1747_ = v_isSharedCheck_1759_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1743_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1759_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = lean_nat_sub(v___x_1738_, v___x_1718_);
v___x_1749_ = lean_nat_dec_eq(v_a_1744_, v___x_1748_);
lean_dec(v___x_1748_);
lean_dec(v_a_1744_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
lean_dec_ref(v___x_1737_);
v___x_1750_ = lean_box(0);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1750_);
v___x_1752_ = v___x_1746_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1757_; 
v___x_1754_ = lean_array_get(v___x_1740_, v___x_1737_, v___x_1735_);
lean_dec_ref(v___x_1737_);
v___x_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1755_);
v___x_1757_ = v___x_1746_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
else
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1767_; 
lean_dec_ref(v___x_1737_);
v_a_1760_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1762_ = v___x_1743_;
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1743_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1763_ == 0)
{
v___x_1765_ = v___x_1762_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
lean_dec_ref(v___x_1737_);
v___x_1768_ = lean_box(0);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1768_);
v___x_1770_ = v___x_1715_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
v_a_1773_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1712_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1712_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object* v_e_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_e_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
lean_dec(v_a_1785_);
lean_dec_ref(v_a_1784_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object* v_mvarId_1788_, lean_object* v_val_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_mctx_1795_; lean_object* v_cache_1796_; lean_object* v_zetaDeltaFVarIds_1797_; lean_object* v_postponed_1798_; lean_object* v_diag_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1827_; 
v___x_1793_ = lean_st_ref_get(v___y_1791_);
lean_dec(v___x_1793_);
v___x_1794_ = lean_st_ref_take(v___y_1790_);
v_mctx_1795_ = lean_ctor_get(v___x_1794_, 0);
v_cache_1796_ = lean_ctor_get(v___x_1794_, 1);
v_zetaDeltaFVarIds_1797_ = lean_ctor_get(v___x_1794_, 2);
v_postponed_1798_ = lean_ctor_get(v___x_1794_, 3);
v_diag_1799_ = lean_ctor_get(v___x_1794_, 4);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1801_ = v___x_1794_;
v_isShared_1802_ = v_isSharedCheck_1827_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_diag_1799_);
lean_inc(v_postponed_1798_);
lean_inc(v_zetaDeltaFVarIds_1797_);
lean_inc(v_cache_1796_);
lean_inc(v_mctx_1795_);
lean_dec(v___x_1794_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1827_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v_depth_1803_; lean_object* v_levelAssignDepth_1804_; lean_object* v_lmvarCounter_1805_; lean_object* v_mvarCounter_1806_; lean_object* v_lDecls_1807_; lean_object* v_decls_1808_; lean_object* v_userNames_1809_; lean_object* v_lAssignment_1810_; lean_object* v_eAssignment_1811_; lean_object* v_dAssignment_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1826_; 
v_depth_1803_ = lean_ctor_get(v_mctx_1795_, 0);
v_levelAssignDepth_1804_ = lean_ctor_get(v_mctx_1795_, 1);
v_lmvarCounter_1805_ = lean_ctor_get(v_mctx_1795_, 2);
v_mvarCounter_1806_ = lean_ctor_get(v_mctx_1795_, 3);
v_lDecls_1807_ = lean_ctor_get(v_mctx_1795_, 4);
v_decls_1808_ = lean_ctor_get(v_mctx_1795_, 5);
v_userNames_1809_ = lean_ctor_get(v_mctx_1795_, 6);
v_lAssignment_1810_ = lean_ctor_get(v_mctx_1795_, 7);
v_eAssignment_1811_ = lean_ctor_get(v_mctx_1795_, 8);
v_dAssignment_1812_ = lean_ctor_get(v_mctx_1795_, 9);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_mctx_1795_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1814_ = v_mctx_1795_;
v_isShared_1815_ = v_isSharedCheck_1826_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_dAssignment_1812_);
lean_inc(v_eAssignment_1811_);
lean_inc(v_lAssignment_1810_);
lean_inc(v_userNames_1809_);
lean_inc(v_decls_1808_);
lean_inc(v_lDecls_1807_);
lean_inc(v_mvarCounter_1806_);
lean_inc(v_lmvarCounter_1805_);
lean_inc(v_levelAssignDepth_1804_);
lean_inc(v_depth_1803_);
lean_dec(v_mctx_1795_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1826_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1816_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1811_, v_mvarId_1788_, v_val_1789_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 8, v___x_1816_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_depth_1803_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_levelAssignDepth_1804_);
lean_ctor_set(v_reuseFailAlloc_1825_, 2, v_lmvarCounter_1805_);
lean_ctor_set(v_reuseFailAlloc_1825_, 3, v_mvarCounter_1806_);
lean_ctor_set(v_reuseFailAlloc_1825_, 4, v_lDecls_1807_);
lean_ctor_set(v_reuseFailAlloc_1825_, 5, v_decls_1808_);
lean_ctor_set(v_reuseFailAlloc_1825_, 6, v_userNames_1809_);
lean_ctor_set(v_reuseFailAlloc_1825_, 7, v_lAssignment_1810_);
lean_ctor_set(v_reuseFailAlloc_1825_, 8, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1825_, 9, v_dAssignment_1812_);
v___x_1818_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1820_; 
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v___x_1818_);
v___x_1820_ = v___x_1801_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_cache_1796_);
lean_ctor_set(v_reuseFailAlloc_1824_, 2, v_zetaDeltaFVarIds_1797_);
lean_ctor_set(v_reuseFailAlloc_1824_, 3, v_postponed_1798_);
lean_ctor_set(v_reuseFailAlloc_1824_, 4, v_diag_1799_);
v___x_1820_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1821_ = lean_st_ref_set(v___y_1790_, v___x_1820_);
v___x_1822_ = lean_box(0);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
return v___x_1823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object* v_mvarId_1828_, lean_object* v_val_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_1828_, v_val_1829_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
lean_dec(v___y_1830_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object* v_msgData_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; lean_object* v_env_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v_mctx_1844_; lean_object* v_lctx_1845_; lean_object* v_options_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1840_ = lean_st_ref_get(v___y_1838_);
v_env_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc_ref(v_env_1841_);
lean_dec(v___x_1840_);
v___x_1842_ = lean_st_ref_get(v___y_1838_);
lean_dec(v___x_1842_);
v___x_1843_ = lean_st_ref_get(v___y_1836_);
v_mctx_1844_ = lean_ctor_get(v___x_1843_, 0);
lean_inc_ref(v_mctx_1844_);
lean_dec(v___x_1843_);
v_lctx_1845_ = lean_ctor_get(v___y_1835_, 2);
v_options_1846_ = lean_ctor_get(v___y_1837_, 2);
lean_inc_ref(v_options_1846_);
lean_inc_ref(v_lctx_1845_);
v___x_1847_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1847_, 0, v_env_1841_);
lean_ctor_set(v___x_1847_, 1, v_mctx_1844_);
lean_ctor_set(v___x_1847_, 2, v_lctx_1845_);
lean_ctor_set(v___x_1847_, 3, v_options_1846_);
v___x_1848_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v_msgData_1834_);
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object* v_msgData_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msgData_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
return v_res_1856_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1857_; double v___x_1858_; 
v___x_1857_ = lean_unsigned_to_nat(0u);
v___x_1858_ = lean_float_of_nat(v___x_1857_);
return v___x_1858_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1859_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_unsigned_to_nat(0u);
v___x_1861_ = lean_mk_empty_array_with_capacity(v___x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object* v_cls_1862_, lean_object* v_msg_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_ref_1869_; lean_object* v___x_1870_; lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1915_; 
v_ref_1869_ = lean_ctor_get(v___y_1866_, 5);
v___x_1870_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1873_ = v___x_1870_;
v_isShared_1874_ = v_isSharedCheck_1915_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1870_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1915_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v_traceState_1876_; lean_object* v_env_1877_; lean_object* v_nextMacroScope_1878_; lean_object* v_ngen_1879_; lean_object* v_auxDeclNGen_1880_; lean_object* v_cache_1881_; lean_object* v_messages_1882_; lean_object* v_infoState_1883_; lean_object* v_snapshotTasks_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1914_; 
v___x_1875_ = lean_st_ref_take(v___y_1867_);
v_traceState_1876_ = lean_ctor_get(v___x_1875_, 4);
v_env_1877_ = lean_ctor_get(v___x_1875_, 0);
v_nextMacroScope_1878_ = lean_ctor_get(v___x_1875_, 1);
v_ngen_1879_ = lean_ctor_get(v___x_1875_, 2);
v_auxDeclNGen_1880_ = lean_ctor_get(v___x_1875_, 3);
v_cache_1881_ = lean_ctor_get(v___x_1875_, 5);
v_messages_1882_ = lean_ctor_get(v___x_1875_, 6);
v_infoState_1883_ = lean_ctor_get(v___x_1875_, 7);
v_snapshotTasks_1884_ = lean_ctor_get(v___x_1875_, 8);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1886_ = v___x_1875_;
v_isShared_1887_ = v_isSharedCheck_1914_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_snapshotTasks_1884_);
lean_inc(v_infoState_1883_);
lean_inc(v_messages_1882_);
lean_inc(v_cache_1881_);
lean_inc(v_traceState_1876_);
lean_inc(v_auxDeclNGen_1880_);
lean_inc(v_ngen_1879_);
lean_inc(v_nextMacroScope_1878_);
lean_inc(v_env_1877_);
lean_dec(v___x_1875_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1914_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
uint64_t v_tid_1888_; lean_object* v_traces_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1913_; 
v_tid_1888_ = lean_ctor_get_uint64(v_traceState_1876_, sizeof(void*)*1);
v_traces_1889_ = lean_ctor_get(v_traceState_1876_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_traceState_1876_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1891_ = v_traceState_1876_;
v_isShared_1892_ = v_isSharedCheck_1913_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_traces_1889_);
lean_dec(v_traceState_1876_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1913_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; double v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1893_ = lean_box(0);
v___x_1894_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_1895_ = 0;
v___x_1896_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1);
v___x_1897_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1897_, 0, v_cls_1862_);
lean_ctor_set(v___x_1897_, 1, v___x_1893_);
lean_ctor_set(v___x_1897_, 2, v___x_1896_);
lean_ctor_set_float(v___x_1897_, sizeof(void*)*3, v___x_1894_);
lean_ctor_set_float(v___x_1897_, sizeof(void*)*3 + 8, v___x_1894_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 16, v___x_1895_);
v___x_1898_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2);
v___x_1899_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v_a_1871_);
lean_ctor_set(v___x_1899_, 2, v___x_1898_);
lean_inc(v_ref_1869_);
v___x_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1900_, 0, v_ref_1869_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_PersistentArray_push___redArg(v_traces_1889_, v___x_1900_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v___x_1901_);
v___x_1903_ = v___x_1891_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1901_);
lean_ctor_set_uint64(v_reuseFailAlloc_1912_, sizeof(void*)*1, v_tid_1888_);
v___x_1903_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1905_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 4, v___x_1903_);
v___x_1905_ = v___x_1886_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_env_1877_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v_nextMacroScope_1878_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v_ngen_1879_);
lean_ctor_set(v_reuseFailAlloc_1911_, 3, v_auxDeclNGen_1880_);
lean_ctor_set(v_reuseFailAlloc_1911_, 4, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1911_, 5, v_cache_1881_);
lean_ctor_set(v_reuseFailAlloc_1911_, 6, v_messages_1882_);
lean_ctor_set(v_reuseFailAlloc_1911_, 7, v_infoState_1883_);
lean_ctor_set(v_reuseFailAlloc_1911_, 8, v_snapshotTasks_1884_);
v___x_1905_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___x_1906_ = lean_st_ref_set(v___y_1867_, v___x_1905_);
v___x_1907_ = lean_box(0);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 0, v___x_1907_);
v___x_1909_ = v___x_1873_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1907_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object* v_cls_1916_, lean_object* v_msg_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v_cls_1916_, v_msg_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1923_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__0(void){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_mk_string_unchecked("True", 4, 4);
return v___x_1924_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__1(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__0, &l_Lean_MVarId_applyRflAndAndIntro___closed__0_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__0);
v___x_1926_ = l_Lean_Name_mkStr1(v___x_1925_);
return v___x_1926_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__2(void){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_mk_string_unchecked("And", 3, 3);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__3(void){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__2, &l_Lean_MVarId_applyRflAndAndIntro___closed__2_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__2);
v___x_1929_ = l_Lean_Name_mkStr1(v___x_1928_);
return v___x_1929_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__4(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1930_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0);
v___x_1931_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__2, &l_Lean_MVarId_applyRflAndAndIntro___closed__2_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__2);
v___x_1932_ = l_Lean_Name_mkStr2(v___x_1931_, v___x_1930_);
return v___x_1932_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_box(0);
v___x_1934_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__4, &l_Lean_MVarId_applyRflAndAndIntro___closed__4_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__4);
v___x_1935_ = l_Lean_mkConst(v___x_1934_, v___x_1933_);
return v___x_1935_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__6(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0);
v___x_1937_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__0, &l_Lean_MVarId_applyRflAndAndIntro___closed__0_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__0);
v___x_1938_ = l_Lean_Name_mkStr2(v___x_1937_, v___x_1936_);
return v___x_1938_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1939_ = lean_box(0);
v___x_1940_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__6, &l_Lean_MVarId_applyRflAndAndIntro___closed__6_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__6);
v___x_1941_ = l_Lean_mkConst(v___x_1940_, v___x_1939_);
return v___x_1941_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__8(void){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = lean_mk_string_unchecked("spec", 4, 4);
return v___x_1942_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1943_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__8, &l_Lean_MVarId_applyRflAndAndIntro___closed__8_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__8);
v___x_1944_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1);
v___x_1945_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_1946_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0);
v___x_1947_ = l_Lean_Name_mkStr4(v___x_1946_, v___x_1945_, v___x_1944_, v___x_1943_);
return v___x_1947_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__10(void){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_1948_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__11(void){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1949_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__10, &l_Lean_MVarId_applyRflAndAndIntro___closed__10_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__10);
v___x_1950_ = l_Lean_Name_mkStr1(v___x_1949_);
return v___x_1950_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__12(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__9, &l_Lean_MVarId_applyRflAndAndIntro___closed__9_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9);
v___x_1952_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__11, &l_Lean_MVarId_applyRflAndAndIntro___closed__11_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__11);
v___x_1953_ = l_Lean_Name_append(v___x_1952_, v___x_1951_);
return v___x_1953_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__13(void){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_mk_string_unchecked("pure Prop: ", 11, 11);
return v___x_1954_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__14(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__13, &l_Lean_MVarId_applyRflAndAndIntro___closed__13_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__13);
v___x_1956_ = l_Lean_stringToMessageData(v___x_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object* v_mvar_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_){
_start:
{
lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v_a_2013_; lean_object* v___y_2025_; lean_object* v___x_2046_; 
lean_inc(v_mvar_1957_);
v___x_2046_ = l_Lean_MVarId_getType(v_mvar_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref(v___x_2046_);
v___x_2048_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2047_, v_a_1959_, v_a_1961_);
v___y_2025_ = v___x_2048_;
goto v___jp_2024_;
}
else
{
v___y_2025_ = v___x_2046_;
goto v___jp_2024_;
}
v___jp_1963_:
{
lean_object* v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__1, &l_Lean_MVarId_applyRflAndAndIntro___closed__1_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__1);
v___x_1970_ = l_Lean_Expr_isAppOf(v___y_1964_, v___x_1969_);
if (v___x_1970_ == 0)
{
lean_object* v___x_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1971_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__3, &l_Lean_MVarId_applyRflAndAndIntro___closed__3_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__3);
v___x_1972_ = lean_unsigned_to_nat(2u);
v___x_1973_ = l_Lean_Expr_isAppOfArity(v___y_1964_, v___x_1971_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; 
lean_inc(v_mvar_1957_);
v___x_1974_ = l_Lean_MVarId_setType___redArg(v_mvar_1957_, v___y_1964_, v___y_1966_, v___y_1968_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v___x_1975_; 
lean_dec_ref(v___x_1974_);
v___x_1975_ = l_Lean_MVarId_applyRfl(v_mvar_1957_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
return v___x_1975_;
}
else
{
lean_dec(v_mvar_1957_);
return v___x_1974_;
}
}
else
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1976_ = l_Lean_Expr_appFn_x21(v___y_1964_);
v___x_1977_ = l_Lean_Expr_appArg_x21(v___x_1976_);
lean_dec_ref(v___x_1976_);
lean_inc_ref(v___x_1977_);
v___x_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
v___x_1979_ = 0;
v___x_1980_ = lean_box(0);
v___x_1981_ = l_Lean_Meta_mkFreshExprMVar(v___x_1978_, v___x_1979_, v___x_1980_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v_a_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
lean_inc(v_a_1982_);
lean_dec_ref(v___x_1981_);
v___x_1983_ = l_Lean_Expr_appArg_x21(v___y_1964_);
lean_dec_ref(v___y_1964_);
lean_inc_ref(v___x_1983_);
v___x_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
v___x_1985_ = l_Lean_Meta_mkFreshExprMVar(v___x_1984_, v___x_1979_, v___x_1980_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = l_Lean_Expr_mvarId_x21(v_a_1982_);
v___x_1988_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1987_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
lean_dec_ref(v___x_1988_);
v___x_1989_ = l_Lean_Expr_mvarId_x21(v_a_1986_);
v___x_1990_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1989_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
lean_dec_ref(v___x_1990_);
v___x_1991_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__5, &l_Lean_MVarId_applyRflAndAndIntro___closed__5_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5);
v___x_1992_ = l_Lean_mkApp4(v___x_1991_, v___x_1977_, v___x_1983_, v_a_1982_, v_a_1986_);
v___x_1993_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1957_, v___x_1992_, v___y_1966_, v___y_1968_);
return v___x_1993_;
}
else
{
lean_dec(v_a_1986_);
lean_dec_ref(v___x_1983_);
lean_dec(v_a_1982_);
lean_dec_ref(v___x_1977_);
lean_dec(v_mvar_1957_);
return v___x_1990_;
}
}
else
{
lean_dec(v_a_1986_);
lean_dec_ref(v___x_1983_);
lean_dec(v_a_1982_);
lean_dec_ref(v___x_1977_);
lean_dec(v_mvar_1957_);
return v___x_1988_;
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec_ref(v___x_1983_);
lean_dec(v_a_1982_);
lean_dec_ref(v___x_1977_);
lean_dec(v_mvar_1957_);
v_a_1994_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1985_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1985_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec_ref(v___x_1977_);
lean_dec_ref(v___y_1964_);
lean_dec(v_mvar_1957_);
v_a_2002_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1981_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1981_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
else
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
lean_dec_ref(v___y_1964_);
v___x_2010_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__7, &l_Lean_MVarId_applyRflAndAndIntro___closed__7_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7);
v___x_2011_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1957_, v___x_2010_, v___y_1966_, v___y_1968_);
return v___x_2011_;
}
}
v___jp_2012_:
{
lean_object* v_options_2014_; uint8_t v_hasTrace_2015_; 
v_options_2014_ = lean_ctor_get(v_a_1960_, 2);
v_hasTrace_2015_ = lean_ctor_get_uint8(v_options_2014_, sizeof(void*)*1);
if (v_hasTrace_2015_ == 0)
{
v___y_1964_ = v_a_2013_;
v___y_1965_ = v_a_1958_;
v___y_1966_ = v_a_1959_;
v___y_1967_ = v_a_1960_;
v___y_1968_ = v_a_1961_;
goto v___jp_1963_;
}
else
{
lean_object* v_inheritedTraceOptions_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_inheritedTraceOptions_2016_ = lean_ctor_get(v_a_1960_, 13);
v___x_2017_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__9, &l_Lean_MVarId_applyRflAndAndIntro___closed__9_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9);
v___x_2018_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__12, &l_Lean_MVarId_applyRflAndAndIntro___closed__12_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__12);
v___x_2019_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2016_, v_options_2014_, v___x_2018_);
if (v___x_2019_ == 0)
{
v___y_1964_ = v_a_2013_;
v___y_1965_ = v_a_1958_;
v___y_1966_ = v_a_1959_;
v___y_1967_ = v_a_1960_;
v___y_1968_ = v_a_1961_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2020_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__14, &l_Lean_MVarId_applyRflAndAndIntro___closed__14_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__14);
lean_inc_ref(v_a_2013_);
v___x_2021_ = l_Lean_MessageData_ofExpr(v_a_2013_);
v___x_2022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2020_);
lean_ctor_set(v___x_2022_, 1, v___x_2021_);
v___x_2023_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v___x_2017_, v___x_2022_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_dec_ref(v___x_2023_);
v___y_1964_ = v_a_2013_;
v___y_1965_ = v_a_1958_;
v___y_1966_ = v_a_1959_;
v___y_1967_ = v_a_1960_;
v___y_1968_ = v_a_1961_;
goto v___jp_1963_;
}
else
{
lean_dec_ref(v_a_2013_);
lean_dec(v_mvar_1957_);
return v___x_2023_;
}
}
}
}
v___jp_2024_:
{
if (lean_obj_tag(v___y_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2027_; 
v_a_2026_ = lean_ctor_get(v___y_2025_, 0);
lean_inc_n(v_a_2026_, 2);
lean_dec_ref(v___y_2025_);
v___x_2027_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_a_2026_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref(v___x_2027_);
if (lean_obj_tag(v_a_2028_) == 0)
{
v_a_2013_ = v_a_2026_;
goto v___jp_2012_;
}
else
{
lean_object* v_val_2029_; 
lean_dec(v_a_2026_);
v_val_2029_ = lean_ctor_get(v_a_2028_, 0);
lean_inc(v_val_2029_);
lean_dec_ref(v_a_2028_);
v_a_2013_ = v_val_2029_;
goto v___jp_2012_;
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_a_2026_);
lean_dec(v_mvar_1957_);
v_a_2030_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2027_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2027_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec(v_mvar_1957_);
v_a_2038_ = lean_ctor_get(v___y_2025_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___y_2025_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___y_2025_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___y_2025_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object* v_mvar_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lean_MVarId_applyRflAndAndIntro(v_mvar_2049_, v_a_2050_, v_a_2051_, v_a_2052_, v_a_2053_);
lean_dec(v_a_2053_);
lean_dec_ref(v_a_2052_);
lean_dec(v_a_2051_);
lean_dec_ref(v_a_2050_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object* v_mvarId_2056_, lean_object* v_val_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_2056_, v_val_2057_, v___y_2059_, v___y_2061_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object* v_mvarId_2064_, lean_object* v_val_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(v_mvarId_2064_, v_val_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object* v_goal_2072_, lean_object* v_k_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2079_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_2080_ = 0;
v___x_2081_ = lean_box(0);
v___x_2082_ = l_Lean_Meta_mkFreshExprMVar(v___x_2079_, v___x_2080_, v___x_2081_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v_u_2084_; lean_object* v_00_u03c3s_2085_; lean_object* v_hyps_2086_; lean_object* v_target_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc_n(v_a_2083_, 2);
lean_dec_ref(v___x_2082_);
v_u_2084_ = lean_ctor_get(v_goal_2072_, 0);
lean_inc(v_u_2084_);
v_00_u03c3s_2085_ = lean_ctor_get(v_goal_2072_, 1);
lean_inc_ref_n(v_00_u03c3s_2085_, 2);
v_hyps_2086_ = lean_ctor_get(v_goal_2072_, 2);
lean_inc_ref(v_hyps_2086_);
v_target_2087_ = lean_ctor_get(v_goal_2072_, 3);
lean_inc_ref_n(v_target_2087_, 2);
lean_dec_ref(v_goal_2072_);
v___x_2088_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5);
v___x_2089_ = lean_box(0);
v___x_2090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2090_, 0, v_u_2084_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
lean_inc_ref(v___x_2090_);
v___x_2091_ = l_Lean_mkConst(v___x_2088_, v___x_2090_);
v___x_2092_ = l_Lean_mkApp3(v___x_2091_, v_00_u03c3s_2085_, v_target_2087_, v_a_2083_);
v___x_2093_ = lean_box(0);
v___x_2094_ = l_Lean_Meta_synthInstance(v___x_2092_, v___x_2093_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref(v___x_2094_);
lean_inc(v___y_2077_);
lean_inc_ref(v___y_2076_);
lean_inc(v___y_2075_);
lean_inc_ref(v___y_2074_);
lean_inc(v_a_2083_);
v___x_2096_ = lean_apply_6(v_k_2073_, v_a_2083_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, lean_box(0));
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
if (lean_obj_tag(v_a_2097_) == 0)
{
lean_dec(v_a_2095_);
lean_dec_ref(v___x_2090_);
lean_dec_ref(v_target_2087_);
lean_dec_ref(v_hyps_2086_);
lean_dec_ref(v_00_u03c3s_2085_);
lean_dec(v_a_2083_);
return v___x_2096_;
}
else
{
lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2124_; 
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2124_ == 0)
{
lean_object* v_unused_2125_; 
v_unused_2125_ = lean_ctor_get(v___x_2096_, 0);
lean_dec(v_unused_2125_);
v___x_2099_ = v___x_2096_;
v_isShared_2100_ = v_isSharedCheck_2124_;
goto v_resetjp_2098_;
}
else
{
lean_dec(v___x_2096_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2124_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v_val_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2123_; 
v_val_2101_ = lean_ctor_get(v_a_2097_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_a_2097_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2103_ = v_a_2097_;
v_isShared_2104_ = v_isSharedCheck_2123_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_val_2101_);
lean_dec(v_a_2097_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2123_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v_fst_2105_; lean_object* v_snd_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2122_; 
v_fst_2105_ = lean_ctor_get(v_val_2101_, 0);
v_snd_2106_ = lean_ctor_get(v_val_2101_, 1);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_val_2101_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2108_ = v_val_2101_;
v_isShared_2109_ = v_isSharedCheck_2122_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_snd_2106_);
lean_inc(v_fst_2105_);
lean_dec(v_val_2101_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2122_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v_prf_2112_; lean_object* v___x_2114_; 
v___x_2110_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0);
v___x_2111_ = l_Lean_mkConst(v___x_2110_, v___x_2090_);
v_prf_2112_ = l_Lean_mkApp6(v___x_2111_, v_00_u03c3s_2085_, v_hyps_2086_, v_target_2087_, v_a_2083_, v_a_2095_, v_snd_2106_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 1, v_prf_2112_);
v___x_2114_ = v___x_2108_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_fst_2105_);
lean_ctor_set(v_reuseFailAlloc_2121_, 1, v_prf_2112_);
v___x_2114_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2116_; 
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v___x_2114_);
v___x_2116_ = v___x_2103_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2114_);
v___x_2116_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
lean_object* v___x_2118_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 0, v___x_2116_);
v___x_2118_ = v___x_2099_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
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
lean_dec(v_a_2095_);
lean_dec_ref(v___x_2090_);
lean_dec_ref(v_target_2087_);
lean_dec_ref(v_hyps_2086_);
lean_dec_ref(v_00_u03c3s_2085_);
lean_dec(v_a_2083_);
return v___x_2096_;
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v___x_2090_);
lean_dec_ref(v_target_2087_);
lean_dec_ref(v_hyps_2086_);
lean_dec_ref(v_00_u03c3s_2085_);
lean_dec(v_a_2083_);
lean_dec_ref(v_k_2073_);
v_a_2126_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2094_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2094_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec_ref(v_k_2073_);
lean_dec_ref(v_goal_2072_);
v_a_2134_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2082_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2082_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2134_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object* v_goal_2142_, lean_object* v_k_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2142_, v_k_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object* v_00_u03b1_2150_, lean_object* v_goal_2151_, lean_object* v_k_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; 
v___x_2158_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2151_, v_k_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object* v_00_u03b1_2159_, lean_object* v_goal_2160_, lean_object* v_k_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(v_00_u03b1_2159_, v_goal_2160_, v_k_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object* v_cls_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v_options_2174_; uint8_t v_hasTrace_2175_; 
v_options_2174_ = lean_ctor_get(v___y_2171_, 2);
v_hasTrace_2175_ = lean_ctor_get_uint8(v_options_2174_, sizeof(void*)*1);
if (v_hasTrace_2175_ == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
lean_dec(v_cls_2168_);
v___x_2176_ = lean_box(v_hasTrace_2175_);
v___x_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
return v___x_2178_;
}
else
{
lean_object* v_inheritedTraceOptions_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v_inheritedTraceOptions_2179_ = lean_ctor_get(v___y_2171_, 13);
v___x_2180_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__11, &l_Lean_MVarId_applyRflAndAndIntro___closed__11_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__11);
v___x_2181_ = l_Lean_Name_append(v___x_2180_, v_cls_2168_);
v___x_2182_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2179_, v_options_2174_, v___x_2181_);
lean_dec(v___x_2181_);
v___x_2183_ = lean_box(v___x_2182_);
v___x_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object* v_cls_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
return v_res_2192_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = lean_box(0);
v___x_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object* v_cls_2195_, lean_object* v_msg_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_ref_2202_; lean_object* v___x_2203_; lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2248_; 
v_ref_2202_ = lean_ctor_get(v___y_2199_, 5);
v___x_2203_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2206_ = v___x_2203_;
v_isShared_2207_ = v_isSharedCheck_2248_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2203_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2248_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v_traceState_2209_; lean_object* v_env_2210_; lean_object* v_nextMacroScope_2211_; lean_object* v_ngen_2212_; lean_object* v_auxDeclNGen_2213_; lean_object* v_cache_2214_; lean_object* v_messages_2215_; lean_object* v_infoState_2216_; lean_object* v_snapshotTasks_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2247_; 
v___x_2208_ = lean_st_ref_take(v___y_2200_);
v_traceState_2209_ = lean_ctor_get(v___x_2208_, 4);
v_env_2210_ = lean_ctor_get(v___x_2208_, 0);
v_nextMacroScope_2211_ = lean_ctor_get(v___x_2208_, 1);
v_ngen_2212_ = lean_ctor_get(v___x_2208_, 2);
v_auxDeclNGen_2213_ = lean_ctor_get(v___x_2208_, 3);
v_cache_2214_ = lean_ctor_get(v___x_2208_, 5);
v_messages_2215_ = lean_ctor_get(v___x_2208_, 6);
v_infoState_2216_ = lean_ctor_get(v___x_2208_, 7);
v_snapshotTasks_2217_ = lean_ctor_get(v___x_2208_, 8);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2219_ = v___x_2208_;
v_isShared_2220_ = v_isSharedCheck_2247_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_snapshotTasks_2217_);
lean_inc(v_infoState_2216_);
lean_inc(v_messages_2215_);
lean_inc(v_cache_2214_);
lean_inc(v_traceState_2209_);
lean_inc(v_auxDeclNGen_2213_);
lean_inc(v_ngen_2212_);
lean_inc(v_nextMacroScope_2211_);
lean_inc(v_env_2210_);
lean_dec(v___x_2208_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2247_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
uint64_t v_tid_2221_; lean_object* v_traces_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2246_; 
v_tid_2221_ = lean_ctor_get_uint64(v_traceState_2209_, sizeof(void*)*1);
v_traces_2222_ = lean_ctor_get(v_traceState_2209_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_traceState_2209_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2224_ = v_traceState_2209_;
v_isShared_2225_ = v_isSharedCheck_2246_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_traces_2222_);
lean_dec(v_traceState_2209_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2246_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; double v___x_2227_; uint8_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2226_ = lean_box(0);
v___x_2227_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_2228_ = 0;
v___x_2229_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1);
v___x_2230_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2230_, 0, v_cls_2195_);
lean_ctor_set(v___x_2230_, 1, v___x_2226_);
lean_ctor_set(v___x_2230_, 2, v___x_2229_);
lean_ctor_set_float(v___x_2230_, sizeof(void*)*3, v___x_2227_);
lean_ctor_set_float(v___x_2230_, sizeof(void*)*3 + 8, v___x_2227_);
lean_ctor_set_uint8(v___x_2230_, sizeof(void*)*3 + 16, v___x_2228_);
v___x_2231_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2);
v___x_2232_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2230_);
lean_ctor_set(v___x_2232_, 1, v_a_2204_);
lean_ctor_set(v___x_2232_, 2, v___x_2231_);
lean_inc(v_ref_2202_);
v___x_2233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2233_, 0, v_ref_2202_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
v___x_2234_ = l_Lean_PersistentArray_push___redArg(v_traces_2222_, v___x_2233_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 0, v___x_2234_);
v___x_2236_ = v___x_2224_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2234_);
lean_ctor_set_uint64(v_reuseFailAlloc_2245_, sizeof(void*)*1, v_tid_2221_);
v___x_2236_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
lean_object* v___x_2238_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 4, v___x_2236_);
v___x_2238_ = v___x_2219_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_env_2210_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v_nextMacroScope_2211_);
lean_ctor_set(v_reuseFailAlloc_2244_, 2, v_ngen_2212_);
lean_ctor_set(v_reuseFailAlloc_2244_, 3, v_auxDeclNGen_2213_);
lean_ctor_set(v_reuseFailAlloc_2244_, 4, v___x_2236_);
lean_ctor_set(v_reuseFailAlloc_2244_, 5, v_cache_2214_);
lean_ctor_set(v_reuseFailAlloc_2244_, 6, v_messages_2215_);
lean_ctor_set(v_reuseFailAlloc_2244_, 7, v_infoState_2216_);
lean_ctor_set(v_reuseFailAlloc_2244_, 8, v_snapshotTasks_2217_);
v___x_2238_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2242_; 
v___x_2239_ = lean_st_ref_set(v___y_2200_, v___x_2238_);
v___x_2240_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 0, v___x_2240_);
v___x_2242_ = v___x_2206_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object* v_cls_2249_, lean_object* v_msg_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2249_, v_msg_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
return v_res_2256_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = lean_mk_string_unchecked("discharged: ", 12, 12);
return v___x_2257_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0);
v___x_2259_ = l_Lean_stringToMessageData(v___x_2258_);
return v___x_2259_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = lean_mk_string_unchecked("discharge\? ", 11, 11);
return v___x_2260_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2);
v___x_2262_ = l_Lean_stringToMessageData(v___x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object* v___f_2263_, lean_object* v_cls_2264_, lean_object* v_00_u03c6_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___y_2272_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2281_; lean_object* v___x_2323_; 
lean_inc(v___y_2269_);
lean_inc_ref(v___y_2268_);
lean_inc(v___y_2267_);
lean_inc_ref(v___y_2266_);
v___x_2323_ = lean_apply_5(v___f_2263_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, lean_box(0));
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2346_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2326_ = v___x_2323_;
v_isShared_2327_ = v_isSharedCheck_2346_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2323_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2346_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
if (lean_obj_tag(v_a_2324_) == 0)
{
lean_object* v___x_2328_; lean_object* v___x_2330_; 
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v___x_2328_ = lean_box(0);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2328_);
v___x_2330_ = v___x_2326_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
else
{
lean_object* v_val_2332_; uint8_t v___x_2333_; 
lean_del_object(v___x_2326_);
v_val_2332_ = lean_ctor_get(v_a_2324_, 0);
lean_inc(v_val_2332_);
lean_dec_ref(v_a_2324_);
v___x_2333_ = lean_unbox(v_val_2332_);
lean_dec(v_val_2332_);
if (v___x_2333_ == 0)
{
v___y_2278_ = v___y_2266_;
v___y_2279_ = v___y_2267_;
v___y_2280_ = v___y_2268_;
v___y_2281_ = v___y_2269_;
goto v___jp_2277_;
}
else
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2334_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3);
lean_inc_ref(v_00_u03c6_2265_);
v___x_2335_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2265_);
v___x_2336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2334_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
lean_inc(v_cls_2264_);
v___x_2337_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2264_, v___x_2336_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_dec_ref(v___x_2337_);
v___y_2278_ = v___y_2266_;
v___y_2279_ = v___y_2267_;
v___y_2280_ = v___y_2268_;
v___y_2281_ = v___y_2269_;
goto v___jp_2277_;
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2337_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v_a_2347_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2323_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2323_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
v___jp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2273_ = lean_box(0);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2273_);
lean_ctor_set(v___x_2274_, 1, v___y_2272_);
v___x_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
return v___x_2276_;
}
v___jp_2277_:
{
lean_object* v___x_2282_; uint8_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
lean_inc_ref(v_00_u03c6_2265_);
v___x_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2282_, 0, v_00_u03c6_2265_);
v___x_2283_ = 0;
v___x_2284_ = lean_box(0);
v___x_2285_ = l_Lean_Meta_mkFreshExprMVar(v___x_2282_, v___x_2283_, v___x_2284_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref(v___x_2285_);
v___x_2287_ = l_Lean_Expr_mvarId_x21(v_a_2286_);
v___x_2288_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2287_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_options_2289_; uint8_t v_hasTrace_2290_; 
lean_dec_ref(v___x_2288_);
v_options_2289_ = lean_ctor_get(v___y_2280_, 2);
v_hasTrace_2290_ = lean_ctor_get_uint8(v_options_2289_, sizeof(void*)*1);
if (v_hasTrace_2290_ == 0)
{
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v___y_2272_ = v_a_2286_;
goto v___jp_2271_;
}
else
{
lean_object* v_inheritedTraceOptions_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
v_inheritedTraceOptions_2291_ = lean_ctor_get(v___y_2280_, 13);
v___x_2292_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__11, &l_Lean_MVarId_applyRflAndAndIntro___closed__11_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__11);
lean_inc(v_cls_2264_);
v___x_2293_ = l_Lean_Name_append(v___x_2292_, v_cls_2264_);
v___x_2294_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2291_, v_options_2289_, v___x_2293_);
lean_dec(v___x_2293_);
if (v___x_2294_ == 0)
{
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v___y_2272_ = v_a_2286_;
goto v___jp_2271_;
}
else
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2295_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1);
v___x_2296_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2265_);
v___x_2297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2295_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2264_, v___x_2297_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_dec_ref(v___x_2298_);
v___y_2272_ = v_a_2286_;
goto v___jp_2271_;
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec(v_a_2286_);
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2298_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2298_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec(v_a_2286_);
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v_a_2307_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2288_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2288_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v_00_u03c6_2265_);
lean_dec(v_cls_2264_);
v_a_2315_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2285_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2285_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object* v___f_2355_, lean_object* v_cls_2356_, lean_object* v_00_u03c6_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(v___f_2355_, v_cls_2356_, v_00_u03c6_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
return v_res_2363_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0(void){
_start:
{
lean_object* v_cls_2364_; lean_object* v___f_2365_; 
v_cls_2364_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__9, &l_Lean_MVarId_applyRflAndAndIntro___closed__9_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9);
v___f_2365_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2365_, 0, v_cls_2364_);
return v___f_2365_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1(void){
_start:
{
lean_object* v_cls_2366_; lean_object* v___f_2367_; lean_object* v___f_2368_; 
v_cls_2366_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__9, &l_Lean_MVarId_applyRflAndAndIntro___closed__9_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9);
v___f_2367_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0);
v___f_2368_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed), 8, 2);
lean_closure_set(v___f_2368_, 0, v___f_2367_);
lean_closure_set(v___f_2368_, 1, v_cls_2366_);
return v___f_2368_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2(void){
_start:
{
lean_object* v___x_2369_; 
v___x_2369_ = lean_mk_string_unchecked("pureRflAndAndIntro: ", 20, 20);
return v___x_2369_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2);
v___x_2371_ = l_Lean_stringToMessageData(v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object* v_goal_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_){
_start:
{
lean_object* v___y_2382_; uint8_t v___y_2383_; lean_object* v_cls_2385_; lean_object* v___x_2386_; lean_object* v_a_2387_; lean_object* v_val_2388_; lean_object* v___f_2389_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2394_; uint8_t v___x_2416_; 
v_cls_2385_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__9, &l_Lean_MVarId_applyRflAndAndIntro___closed__9_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__9);
v___x_2386_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2385_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_);
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref(v___x_2386_);
v_val_2388_ = lean_ctor_get(v_a_2387_, 0);
lean_inc(v_val_2388_);
lean_dec(v_a_2387_);
v___f_2389_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1);
v___x_2416_ = lean_unbox(v_val_2388_);
lean_dec(v_val_2388_);
if (v___x_2416_ == 0)
{
v___y_2391_ = v_a_2373_;
v___y_2392_ = v_a_2374_;
v___y_2393_ = v_a_2375_;
v___y_2394_ = v_a_2376_;
goto v___jp_2390_;
}
else
{
lean_object* v_target_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v_target_2417_ = lean_ctor_get(v_goal_2372_, 3);
v___x_2418_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3);
lean_inc_ref(v_target_2417_);
v___x_2419_ = l_Lean_MessageData_ofExpr(v_target_2417_);
v___x_2420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2420_, 0, v___x_2418_);
lean_ctor_set(v___x_2420_, 1, v___x_2419_);
v___x_2421_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2385_, v___x_2420_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_dec_ref(v___x_2421_);
v___y_2391_ = v_a_2373_;
v___y_2392_ = v_a_2374_;
v___y_2393_ = v_a_2375_;
v___y_2394_ = v_a_2376_;
goto v___jp_2390_;
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec_ref(v_goal_2372_);
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2421_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2421_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
v___jp_2378_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2379_ = lean_box(0);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
return v___x_2380_;
}
v___jp_2381_:
{
if (v___y_2383_ == 0)
{
lean_dec_ref(v___y_2382_);
goto v___jp_2378_;
}
else
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___y_2382_);
return v___x_2384_;
}
}
v___jp_2390_:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2372_, v___f_2389_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2412_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2398_ = v___x_2395_;
v_isShared_2399_ = v_isSharedCheck_2412_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2395_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2412_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
if (lean_obj_tag(v_a_2396_) == 0)
{
lean_del_object(v___x_2398_);
goto v___jp_2378_;
}
else
{
lean_object* v_val_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2411_; 
v_val_2400_ = lean_ctor_get(v_a_2396_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_a_2396_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2402_ = v_a_2396_;
v_isShared_2403_ = v_isSharedCheck_2411_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_val_2400_);
lean_dec(v_a_2396_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2411_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v_snd_2404_; lean_object* v___x_2406_; 
v_snd_2404_ = lean_ctor_get(v_val_2400_, 1);
lean_inc(v_snd_2404_);
lean_dec(v_val_2400_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v_snd_2404_);
v___x_2406_ = v___x_2402_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_snd_2404_);
v___x_2406_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2408_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v___x_2406_);
v___x_2408_ = v___x_2398_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2406_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
}
}
else
{
lean_object* v_a_2413_; uint8_t v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2413_);
lean_dec_ref(v___x_2395_);
v___x_2414_ = l_Lean_Exception_isInterrupt(v_a_2413_);
if (v___x_2414_ == 0)
{
uint8_t v___x_2415_; 
lean_inc(v_a_2413_);
v___x_2415_ = l_Lean_Exception_isRuntime(v_a_2413_);
v___y_2382_ = v_a_2413_;
v___y_2383_ = v___x_2415_;
goto v___jp_2381_;
}
else
{
v___y_2382_ = v_a_2413_;
v___y_2383_ = v___x_2414_;
goto v___jp_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object* v_goal_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(v_goal_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2433_);
lean_dec(v_a_2432_);
lean_dec_ref(v_a_2431_);
return v_res_2436_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t v___y_2437_, lean_object* v_x_2438_){
_start:
{
return v___y_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object* v___y_2439_, lean_object* v_x_2440_){
_start:
{
uint8_t v___y_9301__boxed_2441_; uint8_t v_res_2442_; lean_object* v_r_2443_; 
v___y_9301__boxed_2441_ = lean_unbox(v___y_2439_);
v_res_2442_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(v___y_9301__boxed_2441_, v_x_2440_);
lean_dec(v_x_2440_);
v_r_2443_ = lean_box(v_res_2442_);
return v_r_2443_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_mk_string_unchecked("tacticTrivial", 13, 13);
return v___x_2444_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2445_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0);
v___x_2446_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3);
v___x_2447_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1);
v___x_2448_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0);
v___x_2449_ = l_Lean_Name_mkStr4(v___x_2448_, v___x_2447_, v___x_2446_, v___x_2445_);
return v___x_2449_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_mk_string_unchecked("trivial", 7, 7);
return v___x_2450_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = lean_unsigned_to_nat(0u);
v___x_2452_ = lean_mk_empty_array_with_capacity(v___x_2451_);
return v___x_2452_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = lean_box(1);
v___x_2454_ = lean_box(0);
v___x_2455_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2454_);
lean_ctor_set(v___x_2455_, 1, v___x_2453_);
lean_ctor_set(v___x_2455_, 2, v___x_2454_);
lean_ctor_set(v___x_2455_, 3, v___x_2454_);
lean_ctor_set(v___x_2455_, 4, v___x_2454_);
lean_ctor_set(v___x_2455_, 5, v___x_2453_);
lean_ctor_set(v___x_2455_, 6, v___x_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object* v_00_u03c6_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v___x_2462_; uint8_t v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2462_, 0, v_00_u03c6_2456_);
v___x_2463_ = 0;
v___x_2464_ = lean_box(0);
v___x_2465_ = l_Lean_Meta_mkFreshExprMVar(v___x_2462_, v___x_2463_, v___x_2464_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2524_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2468_ = v___x_2465_;
v_isShared_2469_ = v_isSharedCheck_2524_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2465_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2524_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2477_ = l_Lean_Expr_mvarId_x21(v_a_2466_);
lean_inc(v___x_2477_);
v___x_2478_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2477_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_dec_ref(v___x_2478_);
lean_dec(v___x_2477_);
goto v___jp_2470_;
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2523_; 
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2481_ = v___x_2478_;
v_isShared_2482_ = v_isSharedCheck_2523_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2523_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
uint8_t v___y_2484_; uint8_t v___x_2521_; 
v___x_2521_ = l_Lean_Exception_isInterrupt(v_a_2479_);
if (v___x_2521_ == 0)
{
uint8_t v___x_2522_; 
lean_inc(v_a_2479_);
v___x_2522_ = l_Lean_Exception_isRuntime(v_a_2479_);
v___y_2484_ = v___x_2522_;
goto v___jp_2483_;
}
else
{
v___y_2484_ = v___x_2521_;
goto v___jp_2483_;
}
v___jp_2483_:
{
if (v___y_2484_ == 0)
{
lean_object* v_ref_2485_; lean_object* v___x_2486_; lean_object* v___f_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; uint8_t v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
lean_del_object(v___x_2481_);
lean_dec(v_a_2479_);
v_ref_2485_ = lean_ctor_get(v___y_2459_, 5);
v___x_2486_ = lean_box(v___y_2484_);
v___f_2487_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2487_, 0, v___x_2486_);
v___x_2488_ = l_Lean_SourceInfo_fromRef(v_ref_2485_, v___y_2484_);
v___x_2489_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1);
v___x_2490_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2);
lean_inc(v___x_2488_);
v___x_2491_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2488_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = l_Lean_Syntax_node1(v___x_2488_, v___x_2489_, v___x_2491_);
v___x_2493_ = lean_box(0);
v___x_2494_ = lean_box(0);
v___x_2495_ = 1;
v___x_2496_ = lean_box(1);
v___x_2497_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3);
v___x_2498_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_2498_, 0, v___x_2493_);
lean_ctor_set(v___x_2498_, 1, v___x_2494_);
lean_ctor_set(v___x_2498_, 2, v___x_2493_);
lean_ctor_set(v___x_2498_, 3, v___f_2487_);
lean_ctor_set(v___x_2498_, 4, v___x_2496_);
lean_ctor_set(v___x_2498_, 5, v___x_2496_);
lean_ctor_set(v___x_2498_, 6, v___x_2493_);
lean_ctor_set(v___x_2498_, 7, v___x_2497_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8, v___x_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 1, v___x_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 2, v___x_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 3, v___x_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 4, v___y_2484_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 5, v___y_2484_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 6, v___y_2484_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 7, v___y_2484_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 8, v___x_2495_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 9, v___y_2484_);
lean_ctor_set_uint8(v___x_2498_, sizeof(void*)*8 + 10, v___x_2495_);
v___x_2499_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4);
v___x_2500_ = l_Lean_Elab_runTactic(v___x_2477_, v___x_2492_, v___x_2498_, v___x_2499_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2509_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v_fst_2505_; 
v_fst_2505_ = lean_ctor_get(v_a_2501_, 0);
lean_inc(v_fst_2505_);
lean_dec(v_a_2501_);
if (lean_obj_tag(v_fst_2505_) == 0)
{
lean_del_object(v___x_2503_);
goto v___jp_2470_;
}
else
{
lean_object* v___x_2507_; 
lean_dec(v_fst_2505_);
lean_del_object(v___x_2468_);
lean_dec(v_a_2466_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2493_);
v___x_2507_ = v___x_2503_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2493_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
else
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
lean_del_object(v___x_2468_);
lean_dec(v_a_2466_);
v_a_2510_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2500_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2500_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
else
{
lean_object* v___x_2519_; 
lean_dec(v___x_2477_);
lean_del_object(v___x_2468_);
lean_dec(v_a_2466_);
if (v_isShared_2482_ == 0)
{
v___x_2519_ = v___x_2481_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2479_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
}
v___jp_2470_:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2471_ = lean_box(0);
v___x_2472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
lean_ctor_set(v___x_2472_, 1, v_a_2466_);
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2473_);
v___x_2475_ = v___x_2468_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
v_a_2525_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2465_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2465_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object* v_00_u03c6_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v_res_2539_; 
v_res_2539_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(v_00_u03c6_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
return v_res_2539_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0(void){
_start:
{
lean_object* v___f_2540_; 
v___f_2540_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed), 6, 0);
return v___f_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object* v_goal_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v___f_2550_; lean_object* v___x_2551_; 
v___f_2550_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0);
v___x_2551_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2541_, v___f_2550_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2568_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2554_ = v___x_2551_;
v_isShared_2555_ = v_isSharedCheck_2568_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2551_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2568_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
if (lean_obj_tag(v_a_2552_) == 0)
{
lean_del_object(v___x_2554_);
goto v___jp_2547_;
}
else
{
lean_object* v_val_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2567_; 
v_val_2556_ = lean_ctor_get(v_a_2552_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_a_2552_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2558_ = v_a_2552_;
v_isShared_2559_ = v_isSharedCheck_2567_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_val_2556_);
lean_dec(v_a_2552_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2567_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v_snd_2560_; lean_object* v___x_2562_; 
v_snd_2560_ = lean_ctor_get(v_val_2556_, 1);
lean_inc(v_snd_2560_);
lean_dec(v_val_2556_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v_snd_2560_);
v___x_2562_ = v___x_2558_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_snd_2560_);
v___x_2562_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
lean_object* v___x_2564_; 
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v___x_2562_);
v___x_2564_ = v___x_2554_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2562_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2580_; 
v_a_2569_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2571_ = v___x_2551_;
v_isShared_2572_ = v_isSharedCheck_2580_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2551_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2580_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
uint8_t v___y_2574_; uint8_t v___x_2578_; 
v___x_2578_ = l_Lean_Exception_isInterrupt(v_a_2569_);
if (v___x_2578_ == 0)
{
uint8_t v___x_2579_; 
lean_inc(v_a_2569_);
v___x_2579_ = l_Lean_Exception_isRuntime(v_a_2569_);
v___y_2574_ = v___x_2579_;
goto v___jp_2573_;
}
else
{
v___y_2574_ = v___x_2578_;
goto v___jp_2573_;
}
v___jp_2573_:
{
if (v___y_2574_ == 0)
{
lean_del_object(v___x_2571_);
lean_dec(v_a_2569_);
goto v___jp_2547_;
}
else
{
lean_object* v___x_2576_; 
if (v_isShared_2572_ == 0)
{
v___x_2576_ = v___x_2571_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2569_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
v___jp_2547_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = lean_box(0);
v___x_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
return v___x_2549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object* v_goal_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(v_goal_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
return v_res_2587_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
}
#ifdef __cplusplus
}
#endif
