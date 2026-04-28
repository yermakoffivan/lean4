// Lean compiler output
// Module: Lean.Meta.Tactic.Cases
// Imports: public import Lean.Meta.Tactic.Induction public import Lean.Meta.Tactic.Acyclic public import Lean.Meta.Tactic.UnifyEq import Lean.Meta.Constructions.SparseCasesOn import Lean.Meta.Constructions.CtorIdx import Init.Omega
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_acyclic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unifyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkCtorIdxName(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_mkEM(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ensureAtMostOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_exactlyOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getInductiveUniverseAndParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withNewEqs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withNewEqs___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___closed__0;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Cases_cases___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___closed__0;
static lean_once_cell_t l_Lean_Meta_Cases_cases___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_casesRec___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesRec___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_casesAnd___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_casesAnd___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__0;
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__1;
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__2;
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_substEqs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_substEqs___closed__0;
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_byCases___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__0;
static lean_once_cell_t l_Lean_MVarId_byCases___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__1;
static lean_once_cell_t l_Lean_MVarId_byCases___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__2;
static lean_once_cell_t l_Lean_MVarId_byCases___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__3;
static lean_once_cell_t l_Lean_MVarId_byCases___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__4;
static lean_once_cell_t l_Lean_MVarId_byCases___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___closed__5;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_byCasesDec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCasesDec___closed__0;
static lean_once_cell_t l_Lean_MVarId_byCasesDec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCasesDec___closed__1;
static lean_once_cell_t l_Lean_MVarId_byCasesDec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCasesDec___closed__2;
static lean_once_cell_t l_Lean_MVarId_byCasesDec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCasesDec___closed__3;
static lean_once_cell_t l_Lean_MVarId_byCasesDec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCasesDec___closed__4;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("Failed to compile pattern matching: Expected an inductive type, but found", 73, 73);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0);
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object* v_type_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1);
v___x_58_ = l_Lean_indentExpr(v_type_51_);
v___x_59_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_59_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object* v_type_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object* v_00_u03b1_68_, lean_object* v_type_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object* v_00_u03b1_76_, lean_object* v_type_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(v_00_u03b1_76_, v_type_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object* v_00_u03b1_84_, lean_object* v_msg_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(v_00_u03b1_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
static lean_object* _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0(void){
_start:
{
lean_object* v___x_100_; lean_object* v_dummy_101_; 
v___x_100_ = lean_box(0);
v_dummy_101_ = l_Lean_Expr_sort___override(v___x_100_);
return v_dummy_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object* v_type_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_Meta_whnfD(v_type_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_138_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_138_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_138_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_138_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; 
v___x_113_ = l_Lean_Expr_getAppFn(v_a_109_);
if (lean_obj_tag(v___x_113_) == 4)
{
lean_object* v_declName_114_; lean_object* v_us_115_; lean_object* v___x_116_; lean_object* v_env_117_; uint8_t v___x_118_; lean_object* v___x_119_; 
v_declName_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_declName_114_);
v_us_115_ = lean_ctor_get(v___x_113_, 1);
lean_inc(v_us_115_);
lean_dec_ref(v___x_113_);
v___x_116_ = lean_st_ref_get(v_a_106_);
v_env_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc_ref(v_env_117_);
lean_dec(v___x_116_);
v___x_118_ = 0;
v___x_119_ = l_Lean_Environment_find_x3f(v_env_117_, v_declName_114_, v___x_118_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v___x_120_; 
lean_dec(v_us_115_);
lean_del_object(v___x_111_);
v___x_120_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_109_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
return v___x_120_;
}
else
{
lean_object* v_val_121_; 
v_val_121_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_val_121_);
lean_dec_ref(v___x_119_);
if (lean_obj_tag(v_val_121_) == 5)
{
lean_object* v_val_122_; lean_object* v_numParams_123_; lean_object* v_nargs_124_; lean_object* v_dummy_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v_val_122_ = lean_ctor_get(v_val_121_, 0);
lean_inc_ref(v_val_122_);
lean_dec_ref(v_val_121_);
v_numParams_123_ = lean_ctor_get(v_val_122_, 1);
lean_inc(v_numParams_123_);
lean_dec_ref(v_val_122_);
v_nargs_124_ = l_Lean_Expr_getAppNumArgs(v_a_109_);
v_dummy_125_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
lean_inc(v_nargs_124_);
v___x_126_ = lean_mk_array(v_nargs_124_, v_dummy_125_);
v___x_127_ = lean_unsigned_to_nat(1u);
v___x_128_ = lean_nat_sub(v_nargs_124_, v___x_127_);
lean_dec(v_nargs_124_);
v___x_129_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_109_, v___x_126_, v___x_128_);
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = l_Array_extract___redArg(v___x_129_, v___x_130_, v_numParams_123_);
lean_dec_ref(v___x_129_);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v_us_115_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_132_);
v___x_134_ = v___x_111_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
else
{
lean_object* v___x_136_; 
lean_dec(v_val_121_);
lean_dec(v_us_115_);
lean_del_object(v___x_111_);
v___x_136_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_109_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
return v___x_136_;
}
}
}
else
{
lean_object* v___x_137_; 
lean_dec_ref(v___x_113_);
lean_del_object(v___x_111_);
v___x_137_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_109_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
return v___x_137_;
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_a_139_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_108_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_108_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object* v_type_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Meta_getInductiveUniverseAndParams(v_type_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
return v_res_153_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_154_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0);
v___x_156_ = l_Lean_Name_mkStr1(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_157_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2);
v___x_159_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0);
v___x_160_ = l_Lean_Name_mkStr2(v___x_159_, v___x_158_);
return v___x_160_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4(void){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_161_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4);
v___x_163_ = l_Lean_Name_mkStr1(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2);
v___x_165_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4);
v___x_166_ = l_Lean_Name_mkStr2(v___x_165_, v___x_164_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object* v_lhs_167_, lean_object* v_rhs_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v___x_174_; 
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc(v_a_170_);
lean_inc_ref(v_a_169_);
lean_inc_ref(v_lhs_167_);
v___x_174_ = lean_infer_type(v_lhs_167_, v_a_169_, v_a_170_, v_a_171_, v_a_172_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_176_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_a_175_);
lean_dec_ref(v___x_174_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc(v_a_170_);
lean_inc_ref(v_a_169_);
lean_inc_ref(v_rhs_168_);
v___x_176_ = lean_infer_type(v_rhs_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_178_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref(v___x_176_);
lean_inc(v_a_175_);
v___x_178_ = l_Lean_Meta_getLevel(v_a_175_, v_a_169_, v_a_170_, v_a_171_, v_a_172_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref(v___x_178_);
lean_inc(v_a_177_);
lean_inc(v_a_175_);
v___x_180_ = l_Lean_Meta_isExprDefEq(v_a_175_, v_a_177_, v_a_169_, v_a_170_, v_a_171_, v_a_172_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_210_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_210_ == 0)
{
v___x_183_ = v___x_180_;
v_isShared_184_ = v_isSharedCheck_210_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_180_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_210_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
uint8_t v___x_185_; 
v___x_185_ = lean_unbox(v_a_181_);
lean_dec(v_a_181_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1);
v___x_187_ = lean_box(0);
v___x_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_188_, 0, v_a_179_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
lean_inc_ref(v___x_188_);
v___x_189_ = l_Lean_mkConst(v___x_186_, v___x_188_);
lean_inc_ref(v_lhs_167_);
lean_inc(v_a_175_);
v___x_190_ = l_Lean_mkApp4(v___x_189_, v_a_175_, v_lhs_167_, v_a_177_, v_rhs_168_);
v___x_191_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3);
v___x_192_ = l_Lean_mkConst(v___x_191_, v___x_188_);
v___x_193_ = l_Lean_mkAppB(v___x_192_, v_a_175_, v_lhs_167_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_190_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_194_);
v___x_196_ = v___x_183_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
lean_dec(v_a_177_);
v___x_198_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5);
v___x_199_ = lean_box(0);
v___x_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_200_, 0, v_a_179_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
lean_inc_ref(v___x_200_);
v___x_201_ = l_Lean_mkConst(v___x_198_, v___x_200_);
lean_inc_ref(v_lhs_167_);
lean_inc(v_a_175_);
v___x_202_ = l_Lean_mkApp3(v___x_201_, v_a_175_, v_lhs_167_, v_rhs_168_);
v___x_203_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6);
v___x_204_ = l_Lean_mkConst(v___x_203_, v___x_200_);
v___x_205_ = l_Lean_mkAppB(v___x_204_, v_a_175_, v_lhs_167_);
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_202_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_206_);
v___x_208_ = v___x_183_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
lean_dec(v_a_179_);
lean_dec(v_a_177_);
lean_dec(v_a_175_);
lean_dec_ref(v_rhs_168_);
lean_dec_ref(v_lhs_167_);
v_a_211_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_180_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_180_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec(v_a_177_);
lean_dec(v_a_175_);
lean_dec_ref(v_rhs_168_);
lean_dec_ref(v_lhs_167_);
v_a_219_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_178_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_178_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_dec(v_a_175_);
lean_dec_ref(v_rhs_168_);
lean_dec_ref(v_lhs_167_);
v_a_227_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_176_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_176_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec_ref(v_rhs_168_);
lean_dec_ref(v_lhs_167_);
v_a_235_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_174_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_174_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object* v_lhs_243_, lean_object* v_rhs_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_lhs_243_, v_rhs_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_251_, lean_object* v_b_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; 
lean_inc(v___y_256_);
lean_inc_ref(v___y_255_);
lean_inc(v___y_254_);
lean_inc_ref(v___y_253_);
v___x_258_ = lean_apply_6(v_k_251_, v_b_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, lean_box(0));
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_259_, lean_object* v_b_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(v_k_259_, v_b_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object* v_name_267_, uint8_t v_bi_268_, lean_object* v_type_269_, lean_object* v_k_270_, uint8_t v_kind_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v___f_277_; lean_object* v___x_278_; 
v___f_277_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_277_, 0, v_k_270_);
v___x_278_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_267_, v_bi_268_, v_type_269_, v___f_277_, v_kind_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_a_287_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_278_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_278_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_295_, lean_object* v_bi_296_, lean_object* v_type_297_, lean_object* v_k_298_, lean_object* v_kind_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
uint8_t v_bi_boxed_305_; uint8_t v_kind_boxed_306_; lean_object* v_res_307_; 
v_bi_boxed_305_ = lean_unbox(v_bi_296_);
v_kind_boxed_306_ = lean_unbox(v_kind_299_);
v_res_307_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_295_, v_bi_boxed_305_, v_type_297_, v_k_298_, v_kind_boxed_306_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object* v_name_308_, lean_object* v_type_309_, lean_object* v_k_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
uint8_t v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; 
v___x_316_ = 0;
v___x_317_ = 0;
v___x_318_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_308_, v___x_316_, v_type_309_, v_k_310_, v___x_317_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object* v_name_319_, lean_object* v_type_320_, lean_object* v_k_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_319_, v_type_320_, v_k_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object* v_i_328_, lean_object* v_newEqs_329_, lean_object* v_newRefls_330_, lean_object* v_snd_331_, lean_object* v_targets_332_, lean_object* v_targetsNew_333_, lean_object* v_k_334_, lean_object* v_newEq_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(v_i_328_, v_newEqs_329_, v_newRefls_330_, v_snd_331_, v_targets_332_, v_targetsNew_333_, v_k_334_, v_newEq_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v_i_328_);
return v_res_341_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0);
v___x_344_ = l_Lean_Name_mkStr1(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object* v_targets_345_, lean_object* v_targetsNew_346_, lean_object* v_k_347_, lean_object* v_i_348_, lean_object* v_newEqs_349_, lean_object* v_newRefls_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = lean_array_get_size(v_targets_345_);
v___x_357_ = lean_nat_dec_lt(v_i_348_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
lean_dec(v_i_348_);
lean_dec_ref(v_targetsNew_346_);
lean_dec_ref(v_targets_345_);
lean_inc(v_a_354_);
lean_inc_ref(v_a_353_);
lean_inc(v_a_352_);
lean_inc_ref(v_a_351_);
v___x_358_ = lean_apply_7(v_k_347_, v_newEqs_349_, v_newRefls_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, lean_box(0));
return v___x_358_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = l_Lean_instInhabitedExpr;
v___x_360_ = lean_array_get_borrowed(v___x_359_, v_targets_345_, v_i_348_);
v___x_361_ = lean_array_get_borrowed(v___x_359_, v_targetsNew_346_, v_i_348_);
lean_inc(v___x_361_);
lean_inc(v___x_360_);
v___x_362_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v___x_360_, v___x_361_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v_fst_364_; lean_object* v_snd_365_; lean_object* v___f_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref(v___x_362_);
v_fst_364_ = lean_ctor_get(v_a_363_, 0);
lean_inc(v_fst_364_);
v_snd_365_ = lean_ctor_get(v_a_363_, 1);
lean_inc(v_snd_365_);
lean_dec(v_a_363_);
v___f_366_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_366_, 0, v_i_348_);
lean_closure_set(v___f_366_, 1, v_newEqs_349_);
lean_closure_set(v___f_366_, 2, v_newRefls_350_);
lean_closure_set(v___f_366_, 3, v_snd_365_);
lean_closure_set(v___f_366_, 4, v_targets_345_);
lean_closure_set(v___f_366_, 5, v_targetsNew_346_);
lean_closure_set(v___f_366_, 6, v_k_347_);
v___x_367_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1);
v___x_368_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_367_, v_fst_364_, v___f_366_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_368_;
}
else
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
lean_dec_ref(v_newRefls_350_);
lean_dec_ref(v_newEqs_349_);
lean_dec(v_i_348_);
lean_dec_ref(v_k_347_);
lean_dec_ref(v_targetsNew_346_);
lean_dec_ref(v_targets_345_);
v_a_369_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_362_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_362_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_369_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object* v_i_377_, lean_object* v_newEqs_378_, lean_object* v_newRefls_379_, lean_object* v_snd_380_, lean_object* v_targets_381_, lean_object* v_targetsNew_382_, lean_object* v_k_383_, lean_object* v_newEq_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_add(v_i_377_, v___x_390_);
v___x_392_ = lean_array_push(v_newEqs_378_, v_newEq_384_);
v___x_393_ = lean_array_push(v_newRefls_379_, v_snd_380_);
v___x_394_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_381_, v_targetsNew_382_, v_k_383_, v___x_391_, v___x_392_, v___x_393_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object* v_targets_395_, lean_object* v_targetsNew_396_, lean_object* v_k_397_, lean_object* v_i_398_, lean_object* v_newEqs_399_, lean_object* v_newRefls_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_395_, v_targetsNew_396_, v_k_397_, v_i_398_, v_newEqs_399_, v_newRefls_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object* v_00_u03b1_407_, lean_object* v_targets_408_, lean_object* v_targetsNew_409_, lean_object* v_k_410_, lean_object* v_i_411_, lean_object* v_newEqs_412_, lean_object* v_newRefls_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_408_, v_targetsNew_409_, v_k_410_, v_i_411_, v_newEqs_412_, v_newRefls_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object* v_00_u03b1_420_, lean_object* v_targets_421_, lean_object* v_targetsNew_422_, lean_object* v_k_423_, lean_object* v_i_424_, lean_object* v_newEqs_425_, lean_object* v_newRefls_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(v_00_u03b1_420_, v_targets_421_, v_targetsNew_422_, v_k_423_, v_i_424_, v_newEqs_425_, v_newRefls_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object* v_00_u03b1_433_, lean_object* v_name_434_, uint8_t v_bi_435_, lean_object* v_type_436_, lean_object* v_k_437_, uint8_t v_kind_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_434_, v_bi_435_, v_type_436_, v_k_437_, v_kind_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_445_, lean_object* v_name_446_, lean_object* v_bi_447_, lean_object* v_type_448_, lean_object* v_k_449_, lean_object* v_kind_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
uint8_t v_bi_boxed_456_; uint8_t v_kind_boxed_457_; lean_object* v_res_458_; 
v_bi_boxed_456_ = lean_unbox(v_bi_447_);
v_kind_boxed_457_ = lean_unbox(v_kind_450_);
v_res_458_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(v_00_u03b1_445_, v_name_446_, v_bi_boxed_456_, v_type_448_, v_k_449_, v_kind_boxed_457_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object* v_00_u03b1_459_, lean_object* v_name_460_, lean_object* v_type_461_, lean_object* v_k_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_460_, v_type_461_, v_k_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object* v_00_u03b1_469_, lean_object* v_name_470_, lean_object* v_type_471_, lean_object* v_k_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(v_00_u03b1_469_, v_name_470_, v_type_471_, v_k_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
return v_res_478_;
}
}
static lean_object* _init_l_Lean_Meta_withNewEqs___redArg___closed__0(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_mk_empty_array_with_capacity(v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object* v_targets_481_, lean_object* v_targetsNew_482_, lean_object* v_k_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = lean_obj_once(&l_Lean_Meta_withNewEqs___redArg___closed__0, &l_Lean_Meta_withNewEqs___redArg___closed__0_once, _init_l_Lean_Meta_withNewEqs___redArg___closed__0);
v___x_491_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_481_, v_targetsNew_482_, v_k_483_, v___x_489_, v___x_490_, v___x_490_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object* v_targets_492_, lean_object* v_targetsNew_493_, lean_object* v_k_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_Meta_withNewEqs___redArg(v_targets_492_, v_targetsNew_493_, v_k_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object* v_00_u03b1_501_, lean_object* v_targets_502_, lean_object* v_targetsNew_503_, lean_object* v_k_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_Meta_withNewEqs___redArg(v_targets_502_, v_targetsNew_503_, v_k_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object* v_00_u03b1_511_, lean_object* v_targets_512_, lean_object* v_targetsNew_513_, lean_object* v_k_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_Meta_withNewEqs(v_00_u03b1_511_, v_targets_512_, v_targetsNew_513_, v_k_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object* v_k_521_, lean_object* v_b_522_, lean_object* v_c_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; 
lean_inc(v___y_527_);
lean_inc_ref(v___y_526_);
lean_inc(v___y_525_);
lean_inc_ref(v___y_524_);
v___x_529_ = lean_apply_7(v_k_521_, v_b_522_, v_c_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, lean_box(0));
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object* v_k_530_, lean_object* v_b_531_, lean_object* v_c_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(v_k_530_, v_b_531_, v_c_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object* v_type_539_, lean_object* v_k_540_, uint8_t v_cleanupAnnotations_541_, uint8_t v_whnfType_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v___f_548_; lean_object* v___x_549_; 
v___f_548_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_548_, 0, v_k_540_);
v___x_549_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_539_, v___f_548_, v_cleanupAnnotations_541_, v_whnfType_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_549_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_549_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object* v_type_566_, lean_object* v_k_567_, lean_object* v_cleanupAnnotations_568_, lean_object* v_whnfType_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_575_; uint8_t v_whnfType_boxed_576_; lean_object* v_res_577_; 
v_cleanupAnnotations_boxed_575_ = lean_unbox(v_cleanupAnnotations_568_);
v_whnfType_boxed_576_ = lean_unbox(v_whnfType_569_);
v_res_577_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_566_, v_k_567_, v_cleanupAnnotations_boxed_575_, v_whnfType_boxed_576_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object* v_00_u03b1_578_, lean_object* v_type_579_, lean_object* v_k_580_, uint8_t v_cleanupAnnotations_581_, uint8_t v_whnfType_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_579_, v_k_580_, v_cleanupAnnotations_581_, v_whnfType_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object* v_00_u03b1_589_, lean_object* v_type_590_, lean_object* v_k_591_, lean_object* v_cleanupAnnotations_592_, lean_object* v_whnfType_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_599_; uint8_t v_whnfType_boxed_600_; lean_object* v_res_601_; 
v_cleanupAnnotations_boxed_599_ = lean_unbox(v_cleanupAnnotations_592_);
v_whnfType_boxed_600_ = lean_unbox(v_whnfType_593_);
v_res_601_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(v_00_u03b1_589_, v_type_590_, v_k_591_, v_cleanupAnnotations_boxed_599_, v_whnfType_boxed_600_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object* v_mvarId_602_, lean_object* v_x_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_602_, v_x_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_609_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_609_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object* v_mvarId_626_, lean_object* v_x_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_626_, v_x_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object* v_00_u03b1_634_, lean_object* v_mvarId_635_, lean_object* v_x_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_635_, v_x_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object* v_00_u03b1_643_, lean_object* v_mvarId_644_, lean_object* v_x_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(v_00_u03b1_643_, v_mvarId_644_, v_x_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object* v_mvarId_652_, lean_object* v___x_653_, lean_object* v_eqs_654_, lean_object* v_eqRefls_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_MVarId_getType(v_mvarId_652_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; uint8_t v___x_663_; uint8_t v___x_664_; uint8_t v___x_665_; lean_object* v___x_666_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref(v___x_661_);
v___x_663_ = 0;
v___x_664_ = 1;
v___x_665_ = 1;
v___x_666_ = l_Lean_Meta_mkForallFVars(v_eqs_654_, v_a_662_, v___x_663_, v___x_664_, v___x_664_, v___x_665_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref(v___x_666_);
v___x_668_ = l_Lean_Meta_mkForallFVars(v___x_653_, v_a_667_, v___x_663_, v___x_664_, v___x_664_, v___x_665_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_677_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_677_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v_a_669_);
lean_ctor_set(v___x_673_, 1, v_eqRefls_655_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_673_);
v___x_675_ = v___x_671_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v_eqRefls_655_);
v_a_678_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_668_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_668_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_eqRefls_655_);
v_a_686_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_666_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_666_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
lean_dec_ref(v_eqRefls_655_);
v_a_694_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_661_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_661_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object* v_mvarId_702_, lean_object* v___x_703_, lean_object* v_eqs_704_, lean_object* v_eqRefls_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_Meta_generalizeTargetsEq___lam__0(v_mvarId_702_, v___x_703_, v_eqs_704_, v_eqRefls_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec_ref(v_eqs_704_);
lean_dec_ref(v___x_703_);
return v_res_711_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_mk_string_unchecked("Invalid number of targets: ", 27, 27);
return v___x_712_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0);
v___x_714_ = l_Lean_stringToMessageData(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_mk_string_unchecked(" targets provided, but motive only takes ", 41, 41);
return v___x_715_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2);
v___x_717_ = l_Lean_stringToMessageData(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object* v_targets_718_, lean_object* v_mvarId_719_, lean_object* v_targetsNew_720_, lean_object* v_x_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_734_ = lean_array_get_size(v_targets_718_);
v___x_735_ = lean_array_get_size(v_targetsNew_720_);
v___x_736_ = lean_nat_dec_le(v___x_734_, v___x_735_);
if (v___x_736_ == 0)
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec_ref(v_targetsNew_720_);
lean_dec(v_mvarId_719_);
lean_dec_ref(v_targets_718_);
v___x_737_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1);
v___x_738_ = l_Nat_reprFast(v___x_734_);
v___x_739_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
v___x_740_ = l_Lean_MessageData_ofFormat(v___x_739_);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_737_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3);
v___x_743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = l_Nat_reprFast(v___x_735_);
v___x_745_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
v___x_746_ = l_Lean_MessageData_ofFormat(v___x_745_);
v___x_747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_743_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
v___x_748_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_747_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
goto v___jp_727_;
}
v___jp_727_:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___f_732_; lean_object* v___x_733_; 
v___x_728_ = lean_array_get_size(v_targets_718_);
v___x_729_ = lean_unsigned_to_nat(0u);
v___x_730_ = l_Array_toSubarray___redArg(v_targetsNew_720_, v___x_729_, v___x_728_);
v___x_731_ = l_Subarray_copy___redArg(v___x_730_);
lean_inc_ref(v___x_731_);
v___f_732_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__0___boxed), 9, 2);
lean_closure_set(v___f_732_, 0, v_mvarId_719_);
lean_closure_set(v___f_732_, 1, v___x_731_);
v___x_733_ = l_Lean_Meta_withNewEqs___redArg(v_targets_718_, v___x_731_, v___f_732_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object* v_targets_757_, lean_object* v_mvarId_758_, lean_object* v_targetsNew_759_, lean_object* v_x_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_generalizeTargetsEq___lam__1(v_targets_757_, v_mvarId_758_, v_targetsNew_759_, v_x_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec_ref(v_x_760_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_767_, lean_object* v_x_768_, lean_object* v_x_769_, lean_object* v_x_770_){
_start:
{
lean_object* v_ks_771_; lean_object* v_vs_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_796_; 
v_ks_771_ = lean_ctor_get(v_x_767_, 0);
v_vs_772_ = lean_ctor_get(v_x_767_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_796_ == 0)
{
v___x_774_ = v_x_767_;
v_isShared_775_ = v_isSharedCheck_796_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_vs_772_);
lean_inc(v_ks_771_);
lean_dec(v_x_767_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_796_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_776_ = lean_array_get_size(v_ks_771_);
v___x_777_ = lean_nat_dec_lt(v_x_768_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
lean_dec(v_x_768_);
v___x_778_ = lean_array_push(v_ks_771_, v_x_769_);
v___x_779_ = lean_array_push(v_vs_772_, v_x_770_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___x_779_);
lean_ctor_set(v___x_774_, 0, v___x_778_);
v___x_781_ = v___x_774_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
else
{
lean_object* v_k_x27_783_; uint8_t v___x_784_; 
v_k_x27_783_ = lean_array_fget_borrowed(v_ks_771_, v_x_768_);
v___x_784_ = l_Lean_instBEqMVarId_beq(v_x_769_, v_k_x27_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_786_; 
if (v_isShared_775_ == 0)
{
v___x_786_ = v___x_774_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_ks_771_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_vs_772_);
v___x_786_ = v_reuseFailAlloc_790_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_nat_add(v_x_768_, v___x_787_);
lean_dec(v_x_768_);
v_x_767_ = v___x_786_;
v_x_768_ = v___x_788_;
goto _start;
}
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_791_ = lean_array_fset(v_ks_771_, v_x_768_, v_x_769_);
v___x_792_ = lean_array_fset(v_vs_772_, v_x_768_, v_x_770_);
lean_dec(v_x_768_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___x_792_);
lean_ctor_set(v___x_774_, 0, v___x_791_);
v___x_794_ = v___x_774_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_797_, lean_object* v_k_798_, lean_object* v_v_799_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_797_, v___x_800_, v_k_798_, v_v_799_);
return v___x_801_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_802_; size_t v___x_803_; size_t v___x_804_; 
v___x_802_ = ((size_t)5ULL);
v___x_803_ = ((size_t)1ULL);
v___x_804_ = lean_usize_shift_left(v___x_803_, v___x_802_);
return v___x_804_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_805_; size_t v___x_806_; size_t v___x_807_; 
v___x_805_ = ((size_t)1ULL);
v___x_806_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_807_ = lean_usize_sub(v___x_806_, v___x_805_);
return v___x_807_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object* v_x_809_, size_t v_x_810_, size_t v_x_811_, lean_object* v_x_812_, lean_object* v_x_813_){
_start:
{
if (lean_obj_tag(v_x_809_) == 0)
{
lean_object* v_es_814_; size_t v___x_815_; size_t v___x_816_; size_t v___x_817_; size_t v___x_818_; lean_object* v_j_819_; lean_object* v___x_820_; uint8_t v___x_821_; 
v_es_814_ = lean_ctor_get(v_x_809_, 0);
v___x_815_ = ((size_t)5ULL);
v___x_816_ = ((size_t)1ULL);
v___x_817_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_818_ = lean_usize_land(v_x_810_, v___x_817_);
v_j_819_ = lean_usize_to_nat(v___x_818_);
v___x_820_ = lean_array_get_size(v_es_814_);
v___x_821_ = lean_nat_dec_lt(v_j_819_, v___x_820_);
if (v___x_821_ == 0)
{
lean_dec(v_j_819_);
lean_dec(v_x_813_);
lean_dec(v_x_812_);
return v_x_809_;
}
else
{
lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_858_; 
lean_inc_ref(v_es_814_);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_809_);
if (v_isSharedCheck_858_ == 0)
{
lean_object* v_unused_859_; 
v_unused_859_ = lean_ctor_get(v_x_809_, 0);
lean_dec(v_unused_859_);
v___x_823_ = v_x_809_;
v_isShared_824_ = v_isSharedCheck_858_;
goto v_resetjp_822_;
}
else
{
lean_dec(v_x_809_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_858_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v_v_825_; lean_object* v___x_826_; lean_object* v_xs_x27_827_; lean_object* v___y_829_; 
v_v_825_ = lean_array_fget(v_es_814_, v_j_819_);
v___x_826_ = lean_box(0);
v_xs_x27_827_ = lean_array_fset(v_es_814_, v_j_819_, v___x_826_);
switch(lean_obj_tag(v_v_825_))
{
case 0:
{
lean_object* v_key_834_; lean_object* v_val_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_845_; 
v_key_834_ = lean_ctor_get(v_v_825_, 0);
v_val_835_ = lean_ctor_get(v_v_825_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_v_825_);
if (v_isSharedCheck_845_ == 0)
{
v___x_837_ = v_v_825_;
v_isShared_838_ = v_isSharedCheck_845_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_val_835_);
lean_inc(v_key_834_);
lean_dec(v_v_825_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_845_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
uint8_t v___x_839_; 
v___x_839_ = l_Lean_instBEqMVarId_beq(v_x_812_, v_key_834_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_del_object(v___x_837_);
v___x_840_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_834_, v_val_835_, v_x_812_, v_x_813_);
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
v___y_829_ = v___x_841_;
goto v___jp_828_;
}
else
{
lean_object* v___x_843_; 
lean_dec(v_val_835_);
lean_dec(v_key_834_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v_x_813_);
lean_ctor_set(v___x_837_, 0, v_x_812_);
v___x_843_ = v___x_837_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_x_812_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_x_813_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
v___y_829_ = v___x_843_;
goto v___jp_828_;
}
}
}
}
case 1:
{
lean_object* v_node_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_856_; 
v_node_846_ = lean_ctor_get(v_v_825_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_v_825_);
if (v_isSharedCheck_856_ == 0)
{
v___x_848_ = v_v_825_;
v_isShared_849_ = v_isSharedCheck_856_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_node_846_);
lean_dec(v_v_825_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_856_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
size_t v___x_850_; size_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_850_ = lean_usize_shift_right(v_x_810_, v___x_815_);
v___x_851_ = lean_usize_add(v_x_811_, v___x_816_);
v___x_852_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_node_846_, v___x_850_, v___x_851_, v_x_812_, v_x_813_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_852_);
v___x_854_ = v___x_848_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
v___y_829_ = v___x_854_;
goto v___jp_828_;
}
}
}
default: 
{
lean_object* v___x_857_; 
v___x_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_857_, 0, v_x_812_);
lean_ctor_set(v___x_857_, 1, v_x_813_);
v___y_829_ = v___x_857_;
goto v___jp_828_;
}
}
v___jp_828_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_array_fset(v_xs_x27_827_, v_j_819_, v___y_829_);
lean_dec(v_j_819_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v___x_830_);
v___x_832_ = v___x_823_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
else
{
lean_object* v_ks_860_; lean_object* v_vs_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_881_; 
v_ks_860_ = lean_ctor_get(v_x_809_, 0);
v_vs_861_ = lean_ctor_get(v_x_809_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v_x_809_);
if (v_isSharedCheck_881_ == 0)
{
v___x_863_ = v_x_809_;
v_isShared_864_ = v_isSharedCheck_881_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_vs_861_);
lean_inc(v_ks_860_);
lean_dec(v_x_809_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_881_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_ks_860_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v_vs_861_);
v___x_866_ = v_reuseFailAlloc_880_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v_newNode_867_; uint8_t v___y_869_; size_t v___x_875_; uint8_t v___x_876_; 
v_newNode_867_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v___x_866_, v_x_812_, v_x_813_);
v___x_875_ = ((size_t)7ULL);
v___x_876_ = lean_usize_dec_le(v___x_875_, v_x_811_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_877_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_867_);
v___x_878_ = lean_unsigned_to_nat(4u);
v___x_879_ = lean_nat_dec_lt(v___x_877_, v___x_878_);
lean_dec(v___x_877_);
v___y_869_ = v___x_879_;
goto v___jp_868_;
}
else
{
v___y_869_ = v___x_876_;
goto v___jp_868_;
}
v___jp_868_:
{
if (v___y_869_ == 0)
{
lean_object* v_ks_870_; lean_object* v_vs_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v_ks_870_ = lean_ctor_get(v_newNode_867_, 0);
lean_inc_ref(v_ks_870_);
v_vs_871_ = lean_ctor_get(v_newNode_867_, 1);
lean_inc_ref(v_vs_871_);
lean_dec_ref(v_newNode_867_);
v___x_872_ = lean_unsigned_to_nat(0u);
v___x_873_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_x_811_, v_ks_870_, v_vs_871_, v___x_872_, v___x_873_);
lean_dec_ref(v_vs_871_);
lean_dec_ref(v_ks_870_);
return v___x_874_;
}
else
{
return v_newNode_867_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_882_, lean_object* v_keys_883_, lean_object* v_vals_884_, lean_object* v_i_885_, lean_object* v_entries_886_){
_start:
{
lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_887_ = lean_array_get_size(v_keys_883_);
v___x_888_ = lean_nat_dec_lt(v_i_885_, v___x_887_);
if (v___x_888_ == 0)
{
lean_dec(v_i_885_);
return v_entries_886_;
}
else
{
lean_object* v_k_889_; lean_object* v_v_890_; uint64_t v___x_891_; size_t v_h_892_; size_t v___x_893_; lean_object* v___x_894_; size_t v___x_895_; size_t v___x_896_; size_t v___x_897_; size_t v_h_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_k_889_ = lean_array_fget_borrowed(v_keys_883_, v_i_885_);
v_v_890_ = lean_array_fget_borrowed(v_vals_884_, v_i_885_);
v___x_891_ = l_Lean_instHashableMVarId_hash(v_k_889_);
v_h_892_ = lean_uint64_to_usize(v___x_891_);
v___x_893_ = ((size_t)5ULL);
v___x_894_ = lean_unsigned_to_nat(1u);
v___x_895_ = ((size_t)1ULL);
v___x_896_ = lean_usize_sub(v_depth_882_, v___x_895_);
v___x_897_ = lean_usize_mul(v___x_893_, v___x_896_);
v_h_898_ = lean_usize_shift_right(v_h_892_, v___x_897_);
v___x_899_ = lean_nat_add(v_i_885_, v___x_894_);
lean_dec(v_i_885_);
lean_inc(v_v_890_);
lean_inc(v_k_889_);
v___x_900_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_entries_886_, v_h_898_, v_depth_882_, v_k_889_, v_v_890_);
v_i_885_ = v___x_899_;
v_entries_886_ = v___x_900_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_902_, lean_object* v_keys_903_, lean_object* v_vals_904_, lean_object* v_i_905_, lean_object* v_entries_906_){
_start:
{
size_t v_depth_boxed_907_; lean_object* v_res_908_; 
v_depth_boxed_907_ = lean_unbox_usize(v_depth_902_);
lean_dec(v_depth_902_);
v_res_908_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_907_, v_keys_903_, v_vals_904_, v_i_905_, v_entries_906_);
lean_dec_ref(v_vals_904_);
lean_dec_ref(v_keys_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_x_911_, lean_object* v_x_912_, lean_object* v_x_913_){
_start:
{
size_t v_x_2583__boxed_914_; size_t v_x_2584__boxed_915_; lean_object* v_res_916_; 
v_x_2583__boxed_914_ = lean_unbox_usize(v_x_910_);
lean_dec(v_x_910_);
v_x_2584__boxed_915_ = lean_unbox_usize(v_x_911_);
lean_dec(v_x_911_);
v_res_916_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_909_, v_x_2583__boxed_914_, v_x_2584__boxed_915_, v_x_912_, v_x_913_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object* v_x_917_, lean_object* v_x_918_, lean_object* v_x_919_){
_start:
{
uint64_t v___x_920_; size_t v___x_921_; size_t v___x_922_; lean_object* v___x_923_; 
v___x_920_ = l_Lean_instHashableMVarId_hash(v_x_918_);
v___x_921_ = lean_uint64_to_usize(v___x_920_);
v___x_922_ = ((size_t)1ULL);
v___x_923_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_917_, v___x_921_, v___x_922_, v_x_918_, v_x_919_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object* v_mvarId_924_, lean_object* v_val_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_mctx_931_; lean_object* v_cache_932_; lean_object* v_zetaDeltaFVarIds_933_; lean_object* v_postponed_934_; lean_object* v_diag_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_963_; 
v___x_929_ = lean_st_ref_get(v___y_927_);
lean_dec(v___x_929_);
v___x_930_ = lean_st_ref_take(v___y_926_);
v_mctx_931_ = lean_ctor_get(v___x_930_, 0);
v_cache_932_ = lean_ctor_get(v___x_930_, 1);
v_zetaDeltaFVarIds_933_ = lean_ctor_get(v___x_930_, 2);
v_postponed_934_ = lean_ctor_get(v___x_930_, 3);
v_diag_935_ = lean_ctor_get(v___x_930_, 4);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_963_ == 0)
{
v___x_937_ = v___x_930_;
v_isShared_938_ = v_isSharedCheck_963_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_diag_935_);
lean_inc(v_postponed_934_);
lean_inc(v_zetaDeltaFVarIds_933_);
lean_inc(v_cache_932_);
lean_inc(v_mctx_931_);
lean_dec(v___x_930_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_963_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v_depth_939_; lean_object* v_levelAssignDepth_940_; lean_object* v_lmvarCounter_941_; lean_object* v_mvarCounter_942_; lean_object* v_lDecls_943_; lean_object* v_decls_944_; lean_object* v_userNames_945_; lean_object* v_lAssignment_946_; lean_object* v_eAssignment_947_; lean_object* v_dAssignment_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_962_; 
v_depth_939_ = lean_ctor_get(v_mctx_931_, 0);
v_levelAssignDepth_940_ = lean_ctor_get(v_mctx_931_, 1);
v_lmvarCounter_941_ = lean_ctor_get(v_mctx_931_, 2);
v_mvarCounter_942_ = lean_ctor_get(v_mctx_931_, 3);
v_lDecls_943_ = lean_ctor_get(v_mctx_931_, 4);
v_decls_944_ = lean_ctor_get(v_mctx_931_, 5);
v_userNames_945_ = lean_ctor_get(v_mctx_931_, 6);
v_lAssignment_946_ = lean_ctor_get(v_mctx_931_, 7);
v_eAssignment_947_ = lean_ctor_get(v_mctx_931_, 8);
v_dAssignment_948_ = lean_ctor_get(v_mctx_931_, 9);
v_isSharedCheck_962_ = !lean_is_exclusive(v_mctx_931_);
if (v_isSharedCheck_962_ == 0)
{
v___x_950_ = v_mctx_931_;
v_isShared_951_ = v_isSharedCheck_962_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_dAssignment_948_);
lean_inc(v_eAssignment_947_);
lean_inc(v_lAssignment_946_);
lean_inc(v_userNames_945_);
lean_inc(v_decls_944_);
lean_inc(v_lDecls_943_);
lean_inc(v_mvarCounter_942_);
lean_inc(v_lmvarCounter_941_);
lean_inc(v_levelAssignDepth_940_);
lean_inc(v_depth_939_);
lean_dec(v_mctx_931_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_962_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_952_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_eAssignment_947_, v_mvarId_924_, v_val_925_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 8, v___x_952_);
v___x_954_ = v___x_950_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_depth_939_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_levelAssignDepth_940_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_lmvarCounter_941_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v_mvarCounter_942_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v_lDecls_943_);
lean_ctor_set(v_reuseFailAlloc_961_, 5, v_decls_944_);
lean_ctor_set(v_reuseFailAlloc_961_, 6, v_userNames_945_);
lean_ctor_set(v_reuseFailAlloc_961_, 7, v_lAssignment_946_);
lean_ctor_set(v_reuseFailAlloc_961_, 8, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_961_, 9, v_dAssignment_948_);
v___x_954_ = v_reuseFailAlloc_961_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_956_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_954_);
v___x_956_ = v___x_937_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_cache_932_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_zetaDeltaFVarIds_933_);
lean_ctor_set(v_reuseFailAlloc_960_, 3, v_postponed_934_);
lean_ctor_set(v_reuseFailAlloc_960_, 4, v_diag_935_);
v___x_956_ = v_reuseFailAlloc_960_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = lean_st_ref_set(v___y_926_, v___x_956_);
v___x_958_ = lean_box(0);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object* v_mvarId_964_, lean_object* v_val_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_964_, v_val_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec(v___y_966_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object* v_mvarId_970_, lean_object* v___x_971_, lean_object* v_motiveType_972_, lean_object* v___f_973_, lean_object* v_targets_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
lean_object* v___x_980_; 
lean_inc(v_mvarId_970_);
v___x_980_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_970_, v___x_971_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
if (lean_obj_tag(v___x_980_) == 0)
{
uint8_t v___x_981_; lean_object* v___x_982_; 
lean_dec_ref(v___x_980_);
v___x_981_ = 0;
v___x_982_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_motiveType_972_, v___f_973_, v___x_981_, v___x_981_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_986_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref(v___x_982_);
v_fst_984_ = lean_ctor_get(v_a_983_, 0);
lean_inc(v_fst_984_);
v_snd_985_ = lean_ctor_get(v_a_983_, 1);
lean_inc(v_snd_985_);
lean_dec(v_a_983_);
lean_inc(v_mvarId_970_);
v___x_986_ = l_Lean_MVarId_getTag(v_mvarId_970_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_988_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_987_);
lean_dec_ref(v___x_986_);
v___x_988_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_fst_984_, v_a_987_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1000_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc_n(v_a_989_, 2);
lean_dec_ref(v___x_988_);
v___x_990_ = l_Lean_mkAppN(v_a_989_, v_targets_974_);
v___x_991_ = l_Lean_mkAppN(v___x_990_, v_snd_985_);
lean_dec(v_snd_985_);
v___x_992_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_970_, v___x_991_, v___y_976_, v___y_978_);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1000_ == 0)
{
lean_object* v_unused_1001_; 
v_unused_1001_ = lean_ctor_get(v___x_992_, 0);
lean_dec(v_unused_1001_);
v___x_994_ = v___x_992_;
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
else
{
lean_dec(v___x_992_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_996_ = l_Lean_Expr_mvarId_x21(v_a_989_);
lean_dec(v_a_989_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_996_);
v___x_998_ = v___x_994_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v_snd_985_);
lean_dec(v_mvarId_970_);
v_a_1002_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_988_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_988_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_snd_985_);
lean_dec(v_fst_984_);
lean_dec(v_mvarId_970_);
v_a_1010_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_986_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_986_);
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
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v_mvarId_970_);
v_a_1018_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_982_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_982_);
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
lean_dec_ref(v___f_973_);
lean_dec_ref(v_motiveType_972_);
lean_dec(v_mvarId_970_);
v_a_1026_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_980_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_980_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object* v_mvarId_1034_, lean_object* v___x_1035_, lean_object* v_motiveType_1036_, lean_object* v___f_1037_, lean_object* v_targets_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lean_Meta_generalizeTargetsEq___lam__2(v_mvarId_1034_, v___x_1035_, v_motiveType_1036_, v___f_1037_, v_targets_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec_ref(v_targets_1038_);
return v_res_1044_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___closed__0(void){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_mk_string_unchecked("generalizeTargets", 17, 17);
return v___x_1045_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___closed__1(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___closed__0, &l_Lean_Meta_generalizeTargetsEq___closed__0_once, _init_l_Lean_Meta_generalizeTargetsEq___closed__0);
v___x_1047_ = l_Lean_Name_mkStr1(v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object* v_mvarId_1048_, lean_object* v_motiveType_1049_, lean_object* v_targets_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v___f_1056_; lean_object* v___x_1057_; lean_object* v___f_1058_; lean_object* v___x_1059_; 
lean_inc_n(v_mvarId_1048_, 2);
lean_inc_ref(v_targets_1050_);
v___f_1056_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1056_, 0, v_targets_1050_);
lean_closure_set(v___f_1056_, 1, v_mvarId_1048_);
v___x_1057_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___closed__1, &l_Lean_Meta_generalizeTargetsEq___closed__1_once, _init_l_Lean_Meta_generalizeTargetsEq___closed__1);
v___f_1058_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__2___boxed), 10, 5);
lean_closure_set(v___f_1058_, 0, v_mvarId_1048_);
lean_closure_set(v___f_1058_, 1, v___x_1057_);
lean_closure_set(v___f_1058_, 2, v_motiveType_1049_);
lean_closure_set(v___f_1058_, 3, v___f_1056_);
lean_closure_set(v___f_1058_, 4, v_targets_1050_);
v___x_1059_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1048_, v___f_1058_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object* v_mvarId_1060_, lean_object* v_motiveType_1061_, lean_object* v_targets_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Meta_generalizeTargetsEq(v_mvarId_1060_, v_motiveType_1061_, v_targets_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
lean_dec(v_a_1066_);
lean_dec_ref(v_a_1065_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object* v_mvarId_1069_, lean_object* v_val_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1069_, v_val_1070_, v___y_1072_, v___y_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object* v_mvarId_1077_, lean_object* v_val_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(v_mvarId_1077_, v_val_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object* v_00_u03b2_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_, lean_object* v_x_1088_){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_x_1086_, v_x_1087_, v_x_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1090_, lean_object* v_x_1091_, size_t v_x_1092_, size_t v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_1091_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1097_, lean_object* v_x_1098_, lean_object* v_x_1099_, lean_object* v_x_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_){
_start:
{
size_t v_x_2985__boxed_1103_; size_t v_x_2986__boxed_1104_; lean_object* v_res_1105_; 
v_x_2985__boxed_1103_ = lean_unbox_usize(v_x_1099_);
lean_dec(v_x_1099_);
v_x_2986__boxed_1104_ = lean_unbox_usize(v_x_1100_);
lean_dec(v_x_1100_);
v_res_1105_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(v_00_u03b2_1097_, v_x_1098_, v_x_2985__boxed_1103_, v_x_2986__boxed_1104_, v_x_1101_, v_x_1102_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1106_, lean_object* v_n_1107_, lean_object* v_k_1108_, lean_object* v_v_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v_n_1107_, v_k_1108_, v_v_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1111_, size_t v_depth_1112_, lean_object* v_keys_1113_, lean_object* v_vals_1114_, lean_object* v_heq_1115_, lean_object* v_i_1116_, lean_object* v_entries_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_1112_, v_keys_1113_, v_vals_1114_, v_i_1116_, v_entries_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1119_, lean_object* v_depth_1120_, lean_object* v_keys_1121_, lean_object* v_vals_1122_, lean_object* v_heq_1123_, lean_object* v_i_1124_, lean_object* v_entries_1125_){
_start:
{
size_t v_depth_boxed_1126_; lean_object* v_res_1127_; 
v_depth_boxed_1126_ = lean_unbox_usize(v_depth_1120_);
lean_dec(v_depth_1120_);
v_res_1127_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_1119_, v_depth_boxed_1126_, v_keys_1121_, v_vals_1122_, v_heq_1123_, v_i_1124_, v_entries_1125_);
lean_dec_ref(v_vals_1122_);
lean_dec_ref(v_keys_1121_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1128_, lean_object* v_x_1129_, lean_object* v_x_1130_, lean_object* v_x_1131_, lean_object* v_x_1132_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1129_, v_x_1130_, v_x_1131_, v_x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object* v_mvarId_1134_, lean_object* v_newEqs_1135_, uint8_t v___x_1136_, lean_object* v_h_x27_1137_, lean_object* v_newIndices_1138_, lean_object* v___x_1139_, lean_object* v___x_1140_, lean_object* v___x_1141_, lean_object* v___x_1142_, lean_object* v_e_1143_, lean_object* v___x_1144_, lean_object* v_newEq_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; 
lean_inc(v_mvarId_1134_);
v___x_1151_ = l_Lean_MVarId_getType(v_mvarId_1134_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref(v___x_1151_);
lean_inc(v_mvarId_1134_);
v___x_1153_ = l_Lean_MVarId_getTag(v_mvarId_1134_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; uint8_t v___x_1157_; lean_object* v___x_1158_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref(v___x_1153_);
v___x_1155_ = lean_array_push(v_newEqs_1135_, v_newEq_1145_);
v___x_1156_ = 1;
v___x_1157_ = 1;
v___x_1158_ = l_Lean_Meta_mkForallFVars(v___x_1155_, v_a_1152_, v___x_1136_, v___x_1156_, v___x_1156_, v___x_1157_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref(v___x_1158_);
v___x_1160_ = lean_unsigned_to_nat(1u);
v___x_1161_ = lean_mk_empty_array_with_capacity(v___x_1160_);
v___x_1162_ = lean_array_push(v___x_1161_, v_h_x27_1137_);
v___x_1163_ = l_Lean_Meta_mkForallFVars(v___x_1162_, v_a_1159_, v___x_1136_, v___x_1156_, v___x_1156_, v___x_1157_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec_ref(v___x_1162_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; lean_object* v___x_1165_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref(v___x_1163_);
v___x_1165_ = l_Lean_Meta_mkForallFVars(v_newIndices_1138_, v_a_1164_, v___x_1136_, v___x_1156_, v___x_1156_, v___x_1157_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_a_1166_);
lean_dec_ref(v___x_1165_);
v___x_1167_ = 2;
v___x_1168_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_1139_, v___x_1140_, v_a_1166_, v___x_1167_, v_a_1154_, v___x_1141_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc_n(v_a_1169_, 2);
lean_dec_ref(v___x_1168_);
v___x_1170_ = l_Lean_mkAppN(v_a_1169_, v___x_1142_);
v___x_1171_ = l_Lean_Expr_app___override(v___x_1170_, v_e_1143_);
v___x_1172_ = l_Lean_mkAppN(v___x_1171_, v___x_1144_);
v___x_1173_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1134_, v___x_1172_, v___y_1147_, v___y_1149_);
lean_dec_ref(v___x_1173_);
v___x_1174_ = l_Lean_Expr_mvarId_x21(v_a_1169_);
lean_dec(v_a_1169_);
v___x_1175_ = lean_array_get_size(v_newIndices_1138_);
v___x_1176_ = lean_box(0);
v___x_1177_ = l_Lean_Meta_introNCore(v___x_1174_, v___x_1175_, v___x_1176_, v___x_1136_, v___x_1156_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v_fst_1179_; lean_object* v_snd_1180_; lean_object* v___x_1181_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref(v___x_1177_);
v_fst_1179_ = lean_ctor_get(v_a_1178_, 0);
lean_inc(v_fst_1179_);
v_snd_1180_ = lean_ctor_get(v_a_1178_, 1);
lean_inc(v_snd_1180_);
lean_dec(v_a_1178_);
v___x_1181_ = l_Lean_Meta_intro1Core(v_snd_1180_, v___x_1156_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1193_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1193_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1193_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v_fst_1186_; lean_object* v_snd_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1191_; 
v_fst_1186_ = lean_ctor_get(v_a_1182_, 0);
lean_inc(v_fst_1186_);
v_snd_1187_ = lean_ctor_get(v_a_1182_, 1);
lean_inc(v_snd_1187_);
lean_dec(v_a_1182_);
v___x_1188_ = lean_array_get_size(v___x_1155_);
lean_dec_ref(v___x_1155_);
v___x_1189_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1189_, 0, v_snd_1187_);
lean_ctor_set(v___x_1189_, 1, v_fst_1179_);
lean_ctor_set(v___x_1189_, 2, v_fst_1186_);
lean_ctor_set(v___x_1189_, 3, v___x_1188_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1189_);
v___x_1191_ = v___x_1184_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1189_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec(v_fst_1179_);
lean_dec_ref(v___x_1155_);
v_a_1194_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1181_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1181_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v___x_1155_);
v_a_1202_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1177_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1177_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1143_);
lean_dec(v_mvarId_1134_);
v_a_1210_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1168_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1168_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec_ref(v___x_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_e_1143_);
lean_dec(v___x_1141_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1139_);
lean_dec(v_mvarId_1134_);
v_a_1218_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1165_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1165_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec_ref(v___x_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_e_1143_);
lean_dec(v___x_1141_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1139_);
lean_dec(v_mvarId_1134_);
v_a_1226_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1163_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1163_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec_ref(v___x_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_e_1143_);
lean_dec(v___x_1141_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1139_);
lean_dec_ref(v_h_x27_1137_);
lean_dec(v_mvarId_1134_);
v_a_1234_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1158_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1158_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec(v_a_1152_);
lean_dec_ref(v_newEq_1145_);
lean_dec_ref(v_e_1143_);
lean_dec(v___x_1141_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1139_);
lean_dec_ref(v_h_x27_1137_);
lean_dec_ref(v_newEqs_1135_);
lean_dec(v_mvarId_1134_);
v_a_1242_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1153_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1153_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_newEq_1145_);
lean_dec_ref(v_e_1143_);
lean_dec(v___x_1141_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1139_);
lean_dec_ref(v_h_x27_1137_);
lean_dec_ref(v_newEqs_1135_);
lean_dec(v_mvarId_1134_);
v_a_1250_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1151_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1151_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object** _args){
lean_object* v_mvarId_1258_ = _args[0];
lean_object* v_newEqs_1259_ = _args[1];
lean_object* v___x_1260_ = _args[2];
lean_object* v_h_x27_1261_ = _args[3];
lean_object* v_newIndices_1262_ = _args[4];
lean_object* v___x_1263_ = _args[5];
lean_object* v___x_1264_ = _args[6];
lean_object* v___x_1265_ = _args[7];
lean_object* v___x_1266_ = _args[8];
lean_object* v_e_1267_ = _args[9];
lean_object* v___x_1268_ = _args[10];
lean_object* v_newEq_1269_ = _args[11];
lean_object* v___y_1270_ = _args[12];
lean_object* v___y_1271_ = _args[13];
lean_object* v___y_1272_ = _args[14];
lean_object* v___y_1273_ = _args[15];
lean_object* v___y_1274_ = _args[16];
_start:
{
uint8_t v___x_6263__boxed_1275_; lean_object* v_res_1276_; 
v___x_6263__boxed_1275_ = lean_unbox(v___x_1260_);
v_res_1276_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(v_mvarId_1258_, v_newEqs_1259_, v___x_6263__boxed_1275_, v_h_x27_1261_, v_newIndices_1262_, v___x_1263_, v___x_1264_, v___x_1265_, v___x_1266_, v_e_1267_, v___x_1268_, v_newEq_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec_ref(v___x_1268_);
lean_dec_ref(v___x_1266_);
lean_dec_ref(v_newIndices_1262_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object* v_e_1277_, lean_object* v_h_x27_1278_, lean_object* v_mvarId_1279_, uint8_t v___x_1280_, lean_object* v_newIndices_1281_, lean_object* v___x_1282_, lean_object* v___x_1283_, lean_object* v___x_1284_, lean_object* v___x_1285_, lean_object* v_newEqs_1286_, lean_object* v_newRefls_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v___x_1293_; 
lean_inc_ref(v_h_x27_1278_);
lean_inc_ref(v_e_1277_);
v___x_1293_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_e_1277_, v_h_x27_1278_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; lean_object* v_fst_1295_; lean_object* v_snd_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
lean_dec_ref(v___x_1293_);
v_fst_1295_ = lean_ctor_get(v_a_1294_, 0);
lean_inc(v_fst_1295_);
v_snd_1296_ = lean_ctor_get(v_a_1294_, 1);
lean_inc(v_snd_1296_);
lean_dec(v_a_1294_);
v___x_1297_ = lean_array_push(v_newRefls_1287_, v_snd_1296_);
v___x_1298_ = lean_box(v___x_1280_);
v___f_1299_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed), 17, 11);
lean_closure_set(v___f_1299_, 0, v_mvarId_1279_);
lean_closure_set(v___f_1299_, 1, v_newEqs_1286_);
lean_closure_set(v___f_1299_, 2, v___x_1298_);
lean_closure_set(v___f_1299_, 3, v_h_x27_1278_);
lean_closure_set(v___f_1299_, 4, v_newIndices_1281_);
lean_closure_set(v___f_1299_, 5, v___x_1282_);
lean_closure_set(v___f_1299_, 6, v___x_1283_);
lean_closure_set(v___f_1299_, 7, v___x_1284_);
lean_closure_set(v___f_1299_, 8, v___x_1285_);
lean_closure_set(v___f_1299_, 9, v_e_1277_);
lean_closure_set(v___f_1299_, 10, v___x_1297_);
v___x_1300_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1);
v___x_1301_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_1300_, v_fst_1295_, v___f_1299_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
return v___x_1301_;
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref(v_newRefls_1287_);
lean_dec_ref(v_newEqs_1286_);
lean_dec_ref(v___x_1285_);
lean_dec(v___x_1284_);
lean_dec_ref(v___x_1283_);
lean_dec_ref(v___x_1282_);
lean_dec_ref(v_newIndices_1281_);
lean_dec(v_mvarId_1279_);
lean_dec_ref(v_h_x27_1278_);
lean_dec_ref(v_e_1277_);
v_a_1302_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1293_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1293_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object* v_e_1310_, lean_object* v_h_x27_1311_, lean_object* v_mvarId_1312_, lean_object* v___x_1313_, lean_object* v_newIndices_1314_, lean_object* v___x_1315_, lean_object* v___x_1316_, lean_object* v___x_1317_, lean_object* v___x_1318_, lean_object* v_newEqs_1319_, lean_object* v_newRefls_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
uint8_t v___x_6515__boxed_1326_; lean_object* v_res_1327_; 
v___x_6515__boxed_1326_ = lean_unbox(v___x_1313_);
v_res_1327_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(v_e_1310_, v_h_x27_1311_, v_mvarId_1312_, v___x_6515__boxed_1326_, v_newIndices_1314_, v___x_1315_, v___x_1316_, v___x_1317_, v___x_1318_, v_newEqs_1319_, v_newRefls_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object* v_e_1328_, lean_object* v_mvarId_1329_, uint8_t v___x_1330_, lean_object* v_newIndices_1331_, lean_object* v___x_1332_, lean_object* v___x_1333_, lean_object* v___x_1334_, lean_object* v___x_1335_, lean_object* v_h_x27_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___x_1342_; lean_object* v___f_1343_; lean_object* v___x_1344_; 
v___x_1342_ = lean_box(v___x_1330_);
lean_inc_ref(v___x_1335_);
lean_inc_ref(v_newIndices_1331_);
v___f_1343_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed), 16, 9);
lean_closure_set(v___f_1343_, 0, v_e_1328_);
lean_closure_set(v___f_1343_, 1, v_h_x27_1336_);
lean_closure_set(v___f_1343_, 2, v_mvarId_1329_);
lean_closure_set(v___f_1343_, 3, v___x_1342_);
lean_closure_set(v___f_1343_, 4, v_newIndices_1331_);
lean_closure_set(v___f_1343_, 5, v___x_1332_);
lean_closure_set(v___f_1343_, 6, v___x_1333_);
lean_closure_set(v___f_1343_, 7, v___x_1334_);
lean_closure_set(v___f_1343_, 8, v___x_1335_);
v___x_1344_ = l_Lean_Meta_withNewEqs___redArg(v___x_1335_, v_newIndices_1331_, v___f_1343_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object* v_e_1345_, lean_object* v_mvarId_1346_, lean_object* v___x_1347_, lean_object* v_newIndices_1348_, lean_object* v___x_1349_, lean_object* v___x_1350_, lean_object* v___x_1351_, lean_object* v___x_1352_, lean_object* v_h_x27_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
uint8_t v___x_6580__boxed_1359_; lean_object* v_res_1360_; 
v___x_6580__boxed_1359_ = lean_unbox(v___x_1347_);
v_res_1360_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(v_e_1345_, v_mvarId_1346_, v___x_6580__boxed_1359_, v_newIndices_1348_, v___x_1349_, v___x_1350_, v___x_1351_, v___x_1352_, v_h_x27_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1360_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_1361_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0);
v___x_1363_ = l_Lean_Name_mkStr1(v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object* v_e_1364_, lean_object* v_mvarId_1365_, uint8_t v___x_1366_, lean_object* v___x_1367_, lean_object* v___x_1368_, lean_object* v___x_1369_, lean_object* v___x_1370_, lean_object* v___x_1371_, lean_object* v_varName_x3f_1372_, lean_object* v_newIndices_1373_, lean_object* v_x_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___x_1380_; lean_object* v___f_1381_; lean_object* v___x_1382_; 
v___x_1380_ = lean_box(v___x_1366_);
lean_inc_ref(v_newIndices_1373_);
v___f_1381_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed), 14, 8);
lean_closure_set(v___f_1381_, 0, v_e_1364_);
lean_closure_set(v___f_1381_, 1, v_mvarId_1365_);
lean_closure_set(v___f_1381_, 2, v___x_1380_);
lean_closure_set(v___f_1381_, 3, v_newIndices_1373_);
lean_closure_set(v___f_1381_, 4, v___x_1367_);
lean_closure_set(v___f_1381_, 5, v___x_1368_);
lean_closure_set(v___f_1381_, 6, v___x_1369_);
lean_closure_set(v___f_1381_, 7, v___x_1370_);
v___x_1382_ = l_Lean_mkAppN(v___x_1371_, v_newIndices_1373_);
lean_dec_ref(v_newIndices_1373_);
if (lean_obj_tag(v_varName_x3f_1372_) == 1)
{
lean_object* v_val_1383_; lean_object* v___x_1384_; 
v_val_1383_ = lean_ctor_get(v_varName_x3f_1372_, 0);
lean_inc(v_val_1383_);
lean_dec_ref(v_varName_x3f_1372_);
v___x_1384_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_val_1383_, v___x_1382_, v___f_1381_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
return v___x_1384_;
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
lean_dec(v_varName_x3f_1372_);
v___x_1385_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1);
v___x_1386_ = l_Lean_Core_mkFreshUserName(v___x_1385_, v___y_1377_, v___y_1378_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1388_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref(v___x_1386_);
v___x_1388_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_a_1387_, v___x_1382_, v___f_1381_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
return v___x_1388_;
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec_ref(v___x_1382_);
lean_dec_ref(v___f_1381_);
v_a_1389_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1386_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1386_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object* v_e_1397_, lean_object* v_mvarId_1398_, lean_object* v___x_1399_, lean_object* v___x_1400_, lean_object* v___x_1401_, lean_object* v___x_1402_, lean_object* v___x_1403_, lean_object* v___x_1404_, lean_object* v_varName_x3f_1405_, lean_object* v_newIndices_1406_, lean_object* v_x_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
uint8_t v___x_6622__boxed_1413_; lean_object* v_res_1414_; 
v___x_6622__boxed_1413_ = lean_unbox(v___x_1399_);
v_res_1414_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(v_e_1397_, v_mvarId_1398_, v___x_6622__boxed_1413_, v___x_1400_, v___x_1401_, v___x_1402_, v___x_1403_, v___x_1404_, v_varName_x3f_1405_, v_newIndices_1406_, v_x_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec_ref(v_x_1407_);
return v_res_1414_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1415_; 
v___x_1415_ = lean_mk_string_unchecked("generalizeIndices", 17, 17);
return v___x_1415_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0);
v___x_1417_ = l_Lean_Name_mkStr1(v___x_1416_);
return v___x_1417_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_mk_string_unchecked("inductive type expected", 23, 23);
return v___x_1418_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2);
v___x_1420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
return v___x_1420_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3);
v___x_1422_ = l_Lean_MessageData_ofFormat(v___x_1421_);
return v___x_1422_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4);
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_mk_string_unchecked("ill-formed inductive datatype", 29, 29);
return v___x_1425_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6);
v___x_1427_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7);
v___x_1429_ = l_Lean_MessageData_ofFormat(v___x_1428_);
return v___x_1429_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
return v___x_1431_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10(void){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_mk_string_unchecked("indexed inductive type expected", 31, 31);
return v___x_1432_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11(void){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10);
v___x_1434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11);
v___x_1436_ = l_Lean_MessageData_ofFormat(v___x_1435_);
return v___x_1436_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12);
v___x_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object* v_mvarId_1439_, lean_object* v_e_1440_, lean_object* v___x_1441_, lean_object* v___x_1442_, lean_object* v_varName_x3f_1443_, lean_object* v_x_1444_, lean_object* v_x_1445_, lean_object* v_x_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 5)
{
lean_object* v_fn_1452_; lean_object* v_arg_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_fn_1452_ = lean_ctor_get(v_x_1444_, 0);
lean_inc_ref(v_fn_1452_);
v_arg_1453_ = lean_ctor_get(v_x_1444_, 1);
lean_inc_ref(v_arg_1453_);
lean_dec_ref(v_x_1444_);
v___x_1454_ = lean_array_set(v_x_1445_, v_x_1446_, v_arg_1453_);
v___x_1455_ = lean_unsigned_to_nat(1u);
v___x_1456_ = lean_nat_sub(v_x_1446_, v___x_1455_);
lean_dec(v_x_1446_);
v_x_1444_ = v_fn_1452_;
v_x_1445_ = v___x_1454_;
v_x_1446_ = v___x_1456_;
goto _start;
}
else
{
lean_object* v___x_1458_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; 
lean_dec(v_x_1446_);
v___x_1458_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1);
if (lean_obj_tag(v_x_1444_) == 4)
{
lean_object* v_declName_1466_; lean_object* v___x_1467_; lean_object* v_env_1468_; uint8_t v___x_1469_; lean_object* v___x_1470_; 
v_declName_1466_ = lean_ctor_get(v_x_1444_, 0);
v___x_1467_ = lean_st_ref_get(v___y_1450_);
v_env_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc_ref(v_env_1468_);
lean_dec(v___x_1467_);
v___x_1469_ = 0;
lean_inc(v_declName_1466_);
v___x_1470_ = l_Lean_Environment_find_x3f(v_env_1468_, v_declName_1466_, v___x_1469_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_dec_ref(v_x_1444_);
lean_dec_ref(v_x_1445_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
v___y_1460_ = v___y_1447_;
v___y_1461_ = v___y_1448_;
v___y_1462_ = v___y_1449_;
v___y_1463_ = v___y_1450_;
goto v___jp_1459_;
}
else
{
lean_object* v_val_1471_; 
v_val_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_val_1471_);
lean_dec_ref(v___x_1470_);
if (lean_obj_tag(v_val_1471_) == 5)
{
lean_object* v_val_1472_; lean_object* v_numParams_1473_; lean_object* v_numIndices_1474_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1500_; lean_object* v___y_1501_; lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___x_1517_; uint8_t v___x_1518_; 
v_val_1472_ = lean_ctor_get(v_val_1471_, 0);
lean_inc_ref(v_val_1472_);
lean_dec_ref(v_val_1471_);
v_numParams_1473_ = lean_ctor_get(v_val_1472_, 1);
lean_inc(v_numParams_1473_);
v_numIndices_1474_ = lean_ctor_get(v_val_1472_, 2);
lean_inc(v_numIndices_1474_);
lean_dec_ref(v_val_1472_);
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = lean_nat_dec_lt(v___x_1517_, v_numIndices_1474_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13);
lean_inc(v_mvarId_1439_);
v___x_1520_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1458_, v_mvarId_1439_, v___x_1519_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_dec_ref(v___x_1520_);
v___y_1500_ = v___y_1447_;
v___y_1501_ = v___y_1448_;
v___y_1502_ = v___y_1449_;
v___y_1503_ = v___y_1450_;
goto v___jp_1499_;
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec(v_numIndices_1474_);
lean_dec(v_numParams_1473_);
lean_dec_ref(v_x_1444_);
lean_dec_ref(v_x_1445_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
lean_dec(v_mvarId_1439_);
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
else
{
v___y_1500_ = v___y_1447_;
v___y_1501_ = v___y_1448_;
v___y_1502_ = v___y_1449_;
v___y_1503_ = v___y_1450_;
goto v___jp_1499_;
}
v___jp_1475_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1480_ = lean_unsigned_to_nat(0u);
v___x_1481_ = l_Array_extract___redArg(v_x_1445_, v___x_1480_, v_numParams_1473_);
v___x_1482_ = l_Lean_mkAppN(v_x_1444_, v___x_1481_);
lean_dec_ref(v___x_1481_);
lean_inc(v___y_1479_);
lean_inc_ref(v___y_1478_);
lean_inc(v___y_1477_);
lean_inc_ref(v___y_1476_);
lean_inc_ref(v___x_1482_);
v___x_1483_ = lean_infer_type(v___x_1482_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___f_1489_; lean_object* v___x_1490_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref(v___x_1483_);
v___x_1485_ = lean_array_get_size(v_x_1445_);
v___x_1486_ = lean_nat_sub(v___x_1485_, v_numIndices_1474_);
lean_dec(v_numIndices_1474_);
v___x_1487_ = l_Array_extract___redArg(v_x_1445_, v___x_1486_, v___x_1485_);
lean_dec_ref(v_x_1445_);
v___x_1488_ = lean_box(v___x_1469_);
v___f_1489_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed), 16, 9);
lean_closure_set(v___f_1489_, 0, v_e_1440_);
lean_closure_set(v___f_1489_, 1, v_mvarId_1439_);
lean_closure_set(v___f_1489_, 2, v___x_1488_);
lean_closure_set(v___f_1489_, 3, v___x_1441_);
lean_closure_set(v___f_1489_, 4, v___x_1442_);
lean_closure_set(v___f_1489_, 5, v___x_1480_);
lean_closure_set(v___f_1489_, 6, v___x_1487_);
lean_closure_set(v___f_1489_, 7, v___x_1482_);
lean_closure_set(v___f_1489_, 8, v_varName_x3f_1443_);
v___x_1490_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_a_1484_, v___f_1489_, v___x_1469_, v___x_1469_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
return v___x_1490_;
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec_ref(v___x_1482_);
lean_dec(v_numIndices_1474_);
lean_dec_ref(v_x_1445_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
lean_dec(v_mvarId_1439_);
v_a_1491_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1483_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1483_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
v___jp_1499_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1504_ = lean_array_get_size(v_x_1445_);
v___x_1505_ = lean_nat_add(v_numIndices_1474_, v_numParams_1473_);
v___x_1506_ = lean_nat_dec_eq(v___x_1504_, v___x_1505_);
lean_dec(v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9);
lean_inc(v_mvarId_1439_);
v___x_1508_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1458_, v_mvarId_1439_, v___x_1507_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_dec_ref(v___x_1508_);
v___y_1476_ = v___y_1500_;
v___y_1477_ = v___y_1501_;
v___y_1478_ = v___y_1502_;
v___y_1479_ = v___y_1503_;
goto v___jp_1475_;
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
lean_dec(v_numIndices_1474_);
lean_dec(v_numParams_1473_);
lean_dec_ref(v_x_1444_);
lean_dec_ref(v_x_1445_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
lean_dec(v_mvarId_1439_);
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1508_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1508_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
else
{
v___y_1476_ = v___y_1500_;
v___y_1477_ = v___y_1501_;
v___y_1478_ = v___y_1502_;
v___y_1479_ = v___y_1503_;
goto v___jp_1475_;
}
}
}
else
{
lean_dec(v_val_1471_);
lean_dec_ref(v_x_1444_);
lean_dec_ref(v_x_1445_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
v___y_1460_ = v___y_1447_;
v___y_1461_ = v___y_1448_;
v___y_1462_ = v___y_1449_;
v___y_1463_ = v___y_1450_;
goto v___jp_1459_;
}
}
}
else
{
lean_dec_ref(v_x_1445_);
lean_dec_ref(v_x_1444_);
lean_dec(v_varName_x3f_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec_ref(v_e_1440_);
v___y_1460_ = v___y_1447_;
v___y_1461_ = v___y_1448_;
v___y_1462_ = v___y_1449_;
v___y_1463_ = v___y_1450_;
goto v___jp_1459_;
}
v___jp_1459_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5);
v___x_1465_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1458_, v_mvarId_1439_, v___x_1464_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object* v_mvarId_1529_, lean_object* v_e_1530_, lean_object* v___x_1531_, lean_object* v___x_1532_, lean_object* v_varName_x3f_1533_, lean_object* v_x_1534_, lean_object* v_x_1535_, lean_object* v_x_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1529_, v_e_1530_, v___x_1531_, v___x_1532_, v_varName_x3f_1533_, v_x_1534_, v_x_1535_, v_x_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object* v_mvarId_1543_, lean_object* v_e_1544_, lean_object* v_varName_x3f_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1);
lean_inc(v_mvarId_1543_);
v___x_1552_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1543_, v___x_1551_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_lctx_1553_; lean_object* v_localInstances_1554_; lean_object* v___x_1555_; 
lean_dec_ref(v___x_1552_);
v_lctx_1553_ = lean_ctor_get(v___y_1546_, 2);
lean_inc_ref(v_lctx_1553_);
v_localInstances_1554_ = lean_ctor_get(v___y_1546_, 3);
lean_inc_ref(v_localInstances_1554_);
lean_inc(v___y_1549_);
lean_inc_ref(v___y_1548_);
lean_inc(v___y_1547_);
lean_inc_ref(v___y_1546_);
lean_inc_ref(v_e_1544_);
v___x_1555_ = lean_infer_type(v_e_1544_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref(v___x_1555_);
v___x_1557_ = l_Lean_Meta_whnfD(v_a_1556_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v_dummy_1559_; lean_object* v_nargs_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref(v___x_1557_);
v_dummy_1559_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
v_nargs_1560_ = l_Lean_Expr_getAppNumArgs(v_a_1558_);
lean_inc(v_nargs_1560_);
v___x_1561_ = lean_mk_array(v_nargs_1560_, v_dummy_1559_);
v___x_1562_ = lean_unsigned_to_nat(1u);
v___x_1563_ = lean_nat_sub(v_nargs_1560_, v___x_1562_);
lean_dec(v_nargs_1560_);
v___x_1564_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1543_, v_e_1544_, v_lctx_1553_, v_localInstances_1554_, v_varName_x3f_1545_, v_a_1558_, v___x_1561_, v___x_1563_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
return v___x_1564_;
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v_localInstances_1554_);
lean_dec_ref(v_lctx_1553_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v_varName_x3f_1545_);
lean_dec_ref(v_e_1544_);
lean_dec(v_mvarId_1543_);
v_a_1565_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1557_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1557_);
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
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec_ref(v_localInstances_1554_);
lean_dec_ref(v_lctx_1553_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v_varName_x3f_1545_);
lean_dec_ref(v_e_1544_);
lean_dec(v_mvarId_1543_);
v_a_1573_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1555_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1555_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v_varName_x3f_1545_);
lean_dec_ref(v_e_1544_);
lean_dec(v_mvarId_1543_);
v_a_1581_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1552_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1552_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object* v_mvarId_1589_, lean_object* v_e_1590_, lean_object* v_varName_x3f_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lean_Meta_generalizeIndices_x27___lam__0(v_mvarId_1589_, v_e_1590_, v_varName_x3f_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object* v_mvarId_1598_, lean_object* v_e_1599_, lean_object* v_varName_x3f_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v___f_1606_; lean_object* v___x_1607_; 
lean_inc(v_mvarId_1598_);
v___f_1606_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices_x27___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1606_, 0, v_mvarId_1598_);
lean_closure_set(v___f_1606_, 1, v_e_1599_);
lean_closure_set(v___f_1606_, 2, v_varName_x3f_1600_);
v___x_1607_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1598_, v___f_1606_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object* v_mvarId_1608_, lean_object* v_e_1609_, lean_object* v_varName_x3f_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1608_, v_e_1609_, v_varName_x3f_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object* v_fvarId_1617_, lean_object* v_mvarId_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1617_, v___y_1619_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc_n(v_a_1625_, 2);
lean_dec_ref(v___x_1624_);
v___x_1626_ = l_Lean_LocalDecl_toExpr(v_a_1625_);
v___x_1627_ = l_Lean_LocalDecl_userName(v_a_1625_);
lean_dec(v_a_1625_);
v___x_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
v___x_1629_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1618_, v___x_1626_, v___x_1628_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
return v___x_1629_;
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec(v_mvarId_1618_);
v_a_1630_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1624_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1624_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object* v_fvarId_1638_, lean_object* v_mvarId_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Lean_Meta_generalizeIndices___lam__0(v_fvarId_1638_, v_mvarId_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object* v_mvarId_1646_, lean_object* v_fvarId_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v___f_1653_; lean_object* v___x_1654_; 
lean_inc(v_mvarId_1646_);
v___f_1653_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1653_, 0, v_fvarId_1647_);
lean_closure_set(v___f_1653_, 1, v_mvarId_1646_);
v___x_1654_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1646_, v___f_1653_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object* v_mvarId_1655_, lean_object* v_fvarId_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_Meta_generalizeIndices(v_mvarId_1655_, v_fvarId_1656_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
lean_dec(v_a_1660_);
lean_dec_ref(v_a_1659_);
lean_dec(v_a_1658_);
lean_dec_ref(v_a_1657_);
return v_res_1662_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_mk_string_unchecked("casesOn", 7, 7);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object* v___x_1664_, lean_object* v_a_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_, lean_object* v___y_1669_){
_start:
{
if (lean_obj_tag(v_x_1666_) == 5)
{
lean_object* v_fn_1674_; lean_object* v_arg_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_fn_1674_ = lean_ctor_get(v_x_1666_, 0);
lean_inc_ref(v_fn_1674_);
v_arg_1675_ = lean_ctor_get(v_x_1666_, 1);
lean_inc_ref(v_arg_1675_);
lean_dec_ref(v_x_1666_);
v___x_1676_ = lean_array_set(v_x_1667_, v_x_1668_, v_arg_1675_);
v___x_1677_ = lean_unsigned_to_nat(1u);
v___x_1678_ = lean_nat_sub(v_x_1668_, v___x_1677_);
lean_dec(v_x_1668_);
v_x_1666_ = v_fn_1674_;
v_x_1667_ = v___x_1676_;
v_x_1668_ = v___x_1678_;
goto _start;
}
else
{
lean_dec(v_x_1668_);
if (lean_obj_tag(v_x_1666_) == 4)
{
lean_object* v_declName_1680_; lean_object* v___x_1681_; lean_object* v_env_1682_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
v_declName_1680_ = lean_ctor_get(v_x_1666_, 0);
v___x_1681_ = lean_st_ref_get(v___y_1669_);
v_env_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc_ref(v_env_1682_);
lean_dec(v___x_1681_);
v___x_1683_ = 0;
lean_inc(v_declName_1680_);
v___x_1684_ = l_Lean_Environment_find_x3f(v_env_1682_, v_declName_1680_, v___x_1683_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_dec_ref(v_x_1666_);
lean_dec_ref(v_x_1667_);
lean_dec_ref(v_a_1665_);
lean_dec_ref(v___x_1664_);
goto v___jp_1671_;
}
else
{
lean_object* v_val_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1723_; 
v_val_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1723_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_val_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1723_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
if (lean_obj_tag(v_val_1685_) == 5)
{
lean_object* v_val_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1722_; 
v_val_1689_ = lean_ctor_get(v_val_1685_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_val_1685_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1691_ = v_val_1685_;
v_isShared_1692_ = v_isSharedCheck_1722_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_val_1689_);
lean_dec(v_val_1685_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1722_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v_toConstantVal_1693_; lean_object* v_numParams_1694_; lean_object* v_numIndices_1695_; lean_object* v_ctors_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v_toConstantVal_1693_ = lean_ctor_get(v_val_1689_, 0);
v_numParams_1694_ = lean_ctor_get(v_val_1689_, 1);
v_numIndices_1695_ = lean_ctor_get(v_val_1689_, 2);
v_ctors_1696_ = lean_ctor_get(v_val_1689_, 4);
v___x_1697_ = lean_array_get_size(v_x_1667_);
v___x_1698_ = lean_nat_add(v_numIndices_1695_, v_numParams_1694_);
v___x_1699_ = lean_nat_dec_eq(v___x_1697_, v___x_1698_);
lean_dec(v___x_1698_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
lean_dec_ref(v_val_1689_);
lean_del_object(v___x_1687_);
lean_dec_ref(v_x_1666_);
lean_dec_ref(v_x_1667_);
lean_dec_ref(v_a_1665_);
lean_dec_ref(v___x_1664_);
v___x_1700_ = lean_box(0);
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1700_);
v___x_1702_ = v___x_1691_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
else
{
lean_object* v_name_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v_name_1704_ = lean_ctor_get(v_toConstantVal_1693_, 0);
v___x_1705_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0);
lean_inc(v_name_1704_);
v___x_1706_ = l_Lean_Name_str___override(v_name_1704_, v___x_1705_);
v___x_1707_ = l_Lean_Environment_contains(v___x_1664_, v___x_1706_, v___x_1699_);
if (v___x_1707_ == 0)
{
lean_object* v___x_1708_; lean_object* v___x_1710_; 
lean_dec_ref(v_val_1689_);
lean_del_object(v___x_1687_);
lean_dec_ref(v_x_1666_);
lean_dec_ref(v_x_1667_);
lean_dec_ref(v_a_1665_);
v___x_1708_ = lean_box(0);
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1708_);
v___x_1710_ = v___x_1691_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
else
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1712_ = l_List_lengthTR___redArg(v_ctors_1696_);
v___x_1713_ = lean_nat_sub(v___x_1697_, v_numIndices_1695_);
v___x_1714_ = l_Array_extract___redArg(v_x_1667_, v___x_1713_, v___x_1697_);
v___x_1715_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1715_, 0, v_val_1689_);
lean_ctor_set(v___x_1715_, 1, v___x_1712_);
lean_ctor_set(v___x_1715_, 2, v_a_1665_);
lean_ctor_set(v___x_1715_, 3, v_x_1666_);
lean_ctor_set(v___x_1715_, 4, v_x_1667_);
lean_ctor_set(v___x_1715_, 5, v___x_1714_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1715_);
v___x_1717_ = v___x_1687_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1719_; 
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1717_);
v___x_1719_ = v___x_1691_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1687_);
lean_dec(v_val_1685_);
lean_dec_ref(v_x_1666_);
lean_dec_ref(v_x_1667_);
lean_dec_ref(v_a_1665_);
lean_dec_ref(v___x_1664_);
goto v___jp_1671_;
}
}
}
}
else
{
lean_dec_ref(v_x_1667_);
lean_dec_ref(v_x_1666_);
lean_dec_ref(v_a_1665_);
lean_dec_ref(v___x_1664_);
goto v___jp_1671_;
}
}
v___jp_1671_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_box(0);
v___x_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
return v___x_1673_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object* v___x_1724_, lean_object* v_a_1725_, lean_object* v_x_1726_, lean_object* v_x_1727_, lean_object* v_x_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1724_, v_a_1725_, v_x_1726_, v_x_1727_, v_x_1728_, v___y_1729_);
lean_dec(v___y_1729_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object* v_majorFVarId_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v___x_1738_; lean_object* v_env_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; uint8_t v___x_1745_; 
v___x_1738_ = lean_st_ref_get(v_a_1736_);
v_env_1742_ = lean_ctor_get(v___x_1738_, 0);
lean_inc_ref_n(v_env_1742_, 2);
lean_dec(v___x_1738_);
v___x_1743_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5);
v___x_1744_ = 1;
v___x_1745_ = l_Lean_Environment_contains(v_env_1742_, v___x_1743_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_dec_ref(v_env_1742_);
lean_dec(v_majorFVarId_1732_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1746_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1);
lean_inc_ref(v_env_1742_);
v___x_1747_ = l_Lean_Environment_contains(v_env_1742_, v___x_1746_, v___x_1745_);
if (v___x_1747_ == 0)
{
lean_dec_ref(v_env_1742_);
lean_dec(v_majorFVarId_1732_);
goto v___jp_1739_;
}
else
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_1732_, v_a_1733_, v_a_1735_, v_a_1736_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = l_Lean_LocalDecl_type(v_a_1749_);
lean_inc(v_a_1736_);
lean_inc_ref(v_a_1735_);
lean_inc(v_a_1734_);
lean_inc_ref(v_a_1733_);
v___x_1751_ = lean_whnf(v___x_1750_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v_dummy_1753_; lean_object* v_nargs_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref(v___x_1751_);
v_dummy_1753_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
v_nargs_1754_ = l_Lean_Expr_getAppNumArgs(v_a_1752_);
lean_inc(v_nargs_1754_);
v___x_1755_ = lean_mk_array(v_nargs_1754_, v_dummy_1753_);
v___x_1756_ = lean_unsigned_to_nat(1u);
v___x_1757_ = lean_nat_sub(v_nargs_1754_, v___x_1756_);
lean_dec(v_nargs_1754_);
v___x_1758_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v_env_1742_, v_a_1749_, v_a_1752_, v___x_1755_, v___x_1757_, v_a_1736_);
return v___x_1758_;
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v_a_1749_);
lean_dec_ref(v_env_1742_);
v_a_1759_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1751_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1751_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec_ref(v_env_1742_);
v_a_1767_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1748_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1748_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
}
v___jp_1739_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_box(0);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object* v_majorFVarId_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
lean_dec(v_a_1777_);
lean_dec_ref(v_a_1776_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object* v___x_1782_, lean_object* v_a_1783_, lean_object* v_x_1784_, lean_object* v_x_1785_, lean_object* v_x_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1782_, v_a_1783_, v_x_1784_, v_x_1785_, v_x_1786_, v___y_1790_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object* v___x_1793_, lean_object* v_a_1794_, lean_object* v_x_1795_, lean_object* v_x_1796_, lean_object* v_x_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(v___x_1793_, v_a_1794_, v_x_1795_, v_x_1796_, v_x_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
return v_res_1803_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object* v___x_1804_, lean_object* v_as_1805_, size_t v_i_1806_, size_t v_stop_1807_){
_start:
{
uint8_t v___x_1808_; 
v___x_1808_ = lean_usize_dec_eq(v_i_1806_, v_stop_1807_);
if (v___x_1808_ == 0)
{
uint8_t v___x_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; 
v___x_1809_ = 1;
v___x_1810_ = lean_array_uget_borrowed(v_as_1805_, v_i_1806_);
v___x_1811_ = l_Lean_Expr_isFVar(v___x_1810_);
if (v___x_1811_ == 0)
{
return v___x_1809_;
}
else
{
lean_object* v___x_1812_; uint8_t v___x_1813_; 
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = lean_nat_dec_eq(v___x_1804_, v___x_1812_);
if (v___x_1813_ == 0)
{
size_t v___x_1814_; size_t v___x_1815_; 
v___x_1814_ = ((size_t)1ULL);
v___x_1815_ = lean_usize_add(v_i_1806_, v___x_1814_);
v_i_1806_ = v___x_1815_;
goto _start;
}
else
{
return v___x_1809_;
}
}
}
else
{
uint8_t v___x_1817_; 
v___x_1817_ = 0;
return v___x_1817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object* v___x_1818_, lean_object* v_as_1819_, lean_object* v_i_1820_, lean_object* v_stop_1821_){
_start:
{
size_t v_i_boxed_1822_; size_t v_stop_boxed_1823_; uint8_t v_res_1824_; lean_object* v_r_1825_; 
v_i_boxed_1822_ = lean_unbox_usize(v_i_1820_);
lean_dec(v_i_1820_);
v_stop_boxed_1823_ = lean_unbox_usize(v_stop_1821_);
lean_dec(v_stop_1821_);
v_res_1824_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_1818_, v_as_1819_, v_i_boxed_1822_, v_stop_boxed_1823_);
lean_dec_ref(v_as_1819_);
lean_dec(v___x_1818_);
v_r_1825_ = lean_box(v_res_1824_);
return v_r_1825_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object* v_fvarId_1826_, uint8_t v___y_1827_, lean_object* v_as_1828_, size_t v_i_1829_, size_t v_stop_1830_){
_start:
{
uint8_t v___x_1831_; 
v___x_1831_ = lean_usize_dec_eq(v_i_1829_, v_stop_1830_);
if (v___x_1831_ == 0)
{
uint8_t v___x_1832_; uint8_t v___y_1834_; lean_object* v___x_1838_; lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1832_ = 1;
v___x_1838_ = lean_array_uget_borrowed(v_as_1828_, v_i_1829_);
v___x_1839_ = l_Lean_Expr_fvarId_x21(v___x_1838_);
v___x_1840_ = l_Lean_instBEqFVarId_beq(v___x_1839_, v_fvarId_1826_);
lean_dec(v___x_1839_);
if (v___x_1840_ == 0)
{
v___y_1834_ = v___y_1827_;
goto v___jp_1833_;
}
else
{
v___y_1834_ = v___x_1840_;
goto v___jp_1833_;
}
v___jp_1833_:
{
if (v___y_1834_ == 0)
{
size_t v___x_1835_; size_t v___x_1836_; 
v___x_1835_ = ((size_t)1ULL);
v___x_1836_ = lean_usize_add(v_i_1829_, v___x_1835_);
v_i_1829_ = v___x_1836_;
goto _start;
}
else
{
return v___x_1832_;
}
}
}
else
{
uint8_t v___x_1841_; 
v___x_1841_ = 0;
return v___x_1841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object* v_fvarId_1842_, lean_object* v___y_1843_, lean_object* v_as_1844_, lean_object* v_i_1845_, lean_object* v_stop_1846_){
_start:
{
uint8_t v___y_9552__boxed_1847_; size_t v_i_boxed_1848_; size_t v_stop_boxed_1849_; uint8_t v_res_1850_; lean_object* v_r_1851_; 
v___y_9552__boxed_1847_ = lean_unbox(v___y_1843_);
v_i_boxed_1848_ = lean_unbox_usize(v_i_1845_);
lean_dec(v_i_1845_);
v_stop_boxed_1849_ = lean_unbox_usize(v_stop_1846_);
lean_dec(v_stop_1846_);
v_res_1850_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1842_, v___y_9552__boxed_1847_, v_as_1844_, v_i_boxed_1848_, v_stop_boxed_1849_);
lean_dec_ref(v_as_1844_);
lean_dec(v_fvarId_1842_);
v_r_1851_ = lean_box(v_res_1850_);
return v_r_1851_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(lean_object* v___x_1852_, lean_object* v___x_1853_, uint8_t v___x_1854_, uint8_t v___y_1855_, lean_object* v___x_1856_, lean_object* v_fvarId_1857_){
_start:
{
lean_object* v___y_1859_; uint8_t v___x_1864_; 
v___x_1864_ = lean_nat_dec_lt(v___x_1852_, v___x_1853_);
if (v___x_1864_ == 0)
{
lean_dec(v___x_1853_);
return v___x_1854_;
}
else
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = lean_array_get_size(v___x_1856_);
v___x_1866_ = lean_nat_dec_le(v___x_1853_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_dec(v___x_1853_);
v___y_1859_ = v___x_1865_;
goto v___jp_1858_;
}
else
{
v___y_1859_ = v___x_1853_;
goto v___jp_1858_;
}
}
v___jp_1858_:
{
uint8_t v___x_1860_; 
v___x_1860_ = lean_nat_dec_lt(v___x_1852_, v___y_1859_);
if (v___x_1860_ == 0)
{
lean_dec(v___y_1859_);
return v___x_1854_;
}
else
{
size_t v___x_1861_; size_t v___x_1862_; uint8_t v___x_1863_; 
v___x_1861_ = ((size_t)0ULL);
v___x_1862_ = lean_usize_of_nat(v___y_1859_);
lean_dec(v___y_1859_);
v___x_1863_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1857_, v___y_1855_, v___x_1856_, v___x_1861_, v___x_1862_);
if (v___x_1863_ == 0)
{
return v___x_1854_;
}
else
{
return v___y_1855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object* v___x_1867_, lean_object* v___x_1868_, lean_object* v___x_1869_, lean_object* v___y_1870_, lean_object* v___x_1871_, lean_object* v_fvarId_1872_){
_start:
{
uint8_t v___x_9579__boxed_1873_; uint8_t v___y_9580__boxed_1874_; uint8_t v_res_1875_; lean_object* v_r_1876_; 
v___x_9579__boxed_1873_ = lean_unbox(v___x_1869_);
v___y_9580__boxed_1874_ = lean_unbox(v___y_1870_);
v_res_1875_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(v___x_1867_, v___x_1868_, v___x_9579__boxed_1873_, v___y_9580__boxed_1874_, v___x_1871_, v_fvarId_1872_);
lean_dec(v_fvarId_1872_);
lean_dec_ref(v___x_1871_);
lean_dec(v___x_1867_);
v_r_1876_ = lean_box(v_res_1875_);
return v_r_1876_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(uint8_t v___y_1877_, lean_object* v_x_1878_){
_start:
{
return v___y_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v___y_1879_, lean_object* v_x_1880_){
_start:
{
uint8_t v___y_9610__boxed_1881_; uint8_t v_res_1882_; lean_object* v_r_1883_; 
v___y_9610__boxed_1881_ = lean_unbox(v___y_1879_);
v_res_1882_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(v___y_9610__boxed_1881_, v_x_1880_);
lean_dec(v_x_1880_);
v_r_1883_ = lean_box(v_res_1882_);
return v_r_1883_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object* v___x_1884_, lean_object* v_as_1885_, size_t v_i_1886_, size_t v_stop_1887_){
_start:
{
uint8_t v___x_1888_; 
v___x_1888_ = lean_usize_dec_eq(v_i_1886_, v_stop_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; 
v___x_1889_ = lean_array_uget_borrowed(v_as_1885_, v_i_1886_);
v___x_1890_ = l_Lean_Expr_fvarId_x21(v___x_1889_);
v___x_1891_ = l_Lean_instBEqFVarId_beq(v___x_1884_, v___x_1890_);
lean_dec(v___x_1890_);
if (v___x_1891_ == 0)
{
size_t v___x_1892_; size_t v___x_1893_; 
v___x_1892_ = ((size_t)1ULL);
v___x_1893_ = lean_usize_add(v_i_1886_, v___x_1892_);
v_i_1886_ = v___x_1893_;
goto _start;
}
else
{
return v___x_1891_;
}
}
else
{
uint8_t v___x_1895_; 
v___x_1895_ = 0;
return v___x_1895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object* v___x_1896_, lean_object* v_as_1897_, lean_object* v_i_1898_, lean_object* v_stop_1899_){
_start:
{
size_t v_i_boxed_1900_; size_t v_stop_boxed_1901_; uint8_t v_res_1902_; lean_object* v_r_1903_; 
v_i_boxed_1900_ = lean_unbox_usize(v_i_1898_);
lean_dec(v_i_1898_);
v_stop_boxed_1901_ = lean_unbox_usize(v_stop_1899_);
lean_dec(v_stop_1899_);
v_res_1902_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_1896_, v_as_1897_, v_i_boxed_1900_, v_stop_boxed_1901_);
lean_dec_ref(v_as_1897_);
lean_dec(v___x_1896_);
v_r_1903_ = lean_box(v_res_1902_);
return v_r_1903_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1904_ = lean_box(0);
v___x_1905_ = lean_unsigned_to_nat(16u);
v___x_1906_ = lean_mk_array(v___x_1905_, v___x_1904_);
return v___x_1906_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0);
v___x_1908_ = lean_unsigned_to_nat(0u);
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
lean_ctor_set(v___x_1909_, 1, v___x_1907_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t v___x_1910_, lean_object* v___x_1911_, lean_object* v___x_1912_, lean_object* v_ctx_1913_, lean_object* v_as_1914_, size_t v_i_1915_, size_t v_stop_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
uint8_t v___x_1920_; 
v___x_1920_ = lean_usize_dec_eq(v_i_1915_, v_stop_1916_);
if (v___x_1920_ == 0)
{
uint8_t v___x_1921_; uint8_t v_a_1923_; uint8_t v_a_1930_; uint8_t v_fst_1934_; lean_object* v_mctx_1935_; lean_object* v___y_1952_; uint8_t v_fst_1958_; lean_object* v_snd_1959_; lean_object* v___y_1977_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; uint8_t v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; uint8_t v_fst_2000_; lean_object* v_mctx_2001_; lean_object* v___y_2018_; lean_object* v___x_2023_; 
v___x_1921_ = 1;
v___x_2023_ = lean_array_uget_borrowed(v_as_1914_, v_i_1915_);
if (lean_obj_tag(v___x_2023_) == 0)
{
v_a_1923_ = v___x_1910_;
goto v___jp_1922_;
}
else
{
lean_object* v_val_2024_; lean_object* v_majorDecl_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; uint8_t v___x_2028_; 
v_val_2024_ = lean_ctor_get(v___x_2023_, 0);
v_majorDecl_2025_ = lean_ctor_get(v_ctx_1913_, 2);
v___x_2026_ = l_Lean_LocalDecl_fvarId(v_val_2024_);
v___x_2027_ = l_Lean_LocalDecl_fvarId(v_majorDecl_2025_);
v___x_2028_ = l_Lean_instBEqFVarId_beq(v___x_2026_, v___x_2027_);
lean_dec(v___x_2027_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; uint8_t v___y_2031_; lean_object* v___y_2070_; uint8_t v___x_2075_; 
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2075_ = lean_nat_dec_lt(v___x_2029_, v___x_1912_);
if (v___x_2075_ == 0)
{
lean_dec(v___x_2026_);
v___y_2031_ = v___x_2028_;
goto v___jp_2030_;
}
else
{
lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2076_ = lean_array_get_size(v___x_1911_);
v___x_2077_ = lean_nat_dec_le(v___x_1912_, v___x_2076_);
if (v___x_2077_ == 0)
{
v___y_2070_ = v___x_2076_;
goto v___jp_2069_;
}
else
{
lean_inc(v___x_1912_);
v___y_2070_ = v___x_1912_;
goto v___jp_2069_;
}
}
v___jp_2030_:
{
if (v___y_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v___f_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___f_2036_; 
v___x_2032_ = lean_box(v___y_2031_);
v___f_2033_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2033_, 0, v___x_2032_);
v___x_2034_ = lean_box(v___x_1921_);
v___x_2035_ = lean_box(v___y_2031_);
lean_inc_ref(v___x_1911_);
lean_inc(v___x_1912_);
v___f_2036_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_2036_, 0, v___x_2029_);
lean_closure_set(v___f_2036_, 1, v___x_1912_);
lean_closure_set(v___f_2036_, 2, v___x_2034_);
lean_closure_set(v___f_2036_, 3, v___x_2035_);
lean_closure_set(v___f_2036_, 4, v___x_1911_);
if (lean_obj_tag(v_val_2024_) == 0)
{
lean_object* v_type_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v_mctx_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; uint8_t v___x_2043_; 
v_type_2037_ = lean_ctor_get(v_val_2024_, 3);
v___x_2038_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_2038_);
v___x_2039_ = lean_st_ref_get(v___y_1917_);
v_mctx_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc_ref_n(v_mctx_2040_, 2);
lean_dec(v___x_2039_);
v___x_2041_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
lean_ctor_set(v___x_2042_, 1, v_mctx_2040_);
v___x_2043_ = l_Lean_Expr_hasFVar(v_type_2037_);
if (v___x_2043_ == 0)
{
uint8_t v___x_2044_; 
v___x_2044_ = l_Lean_Expr_hasMVar(v_type_2037_);
if (v___x_2044_ == 0)
{
lean_dec_ref(v___x_2042_);
lean_dec_ref(v___f_2036_);
lean_dec_ref(v___f_2033_);
v_fst_1934_ = v___x_2044_;
v_mctx_1935_ = v_mctx_2040_;
goto v___jp_1933_;
}
else
{
lean_object* v___x_2045_; 
lean_dec_ref(v_mctx_2040_);
lean_inc_ref(v_type_2037_);
v___x_2045_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2037_, v___x_2042_);
v___y_1952_ = v___x_2045_;
goto v___jp_1951_;
}
}
else
{
lean_object* v___x_2046_; 
lean_dec_ref(v_mctx_2040_);
lean_inc_ref(v_type_2037_);
v___x_2046_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2037_, v___x_2042_);
v___y_1952_ = v___x_2046_;
goto v___jp_1951_;
}
}
else
{
uint8_t v_nondep_2047_; 
v_nondep_2047_ = lean_ctor_get_uint8(v_val_2024_, sizeof(void*)*5);
if (v_nondep_2047_ == 0)
{
lean_object* v_type_2048_; lean_object* v_value_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v_mctx_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; 
v_type_2048_ = lean_ctor_get(v_val_2024_, 3);
v_value_2049_ = lean_ctor_get(v_val_2024_, 4);
v___x_2050_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_2050_);
v___x_2051_ = lean_st_ref_get(v___y_1917_);
v_mctx_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc_ref(v_mctx_2052_);
lean_dec(v___x_2051_);
v___x_2053_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
lean_ctor_set(v___x_2054_, 1, v_mctx_2052_);
v___x_2055_ = l_Lean_Expr_hasFVar(v_type_2048_);
if (v___x_2055_ == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = l_Lean_Expr_hasMVar(v_type_2048_);
if (v___x_2056_ == 0)
{
lean_inc_ref(v_value_2049_);
v___y_1982_ = v___f_2033_;
v___y_1983_ = v_value_2049_;
v___y_1984_ = v___f_2036_;
v_fst_1985_ = v___x_2056_;
v_snd_1986_ = v___x_2054_;
goto v___jp_1981_;
}
else
{
lean_object* v___x_2057_; 
lean_inc_ref(v_type_2048_);
lean_inc_ref(v___f_2033_);
lean_inc_ref(v___f_2036_);
v___x_2057_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2048_, v___x_2054_);
lean_inc_ref(v_value_2049_);
v___y_1992_ = v___f_2033_;
v___y_1993_ = v_value_2049_;
v___y_1994_ = v___f_2036_;
v___y_1995_ = v___x_2057_;
goto v___jp_1991_;
}
}
else
{
lean_object* v___x_2058_; 
lean_inc_ref(v_type_2048_);
lean_inc_ref(v___f_2033_);
lean_inc_ref(v___f_2036_);
v___x_2058_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2048_, v___x_2054_);
lean_inc_ref(v_value_2049_);
v___y_1992_ = v___f_2033_;
v___y_1993_ = v_value_2049_;
v___y_1994_ = v___f_2036_;
v___y_1995_ = v___x_2058_;
goto v___jp_1991_;
}
}
else
{
lean_object* v_type_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v_mctx_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_type_2059_ = lean_ctor_get(v_val_2024_, 3);
v___x_2060_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_2060_);
v___x_2061_ = lean_st_ref_get(v___y_1917_);
v_mctx_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc_ref_n(v_mctx_2062_, 2);
lean_dec(v___x_2061_);
v___x_2063_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
lean_ctor_set(v___x_2064_, 1, v_mctx_2062_);
v___x_2065_ = l_Lean_Expr_hasFVar(v_type_2059_);
if (v___x_2065_ == 0)
{
uint8_t v___x_2066_; 
v___x_2066_ = l_Lean_Expr_hasMVar(v_type_2059_);
if (v___x_2066_ == 0)
{
lean_dec_ref(v___x_2064_);
lean_dec_ref(v___f_2036_);
lean_dec_ref(v___f_2033_);
v_fst_2000_ = v___x_2066_;
v_mctx_2001_ = v_mctx_2062_;
goto v___jp_1999_;
}
else
{
lean_object* v___x_2067_; 
lean_dec_ref(v_mctx_2062_);
lean_inc_ref(v_type_2059_);
v___x_2067_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2059_, v___x_2064_);
v___y_2018_ = v___x_2067_;
goto v___jp_2017_;
}
}
else
{
lean_object* v___x_2068_; 
lean_dec_ref(v_mctx_2062_);
lean_inc_ref(v_type_2059_);
v___x_2068_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2036_, v___f_2033_, v_type_2059_, v___x_2064_);
v___y_2018_ = v___x_2068_;
goto v___jp_2017_;
}
}
}
}
else
{
v_a_1923_ = v___x_1910_;
goto v___jp_1922_;
}
}
v___jp_2069_:
{
uint8_t v___x_2071_; 
v___x_2071_ = lean_nat_dec_lt(v___x_2029_, v___y_2070_);
if (v___x_2071_ == 0)
{
lean_dec(v___y_2070_);
lean_dec(v___x_2026_);
v___y_2031_ = v___x_2028_;
goto v___jp_2030_;
}
else
{
size_t v___x_2072_; size_t v___x_2073_; uint8_t v___x_2074_; 
v___x_2072_ = ((size_t)0ULL);
v___x_2073_ = lean_usize_of_nat(v___y_2070_);
lean_dec(v___y_2070_);
v___x_2074_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_2026_, v___x_1911_, v___x_2072_, v___x_2073_);
lean_dec(v___x_2026_);
v___y_2031_ = v___x_2074_;
goto v___jp_2030_;
}
}
}
else
{
lean_dec(v___x_2026_);
v_a_1930_ = v___x_2028_;
goto v___jp_1929_;
}
}
v___jp_1922_:
{
if (v_a_1923_ == 0)
{
size_t v___x_1924_; size_t v___x_1925_; 
v___x_1924_ = ((size_t)1ULL);
v___x_1925_ = lean_usize_add(v_i_1915_, v___x_1924_);
v_i_1915_ = v___x_1925_;
goto _start;
}
else
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
lean_dec(v___x_1912_);
lean_dec_ref(v___x_1911_);
v___x_1927_ = lean_box(v___x_1921_);
v___x_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1927_);
return v___x_1928_;
}
}
v___jp_1929_:
{
if (v_a_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_dec(v___x_1912_);
lean_dec_ref(v___x_1911_);
v___x_1931_ = lean_box(v___x_1921_);
v___x_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
else
{
v_a_1923_ = v___x_1910_;
goto v___jp_1922_;
}
}
v___jp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v_cache_1938_; lean_object* v_zetaDeltaFVarIds_1939_; lean_object* v_postponed_1940_; lean_object* v_diag_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1949_; 
v___x_1936_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_1936_);
v___x_1937_ = lean_st_ref_take(v___y_1917_);
v_cache_1938_ = lean_ctor_get(v___x_1937_, 1);
v_zetaDeltaFVarIds_1939_ = lean_ctor_get(v___x_1937_, 2);
v_postponed_1940_ = lean_ctor_get(v___x_1937_, 3);
v_diag_1941_ = lean_ctor_get(v___x_1937_, 4);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1949_ == 0)
{
lean_object* v_unused_1950_; 
v_unused_1950_ = lean_ctor_get(v___x_1937_, 0);
lean_dec(v_unused_1950_);
v___x_1943_ = v___x_1937_;
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_diag_1941_);
lean_inc(v_postponed_1940_);
lean_inc(v_zetaDeltaFVarIds_1939_);
lean_inc(v_cache_1938_);
lean_dec(v___x_1937_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v_mctx_1935_);
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_mctx_1935_);
lean_ctor_set(v_reuseFailAlloc_1948_, 1, v_cache_1938_);
lean_ctor_set(v_reuseFailAlloc_1948_, 2, v_zetaDeltaFVarIds_1939_);
lean_ctor_set(v_reuseFailAlloc_1948_, 3, v_postponed_1940_);
lean_ctor_set(v_reuseFailAlloc_1948_, 4, v_diag_1941_);
v___x_1946_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
lean_object* v___x_1947_; 
v___x_1947_ = lean_st_ref_set(v___y_1917_, v___x_1946_);
v_a_1930_ = v_fst_1934_;
goto v___jp_1929_;
}
}
}
v___jp_1951_:
{
lean_object* v_snd_1953_; lean_object* v_fst_1954_; lean_object* v_mctx_1955_; uint8_t v___x_1956_; 
v_snd_1953_ = lean_ctor_get(v___y_1952_, 1);
lean_inc(v_snd_1953_);
v_fst_1954_ = lean_ctor_get(v___y_1952_, 0);
lean_inc(v_fst_1954_);
lean_dec_ref(v___y_1952_);
v_mctx_1955_ = lean_ctor_get(v_snd_1953_, 1);
lean_inc_ref(v_mctx_1955_);
lean_dec(v_snd_1953_);
v___x_1956_ = lean_unbox(v_fst_1954_);
lean_dec(v_fst_1954_);
v_fst_1934_ = v___x_1956_;
v_mctx_1935_ = v_mctx_1955_;
goto v___jp_1933_;
}
v___jp_1957_:
{
lean_object* v_mctx_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v_cache_1963_; lean_object* v_zetaDeltaFVarIds_1964_; lean_object* v_postponed_1965_; lean_object* v_diag_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1974_; 
v_mctx_1960_ = lean_ctor_get(v_snd_1959_, 1);
lean_inc_ref(v_mctx_1960_);
lean_dec_ref(v_snd_1959_);
v___x_1961_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_1961_);
v___x_1962_ = lean_st_ref_take(v___y_1917_);
v_cache_1963_ = lean_ctor_get(v___x_1962_, 1);
v_zetaDeltaFVarIds_1964_ = lean_ctor_get(v___x_1962_, 2);
v_postponed_1965_ = lean_ctor_get(v___x_1962_, 3);
v_diag_1966_ = lean_ctor_get(v___x_1962_, 4);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1974_ == 0)
{
lean_object* v_unused_1975_; 
v_unused_1975_ = lean_ctor_get(v___x_1962_, 0);
lean_dec(v_unused_1975_);
v___x_1968_ = v___x_1962_;
v_isShared_1969_ = v_isSharedCheck_1974_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_diag_1966_);
lean_inc(v_postponed_1965_);
lean_inc(v_zetaDeltaFVarIds_1964_);
lean_inc(v_cache_1963_);
lean_dec(v___x_1962_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1974_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v_mctx_1960_);
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_mctx_1960_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v_cache_1963_);
lean_ctor_set(v_reuseFailAlloc_1973_, 2, v_zetaDeltaFVarIds_1964_);
lean_ctor_set(v_reuseFailAlloc_1973_, 3, v_postponed_1965_);
lean_ctor_set(v_reuseFailAlloc_1973_, 4, v_diag_1966_);
v___x_1971_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_st_ref_set(v___y_1917_, v___x_1971_);
v_a_1930_ = v_fst_1958_;
goto v___jp_1929_;
}
}
}
v___jp_1976_:
{
lean_object* v_fst_1978_; lean_object* v_snd_1979_; uint8_t v___x_1980_; 
v_fst_1978_ = lean_ctor_get(v___y_1977_, 0);
lean_inc(v_fst_1978_);
v_snd_1979_ = lean_ctor_get(v___y_1977_, 1);
lean_inc(v_snd_1979_);
lean_dec_ref(v___y_1977_);
v___x_1980_ = lean_unbox(v_fst_1978_);
lean_dec(v_fst_1978_);
v_fst_1958_ = v___x_1980_;
v_snd_1959_ = v_snd_1979_;
goto v___jp_1957_;
}
v___jp_1981_:
{
if (v_fst_1985_ == 0)
{
uint8_t v___x_1987_; 
v___x_1987_ = l_Lean_Expr_hasFVar(v___y_1983_);
if (v___x_1987_ == 0)
{
uint8_t v___x_1988_; 
v___x_1988_ = l_Lean_Expr_hasMVar(v___y_1983_);
if (v___x_1988_ == 0)
{
lean_dec_ref(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec_ref(v___y_1982_);
v_fst_1958_ = v___x_1988_;
v_snd_1959_ = v_snd_1986_;
goto v___jp_1957_;
}
else
{
lean_object* v___x_1989_; 
v___x_1989_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___y_1984_, v___y_1982_, v___y_1983_, v_snd_1986_);
v___y_1977_ = v___x_1989_;
goto v___jp_1976_;
}
}
else
{
lean_object* v___x_1990_; 
v___x_1990_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___y_1984_, v___y_1982_, v___y_1983_, v_snd_1986_);
v___y_1977_ = v___x_1990_;
goto v___jp_1976_;
}
}
else
{
lean_dec_ref(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec_ref(v___y_1982_);
v_fst_1958_ = v_fst_1985_;
v_snd_1959_ = v_snd_1986_;
goto v___jp_1957_;
}
}
v___jp_1991_:
{
lean_object* v_fst_1996_; lean_object* v_snd_1997_; uint8_t v___x_1998_; 
v_fst_1996_ = lean_ctor_get(v___y_1995_, 0);
lean_inc(v_fst_1996_);
v_snd_1997_ = lean_ctor_get(v___y_1995_, 1);
lean_inc(v_snd_1997_);
lean_dec_ref(v___y_1995_);
v___x_1998_ = lean_unbox(v_fst_1996_);
lean_dec(v_fst_1996_);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v_fst_1985_ = v___x_1998_;
v_snd_1986_ = v_snd_1997_;
goto v___jp_1981_;
}
v___jp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v_cache_2004_; lean_object* v_zetaDeltaFVarIds_2005_; lean_object* v_postponed_2006_; lean_object* v_diag_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2015_; 
v___x_2002_ = lean_st_ref_get(v___y_1918_);
lean_dec(v___x_2002_);
v___x_2003_ = lean_st_ref_take(v___y_1917_);
v_cache_2004_ = lean_ctor_get(v___x_2003_, 1);
v_zetaDeltaFVarIds_2005_ = lean_ctor_get(v___x_2003_, 2);
v_postponed_2006_ = lean_ctor_get(v___x_2003_, 3);
v_diag_2007_ = lean_ctor_get(v___x_2003_, 4);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v___x_2003_, 0);
lean_dec(v_unused_2016_);
v___x_2009_ = v___x_2003_;
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_diag_2007_);
lean_inc(v_postponed_2006_);
lean_inc(v_zetaDeltaFVarIds_2005_);
lean_inc(v_cache_2004_);
lean_dec(v___x_2003_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v_mctx_2001_);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_mctx_2001_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_cache_2004_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_zetaDeltaFVarIds_2005_);
lean_ctor_set(v_reuseFailAlloc_2014_, 3, v_postponed_2006_);
lean_ctor_set(v_reuseFailAlloc_2014_, 4, v_diag_2007_);
v___x_2012_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; 
v___x_2013_ = lean_st_ref_set(v___y_1917_, v___x_2012_);
v_a_1930_ = v_fst_2000_;
goto v___jp_1929_;
}
}
}
v___jp_2017_:
{
lean_object* v_snd_2019_; lean_object* v_fst_2020_; lean_object* v_mctx_2021_; uint8_t v___x_2022_; 
v_snd_2019_ = lean_ctor_get(v___y_2018_, 1);
lean_inc(v_snd_2019_);
v_fst_2020_ = lean_ctor_get(v___y_2018_, 0);
lean_inc(v_fst_2020_);
lean_dec_ref(v___y_2018_);
v_mctx_2021_ = lean_ctor_get(v_snd_2019_, 1);
lean_inc_ref(v_mctx_2021_);
lean_dec(v_snd_2019_);
v___x_2022_ = lean_unbox(v_fst_2020_);
lean_dec(v_fst_2020_);
v_fst_2000_ = v___x_2022_;
v_mctx_2001_ = v_mctx_2021_;
goto v___jp_1999_;
}
}
else
{
uint8_t v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
lean_dec(v___x_1912_);
lean_dec_ref(v___x_1911_);
v___x_2078_ = 0;
v___x_2079_ = lean_box(v___x_2078_);
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object* v___x_2081_, lean_object* v___x_2082_, lean_object* v___x_2083_, lean_object* v_ctx_2084_, lean_object* v_as_2085_, lean_object* v_i_2086_, lean_object* v_stop_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_){
_start:
{
uint8_t v___x_9659__boxed_2091_; size_t v_i_boxed_2092_; size_t v_stop_boxed_2093_; lean_object* v_res_2094_; 
v___x_9659__boxed_2091_ = lean_unbox(v___x_2081_);
v_i_boxed_2092_ = lean_unbox_usize(v_i_2086_);
lean_dec(v_i_2086_);
v_stop_boxed_2093_ = lean_unbox_usize(v_stop_2087_);
lean_dec(v_stop_2087_);
v_res_2094_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_9659__boxed_2091_, v___x_2082_, v___x_2083_, v_ctx_2084_, v_as_2085_, v_i_boxed_2092_, v_stop_boxed_2093_, v___y_2088_, v___y_2089_);
lean_dec(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec_ref(v_as_2085_);
lean_dec_ref(v_ctx_2084_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t v___x_2095_, lean_object* v___x_2096_, lean_object* v___x_2097_, lean_object* v_ctx_2098_, lean_object* v_x_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
if (lean_obj_tag(v_x_2099_) == 0)
{
lean_object* v_cs_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2123_; 
v_cs_2105_ = lean_ctor_get(v_x_2099_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2099_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2107_ = v_x_2099_;
v_isShared_2108_ = v_isSharedCheck_2123_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_cs_2105_);
lean_dec(v_x_2099_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2123_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; uint8_t v___x_2111_; 
v___x_2109_ = lean_unsigned_to_nat(0u);
v___x_2110_ = lean_array_get_size(v_cs_2105_);
v___x_2111_ = lean_nat_dec_lt(v___x_2109_, v___x_2110_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2114_; 
lean_dec_ref(v_cs_2105_);
lean_dec(v___x_2097_);
lean_dec_ref(v___x_2096_);
v___x_2112_ = lean_box(v___x_2111_);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v___x_2112_);
v___x_2114_ = v___x_2107_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
else
{
if (v___x_2111_ == 0)
{
lean_object* v___x_2116_; lean_object* v___x_2118_; 
lean_dec_ref(v_cs_2105_);
lean_dec(v___x_2097_);
lean_dec_ref(v___x_2096_);
v___x_2116_ = lean_box(v___x_2111_);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v___x_2116_);
v___x_2118_ = v___x_2107_;
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
else
{
size_t v___x_2120_; size_t v___x_2121_; lean_object* v___x_2122_; 
lean_del_object(v___x_2107_);
v___x_2120_ = ((size_t)0ULL);
v___x_2121_ = lean_usize_of_nat(v___x_2110_);
v___x_2122_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_2095_, v___x_2096_, v___x_2097_, v_ctx_2098_, v_cs_2105_, v___x_2120_, v___x_2121_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec_ref(v_cs_2105_);
return v___x_2122_;
}
}
}
}
else
{
lean_object* v_vs_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2142_; 
v_vs_2124_ = lean_ctor_get(v_x_2099_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_x_2099_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2126_ = v_x_2099_;
v_isShared_2127_ = v_isSharedCheck_2142_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_vs_2124_);
lean_dec(v_x_2099_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2142_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; 
v___x_2128_ = lean_unsigned_to_nat(0u);
v___x_2129_ = lean_array_get_size(v_vs_2124_);
v___x_2130_ = lean_nat_dec_lt(v___x_2128_, v___x_2129_);
if (v___x_2130_ == 0)
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
lean_dec_ref(v_vs_2124_);
lean_dec(v___x_2097_);
lean_dec_ref(v___x_2096_);
v___x_2131_ = lean_box(v___x_2130_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set_tag(v___x_2126_, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2131_);
v___x_2133_ = v___x_2126_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
else
{
if (v___x_2130_ == 0)
{
lean_object* v___x_2135_; lean_object* v___x_2137_; 
lean_dec_ref(v_vs_2124_);
lean_dec(v___x_2097_);
lean_dec_ref(v___x_2096_);
v___x_2135_ = lean_box(v___x_2130_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set_tag(v___x_2126_, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2135_);
v___x_2137_ = v___x_2126_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2135_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
else
{
size_t v___x_2139_; size_t v___x_2140_; lean_object* v___x_2141_; 
lean_del_object(v___x_2126_);
v___x_2139_ = ((size_t)0ULL);
v___x_2140_ = lean_usize_of_nat(v___x_2129_);
v___x_2141_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2095_, v___x_2096_, v___x_2097_, v_ctx_2098_, v_vs_2124_, v___x_2139_, v___x_2140_, v___y_2101_, v___y_2103_);
lean_dec_ref(v_vs_2124_);
return v___x_2141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t v___x_2143_, lean_object* v___x_2144_, lean_object* v___x_2145_, lean_object* v_ctx_2146_, lean_object* v_as_2147_, size_t v_i_2148_, size_t v_stop_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v___x_2155_; 
v___x_2155_ = lean_usize_dec_eq(v_i_2148_, v_stop_2149_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = lean_array_uget_borrowed(v_as_2147_, v_i_2148_);
lean_inc(v___x_2156_);
lean_inc(v___x_2145_);
lean_inc_ref(v___x_2144_);
v___x_2157_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2143_, v___x_2144_, v___x_2145_, v_ctx_2146_, v___x_2156_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2169_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2169_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2169_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
uint8_t v___x_2162_; 
v___x_2162_ = lean_unbox(v_a_2158_);
if (v___x_2162_ == 0)
{
size_t v___x_2163_; size_t v___x_2164_; 
lean_del_object(v___x_2160_);
lean_dec(v_a_2158_);
v___x_2163_ = ((size_t)1ULL);
v___x_2164_ = lean_usize_add(v_i_2148_, v___x_2163_);
v_i_2148_ = v___x_2164_;
goto _start;
}
else
{
lean_object* v___x_2167_; 
lean_dec(v___x_2145_);
lean_dec_ref(v___x_2144_);
if (v_isShared_2161_ == 0)
{
v___x_2167_ = v___x_2160_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2158_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_dec(v___x_2145_);
lean_dec_ref(v___x_2144_);
return v___x_2157_;
}
}
else
{
uint8_t v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec(v___x_2145_);
lean_dec_ref(v___x_2144_);
v___x_2170_ = 0;
v___x_2171_ = lean_box(v___x_2170_);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object* v___x_2173_, lean_object* v___x_2174_, lean_object* v___x_2175_, lean_object* v_ctx_2176_, lean_object* v_as_2177_, lean_object* v_i_2178_, lean_object* v_stop_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
uint8_t v___x_9981__boxed_2185_; size_t v_i_boxed_2186_; size_t v_stop_boxed_2187_; lean_object* v_res_2188_; 
v___x_9981__boxed_2185_ = lean_unbox(v___x_2173_);
v_i_boxed_2186_ = lean_unbox_usize(v_i_2178_);
lean_dec(v_i_2178_);
v_stop_boxed_2187_ = lean_unbox_usize(v_stop_2179_);
lean_dec(v_stop_2179_);
v_res_2188_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_9981__boxed_2185_, v___x_2174_, v___x_2175_, v_ctx_2176_, v_as_2177_, v_i_boxed_2186_, v_stop_boxed_2187_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec_ref(v_as_2177_);
lean_dec_ref(v_ctx_2176_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object* v___x_2189_, lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v_ctx_2192_, lean_object* v_x_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_){
_start:
{
uint8_t v___x_10000__boxed_2199_; lean_object* v_res_2200_; 
v___x_10000__boxed_2199_ = lean_unbox(v___x_2189_);
v_res_2200_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_10000__boxed_2199_, v___x_2190_, v___x_2191_, v_ctx_2192_, v_x_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec_ref(v_ctx_2192_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t v___x_2201_, lean_object* v___x_2202_, lean_object* v___x_2203_, lean_object* v_ctx_2204_, lean_object* v_t_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v_root_2211_; lean_object* v_tail_2212_; lean_object* v___x_2213_; 
v_root_2211_ = lean_ctor_get(v_t_2205_, 0);
lean_inc_ref(v_root_2211_);
v_tail_2212_ = lean_ctor_get(v_t_2205_, 1);
lean_inc_ref(v_tail_2212_);
lean_dec_ref(v_t_2205_);
lean_inc(v___x_2203_);
lean_inc_ref(v___x_2202_);
v___x_2213_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2201_, v___x_2202_, v___x_2203_, v_ctx_2204_, v_root_2211_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; uint8_t v___x_2215_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2214_);
v___x_2215_ = lean_unbox(v_a_2214_);
lean_dec(v_a_2214_);
if (v___x_2215_ == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = lean_array_get_size(v_tail_2212_);
v___x_2218_ = lean_nat_dec_lt(v___x_2216_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_dec_ref(v_tail_2212_);
lean_dec(v___x_2203_);
lean_dec_ref(v___x_2202_);
return v___x_2213_;
}
else
{
if (v___x_2218_ == 0)
{
lean_dec_ref(v_tail_2212_);
lean_dec(v___x_2203_);
lean_dec_ref(v___x_2202_);
return v___x_2213_;
}
else
{
size_t v___x_2219_; size_t v___x_2220_; lean_object* v___x_2221_; 
lean_dec_ref(v___x_2213_);
v___x_2219_ = ((size_t)0ULL);
v___x_2220_ = lean_usize_of_nat(v___x_2217_);
v___x_2221_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2201_, v___x_2202_, v___x_2203_, v_ctx_2204_, v_tail_2212_, v___x_2219_, v___x_2220_, v___y_2207_, v___y_2209_);
lean_dec_ref(v_tail_2212_);
return v___x_2221_;
}
}
}
else
{
lean_dec_ref(v_tail_2212_);
lean_dec(v___x_2203_);
lean_dec_ref(v___x_2202_);
return v___x_2213_;
}
}
else
{
lean_dec_ref(v_tail_2212_);
lean_dec(v___x_2203_);
lean_dec_ref(v___x_2202_);
return v___x_2213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object* v___x_2222_, lean_object* v___x_2223_, lean_object* v___x_2224_, lean_object* v_ctx_2225_, lean_object* v_t_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
uint8_t v___x_10145__boxed_2232_; lean_object* v_res_2233_; 
v___x_10145__boxed_2232_ = lean_unbox(v___x_2222_);
v_res_2233_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_10145__boxed_2232_, v___x_2223_, v___x_2224_, v_ctx_2225_, v_t_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec_ref(v_ctx_2225_);
return v_res_2233_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object* v___x_2234_, lean_object* v_i_2235_, lean_object* v_n_2236_, lean_object* v_i_2237_){
_start:
{
lean_object* v_zero_2238_; uint8_t v_isZero_2239_; 
v_zero_2238_ = lean_unsigned_to_nat(0u);
v_isZero_2239_ = lean_nat_dec_eq(v_i_2237_, v_zero_2238_);
if (v_isZero_2239_ == 1)
{
uint8_t v___x_2240_; 
lean_dec(v_i_2237_);
v___x_2240_ = 0;
return v___x_2240_;
}
else
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2241_ = lean_nat_sub(v_n_2236_, v_i_2237_);
v___x_2242_ = lean_array_fget_borrowed(v___x_2234_, v_i_2235_);
v___x_2243_ = lean_array_fget_borrowed(v___x_2234_, v___x_2241_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_expr_eqv(v___x_2242_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v_one_2245_; lean_object* v_n_2246_; 
v_one_2245_ = lean_unsigned_to_nat(1u);
v_n_2246_ = lean_nat_sub(v_i_2237_, v_one_2245_);
lean_dec(v_i_2237_);
v_i_2237_ = v_n_2246_;
goto _start;
}
else
{
lean_dec(v_i_2237_);
return v___x_2244_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object* v___x_2248_, lean_object* v_i_2249_, lean_object* v_n_2250_, lean_object* v_i_2251_){
_start:
{
uint8_t v_res_2252_; lean_object* v_r_2253_; 
v_res_2252_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_2248_, v_i_2249_, v_n_2250_, v_i_2251_);
lean_dec(v_n_2250_);
lean_dec(v_i_2249_);
lean_dec_ref(v___x_2248_);
v_r_2253_ = lean_box(v_res_2252_);
return v_r_2253_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object* v___x_2254_, lean_object* v_n_2255_, lean_object* v_i_2256_){
_start:
{
lean_object* v_zero_2257_; uint8_t v_isZero_2258_; 
v_zero_2257_ = lean_unsigned_to_nat(0u);
v_isZero_2258_ = lean_nat_dec_eq(v_i_2256_, v_zero_2257_);
if (v_isZero_2258_ == 1)
{
uint8_t v___x_2259_; 
lean_dec(v_i_2256_);
v___x_2259_ = 0;
return v___x_2259_;
}
else
{
lean_object* v___x_2260_; uint8_t v___x_2261_; 
v___x_2260_ = lean_nat_sub(v_n_2255_, v_i_2256_);
lean_inc(v___x_2260_);
v___x_2261_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_2254_, v___x_2260_, v___x_2260_, v___x_2260_);
lean_dec(v___x_2260_);
if (v___x_2261_ == 0)
{
lean_object* v_one_2262_; lean_object* v_n_2263_; 
v_one_2262_ = lean_unsigned_to_nat(1u);
v_n_2263_ = lean_nat_sub(v_i_2256_, v_one_2262_);
lean_dec(v_i_2256_);
v_i_2256_ = v_n_2263_;
goto _start;
}
else
{
lean_dec(v_i_2256_);
return v___x_2261_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object* v___x_2265_, lean_object* v_n_2266_, lean_object* v_i_2267_){
_start:
{
uint8_t v_res_2268_; lean_object* v_r_2269_; 
v_res_2268_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_2265_, v_n_2266_, v_i_2267_);
lean_dec(v_n_2266_);
lean_dec_ref(v___x_2265_);
v_r_2269_ = lean_box(v_res_2268_);
return v_r_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object* v_ctx_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_majorTypeIndices_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; uint8_t v___y_2281_; 
v_majorTypeIndices_2276_ = lean_ctor_get(v_ctx_2270_, 5);
lean_inc_ref(v_majorTypeIndices_2276_);
v___x_2277_ = lean_array_get_size(v_majorTypeIndices_2276_);
v___x_2278_ = lean_unsigned_to_nat(0u);
v___x_2279_ = lean_nat_dec_eq(v___x_2277_, v___x_2278_);
if (v___x_2279_ == 0)
{
uint8_t v___x_2305_; 
v___x_2305_ = lean_nat_dec_lt(v___x_2278_, v___x_2277_);
if (v___x_2305_ == 0)
{
v___y_2281_ = v___x_2279_;
goto v___jp_2280_;
}
else
{
if (v___x_2305_ == 0)
{
v___y_2281_ = v___x_2279_;
goto v___jp_2280_;
}
else
{
size_t v___x_2306_; size_t v___x_2307_; uint8_t v___x_2308_; 
v___x_2306_ = ((size_t)0ULL);
v___x_2307_ = lean_usize_of_nat(v___x_2277_);
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_2277_, v_majorTypeIndices_2276_, v___x_2306_, v___x_2307_);
v___y_2281_ = v___x_2308_;
goto v___jp_2280_;
}
}
}
else
{
lean_object* v___x_2309_; lean_object* v___x_2310_; 
lean_dec_ref(v_majorTypeIndices_2276_);
lean_dec_ref(v_ctx_2270_);
v___x_2309_ = lean_box(v___x_2279_);
v___x_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
return v___x_2310_;
}
v___jp_2280_:
{
if (v___y_2281_ == 0)
{
uint8_t v___x_2282_; 
v___x_2282_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v_majorTypeIndices_2276_, v___x_2277_, v___x_2277_);
if (v___x_2282_ == 0)
{
lean_object* v_lctx_2283_; lean_object* v_decls_2284_; lean_object* v___x_2285_; 
v_lctx_2283_ = lean_ctor_get(v_a_2271_, 2);
v_decls_2284_ = lean_ctor_get(v_lctx_2283_, 1);
lean_inc_ref(v_decls_2284_);
v___x_2285_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_2282_, v_majorTypeIndices_2276_, v___x_2277_, v_ctx_2270_, v_decls_2284_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_);
lean_dec_ref(v_ctx_2270_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2300_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2300_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2300_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
uint8_t v___x_2290_; 
v___x_2290_ = lean_unbox(v_a_2286_);
lean_dec(v_a_2286_);
if (v___x_2290_ == 0)
{
uint8_t v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2294_; 
v___x_2291_ = 1;
v___x_2292_ = lean_box(v___x_2291_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2292_);
v___x_2294_ = v___x_2288_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
else
{
lean_object* v___x_2296_; lean_object* v___x_2298_; 
v___x_2296_ = lean_box(v___x_2282_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2296_);
v___x_2298_ = v___x_2288_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2296_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
return v___x_2285_;
}
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_majorTypeIndices_2276_);
lean_dec_ref(v_ctx_2270_);
v___x_2301_ = lean_box(v___y_2281_);
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec_ref(v_majorTypeIndices_2276_);
lean_dec_ref(v_ctx_2270_);
v___x_2303_ = lean_box(v___x_2279_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object* v_ctx_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_ctx_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
lean_dec(v_a_2313_);
lean_dec_ref(v_a_2312_);
return v_res_2317_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object* v___x_2318_, lean_object* v_i_2319_, lean_object* v_n_2320_, lean_object* v_i_2321_, lean_object* v_a_2322_){
_start:
{
uint8_t v___x_2323_; 
v___x_2323_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_2318_, v_i_2319_, v_n_2320_, v_i_2321_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object* v___x_2324_, lean_object* v_i_2325_, lean_object* v_n_2326_, lean_object* v_i_2327_, lean_object* v_a_2328_){
_start:
{
uint8_t v_res_2329_; lean_object* v_r_2330_; 
v_res_2329_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(v___x_2324_, v_i_2325_, v_n_2326_, v_i_2327_, v_a_2328_);
lean_dec(v_n_2326_);
lean_dec(v_i_2325_);
lean_dec_ref(v___x_2324_);
v_r_2330_ = lean_box(v_res_2329_);
return v_r_2330_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object* v___x_2331_, lean_object* v_n_2332_, lean_object* v_i_2333_, lean_object* v_a_2334_){
_start:
{
uint8_t v___x_2335_; 
v___x_2335_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_2331_, v_n_2332_, v_i_2333_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object* v___x_2336_, lean_object* v_n_2337_, lean_object* v_i_2338_, lean_object* v_a_2339_){
_start:
{
uint8_t v_res_2340_; lean_object* v_r_2341_; 
v_res_2340_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(v___x_2336_, v_n_2337_, v_i_2338_, v_a_2339_);
lean_dec(v_n_2337_);
lean_dec_ref(v___x_2336_);
v_r_2341_ = lean_box(v_res_2340_);
return v_r_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t v___x_2342_, lean_object* v___x_2343_, lean_object* v___x_2344_, lean_object* v_ctx_2345_, lean_object* v_as_2346_, size_t v_i_2347_, size_t v_stop_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2342_, v___x_2343_, v___x_2344_, v_ctx_2345_, v_as_2346_, v_i_2347_, v_stop_2348_, v___y_2350_, v___y_2352_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object* v___x_2355_, lean_object* v___x_2356_, lean_object* v___x_2357_, lean_object* v_ctx_2358_, lean_object* v_as_2359_, lean_object* v_i_2360_, lean_object* v_stop_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
uint8_t v___x_10302__boxed_2367_; size_t v_i_boxed_2368_; size_t v_stop_boxed_2369_; lean_object* v_res_2370_; 
v___x_10302__boxed_2367_ = lean_unbox(v___x_2355_);
v_i_boxed_2368_ = lean_unbox_usize(v_i_2360_);
lean_dec(v_i_2360_);
v_stop_boxed_2369_ = lean_unbox_usize(v_stop_2361_);
lean_dec(v_stop_2361_);
v_res_2370_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(v___x_10302__boxed_2367_, v___x_2356_, v___x_2357_, v_ctx_2358_, v_as_2359_, v_i_boxed_2368_, v_stop_boxed_2369_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
lean_dec_ref(v_as_2359_);
lean_dec_ref(v_ctx_2358_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object* v_as_2371_, size_t v_i_2372_, size_t v_stop_2373_, lean_object* v_b_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v_a_2381_; uint8_t v___x_2385_; 
v___x_2385_ = lean_usize_dec_eq(v_i_2372_, v_stop_2373_);
if (v___x_2385_ == 0)
{
lean_object* v_toInductionSubgoal_2386_; lean_object* v_ctorName_2387_; lean_object* v_mvarId_2388_; lean_object* v_fields_2389_; lean_object* v_subst_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2443_; 
v_toInductionSubgoal_2386_ = lean_ctor_get(v_b_2374_, 0);
lean_inc_ref(v_toInductionSubgoal_2386_);
v_ctorName_2387_ = lean_ctor_get(v_b_2374_, 1);
v_mvarId_2388_ = lean_ctor_get(v_toInductionSubgoal_2386_, 0);
v_fields_2389_ = lean_ctor_get(v_toInductionSubgoal_2386_, 1);
v_subst_2390_ = lean_ctor_get(v_toInductionSubgoal_2386_, 2);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_toInductionSubgoal_2386_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2392_ = v_toInductionSubgoal_2386_;
v_isShared_2393_ = v_isSharedCheck_2443_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_subst_2390_);
lean_inc(v_fields_2389_);
lean_inc(v_mvarId_2388_);
lean_dec(v_toInductionSubgoal_2386_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2443_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_array_uget_borrowed(v_as_2371_, v_i_2372_);
lean_inc(v___x_2394_);
v___x_2395_ = l_Lean_Meta_FVarSubst_get(v_subst_2390_, v___x_2394_);
if (lean_obj_tag(v___x_2395_) == 1)
{
lean_object* v_fvarId_2396_; lean_object* v___x_2397_; 
v_fvarId_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_fvarId_2396_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = l_Lean_Meta_saveState___redArg(v___y_2376_, v___y_2378_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2398_);
lean_dec_ref(v___x_2397_);
v___x_2399_ = l_Lean_MVarId_clear(v_mvarId_2388_, v_fvarId_2396_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2411_; 
lean_inc(v_ctorName_2387_);
lean_dec(v_a_2398_);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_b_2374_);
if (v_isSharedCheck_2411_ == 0)
{
lean_object* v_unused_2412_; lean_object* v_unused_2413_; 
v_unused_2412_ = lean_ctor_get(v_b_2374_, 1);
lean_dec(v_unused_2412_);
v_unused_2413_ = lean_ctor_get(v_b_2374_, 0);
lean_dec(v_unused_2413_);
v___x_2401_ = v_b_2374_;
v_isShared_2402_ = v_isSharedCheck_2411_;
goto v_resetjp_2400_;
}
else
{
lean_dec(v_b_2374_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2411_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v_a_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
v_a_2403_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2403_);
lean_dec_ref(v___x_2399_);
v___x_2404_ = l_Lean_Meta_FVarSubst_erase(v_subst_2390_, v___x_2394_);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 2, v___x_2404_);
lean_ctor_set(v___x_2392_, 0, v_a_2403_);
v___x_2406_ = v___x_2392_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2403_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_fields_2389_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2408_; 
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2406_);
v___x_2408_ = v___x_2401_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2406_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_ctorName_2387_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
v_a_2381_ = v___x_2408_;
goto v___jp_2380_;
}
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2434_; 
lean_del_object(v___x_2392_);
lean_dec(v_subst_2390_);
lean_dec_ref(v_fields_2389_);
v_a_2414_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2416_ = v___x_2399_;
v_isShared_2417_ = v_isSharedCheck_2434_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2399_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2434_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
lean_inc(v_a_2414_);
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
uint8_t v___y_2421_; uint8_t v___x_2431_; 
v___x_2431_ = l_Lean_Exception_isInterrupt(v_a_2414_);
if (v___x_2431_ == 0)
{
uint8_t v___x_2432_; 
v___x_2432_ = l_Lean_Exception_isRuntime(v_a_2414_);
v___y_2421_ = v___x_2432_;
goto v___jp_2420_;
}
else
{
lean_dec(v_a_2414_);
v___y_2421_ = v___x_2431_;
goto v___jp_2420_;
}
v___jp_2420_:
{
if (v___y_2421_ == 0)
{
lean_object* v___x_2422_; 
lean_dec_ref(v___x_2419_);
v___x_2422_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2398_, v___y_2376_, v___y_2378_);
lean_dec(v_a_2398_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_dec_ref(v___x_2422_);
v_a_2381_ = v_b_2374_;
goto v___jp_2380_;
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec_ref(v_b_2374_);
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
else
{
lean_dec(v_a_2398_);
lean_dec_ref(v_b_2374_);
return v___x_2419_;
}
}
}
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec(v_fvarId_2396_);
lean_del_object(v___x_2392_);
lean_dec(v_subst_2390_);
lean_dec_ref(v_fields_2389_);
lean_dec(v_mvarId_2388_);
lean_dec_ref(v_b_2374_);
v_a_2435_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2397_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2397_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
else
{
lean_dec_ref(v___x_2395_);
lean_del_object(v___x_2392_);
lean_dec(v_subst_2390_);
lean_dec_ref(v_fields_2389_);
lean_dec(v_mvarId_2388_);
v_a_2381_ = v_b_2374_;
goto v___jp_2380_;
}
}
}
else
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2444_, 0, v_b_2374_);
return v___x_2444_;
}
v___jp_2380_:
{
size_t v___x_2382_; size_t v___x_2383_; 
v___x_2382_ = ((size_t)1ULL);
v___x_2383_ = lean_usize_add(v_i_2372_, v___x_2382_);
v_i_2372_ = v___x_2383_;
v_b_2374_ = v_a_2381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object* v_as_2445_, lean_object* v_i_2446_, lean_object* v_stop_2447_, lean_object* v_b_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
size_t v_i_boxed_2454_; size_t v_stop_boxed_2455_; lean_object* v_res_2456_; 
v_i_boxed_2454_ = lean_unbox_usize(v_i_2446_);
lean_dec(v_i_2446_);
v_stop_boxed_2455_ = lean_unbox_usize(v_stop_2447_);
lean_dec(v_stop_2447_);
v_res_2456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_as_2445_, v_i_boxed_2454_, v_stop_boxed_2455_, v_b_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec_ref(v_as_2445_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object* v_indicesFVarIds_2457_, size_t v_sz_2458_, size_t v_i_2459_, lean_object* v_bs_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
uint8_t v___x_2466_; 
v___x_2466_ = lean_usize_dec_lt(v_i_2459_, v_sz_2458_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2467_, 0, v_bs_2460_);
return v___x_2467_;
}
else
{
lean_object* v_v_2468_; lean_object* v___x_2469_; lean_object* v_bs_x27_2470_; lean_object* v_a_2472_; lean_object* v___y_2478_; lean_object* v___x_2488_; uint8_t v___x_2489_; 
v_v_2468_ = lean_array_uget(v_bs_2460_, v_i_2459_);
v___x_2469_ = lean_unsigned_to_nat(0u);
v_bs_x27_2470_ = lean_array_uset(v_bs_2460_, v_i_2459_, v___x_2469_);
v___x_2488_ = lean_array_get_size(v_indicesFVarIds_2457_);
v___x_2489_ = lean_nat_dec_lt(v___x_2469_, v___x_2488_);
if (v___x_2489_ == 0)
{
v_a_2472_ = v_v_2468_;
goto v___jp_2471_;
}
else
{
uint8_t v___x_2490_; 
v___x_2490_ = lean_nat_dec_le(v___x_2488_, v___x_2488_);
if (v___x_2490_ == 0)
{
if (v___x_2489_ == 0)
{
v_a_2472_ = v_v_2468_;
goto v___jp_2471_;
}
else
{
size_t v___x_2491_; size_t v___x_2492_; lean_object* v___x_2493_; 
v___x_2491_ = ((size_t)0ULL);
v___x_2492_ = lean_usize_of_nat(v___x_2488_);
v___x_2493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_indicesFVarIds_2457_, v___x_2491_, v___x_2492_, v_v_2468_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
v___y_2478_ = v___x_2493_;
goto v___jp_2477_;
}
}
else
{
size_t v___x_2494_; size_t v___x_2495_; lean_object* v___x_2496_; 
v___x_2494_ = ((size_t)0ULL);
v___x_2495_ = lean_usize_of_nat(v___x_2488_);
v___x_2496_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_indicesFVarIds_2457_, v___x_2494_, v___x_2495_, v_v_2468_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
v___y_2478_ = v___x_2496_;
goto v___jp_2477_;
}
}
v___jp_2471_:
{
size_t v___x_2473_; size_t v___x_2474_; lean_object* v___x_2475_; 
v___x_2473_ = ((size_t)1ULL);
v___x_2474_ = lean_usize_add(v_i_2459_, v___x_2473_);
v___x_2475_ = lean_array_uset(v_bs_x27_2470_, v_i_2459_, v_a_2472_);
v_i_2459_ = v___x_2474_;
v_bs_2460_ = v___x_2475_;
goto _start;
}
v___jp_2477_:
{
if (lean_obj_tag(v___y_2478_) == 0)
{
lean_object* v_a_2479_; 
v_a_2479_ = lean_ctor_get(v___y_2478_, 0);
lean_inc(v_a_2479_);
lean_dec_ref(v___y_2478_);
v_a_2472_ = v_a_2479_;
goto v___jp_2471_;
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref(v_bs_x27_2470_);
v_a_2480_ = lean_ctor_get(v___y_2478_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___y_2478_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___y_2478_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___y_2478_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object* v_indicesFVarIds_2497_, lean_object* v_sz_2498_, lean_object* v_i_2499_, lean_object* v_bs_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
size_t v_sz_boxed_2506_; size_t v_i_boxed_2507_; lean_object* v_res_2508_; 
v_sz_boxed_2506_ = lean_unbox_usize(v_sz_2498_);
lean_dec(v_sz_2498_);
v_i_boxed_2507_ = lean_unbox_usize(v_i_2499_);
lean_dec(v_i_2499_);
v_res_2508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(v_indicesFVarIds_2497_, v_sz_boxed_2506_, v_i_boxed_2507_, v_bs_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec_ref(v_indicesFVarIds_2497_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object* v_s_u2081_2509_, lean_object* v_s_u2082_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v_indicesFVarIds_2516_; size_t v_sz_2517_; size_t v___x_2518_; lean_object* v___x_2519_; 
v_indicesFVarIds_2516_ = lean_ctor_get(v_s_u2081_2509_, 1);
v_sz_2517_ = lean_array_size(v_s_u2082_2510_);
v___x_2518_ = ((size_t)0ULL);
v___x_2519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(v_indicesFVarIds_2516_, v_sz_2517_, v___x_2518_, v_s_u2082_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object* v_s_u2081_2520_, lean_object* v_s_u2082_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_s_u2081_2520_, v_s_u2082_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_);
lean_dec(v_a_2525_);
lean_dec_ref(v_a_2524_);
lean_dec(v_a_2523_);
lean_dec_ref(v_a_2522_);
lean_dec_ref(v_s_u2081_2520_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object* v_ctorNames_2528_, lean_object* v_us_2529_, lean_object* v_params_2530_, lean_object* v_majorFVarId_2531_, lean_object* v_as_2532_, lean_object* v_i_2533_, lean_object* v_j_2534_, lean_object* v_bs_2535_){
_start:
{
lean_object* v_zero_2536_; uint8_t v_isZero_2537_; 
v_zero_2536_ = lean_unsigned_to_nat(0u);
v_isZero_2537_ = lean_nat_dec_eq(v_i_2533_, v_zero_2536_);
if (v_isZero_2537_ == 1)
{
lean_dec(v_j_2534_);
lean_dec(v_i_2533_);
lean_dec(v_majorFVarId_2531_);
lean_dec(v_us_2529_);
return v_bs_2535_;
}
else
{
lean_object* v_one_2538_; lean_object* v_n_2539_; lean_object* v___y_2541_; lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v_one_2538_ = lean_unsigned_to_nat(1u);
v_n_2539_ = lean_nat_sub(v_i_2533_, v_one_2538_);
lean_dec(v_i_2533_);
v___x_2545_ = lean_array_fget(v_as_2532_, v_j_2534_);
v___x_2546_ = lean_array_get_size(v_ctorNames_2528_);
v___x_2547_ = lean_nat_dec_lt(v_j_2534_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = lean_box(0);
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2545_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___y_2541_ = v___x_2549_;
goto v___jp_2540_;
}
else
{
lean_object* v_mvarId_2550_; lean_object* v_fields_2551_; lean_object* v_subst_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2567_; 
v_mvarId_2550_ = lean_ctor_get(v___x_2545_, 0);
v_fields_2551_ = lean_ctor_get(v___x_2545_, 1);
v_subst_2552_ = lean_ctor_get(v___x_2545_, 2);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2554_ = v___x_2545_;
v_isShared_2555_ = v_isSharedCheck_2567_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_subst_2552_);
lean_inc(v_fields_2551_);
lean_inc(v_mvarId_2550_);
lean_dec(v___x_2545_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2567_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v_ctorName_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v_ctorApp_2559_; lean_object* v___x_2560_; lean_object* v_subst_2561_; lean_object* v___x_2563_; 
v_ctorName_2556_ = lean_array_fget_borrowed(v_ctorNames_2528_, v_j_2534_);
lean_inc(v_us_2529_);
lean_inc(v_ctorName_2556_);
v___x_2557_ = l_Lean_mkConst(v_ctorName_2556_, v_us_2529_);
v___x_2558_ = l_Lean_mkAppN(v___x_2557_, v_params_2530_);
v_ctorApp_2559_ = l_Lean_mkAppN(v___x_2558_, v_fields_2551_);
v___x_2560_ = l_Lean_Meta_FVarSubst_erase(v_subst_2552_, v_majorFVarId_2531_);
lean_inc(v_majorFVarId_2531_);
v_subst_2561_ = l_Lean_Meta_FVarSubst_insert(v___x_2560_, v_majorFVarId_2531_, v_ctorApp_2559_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 2, v_subst_2561_);
v___x_2563_ = v___x_2554_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_mvarId_2550_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v_fields_2551_);
lean_ctor_set(v_reuseFailAlloc_2566_, 2, v_subst_2561_);
v___x_2563_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
lean_inc(v_ctorName_2556_);
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_ctorName_2556_);
v___x_2565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2563_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v___y_2541_ = v___x_2565_;
goto v___jp_2540_;
}
}
}
v___jp_2540_:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_nat_add(v_j_2534_, v_one_2538_);
lean_dec(v_j_2534_);
v___x_2543_ = lean_array_push(v_bs_2535_, v___y_2541_);
v_i_2533_ = v_n_2539_;
v_j_2534_ = v___x_2542_;
v_bs_2535_ = v___x_2543_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object* v_ctorNames_2568_, lean_object* v_us_2569_, lean_object* v_params_2570_, lean_object* v_majorFVarId_2571_, lean_object* v_as_2572_, lean_object* v_i_2573_, lean_object* v_j_2574_, lean_object* v_bs_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2568_, v_us_2569_, v_params_2570_, v_majorFVarId_2571_, v_as_2572_, v_i_2573_, v_j_2574_, v_bs_2575_);
lean_dec_ref(v_as_2572_);
lean_dec_ref(v_params_2570_);
lean_dec_ref(v_ctorNames_2568_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object* v_s_2577_, lean_object* v_ctorNames_2578_, lean_object* v_majorFVarId_2579_, lean_object* v_us_2580_, lean_object* v_params_2581_){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2582_ = lean_array_get_size(v_s_2577_);
v___x_2583_ = lean_unsigned_to_nat(0u);
v___x_2584_ = lean_mk_empty_array_with_capacity(v___x_2582_);
v___x_2585_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2578_, v_us_2580_, v_params_2581_, v_majorFVarId_2579_, v_s_2577_, v___x_2582_, v___x_2583_, v___x_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object* v_s_2586_, lean_object* v_ctorNames_2587_, lean_object* v_majorFVarId_2588_, lean_object* v_us_2589_, lean_object* v_params_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_s_2586_, v_ctorNames_2587_, v_majorFVarId_2588_, v_us_2589_, v_params_2590_);
lean_dec_ref(v_params_2590_);
lean_dec_ref(v_ctorNames_2587_);
lean_dec_ref(v_s_2586_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object* v_ctorNames_2592_, lean_object* v_us_2593_, lean_object* v_params_2594_, lean_object* v_majorFVarId_2595_, lean_object* v_as_2596_, lean_object* v_i_2597_, lean_object* v_j_2598_, lean_object* v_inv_2599_, lean_object* v_bs_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2592_, v_us_2593_, v_params_2594_, v_majorFVarId_2595_, v_as_2596_, v_i_2597_, v_j_2598_, v_bs_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object* v_ctorNames_2602_, lean_object* v_us_2603_, lean_object* v_params_2604_, lean_object* v_majorFVarId_2605_, lean_object* v_as_2606_, lean_object* v_i_2607_, lean_object* v_j_2608_, lean_object* v_inv_2609_, lean_object* v_bs_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(v_ctorNames_2602_, v_us_2603_, v_params_2604_, v_majorFVarId_2605_, v_as_2606_, v_i_2607_, v_j_2608_, v_inv_2609_, v_bs_2610_);
lean_dec_ref(v_as_2606_);
lean_dec_ref(v_params_2604_);
lean_dec_ref(v_ctorNames_2602_);
return v_res_2611_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_2612_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_2613_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2614_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1);
v___x_2615_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0);
v___x_2616_ = l_Lean_Name_mkStr2(v___x_2615_, v___x_2614_);
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = l_Lean_maxRecDepthErrorMessage;
v___x_2618_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
return v___x_2618_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3);
v___x_2620_ = l_Lean_MessageData_ofFormat(v___x_2619_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4);
v___x_2622_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2);
v___x_2623_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
lean_ctor_set(v___x_2623_, 1, v___x_2621_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object* v_ref_2624_){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2626_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5);
v___x_2627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_ref_2624_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2627_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object* v_ref_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2629_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object* v_00_u03b1_2632_, lean_object* v_ref_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2633_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object* v_00_u03b1_2640_, lean_object* v_ref_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(v_00_u03b1_2640_, v_ref_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
return v_res_2647_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_unifyEqs_x3f___closed__0(void){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = lean_alloc_closure((void*)(l_Lean_MVarId_acyclic___boxed), 7, 0);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object* v_numEqs_2649_, lean_object* v_mvarId_2650_, lean_object* v_subst_2651_, lean_object* v_caseName_x3f_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_fileName_2658_; lean_object* v_fileMap_2659_; lean_object* v_options_2660_; lean_object* v_currRecDepth_2661_; lean_object* v_maxRecDepth_2662_; lean_object* v_ref_2663_; lean_object* v_currNamespace_2664_; lean_object* v_openDecls_2665_; lean_object* v_initHeartbeats_2666_; lean_object* v_maxHeartbeats_2667_; lean_object* v_quotContext_2668_; lean_object* v_currMacroScope_2669_; uint8_t v_diag_2670_; lean_object* v_cancelTk_x3f_2671_; uint8_t v_suppressElabErrors_2672_; lean_object* v_inheritedTraceOptions_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; uint8_t v___x_2721_; 
v_fileName_2658_ = lean_ctor_get(v_a_2655_, 0);
lean_inc_ref(v_fileName_2658_);
v_fileMap_2659_ = lean_ctor_get(v_a_2655_, 1);
lean_inc_ref(v_fileMap_2659_);
v_options_2660_ = lean_ctor_get(v_a_2655_, 2);
lean_inc_ref(v_options_2660_);
v_currRecDepth_2661_ = lean_ctor_get(v_a_2655_, 3);
lean_inc(v_currRecDepth_2661_);
v_maxRecDepth_2662_ = lean_ctor_get(v_a_2655_, 4);
lean_inc(v_maxRecDepth_2662_);
v_ref_2663_ = lean_ctor_get(v_a_2655_, 5);
lean_inc(v_ref_2663_);
v_currNamespace_2664_ = lean_ctor_get(v_a_2655_, 6);
lean_inc(v_currNamespace_2664_);
v_openDecls_2665_ = lean_ctor_get(v_a_2655_, 7);
lean_inc(v_openDecls_2665_);
v_initHeartbeats_2666_ = lean_ctor_get(v_a_2655_, 8);
lean_inc(v_initHeartbeats_2666_);
v_maxHeartbeats_2667_ = lean_ctor_get(v_a_2655_, 9);
lean_inc(v_maxHeartbeats_2667_);
v_quotContext_2668_ = lean_ctor_get(v_a_2655_, 10);
lean_inc(v_quotContext_2668_);
v_currMacroScope_2669_ = lean_ctor_get(v_a_2655_, 11);
lean_inc(v_currMacroScope_2669_);
v_diag_2670_ = lean_ctor_get_uint8(v_a_2655_, sizeof(void*)*14);
v_cancelTk_x3f_2671_ = lean_ctor_get(v_a_2655_, 12);
lean_inc(v_cancelTk_x3f_2671_);
v_suppressElabErrors_2672_ = lean_ctor_get_uint8(v_a_2655_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2673_ = lean_ctor_get(v_a_2655_, 13);
lean_inc_ref(v_inheritedTraceOptions_2673_);
lean_dec_ref(v_a_2655_);
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = lean_nat_dec_eq(v_numEqs_2649_, v___x_2674_);
v___x_2721_ = lean_nat_dec_eq(v_maxRecDepth_2662_, v___x_2674_);
if (v___x_2721_ == 0)
{
uint8_t v___x_2722_; 
v___x_2722_ = lean_nat_dec_eq(v_currRecDepth_2661_, v_maxRecDepth_2662_);
if (v___x_2722_ == 0)
{
goto v___jp_2676_;
}
else
{
lean_object* v___x_2723_; 
lean_dec_ref(v_inheritedTraceOptions_2673_);
lean_dec(v_cancelTk_x3f_2671_);
lean_dec(v_currMacroScope_2669_);
lean_dec(v_quotContext_2668_);
lean_dec(v_maxHeartbeats_2667_);
lean_dec(v_initHeartbeats_2666_);
lean_dec(v_openDecls_2665_);
lean_dec(v_currNamespace_2664_);
lean_dec(v_maxRecDepth_2662_);
lean_dec(v_currRecDepth_2661_);
lean_dec_ref(v_options_2660_);
lean_dec_ref(v_fileMap_2659_);
lean_dec_ref(v_fileName_2658_);
lean_dec(v_caseName_x3f_2652_);
lean_dec(v_subst_2651_);
lean_dec(v_mvarId_2650_);
lean_dec(v_numEqs_2649_);
v___x_2723_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2663_);
return v___x_2723_;
}
}
else
{
goto v___jp_2676_;
}
v___jp_2676_:
{
if (v___x_2675_ == 0)
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2677_ = lean_unsigned_to_nat(1u);
v___x_2678_ = lean_nat_add(v_currRecDepth_2661_, v___x_2677_);
lean_dec(v_currRecDepth_2661_);
v___x_2679_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2679_, 0, v_fileName_2658_);
lean_ctor_set(v___x_2679_, 1, v_fileMap_2659_);
lean_ctor_set(v___x_2679_, 2, v_options_2660_);
lean_ctor_set(v___x_2679_, 3, v___x_2678_);
lean_ctor_set(v___x_2679_, 4, v_maxRecDepth_2662_);
lean_ctor_set(v___x_2679_, 5, v_ref_2663_);
lean_ctor_set(v___x_2679_, 6, v_currNamespace_2664_);
lean_ctor_set(v___x_2679_, 7, v_openDecls_2665_);
lean_ctor_set(v___x_2679_, 8, v_initHeartbeats_2666_);
lean_ctor_set(v___x_2679_, 9, v_maxHeartbeats_2667_);
lean_ctor_set(v___x_2679_, 10, v_quotContext_2668_);
lean_ctor_set(v___x_2679_, 11, v_currMacroScope_2669_);
lean_ctor_set(v___x_2679_, 12, v_cancelTk_x3f_2671_);
lean_ctor_set(v___x_2679_, 13, v_inheritedTraceOptions_2673_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*14, v_diag_2670_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*14 + 1, v_suppressElabErrors_2672_);
v___x_2680_ = l_Lean_Meta_intro1Core(v_mvarId_2650_, v___x_2675_, v_a_2653_, v_a_2654_, v___x_2679_, v_a_2656_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref(v___x_2680_);
v_fst_2682_ = lean_ctor_get(v_a_2681_, 0);
lean_inc(v_fst_2682_);
v_snd_2683_ = lean_ctor_get(v_a_2681_, 1);
lean_inc(v_snd_2683_);
lean_dec(v_a_2681_);
v___x_2684_ = lean_obj_once(&l_Lean_Meta_Cases_unifyEqs_x3f___closed__0, &l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_once, _init_l_Lean_Meta_Cases_unifyEqs_x3f___closed__0);
lean_inc(v_caseName_x3f_2652_);
v___x_2685_ = l_Lean_Meta_unifyEq_x3f(v_snd_2683_, v_fst_2682_, v_subst_2651_, v___x_2684_, v_caseName_x3f_2652_, v_a_2653_, v_a_2654_, v___x_2679_, v_a_2656_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2701_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2701_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2701_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
if (lean_obj_tag(v_a_2686_) == 1)
{
lean_object* v_val_2690_; lean_object* v_mvarId_2691_; lean_object* v_subst_2692_; lean_object* v_numNewEqs_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
lean_del_object(v___x_2688_);
v_val_2690_ = lean_ctor_get(v_a_2686_, 0);
lean_inc(v_val_2690_);
lean_dec_ref(v_a_2686_);
v_mvarId_2691_ = lean_ctor_get(v_val_2690_, 0);
lean_inc(v_mvarId_2691_);
v_subst_2692_ = lean_ctor_get(v_val_2690_, 1);
lean_inc(v_subst_2692_);
v_numNewEqs_2693_ = lean_ctor_get(v_val_2690_, 2);
lean_inc(v_numNewEqs_2693_);
lean_dec(v_val_2690_);
v___x_2694_ = lean_nat_sub(v_numEqs_2649_, v___x_2677_);
lean_dec(v_numEqs_2649_);
v___x_2695_ = lean_nat_add(v___x_2694_, v_numNewEqs_2693_);
lean_dec(v_numNewEqs_2693_);
lean_dec(v___x_2694_);
v_numEqs_2649_ = v___x_2695_;
v_mvarId_2650_ = v_mvarId_2691_;
v_subst_2651_ = v_subst_2692_;
v_a_2655_ = v___x_2679_;
goto _start;
}
else
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
lean_dec(v_a_2686_);
lean_dec_ref(v___x_2679_);
lean_dec(v_caseName_x3f_2652_);
lean_dec(v_numEqs_2649_);
v___x_2697_ = lean_box(0);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 0, v___x_2697_);
v___x_2699_ = v___x_2688_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_dec_ref(v___x_2679_);
lean_dec(v_caseName_x3f_2652_);
lean_dec(v_numEqs_2649_);
v_a_2702_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2685_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2685_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec_ref(v___x_2679_);
lean_dec(v_caseName_x3f_2652_);
lean_dec(v_subst_2651_);
lean_dec(v_numEqs_2649_);
v_a_2710_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2680_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2680_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec_ref(v_inheritedTraceOptions_2673_);
lean_dec(v_cancelTk_x3f_2671_);
lean_dec(v_currMacroScope_2669_);
lean_dec(v_quotContext_2668_);
lean_dec(v_maxHeartbeats_2667_);
lean_dec(v_initHeartbeats_2666_);
lean_dec(v_openDecls_2665_);
lean_dec(v_currNamespace_2664_);
lean_dec(v_ref_2663_);
lean_dec(v_maxRecDepth_2662_);
lean_dec(v_currRecDepth_2661_);
lean_dec_ref(v_options_2660_);
lean_dec_ref(v_fileMap_2659_);
lean_dec_ref(v_fileName_2658_);
lean_dec(v_caseName_x3f_2652_);
lean_dec(v_numEqs_2649_);
v___x_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2718_, 0, v_mvarId_2650_);
lean_ctor_set(v___x_2718_, 1, v_subst_2651_);
v___x_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2718_);
v___x_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object* v_numEqs_2724_, lean_object* v_mvarId_2725_, lean_object* v_subst_2726_, lean_object* v_caseName_x3f_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2724_, v_mvarId_2725_, v_subst_2726_, v_caseName_x3f_2727_, v_a_2728_, v_a_2729_, v_a_2730_, v_a_2731_);
lean_dec(v_a_2731_);
lean_dec(v_a_2729_);
lean_dec_ref(v_a_2728_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object* v_snd_2734_, size_t v_sz_2735_, size_t v_i_2736_, lean_object* v_bs_2737_){
_start:
{
uint8_t v___x_2738_; 
v___x_2738_ = lean_usize_dec_lt(v_i_2736_, v_sz_2735_);
if (v___x_2738_ == 0)
{
lean_dec(v_snd_2734_);
return v_bs_2737_;
}
else
{
lean_object* v_v_2739_; lean_object* v___x_2740_; lean_object* v_bs_x27_2741_; lean_object* v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; lean_object* v___x_2745_; 
v_v_2739_ = lean_array_uget(v_bs_2737_, v_i_2736_);
v___x_2740_ = lean_unsigned_to_nat(0u);
v_bs_x27_2741_ = lean_array_uset(v_bs_2737_, v_i_2736_, v___x_2740_);
lean_inc(v_snd_2734_);
v___x_2742_ = l_Lean_Meta_FVarSubst_apply(v_snd_2734_, v_v_2739_);
lean_dec(v_v_2739_);
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2736_, v___x_2743_);
v___x_2745_ = lean_array_uset(v_bs_x27_2741_, v_i_2736_, v___x_2742_);
v_i_2736_ = v___x_2744_;
v_bs_2737_ = v___x_2745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object* v_snd_2747_, lean_object* v_sz_2748_, lean_object* v_i_2749_, lean_object* v_bs_2750_){
_start:
{
size_t v_sz_boxed_2751_; size_t v_i_boxed_2752_; lean_object* v_res_2753_; 
v_sz_boxed_2751_ = lean_unbox_usize(v_sz_2748_);
lean_dec(v_sz_2748_);
v_i_boxed_2752_ = lean_unbox_usize(v_i_2749_);
lean_dec(v_i_2749_);
v_res_2753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2747_, v_sz_boxed_2751_, v_i_boxed_2752_, v_bs_2750_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object* v_numEqs_2754_, lean_object* v_as_2755_, size_t v_i_2756_, size_t v_stop_2757_, lean_object* v_b_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
uint8_t v___x_2764_; 
v___x_2764_ = lean_usize_dec_eq(v_i_2756_, v_stop_2757_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v_toInductionSubgoal_2766_; lean_object* v_ctorName_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2806_; 
v___x_2765_ = lean_array_uget(v_as_2755_, v_i_2756_);
v_toInductionSubgoal_2766_ = lean_ctor_get(v___x_2765_, 0);
v_ctorName_2767_ = lean_ctor_get(v___x_2765_, 1);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2769_ = v___x_2765_;
v_isShared_2770_ = v_isSharedCheck_2806_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_ctorName_2767_);
lean_inc(v_toInductionSubgoal_2766_);
lean_dec(v___x_2765_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2806_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v_mvarId_2771_; lean_object* v_fields_2772_; lean_object* v_subst_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2805_; 
v_mvarId_2771_ = lean_ctor_get(v_toInductionSubgoal_2766_, 0);
v_fields_2772_ = lean_ctor_get(v_toInductionSubgoal_2766_, 1);
v_subst_2773_ = lean_ctor_get(v_toInductionSubgoal_2766_, 2);
v_isSharedCheck_2805_ = !lean_is_exclusive(v_toInductionSubgoal_2766_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2775_ = v_toInductionSubgoal_2766_;
v_isShared_2776_ = v_isSharedCheck_2805_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_subst_2773_);
lean_inc(v_fields_2772_);
lean_inc(v_mvarId_2771_);
lean_dec(v_toInductionSubgoal_2766_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2805_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; 
lean_inc_ref(v___y_2761_);
lean_inc(v_ctorName_2767_);
lean_inc(v_numEqs_2754_);
v___x_2777_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2754_, v_mvarId_2771_, v_subst_2773_, v_ctorName_2767_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v_a_2780_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref(v___x_2777_);
if (lean_obj_tag(v_a_2778_) == 0)
{
lean_del_object(v___x_2775_);
lean_dec_ref(v_fields_2772_);
lean_del_object(v___x_2769_);
lean_dec(v_ctorName_2767_);
v_a_2780_ = v_b_2758_;
goto v___jp_2779_;
}
else
{
lean_object* v_val_2784_; lean_object* v_fst_2785_; lean_object* v_snd_2786_; size_t v_sz_2787_; size_t v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2791_; 
v_val_2784_ = lean_ctor_get(v_a_2778_, 0);
lean_inc(v_val_2784_);
lean_dec_ref(v_a_2778_);
v_fst_2785_ = lean_ctor_get(v_val_2784_, 0);
lean_inc(v_fst_2785_);
v_snd_2786_ = lean_ctor_get(v_val_2784_, 1);
lean_inc_n(v_snd_2786_, 2);
lean_dec(v_val_2784_);
v_sz_2787_ = lean_array_size(v_fields_2772_);
v___x_2788_ = ((size_t)0ULL);
v___x_2789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2786_, v_sz_2787_, v___x_2788_, v_fields_2772_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 2, v_snd_2786_);
lean_ctor_set(v___x_2775_, 1, v___x_2789_);
lean_ctor_set(v___x_2775_, 0, v_fst_2785_);
v___x_2791_ = v___x_2775_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_fst_2785_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v___x_2789_);
lean_ctor_set(v_reuseFailAlloc_2796_, 2, v_snd_2786_);
v___x_2791_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
lean_object* v___x_2793_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v___x_2791_);
v___x_2793_ = v___x_2769_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2791_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v_ctorName_2767_);
v___x_2793_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_array_push(v_b_2758_, v___x_2793_);
v_a_2780_ = v___x_2794_;
goto v___jp_2779_;
}
}
}
v___jp_2779_:
{
size_t v___x_2781_; size_t v___x_2782_; 
v___x_2781_ = ((size_t)1ULL);
v___x_2782_ = lean_usize_add(v_i_2756_, v___x_2781_);
v_i_2756_ = v___x_2782_;
v_b_2758_ = v_a_2780_;
goto _start;
}
}
else
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
lean_del_object(v___x_2775_);
lean_dec_ref(v_fields_2772_);
lean_del_object(v___x_2769_);
lean_dec(v_ctorName_2767_);
lean_dec_ref(v_b_2758_);
lean_dec(v_numEqs_2754_);
v_a_2797_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2799_ = v___x_2777_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2777_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2797_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
}
}
else
{
lean_object* v___x_2807_; 
lean_dec(v_numEqs_2754_);
v___x_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2807_, 0, v_b_2758_);
return v___x_2807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object* v_numEqs_2808_, lean_object* v_as_2809_, lean_object* v_i_2810_, lean_object* v_stop_2811_, lean_object* v_b_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
size_t v_i_boxed_2818_; size_t v_stop_boxed_2819_; lean_object* v_res_2820_; 
v_i_boxed_2818_ = lean_unbox_usize(v_i_2810_);
lean_dec(v_i_2810_);
v_stop_boxed_2819_ = lean_unbox_usize(v_stop_2811_);
lean_dec(v_stop_2811_);
v_res_2820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2808_, v_as_2809_, v_i_boxed_2818_, v_stop_boxed_2819_, v_b_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec_ref(v_as_2809_);
return v_res_2820_;
}
}
static lean_object* _init_l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = lean_unsigned_to_nat(0u);
v___x_2822_ = lean_mk_empty_array_with_capacity(v___x_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object* v_numEqs_2823_, lean_object* v_as_2824_, lean_object* v_start_2825_, lean_object* v_stop_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v___x_2832_; uint8_t v___x_2833_; 
v___x_2832_ = lean_obj_once(&l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0, &l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_once, _init_l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0);
v___x_2833_ = lean_nat_dec_lt(v_start_2825_, v_stop_2826_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; 
lean_dec(v_numEqs_2823_);
v___x_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2832_);
return v___x_2834_;
}
else
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2835_ = lean_array_get_size(v_as_2824_);
v___x_2836_ = lean_nat_dec_le(v_stop_2826_, v___x_2835_);
if (v___x_2836_ == 0)
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_nat_dec_lt(v_start_2825_, v___x_2835_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; 
lean_dec(v_numEqs_2823_);
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2832_);
return v___x_2838_;
}
else
{
size_t v___x_2839_; size_t v___x_2840_; lean_object* v___x_2841_; 
v___x_2839_ = lean_usize_of_nat(v_start_2825_);
v___x_2840_ = lean_usize_of_nat(v___x_2835_);
v___x_2841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2823_, v_as_2824_, v___x_2839_, v___x_2840_, v___x_2832_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2841_;
}
}
else
{
size_t v___x_2842_; size_t v___x_2843_; lean_object* v___x_2844_; 
v___x_2842_ = lean_usize_of_nat(v_start_2825_);
v___x_2843_ = lean_usize_of_nat(v_stop_2826_);
v___x_2844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2823_, v_as_2824_, v___x_2842_, v___x_2843_, v___x_2832_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2844_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object* v_numEqs_2845_, lean_object* v_as_2846_, lean_object* v_start_2847_, lean_object* v_stop_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2845_, v_as_2846_, v_start_2847_, v_stop_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v_stop_2848_);
lean_dec(v_start_2847_);
lean_dec_ref(v_as_2846_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object* v_numEqs_2855_, lean_object* v_subgoals_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = lean_unsigned_to_nat(0u);
v___x_2863_ = lean_array_get_size(v_subgoals_2856_);
v___x_2864_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2855_, v_subgoals_2856_, v___x_2862_, v___x_2863_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object* v_numEqs_2865_, lean_object* v_subgoals_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_2865_, v_subgoals_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_);
lean_dec(v_a_2870_);
lean_dec_ref(v_a_2869_);
lean_dec(v_a_2868_);
lean_dec_ref(v_a_2867_);
lean_dec_ref(v_subgoals_2866_);
return v_res_2872_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_2873_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0);
v___x_2875_ = l_Lean_Name_mkStr1(v___x_2874_);
return v___x_2875_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = lean_mk_string_unchecked("casesAuxOn", 10, 10);
return v___x_2876_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2);
v___x_2878_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0);
v___x_2879_ = l_Lean_Name_mkStr2(v___x_2878_, v___x_2877_);
return v___x_2879_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2880_; 
v___x_2880_ = lean_mk_string_unchecked("hasNotBit", 9, 9);
return v___x_2880_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2881_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4);
v___x_2882_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0);
v___x_2883_ = l_Lean_Name_mkStr2(v___x_2882_, v___x_2881_);
return v___x_2883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object* v___x_2884_, lean_object* v_mvarId_2885_, lean_object* v_majorFVarId_2886_, lean_object* v_givenNames_2887_, lean_object* v_ctx_2888_, uint8_t v_useNatCasesAuxOn_2889_, lean_object* v_interestingCtors_x3f_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_){
_start:
{
lean_object* v___x_2896_; 
lean_inc(v___y_2894_);
lean_inc_ref(v___y_2893_);
lean_inc(v___y_2892_);
lean_inc_ref(v___y_2891_);
v___x_2896_ = lean_infer_type(v___x_2884_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2898_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref(v___x_2896_);
v___x_2898_ = l_Lean_Meta_getInductiveUniverseAndParams(v_a_2897_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v_fst_2900_; lean_object* v_snd_2901_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2899_);
lean_dec_ref(v___x_2898_);
v_fst_2900_ = lean_ctor_get(v_a_2899_, 0);
lean_inc(v_fst_2900_);
v_snd_2901_ = lean_ctor_get(v_a_2899_, 1);
lean_inc(v_snd_2901_);
lean_dec(v_a_2899_);
if (lean_obj_tag(v_interestingCtors_x3f_2890_) == 1)
{
lean_object* v_val_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v_inductiveVal_2955_; lean_object* v_toConstantVal_2956_; lean_object* v_env_2957_; lean_object* v_ctors_2958_; lean_object* v_name_2959_; uint8_t v___y_2961_; lean_object* v___x_2995_; uint8_t v___x_2996_; uint8_t v___x_2997_; 
v_val_2952_ = lean_ctor_get(v_interestingCtors_x3f_2890_, 0);
lean_inc(v_val_2952_);
lean_dec_ref(v_interestingCtors_x3f_2890_);
v___x_2953_ = lean_st_ref_get(v___y_2894_);
v___x_2954_ = lean_st_ref_get(v___y_2894_);
v_inductiveVal_2955_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2956_ = lean_ctor_get(v_inductiveVal_2955_, 0);
v_env_2957_ = lean_ctor_get(v___x_2953_, 0);
lean_inc_ref(v_env_2957_);
lean_dec(v___x_2953_);
v_ctors_2958_ = lean_ctor_get(v_inductiveVal_2955_, 4);
v_name_2959_ = lean_ctor_get(v_toConstantVal_2956_, 0);
v___x_2995_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5);
v___x_2996_ = 1;
v___x_2997_ = l_Lean_Environment_contains(v_env_2957_, v___x_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_dec(v___x_2954_);
v___y_2961_ = v___x_2997_;
goto v___jp_2960_;
}
else
{
lean_object* v_env_2998_; lean_object* v___x_2999_; uint8_t v___x_3000_; 
v_env_2998_ = lean_ctor_get(v___x_2954_, 0);
lean_inc_ref(v_env_2998_);
lean_dec(v___x_2954_);
lean_inc(v_name_2959_);
v___x_2999_ = l_mkCtorIdxName(v_name_2959_);
v___x_3000_ = l_Lean_Environment_contains(v_env_2998_, v___x_2999_, v___x_2996_);
v___y_2961_ = v___x_3000_;
goto v___jp_2960_;
}
v___jp_2960_:
{
if (v___y_2961_ == 0)
{
lean_dec(v_val_2952_);
v___y_2939_ = v___y_2891_;
v___y_2940_ = v___y_2892_;
v___y_2941_ = v___y_2893_;
v___y_2942_ = v___y_2894_;
goto v___jp_2938_;
}
else
{
lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v___x_2962_ = lean_array_get_size(v_val_2952_);
v___x_2963_ = lean_unsigned_to_nat(0u);
v___x_2964_ = lean_nat_dec_eq(v___x_2962_, v___x_2963_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; uint8_t v___x_2966_; 
v___x_2965_ = l_List_lengthTR___redArg(v_ctors_2958_);
v___x_2966_ = lean_nat_dec_lt(v___x_2962_, v___x_2965_);
lean_dec(v___x_2965_);
if (v___x_2966_ == 0)
{
lean_dec(v_val_2952_);
v___y_2939_ = v___y_2891_;
v___y_2940_ = v___y_2892_;
v___y_2941_ = v___y_2893_;
v___y_2942_ = v___y_2894_;
goto v___jp_2938_;
}
else
{
lean_object* v___x_2967_; 
lean_inc(v_name_2959_);
lean_dec_ref(v_ctx_2888_);
lean_inc(v_val_2952_);
v___x_2967_ = l_Lean_Meta_mkSparseCasesOn(v_name_2959_, v_val_2952_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; lean_object* v___x_2969_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_a_2968_);
lean_dec_ref(v___x_2967_);
lean_inc(v_majorFVarId_2886_);
v___x_2969_ = l_Lean_MVarId_induction(v_mvarId_2885_, v_majorFVarId_2886_, v_a_2968_, v_givenNames_2887_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2978_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2972_ = v___x_2969_;
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2969_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2974_; lean_object* v___x_2976_; 
v___x_2974_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2970_, v_val_2952_, v_majorFVarId_2886_, v_fst_2900_, v_snd_2901_);
lean_dec(v_snd_2901_);
lean_dec(v_val_2952_);
lean_dec(v_a_2970_);
if (v_isShared_2973_ == 0)
{
lean_ctor_set(v___x_2972_, 0, v___x_2974_);
v___x_2976_ = v___x_2972_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2986_; 
lean_dec(v_val_2952_);
lean_dec(v_snd_2901_);
lean_dec(v_fst_2900_);
lean_dec(v_majorFVarId_2886_);
v_a_2979_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2981_ = v___x_2969_;
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2969_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2979_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
lean_dec(v_val_2952_);
lean_dec(v_snd_2901_);
lean_dec(v_fst_2900_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec_ref(v_givenNames_2887_);
lean_dec(v_majorFVarId_2886_);
lean_dec(v_mvarId_2885_);
v_a_2987_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2967_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2967_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
}
else
{
lean_dec(v_val_2952_);
v___y_2939_ = v___y_2891_;
v___y_2940_ = v___y_2892_;
v___y_2941_ = v___y_2893_;
v___y_2942_ = v___y_2894_;
goto v___jp_2938_;
}
}
}
}
else
{
lean_dec(v_interestingCtors_x3f_2890_);
v___y_2939_ = v___y_2891_;
v___y_2940_ = v___y_2892_;
v___y_2941_ = v___y_2893_;
v___y_2942_ = v___y_2894_;
goto v___jp_2938_;
}
v___jp_2902_:
{
lean_object* v___x_2908_; 
lean_inc(v_majorFVarId_2886_);
v___x_2908_ = l_Lean_MVarId_induction(v_mvarId_2885_, v_majorFVarId_2886_, v___y_2907_, v_givenNames_2887_, v___y_2903_, v___y_2905_, v___y_2904_, v___y_2906_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2903_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_inductiveVal_2909_; lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2920_; 
v_inductiveVal_2909_ = lean_ctor_get(v_ctx_2888_, 0);
lean_inc_ref(v_inductiveVal_2909_);
lean_dec_ref(v_ctx_2888_);
v_a_2910_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2912_ = v___x_2908_;
v_isShared_2913_ = v_isSharedCheck_2920_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v___x_2908_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2920_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v_ctors_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2918_; 
v_ctors_2914_ = lean_ctor_get(v_inductiveVal_2909_, 4);
lean_inc(v_ctors_2914_);
lean_dec_ref(v_inductiveVal_2909_);
v___x_2915_ = lean_array_mk(v_ctors_2914_);
v___x_2916_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2910_, v___x_2915_, v_majorFVarId_2886_, v_fst_2900_, v_snd_2901_);
lean_dec(v_snd_2901_);
lean_dec_ref(v___x_2915_);
lean_dec(v_a_2910_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 0, v___x_2916_);
v___x_2918_ = v___x_2912_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2916_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec(v_snd_2901_);
lean_dec(v_fst_2900_);
lean_dec_ref(v_ctx_2888_);
lean_dec(v_majorFVarId_2886_);
v_a_2921_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2908_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2908_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
v___jp_2929_:
{
lean_object* v_inductiveVal_2934_; lean_object* v_toConstantVal_2935_; lean_object* v_name_2936_; lean_object* v___x_2937_; 
v_inductiveVal_2934_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2935_ = lean_ctor_get(v_inductiveVal_2934_, 0);
v_name_2936_ = lean_ctor_get(v_toConstantVal_2935_, 0);
lean_inc(v_name_2936_);
v___x_2937_ = l_Lean_mkCasesOnName(v_name_2936_);
v___y_2903_ = v___y_2930_;
v___y_2904_ = v___y_2931_;
v___y_2905_ = v___y_2932_;
v___y_2906_ = v___y_2933_;
v___y_2907_ = v___x_2937_;
goto v___jp_2902_;
}
v___jp_2938_:
{
lean_object* v___x_2943_; 
v___x_2943_ = lean_st_ref_get(v___y_2942_);
if (v_useNatCasesAuxOn_2889_ == 0)
{
lean_dec(v___x_2943_);
v___y_2930_ = v___y_2939_;
v___y_2931_ = v___y_2941_;
v___y_2932_ = v___y_2940_;
v___y_2933_ = v___y_2942_;
goto v___jp_2929_;
}
else
{
lean_object* v_inductiveVal_2944_; lean_object* v_toConstantVal_2945_; lean_object* v_env_2946_; lean_object* v_name_2947_; lean_object* v___x_2948_; uint8_t v___x_2949_; 
v_inductiveVal_2944_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2945_ = lean_ctor_get(v_inductiveVal_2944_, 0);
v_env_2946_ = lean_ctor_get(v___x_2943_, 0);
lean_inc_ref(v_env_2946_);
lean_dec(v___x_2943_);
v_name_2947_ = lean_ctor_get(v_toConstantVal_2945_, 0);
v___x_2948_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1);
v___x_2949_ = lean_name_eq(v_name_2947_, v___x_2948_);
if (v___x_2949_ == 0)
{
lean_dec_ref(v_env_2946_);
v___y_2930_ = v___y_2939_;
v___y_2931_ = v___y_2941_;
v___y_2932_ = v___y_2940_;
v___y_2933_ = v___y_2942_;
goto v___jp_2929_;
}
else
{
lean_object* v___x_2950_; uint8_t v___x_2951_; 
v___x_2950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3);
v___x_2951_ = l_Lean_Environment_contains(v_env_2946_, v___x_2950_, v___x_2949_);
if (v___x_2951_ == 0)
{
v___y_2930_ = v___y_2939_;
v___y_2931_ = v___y_2941_;
v___y_2932_ = v___y_2940_;
v___y_2933_ = v___y_2942_;
goto v___jp_2929_;
}
else
{
v___y_2903_ = v___y_2939_;
v___y_2904_ = v___y_2941_;
v___y_2905_ = v___y_2940_;
v___y_2906_ = v___y_2942_;
v___y_2907_ = v___x_2950_;
goto v___jp_2902_;
}
}
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v_interestingCtors_x3f_2890_);
lean_dec_ref(v_ctx_2888_);
lean_dec_ref(v_givenNames_2887_);
lean_dec(v_majorFVarId_2886_);
lean_dec(v_mvarId_2885_);
v_a_3001_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2898_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2898_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v_interestingCtors_x3f_2890_);
lean_dec_ref(v_ctx_2888_);
lean_dec_ref(v_givenNames_2887_);
lean_dec(v_majorFVarId_2886_);
lean_dec(v_mvarId_2885_);
v_a_3009_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_2896_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_2896_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object* v___x_3017_, lean_object* v_mvarId_3018_, lean_object* v_majorFVarId_3019_, lean_object* v_givenNames_3020_, lean_object* v_ctx_3021_, lean_object* v_useNatCasesAuxOn_3022_, lean_object* v_interestingCtors_x3f_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3029_; lean_object* v_res_3030_; 
v_useNatCasesAuxOn_boxed_3029_ = lean_unbox(v_useNatCasesAuxOn_3022_);
v_res_3030_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(v___x_3017_, v_mvarId_3018_, v_majorFVarId_3019_, v_givenNames_3020_, v_ctx_3021_, v_useNatCasesAuxOn_boxed_3029_, v_interestingCtors_x3f_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object* v_mvarId_3031_, lean_object* v_majorFVarId_3032_, lean_object* v_givenNames_3033_, lean_object* v_ctx_3034_, uint8_t v_useNatCasesAuxOn_3035_, lean_object* v_interestingCtors_x3f_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___f_3044_; lean_object* v___x_3045_; 
lean_inc(v_majorFVarId_3032_);
v___x_3042_ = l_Lean_mkFVar(v_majorFVarId_3032_);
v___x_3043_ = lean_box(v_useNatCasesAuxOn_3035_);
lean_inc(v_mvarId_3031_);
v___f_3044_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed), 12, 7);
lean_closure_set(v___f_3044_, 0, v___x_3042_);
lean_closure_set(v___f_3044_, 1, v_mvarId_3031_);
lean_closure_set(v___f_3044_, 2, v_majorFVarId_3032_);
lean_closure_set(v___f_3044_, 3, v_givenNames_3033_);
lean_closure_set(v___f_3044_, 4, v_ctx_3034_);
lean_closure_set(v___f_3044_, 5, v___x_3043_);
lean_closure_set(v___f_3044_, 6, v_interestingCtors_x3f_3036_);
v___x_3045_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_3031_, v___f_3044_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object* v_mvarId_3046_, lean_object* v_majorFVarId_3047_, lean_object* v_givenNames_3048_, lean_object* v_ctx_3049_, lean_object* v_useNatCasesAuxOn_3050_, lean_object* v_interestingCtors_x3f_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3057_; lean_object* v_res_3058_; 
v_useNatCasesAuxOn_boxed_3057_ = lean_unbox(v_useNatCasesAuxOn_3050_);
v_res_3058_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3046_, v_majorFVarId_3047_, v_givenNames_3048_, v_ctx_3049_, v_useNatCasesAuxOn_boxed_3057_, v_interestingCtors_x3f_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_);
lean_dec(v_a_3055_);
lean_dec_ref(v_a_3054_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
return v_res_3058_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3059_; double v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = lean_float_of_nat(v___x_3059_);
return v___x_3060_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_mk_string_unchecked("", 0, 0);
return v___x_3061_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = lean_mk_empty_array_with_capacity(v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object* v_cls_3064_, lean_object* v_msg_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v_ref_3071_; lean_object* v___x_3072_; lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3117_; 
v_ref_3071_ = lean_ctor_get(v___y_3068_, 5);
v___x_3072_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3075_ = v___x_3072_;
v_isShared_3076_ = v_isSharedCheck_3117_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3072_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3117_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3077_; lean_object* v_traceState_3078_; lean_object* v_env_3079_; lean_object* v_nextMacroScope_3080_; lean_object* v_ngen_3081_; lean_object* v_auxDeclNGen_3082_; lean_object* v_cache_3083_; lean_object* v_messages_3084_; lean_object* v_infoState_3085_; lean_object* v_snapshotTasks_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3116_; 
v___x_3077_ = lean_st_ref_take(v___y_3069_);
v_traceState_3078_ = lean_ctor_get(v___x_3077_, 4);
v_env_3079_ = lean_ctor_get(v___x_3077_, 0);
v_nextMacroScope_3080_ = lean_ctor_get(v___x_3077_, 1);
v_ngen_3081_ = lean_ctor_get(v___x_3077_, 2);
v_auxDeclNGen_3082_ = lean_ctor_get(v___x_3077_, 3);
v_cache_3083_ = lean_ctor_get(v___x_3077_, 5);
v_messages_3084_ = lean_ctor_get(v___x_3077_, 6);
v_infoState_3085_ = lean_ctor_get(v___x_3077_, 7);
v_snapshotTasks_3086_ = lean_ctor_get(v___x_3077_, 8);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3088_ = v___x_3077_;
v_isShared_3089_ = v_isSharedCheck_3116_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_snapshotTasks_3086_);
lean_inc(v_infoState_3085_);
lean_inc(v_messages_3084_);
lean_inc(v_cache_3083_);
lean_inc(v_traceState_3078_);
lean_inc(v_auxDeclNGen_3082_);
lean_inc(v_ngen_3081_);
lean_inc(v_nextMacroScope_3080_);
lean_inc(v_env_3079_);
lean_dec(v___x_3077_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3116_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
uint64_t v_tid_3090_; lean_object* v_traces_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3115_; 
v_tid_3090_ = lean_ctor_get_uint64(v_traceState_3078_, sizeof(void*)*1);
v_traces_3091_ = lean_ctor_get(v_traceState_3078_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v_traceState_3078_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3093_ = v_traceState_3078_;
v_isShared_3094_ = v_isSharedCheck_3115_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_traces_3091_);
lean_dec(v_traceState_3078_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3115_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3095_; double v___x_3096_; uint8_t v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3105_; 
v___x_3095_ = lean_box(0);
v___x_3096_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0);
v___x_3097_ = 0;
v___x_3098_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1, &l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1);
v___x_3099_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3099_, 0, v_cls_3064_);
lean_ctor_set(v___x_3099_, 1, v___x_3095_);
lean_ctor_set(v___x_3099_, 2, v___x_3098_);
lean_ctor_set_float(v___x_3099_, sizeof(void*)*3, v___x_3096_);
lean_ctor_set_float(v___x_3099_, sizeof(void*)*3 + 8, v___x_3096_);
lean_ctor_set_uint8(v___x_3099_, sizeof(void*)*3 + 16, v___x_3097_);
v___x_3100_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2);
v___x_3101_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
lean_ctor_set(v___x_3101_, 1, v_a_3073_);
lean_ctor_set(v___x_3101_, 2, v___x_3100_);
lean_inc(v_ref_3071_);
v___x_3102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3102_, 0, v_ref_3071_);
lean_ctor_set(v___x_3102_, 1, v___x_3101_);
v___x_3103_ = l_Lean_PersistentArray_push___redArg(v_traces_3091_, v___x_3102_);
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v___x_3103_);
v___x_3105_ = v___x_3093_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3103_);
lean_ctor_set_uint64(v_reuseFailAlloc_3114_, sizeof(void*)*1, v_tid_3090_);
v___x_3105_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
lean_object* v___x_3107_; 
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 4, v___x_3105_);
v___x_3107_ = v___x_3088_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_env_3079_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v_nextMacroScope_3080_);
lean_ctor_set(v_reuseFailAlloc_3113_, 2, v_ngen_3081_);
lean_ctor_set(v_reuseFailAlloc_3113_, 3, v_auxDeclNGen_3082_);
lean_ctor_set(v_reuseFailAlloc_3113_, 4, v___x_3105_);
lean_ctor_set(v_reuseFailAlloc_3113_, 5, v_cache_3083_);
lean_ctor_set(v_reuseFailAlloc_3113_, 6, v_messages_3084_);
lean_ctor_set(v_reuseFailAlloc_3113_, 7, v_infoState_3085_);
lean_ctor_set(v_reuseFailAlloc_3113_, 8, v_snapshotTasks_3086_);
v___x_3107_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3108_ = lean_st_ref_set(v___y_3069_, v___x_3107_);
v___x_3109_ = lean_box(0);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v___x_3109_);
v___x_3111_ = v___x_3075_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3109_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object* v_cls_3118_, lean_object* v_msg_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v_cls_3118_, v_msg_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3122_);
lean_dec(v___y_3121_);
lean_dec_ref(v___y_3120_);
return v_res_3125_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_mk_string_unchecked("not applicable to the given hypothesis", 38, 38);
return v___x_3126_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__0, &l_Lean_Meta_Cases_cases___lam__0___closed__0_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__0);
v___x_3128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
return v___x_3128_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3129_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__1, &l_Lean_Meta_Cases_cases___lam__0___closed__1_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__1);
v___x_3130_ = l_Lean_MessageData_ofFormat(v___x_3129_);
return v___x_3130_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__2, &l_Lean_Meta_Cases_cases___lam__0___closed__2_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__2);
v___x_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
return v___x_3132_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_3133_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3134_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_3135_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__6, &l_Lean_Meta_Cases_cases___lam__0___closed__6_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__6);
v___x_3137_ = l_Lean_Name_mkStr1(v___x_3136_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_mk_string_unchecked("after generalizeIndices\n", 24, 24);
return v___x_3138_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3139_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__8, &l_Lean_Meta_Cases_cases___lam__0___closed__8_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__8);
v___x_3140_ = l_Lean_stringToMessageData(v___x_3139_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object* v_mvarId_3141_, lean_object* v___x_3142_, lean_object* v_majorFVarId_3143_, lean_object* v_givenNames_3144_, lean_object* v_interestingCtors_x3f_3145_, lean_object* v___x_3146_, uint8_t v_useNatCasesAuxOn_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___x_3153_; 
lean_inc(v___x_3142_);
lean_inc(v_mvarId_3141_);
v___x_3153_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3141_, v___x_3142_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v___x_3154_; 
lean_dec_ref(v___x_3153_);
lean_inc(v_majorFVarId_3143_);
v___x_3154_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_3143_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_object* v_a_3155_; 
v_a_3155_ = lean_ctor_get(v___x_3154_, 0);
lean_inc(v_a_3155_);
lean_dec_ref(v___x_3154_);
if (lean_obj_tag(v_a_3155_) == 0)
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_dec_ref(v___x_3146_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
lean_dec(v_majorFVarId_3143_);
v___x_3156_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__3, &l_Lean_Meta_Cases_cases___lam__0___closed__3_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__3);
v___x_3157_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3142_, v_mvarId_3141_, v___x_3156_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
return v___x_3157_;
}
else
{
lean_object* v_val_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3222_; 
lean_dec(v___x_3142_);
v_val_3158_ = lean_ctor_get(v_a_3155_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v_a_3155_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3160_ = v_a_3155_;
v_isShared_3161_ = v_isSharedCheck_3222_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_val_3158_);
lean_dec(v_a_3155_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3222_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3162_; 
lean_inc(v_val_3158_);
v___x_3162_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_val_3158_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; uint8_t v___x_3164_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
lean_inc(v_a_3163_);
lean_dec_ref(v___x_3162_);
v___x_3164_ = lean_unbox(v_a_3163_);
if (v___x_3164_ == 0)
{
lean_object* v___x_3165_; 
v___x_3165_ = l_Lean_Meta_generalizeIndices(v_mvarId_3141_, v_majorFVarId_3143_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v_a_3166_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v_options_3181_; uint8_t v_hasTrace_3182_; 
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
lean_inc(v_a_3166_);
lean_dec_ref(v___x_3165_);
v_options_3181_ = lean_ctor_get(v___y_3150_, 2);
v_hasTrace_3182_ = lean_ctor_get_uint8(v_options_3181_, sizeof(void*)*1);
if (v_hasTrace_3182_ == 0)
{
lean_del_object(v___x_3160_);
lean_dec_ref(v___x_3146_);
v___y_3168_ = v___y_3148_;
v___y_3169_ = v___y_3149_;
v___y_3170_ = v___y_3150_;
v___y_3171_ = v___y_3151_;
goto v___jp_3167_;
}
else
{
lean_object* v_inheritedTraceOptions_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; uint8_t v___x_3189_; 
v_inheritedTraceOptions_3183_ = lean_ctor_get(v___y_3150_, 13);
v___x_3184_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__4, &l_Lean_Meta_Cases_cases___lam__0___closed__4_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__4);
v___x_3185_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__5, &l_Lean_Meta_Cases_cases___lam__0___closed__5_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__5);
v___x_3186_ = l_Lean_Name_mkStr3(v___x_3184_, v___x_3185_, v___x_3146_);
v___x_3187_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__7, &l_Lean_Meta_Cases_cases___lam__0___closed__7_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__7);
lean_inc(v___x_3186_);
v___x_3188_ = l_Lean_Name_append(v___x_3187_, v___x_3186_);
v___x_3189_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3183_, v_options_3181_, v___x_3188_);
lean_dec(v___x_3188_);
if (v___x_3189_ == 0)
{
lean_dec(v___x_3186_);
lean_del_object(v___x_3160_);
v___y_3168_ = v___y_3148_;
v___y_3169_ = v___y_3149_;
v___y_3170_ = v___y_3150_;
v___y_3171_ = v___y_3151_;
goto v___jp_3167_;
}
else
{
lean_object* v_mvarId_3190_; lean_object* v___x_3191_; lean_object* v___x_3193_; 
v_mvarId_3190_ = lean_ctor_get(v_a_3166_, 0);
v___x_3191_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__9, &l_Lean_Meta_Cases_cases___lam__0___closed__9_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__9);
lean_inc(v_mvarId_3190_);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v_mvarId_3190_);
v___x_3193_ = v___x_3160_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_mvarId_3190_);
v___x_3193_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3191_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v___x_3186_, v___x_3194_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_dec_ref(v___x_3195_);
v___y_3168_ = v___y_3148_;
v___y_3169_ = v___y_3149_;
v___y_3170_ = v___y_3150_;
v___y_3171_ = v___y_3151_;
goto v___jp_3167_;
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_dec(v_a_3166_);
lean_dec(v_a_3163_);
lean_dec(v_val_3158_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3195_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3195_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
}
}
v___jp_3167_:
{
lean_object* v_mvarId_3172_; lean_object* v_fvarId_3173_; lean_object* v_numEqs_3174_; uint8_t v___x_3175_; lean_object* v___x_3176_; 
v_mvarId_3172_ = lean_ctor_get(v_a_3166_, 0);
v_fvarId_3173_ = lean_ctor_get(v_a_3166_, 2);
v_numEqs_3174_ = lean_ctor_get(v_a_3166_, 3);
lean_inc(v_numEqs_3174_);
v___x_3175_ = lean_unbox(v_a_3163_);
lean_dec(v_a_3163_);
lean_inc(v_fvarId_3173_);
lean_inc(v_mvarId_3172_);
v___x_3176_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3172_, v_fvarId_3173_, v_givenNames_3144_, v_val_3158_, v___x_3175_, v_interestingCtors_x3f_3145_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3178_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref(v___x_3176_);
v___x_3178_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_a_3166_, v_a_3177_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v_a_3166_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3180_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref(v___x_3178_);
v___x_3180_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_3174_, v_a_3179_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v_a_3179_);
return v___x_3180_;
}
else
{
lean_dec(v_numEqs_3174_);
return v___x_3178_;
}
}
else
{
lean_dec(v_numEqs_3174_);
lean_dec(v_a_3166_);
return v___x_3176_;
}
}
}
else
{
lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3212_; 
lean_dec(v_a_3163_);
lean_del_object(v___x_3160_);
lean_dec(v_val_3158_);
lean_dec_ref(v___x_3146_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
v_a_3205_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3207_ = v___x_3165_;
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v___x_3165_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3205_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
}
else
{
lean_object* v___x_3213_; 
lean_dec(v_a_3163_);
lean_del_object(v___x_3160_);
lean_dec_ref(v___x_3146_);
v___x_3213_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3141_, v_majorFVarId_3143_, v_givenNames_3144_, v_val_3158_, v_useNatCasesAuxOn_3147_, v_interestingCtors_x3f_3145_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_);
return v___x_3213_;
}
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_del_object(v___x_3160_);
lean_dec(v_val_3158_);
lean_dec_ref(v___x_3146_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
lean_dec(v_majorFVarId_3143_);
lean_dec(v_mvarId_3141_);
v_a_3214_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3162_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3162_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
}
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec_ref(v___x_3146_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
lean_dec(v_majorFVarId_3143_);
lean_dec(v___x_3142_);
lean_dec(v_mvarId_3141_);
v_a_3223_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_3154_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3154_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_dec_ref(v___x_3146_);
lean_dec(v_interestingCtors_x3f_3145_);
lean_dec_ref(v_givenNames_3144_);
lean_dec(v_majorFVarId_3143_);
lean_dec(v___x_3142_);
lean_dec(v_mvarId_3141_);
v_a_3231_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3153_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3153_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object* v_mvarId_3239_, lean_object* v___x_3240_, lean_object* v_majorFVarId_3241_, lean_object* v_givenNames_3242_, lean_object* v_interestingCtors_x3f_3243_, lean_object* v___x_3244_, lean_object* v_useNatCasesAuxOn_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3251_; lean_object* v_res_3252_; 
v_useNatCasesAuxOn_boxed_3251_ = lean_unbox(v_useNatCasesAuxOn_3245_);
v_res_3252_ = l_Lean_Meta_Cases_cases___lam__0(v_mvarId_3239_, v___x_3240_, v_majorFVarId_3241_, v_givenNames_3242_, v_interestingCtors_x3f_3243_, v___x_3244_, v_useNatCasesAuxOn_boxed_3251_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3248_);
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
return v_res_3252_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___closed__0(void){
_start:
{
lean_object* v___x_3253_; 
v___x_3253_ = lean_mk_string_unchecked("cases", 5, 5);
return v___x_3253_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___closed__1(void){
_start:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3254_ = lean_obj_once(&l_Lean_Meta_Cases_cases___closed__0, &l_Lean_Meta_Cases_cases___closed__0_once, _init_l_Lean_Meta_Cases_cases___closed__0);
v___x_3255_ = l_Lean_Name_mkStr1(v___x_3254_);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object* v_mvarId_3256_, lean_object* v_majorFVarId_3257_, lean_object* v_givenNames_3258_, uint8_t v_useNatCasesAuxOn_3259_, lean_object* v_interestingCtors_x3f_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___f_3269_; lean_object* v___x_3270_; 
v___x_3266_ = lean_obj_once(&l_Lean_Meta_Cases_cases___closed__0, &l_Lean_Meta_Cases_cases___closed__0_once, _init_l_Lean_Meta_Cases_cases___closed__0);
v___x_3267_ = lean_obj_once(&l_Lean_Meta_Cases_cases___closed__1, &l_Lean_Meta_Cases_cases___closed__1_once, _init_l_Lean_Meta_Cases_cases___closed__1);
v___x_3268_ = lean_box(v_useNatCasesAuxOn_3259_);
lean_inc(v_mvarId_3256_);
v___f_3269_ = lean_alloc_closure((void*)(l_Lean_Meta_Cases_cases___lam__0___boxed), 12, 7);
lean_closure_set(v___f_3269_, 0, v_mvarId_3256_);
lean_closure_set(v___f_3269_, 1, v___x_3267_);
lean_closure_set(v___f_3269_, 2, v_majorFVarId_3257_);
lean_closure_set(v___f_3269_, 3, v_givenNames_3258_);
lean_closure_set(v___f_3269_, 4, v_interestingCtors_x3f_3260_);
lean_closure_set(v___f_3269_, 5, v___x_3266_);
lean_closure_set(v___f_3269_, 6, v___x_3268_);
v___x_3270_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_3256_, v___f_3269_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_);
if (lean_obj_tag(v___x_3270_) == 0)
{
return v___x_3270_;
}
else
{
lean_object* v_a_3271_; uint8_t v___y_3273_; uint8_t v___x_3275_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
v___x_3275_ = l_Lean_Exception_isInterrupt(v_a_3271_);
if (v___x_3275_ == 0)
{
uint8_t v___x_3276_; 
lean_inc(v_a_3271_);
v___x_3276_ = l_Lean_Exception_isRuntime(v_a_3271_);
v___y_3273_ = v___x_3276_;
goto v___jp_3272_;
}
else
{
v___y_3273_ = v___x_3275_;
goto v___jp_3272_;
}
v___jp_3272_:
{
if (v___y_3273_ == 0)
{
lean_object* v___x_3274_; 
lean_dec_ref(v___x_3270_);
v___x_3274_ = l_Lean_Meta_throwNestedTacticEx___redArg(v___x_3267_, v_a_3271_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_);
return v___x_3274_;
}
else
{
lean_dec(v_a_3271_);
return v___x_3270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object* v_mvarId_3277_, lean_object* v_majorFVarId_3278_, lean_object* v_givenNames_3279_, lean_object* v_useNatCasesAuxOn_3280_, lean_object* v_interestingCtors_x3f_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3287_; lean_object* v_res_3288_; 
v_useNatCasesAuxOn_boxed_3287_ = lean_unbox(v_useNatCasesAuxOn_3280_);
v_res_3288_ = l_Lean_Meta_Cases_cases(v_mvarId_3277_, v_majorFVarId_3278_, v_givenNames_3279_, v_useNatCasesAuxOn_boxed_3287_, v_interestingCtors_x3f_3281_, v_a_3282_, v_a_3283_, v_a_3284_, v_a_3285_);
lean_dec(v_a_3285_);
lean_dec_ref(v_a_3284_);
lean_dec(v_a_3283_);
lean_dec_ref(v_a_3282_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object* v_mvarId_3289_, lean_object* v_majorFVarId_3290_, lean_object* v_givenNames_3291_, uint8_t v_useNatCasesAuxOn_3292_, lean_object* v_interestingCtors_x3f_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_){
_start:
{
lean_object* v___x_3299_; 
v___x_3299_ = l_Lean_Meta_Cases_cases(v_mvarId_3289_, v_majorFVarId_3290_, v_givenNames_3291_, v_useNatCasesAuxOn_3292_, v_interestingCtors_x3f_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object* v_mvarId_3300_, lean_object* v_majorFVarId_3301_, lean_object* v_givenNames_3302_, lean_object* v_useNatCasesAuxOn_3303_, lean_object* v_interestingCtors_x3f_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3310_; lean_object* v_res_3311_; 
v_useNatCasesAuxOn_boxed_3310_ = lean_unbox(v_useNatCasesAuxOn_3303_);
v_res_3311_ = l_Lean_MVarId_cases(v_mvarId_3300_, v_majorFVarId_3301_, v_givenNames_3302_, v_useNatCasesAuxOn_boxed_3310_, v_interestingCtors_x3f_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_);
lean_dec(v_a_3308_);
lean_dec_ref(v_a_3307_);
lean_dec(v_a_3306_);
lean_dec_ref(v_a_3305_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object* v_x_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Lean_Meta_saveState___redArg(v___y_3314_, v___y_3316_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v_a_3319_; lean_object* v___x_3320_; 
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref(v___x_3318_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
lean_inc(v___y_3314_);
lean_inc_ref(v___y_3313_);
v___x_3320_ = lean_apply_5(v_x_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, lean_box(0));
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v_a_3319_);
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3323_ = v___x_3320_;
v_isShared_3324_ = v_isSharedCheck_3329_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3320_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3329_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3325_; lean_object* v___x_3327_; 
v___x_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3325_, 0, v_a_3321_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3325_);
v___x_3327_ = v___x_3323_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3359_; 
v_a_3330_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3332_ = v___x_3320_;
v_isShared_3333_ = v_isSharedCheck_3359_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3320_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3359_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
uint8_t v___y_3335_; uint8_t v___x_3357_; 
v___x_3357_ = l_Lean_Exception_isInterrupt(v_a_3330_);
if (v___x_3357_ == 0)
{
uint8_t v___x_3358_; 
lean_inc(v_a_3330_);
v___x_3358_ = l_Lean_Exception_isRuntime(v_a_3330_);
v___y_3335_ = v___x_3358_;
goto v___jp_3334_;
}
else
{
v___y_3335_ = v___x_3357_;
goto v___jp_3334_;
}
v___jp_3334_:
{
if (v___y_3335_ == 0)
{
lean_object* v___x_3336_; 
lean_del_object(v___x_3332_);
lean_dec(v_a_3330_);
v___x_3336_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3319_, v___y_3314_, v___y_3316_);
lean_dec(v_a_3319_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3344_; 
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3344_ == 0)
{
lean_object* v_unused_3345_; 
v_unused_3345_ = lean_ctor_get(v___x_3336_, 0);
lean_dec(v_unused_3345_);
v___x_3338_ = v___x_3336_;
v_isShared_3339_ = v_isSharedCheck_3344_;
goto v_resetjp_3337_;
}
else
{
lean_dec(v___x_3336_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3344_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3340_; lean_object* v___x_3342_; 
v___x_3340_ = lean_box(0);
if (v_isShared_3339_ == 0)
{
lean_ctor_set(v___x_3338_, 0, v___x_3340_);
v___x_3342_ = v___x_3338_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
v_a_3346_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3336_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3336_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
lean_object* v___x_3355_; 
lean_dec(v_a_3319_);
if (v_isShared_3333_ == 0)
{
v___x_3355_ = v___x_3332_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3330_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec_ref(v_x_3312_);
v_a_3360_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3318_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3318_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object* v_x_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_);
lean_dec(v___y_3372_);
lean_dec_ref(v___y_3371_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object* v_00_u03b1_3375_, lean_object* v_x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object* v_00_u03b1_3383_, lean_object* v_x_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(v_00_u03b1_3383_, v_x_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
if (lean_obj_tag(v_a_3391_) == 0)
{
lean_object* v___x_3393_; 
v___x_3393_ = l_List_reverse___redArg(v_a_3392_);
return v___x_3393_;
}
else
{
lean_object* v_head_3394_; lean_object* v_toInductionSubgoal_3395_; lean_object* v_tail_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3405_; 
v_head_3394_ = lean_ctor_get(v_a_3391_, 0);
v_toInductionSubgoal_3395_ = lean_ctor_get(v_head_3394_, 0);
lean_inc_ref(v_toInductionSubgoal_3395_);
v_tail_3396_ = lean_ctor_get(v_a_3391_, 1);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_a_3391_);
if (v_isSharedCheck_3405_ == 0)
{
lean_object* v_unused_3406_; 
v_unused_3406_ = lean_ctor_get(v_a_3391_, 0);
lean_dec(v_unused_3406_);
v___x_3398_ = v_a_3391_;
v_isShared_3399_ = v_isSharedCheck_3405_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_tail_3396_);
lean_dec(v_a_3391_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3405_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v_mvarId_3400_; lean_object* v___x_3402_; 
v_mvarId_3400_ = lean_ctor_get(v_toInductionSubgoal_3395_, 0);
lean_inc(v_mvarId_3400_);
lean_dec_ref(v_toInductionSubgoal_3395_);
if (v_isShared_3399_ == 0)
{
lean_ctor_set(v___x_3398_, 1, v_a_3392_);
lean_ctor_set(v___x_3398_, 0, v_mvarId_3400_);
v___x_3402_ = v___x_3398_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_mvarId_3400_);
lean_ctor_set(v_reuseFailAlloc_3404_, 1, v_a_3392_);
v___x_3402_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
v_a_3391_ = v_tail_3396_;
v_a_3392_ = v___x_3402_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object* v_mvarId_3407_, lean_object* v___x_3408_, lean_object* v___x_3409_, uint8_t v___x_3410_, lean_object* v___x_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v___x_3417_; 
v___x_3417_ = l_Lean_Meta_Cases_cases(v_mvarId_3407_, v___x_3408_, v___x_3409_, v___x_3410_, v___x_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3428_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3420_ = v___x_3417_;
v_isShared_3421_ = v_isSharedCheck_3428_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3417_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3428_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3426_; 
v___x_3422_ = lean_array_to_list(v_a_3418_);
v___x_3423_ = lean_box(0);
v___x_3424_ = l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(v___x_3422_, v___x_3423_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v___x_3424_);
v___x_3426_ = v___x_3420_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___x_3424_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
else
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3436_; 
v_a_3429_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3431_ = v___x_3417_;
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3417_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3434_; 
if (v_isShared_3432_ == 0)
{
v___x_3434_ = v___x_3431_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3429_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object* v_mvarId_3437_, lean_object* v___x_3438_, lean_object* v___x_3439_, lean_object* v___x_3440_, lean_object* v___x_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
uint8_t v___x_6516__boxed_3447_; lean_object* v_res_3448_; 
v___x_6516__boxed_3447_ = lean_unbox(v___x_3440_);
v_res_3448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(v_mvarId_3437_, v___x_3438_, v___x_3439_, v___x_6516__boxed_3447_, v___x_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec(v___y_3443_);
lean_dec_ref(v___y_3442_);
return v_res_3448_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v___x_3449_ = lean_box(0);
v___x_3450_ = lean_box(0);
v___x_3451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
lean_ctor_set(v___x_3451_, 1, v___x_3449_);
return v___x_3451_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = lean_unsigned_to_nat(0u);
v___x_3453_ = lean_mk_empty_array_with_capacity(v___x_3452_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object* v_p_3454_, lean_object* v_mvarId_3455_, lean_object* v_as_3456_, size_t v_sz_3457_, size_t v_i_3458_, lean_object* v_b_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_){
_start:
{
uint8_t v___x_3465_; 
v___x_3465_ = lean_usize_dec_lt(v_i_3458_, v_sz_3457_);
if (v___x_3465_ == 0)
{
lean_object* v___x_3466_; 
lean_dec(v_mvarId_3455_);
lean_dec_ref(v_p_3454_);
v___x_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3466_, 0, v_b_3459_);
return v___x_3466_;
}
else
{
lean_object* v_snd_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3534_; 
v_snd_3467_ = lean_ctor_get(v_b_3459_, 1);
v_isSharedCheck_3534_ = !lean_is_exclusive(v_b_3459_);
if (v_isSharedCheck_3534_ == 0)
{
lean_object* v_unused_3535_; 
v_unused_3535_ = lean_ctor_get(v_b_3459_, 0);
lean_dec(v_unused_3535_);
v___x_3469_ = v_b_3459_;
v_isShared_3470_ = v_isSharedCheck_3534_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_snd_3467_);
lean_dec(v_b_3459_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3534_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3471_; lean_object* v_a_3473_; lean_object* v_a_3480_; 
v___x_3471_ = lean_box(0);
v_a_3480_ = lean_array_uget(v_as_3456_, v_i_3458_);
if (lean_obj_tag(v_a_3480_) == 0)
{
v_a_3473_ = v_snd_3467_;
goto v___jp_3472_;
}
else
{
lean_object* v_val_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3533_; 
v_val_3481_ = lean_ctor_get(v_a_3480_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v_a_3480_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3483_ = v_a_3480_;
v_isShared_3484_ = v_isSharedCheck_3533_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_val_3481_);
lean_dec(v_a_3480_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3533_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; 
lean_inc_ref(v_p_3454_);
lean_inc(v___y_3463_);
lean_inc_ref(v___y_3462_);
lean_inc(v___y_3461_);
lean_inc_ref(v___y_3460_);
lean_inc(v_val_3481_);
v___x_3485_ = lean_apply_6(v_p_3454_, v_val_3481_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, lean_box(0));
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; uint8_t v___x_3489_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
lean_inc(v_a_3486_);
lean_dec_ref(v___x_3485_);
v___x_3487_ = lean_box(0);
v___x_3488_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0);
v___x_3489_ = lean_unbox(v_a_3486_);
lean_dec(v_a_3486_);
if (v___x_3489_ == 0)
{
lean_del_object(v___x_3483_);
lean_dec(v_val_3481_);
lean_dec(v_snd_3467_);
v_a_3473_ = v___x_3488_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; lean_object* v___x_3493_; lean_object* v___f_3494_; lean_object* v___x_3495_; 
v___x_3490_ = l_Lean_LocalDecl_fvarId(v_val_3481_);
lean_dec(v_val_3481_);
v___x_3491_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1);
v___x_3492_ = 0;
v___x_3493_ = lean_box(v___x_3492_);
lean_inc(v_mvarId_3455_);
v___f_3494_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3494_, 0, v_mvarId_3455_);
lean_closure_set(v___f_3494_, 1, v___x_3490_);
lean_closure_set(v___f_3494_, 2, v___x_3491_);
lean_closure_set(v___f_3494_, 3, v___x_3493_);
lean_closure_set(v___f_3494_, 4, v___x_3471_);
v___x_3495_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3494_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3516_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3498_ = v___x_3495_;
v_isShared_3499_ = v_isSharedCheck_3516_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3495_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3516_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
if (lean_obj_tag(v_a_3496_) == 0)
{
lean_del_object(v___x_3498_);
lean_del_object(v___x_3483_);
lean_dec(v_snd_3467_);
v_a_3473_ = v___x_3488_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3501_; 
lean_del_object(v___x_3469_);
lean_dec(v_mvarId_3455_);
lean_dec_ref(v_p_3454_);
lean_inc_ref(v_a_3496_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v_a_3496_);
v___x_3501_ = v___x_3483_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3513_; 
v_isSharedCheck_3513_ = !lean_is_exclusive(v_a_3496_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v_a_3496_, 0);
lean_dec(v_unused_3514_);
v___x_3503_ = v_a_3496_;
v_isShared_3504_ = v_isSharedCheck_3513_;
goto v_resetjp_3502_;
}
else
{
lean_dec(v_a_3496_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3513_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v___x_3507_; 
v___x_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3501_);
lean_ctor_set(v___x_3505_, 1, v___x_3487_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 0, v___x_3505_);
v___x_3507_ = v___x_3503_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3505_);
v___x_3507_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
lean_object* v___x_3508_; lean_object* v___x_3510_; 
v___x_3508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
lean_ctor_set(v___x_3508_, 1, v_snd_3467_);
if (v_isShared_3499_ == 0)
{
lean_ctor_set(v___x_3498_, 0, v___x_3508_);
v___x_3510_ = v___x_3498_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3508_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_del_object(v___x_3483_);
lean_del_object(v___x_3469_);
lean_dec(v_snd_3467_);
lean_dec(v_mvarId_3455_);
lean_dec_ref(v_p_3454_);
v_a_3517_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3495_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3495_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
else
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
lean_del_object(v___x_3483_);
lean_dec(v_val_3481_);
lean_del_object(v___x_3469_);
lean_dec(v_snd_3467_);
lean_dec(v_mvarId_3455_);
lean_dec_ref(v_p_3454_);
v_a_3525_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3527_ = v___x_3485_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3485_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
}
v___jp_3472_:
{
lean_object* v___x_3475_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v_a_3473_);
lean_ctor_set(v___x_3469_, 0, v___x_3471_);
v___x_3475_ = v___x_3469_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3471_);
lean_ctor_set(v_reuseFailAlloc_3479_, 1, v_a_3473_);
v___x_3475_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
size_t v___x_3476_; size_t v___x_3477_; 
v___x_3476_ = ((size_t)1ULL);
v___x_3477_ = lean_usize_add(v_i_3458_, v___x_3476_);
v_i_3458_ = v___x_3477_;
v_b_3459_ = v___x_3475_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object* v_p_3536_, lean_object* v_mvarId_3537_, lean_object* v_as_3538_, lean_object* v_sz_3539_, lean_object* v_i_3540_, lean_object* v_b_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_){
_start:
{
size_t v_sz_boxed_3547_; size_t v_i_boxed_3548_; lean_object* v_res_3549_; 
v_sz_boxed_3547_ = lean_unbox_usize(v_sz_3539_);
lean_dec(v_sz_3539_);
v_i_boxed_3548_ = lean_unbox_usize(v_i_3540_);
lean_dec(v_i_3540_);
v_res_3549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3536_, v_mvarId_3537_, v_as_3538_, v_sz_boxed_3547_, v_i_boxed_3548_, v_b_3541_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec_ref(v_as_3538_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object* v_p_3550_, lean_object* v_mvarId_3551_, lean_object* v_as_3552_, size_t v_sz_3553_, size_t v_i_3554_, lean_object* v_b_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_){
_start:
{
uint8_t v___x_3561_; 
v___x_3561_ = lean_usize_dec_lt(v_i_3554_, v_sz_3553_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; 
lean_dec(v_mvarId_3551_);
lean_dec_ref(v_p_3550_);
v___x_3562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3562_, 0, v_b_3555_);
return v___x_3562_;
}
else
{
lean_object* v_snd_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3630_; 
v_snd_3563_ = lean_ctor_get(v_b_3555_, 1);
v_isSharedCheck_3630_ = !lean_is_exclusive(v_b_3555_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; 
v_unused_3631_ = lean_ctor_get(v_b_3555_, 0);
lean_dec(v_unused_3631_);
v___x_3565_ = v_b_3555_;
v_isShared_3566_ = v_isSharedCheck_3630_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_snd_3563_);
lean_dec(v_b_3555_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3630_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; lean_object* v_a_3569_; lean_object* v_a_3576_; 
v___x_3567_ = lean_box(0);
v_a_3576_ = lean_array_uget(v_as_3552_, v_i_3554_);
if (lean_obj_tag(v_a_3576_) == 0)
{
v_a_3569_ = v_snd_3563_;
goto v___jp_3568_;
}
else
{
lean_object* v_val_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3629_; 
v_val_3577_ = lean_ctor_get(v_a_3576_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_a_3576_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3579_ = v_a_3576_;
v_isShared_3580_ = v_isSharedCheck_3629_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_val_3577_);
lean_dec(v_a_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3629_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; 
lean_inc_ref(v_p_3550_);
lean_inc(v___y_3559_);
lean_inc_ref(v___y_3558_);
lean_inc(v___y_3557_);
lean_inc_ref(v___y_3556_);
lean_inc(v_val_3577_);
v___x_3581_ = lean_apply_6(v_p_3550_, v_val_3577_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_, lean_box(0));
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref(v___x_3581_);
v___x_3583_ = lean_box(0);
v___x_3584_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0);
v___x_3585_ = lean_unbox(v_a_3582_);
lean_dec(v_a_3582_);
if (v___x_3585_ == 0)
{
lean_del_object(v___x_3579_);
lean_dec(v_val_3577_);
lean_dec(v_snd_3563_);
v_a_3569_ = v___x_3584_;
goto v___jp_3568_;
}
else
{
lean_object* v___x_3586_; lean_object* v___x_3587_; uint8_t v___x_3588_; lean_object* v___x_3589_; lean_object* v___f_3590_; lean_object* v___x_3591_; 
v___x_3586_ = l_Lean_LocalDecl_fvarId(v_val_3577_);
lean_dec(v_val_3577_);
v___x_3587_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1);
v___x_3588_ = 0;
v___x_3589_ = lean_box(v___x_3588_);
lean_inc(v_mvarId_3551_);
v___f_3590_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3590_, 0, v_mvarId_3551_);
lean_closure_set(v___f_3590_, 1, v___x_3586_);
lean_closure_set(v___f_3590_, 2, v___x_3587_);
lean_closure_set(v___f_3590_, 3, v___x_3589_);
lean_closure_set(v___f_3590_, 4, v___x_3567_);
v___x_3591_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3590_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3612_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3594_ = v___x_3591_;
v_isShared_3595_ = v_isSharedCheck_3612_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3591_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3612_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
if (lean_obj_tag(v_a_3592_) == 0)
{
lean_del_object(v___x_3594_);
lean_del_object(v___x_3579_);
lean_dec(v_snd_3563_);
v_a_3569_ = v___x_3584_;
goto v___jp_3568_;
}
else
{
lean_object* v___x_3597_; 
lean_del_object(v___x_3565_);
lean_dec(v_mvarId_3551_);
lean_dec_ref(v_p_3550_);
lean_inc_ref(v_a_3592_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 0, v_a_3592_);
v___x_3597_ = v___x_3579_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3609_; 
v_isSharedCheck_3609_ = !lean_is_exclusive(v_a_3592_);
if (v_isSharedCheck_3609_ == 0)
{
lean_object* v_unused_3610_; 
v_unused_3610_ = lean_ctor_get(v_a_3592_, 0);
lean_dec(v_unused_3610_);
v___x_3599_ = v_a_3592_;
v_isShared_3600_ = v_isSharedCheck_3609_;
goto v_resetjp_3598_;
}
else
{
lean_dec(v_a_3592_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3609_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3601_; lean_object* v___x_3603_; 
v___x_3601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3597_);
lean_ctor_set(v___x_3601_, 1, v___x_3583_);
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v___x_3601_);
v___x_3603_ = v___x_3599_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3601_);
v___x_3603_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
lean_object* v___x_3604_; lean_object* v___x_3606_; 
v___x_3604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
lean_ctor_set(v___x_3604_, 1, v_snd_3563_);
if (v_isShared_3595_ == 0)
{
lean_ctor_set(v___x_3594_, 0, v___x_3604_);
v___x_3606_ = v___x_3594_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3604_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_del_object(v___x_3579_);
lean_del_object(v___x_3565_);
lean_dec(v_snd_3563_);
lean_dec(v_mvarId_3551_);
lean_dec_ref(v_p_3550_);
v_a_3613_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3591_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3591_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
lean_del_object(v___x_3579_);
lean_dec(v_val_3577_);
lean_del_object(v___x_3565_);
lean_dec(v_snd_3563_);
lean_dec(v_mvarId_3551_);
lean_dec_ref(v_p_3550_);
v_a_3621_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3623_ = v___x_3581_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3581_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3621_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
}
v___jp_3568_:
{
lean_object* v___x_3571_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v_a_3569_);
lean_ctor_set(v___x_3565_, 0, v___x_3567_);
v___x_3571_ = v___x_3565_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3567_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v_a_3569_);
v___x_3571_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
size_t v___x_3572_; size_t v___x_3573_; lean_object* v___x_3574_; 
v___x_3572_ = ((size_t)1ULL);
v___x_3573_ = lean_usize_add(v_i_3554_, v___x_3572_);
v___x_3574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3550_, v_mvarId_3551_, v_as_3552_, v_sz_3553_, v___x_3573_, v___x_3571_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_);
return v___x_3574_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object* v_p_3632_, lean_object* v_mvarId_3633_, lean_object* v_as_3634_, lean_object* v_sz_3635_, lean_object* v_i_3636_, lean_object* v_b_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
size_t v_sz_boxed_3643_; size_t v_i_boxed_3644_; lean_object* v_res_3645_; 
v_sz_boxed_3643_ = lean_unbox_usize(v_sz_3635_);
lean_dec(v_sz_3635_);
v_i_boxed_3644_ = lean_unbox_usize(v_i_3636_);
lean_dec(v_i_3636_);
v_res_3645_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3632_, v_mvarId_3633_, v_as_3634_, v_sz_boxed_3643_, v_i_boxed_3644_, v_b_3637_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec_ref(v_as_3634_);
return v_res_3645_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3646_ = lean_box(0);
v___x_3647_ = lean_box(0);
v___x_3648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3647_);
lean_ctor_set(v___x_3648_, 1, v___x_3646_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object* v_p_3649_, lean_object* v_mvarId_3650_, lean_object* v_as_3651_, size_t v_sz_3652_, size_t v_i_3653_, lean_object* v_b_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
uint8_t v___x_3660_; 
v___x_3660_ = lean_usize_dec_lt(v_i_3653_, v_sz_3652_);
if (v___x_3660_ == 0)
{
lean_object* v___x_3661_; 
lean_dec(v_mvarId_3650_);
lean_dec_ref(v_p_3649_);
v___x_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3661_, 0, v_b_3654_);
return v___x_3661_;
}
else
{
lean_object* v_snd_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3730_; 
v_snd_3662_ = lean_ctor_get(v_b_3654_, 1);
v_isSharedCheck_3730_ = !lean_is_exclusive(v_b_3654_);
if (v_isSharedCheck_3730_ == 0)
{
lean_object* v_unused_3731_; 
v_unused_3731_ = lean_ctor_get(v_b_3654_, 0);
lean_dec(v_unused_3731_);
v___x_3664_ = v_b_3654_;
v_isShared_3665_ = v_isSharedCheck_3730_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_snd_3662_);
lean_dec(v_b_3654_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3730_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3666_; lean_object* v_a_3668_; lean_object* v_a_3675_; 
v___x_3666_ = lean_box(0);
v_a_3675_ = lean_array_uget(v_as_3651_, v_i_3653_);
if (lean_obj_tag(v_a_3675_) == 0)
{
v_a_3668_ = v_snd_3662_;
goto v___jp_3667_;
}
else
{
lean_object* v_val_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3729_; 
v_val_3676_ = lean_ctor_get(v_a_3675_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_a_3675_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3678_ = v_a_3675_;
v_isShared_3679_ = v_isSharedCheck_3729_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_val_3676_);
lean_dec(v_a_3675_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3729_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3680_; 
lean_inc_ref(v_p_3649_);
lean_inc(v___y_3658_);
lean_inc_ref(v___y_3657_);
lean_inc(v___y_3656_);
lean_inc_ref(v___y_3655_);
lean_inc(v_val_3676_);
v___x_3680_ = lean_apply_6(v_p_3649_, v_val_3676_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_, lean_box(0));
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; uint8_t v___x_3684_; 
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref(v___x_3680_);
v___x_3682_ = lean_box(0);
v___x_3683_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0);
v___x_3684_ = lean_unbox(v_a_3681_);
lean_dec(v_a_3681_);
if (v___x_3684_ == 0)
{
lean_del_object(v___x_3678_);
lean_dec(v_val_3676_);
lean_dec(v_snd_3662_);
v_a_3668_ = v___x_3683_;
goto v___jp_3667_;
}
else
{
lean_object* v___x_3685_; lean_object* v___x_3686_; uint8_t v___x_3687_; lean_object* v___x_3688_; lean_object* v___f_3689_; lean_object* v___x_3690_; 
v___x_3685_ = l_Lean_LocalDecl_fvarId(v_val_3676_);
lean_dec(v_val_3676_);
v___x_3686_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1);
v___x_3687_ = 0;
v___x_3688_ = lean_box(v___x_3687_);
lean_inc(v_mvarId_3650_);
v___f_3689_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3689_, 0, v_mvarId_3650_);
lean_closure_set(v___f_3689_, 1, v___x_3685_);
lean_closure_set(v___f_3689_, 2, v___x_3686_);
lean_closure_set(v___f_3689_, 3, v___x_3688_);
lean_closure_set(v___f_3689_, 4, v___x_3666_);
v___x_3690_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3689_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3712_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3693_ = v___x_3690_;
v_isShared_3694_ = v_isSharedCheck_3712_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3690_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3712_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
if (lean_obj_tag(v_a_3691_) == 0)
{
lean_del_object(v___x_3693_);
lean_del_object(v___x_3678_);
lean_dec(v_snd_3662_);
v_a_3668_ = v___x_3683_;
goto v___jp_3667_;
}
else
{
lean_object* v___x_3696_; 
lean_del_object(v___x_3664_);
lean_dec(v_mvarId_3650_);
lean_dec_ref(v_p_3649_);
lean_inc_ref(v_a_3691_);
if (v_isShared_3679_ == 0)
{
lean_ctor_set(v___x_3678_, 0, v_a_3691_);
v___x_3696_ = v___x_3678_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3709_; 
v_isSharedCheck_3709_ = !lean_is_exclusive(v_a_3691_);
if (v_isSharedCheck_3709_ == 0)
{
lean_object* v_unused_3710_; 
v_unused_3710_ = lean_ctor_get(v_a_3691_, 0);
lean_dec(v_unused_3710_);
v___x_3698_ = v_a_3691_;
v_isShared_3699_ = v_isSharedCheck_3709_;
goto v_resetjp_3697_;
}
else
{
lean_dec(v_a_3691_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3709_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3700_; lean_object* v___x_3702_; 
v___x_3700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3696_);
lean_ctor_set(v___x_3700_, 1, v___x_3682_);
if (v_isShared_3699_ == 0)
{
lean_ctor_set_tag(v___x_3698_, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3700_);
v___x_3702_ = v___x_3698_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3700_);
v___x_3702_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3702_);
v___x_3704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
lean_ctor_set(v___x_3704_, 1, v_snd_3662_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3704_);
v___x_3706_ = v___x_3693_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
lean_del_object(v___x_3678_);
lean_del_object(v___x_3664_);
lean_dec(v_snd_3662_);
lean_dec(v_mvarId_3650_);
lean_dec_ref(v_p_3649_);
v_a_3713_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3690_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3690_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
lean_del_object(v___x_3678_);
lean_dec(v_val_3676_);
lean_del_object(v___x_3664_);
lean_dec(v_snd_3662_);
lean_dec(v_mvarId_3650_);
lean_dec_ref(v_p_3649_);
v_a_3721_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3680_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3680_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
v___jp_3667_:
{
lean_object* v___x_3670_; 
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 1, v_a_3668_);
lean_ctor_set(v___x_3664_, 0, v___x_3666_);
v___x_3670_ = v___x_3664_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3666_);
lean_ctor_set(v_reuseFailAlloc_3674_, 1, v_a_3668_);
v___x_3670_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
size_t v___x_3671_; size_t v___x_3672_; 
v___x_3671_ = ((size_t)1ULL);
v___x_3672_ = lean_usize_add(v_i_3653_, v___x_3671_);
v_i_3653_ = v___x_3672_;
v_b_3654_ = v___x_3670_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_p_3732_, lean_object* v_mvarId_3733_, lean_object* v_as_3734_, lean_object* v_sz_3735_, lean_object* v_i_3736_, lean_object* v_b_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
size_t v_sz_boxed_3743_; size_t v_i_boxed_3744_; lean_object* v_res_3745_; 
v_sz_boxed_3743_ = lean_unbox_usize(v_sz_3735_);
lean_dec(v_sz_3735_);
v_i_boxed_3744_ = lean_unbox_usize(v_i_3736_);
lean_dec(v_i_3736_);
v_res_3745_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3732_, v_mvarId_3733_, v_as_3734_, v_sz_boxed_3743_, v_i_boxed_3744_, v_b_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec_ref(v_as_3734_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object* v_p_3746_, lean_object* v_mvarId_3747_, lean_object* v_as_3748_, size_t v_sz_3749_, size_t v_i_3750_, lean_object* v_b_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
uint8_t v___x_3757_; 
v___x_3757_ = lean_usize_dec_lt(v_i_3750_, v_sz_3749_);
if (v___x_3757_ == 0)
{
lean_object* v___x_3758_; 
lean_dec(v_mvarId_3747_);
lean_dec_ref(v_p_3746_);
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v_b_3751_);
return v___x_3758_;
}
else
{
lean_object* v_snd_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3827_; 
v_snd_3759_ = lean_ctor_get(v_b_3751_, 1);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_b_3751_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; 
v_unused_3828_ = lean_ctor_get(v_b_3751_, 0);
lean_dec(v_unused_3828_);
v___x_3761_ = v_b_3751_;
v_isShared_3762_ = v_isSharedCheck_3827_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_snd_3759_);
lean_dec(v_b_3751_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3827_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v_a_3765_; lean_object* v_a_3772_; 
v___x_3763_ = lean_box(0);
v_a_3772_ = lean_array_uget(v_as_3748_, v_i_3750_);
if (lean_obj_tag(v_a_3772_) == 0)
{
v_a_3765_ = v_snd_3759_;
goto v___jp_3764_;
}
else
{
lean_object* v_val_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3826_; 
v_val_3773_ = lean_ctor_get(v_a_3772_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v_a_3772_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3775_ = v_a_3772_;
v_isShared_3776_ = v_isSharedCheck_3826_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_val_3773_);
lean_dec(v_a_3772_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3826_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3777_; 
lean_inc_ref(v_p_3746_);
lean_inc(v___y_3755_);
lean_inc_ref(v___y_3754_);
lean_inc(v___y_3753_);
lean_inc_ref(v___y_3752_);
lean_inc(v_val_3773_);
v___x_3777_ = lean_apply_6(v_p_3746_, v_val_3773_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, lean_box(0));
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_object* v_a_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; uint8_t v___x_3781_; 
v_a_3778_ = lean_ctor_get(v___x_3777_, 0);
lean_inc(v_a_3778_);
lean_dec_ref(v___x_3777_);
v___x_3779_ = lean_box(0);
v___x_3780_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0);
v___x_3781_ = lean_unbox(v_a_3778_);
lean_dec(v_a_3778_);
if (v___x_3781_ == 0)
{
lean_del_object(v___x_3775_);
lean_dec(v_val_3773_);
lean_dec(v_snd_3759_);
v_a_3765_ = v___x_3780_;
goto v___jp_3764_;
}
else
{
lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; lean_object* v___x_3785_; lean_object* v___f_3786_; lean_object* v___x_3787_; 
v___x_3782_ = l_Lean_LocalDecl_fvarId(v_val_3773_);
lean_dec(v_val_3773_);
v___x_3783_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__1);
v___x_3784_ = 0;
v___x_3785_ = lean_box(v___x_3784_);
lean_inc(v_mvarId_3747_);
v___f_3786_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3786_, 0, v_mvarId_3747_);
lean_closure_set(v___f_3786_, 1, v___x_3782_);
lean_closure_set(v___f_3786_, 2, v___x_3783_);
lean_closure_set(v___f_3786_, 3, v___x_3785_);
lean_closure_set(v___f_3786_, 4, v___x_3763_);
v___x_3787_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3786_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3809_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3809_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3809_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
if (lean_obj_tag(v_a_3788_) == 0)
{
lean_del_object(v___x_3790_);
lean_del_object(v___x_3775_);
lean_dec(v_snd_3759_);
v_a_3765_ = v___x_3780_;
goto v___jp_3764_;
}
else
{
lean_object* v___x_3793_; 
lean_del_object(v___x_3761_);
lean_dec(v_mvarId_3747_);
lean_dec_ref(v_p_3746_);
lean_inc_ref(v_a_3788_);
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 0, v_a_3788_);
v___x_3793_ = v___x_3775_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3806_; 
v_isSharedCheck_3806_ = !lean_is_exclusive(v_a_3788_);
if (v_isSharedCheck_3806_ == 0)
{
lean_object* v_unused_3807_; 
v_unused_3807_ = lean_ctor_get(v_a_3788_, 0);
lean_dec(v_unused_3807_);
v___x_3795_ = v_a_3788_;
v_isShared_3796_ = v_isSharedCheck_3806_;
goto v_resetjp_3794_;
}
else
{
lean_dec(v_a_3788_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3806_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3797_; lean_object* v___x_3799_; 
v___x_3797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3793_);
lean_ctor_set(v___x_3797_, 1, v___x_3779_);
if (v_isShared_3796_ == 0)
{
lean_ctor_set_tag(v___x_3795_, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3797_);
v___x_3799_ = v___x_3795_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3797_);
v___x_3799_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3803_; 
v___x_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
lean_ctor_set(v___x_3801_, 1, v_snd_3759_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3801_);
v___x_3803_ = v___x_3790_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
lean_del_object(v___x_3775_);
lean_del_object(v___x_3761_);
lean_dec(v_snd_3759_);
lean_dec(v_mvarId_3747_);
lean_dec_ref(v_p_3746_);
v_a_3810_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3812_ = v___x_3787_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v___x_3787_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_del_object(v___x_3775_);
lean_dec(v_val_3773_);
lean_del_object(v___x_3761_);
lean_dec(v_snd_3759_);
lean_dec(v_mvarId_3747_);
lean_dec_ref(v_p_3746_);
v_a_3818_ = lean_ctor_get(v___x_3777_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3777_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3777_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
}
v___jp_3764_:
{
lean_object* v___x_3767_; 
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 1, v_a_3765_);
lean_ctor_set(v___x_3761_, 0, v___x_3763_);
v___x_3767_ = v___x_3761_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v___x_3763_);
lean_ctor_set(v_reuseFailAlloc_3771_, 1, v_a_3765_);
v___x_3767_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
size_t v___x_3768_; size_t v___x_3769_; lean_object* v___x_3770_; 
v___x_3768_ = ((size_t)1ULL);
v___x_3769_ = lean_usize_add(v_i_3750_, v___x_3768_);
v___x_3770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3746_, v_mvarId_3747_, v_as_3748_, v_sz_3749_, v___x_3769_, v___x_3767_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_);
return v___x_3770_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object* v_p_3829_, lean_object* v_mvarId_3830_, lean_object* v_as_3831_, lean_object* v_sz_3832_, lean_object* v_i_3833_, lean_object* v_b_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
size_t v_sz_boxed_3840_; size_t v_i_boxed_3841_; lean_object* v_res_3842_; 
v_sz_boxed_3840_ = lean_unbox_usize(v_sz_3832_);
lean_dec(v_sz_3832_);
v_i_boxed_3841_ = lean_unbox_usize(v_i_3833_);
lean_dec(v_i_3833_);
v_res_3842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3829_, v_mvarId_3830_, v_as_3831_, v_sz_boxed_3840_, v_i_boxed_3841_, v_b_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec_ref(v_as_3831_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object* v_init_3843_, lean_object* v_p_3844_, lean_object* v_mvarId_3845_, lean_object* v_n_3846_, lean_object* v_b_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
if (lean_obj_tag(v_n_3846_) == 0)
{
lean_object* v_cs_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; size_t v_sz_3856_; size_t v___x_3857_; lean_object* v___x_3858_; 
v_cs_3853_ = lean_ctor_get(v_n_3846_, 0);
v___x_3854_ = lean_box(0);
v___x_3855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3855_, 0, v___x_3854_);
lean_ctor_set(v___x_3855_, 1, v_b_3847_);
v_sz_3856_ = lean_array_size(v_cs_3853_);
v___x_3857_ = ((size_t)0ULL);
v___x_3858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3843_, v_p_3844_, v_mvarId_3845_, v_cs_3853_, v_sz_3856_, v___x_3857_, v___x_3855_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3873_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3861_ = v___x_3858_;
v_isShared_3862_ = v_isSharedCheck_3873_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3858_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3873_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v_fst_3863_; 
v_fst_3863_ = lean_ctor_get(v_a_3859_, 0);
if (lean_obj_tag(v_fst_3863_) == 0)
{
lean_object* v_snd_3864_; lean_object* v___x_3865_; lean_object* v___x_3867_; 
v_snd_3864_ = lean_ctor_get(v_a_3859_, 1);
lean_inc(v_snd_3864_);
lean_dec(v_a_3859_);
v___x_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3865_, 0, v_snd_3864_);
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v___x_3865_);
v___x_3867_ = v___x_3861_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v___x_3865_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
else
{
lean_object* v_val_3869_; lean_object* v___x_3871_; 
lean_inc_ref(v_fst_3863_);
lean_dec(v_a_3859_);
v_val_3869_ = lean_ctor_get(v_fst_3863_, 0);
lean_inc(v_val_3869_);
lean_dec_ref(v_fst_3863_);
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v_val_3869_);
v___x_3871_ = v___x_3861_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_val_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
v_a_3874_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3858_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3858_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
else
{
lean_object* v_vs_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; size_t v_sz_3885_; size_t v___x_3886_; lean_object* v___x_3887_; 
v_vs_3882_ = lean_ctor_get(v_n_3846_, 0);
v___x_3883_ = lean_box(0);
v___x_3884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3883_);
lean_ctor_set(v___x_3884_, 1, v_b_3847_);
v_sz_3885_ = lean_array_size(v_vs_3882_);
v___x_3886_ = ((size_t)0ULL);
v___x_3887_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3844_, v_mvarId_3845_, v_vs_3882_, v_sz_3885_, v___x_3886_, v___x_3884_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3902_; 
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3890_ = v___x_3887_;
v_isShared_3891_ = v_isSharedCheck_3902_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3887_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3902_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v_fst_3892_; 
v_fst_3892_ = lean_ctor_get(v_a_3888_, 0);
if (lean_obj_tag(v_fst_3892_) == 0)
{
lean_object* v_snd_3893_; lean_object* v___x_3894_; lean_object* v___x_3896_; 
v_snd_3893_ = lean_ctor_get(v_a_3888_, 1);
lean_inc(v_snd_3893_);
lean_dec(v_a_3888_);
v___x_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3894_, 0, v_snd_3893_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 0, v___x_3894_);
v___x_3896_ = v___x_3890_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3894_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
else
{
lean_object* v_val_3898_; lean_object* v___x_3900_; 
lean_inc_ref(v_fst_3892_);
lean_dec(v_a_3888_);
v_val_3898_ = lean_ctor_get(v_fst_3892_, 0);
lean_inc(v_val_3898_);
lean_dec_ref(v_fst_3892_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 0, v_val_3898_);
v___x_3900_ = v___x_3890_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_val_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3910_; 
v_a_3903_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3910_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3905_ = v___x_3887_;
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3887_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v___x_3908_; 
if (v_isShared_3906_ == 0)
{
v___x_3908_ = v___x_3905_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_a_3903_);
v___x_3908_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
return v___x_3908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object* v_init_3911_, lean_object* v_p_3912_, lean_object* v_mvarId_3913_, lean_object* v_as_3914_, size_t v_sz_3915_, size_t v_i_3916_, lean_object* v_b_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
uint8_t v___x_3923_; 
v___x_3923_ = lean_usize_dec_lt(v_i_3916_, v_sz_3915_);
if (v___x_3923_ == 0)
{
lean_object* v___x_3924_; 
lean_dec(v_mvarId_3913_);
lean_dec_ref(v_p_3912_);
v___x_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3924_, 0, v_b_3917_);
return v___x_3924_;
}
else
{
lean_object* v_snd_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3959_; 
v_snd_3925_ = lean_ctor_get(v_b_3917_, 1);
v_isSharedCheck_3959_ = !lean_is_exclusive(v_b_3917_);
if (v_isSharedCheck_3959_ == 0)
{
lean_object* v_unused_3960_; 
v_unused_3960_ = lean_ctor_get(v_b_3917_, 0);
lean_dec(v_unused_3960_);
v___x_3927_ = v_b_3917_;
v_isShared_3928_ = v_isSharedCheck_3959_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_snd_3925_);
lean_dec(v_b_3917_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3959_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v_a_3929_; lean_object* v___x_3930_; 
v_a_3929_ = lean_array_uget_borrowed(v_as_3914_, v_i_3916_);
lean_inc(v_snd_3925_);
lean_inc(v_mvarId_3913_);
lean_inc_ref(v_p_3912_);
v___x_3930_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3911_, v_p_3912_, v_mvarId_3913_, v_a_3929_, v_snd_3925_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_);
if (lean_obj_tag(v___x_3930_) == 0)
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3950_; 
v_a_3931_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3933_ = v___x_3930_;
v_isShared_3934_ = v_isSharedCheck_3950_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3930_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3950_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
if (lean_obj_tag(v_a_3931_) == 0)
{
lean_object* v___x_3935_; lean_object* v___x_3937_; 
lean_dec(v_mvarId_3913_);
lean_dec_ref(v_p_3912_);
v___x_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3935_, 0, v_a_3931_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 0, v___x_3935_);
v___x_3937_ = v___x_3927_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3935_);
lean_ctor_set(v_reuseFailAlloc_3941_, 1, v_snd_3925_);
v___x_3937_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3939_; 
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 0, v___x_3937_);
v___x_3939_ = v___x_3933_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v___x_3937_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
else
{
lean_object* v_a_3942_; lean_object* v___x_3943_; lean_object* v___x_3945_; 
lean_del_object(v___x_3933_);
lean_dec(v_snd_3925_);
v_a_3942_ = lean_ctor_get(v_a_3931_, 0);
lean_inc(v_a_3942_);
lean_dec_ref(v_a_3931_);
v___x_3943_ = lean_box(0);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 1, v_a_3942_);
lean_ctor_set(v___x_3927_, 0, v___x_3943_);
v___x_3945_ = v___x_3927_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v___x_3943_);
lean_ctor_set(v_reuseFailAlloc_3949_, 1, v_a_3942_);
v___x_3945_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
size_t v___x_3946_; size_t v___x_3947_; 
v___x_3946_ = ((size_t)1ULL);
v___x_3947_ = lean_usize_add(v_i_3916_, v___x_3946_);
v_i_3916_ = v___x_3947_;
v_b_3917_ = v___x_3945_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3958_; 
lean_del_object(v___x_3927_);
lean_dec(v_snd_3925_);
lean_dec(v_mvarId_3913_);
lean_dec_ref(v_p_3912_);
v_a_3951_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3930_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3930_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_a_3951_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object* v_init_3961_, lean_object* v_p_3962_, lean_object* v_mvarId_3963_, lean_object* v_as_3964_, lean_object* v_sz_3965_, lean_object* v_i_3966_, lean_object* v_b_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_){
_start:
{
size_t v_sz_boxed_3973_; size_t v_i_boxed_3974_; lean_object* v_res_3975_; 
v_sz_boxed_3973_ = lean_unbox_usize(v_sz_3965_);
lean_dec(v_sz_3965_);
v_i_boxed_3974_ = lean_unbox_usize(v_i_3966_);
lean_dec(v_i_3966_);
v_res_3975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3961_, v_p_3962_, v_mvarId_3963_, v_as_3964_, v_sz_boxed_3973_, v_i_boxed_3974_, v_b_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec_ref(v_as_3964_);
lean_dec_ref(v_init_3961_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object* v_init_3976_, lean_object* v_p_3977_, lean_object* v_mvarId_3978_, lean_object* v_n_3979_, lean_object* v_b_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3976_, v_p_3977_, v_mvarId_3978_, v_n_3979_, v_b_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec_ref(v_n_3979_);
lean_dec_ref(v_init_3976_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object* v_p_3987_, lean_object* v_mvarId_3988_, lean_object* v_t_3989_, lean_object* v_init_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_){
_start:
{
lean_object* v_root_3996_; lean_object* v_tail_3997_; lean_object* v___x_3998_; 
v_root_3996_ = lean_ctor_get(v_t_3989_, 0);
v_tail_3997_ = lean_ctor_get(v_t_3989_, 1);
lean_inc(v_mvarId_3988_);
lean_inc_ref(v_p_3987_);
lean_inc_ref(v_init_3990_);
v___x_3998_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3990_, v_p_3987_, v_mvarId_3988_, v_root_3996_, v_init_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
lean_dec_ref(v_init_3990_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4035_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4001_ = v___x_3998_;
v_isShared_4002_ = v_isSharedCheck_4035_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v___x_3998_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4035_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
if (lean_obj_tag(v_a_3999_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4005_; 
lean_dec(v_mvarId_3988_);
lean_dec_ref(v_p_3987_);
v_a_4003_ = lean_ctor_get(v_a_3999_, 0);
lean_inc(v_a_4003_);
lean_dec_ref(v_a_3999_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 0, v_a_4003_);
v___x_4005_ = v___x_4001_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v_a_4003_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; size_t v_sz_4010_; size_t v___x_4011_; lean_object* v___x_4012_; 
lean_del_object(v___x_4001_);
v_a_4007_ = lean_ctor_get(v_a_3999_, 0);
lean_inc(v_a_4007_);
lean_dec_ref(v_a_3999_);
v___x_4008_ = lean_box(0);
v___x_4009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
lean_ctor_set(v___x_4009_, 1, v_a_4007_);
v_sz_4010_ = lean_array_size(v_tail_3997_);
v___x_4011_ = ((size_t)0ULL);
v___x_4012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3987_, v_mvarId_3988_, v_tail_3997_, v_sz_4010_, v___x_4011_, v___x_4009_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4026_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4026_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4026_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v_fst_4017_; 
v_fst_4017_ = lean_ctor_get(v_a_4013_, 0);
if (lean_obj_tag(v_fst_4017_) == 0)
{
lean_object* v_snd_4018_; lean_object* v___x_4020_; 
v_snd_4018_ = lean_ctor_get(v_a_4013_, 1);
lean_inc(v_snd_4018_);
lean_dec(v_a_4013_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v_snd_4018_);
v___x_4020_ = v___x_4015_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_snd_4018_);
v___x_4020_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
return v___x_4020_;
}
}
else
{
lean_object* v_val_4022_; lean_object* v___x_4024_; 
lean_inc_ref(v_fst_4017_);
lean_dec(v_a_4013_);
v_val_4022_ = lean_ctor_get(v_fst_4017_, 0);
lean_inc(v_val_4022_);
lean_dec_ref(v_fst_4017_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v_val_4022_);
v___x_4024_ = v___x_4015_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_val_4022_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4034_; 
v_a_4027_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4029_ = v___x_4012_;
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___x_4012_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
}
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec(v_mvarId_3988_);
lean_dec_ref(v_p_3987_);
v_a_4036_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_3998_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_3998_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object* v_p_4044_, lean_object* v_mvarId_4045_, lean_object* v_t_4046_, lean_object* v_init_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_4044_, v_mvarId_4045_, v_t_4046_, v_init_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec_ref(v_t_4046_);
return v_res_4053_;
}
}
static lean_object* _init_l_Lean_MVarId_casesRec___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = lean_box(0);
v___x_4055_ = lean_box(0);
v___x_4056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
lean_ctor_set(v___x_4056_, 1, v___x_4054_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object* v_p_4057_, lean_object* v_mvarId_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_lctx_4064_; lean_object* v_decls_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v_lctx_4064_ = lean_ctor_get(v___y_4059_, 2);
v_decls_4065_ = lean_ctor_get(v_lctx_4064_, 1);
v___x_4066_ = lean_box(0);
v___x_4067_ = lean_obj_once(&l_Lean_MVarId_casesRec___lam__0___closed__0, &l_Lean_MVarId_casesRec___lam__0___closed__0_once, _init_l_Lean_MVarId_casesRec___lam__0___closed__0);
v___x_4068_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_4057_, v_mvarId_4058_, v_decls_4065_, v___x_4067_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4068_) == 0)
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4081_; 
v_a_4069_ = lean_ctor_get(v___x_4068_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4071_ = v___x_4068_;
v_isShared_4072_ = v_isSharedCheck_4081_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_4068_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4081_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v_fst_4073_; 
v_fst_4073_ = lean_ctor_get(v_a_4069_, 0);
lean_inc(v_fst_4073_);
lean_dec(v_a_4069_);
if (lean_obj_tag(v_fst_4073_) == 0)
{
lean_object* v___x_4075_; 
if (v_isShared_4072_ == 0)
{
lean_ctor_set(v___x_4071_, 0, v___x_4066_);
v___x_4075_ = v___x_4071_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4066_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
else
{
lean_object* v_val_4077_; lean_object* v___x_4079_; 
v_val_4077_ = lean_ctor_get(v_fst_4073_, 0);
lean_inc(v_val_4077_);
lean_dec_ref(v_fst_4073_);
if (v_isShared_4072_ == 0)
{
lean_ctor_set(v___x_4071_, 0, v_val_4077_);
v___x_4079_ = v___x_4071_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v_val_4077_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
}
}
else
{
lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4089_; 
v_a_4082_ = lean_ctor_get(v___x_4068_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4084_ = v___x_4068_;
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v___x_4068_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object* v_p_4090_, lean_object* v_mvarId_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_MVarId_casesRec___lam__0(v_p_4090_, v_mvarId_4091_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_);
lean_dec(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v___y_4093_);
lean_dec_ref(v___y_4092_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object* v_p_4098_, lean_object* v_mvarId_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v___f_4105_; lean_object* v___x_4106_; 
lean_inc(v_mvarId_4099_);
v___f_4105_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4105_, 0, v_p_4098_);
lean_closure_set(v___f_4105_, 1, v_mvarId_4099_);
v___x_4106_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4099_, v___f_4105_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object* v_p_4107_, lean_object* v_mvarId_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l_Lean_MVarId_casesRec___lam__1(v_p_4107_, v_mvarId_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_);
lean_dec(v___y_4112_);
lean_dec_ref(v___y_4111_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object* v_mvarId_4115_, lean_object* v_p_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_){
_start:
{
lean_object* v___f_4122_; lean_object* v___x_4123_; 
v___f_4122_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__1___boxed), 7, 1);
lean_closure_set(v___f_4122_, 0, v_p_4116_);
v___x_4123_ = l_Lean_Meta_saturate(v_mvarId_4115_, v___f_4122_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_);
return v___x_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object* v_mvarId_4124_, lean_object* v_p_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lean_MVarId_casesRec(v_mvarId_4124_, v_p_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_);
lean_dec(v_a_4129_);
lean_dec_ref(v_a_4128_);
lean_dec(v_a_4127_);
lean_dec_ref(v_a_4126_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object* v_e_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_){
_start:
{
uint8_t v___x_4136_; 
v___x_4136_ = l_Lean_Expr_hasMVar(v_e_4132_);
if (v___x_4136_ == 0)
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v_e_4132_);
return v___x_4137_;
}
else
{
lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v_mctx_4140_; lean_object* v___x_4141_; lean_object* v_fst_4142_; lean_object* v_snd_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v_cache_4146_; lean_object* v_zetaDeltaFVarIds_4147_; lean_object* v_postponed_4148_; lean_object* v_diag_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4158_; 
v___x_4138_ = lean_st_ref_get(v___y_4134_);
lean_dec(v___x_4138_);
v___x_4139_ = lean_st_ref_get(v___y_4133_);
v_mctx_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc_ref(v_mctx_4140_);
lean_dec(v___x_4139_);
v___x_4141_ = l_Lean_instantiateMVarsCore(v_mctx_4140_, v_e_4132_);
v_fst_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc(v_fst_4142_);
v_snd_4143_ = lean_ctor_get(v___x_4141_, 1);
lean_inc(v_snd_4143_);
lean_dec_ref(v___x_4141_);
v___x_4144_ = lean_st_ref_get(v___y_4134_);
lean_dec(v___x_4144_);
v___x_4145_ = lean_st_ref_take(v___y_4133_);
v_cache_4146_ = lean_ctor_get(v___x_4145_, 1);
v_zetaDeltaFVarIds_4147_ = lean_ctor_get(v___x_4145_, 2);
v_postponed_4148_ = lean_ctor_get(v___x_4145_, 3);
v_diag_4149_ = lean_ctor_get(v___x_4145_, 4);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4158_ == 0)
{
lean_object* v_unused_4159_; 
v_unused_4159_ = lean_ctor_get(v___x_4145_, 0);
lean_dec(v_unused_4159_);
v___x_4151_ = v___x_4145_;
v_isShared_4152_ = v_isSharedCheck_4158_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_diag_4149_);
lean_inc(v_postponed_4148_);
lean_inc(v_zetaDeltaFVarIds_4147_);
lean_inc(v_cache_4146_);
lean_dec(v___x_4145_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4158_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v_snd_4143_);
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_snd_4143_);
lean_ctor_set(v_reuseFailAlloc_4157_, 1, v_cache_4146_);
lean_ctor_set(v_reuseFailAlloc_4157_, 2, v_zetaDeltaFVarIds_4147_);
lean_ctor_set(v_reuseFailAlloc_4157_, 3, v_postponed_4148_);
lean_ctor_set(v_reuseFailAlloc_4157_, 4, v_diag_4149_);
v___x_4154_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4155_ = lean_st_ref_set(v___y_4133_, v___x_4154_);
v___x_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4156_, 0, v_fst_4142_);
return v___x_4156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object* v_e_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4160_, v___y_4161_, v___y_4162_);
lean_dec(v___y_4162_);
lean_dec(v___y_4161_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object* v_e_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_){
_start:
{
lean_object* v___x_4171_; 
v___x_4171_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4165_, v___y_4167_, v___y_4169_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object* v_e_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(v_e_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_);
lean_dec(v___y_4176_);
lean_dec_ref(v___y_4175_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
return v_res_4178_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4179_; 
v___x_4179_ = lean_mk_string_unchecked("And", 3, 3);
return v___x_4179_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; 
v___x_4180_ = lean_obj_once(&l_Lean_MVarId_casesAnd___lam__0___closed__0, &l_Lean_MVarId_casesAnd___lam__0___closed__0_once, _init_l_Lean_MVarId_casesAnd___lam__0___closed__0);
v___x_4181_ = l_Lean_Name_mkStr1(v___x_4180_);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object* v_localDecl_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v_a_4190_; lean_object* v___x_4192_; uint8_t v_isShared_4193_; uint8_t v_isSharedCheck_4201_; 
v___x_4188_ = l_Lean_LocalDecl_type(v_localDecl_4182_);
v___x_4189_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4188_, v___y_4184_, v___y_4186_);
v_a_4190_ = lean_ctor_get(v___x_4189_, 0);
v_isSharedCheck_4201_ = !lean_is_exclusive(v___x_4189_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4192_ = v___x_4189_;
v_isShared_4193_ = v_isSharedCheck_4201_;
goto v_resetjp_4191_;
}
else
{
lean_inc(v_a_4190_);
lean_dec(v___x_4189_);
v___x_4192_ = lean_box(0);
v_isShared_4193_ = v_isSharedCheck_4201_;
goto v_resetjp_4191_;
}
v_resetjp_4191_:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4199_; 
v___x_4194_ = lean_obj_once(&l_Lean_MVarId_casesAnd___lam__0___closed__1, &l_Lean_MVarId_casesAnd___lam__0___closed__1_once, _init_l_Lean_MVarId_casesAnd___lam__0___closed__1);
v___x_4195_ = lean_unsigned_to_nat(2u);
v___x_4196_ = l_Lean_Expr_isAppOfArity(v_a_4190_, v___x_4194_, v___x_4195_);
lean_dec(v_a_4190_);
v___x_4197_ = lean_box(v___x_4196_);
if (v_isShared_4193_ == 0)
{
lean_ctor_set(v___x_4192_, 0, v___x_4197_);
v___x_4199_ = v___x_4192_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4200_; 
v_reuseFailAlloc_4200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4200_, 0, v___x_4197_);
v___x_4199_ = v_reuseFailAlloc_4200_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
return v___x_4199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object* v_localDecl_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Lean_MVarId_casesAnd___lam__0(v_localDecl_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_);
lean_dec(v___y_4206_);
lean_dec_ref(v___y_4205_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
lean_dec_ref(v_localDecl_4202_);
return v_res_4208_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__0(void){
_start:
{
lean_object* v___f_4209_; 
v___f_4209_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesAnd___lam__0___boxed), 6, 0);
return v___f_4209_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__1(void){
_start:
{
lean_object* v___x_4210_; 
v___x_4210_ = lean_mk_string_unchecked("unexpected number of goals", 26, 26);
return v___x_4210_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__2(void){
_start:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4211_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__1, &l_Lean_MVarId_casesAnd___closed__1_once, _init_l_Lean_MVarId_casesAnd___closed__1);
v___x_4212_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4211_);
return v___x_4212_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__3(void){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4213_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__2, &l_Lean_MVarId_casesAnd___closed__2_once, _init_l_Lean_MVarId_casesAnd___closed__2);
v___x_4214_ = l_Lean_MessageData_ofFormat(v___x_4213_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object* v_mvarId_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_){
_start:
{
lean_object* v___f_4221_; lean_object* v___x_4222_; 
v___f_4221_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__0, &l_Lean_MVarId_casesAnd___closed__0_once, _init_l_Lean_MVarId_casesAnd___closed__0);
v___x_4222_ = l_Lean_MVarId_casesRec(v_mvarId_4215_, v___f_4221_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_);
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_object* v_a_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; 
v_a_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_a_4223_);
lean_dec_ref(v___x_4222_);
v___x_4224_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4225_ = l_Lean_Meta_exactlyOne(v_a_4223_, v___x_4224_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_);
lean_dec(v_a_4223_);
return v___x_4225_;
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4233_; 
v_a_4226_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4233_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4228_ = v___x_4222_;
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v___x_4222_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___x_4231_; 
if (v_isShared_4229_ == 0)
{
v___x_4231_ = v___x_4228_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v_a_4226_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object* v_mvarId_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lean_MVarId_casesAnd(v_mvarId_4234_, v_a_4235_, v_a_4236_, v_a_4237_, v_a_4238_);
lean_dec(v_a_4238_);
lean_dec_ref(v_a_4237_);
lean_dec(v_a_4236_);
lean_dec_ref(v_a_4235_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object* v_localDecl_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4263_; 
v___x_4247_ = l_Lean_LocalDecl_type(v_localDecl_4241_);
v___x_4248_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4247_, v___y_4243_, v___y_4245_);
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4251_ = v___x_4248_;
v_isShared_4252_ = v_isSharedCheck_4263_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4248_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4263_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
uint8_t v___x_4253_; 
v___x_4253_ = l_Lean_Expr_isEq(v_a_4249_);
if (v___x_4253_ == 0)
{
uint8_t v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4257_; 
v___x_4254_ = l_Lean_Expr_isHEq(v_a_4249_);
lean_dec(v_a_4249_);
v___x_4255_ = lean_box(v___x_4254_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4255_);
v___x_4257_ = v___x_4251_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v___x_4255_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
else
{
lean_object* v___x_4259_; lean_object* v___x_4261_; 
lean_dec(v_a_4249_);
v___x_4259_ = lean_box(v___x_4253_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4259_);
v___x_4261_ = v___x_4251_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4259_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object* v_localDecl_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Lean_MVarId_substEqs___lam__0(v_localDecl_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
lean_dec_ref(v_localDecl_4264_);
return v_res_4270_;
}
}
static lean_object* _init_l_Lean_MVarId_substEqs___closed__0(void){
_start:
{
lean_object* v___f_4271_; 
v___f_4271_ = lean_alloc_closure((void*)(l_Lean_MVarId_substEqs___lam__0___boxed), 6, 0);
return v___f_4271_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object* v_mvarId_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_){
_start:
{
lean_object* v___f_4278_; lean_object* v___x_4279_; 
v___f_4278_ = lean_obj_once(&l_Lean_MVarId_substEqs___closed__0, &l_Lean_MVarId_substEqs___closed__0_once, _init_l_Lean_MVarId_substEqs___closed__0);
v___x_4279_ = l_Lean_MVarId_casesRec(v_mvarId_4272_, v___f_4278_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_);
if (lean_obj_tag(v___x_4279_) == 0)
{
lean_object* v_a_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; 
v_a_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_a_4280_);
lean_dec_ref(v___x_4279_);
v___x_4281_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4282_ = l_Lean_Meta_ensureAtMostOne(v_a_4280_, v___x_4281_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_);
lean_dec(v_a_4280_);
return v___x_4282_;
}
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
v_a_4283_ = lean_ctor_get(v___x_4279_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4279_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4279_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4279_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object* v_mvarId_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_MVarId_substEqs(v_mvarId_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
return v_res_4297_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0(void){
_start:
{
lean_object* v___x_4298_; 
v___x_4298_ = lean_mk_string_unchecked("Tactic `byCases` failed: Unexpected new hypothesis", 50, 50);
return v___x_4298_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1(void){
_start:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4299_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__0);
v___x_4300_ = l_Lean_stringToMessageData(v___x_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(lean_object* v_s_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_){
_start:
{
lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; lean_object* v_toInductionSubgoal_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4330_; 
v_toInductionSubgoal_4314_ = lean_ctor_get(v_s_4301_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v_s_4301_);
if (v_isSharedCheck_4330_ == 0)
{
lean_object* v_unused_4331_; 
v_unused_4331_ = lean_ctor_get(v_s_4301_, 1);
lean_dec(v_unused_4331_);
v___x_4316_ = v_s_4301_;
v_isShared_4317_ = v_isSharedCheck_4330_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_toInductionSubgoal_4314_);
lean_dec(v_s_4301_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4330_;
goto v_resetjp_4315_;
}
v___jp_4307_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4312_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___closed__1);
v___x_4313_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_4312_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
return v___x_4313_;
}
v_resetjp_4315_:
{
lean_object* v_mvarId_4318_; lean_object* v_fields_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; uint8_t v___x_4322_; 
v_mvarId_4318_ = lean_ctor_get(v_toInductionSubgoal_4314_, 0);
lean_inc(v_mvarId_4318_);
v_fields_4319_ = lean_ctor_get(v_toInductionSubgoal_4314_, 1);
lean_inc_ref(v_fields_4319_);
lean_dec_ref(v_toInductionSubgoal_4314_);
v___x_4320_ = lean_array_get_size(v_fields_4319_);
v___x_4321_ = lean_unsigned_to_nat(1u);
v___x_4322_ = lean_nat_dec_eq(v___x_4320_, v___x_4321_);
if (v___x_4322_ == 0)
{
lean_dec_ref(v_fields_4319_);
lean_dec(v_mvarId_4318_);
lean_del_object(v___x_4316_);
v___y_4308_ = v_a_4302_;
v___y_4309_ = v_a_4303_;
v___y_4310_ = v_a_4304_;
v___y_4311_ = v_a_4305_;
goto v___jp_4307_;
}
else
{
lean_object* v___x_4323_; lean_object* v___x_4324_; 
v___x_4323_ = lean_unsigned_to_nat(0u);
v___x_4324_ = lean_array_fget(v_fields_4319_, v___x_4323_);
lean_dec_ref(v_fields_4319_);
if (lean_obj_tag(v___x_4324_) == 1)
{
lean_object* v_fvarId_4325_; lean_object* v___x_4327_; 
v_fvarId_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_fvarId_4325_);
lean_dec_ref(v___x_4324_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v_fvarId_4325_);
lean_ctor_set(v___x_4316_, 0, v_mvarId_4318_);
v___x_4327_ = v___x_4316_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_mvarId_4318_);
lean_ctor_set(v_reuseFailAlloc_4329_, 1, v_fvarId_4325_);
v___x_4327_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
lean_object* v___x_4328_; 
v___x_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
return v___x_4328_;
}
}
else
{
lean_dec(v___x_4324_);
lean_dec(v_mvarId_4318_);
lean_del_object(v___x_4316_);
v___y_4308_ = v_a_4302_;
v___y_4309_ = v_a_4303_;
v___y_4310_ = v_a_4304_;
v___y_4311_ = v_a_4305_;
goto v___jp_4307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal___boxed(lean_object* v_s_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_, lean_object* v_a_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(v_s_4332_, v_a_4333_, v_a_4334_, v_a_4335_, v_a_4336_);
lean_dec(v_a_4336_);
lean_dec_ref(v_a_4335_);
lean_dec(v_a_4334_);
lean_dec_ref(v_a_4333_);
return v_res_4338_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__0(void){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = lean_mk_string_unchecked("hByCases", 8, 8);
return v___x_4339_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__1(void){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; 
v___x_4340_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__0, &l_Lean_MVarId_byCases___closed__0_once, _init_l_Lean_MVarId_byCases___closed__0);
v___x_4341_ = l_Lean_Name_mkStr1(v___x_4340_);
return v___x_4341_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__2(void){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = lean_mk_string_unchecked("Tactic `byCases` failed: Casing on", 34, 34);
return v___x_4342_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__3(void){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4343_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__2, &l_Lean_MVarId_byCases___closed__2_once, _init_l_Lean_MVarId_byCases___closed__2);
v___x_4344_ = l_Lean_stringToMessageData(v___x_4343_);
return v___x_4344_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__4(void){
_start:
{
lean_object* v___x_4345_; 
v___x_4345_ = lean_mk_string_unchecked("unexpectedly did not yield two subgoals", 39, 39);
return v___x_4345_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___closed__5(void){
_start:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4346_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__4, &l_Lean_MVarId_byCases___closed__4_once, _init_l_Lean_MVarId_byCases___closed__4);
v___x_4347_ = l_Lean_stringToMessageData(v___x_4346_);
return v___x_4347_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object* v_mvarId_4348_, lean_object* v_p_4349_, lean_object* v_hName_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4356_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__1, &l_Lean_MVarId_byCases___closed__1_once, _init_l_Lean_MVarId_byCases___closed__1);
lean_inc_ref_n(v_p_4349_, 3);
v___x_4357_ = l_Lean_mkNot(v_p_4349_);
v___x_4358_ = l_Lean_mkOr(v_p_4349_, v___x_4357_);
v___x_4359_ = l_Lean_mkEM(v_p_4349_);
v___x_4360_ = l_Lean_MVarId_assert(v_mvarId_4348_, v___x_4356_, v___x_4358_, v___x_4359_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4360_) == 0)
{
lean_object* v_a_4361_; uint8_t v___x_4362_; lean_object* v___x_4363_; 
v_a_4361_ = lean_ctor_get(v___x_4360_, 0);
lean_inc(v_a_4361_);
lean_dec_ref(v___x_4360_);
v___x_4362_ = 0;
v___x_4363_ = l_Lean_Meta_intro1Core(v_a_4361_, v___x_4362_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4363_) == 0)
{
lean_object* v_a_4364_; lean_object* v_fst_4365_; lean_object* v_snd_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4431_; 
v_a_4364_ = lean_ctor_get(v___x_4363_, 0);
lean_inc(v_a_4364_);
lean_dec_ref(v___x_4363_);
v_fst_4365_ = lean_ctor_get(v_a_4364_, 0);
v_snd_4366_ = lean_ctor_get(v_a_4364_, 1);
v_isSharedCheck_4431_ = !lean_is_exclusive(v_a_4364_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4368_ = v_a_4364_;
v_isShared_4369_ = v_isSharedCheck_4431_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_snd_4366_);
lean_inc(v_fst_4365_);
lean_dec(v_a_4364_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4431_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4370_ = lean_box(0);
v___x_4371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4371_, 0, v_hName_4350_);
lean_ctor_set(v___x_4371_, 1, v___x_4370_);
v___x_4372_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
lean_ctor_set_uint8(v___x_4372_, sizeof(void*)*1, v___x_4362_);
v___x_4373_ = lean_unsigned_to_nat(2u);
v___x_4374_ = lean_mk_empty_array_with_capacity(v___x_4373_);
lean_inc_ref(v___x_4372_);
v___x_4375_ = lean_array_push(v___x_4374_, v___x_4372_);
v___x_4376_ = lean_array_push(v___x_4375_, v___x_4372_);
v___x_4377_ = lean_box(0);
v___x_4378_ = l_Lean_Meta_Cases_cases(v_snd_4366_, v_fst_4365_, v___x_4376_, v___x_4362_, v___x_4377_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4380_; uint8_t v___x_4381_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref(v___x_4378_);
v___x_4380_ = lean_array_get_size(v_a_4379_);
v___x_4381_ = lean_nat_dec_eq(v___x_4380_, v___x_4373_);
if (v___x_4381_ == 0)
{
lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
lean_dec(v_a_4379_);
lean_del_object(v___x_4368_);
v___x_4382_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__3, &l_Lean_MVarId_byCases___closed__3_once, _init_l_Lean_MVarId_byCases___closed__3);
v___x_4383_ = lean_unsigned_to_nat(30u);
v___x_4384_ = l_Lean_inlineExpr(v_p_4349_, v___x_4383_);
v___x_4385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4382_);
lean_ctor_set(v___x_4385_, 1, v___x_4384_);
v___x_4386_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__5, &l_Lean_MVarId_byCases___closed__5_once, _init_l_Lean_MVarId_byCases___closed__5);
v___x_4387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4387_, 0, v___x_4385_);
lean_ctor_set(v___x_4387_, 1, v___x_4386_);
v___x_4388_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_4387_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
return v___x_4388_;
}
else
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
lean_dec_ref(v_p_4349_);
v___x_4389_ = lean_unsigned_to_nat(0u);
v___x_4390_ = lean_array_fget_borrowed(v_a_4379_, v___x_4389_);
lean_inc(v___x_4390_);
v___x_4391_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(v___x_4390_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref(v___x_4391_);
v___x_4393_ = lean_unsigned_to_nat(1u);
v___x_4394_ = lean_array_fget(v_a_4379_, v___x_4393_);
lean_dec(v_a_4379_);
v___x_4395_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(v___x_4394_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4406_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4398_ = v___x_4395_;
v_isShared_4399_ = v_isSharedCheck_4406_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4395_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4406_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 1, v_a_4396_);
lean_ctor_set(v___x_4368_, 0, v_a_4392_);
v___x_4401_ = v___x_4368_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4392_);
lean_ctor_set(v_reuseFailAlloc_4405_, 1, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
lean_object* v___x_4403_; 
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v___x_4401_);
v___x_4403_ = v___x_4398_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v___x_4401_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec(v_a_4392_);
lean_del_object(v___x_4368_);
v_a_4407_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4395_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4395_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
else
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4422_; 
lean_dec(v_a_4379_);
lean_del_object(v___x_4368_);
v_a_4415_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4417_ = v___x_4391_;
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4391_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4422_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4420_; 
if (v_isShared_4418_ == 0)
{
v___x_4420_ = v___x_4417_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_a_4415_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
}
else
{
lean_object* v_a_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4430_; 
lean_del_object(v___x_4368_);
lean_dec_ref(v_p_4349_);
v_a_4423_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4425_ = v___x_4378_;
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_a_4423_);
lean_dec(v___x_4378_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4430_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4428_; 
if (v_isShared_4426_ == 0)
{
v___x_4428_ = v___x_4425_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4423_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
}
}
}
}
}
else
{
lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4439_; 
lean_dec(v_hName_4350_);
lean_dec_ref(v_p_4349_);
v_a_4432_ = lean_ctor_get(v___x_4363_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4363_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4434_ = v___x_4363_;
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_dec(v___x_4363_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4437_; 
if (v_isShared_4435_ == 0)
{
v___x_4437_ = v___x_4434_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_a_4432_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
return v___x_4437_;
}
}
}
}
else
{
lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4447_; 
lean_dec(v_hName_4350_);
lean_dec_ref(v_p_4349_);
v_a_4440_ = lean_ctor_get(v___x_4360_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4360_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4442_ = v___x_4360_;
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4360_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4445_; 
if (v_isShared_4443_ == 0)
{
v___x_4445_ = v___x_4442_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v_a_4440_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object* v_mvarId_4448_, lean_object* v_p_4449_, lean_object* v_hName_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lean_MVarId_byCases(v_mvarId_4448_, v_p_4449_, v_hName_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
lean_dec(v_a_4454_);
lean_dec_ref(v_a_4453_);
lean_dec(v_a_4452_);
lean_dec_ref(v_a_4451_);
return v_res_4456_;
}
}
static lean_object* _init_l_Lean_MVarId_byCasesDec___closed__0(void){
_start:
{
lean_object* v___x_4457_; 
v___x_4457_ = lean_mk_string_unchecked("Decidable", 9, 9);
return v___x_4457_;
}
}
static lean_object* _init_l_Lean_MVarId_byCasesDec___closed__1(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = lean_obj_once(&l_Lean_MVarId_byCasesDec___closed__0, &l_Lean_MVarId_byCasesDec___closed__0_once, _init_l_Lean_MVarId_byCasesDec___closed__0);
v___x_4459_ = l_Lean_Name_mkStr1(v___x_4458_);
return v___x_4459_;
}
}
static lean_object* _init_l_Lean_MVarId_byCasesDec___closed__2(void){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4460_ = lean_box(0);
v___x_4461_ = lean_obj_once(&l_Lean_MVarId_byCasesDec___closed__1, &l_Lean_MVarId_byCasesDec___closed__1_once, _init_l_Lean_MVarId_byCasesDec___closed__1);
v___x_4462_ = l_Lean_mkConst(v___x_4461_, v___x_4460_);
return v___x_4462_;
}
}
static lean_object* _init_l_Lean_MVarId_byCasesDec___closed__3(void){
_start:
{
lean_object* v___x_4463_; 
v___x_4463_ = lean_mk_string_unchecked("Tactic `byCasesDec` failed: Casing on", 37, 37);
return v___x_4463_;
}
}
static lean_object* _init_l_Lean_MVarId_byCasesDec___closed__4(void){
_start:
{
lean_object* v___x_4464_; lean_object* v___x_4465_; 
v___x_4464_ = lean_obj_once(&l_Lean_MVarId_byCasesDec___closed__3, &l_Lean_MVarId_byCasesDec___closed__3_once, _init_l_Lean_MVarId_byCasesDec___closed__3);
v___x_4465_ = l_Lean_stringToMessageData(v___x_4464_);
return v___x_4465_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object* v_mvarId_4466_, lean_object* v_p_4467_, lean_object* v_dec_4468_, lean_object* v_hName_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_){
_start:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4475_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__1, &l_Lean_MVarId_byCases___closed__1_once, _init_l_Lean_MVarId_byCases___closed__1);
v___x_4476_ = lean_box(0);
v___x_4477_ = lean_obj_once(&l_Lean_MVarId_byCasesDec___closed__2, &l_Lean_MVarId_byCasesDec___closed__2_once, _init_l_Lean_MVarId_byCasesDec___closed__2);
lean_inc_ref(v_p_4467_);
v___x_4478_ = l_Lean_Expr_app___override(v___x_4477_, v_p_4467_);
v___x_4479_ = l_Lean_MVarId_assert(v_mvarId_4466_, v___x_4475_, v___x_4478_, v_dec_4468_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; uint8_t v___x_4481_; lean_object* v___x_4482_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4480_);
lean_dec_ref(v___x_4479_);
v___x_4481_ = 0;
v___x_4482_ = l_Lean_Meta_intro1Core(v_a_4480_, v___x_4481_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
if (lean_obj_tag(v___x_4482_) == 0)
{
lean_object* v_a_4483_; lean_object* v_fst_4484_; lean_object* v_snd_4485_; lean_object* v___x_4487_; uint8_t v_isShared_4488_; uint8_t v_isSharedCheck_4549_; 
v_a_4483_ = lean_ctor_get(v___x_4482_, 0);
lean_inc(v_a_4483_);
lean_dec_ref(v___x_4482_);
v_fst_4484_ = lean_ctor_get(v_a_4483_, 0);
v_snd_4485_ = lean_ctor_get(v_a_4483_, 1);
v_isSharedCheck_4549_ = !lean_is_exclusive(v_a_4483_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4487_ = v_a_4483_;
v_isShared_4488_ = v_isSharedCheck_4549_;
goto v_resetjp_4486_;
}
else
{
lean_inc(v_snd_4485_);
lean_inc(v_fst_4484_);
lean_dec(v_a_4483_);
v___x_4487_ = lean_box(0);
v_isShared_4488_ = v_isSharedCheck_4549_;
goto v_resetjp_4486_;
}
v_resetjp_4486_:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4489_, 0, v_hName_4469_);
lean_ctor_set(v___x_4489_, 1, v___x_4476_);
v___x_4490_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4490_, 0, v___x_4489_);
lean_ctor_set_uint8(v___x_4490_, sizeof(void*)*1, v___x_4481_);
v___x_4491_ = lean_unsigned_to_nat(2u);
v___x_4492_ = lean_mk_empty_array_with_capacity(v___x_4491_);
lean_inc_ref(v___x_4490_);
v___x_4493_ = lean_array_push(v___x_4492_, v___x_4490_);
v___x_4494_ = lean_array_push(v___x_4493_, v___x_4490_);
v___x_4495_ = lean_box(0);
v___x_4496_ = l_Lean_Meta_Cases_cases(v_snd_4485_, v_fst_4484_, v___x_4494_, v___x_4481_, v___x_4495_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
if (lean_obj_tag(v___x_4496_) == 0)
{
lean_object* v_a_4497_; lean_object* v___x_4498_; uint8_t v___x_4499_; 
v_a_4497_ = lean_ctor_get(v___x_4496_, 0);
lean_inc(v_a_4497_);
lean_dec_ref(v___x_4496_);
v___x_4498_ = lean_array_get_size(v_a_4497_);
v___x_4499_ = lean_nat_dec_eq(v___x_4498_, v___x_4491_);
if (v___x_4499_ == 0)
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
lean_dec(v_a_4497_);
lean_del_object(v___x_4487_);
v___x_4500_ = lean_obj_once(&l_Lean_MVarId_byCasesDec___closed__4, &l_Lean_MVarId_byCasesDec___closed__4_once, _init_l_Lean_MVarId_byCasesDec___closed__4);
v___x_4501_ = lean_unsigned_to_nat(30u);
v___x_4502_ = l_Lean_inlineExpr(v_p_4467_, v___x_4501_);
v___x_4503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4503_, 0, v___x_4500_);
lean_ctor_set(v___x_4503_, 1, v___x_4502_);
v___x_4504_ = lean_obj_once(&l_Lean_MVarId_byCases___closed__5, &l_Lean_MVarId_byCases___closed__5_once, _init_l_Lean_MVarId_byCases___closed__5);
v___x_4505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4505_, 0, v___x_4503_);
lean_ctor_set(v___x_4505_, 1, v___x_4504_);
v___x_4506_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_4505_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
return v___x_4506_;
}
else
{
lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
lean_dec_ref(v_p_4467_);
v___x_4507_ = lean_unsigned_to_nat(1u);
v___x_4508_ = lean_array_fget_borrowed(v_a_4497_, v___x_4507_);
lean_inc(v___x_4508_);
v___x_4509_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(v___x_4508_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
if (lean_obj_tag(v___x_4509_) == 0)
{
lean_object* v_a_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v_a_4510_ = lean_ctor_get(v___x_4509_, 0);
lean_inc(v_a_4510_);
lean_dec_ref(v___x_4509_);
v___x_4511_ = lean_unsigned_to_nat(0u);
v___x_4512_ = lean_array_fget(v_a_4497_, v___x_4511_);
lean_dec(v_a_4497_);
v___x_4513_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_toByCasesSubgoal(v___x_4512_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
if (lean_obj_tag(v___x_4513_) == 0)
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4524_; 
v_a_4514_ = lean_ctor_get(v___x_4513_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4513_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4516_ = v___x_4513_;
v_isShared_4517_ = v_isSharedCheck_4524_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4513_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4524_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4488_ == 0)
{
lean_ctor_set(v___x_4487_, 1, v_a_4514_);
lean_ctor_set(v___x_4487_, 0, v_a_4510_);
v___x_4519_ = v___x_4487_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4510_);
lean_ctor_set(v_reuseFailAlloc_4523_, 1, v_a_4514_);
v___x_4519_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
lean_object* v___x_4521_; 
if (v_isShared_4517_ == 0)
{
lean_ctor_set(v___x_4516_, 0, v___x_4519_);
v___x_4521_ = v___x_4516_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v___x_4519_);
v___x_4521_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
return v___x_4521_;
}
}
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec(v_a_4510_);
lean_del_object(v___x_4487_);
v_a_4525_ = lean_ctor_get(v___x_4513_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4513_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4513_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4513_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4540_; 
lean_dec(v_a_4497_);
lean_del_object(v___x_4487_);
v_a_4533_ = lean_ctor_get(v___x_4509_, 0);
v_isSharedCheck_4540_ = !lean_is_exclusive(v___x_4509_);
if (v_isSharedCheck_4540_ == 0)
{
v___x_4535_ = v___x_4509_;
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4509_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4540_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4538_; 
if (v_isShared_4536_ == 0)
{
v___x_4538_ = v___x_4535_;
goto v_reusejp_4537_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v_a_4533_);
v___x_4538_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4537_;
}
v_reusejp_4537_:
{
return v___x_4538_;
}
}
}
}
}
else
{
lean_object* v_a_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4548_; 
lean_del_object(v___x_4487_);
lean_dec_ref(v_p_4467_);
v_a_4541_ = lean_ctor_get(v___x_4496_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4543_ = v___x_4496_;
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
else
{
lean_inc(v_a_4541_);
lean_dec(v___x_4496_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4546_; 
if (v_isShared_4544_ == 0)
{
v___x_4546_ = v___x_4543_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_a_4541_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
lean_dec(v_hName_4469_);
lean_dec_ref(v_p_4467_);
v_a_4550_ = lean_ctor_get(v___x_4482_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4482_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4482_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4482_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4565_; 
lean_dec(v_hName_4469_);
lean_dec_ref(v_p_4467_);
v_a_4558_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4560_ = v___x_4479_;
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_a_4558_);
lean_dec(v___x_4479_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4565_;
goto v_resetjp_4559_;
}
v_resetjp_4559_:
{
lean_object* v___x_4563_; 
if (v_isShared_4561_ == 0)
{
v___x_4563_ = v___x_4560_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v_a_4558_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object* v_mvarId_4566_, lean_object* v_p_4567_, lean_object* v_dec_4568_, lean_object* v_hName_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_){
_start:
{
lean_object* v_res_4575_; 
v_res_4575_ = l_Lean_MVarId_byCasesDec(v_mvarId_4566_, v_p_4567_, v_dec_4568_, v_hName_4569_, v_a_4570_, v_a_4571_, v_a_4572_, v_a_4573_);
lean_dec(v_a_4573_);
lean_dec_ref(v_a_4572_);
lean_dec(v_a_4571_);
lean_dec_ref(v_a_4570_);
return v_res_4575_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___x_4576_ = lean_obj_once(&l_Lean_Meta_Cases_cases___closed__0, &l_Lean_Meta_Cases_cases___closed__0_once, _init_l_Lean_Meta_Cases_cases___closed__0);
v___x_4577_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__5, &l_Lean_Meta_Cases_cases___lam__0___closed__5_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__5);
v___x_4578_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__4, &l_Lean_Meta_Cases_cases___lam__0___closed__4_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__4);
v___x_4579_ = l_Lean_Name_mkStr3(v___x_4578_, v___x_4577_, v___x_4576_);
return v___x_4579_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4580_; 
v___x_4580_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_4580_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; 
v___x_4581_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4582_ = lean_box(0);
v___x_4583_ = l_Lean_Name_str___override(v___x_4582_, v___x_4581_);
return v___x_4583_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4584_; 
v___x_4584_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4584_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4585_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4586_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4587_ = l_Lean_Name_str___override(v___x_4586_, v___x_4585_);
return v___x_4587_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4588_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__4, &l_Lean_Meta_Cases_cases___lam__0___closed__4_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__4);
v___x_4589_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4590_ = l_Lean_Name_str___override(v___x_4589_, v___x_4588_);
return v___x_4590_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4591_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__5, &l_Lean_Meta_Cases_cases___lam__0___closed__5_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__5);
v___x_4592_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4593_ = l_Lean_Name_str___override(v___x_4592_, v___x_4591_);
return v___x_4593_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4594_; 
v___x_4594_ = lean_mk_string_unchecked("Cases", 5, 5);
return v___x_4594_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4595_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4596_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4597_ = l_Lean_Name_str___override(v___x_4596_, v___x_4595_);
return v___x_4597_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4598_ = lean_unsigned_to_nat(0u);
v___x_4599_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4600_ = l_Lean_Name_num___override(v___x_4599_, v___x_4598_);
return v___x_4600_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; 
v___x_4601_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4602_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4603_ = l_Lean_Name_str___override(v___x_4602_, v___x_4601_);
return v___x_4603_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4604_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__4, &l_Lean_Meta_Cases_cases___lam__0___closed__4_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__4);
v___x_4605_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4606_ = l_Lean_Name_str___override(v___x_4605_, v___x_4604_);
return v___x_4606_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4607_; 
v___x_4607_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_4607_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4608_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4609_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4610_ = l_Lean_Name_str___override(v___x_4609_, v___x_4608_);
return v___x_4610_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4611_; 
v___x_4611_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_4611_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4612_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4613_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4614_ = l_Lean_Name_str___override(v___x_4613_, v___x_4612_);
return v___x_4614_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4615_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4616_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4617_ = l_Lean_Name_str___override(v___x_4616_, v___x_4615_);
return v___x_4617_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4618_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__4, &l_Lean_Meta_Cases_cases___lam__0___closed__4_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__4);
v___x_4619_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4620_ = l_Lean_Name_str___override(v___x_4619_, v___x_4618_);
return v___x_4620_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4621_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__5, &l_Lean_Meta_Cases_cases___lam__0___closed__5_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__5);
v___x_4622_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4623_ = l_Lean_Name_str___override(v___x_4622_, v___x_4621_);
return v___x_4623_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; 
v___x_4624_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4626_ = l_Lean_Name_str___override(v___x_4625_, v___x_4624_);
return v___x_4626_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4627_ = lean_unsigned_to_nat(2897961615u);
v___x_4628_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4629_ = l_Lean_Name_num___override(v___x_4628_, v___x_4627_);
return v___x_4629_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4630_; 
v___x_4630_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_4630_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4631_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4632_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4633_ = l_Lean_Name_str___override(v___x_4632_, v___x_4631_);
return v___x_4633_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4634_; 
v___x_4634_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_4634_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4635_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4636_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4637_ = l_Lean_Name_str___override(v___x_4636_, v___x_4635_);
return v___x_4637_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4638_ = lean_unsigned_to_nat(2u);
v___x_4639_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4640_ = l_Lean_Name_num___override(v___x_4639_, v___x_4638_);
return v___x_4640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4642_; uint8_t v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4642_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4643_ = 0;
v___x_4644_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_);
v___x_4645_ = l_Lean_registerTraceClass(v___x_4642_, v___x_4643_, v___x_4644_);
return v___x_4645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2____boxed(lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_();
return v_res_4647_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_2897961615____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cases(builtin);
}
#ifdef __cplusplus
}
#endif
