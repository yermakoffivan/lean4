// Lean compiler output
// Module: Lean.Meta.Tactic.Injection
// Imports: public import Lean.Meta.Tactic.Subst
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
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
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEqHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_solved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_solved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_subgoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_subgoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__3;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__4;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__5;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__6;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__7;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__8;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__9;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__10;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__11;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__12;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__13;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_injectionCore___lam__1___closed__14;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__15;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__16;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__17;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__18;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__19;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__20;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__21;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__22;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__23;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__24;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__25;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__26;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__27;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__28;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__29;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__30;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__31;
static lean_once_cell_t l_Lean_Meta_injectionCore___lam__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___lam__1___closed__32;
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_injectionCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___closed__0;
static lean_once_cell_t l_Lean_Meta_injectionCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionCore___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_solved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_solved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_subgoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_subgoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__0;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__1;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__2;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__3;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__4;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__5;
static lean_once_cell_t l_Lean_Meta_injectionIntro___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_injectionIntro___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_injectionIntro(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injectionIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_solved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_solved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_subgoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_subgoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injections___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_injections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, uint8_t v_whnfType_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_20_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_19_, v___f_28_, v_cleanupAnnotations_21_, v_whnfType_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg___boxed(lean_object* v_type_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; uint8_t v_whnfType_boxed_56_; lean_object* v_res_57_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_56_ = lean_unbox(v_whnfType_49_);
v_res_57_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg(v_type_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v_whnfType_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1(lean_object* v_00_u03b1_58_, lean_object* v_type_59_, lean_object* v_k_60_, uint8_t v_cleanupAnnotations_61_, uint8_t v_whnfType_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg(v_type_59_, v_k_60_, v_cleanupAnnotations_61_, v_whnfType_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___boxed(lean_object* v_00_u03b1_69_, lean_object* v_type_70_, lean_object* v_k_71_, lean_object* v_cleanupAnnotations_72_, lean_object* v_whnfType_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_79_; uint8_t v_whnfType_boxed_80_; lean_object* v_res_81_; 
v_cleanupAnnotations_boxed_79_ = lean_unbox(v_cleanupAnnotations_72_);
v_whnfType_boxed_80_ = lean_unbox(v_whnfType_73_);
v_res_81_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1(v_00_u03b1_69_, v_type_70_, v_k_71_, v_cleanupAnnotations_boxed_79_, v_whnfType_boxed_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg(lean_object* v_upperBound_82_, lean_object* v_ctorInfo_83_, lean_object* v_xs_84_, lean_object* v_a_85_, lean_object* v_b_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_nat_dec_lt(v_a_85_, v_upperBound_82_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec(v_a_85_);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_b_86_);
return v___x_93_;
}
else
{
lean_object* v_numParams_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_numParams_94_ = lean_ctor_get(v_ctorInfo_83_, 3);
v___x_95_ = l_Lean_instInhabitedExpr;
v___x_96_ = lean_nat_add(v_numParams_94_, v_a_85_);
v___x_97_ = lean_array_get_borrowed(v___x_95_, v_xs_84_, v___x_96_);
lean_dec(v___x_96_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
lean_inc(v___y_88_);
lean_inc_ref(v___y_87_);
lean_inc(v___x_97_);
v___x_98_ = lean_infer_type(v___x_97_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref(v___x_98_);
v___x_100_ = l_Lean_Meta_isProp(v_a_99_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v_a_103_; uint8_t v___x_107_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
lean_dec_ref(v___x_100_);
v___x_107_ = lean_unbox(v_a_101_);
lean_dec(v_a_101_);
if (v___x_107_ == 0)
{
v_a_103_ = v_b_86_;
goto v___jp_102_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1u);
v___x_109_ = lean_nat_add(v_b_86_, v___x_108_);
lean_dec(v_b_86_);
v_a_103_ = v___x_109_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(1u);
v___x_105_ = lean_nat_add(v_a_85_, v___x_104_);
lean_dec(v_a_85_);
v_a_85_ = v___x_105_;
v_b_86_ = v_a_103_;
goto _start;
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
lean_dec(v_b_86_);
lean_dec(v_a_85_);
v_a_110_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___x_100_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_100_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
lean_dec(v_b_86_);
lean_dec(v_a_85_);
v_a_118_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___x_98_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_98_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg___boxed(lean_object* v_upperBound_126_, lean_object* v_ctorInfo_127_, lean_object* v_xs_128_, lean_object* v_a_129_, lean_object* v_b_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg(v_upperBound_126_, v_ctorInfo_127_, v_xs_128_, v_a_129_, v_b_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec_ref(v_xs_128_);
lean_dec_ref(v_ctorInfo_127_);
lean_dec(v_upperBound_126_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___lam__0(lean_object* v_numFields_137_, lean_object* v_ctorInfo_138_, lean_object* v_xs_139_, lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_unsigned_to_nat(0u);
v___x_147_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg(v_numFields_137_, v_ctorInfo_138_, v_xs_139_, v___x_146_, v___x_146_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___lam__0___boxed(lean_object* v_numFields_148_, lean_object* v_ctorInfo_149_, lean_object* v_xs_150_, lean_object* v_x_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lean_Meta_getCtorNumPropFields___lam__0(v_numFields_148_, v_ctorInfo_149_, v_xs_150_, v_x_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec_ref(v_x_151_);
lean_dec_ref(v_xs_150_);
lean_dec_ref(v_ctorInfo_149_);
lean_dec(v_numFields_148_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields(lean_object* v_ctorInfo_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_toConstantVal_164_; lean_object* v_numFields_165_; lean_object* v_type_166_; lean_object* v___f_167_; uint8_t v___x_168_; lean_object* v___x_169_; 
v_toConstantVal_164_ = lean_ctor_get(v_ctorInfo_158_, 0);
v_numFields_165_ = lean_ctor_get(v_ctorInfo_158_, 4);
lean_inc(v_numFields_165_);
v_type_166_ = lean_ctor_get(v_toConstantVal_164_, 2);
lean_inc_ref(v_type_166_);
v___f_167_ = lean_alloc_closure((void*)(l_Lean_Meta_getCtorNumPropFields___lam__0___boxed), 9, 2);
lean_closure_set(v___f_167_, 0, v_numFields_165_);
lean_closure_set(v___f_167_, 1, v_ctorInfo_158_);
v___x_168_ = 0;
v___x_169_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getCtorNumPropFields_spec__1___redArg(v_type_166_, v___f_167_, v___x_168_, v___x_168_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorNumPropFields___boxed(lean_object* v_ctorInfo_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Meta_getCtorNumPropFields(v_ctorInfo_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0(lean_object* v_upperBound_177_, lean_object* v_ctorInfo_178_, lean_object* v_xs_179_, lean_object* v_inst_180_, lean_object* v_R_181_, lean_object* v_a_182_, lean_object* v_b_183_, lean_object* v_c_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___redArg(v_upperBound_177_, v_ctorInfo_178_, v_xs_179_, v_a_182_, v_b_183_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0___boxed(lean_object* v_upperBound_191_, lean_object* v_ctorInfo_192_, lean_object* v_xs_193_, lean_object* v_inst_194_, lean_object* v_R_195_, lean_object* v_a_196_, lean_object* v_b_197_, lean_object* v_c_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_getCtorNumPropFields_spec__0(v_upperBound_191_, v_ctorInfo_192_, v_xs_193_, v_inst_194_, v_R_195_, v_a_196_, v_b_197_, v_c_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec_ref(v_xs_193_);
lean_dec_ref(v_ctorInfo_192_);
lean_dec(v_upperBound_191_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorIdx(lean_object* v_x_205_){
_start:
{
if (lean_obj_tag(v_x_205_) == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_unsigned_to_nat(0u);
return v___x_206_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_unsigned_to_nat(1u);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorIdx___boxed(lean_object* v_x_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Meta_InjectionResultCore_ctorIdx(v_x_208_);
lean_dec(v_x_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim___redArg(lean_object* v_t_210_, lean_object* v_k_211_){
_start:
{
if (lean_obj_tag(v_t_210_) == 0)
{
return v_k_211_;
}
else
{
lean_object* v_mvarId_212_; lean_object* v_numNewEqs_213_; lean_object* v___x_214_; 
v_mvarId_212_ = lean_ctor_get(v_t_210_, 0);
lean_inc(v_mvarId_212_);
v_numNewEqs_213_ = lean_ctor_get(v_t_210_, 1);
lean_inc(v_numNewEqs_213_);
lean_dec_ref(v_t_210_);
v___x_214_ = lean_apply_2(v_k_211_, v_mvarId_212_, v_numNewEqs_213_);
return v___x_214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim(lean_object* v_motive_215_, lean_object* v_ctorIdx_216_, lean_object* v_t_217_, lean_object* v_h_218_, lean_object* v_k_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Meta_InjectionResultCore_ctorElim___redArg(v_t_217_, v_k_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_ctorElim___boxed(lean_object* v_motive_221_, lean_object* v_ctorIdx_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_k_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_InjectionResultCore_ctorElim(v_motive_221_, v_ctorIdx_222_, v_t_223_, v_h_224_, v_k_225_);
lean_dec(v_ctorIdx_222_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_solved_elim___redArg(lean_object* v_t_227_, lean_object* v_solved_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Meta_InjectionResultCore_ctorElim___redArg(v_t_227_, v_solved_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_solved_elim(lean_object* v_motive_230_, lean_object* v_t_231_, lean_object* v_h_232_, lean_object* v_solved_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lean_Meta_InjectionResultCore_ctorElim___redArg(v_t_231_, v_solved_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_subgoal_elim___redArg(lean_object* v_t_235_, lean_object* v_subgoal_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Meta_InjectionResultCore_ctorElim___redArg(v_t_235_, v_subgoal_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResultCore_subgoal_elim(lean_object* v_motive_238_, lean_object* v_t_239_, lean_object* v_h_240_, lean_object* v_subgoal_241_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Meta_InjectionResultCore_ctorElim___redArg(v_t_239_, v_subgoal_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(lean_object* v_mvarId_243_, lean_object* v_x_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_243_, v_x_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_250_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_250_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
v_a_259_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_250_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_250_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg___boxed(lean_object* v_mvarId_267_, lean_object* v_x_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(v_mvarId_267_, v_x_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2(lean_object* v_00_u03b1_275_, lean_object* v_mvarId_276_, lean_object* v_x_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(v_mvarId_276_, v_x_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___boxed(lean_object* v_00_u03b1_284_, lean_object* v_mvarId_285_, lean_object* v_x_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2(v_00_u03b1_284_, v_mvarId_285_, v_x_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__0___closed__0, &l_Lean_Meta_injectionCore___lam__0___closed__0_once, _init_l_Lean_Meta_injectionCore___lam__0___closed__0);
v___x_295_ = l_Lean_Name_mkStr1(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__0(lean_object* v___x_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v_options_302_; uint8_t v_hasTrace_303_; 
v_options_302_ = lean_ctor_get(v___y_299_, 2);
v_hasTrace_303_ = lean_ctor_get_uint8(v_options_302_, sizeof(void*)*1);
if (v_hasTrace_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec(v___x_296_);
v___x_304_ = lean_box(v_hasTrace_303_);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
else
{
lean_object* v_inheritedTraceOptions_306_; lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_inheritedTraceOptions_306_ = lean_ctor_get(v___y_299_, 13);
v___x_307_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__0___closed__1, &l_Lean_Meta_injectionCore___lam__0___closed__1_once, _init_l_Lean_Meta_injectionCore___lam__0___closed__1);
v___x_308_ = l_Lean_Name_append(v___x_307_, v___x_296_);
v___x_309_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_306_, v_options_302_, v___x_308_);
lean_dec(v___x_308_);
v___x_310_ = lean_box(v___x_309_);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__0___boxed(lean_object* v___x_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Meta_injectionCore___lam__0(v___x_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v_x_321_, lean_object* v_x_322_){
_start:
{
lean_object* v_ks_323_; lean_object* v_vs_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_348_; 
v_ks_323_ = lean_ctor_get(v_x_319_, 0);
v_vs_324_ = lean_ctor_get(v_x_319_, 1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_348_ == 0)
{
v___x_326_ = v_x_319_;
v_isShared_327_ = v_isSharedCheck_348_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_vs_324_);
lean_inc(v_ks_323_);
lean_dec(v_x_319_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_348_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = lean_array_get_size(v_ks_323_);
v___x_329_ = lean_nat_dec_lt(v_x_320_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
lean_dec(v_x_320_);
v___x_330_ = lean_array_push(v_ks_323_, v_x_321_);
v___x_331_ = lean_array_push(v_vs_324_, v_x_322_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 1, v___x_331_);
lean_ctor_set(v___x_326_, 0, v___x_330_);
v___x_333_ = v___x_326_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
else
{
lean_object* v_k_x27_335_; uint8_t v___x_336_; 
v_k_x27_335_ = lean_array_fget_borrowed(v_ks_323_, v_x_320_);
v___x_336_ = l_Lean_instBEqMVarId_beq(v_x_321_, v_k_x27_335_);
if (v___x_336_ == 0)
{
lean_object* v___x_338_; 
if (v_isShared_327_ == 0)
{
v___x_338_ = v___x_326_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_ks_323_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_vs_324_);
v___x_338_ = v_reuseFailAlloc_342_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_x_320_, v___x_339_);
lean_dec(v_x_320_);
v_x_319_ = v___x_338_;
v_x_320_ = v___x_340_;
goto _start;
}
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_346_; 
v___x_343_ = lean_array_fset(v_ks_323_, v_x_320_, v_x_321_);
v___x_344_ = lean_array_fset(v_vs_324_, v_x_320_, v_x_322_);
lean_dec(v_x_320_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 1, v___x_344_);
lean_ctor_set(v___x_326_, 0, v___x_343_);
v___x_346_ = v___x_326_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_343_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_n_349_, lean_object* v_k_350_, lean_object* v_v_351_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_n_349_, v___x_352_, v_k_350_, v_v_351_);
return v___x_353_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; 
v___x_354_ = ((size_t)5ULL);
v___x_355_ = ((size_t)1ULL);
v___x_356_ = lean_usize_shift_left(v___x_355_, v___x_354_);
return v___x_356_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_357_; size_t v___x_358_; size_t v___x_359_; 
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_359_ = lean_usize_sub(v___x_358_, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(lean_object* v_x_361_, size_t v_x_362_, size_t v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
if (lean_obj_tag(v_x_361_) == 0)
{
lean_object* v_es_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; lean_object* v_j_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_es_366_ = lean_ctor_get(v_x_361_, 0);
v___x_367_ = ((size_t)5ULL);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_370_ = lean_usize_land(v_x_362_, v___x_369_);
v_j_371_ = lean_usize_to_nat(v___x_370_);
v___x_372_ = lean_array_get_size(v_es_366_);
v___x_373_ = lean_nat_dec_lt(v_j_371_, v___x_372_);
if (v___x_373_ == 0)
{
lean_dec(v_j_371_);
lean_dec(v_x_365_);
lean_dec(v_x_364_);
return v_x_361_;
}
else
{
lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_410_; 
lean_inc_ref(v_es_366_);
v_isSharedCheck_410_ = !lean_is_exclusive(v_x_361_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; 
v_unused_411_ = lean_ctor_get(v_x_361_, 0);
lean_dec(v_unused_411_);
v___x_375_ = v_x_361_;
v_isShared_376_ = v_isSharedCheck_410_;
goto v_resetjp_374_;
}
else
{
lean_dec(v_x_361_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_410_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_v_377_; lean_object* v___x_378_; lean_object* v_xs_x27_379_; lean_object* v___y_381_; 
v_v_377_ = lean_array_fget(v_es_366_, v_j_371_);
v___x_378_ = lean_box(0);
v_xs_x27_379_ = lean_array_fset(v_es_366_, v_j_371_, v___x_378_);
switch(lean_obj_tag(v_v_377_))
{
case 0:
{
lean_object* v_key_386_; lean_object* v_val_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_397_; 
v_key_386_ = lean_ctor_get(v_v_377_, 0);
v_val_387_ = lean_ctor_get(v_v_377_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v_v_377_);
if (v_isSharedCheck_397_ == 0)
{
v___x_389_ = v_v_377_;
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_val_387_);
lean_inc(v_key_386_);
lean_dec(v_v_377_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_397_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
uint8_t v___x_391_; 
v___x_391_ = l_Lean_instBEqMVarId_beq(v_x_364_, v_key_386_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_del_object(v___x_389_);
v___x_392_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_386_, v_val_387_, v_x_364_, v_x_365_);
v___x_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
v___y_381_ = v___x_393_;
goto v___jp_380_;
}
else
{
lean_object* v___x_395_; 
lean_dec(v_val_387_);
lean_dec(v_key_386_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 1, v_x_365_);
lean_ctor_set(v___x_389_, 0, v_x_364_);
v___x_395_ = v___x_389_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_x_364_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_x_365_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
v___y_381_ = v___x_395_;
goto v___jp_380_;
}
}
}
}
case 1:
{
lean_object* v_node_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_408_; 
v_node_398_ = lean_ctor_get(v_v_377_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v_v_377_);
if (v_isSharedCheck_408_ == 0)
{
v___x_400_ = v_v_377_;
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_node_398_);
lean_dec(v_v_377_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
size_t v___x_402_; size_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_402_ = lean_usize_shift_right(v_x_362_, v___x_367_);
v___x_403_ = lean_usize_add(v_x_363_, v___x_368_);
v___x_404_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(v_node_398_, v___x_402_, v___x_403_, v_x_364_, v_x_365_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_404_);
v___x_406_ = v___x_400_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
v___y_381_ = v___x_406_;
goto v___jp_380_;
}
}
}
default: 
{
lean_object* v___x_409_; 
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v_x_364_);
lean_ctor_set(v___x_409_, 1, v_x_365_);
v___y_381_ = v___x_409_;
goto v___jp_380_;
}
}
v___jp_380_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_382_ = lean_array_fset(v_xs_x27_379_, v_j_371_, v___y_381_);
lean_dec(v_j_371_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_382_);
v___x_384_ = v___x_375_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
else
{
lean_object* v_ks_412_; lean_object* v_vs_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_433_; 
v_ks_412_ = lean_ctor_get(v_x_361_, 0);
v_vs_413_ = lean_ctor_get(v_x_361_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_x_361_);
if (v_isSharedCheck_433_ == 0)
{
v___x_415_ = v_x_361_;
v_isShared_416_ = v_isSharedCheck_433_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_vs_413_);
lean_inc(v_ks_412_);
lean_dec(v_x_361_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_433_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_ks_412_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_vs_413_);
v___x_418_ = v_reuseFailAlloc_432_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v_newNode_419_; uint8_t v___y_421_; size_t v___x_427_; uint8_t v___x_428_; 
v_newNode_419_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5___redArg(v___x_418_, v_x_364_, v_x_365_);
v___x_427_ = ((size_t)7ULL);
v___x_428_ = lean_usize_dec_le(v___x_427_, v_x_363_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_429_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_419_);
v___x_430_ = lean_unsigned_to_nat(4u);
v___x_431_ = lean_nat_dec_lt(v___x_429_, v___x_430_);
lean_dec(v___x_429_);
v___y_421_ = v___x_431_;
goto v___jp_420_;
}
else
{
v___y_421_ = v___x_428_;
goto v___jp_420_;
}
v___jp_420_:
{
if (v___y_421_ == 0)
{
lean_object* v_ks_422_; lean_object* v_vs_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_ks_422_ = lean_ctor_get(v_newNode_419_, 0);
lean_inc_ref(v_ks_422_);
v_vs_423_ = lean_ctor_get(v_newNode_419_, 1);
lean_inc_ref(v_vs_423_);
lean_dec_ref(v_newNode_419_);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_426_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg(v_x_363_, v_ks_422_, v_vs_423_, v___x_424_, v___x_425_);
lean_dec_ref(v_vs_423_);
lean_dec_ref(v_ks_422_);
return v___x_426_;
}
else
{
return v_newNode_419_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg(size_t v_depth_434_, lean_object* v_keys_435_, lean_object* v_vals_436_, lean_object* v_i_437_, lean_object* v_entries_438_){
_start:
{
lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_439_ = lean_array_get_size(v_keys_435_);
v___x_440_ = lean_nat_dec_lt(v_i_437_, v___x_439_);
if (v___x_440_ == 0)
{
lean_dec(v_i_437_);
return v_entries_438_;
}
else
{
lean_object* v_k_441_; lean_object* v_v_442_; uint64_t v___x_443_; size_t v_h_444_; size_t v___x_445_; lean_object* v___x_446_; size_t v___x_447_; size_t v___x_448_; size_t v___x_449_; size_t v_h_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_k_441_ = lean_array_fget_borrowed(v_keys_435_, v_i_437_);
v_v_442_ = lean_array_fget_borrowed(v_vals_436_, v_i_437_);
v___x_443_ = l_Lean_instHashableMVarId_hash(v_k_441_);
v_h_444_ = lean_uint64_to_usize(v___x_443_);
v___x_445_ = ((size_t)5ULL);
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = ((size_t)1ULL);
v___x_448_ = lean_usize_sub(v_depth_434_, v___x_447_);
v___x_449_ = lean_usize_mul(v___x_445_, v___x_448_);
v_h_450_ = lean_usize_shift_right(v_h_444_, v___x_449_);
v___x_451_ = lean_nat_add(v_i_437_, v___x_446_);
lean_dec(v_i_437_);
lean_inc(v_v_442_);
lean_inc(v_k_441_);
v___x_452_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(v_entries_438_, v_h_450_, v_depth_434_, v_k_441_, v_v_442_);
v_i_437_ = v___x_451_;
v_entries_438_ = v___x_452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_depth_454_, lean_object* v_keys_455_, lean_object* v_vals_456_, lean_object* v_i_457_, lean_object* v_entries_458_){
_start:
{
size_t v_depth_boxed_459_; lean_object* v_res_460_; 
v_depth_boxed_459_ = lean_unbox_usize(v_depth_454_);
lean_dec(v_depth_454_);
v_res_460_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_boxed_459_, v_keys_455_, v_vals_456_, v_i_457_, v_entries_458_);
lean_dec_ref(v_vals_456_);
lean_dec_ref(v_keys_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_, lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
size_t v_x_16585__boxed_466_; size_t v_x_16586__boxed_467_; lean_object* v_res_468_; 
v_x_16585__boxed_466_ = lean_unbox_usize(v_x_462_);
lean_dec(v_x_462_);
v_x_16586__boxed_467_ = lean_unbox_usize(v_x_463_);
lean_dec(v_x_463_);
v_res_468_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(v_x_461_, v_x_16585__boxed_466_, v_x_16586__boxed_467_, v_x_464_, v_x_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0___redArg(lean_object* v_x_469_, lean_object* v_x_470_, lean_object* v_x_471_){
_start:
{
uint64_t v___x_472_; size_t v___x_473_; size_t v___x_474_; lean_object* v___x_475_; 
v___x_472_ = l_Lean_instHashableMVarId_hash(v_x_470_);
v___x_473_ = lean_uint64_to_usize(v___x_472_);
v___x_474_ = ((size_t)1ULL);
v___x_475_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(v_x_469_, v___x_473_, v___x_474_, v_x_470_, v_x_471_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(lean_object* v_mvarId_476_, lean_object* v_val_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_mctx_483_; lean_object* v_cache_484_; lean_object* v_zetaDeltaFVarIds_485_; lean_object* v_postponed_486_; lean_object* v_diag_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_515_; 
v___x_481_ = lean_st_ref_get(v___y_479_);
lean_dec(v___x_481_);
v___x_482_ = lean_st_ref_take(v___y_478_);
v_mctx_483_ = lean_ctor_get(v___x_482_, 0);
v_cache_484_ = lean_ctor_get(v___x_482_, 1);
v_zetaDeltaFVarIds_485_ = lean_ctor_get(v___x_482_, 2);
v_postponed_486_ = lean_ctor_get(v___x_482_, 3);
v_diag_487_ = lean_ctor_get(v___x_482_, 4);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_515_ == 0)
{
v___x_489_ = v___x_482_;
v_isShared_490_ = v_isSharedCheck_515_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_diag_487_);
lean_inc(v_postponed_486_);
lean_inc(v_zetaDeltaFVarIds_485_);
lean_inc(v_cache_484_);
lean_inc(v_mctx_483_);
lean_dec(v___x_482_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_515_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v_depth_491_; lean_object* v_levelAssignDepth_492_; lean_object* v_lmvarCounter_493_; lean_object* v_mvarCounter_494_; lean_object* v_lDecls_495_; lean_object* v_decls_496_; lean_object* v_userNames_497_; lean_object* v_lAssignment_498_; lean_object* v_eAssignment_499_; lean_object* v_dAssignment_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_514_; 
v_depth_491_ = lean_ctor_get(v_mctx_483_, 0);
v_levelAssignDepth_492_ = lean_ctor_get(v_mctx_483_, 1);
v_lmvarCounter_493_ = lean_ctor_get(v_mctx_483_, 2);
v_mvarCounter_494_ = lean_ctor_get(v_mctx_483_, 3);
v_lDecls_495_ = lean_ctor_get(v_mctx_483_, 4);
v_decls_496_ = lean_ctor_get(v_mctx_483_, 5);
v_userNames_497_ = lean_ctor_get(v_mctx_483_, 6);
v_lAssignment_498_ = lean_ctor_get(v_mctx_483_, 7);
v_eAssignment_499_ = lean_ctor_get(v_mctx_483_, 8);
v_dAssignment_500_ = lean_ctor_get(v_mctx_483_, 9);
v_isSharedCheck_514_ = !lean_is_exclusive(v_mctx_483_);
if (v_isSharedCheck_514_ == 0)
{
v___x_502_ = v_mctx_483_;
v_isShared_503_ = v_isSharedCheck_514_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_dAssignment_500_);
lean_inc(v_eAssignment_499_);
lean_inc(v_lAssignment_498_);
lean_inc(v_userNames_497_);
lean_inc(v_decls_496_);
lean_inc(v_lDecls_495_);
lean_inc(v_mvarCounter_494_);
lean_inc(v_lmvarCounter_493_);
lean_inc(v_levelAssignDepth_492_);
lean_inc(v_depth_491_);
lean_dec(v_mctx_483_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_514_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_504_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0___redArg(v_eAssignment_499_, v_mvarId_476_, v_val_477_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 8, v___x_504_);
v___x_506_ = v___x_502_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_depth_491_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_levelAssignDepth_492_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_lmvarCounter_493_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_mvarCounter_494_);
lean_ctor_set(v_reuseFailAlloc_513_, 4, v_lDecls_495_);
lean_ctor_set(v_reuseFailAlloc_513_, 5, v_decls_496_);
lean_ctor_set(v_reuseFailAlloc_513_, 6, v_userNames_497_);
lean_ctor_set(v_reuseFailAlloc_513_, 7, v_lAssignment_498_);
lean_ctor_set(v_reuseFailAlloc_513_, 8, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_513_, 9, v_dAssignment_500_);
v___x_506_ = v_reuseFailAlloc_513_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_506_);
v___x_508_ = v___x_489_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v_cache_484_);
lean_ctor_set(v_reuseFailAlloc_512_, 2, v_zetaDeltaFVarIds_485_);
lean_ctor_set(v_reuseFailAlloc_512_, 3, v_postponed_486_);
lean_ctor_set(v_reuseFailAlloc_512_, 4, v_diag_487_);
v___x_508_ = v_reuseFailAlloc_512_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_509_ = lean_st_ref_set(v___y_478_, v___x_508_);
v___x_510_ = lean_box(0);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg___boxed(lean_object* v_mvarId_516_, lean_object* v_val_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(v_mvarId_516_, v_val_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec(v___y_518_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2(lean_object* v_msgData_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___x_528_; lean_object* v_env_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_mctx_532_; lean_object* v_lctx_533_; lean_object* v_options_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_528_ = lean_st_ref_get(v___y_526_);
v_env_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc_ref(v_env_529_);
lean_dec(v___x_528_);
v___x_530_ = lean_st_ref_get(v___y_526_);
lean_dec(v___x_530_);
v___x_531_ = lean_st_ref_get(v___y_524_);
v_mctx_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc_ref(v_mctx_532_);
lean_dec(v___x_531_);
v_lctx_533_ = lean_ctor_get(v___y_523_, 2);
v_options_534_ = lean_ctor_get(v___y_525_, 2);
lean_inc_ref(v_options_534_);
lean_inc_ref(v_lctx_533_);
v___x_535_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_535_, 0, v_env_529_);
lean_ctor_set(v___x_535_, 1, v_mctx_532_);
lean_ctor_set(v___x_535_, 2, v_lctx_533_);
lean_ctor_set(v___x_535_, 3, v_options_534_);
v___x_536_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v_msgData_522_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2___boxed(lean_object* v_msgData_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2(v_msgData_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
return v_res_544_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0(void){
_start:
{
lean_object* v___x_545_; double v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = lean_float_of_nat(v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1(void){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = lean_mk_string_unchecked("", 0, 0);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = lean_mk_empty_array_with_capacity(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(lean_object* v_cls_550_, lean_object* v_msg_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_ref_557_; lean_object* v___x_558_; lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_603_; 
v_ref_557_ = lean_ctor_get(v___y_554_, 5);
v___x_558_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1_spec__2(v_msg_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_603_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_603_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_603_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v_traceState_564_; lean_object* v_env_565_; lean_object* v_nextMacroScope_566_; lean_object* v_ngen_567_; lean_object* v_auxDeclNGen_568_; lean_object* v_cache_569_; lean_object* v_messages_570_; lean_object* v_infoState_571_; lean_object* v_snapshotTasks_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_602_; 
v___x_563_ = lean_st_ref_take(v___y_555_);
v_traceState_564_ = lean_ctor_get(v___x_563_, 4);
v_env_565_ = lean_ctor_get(v___x_563_, 0);
v_nextMacroScope_566_ = lean_ctor_get(v___x_563_, 1);
v_ngen_567_ = lean_ctor_get(v___x_563_, 2);
v_auxDeclNGen_568_ = lean_ctor_get(v___x_563_, 3);
v_cache_569_ = lean_ctor_get(v___x_563_, 5);
v_messages_570_ = lean_ctor_get(v___x_563_, 6);
v_infoState_571_ = lean_ctor_get(v___x_563_, 7);
v_snapshotTasks_572_ = lean_ctor_get(v___x_563_, 8);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_602_ == 0)
{
v___x_574_ = v___x_563_;
v_isShared_575_ = v_isSharedCheck_602_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_snapshotTasks_572_);
lean_inc(v_infoState_571_);
lean_inc(v_messages_570_);
lean_inc(v_cache_569_);
lean_inc(v_traceState_564_);
lean_inc(v_auxDeclNGen_568_);
lean_inc(v_ngen_567_);
lean_inc(v_nextMacroScope_566_);
lean_inc(v_env_565_);
lean_dec(v___x_563_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_602_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
uint64_t v_tid_576_; lean_object* v_traces_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_601_; 
v_tid_576_ = lean_ctor_get_uint64(v_traceState_564_, sizeof(void*)*1);
v_traces_577_ = lean_ctor_get(v_traceState_564_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v_traceState_564_);
if (v_isSharedCheck_601_ == 0)
{
v___x_579_ = v_traceState_564_;
v_isShared_580_ = v_isSharedCheck_601_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_traces_577_);
lean_dec(v_traceState_564_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_601_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; double v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_581_ = lean_box(0);
v___x_582_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__0);
v___x_583_ = 0;
v___x_584_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1, &l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__1);
v___x_585_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_585_, 0, v_cls_550_);
lean_ctor_set(v___x_585_, 1, v___x_581_);
lean_ctor_set(v___x_585_, 2, v___x_584_);
lean_ctor_set_float(v___x_585_, sizeof(void*)*3, v___x_582_);
lean_ctor_set_float(v___x_585_, sizeof(void*)*3 + 8, v___x_582_);
lean_ctor_set_uint8(v___x_585_, sizeof(void*)*3 + 16, v___x_583_);
v___x_586_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2, &l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___closed__2);
v___x_587_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v_a_559_);
lean_ctor_set(v___x_587_, 2, v___x_586_);
lean_inc(v_ref_557_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v_ref_557_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_PersistentArray_push___redArg(v_traces_577_, v___x_588_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_589_);
v___x_591_ = v___x_579_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_589_);
lean_ctor_set_uint64(v_reuseFailAlloc_600_, sizeof(void*)*1, v_tid_576_);
v___x_591_ = v_reuseFailAlloc_600_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_593_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 4, v___x_591_);
v___x_593_ = v___x_574_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_env_565_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_nextMacroScope_566_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_ngen_567_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_auxDeclNGen_568_);
lean_ctor_set(v_reuseFailAlloc_599_, 4, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_599_, 5, v_cache_569_);
lean_ctor_set(v_reuseFailAlloc_599_, 6, v_messages_570_);
lean_ctor_set(v_reuseFailAlloc_599_, 7, v_infoState_571_);
lean_ctor_set(v_reuseFailAlloc_599_, 8, v_snapshotTasks_572_);
v___x_593_ = v_reuseFailAlloc_599_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_594_ = lean_st_ref_set(v___y_555_, v___x_593_);
v___x_595_ = lean_box(0);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_595_);
v___x_597_ = v___x_561_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1___boxed(lean_object* v_cls_604_, lean_object* v_msg_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v_cls_604_, v_msg_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
return v_res_611_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__0(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_mk_string_unchecked("ill-formed noConfusion auxiliary construction", 45, 45);
return v___x_612_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__0, &l_Lean_Meta_injectionCore___lam__1___closed__0_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__0);
v___x_614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__2(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__1, &l_Lean_Meta_injectionCore___lam__1___closed__1_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__1);
v___x_616_ = l_Lean_MessageData_ofFormat(v___x_615_);
return v___x_616_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__2, &l_Lean_Meta_injectionCore___lam__1___closed__2_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__2);
v___x_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__4(void){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_mk_string_unchecked("equality of constructor applications expected", 45, 45);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__4, &l_Lean_Meta_injectionCore___lam__1___closed__4_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__4);
v___x_621_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__6(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__5, &l_Lean_Meta_injectionCore___lam__1___closed__5_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__5);
v___x_623_ = l_Lean_MessageData_ofFormat(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__7(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__6, &l_Lean_Meta_injectionCore___lam__1___closed__6_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__6);
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__8(void){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = lean_mk_string_unchecked("subgoal with ", 13, 13);
return v___x_626_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__9(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__8, &l_Lean_Meta_injectionCore___lam__1___closed__8_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__8);
v___x_628_ = l_Lean_stringToMessageData(v___x_627_);
return v___x_628_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__10(void){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = lean_mk_string_unchecked(" fields:\n", 9, 9);
return v___x_629_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__11(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__10, &l_Lean_Meta_injectionCore___lam__1___closed__10_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__10);
v___x_631_ = l_Lean_stringToMessageData(v___x_630_);
return v___x_631_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__12(void){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_mk_string_unchecked("ill-formed noConfusion auxiliary construction with type:", 56, 56);
return v___x_632_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__13(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__12, &l_Lean_Meta_injectionCore___lam__1___closed__12_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__12);
v___x_634_ = l_Lean_stringToMessageData(v___x_633_);
return v___x_634_;
}
}
static uint64_t _init_l_Lean_Meta_injectionCore___lam__1___closed__14(void){
_start:
{
uint8_t v___x_635_; uint64_t v___x_636_; 
v___x_635_ = 1;
v___x_636_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__15(void){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = lean_mk_string_unchecked("got no-confusion principle", 26, 26);
return v___x_637_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__16(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__15, &l_Lean_Meta_injectionCore___lam__1___closed__15_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__15);
v___x_639_ = l_Lean_stringToMessageData(v___x_638_);
return v___x_639_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__17(void){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_mk_string_unchecked("\nof type", 8, 8);
return v___x_640_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__18(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__17, &l_Lean_Meta_injectionCore___lam__1___closed__17_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__17);
v___x_642_ = l_Lean_stringToMessageData(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__19(void){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_643_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__20(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__19, &l_Lean_Meta_injectionCore___lam__1___closed__19_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__19);
v___x_645_ = l_Lean_Name_mkStr1(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__21(void){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = lean_mk_string_unchecked("equality expected", 17, 17);
return v___x_646_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__22(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__21, &l_Lean_Meta_injectionCore___lam__1___closed__21_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__21);
v___x_648_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__23(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__22, &l_Lean_Meta_injectionCore___lam__1___closed__22_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__22);
v___x_650_ = l_Lean_MessageData_ofFormat(v___x_649_);
return v___x_650_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__24(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__23, &l_Lean_Meta_injectionCore___lam__1___closed__23_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__23);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__25(void){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_653_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__26(void){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__27(void){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = lean_mk_string_unchecked("applying noConfusion to ", 24, 24);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__28(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__27, &l_Lean_Meta_injectionCore___lam__1___closed__27_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__27);
v___x_657_ = l_Lean_stringToMessageData(v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__29(void){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = lean_mk_string_unchecked(" at\n", 4, 4);
return v___x_658_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__30(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__29, &l_Lean_Meta_injectionCore___lam__1___closed__29_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__29);
v___x_660_ = l_Lean_stringToMessageData(v___x_659_);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__31(void){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_661_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___lam__1___closed__32(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__31, &l_Lean_Meta_injectionCore___lam__1___closed__31_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__31);
v___x_663_ = l_Lean_Name_mkStr1(v___x_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__1(lean_object* v_mvarId_664_, lean_object* v___x_665_, lean_object* v_fvarId_666_, lean_object* v___x_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_683_; lean_object* v___y_684_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v_type_942_; lean_object* v_prf_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___x_1027_; 
lean_inc(v___x_665_);
lean_inc(v_mvarId_664_);
v___x_1027_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_664_, v___x_665_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v___x_1028_; 
lean_dec_ref(v___x_1027_);
lean_inc(v_fvarId_666_);
v___x_1028_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_666_, v___y_668_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref(v___x_1028_);
v___x_1030_ = l_Lean_LocalDecl_type(v_a_1029_);
lean_dec(v_a_1029_);
lean_inc(v___y_671_);
lean_inc_ref(v___y_670_);
lean_inc(v___y_669_);
lean_inc_ref(v___y_668_);
v___x_1031_ = lean_whnf(v___x_1030_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref(v___x_1031_);
lean_inc(v_fvarId_666_);
v___x_1033_ = l_Lean_mkFVar(v_fvarId_666_);
v___x_1034_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__32, &l_Lean_Meta_injectionCore___lam__1___closed__32_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__32);
v___x_1035_ = lean_unsigned_to_nat(4u);
v___x_1036_ = l_Lean_Expr_isAppOfArity(v_a_1032_, v___x_1034_, v___x_1035_);
if (v___x_1036_ == 0)
{
v_type_942_ = v_a_1032_;
v_prf_943_ = v___x_1033_;
v___y_944_ = v___y_668_;
v___y_945_ = v___y_669_;
v___y_946_ = v___y_670_;
v___y_947_ = v___y_671_;
goto v___jp_941_;
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1037_ = l_Lean_Expr_appFn_x21(v_a_1032_);
v___x_1038_ = l_Lean_Expr_appFn_x21(v___x_1037_);
v___x_1039_ = l_Lean_Expr_appFn_x21(v___x_1038_);
v___x_1040_ = l_Lean_Expr_appArg_x21(v___x_1039_);
lean_dec_ref(v___x_1039_);
v___x_1041_ = l_Lean_Expr_appArg_x21(v___x_1037_);
lean_dec_ref(v___x_1037_);
v___x_1042_ = l_Lean_Meta_isExprDefEq(v___x_1040_, v___x_1041_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; uint8_t v___x_1044_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = lean_unbox(v_a_1043_);
lean_dec(v_a_1043_);
if (v___x_1044_ == 0)
{
lean_dec_ref(v___x_1038_);
v_type_942_ = v_a_1032_;
v_prf_943_ = v___x_1033_;
v___y_944_ = v___y_668_;
v___y_945_ = v___y_669_;
v___y_946_ = v___y_670_;
v___y_947_ = v___y_671_;
goto v___jp_941_;
}
else
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1045_ = l_Lean_Expr_appArg_x21(v___x_1038_);
lean_dec_ref(v___x_1038_);
v___x_1046_ = l_Lean_Expr_appArg_x21(v_a_1032_);
lean_dec(v_a_1032_);
v___x_1047_ = l_Lean_Meta_mkEq(v___x_1045_, v___x_1046_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref(v___x_1047_);
v___x_1049_ = l_Lean_Meta_mkEqOfHEq(v___x_1033_, v___x_1036_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref(v___x_1049_);
v_type_942_ = v_a_1048_;
v_prf_943_ = v_a_1050_;
v___y_944_ = v___y_668_;
v___y_945_ = v___y_669_;
v___y_946_ = v___y_670_;
v___y_947_ = v___y_671_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec(v_a_1048_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1051_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1049_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1049_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec_ref(v___x_1033_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1059_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1047_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1047_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec_ref(v___x_1038_);
lean_dec_ref(v___x_1033_);
lean_dec(v_a_1032_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1067_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1042_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1042_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1075_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1031_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1031_);
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
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1083_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1028_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1028_);
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
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1091_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1027_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1027_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
v___jp_673_:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__3, &l_Lean_Meta_injectionCore___lam__1___closed__3_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__3);
v___x_679_ = l_Lean_Meta_throwTacticEx___redArg(v___x_665_, v_mvarId_664_, v___x_678_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v___x_679_;
}
v___jp_680_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__7, &l_Lean_Meta_injectionCore___lam__1___closed__7_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__7);
v___x_686_ = l_Lean_Meta_throwTacticEx___redArg(v___x_665_, v_mvarId_664_, v___x_685_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v___x_686_;
}
v___jp_687_:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_690_, 0, v___y_688_);
lean_ctor_set(v___x_690_, 1, v___y_689_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
v___jp_692_:
{
lean_object* v_toConstantVal_702_; lean_object* v_toConstantVal_703_; lean_object* v_numFields_704_; lean_object* v_name_705_; lean_object* v_name_706_; uint8_t v___x_707_; 
v_toConstantVal_702_ = lean_ctor_get(v___y_695_, 0);
v_toConstantVal_703_ = lean_ctor_get(v___y_697_, 0);
lean_inc_ref(v_toConstantVal_703_);
lean_dec_ref(v___y_697_);
v_numFields_704_ = lean_ctor_get(v___y_695_, 4);
lean_inc(v_numFields_704_);
v_name_705_ = lean_ctor_get(v_toConstantVal_702_, 0);
v_name_706_ = lean_ctor_get(v_toConstantVal_703_, 0);
lean_inc(v_name_706_);
lean_dec_ref(v_toConstantVal_703_);
v___x_707_ = lean_name_eq(v_name_705_, v_name_706_);
lean_dec(v_name_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_716_; 
lean_dec(v_numFields_704_);
lean_dec_ref(v___y_700_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
v___x_708_ = l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(v_mvarId_664_, v___y_693_, v___y_699_, v___y_701_);
lean_dec(v___y_701_);
lean_dec(v___y_699_);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; 
v_unused_717_ = lean_ctor_get(v___x_708_, 0);
lean_dec(v_unused_717_);
v___x_710_ = v___x_708_;
v_isShared_711_ = v_isSharedCheck_716_;
goto v_resetjp_709_;
}
else
{
lean_dec(v___x_708_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_716_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_712_ = lean_box(0);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v___x_712_);
v___x_714_ = v___x_710_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
else
{
lean_object* v___x_718_; 
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
lean_inc_ref(v___y_693_);
v___x_718_ = lean_infer_type(v___y_693_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_720_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_a_719_);
lean_dec_ref(v___x_718_);
v___x_720_ = l_Lean_Meta_whnfD(v_a_719_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref(v___x_720_);
if (lean_obj_tag(v_a_721_) == 7)
{
lean_object* v_binderType_722_; lean_object* v___x_723_; 
lean_dec_ref(v___y_694_);
lean_dec(v___x_665_);
v_binderType_722_ = lean_ctor_get(v_a_721_, 1);
lean_inc_ref(v_binderType_722_);
lean_dec_ref(v_a_721_);
lean_inc(v_mvarId_664_);
v___x_723_ = l_Lean_MVarId_getTag(v_mvarId_664_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref(v___x_723_);
v___x_725_ = l_Lean_Expr_headBeta(v_binderType_722_);
v___x_726_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_725_, v_a_724_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_781_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc_n(v_a_727_, 2);
lean_dec_ref(v___x_726_);
v___x_728_ = l_Lean_Expr_app___override(v___y_693_, v_a_727_);
v___x_729_ = l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(v_mvarId_664_, v___x_728_, v___y_699_, v___y_701_);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; 
v_unused_782_ = lean_ctor_get(v___x_729_, 0);
lean_dec(v_unused_782_);
v___x_731_ = v___x_729_;
v_isShared_732_ = v_isSharedCheck_781_;
goto v_resetjp_730_;
}
else
{
lean_dec(v___x_729_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_781_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = l_Lean_Expr_mvarId_x21(v_a_727_);
lean_dec(v_a_727_);
v___x_734_ = l_Lean_MVarId_tryClear(v___x_733_, v_fvarId_666_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref(v___x_734_);
v___x_736_ = l_Lean_Meta_getCtorNumPropFields(v___y_695_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_options_737_; lean_object* v_a_738_; lean_object* v_inheritedTraceOptions_739_; uint8_t v_hasTrace_740_; lean_object* v___x_741_; 
v_options_737_ = lean_ctor_get(v___y_700_, 2);
v_a_738_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_738_);
lean_dec_ref(v___x_736_);
v_inheritedTraceOptions_739_ = lean_ctor_get(v___y_700_, 13);
v_hasTrace_740_ = lean_ctor_get_uint8(v_options_737_, sizeof(void*)*1);
v___x_741_ = lean_nat_sub(v_numFields_704_, v_a_738_);
lean_dec(v_a_738_);
lean_dec(v_numFields_704_);
if (v_hasTrace_740_ == 0)
{
lean_del_object(v___x_731_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
v___y_688_ = v_a_735_;
v___y_689_ = v___x_741_;
goto v___jp_687_;
}
else
{
lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_742_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__0___closed__1, &l_Lean_Meta_injectionCore___lam__0___closed__1_once, _init_l_Lean_Meta_injectionCore___lam__0___closed__1);
lean_inc(v___y_696_);
v___x_743_ = l_Lean_Name_append(v___x_742_, v___y_696_);
v___x_744_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_739_, v_options_737_, v___x_743_);
lean_dec(v___x_743_);
if (v___x_744_ == 0)
{
lean_del_object(v___x_731_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
v___y_688_ = v_a_735_;
v___y_689_ = v___x_741_;
goto v___jp_687_;
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_745_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__9, &l_Lean_Meta_injectionCore___lam__1___closed__9_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__9);
lean_inc(v___x_741_);
v___x_746_ = l_Nat_reprFast(v___x_741_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 3);
lean_ctor_set(v___x_731_, 0, v___x_746_);
v___x_748_ = v___x_731_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_746_);
v___x_748_ = v_reuseFailAlloc_764_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_749_ = l_Lean_MessageData_ofFormat(v___x_748_);
v___x_750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_745_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__11, &l_Lean_Meta_injectionCore___lam__1___closed__11_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__11);
v___x_752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
lean_inc(v_a_735_);
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v_a_735_);
v___x_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v___y_696_, v___x_754_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_dec_ref(v___x_755_);
v___y_688_ = v_a_735_;
v___y_689_ = v___x_741_;
goto v___jp_687_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v___x_741_);
lean_dec(v_a_735_);
v_a_756_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_755_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_755_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec(v_a_735_);
lean_del_object(v___x_731_);
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
v_a_765_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_736_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_736_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_del_object(v___x_731_);
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
v_a_773_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_734_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_734_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_693_);
lean_dec(v_fvarId_666_);
lean_dec(v_mvarId_664_);
v_a_783_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_726_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_726_);
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
lean_dec_ref(v_binderType_722_);
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_693_);
lean_dec(v_fvarId_666_);
lean_dec(v_mvarId_664_);
v_a_791_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_723_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_723_);
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
lean_object* v___x_799_; 
lean_dec(v_numFields_704_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_693_);
lean_dec(v_fvarId_666_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
v___x_799_ = lean_apply_5(v___y_694_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, lean_box(0));
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; uint8_t v___x_801_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref(v___x_799_);
v___x_801_ = lean_unbox(v_a_800_);
lean_dec(v_a_800_);
if (v___x_801_ == 0)
{
lean_dec(v_a_721_);
lean_dec(v___y_696_);
v___y_674_ = v___y_698_;
v___y_675_ = v___y_699_;
v___y_676_ = v___y_700_;
v___y_677_ = v___y_701_;
goto v___jp_673_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_802_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__13, &l_Lean_Meta_injectionCore___lam__1___closed__13_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__13);
v___x_803_ = l_Lean_indentExpr(v_a_721_);
v___x_804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v___y_696_, v___x_804_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_dec_ref(v___x_805_);
v___y_674_ = v___y_698_;
v___y_675_ = v___y_699_;
v___y_676_ = v___y_700_;
v___y_677_ = v___y_701_;
goto v___jp_673_;
}
else
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_806_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_805_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_a_721_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_814_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_799_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_799_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_822_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_720_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_720_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec(v_numFields_704_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_830_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_718_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_718_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
v___jp_838_:
{
lean_object* v___x_849_; uint8_t v_foApprox_850_; uint8_t v_ctxApprox_851_; uint8_t v_quasiPatternApprox_852_; uint8_t v_constApprox_853_; uint8_t v_isDefEqStuckEx_854_; uint8_t v_unificationHints_855_; uint8_t v_proofIrrelevance_856_; uint8_t v_assignSyntheticOpaque_857_; uint8_t v_offsetCnstrs_858_; uint8_t v_etaStruct_859_; uint8_t v_univApprox_860_; uint8_t v_iota_861_; uint8_t v_beta_862_; uint8_t v_proj_863_; uint8_t v_zeta_864_; uint8_t v_zetaDelta_865_; uint8_t v_zetaUnused_866_; uint8_t v_zetaHave_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_940_; 
v___x_849_ = l_Lean_Meta_Context_config(v___y_845_);
v_foApprox_850_ = lean_ctor_get_uint8(v___x_849_, 0);
v_ctxApprox_851_ = lean_ctor_get_uint8(v___x_849_, 1);
v_quasiPatternApprox_852_ = lean_ctor_get_uint8(v___x_849_, 2);
v_constApprox_853_ = lean_ctor_get_uint8(v___x_849_, 3);
v_isDefEqStuckEx_854_ = lean_ctor_get_uint8(v___x_849_, 4);
v_unificationHints_855_ = lean_ctor_get_uint8(v___x_849_, 5);
v_proofIrrelevance_856_ = lean_ctor_get_uint8(v___x_849_, 6);
v_assignSyntheticOpaque_857_ = lean_ctor_get_uint8(v___x_849_, 7);
v_offsetCnstrs_858_ = lean_ctor_get_uint8(v___x_849_, 8);
v_etaStruct_859_ = lean_ctor_get_uint8(v___x_849_, 10);
v_univApprox_860_ = lean_ctor_get_uint8(v___x_849_, 11);
v_iota_861_ = lean_ctor_get_uint8(v___x_849_, 12);
v_beta_862_ = lean_ctor_get_uint8(v___x_849_, 13);
v_proj_863_ = lean_ctor_get_uint8(v___x_849_, 14);
v_zeta_864_ = lean_ctor_get_uint8(v___x_849_, 15);
v_zetaDelta_865_ = lean_ctor_get_uint8(v___x_849_, 16);
v_zetaUnused_866_ = lean_ctor_get_uint8(v___x_849_, 17);
v_zetaHave_867_ = lean_ctor_get_uint8(v___x_849_, 18);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_940_ == 0)
{
v___x_869_ = v___x_849_;
v_isShared_870_ = v_isSharedCheck_940_;
goto v_resetjp_868_;
}
else
{
lean_dec(v___x_849_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_940_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
uint8_t v_trackZetaDelta_871_; lean_object* v_zetaDeltaSet_872_; lean_object* v_lctx_873_; lean_object* v_localInstances_874_; lean_object* v_defEqCtx_x3f_875_; lean_object* v_synthPendingDepth_876_; lean_object* v_canUnfold_x3f_877_; uint8_t v_univApprox_878_; uint8_t v_inTypeClassResolution_879_; uint8_t v_cacheInferType_880_; uint8_t v___x_881_; lean_object* v_config_883_; 
v_trackZetaDelta_871_ = lean_ctor_get_uint8(v___y_845_, sizeof(void*)*7);
v_zetaDeltaSet_872_ = lean_ctor_get(v___y_845_, 1);
v_lctx_873_ = lean_ctor_get(v___y_845_, 2);
v_localInstances_874_ = lean_ctor_get(v___y_845_, 3);
v_defEqCtx_x3f_875_ = lean_ctor_get(v___y_845_, 4);
v_synthPendingDepth_876_ = lean_ctor_get(v___y_845_, 5);
v_canUnfold_x3f_877_ = lean_ctor_get(v___y_845_, 6);
v_univApprox_878_ = lean_ctor_get_uint8(v___y_845_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_879_ = lean_ctor_get_uint8(v___y_845_, sizeof(void*)*7 + 2);
v_cacheInferType_880_ = lean_ctor_get_uint8(v___y_845_, sizeof(void*)*7 + 3);
v___x_881_ = 1;
if (v_isShared_870_ == 0)
{
v_config_883_ = v___x_869_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 0, v_foApprox_850_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 1, v_ctxApprox_851_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 2, v_quasiPatternApprox_852_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 3, v_constApprox_853_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 4, v_isDefEqStuckEx_854_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 5, v_unificationHints_855_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 6, v_proofIrrelevance_856_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 7, v_assignSyntheticOpaque_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 8, v_offsetCnstrs_858_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 10, v_etaStruct_859_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 11, v_univApprox_860_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 12, v_iota_861_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 13, v_beta_862_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 14, v_proj_863_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 15, v_zeta_864_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 16, v_zetaDelta_865_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 17, v_zetaUnused_866_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, 18, v_zetaHave_867_);
v_config_883_ = v_reuseFailAlloc_939_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
uint64_t v___x_884_; uint64_t v___x_885_; uint64_t v___x_886_; uint64_t v___x_887_; uint64_t v___x_888_; uint64_t v_key_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
lean_ctor_set_uint8(v_config_883_, 9, v___x_881_);
v___x_884_ = l_Lean_Meta_Context_configKey(v___y_845_);
v___x_885_ = 2ULL;
v___x_886_ = lean_uint64_shift_right(v___x_884_, v___x_885_);
v___x_887_ = lean_uint64_shift_left(v___x_886_, v___x_885_);
v___x_888_ = lean_uint64_once(&l_Lean_Meta_injectionCore___lam__1___closed__14, &l_Lean_Meta_injectionCore___lam__1___closed__14_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__14);
v_key_889_ = lean_uint64_lor(v___x_887_, v___x_888_);
v___x_890_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_890_, 0, v_config_883_);
lean_ctor_set_uint64(v___x_890_, sizeof(void*)*1, v_key_889_);
lean_inc(v_canUnfold_x3f_877_);
lean_inc(v_synthPendingDepth_876_);
lean_inc(v_defEqCtx_x3f_875_);
lean_inc_ref(v_localInstances_874_);
lean_inc_ref(v_lctx_873_);
lean_inc(v_zetaDeltaSet_872_);
v___x_891_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_891_, 0, v___x_890_);
lean_ctor_set(v___x_891_, 1, v_zetaDeltaSet_872_);
lean_ctor_set(v___x_891_, 2, v_lctx_873_);
lean_ctor_set(v___x_891_, 3, v_localInstances_874_);
lean_ctor_set(v___x_891_, 4, v_defEqCtx_x3f_875_);
lean_ctor_set(v___x_891_, 5, v_synthPendingDepth_876_);
lean_ctor_set(v___x_891_, 6, v_canUnfold_x3f_877_);
lean_ctor_set_uint8(v___x_891_, sizeof(void*)*7, v_trackZetaDelta_871_);
lean_ctor_set_uint8(v___x_891_, sizeof(void*)*7 + 1, v_univApprox_878_);
lean_ctor_set_uint8(v___x_891_, sizeof(void*)*7 + 2, v_inTypeClassResolution_879_);
lean_ctor_set_uint8(v___x_891_, sizeof(void*)*7 + 3, v_cacheInferType_880_);
v___x_892_ = l_Lean_Meta_mkNoConfusion(v___y_841_, v___y_843_, v___x_891_, v___y_846_, v___y_847_, v___y_848_);
lean_dec_ref(v___x_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref(v___x_892_);
lean_inc_ref(v___y_840_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
lean_inc(v___y_846_);
lean_inc_ref(v___y_845_);
v___x_894_ = lean_apply_5(v___y_840_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, lean_box(0));
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; uint8_t v___x_896_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref(v___x_894_);
v___x_896_ = lean_unbox(v_a_895_);
lean_dec(v_a_895_);
if (v___x_896_ == 0)
{
v___y_693_ = v_a_893_;
v___y_694_ = v___y_840_;
v___y_695_ = v___y_839_;
v___y_696_ = v___y_842_;
v___y_697_ = v___y_844_;
v___y_698_ = v___y_845_;
v___y_699_ = v___y_846_;
v___y_700_ = v___y_847_;
v___y_701_ = v___y_848_;
goto v___jp_692_;
}
else
{
lean_object* v___x_897_; 
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
lean_inc(v___y_846_);
lean_inc_ref(v___y_845_);
lean_inc(v_a_893_);
v___x_897_ = lean_infer_type(v_a_893_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref(v___x_897_);
v___x_899_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__16, &l_Lean_Meta_injectionCore___lam__1___closed__16_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__16);
lean_inc(v_a_893_);
v___x_900_ = l_Lean_indentExpr(v_a_893_);
v___x_901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__18, &l_Lean_Meta_injectionCore___lam__1___closed__18_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__18);
v___x_903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = l_Lean_indentExpr(v_a_898_);
v___x_905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_903_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
lean_inc(v___y_842_);
v___x_906_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v___y_842_, v___x_905_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_dec_ref(v___x_906_);
v___y_693_ = v_a_893_;
v___y_694_ = v___y_840_;
v___y_695_ = v___y_839_;
v___y_696_ = v___y_842_;
v___y_697_ = v___y_844_;
v___y_698_ = v___y_845_;
v___y_699_ = v___y_846_;
v___y_700_ = v___y_847_;
v___y_701_ = v___y_848_;
goto v___jp_692_;
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_a_893_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec(v_a_893_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_915_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_897_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_897_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec(v_a_893_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_923_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_894_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_894_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
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
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_931_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_892_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_892_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
}
v___jp_941_:
{
lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_948_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__20, &l_Lean_Meta_injectionCore___lam__1___closed__20_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__20);
v___x_949_ = lean_unsigned_to_nat(3u);
v___x_950_ = l_Lean_Expr_isAppOfArity(v_type_942_, v___x_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; 
lean_dec_ref(v_prf_943_);
lean_dec_ref(v_type_942_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
v___x_951_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__24, &l_Lean_Meta_injectionCore___lam__1___closed__24_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__24);
v___x_952_ = l_Lean_Meta_throwTacticEx___redArg(v___x_665_, v_mvarId_664_, v___x_951_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
return v___x_952_;
}
else
{
lean_object* v___x_953_; 
lean_inc(v_mvarId_664_);
v___x_953_ = l_Lean_MVarId_getType(v_mvarId_664_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref(v___x_953_);
v___x_955_ = l_Lean_Expr_appFn_x21(v_type_942_);
v___x_956_ = l_Lean_Expr_appArg_x21(v___x_955_);
lean_dec_ref(v___x_955_);
v___x_957_ = l_Lean_Meta_isConstructorApp_x27_x3f(v___x_956_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref(v___x_957_);
v___x_959_ = l_Lean_Expr_appArg_x21(v_type_942_);
lean_dec_ref(v_type_942_);
v___x_960_ = l_Lean_Meta_isConstructorApp_x27_x3f(v___x_959_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_960_) == 0)
{
if (lean_obj_tag(v_a_958_) == 1)
{
lean_object* v_a_961_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref(v___x_960_);
if (lean_obj_tag(v_a_961_) == 1)
{
lean_object* v_val_962_; lean_object* v_val_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___f_967_; lean_object* v___x_968_; lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_1002_; 
v_val_962_ = lean_ctor_get(v_a_958_, 0);
lean_inc(v_val_962_);
lean_dec_ref(v_a_958_);
v_val_963_ = lean_ctor_get(v_a_961_, 0);
lean_inc(v_val_963_);
lean_dec_ref(v_a_961_);
v___x_964_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__25, &l_Lean_Meta_injectionCore___lam__1___closed__25_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__25);
v___x_965_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__26, &l_Lean_Meta_injectionCore___lam__1___closed__26_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__26);
v___x_966_ = l_Lean_Name_mkStr3(v___x_964_, v___x_965_, v___x_667_);
lean_inc_n(v___x_966_, 2);
v___f_967_ = lean_alloc_closure((void*)(l_Lean_Meta_injectionCore___lam__0___boxed), 6, 1);
lean_closure_set(v___f_967_, 0, v___x_966_);
v___x_968_ = l_Lean_Meta_injectionCore___lam__0(v___x_966_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
v_a_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_1002_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_1002_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
uint8_t v___x_973_; 
v___x_973_ = lean_unbox(v_a_969_);
lean_dec(v_a_969_);
if (v___x_973_ == 0)
{
lean_del_object(v___x_971_);
v___y_839_ = v_val_962_;
v___y_840_ = v___f_967_;
v___y_841_ = v_a_954_;
v___y_842_ = v___x_966_;
v___y_843_ = v_prf_943_;
v___y_844_ = v_val_963_;
v___y_845_ = v___y_944_;
v___y_846_ = v___y_945_;
v___y_847_ = v___y_946_;
v___y_848_ = v___y_947_;
goto v___jp_838_;
}
else
{
lean_object* v___x_974_; 
lean_inc(v___y_947_);
lean_inc_ref(v___y_946_);
lean_inc(v___y_945_);
lean_inc_ref(v___y_944_);
lean_inc_ref(v_prf_943_);
v___x_974_ = lean_infer_type(v_prf_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref(v___x_974_);
v___x_976_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__28, &l_Lean_Meta_injectionCore___lam__1___closed__28_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__28);
v___x_977_ = l_Lean_MessageData_ofExpr(v_a_975_);
v___x_978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__30, &l_Lean_Meta_injectionCore___lam__1___closed__30_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__30);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
lean_inc(v_mvarId_664_);
if (v_isShared_972_ == 0)
{
lean_ctor_set_tag(v___x_971_, 1);
lean_ctor_set(v___x_971_, 0, v_mvarId_664_);
v___x_982_ = v___x_971_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_mvarId_664_);
v___x_982_ = v_reuseFailAlloc_993_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_980_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
lean_inc(v___x_966_);
v___x_984_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v___x_966_, v___x_983_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_dec_ref(v___x_984_);
v___y_839_ = v_val_962_;
v___y_840_ = v___f_967_;
v___y_841_ = v_a_954_;
v___y_842_ = v___x_966_;
v___y_843_ = v_prf_943_;
v___y_844_ = v_val_963_;
v___y_845_ = v___y_944_;
v___y_846_ = v___y_945_;
v___y_847_ = v___y_946_;
v___y_848_ = v___y_947_;
goto v___jp_838_;
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec_ref(v___f_967_);
lean_dec(v___x_966_);
lean_dec(v_val_963_);
lean_dec(v_val_962_);
lean_dec(v_a_954_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_prf_943_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_984_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_del_object(v___x_971_);
lean_dec_ref(v___f_967_);
lean_dec(v___x_966_);
lean_dec(v_val_963_);
lean_dec(v_val_962_);
lean_dec(v_a_954_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_prf_943_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_994_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_974_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_974_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_a_958_);
lean_dec(v_a_961_);
lean_dec(v_a_954_);
lean_dec_ref(v_prf_943_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
v___y_681_ = v___y_944_;
v___y_682_ = v___y_945_;
v___y_683_ = v___y_946_;
v___y_684_ = v___y_947_;
goto v___jp_680_;
}
}
else
{
lean_dec_ref(v___x_960_);
lean_dec(v_a_958_);
lean_dec(v_a_954_);
lean_dec_ref(v_prf_943_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
v___y_681_ = v___y_944_;
v___y_682_ = v___y_945_;
v___y_683_ = v___y_946_;
v___y_684_ = v___y_947_;
goto v___jp_680_;
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec(v_a_958_);
lean_dec(v_a_954_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_prf_943_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1003_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_960_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_960_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_954_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_prf_943_);
lean_dec_ref(v_type_942_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1011_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_957_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_957_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_prf_943_);
lean_dec_ref(v_type_942_);
lean_dec_ref(v___x_667_);
lean_dec(v_fvarId_666_);
lean_dec(v___x_665_);
lean_dec(v_mvarId_664_);
v_a_1019_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_953_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_953_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___lam__1___boxed(lean_object* v_mvarId_1099_, lean_object* v___x_1100_, lean_object* v_fvarId_1101_, lean_object* v___x_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_Meta_injectionCore___lam__1(v_mvarId_1099_, v___x_1100_, v_fvarId_1101_, v___x_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
return v_res_1108_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___closed__0(void){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_mk_string_unchecked("injection", 9, 9);
return v___x_1109_;
}
}
static lean_object* _init_l_Lean_Meta_injectionCore___closed__1(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = lean_obj_once(&l_Lean_Meta_injectionCore___closed__0, &l_Lean_Meta_injectionCore___closed__0_once, _init_l_Lean_Meta_injectionCore___closed__0);
v___x_1111_ = l_Lean_Name_mkStr1(v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore(lean_object* v_mvarId_1112_, lean_object* v_fvarId_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; 
v___x_1119_ = lean_obj_once(&l_Lean_Meta_injectionCore___closed__0, &l_Lean_Meta_injectionCore___closed__0_once, _init_l_Lean_Meta_injectionCore___closed__0);
v___x_1120_ = lean_obj_once(&l_Lean_Meta_injectionCore___closed__1, &l_Lean_Meta_injectionCore___closed__1_once, _init_l_Lean_Meta_injectionCore___closed__1);
lean_inc(v_mvarId_1112_);
v___f_1121_ = lean_alloc_closure((void*)(l_Lean_Meta_injectionCore___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1121_, 0, v_mvarId_1112_);
lean_closure_set(v___f_1121_, 1, v___x_1120_);
lean_closure_set(v___f_1121_, 2, v_fvarId_1113_);
lean_closure_set(v___f_1121_, 3, v___x_1119_);
v___x_1122_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(v_mvarId_1112_, v___f_1121_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionCore___boxed(lean_object* v_mvarId_1123_, lean_object* v_fvarId_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_Meta_injectionCore(v_mvarId_1123_, v_fvarId_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0(lean_object* v_mvarId_1131_, lean_object* v_val_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___redArg(v_mvarId_1131_, v_val_1132_, v___y_1134_, v___y_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0___boxed(lean_object* v_mvarId_1139_, lean_object* v_val_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0(v_mvarId_1139_, v_val_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0(lean_object* v_00_u03b2_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_, lean_object* v_x_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0___redArg(v_x_1148_, v_x_1149_, v_x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1152_, lean_object* v_x_1153_, size_t v_x_1154_, size_t v_x_1155_, lean_object* v_x_1156_, lean_object* v_x_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___redArg(v_x_1153_, v_x_1154_, v_x_1155_, v_x_1156_, v_x_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1159_, lean_object* v_x_1160_, lean_object* v_x_1161_, lean_object* v_x_1162_, lean_object* v_x_1163_, lean_object* v_x_1164_){
_start:
{
size_t v_x_17948__boxed_1165_; size_t v_x_17949__boxed_1166_; lean_object* v_res_1167_; 
v_x_17948__boxed_1165_ = lean_unbox_usize(v_x_1161_);
lean_dec(v_x_1161_);
v_x_17949__boxed_1166_ = lean_unbox_usize(v_x_1162_);
lean_dec(v_x_1162_);
v_res_1167_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2(v_00_u03b2_1159_, v_x_1160_, v_x_17948__boxed_1165_, v_x_17949__boxed_1166_, v_x_1163_, v_x_1164_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1168_, lean_object* v_n_1169_, lean_object* v_k_1170_, lean_object* v_v_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5___redArg(v_n_1169_, v_k_1170_, v_v_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1173_, size_t v_depth_1174_, lean_object* v_keys_1175_, lean_object* v_vals_1176_, lean_object* v_heq_1177_, lean_object* v_i_1178_, lean_object* v_entries_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___redArg(v_depth_1174_, v_keys_1175_, v_vals_1176_, v_i_1178_, v_entries_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1181_, lean_object* v_depth_1182_, lean_object* v_keys_1183_, lean_object* v_vals_1184_, lean_object* v_heq_1185_, lean_object* v_i_1186_, lean_object* v_entries_1187_){
_start:
{
size_t v_depth_boxed_1188_; lean_object* v_res_1189_; 
v_depth_boxed_1188_ = lean_unbox_usize(v_depth_1182_);
lean_dec(v_depth_1182_);
v_res_1189_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__6(v_00_u03b2_1181_, v_depth_boxed_1188_, v_keys_1183_, v_vals_1184_, v_heq_1185_, v_i_1186_, v_entries_1187_);
lean_dec_ref(v_vals_1184_);
lean_dec_ref(v_keys_1183_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_, lean_object* v_x_1193_, lean_object* v_x_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_injectionCore_spec__0_spec__0_spec__2_spec__5_spec__6___redArg(v_x_1191_, v_x_1192_, v_x_1193_, v_x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorIdx(lean_object* v_x_1196_){
_start:
{
if (lean_obj_tag(v_x_1196_) == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_unsigned_to_nat(0u);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_unsigned_to_nat(1u);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorIdx___boxed(lean_object* v_x_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Meta_InjectionResult_ctorIdx(v_x_1199_);
lean_dec(v_x_1199_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim___redArg(lean_object* v_t_1201_, lean_object* v_k_1202_){
_start:
{
if (lean_obj_tag(v_t_1201_) == 0)
{
return v_k_1202_;
}
else
{
lean_object* v_mvarId_1203_; lean_object* v_newEqs_1204_; lean_object* v_remainingNames_1205_; lean_object* v___x_1206_; 
v_mvarId_1203_ = lean_ctor_get(v_t_1201_, 0);
lean_inc(v_mvarId_1203_);
v_newEqs_1204_ = lean_ctor_get(v_t_1201_, 1);
lean_inc_ref(v_newEqs_1204_);
v_remainingNames_1205_ = lean_ctor_get(v_t_1201_, 2);
lean_inc(v_remainingNames_1205_);
lean_dec_ref(v_t_1201_);
v___x_1206_ = lean_apply_3(v_k_1202_, v_mvarId_1203_, v_newEqs_1204_, v_remainingNames_1205_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim(lean_object* v_motive_1207_, lean_object* v_ctorIdx_1208_, lean_object* v_t_1209_, lean_object* v_h_1210_, lean_object* v_k_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_Meta_InjectionResult_ctorElim___redArg(v_t_1209_, v_k_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_ctorElim___boxed(lean_object* v_motive_1213_, lean_object* v_ctorIdx_1214_, lean_object* v_t_1215_, lean_object* v_h_1216_, lean_object* v_k_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lean_Meta_InjectionResult_ctorElim(v_motive_1213_, v_ctorIdx_1214_, v_t_1215_, v_h_1216_, v_k_1217_);
lean_dec(v_ctorIdx_1214_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_solved_elim___redArg(lean_object* v_t_1219_, lean_object* v_solved_1220_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_Meta_InjectionResult_ctorElim___redArg(v_t_1219_, v_solved_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_solved_elim(lean_object* v_motive_1222_, lean_object* v_t_1223_, lean_object* v_h_1224_, lean_object* v_solved_1225_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_Meta_InjectionResult_ctorElim___redArg(v_t_1223_, v_solved_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_subgoal_elim___redArg(lean_object* v_t_1227_, lean_object* v_subgoal_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_Meta_InjectionResult_ctorElim___redArg(v_t_1227_, v_subgoal_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionResult_subgoal_elim(lean_object* v_motive_1230_, lean_object* v_t_1231_, lean_object* v_h_1232_, lean_object* v_subgoal_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Meta_InjectionResult_ctorElim___redArg(v_t_1231_, v_subgoal_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go(uint8_t v_tryToClear_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_){
_start:
{
lean_object* v_zero_1245_; uint8_t v_isZero_1246_; 
v_zero_1245_ = lean_unsigned_to_nat(0u);
v_isZero_1246_ = lean_nat_dec_eq(v_a_1236_, v_zero_1245_);
if (v_isZero_1246_ == 1)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec(v_a_1236_);
v___x_1247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1247_, 0, v_a_1237_);
lean_ctor_set(v___x_1247_, 1, v_a_1238_);
lean_ctor_set(v___x_1247_, 2, v_a_1239_);
v___x_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
return v___x_1248_;
}
else
{
lean_object* v_one_1249_; lean_object* v_n_1250_; 
v_one_1249_ = lean_unsigned_to_nat(1u);
v_n_1250_ = lean_nat_sub(v_a_1236_, v_one_1249_);
lean_dec(v_a_1236_);
if (lean_obj_tag(v_a_1239_) == 0)
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Meta_intro1Core(v_a_1237_, v_isZero_1246_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v_fst_1253_; lean_object* v_snd_1254_; lean_object* v___x_1255_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref(v___x_1251_);
v_fst_1253_ = lean_ctor_get(v_a_1252_, 0);
lean_inc(v_fst_1253_);
v_snd_1254_ = lean_ctor_get(v_a_1252_, 1);
lean_inc(v_snd_1254_);
lean_dec(v_a_1252_);
v___x_1255_ = l_Lean_Meta_heqToEq(v_snd_1254_, v_fst_1253_, v_tryToClear_1235_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v_fst_1257_; lean_object* v_snd_1258_; lean_object* v___x_1259_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref(v___x_1255_);
v_fst_1257_ = lean_ctor_get(v_a_1256_, 0);
lean_inc(v_fst_1257_);
v_snd_1258_ = lean_ctor_get(v_a_1256_, 1);
lean_inc(v_snd_1258_);
lean_dec(v_a_1256_);
v___x_1259_ = lean_array_push(v_a_1238_, v_fst_1257_);
v_a_1236_ = v_n_1250_;
v_a_1237_ = v_snd_1258_;
v_a_1238_ = v___x_1259_;
goto _start;
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec(v_n_1250_);
lean_dec_ref(v_a_1238_);
v_a_1261_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1255_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1255_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec(v_n_1250_);
lean_dec_ref(v_a_1238_);
v_a_1269_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1251_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1251_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
else
{
lean_object* v_head_1277_; lean_object* v_tail_1278_; lean_object* v___x_1279_; 
v_head_1277_ = lean_ctor_get(v_a_1239_, 0);
lean_inc(v_head_1277_);
v_tail_1278_ = lean_ctor_get(v_a_1239_, 1);
lean_inc(v_tail_1278_);
lean_dec_ref(v_a_1239_);
v___x_1279_ = l_Lean_MVarId_intro(v_a_1237_, v_head_1277_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v_fst_1281_; lean_object* v_snd_1282_; lean_object* v___x_1283_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref(v___x_1279_);
v_fst_1281_ = lean_ctor_get(v_a_1280_, 0);
lean_inc(v_fst_1281_);
v_snd_1282_ = lean_ctor_get(v_a_1280_, 1);
lean_inc(v_snd_1282_);
lean_dec(v_a_1280_);
v___x_1283_ = l_Lean_Meta_heqToEq(v_snd_1282_, v_fst_1281_, v_tryToClear_1235_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v_fst_1285_; lean_object* v_snd_1286_; lean_object* v___x_1287_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref(v___x_1283_);
v_fst_1285_ = lean_ctor_get(v_a_1284_, 0);
lean_inc(v_fst_1285_);
v_snd_1286_ = lean_ctor_get(v_a_1284_, 1);
lean_inc(v_snd_1286_);
lean_dec(v_a_1284_);
v___x_1287_ = lean_array_push(v_a_1238_, v_fst_1285_);
v_a_1236_ = v_n_1250_;
v_a_1237_ = v_snd_1286_;
v_a_1238_ = v___x_1287_;
v_a_1239_ = v_tail_1278_;
goto _start;
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v_tail_1278_);
lean_dec(v_n_1250_);
lean_dec_ref(v_a_1238_);
v_a_1289_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1283_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1283_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v_tail_1278_);
lean_dec(v_n_1250_);
lean_dec_ref(v_a_1238_);
v_a_1297_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1279_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1279_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go___boxed(lean_object* v_tryToClear_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
uint8_t v_tryToClear_boxed_1315_; lean_object* v_res_1316_; 
v_tryToClear_boxed_1315_ = lean_unbox(v_tryToClear_1305_);
v_res_1316_ = l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go(v_tryToClear_boxed_1315_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
return v_res_1316_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__0(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_mk_empty_array_with_capacity(v___x_1317_);
return v___x_1318_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__1(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v_cls_1322_; 
v___x_1319_ = lean_obj_once(&l_Lean_Meta_injectionCore___closed__0, &l_Lean_Meta_injectionCore___closed__0_once, _init_l_Lean_Meta_injectionCore___closed__0);
v___x_1320_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__26, &l_Lean_Meta_injectionCore___lam__1___closed__26_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__26);
v___x_1321_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__25, &l_Lean_Meta_injectionCore___lam__1___closed__25_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__25);
v_cls_1322_ = l_Lean_Name_mkStr3(v___x_1321_, v___x_1320_, v___x_1319_);
return v_cls_1322_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__2(void){
_start:
{
lean_object* v_cls_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_cls_1323_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__1, &l_Lean_Meta_injectionIntro___closed__1_once, _init_l_Lean_Meta_injectionIntro___closed__1);
v___x_1324_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__0___closed__1, &l_Lean_Meta_injectionCore___lam__0___closed__1_once, _init_l_Lean_Meta_injectionCore___lam__0___closed__1);
v___x_1325_ = l_Lean_Name_append(v___x_1324_, v_cls_1323_);
return v___x_1325_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__3(void){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_mk_string_unchecked("introducing ", 12, 12);
return v___x_1326_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__4(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__3, &l_Lean_Meta_injectionIntro___closed__3_once, _init_l_Lean_Meta_injectionIntro___closed__3);
v___x_1328_ = l_Lean_stringToMessageData(v___x_1327_);
return v___x_1328_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__5(void){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_mk_string_unchecked(" new equalities at\n", 19, 19);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Meta_injectionIntro___closed__6(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__5, &l_Lean_Meta_injectionIntro___closed__5_once, _init_l_Lean_Meta_injectionIntro___closed__5);
v___x_1331_ = l_Lean_stringToMessageData(v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionIntro(lean_object* v_mvarId_1332_, lean_object* v_numEqs_1333_, lean_object* v_newNames_1334_, uint8_t v_tryToClear_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v_options_1348_; uint8_t v_hasTrace_1349_; 
v_options_1348_ = lean_ctor_get(v_a_1338_, 2);
v_hasTrace_1349_ = lean_ctor_get_uint8(v_options_1348_, sizeof(void*)*1);
if (v_hasTrace_1349_ == 0)
{
v___y_1342_ = v_a_1336_;
v___y_1343_ = v_a_1337_;
v___y_1344_ = v_a_1338_;
v___y_1345_ = v_a_1339_;
goto v___jp_1341_;
}
else
{
lean_object* v_inheritedTraceOptions_1350_; lean_object* v_cls_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v_inheritedTraceOptions_1350_ = lean_ctor_get(v_a_1338_, 13);
v_cls_1351_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__1, &l_Lean_Meta_injectionIntro___closed__1_once, _init_l_Lean_Meta_injectionIntro___closed__1);
v___x_1352_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__2, &l_Lean_Meta_injectionIntro___closed__2_once, _init_l_Lean_Meta_injectionIntro___closed__2);
v___x_1353_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1350_, v_options_1348_, v___x_1352_);
if (v___x_1353_ == 0)
{
v___y_1342_ = v_a_1336_;
v___y_1343_ = v_a_1337_;
v___y_1344_ = v_a_1338_;
v___y_1345_ = v_a_1339_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1354_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__4, &l_Lean_Meta_injectionIntro___closed__4_once, _init_l_Lean_Meta_injectionIntro___closed__4);
lean_inc(v_numEqs_1333_);
v___x_1355_ = l_Nat_reprFast(v_numEqs_1333_);
v___x_1356_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
v___x_1357_ = l_Lean_MessageData_ofFormat(v___x_1356_);
v___x_1358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1354_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__6, &l_Lean_Meta_injectionIntro___closed__6_once, _init_l_Lean_Meta_injectionIntro___closed__6);
v___x_1360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
lean_inc(v_mvarId_1332_);
v___x_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_mvarId_1332_);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = l_Lean_addTrace___at___00Lean_Meta_injectionCore_spec__1(v_cls_1351_, v___x_1362_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_dec_ref(v___x_1363_);
v___y_1342_ = v_a_1336_;
v___y_1343_ = v_a_1337_;
v___y_1344_ = v_a_1338_;
v___y_1345_ = v_a_1339_;
goto v___jp_1341_;
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_newNames_1334_);
lean_dec(v_numEqs_1333_);
lean_dec(v_mvarId_1332_);
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1363_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1363_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
v___jp_1341_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__0, &l_Lean_Meta_injectionIntro___closed__0_once, _init_l_Lean_Meta_injectionIntro___closed__0);
v___x_1347_ = l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injectionIntro_go(v_tryToClear_1335_, v_numEqs_1333_, v_mvarId_1332_, v___x_1346_, v_newNames_1334_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
return v___x_1347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injectionIntro___boxed(lean_object* v_mvarId_1372_, lean_object* v_numEqs_1373_, lean_object* v_newNames_1374_, lean_object* v_tryToClear_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
uint8_t v_tryToClear_boxed_1381_; lean_object* v_res_1382_; 
v_tryToClear_boxed_1381_ = lean_unbox(v_tryToClear_1375_);
v_res_1382_ = l_Lean_Meta_injectionIntro(v_mvarId_1372_, v_numEqs_1373_, v_newNames_1374_, v_tryToClear_boxed_1381_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injection(lean_object* v_mvarId_1383_, lean_object* v_fvarId_1384_, lean_object* v_newNames_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lean_Meta_injectionCore(v_mvarId_1383_, v_fvarId_1384_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1404_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1394_ = v___x_1391_;
v_isShared_1395_ = v_isSharedCheck_1404_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1391_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1404_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
if (lean_obj_tag(v_a_1392_) == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1398_; 
lean_dec(v_newNames_1385_);
v___x_1396_ = lean_box(0);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v___x_1396_);
v___x_1398_ = v___x_1394_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
else
{
lean_object* v_mvarId_1400_; lean_object* v_numNewEqs_1401_; uint8_t v___x_1402_; lean_object* v___x_1403_; 
lean_del_object(v___x_1394_);
v_mvarId_1400_ = lean_ctor_get(v_a_1392_, 0);
lean_inc(v_mvarId_1400_);
v_numNewEqs_1401_ = lean_ctor_get(v_a_1392_, 1);
lean_inc(v_numNewEqs_1401_);
lean_dec_ref(v_a_1392_);
v___x_1402_ = 1;
v___x_1403_ = l_Lean_Meta_injectionIntro(v_mvarId_1400_, v_numNewEqs_1401_, v_newNames_1385_, v___x_1402_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
return v___x_1403_;
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
lean_dec(v_newNames_1385_);
v_a_1405_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1391_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1391_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injection___boxed(lean_object* v_mvarId_1413_, lean_object* v_fvarId_1414_, lean_object* v_newNames_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_Meta_injection(v_mvarId_1413_, v_fvarId_1414_, v_newNames_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorIdx(lean_object* v_x_1422_){
_start:
{
if (lean_obj_tag(v_x_1422_) == 0)
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_unsigned_to_nat(0u);
return v___x_1423_;
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_unsigned_to_nat(1u);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorIdx___boxed(lean_object* v_x_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_Meta_InjectionsResult_ctorIdx(v_x_1425_);
lean_dec(v_x_1425_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim___redArg(lean_object* v_t_1427_, lean_object* v_k_1428_){
_start:
{
if (lean_obj_tag(v_t_1427_) == 0)
{
return v_k_1428_;
}
else
{
lean_object* v_mvarId_1429_; lean_object* v_remainingNames_1430_; lean_object* v_forbidden_1431_; lean_object* v___x_1432_; 
v_mvarId_1429_ = lean_ctor_get(v_t_1427_, 0);
lean_inc(v_mvarId_1429_);
v_remainingNames_1430_ = lean_ctor_get(v_t_1427_, 1);
lean_inc(v_remainingNames_1430_);
v_forbidden_1431_ = lean_ctor_get(v_t_1427_, 2);
lean_inc(v_forbidden_1431_);
lean_dec_ref(v_t_1427_);
v___x_1432_ = lean_apply_3(v_k_1428_, v_mvarId_1429_, v_remainingNames_1430_, v_forbidden_1431_);
return v___x_1432_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim(lean_object* v_motive_1433_, lean_object* v_ctorIdx_1434_, lean_object* v_t_1435_, lean_object* v_h_1436_, lean_object* v_k_1437_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_Meta_InjectionsResult_ctorElim___redArg(v_t_1435_, v_k_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_ctorElim___boxed(lean_object* v_motive_1439_, lean_object* v_ctorIdx_1440_, lean_object* v_t_1441_, lean_object* v_h_1442_, lean_object* v_k_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_Meta_InjectionsResult_ctorElim(v_motive_1439_, v_ctorIdx_1440_, v_t_1441_, v_h_1442_, v_k_1443_);
lean_dec(v_ctorIdx_1440_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_solved_elim___redArg(lean_object* v_t_1445_, lean_object* v_solved_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lean_Meta_InjectionsResult_ctorElim___redArg(v_t_1445_, v_solved_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_solved_elim(lean_object* v_motive_1448_, lean_object* v_t_1449_, lean_object* v_h_1450_, lean_object* v_solved_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lean_Meta_InjectionsResult_ctorElim___redArg(v_t_1449_, v_solved_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_subgoal_elim___redArg(lean_object* v_t_1453_, lean_object* v_subgoal_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lean_Meta_InjectionsResult_ctorElim___redArg(v_t_1453_, v_subgoal_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_InjectionsResult_subgoal_elim(lean_object* v_motive_1456_, lean_object* v_t_1457_, lean_object* v_h_1458_, lean_object* v_subgoal_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_Meta_InjectionsResult_ctorElim___redArg(v_t_1457_, v_subgoal_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg(lean_object* v_x_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_Lean_Meta_saveState___redArg(v___y_1463_, v___y_1465_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1469_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref(v___x_1467_);
lean_inc(v___y_1465_);
lean_inc_ref(v___y_1464_);
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
v___x_1469_ = lean_apply_5(v_x_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, lean_box(0));
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_dec(v_a_1468_);
return v___x_1469_;
}
else
{
lean_object* v_a_1470_; uint8_t v___y_1472_; uint8_t v___x_1490_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
v___x_1490_ = l_Lean_Exception_isInterrupt(v_a_1470_);
if (v___x_1490_ == 0)
{
uint8_t v___x_1491_; 
lean_inc(v_a_1470_);
v___x_1491_ = l_Lean_Exception_isRuntime(v_a_1470_);
v___y_1472_ = v___x_1491_;
goto v___jp_1471_;
}
else
{
v___y_1472_ = v___x_1490_;
goto v___jp_1471_;
}
v___jp_1471_:
{
if (v___y_1472_ == 0)
{
lean_object* v___x_1473_; 
lean_dec_ref(v___x_1469_);
v___x_1473_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1468_, v___y_1463_, v___y_1465_);
lean_dec(v_a_1468_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1480_; 
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1480_ == 0)
{
lean_object* v_unused_1481_; 
v_unused_1481_ = lean_ctor_get(v___x_1473_, 0);
lean_dec(v_unused_1481_);
v___x_1475_ = v___x_1473_;
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
else
{
lean_dec(v___x_1473_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1480_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1478_; 
if (v_isShared_1476_ == 0)
{
lean_ctor_set_tag(v___x_1475_, 1);
lean_ctor_set(v___x_1475_, 0, v_a_1470_);
v___x_1478_ = v___x_1475_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1470_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v_a_1470_);
v_a_1482_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1473_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1473_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_dec(v_a_1470_);
lean_dec(v_a_1468_);
return v___x_1469_;
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
lean_dec_ref(v_x_1461_);
v_a_1492_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1467_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1467_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg___boxed(lean_object* v_x_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg(v_x_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1(lean_object* v_00_u03b1_1507_, lean_object* v_x_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg(v_x_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___boxed(lean_object* v_00_u03b1_1515_, lean_object* v_x_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1(v_00_u03b1_1515_, v_x_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
return v_res_1522_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg(lean_object* v_k_1523_, lean_object* v_t_1524_){
_start:
{
if (lean_obj_tag(v_t_1524_) == 0)
{
lean_object* v_k_1525_; lean_object* v_l_1526_; lean_object* v_r_1527_; uint8_t v___x_1528_; 
v_k_1525_ = lean_ctor_get(v_t_1524_, 1);
v_l_1526_ = lean_ctor_get(v_t_1524_, 3);
v_r_1527_ = lean_ctor_get(v_t_1524_, 4);
v___x_1528_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1523_, v_k_1525_);
switch(v___x_1528_)
{
case 0:
{
v_t_1524_ = v_l_1526_;
goto _start;
}
case 1:
{
uint8_t v___x_1530_; 
v___x_1530_ = 1;
return v___x_1530_;
}
default: 
{
v_t_1524_ = v_r_1527_;
goto _start;
}
}
}
else
{
uint8_t v___x_1532_; 
v___x_1532_ = 0;
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg___boxed(lean_object* v_k_1533_, lean_object* v_t_1534_){
_start:
{
uint8_t v_res_1535_; lean_object* v_r_1536_; 
v_res_1535_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg(v_k_1533_, v_t_1534_);
lean_dec(v_t_1534_);
lean_dec(v_k_1533_);
v_r_1536_ = lean_box(v_res_1535_);
return v_r_1536_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0(void){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_mk_string_unchecked("injections", 10, 10);
return v___x_1537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__0);
v___x_1539_ = l_Lean_Name_mkStr1(v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2(void){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = lean_mk_string_unchecked("recursion depth exceeded", 24, 24);
return v___x_1540_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__2);
v___x_1542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
return v___x_1542_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__3);
v___x_1544_ = l_Lean_MessageData_ofFormat(v___x_1543_);
return v___x_1544_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5(void){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1545_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__4);
v___x_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0___boxed(lean_object* v_mvarId_1547_, lean_object* v_head_1548_, lean_object* v_newNames_1549_, lean_object* v_tail_1550_, lean_object* v_forbidden_1551_, lean_object* v_n_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0(v_mvarId_1547_, v_head_1548_, v_newNames_1549_, v_tail_1550_, v_forbidden_1551_, v_n_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go(lean_object* v_depth_1559_, lean_object* v_fvarIds_1560_, lean_object* v_mvarId_1561_, lean_object* v_newNames_1562_, lean_object* v_forbidden_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_zero_1569_; uint8_t v_isZero_1570_; 
v_zero_1569_ = lean_unsigned_to_nat(0u);
v_isZero_1570_ = lean_nat_dec_eq(v_depth_1559_, v_zero_1569_);
if (v_isZero_1570_ == 1)
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_fvarIds_1560_);
lean_dec(v_depth_1559_);
v___x_1571_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__1);
v___x_1572_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5, &l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___closed__5);
v___x_1573_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1571_, v_mvarId_1561_, v___x_1572_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
return v___x_1573_;
}
else
{
if (lean_obj_tag(v_fvarIds_1560_) == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_dec(v_depth_1559_);
v___x_1574_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1574_, 0, v_mvarId_1561_);
lean_ctor_set(v___x_1574_, 1, v_newNames_1562_);
lean_ctor_set(v___x_1574_, 2, v_forbidden_1563_);
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
else
{
lean_object* v_head_1576_; lean_object* v_tail_1577_; lean_object* v_one_1578_; lean_object* v_n_1579_; lean_object* v___x_1580_; lean_object* v___y_1582_; uint8_t v___y_1583_; uint8_t v___x_1585_; 
v_head_1576_ = lean_ctor_get(v_fvarIds_1560_, 0);
lean_inc(v_head_1576_);
v_tail_1577_ = lean_ctor_get(v_fvarIds_1560_, 1);
lean_inc(v_tail_1577_);
lean_dec_ref(v_fvarIds_1560_);
v_one_1578_ = lean_unsigned_to_nat(1u);
v_n_1579_ = lean_nat_sub(v_depth_1559_, v_one_1578_);
lean_dec(v_depth_1559_);
v___x_1580_ = lean_nat_add(v_n_1579_, v_one_1578_);
v___x_1585_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg(v_head_1576_, v_forbidden_1563_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; 
lean_inc(v_head_1576_);
v___x_1586_ = l_Lean_FVarId_getType___redArg(v_head_1576_, v_a_1564_, v_a_1566_, v_a_1567_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1588_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref(v___x_1586_);
v___x_1588_ = l_Lean_Meta_matchEqHEq_x3f(v_a_1587_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref(v___x_1588_);
if (lean_obj_tag(v_a_1589_) == 1)
{
lean_object* v_val_1590_; lean_object* v_snd_1591_; lean_object* v_fst_1592_; lean_object* v_snd_1593_; lean_object* v___x_1594_; 
v_val_1590_ = lean_ctor_get(v_a_1589_, 0);
lean_inc(v_val_1590_);
lean_dec_ref(v_a_1589_);
v_snd_1591_ = lean_ctor_get(v_val_1590_, 1);
lean_inc(v_snd_1591_);
lean_dec(v_val_1590_);
v_fst_1592_ = lean_ctor_get(v_snd_1591_, 0);
lean_inc(v_fst_1592_);
v_snd_1593_ = lean_ctor_get(v_snd_1591_, 1);
lean_inc(v_snd_1593_);
lean_dec(v_snd_1591_);
lean_inc(v_a_1567_);
lean_inc_ref(v_a_1566_);
lean_inc(v_a_1565_);
lean_inc_ref(v_a_1564_);
v___x_1594_ = lean_whnf(v_fst_1592_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref(v___x_1594_);
lean_inc(v_a_1567_);
lean_inc_ref(v_a_1566_);
lean_inc(v_a_1565_);
lean_inc_ref(v_a_1564_);
v___x_1596_ = lean_whnf(v_snd_1593_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___f_1598_; uint8_t v___y_1600_; uint8_t v___x_1606_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref(v___x_1596_);
lean_inc(v_forbidden_1563_);
lean_inc(v_tail_1577_);
lean_inc(v_newNames_1562_);
lean_inc(v_mvarId_1561_);
v___f_1598_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1598_, 0, v_mvarId_1561_);
lean_closure_set(v___f_1598_, 1, v_head_1576_);
lean_closure_set(v___f_1598_, 2, v_newNames_1562_);
lean_closure_set(v___f_1598_, 3, v_tail_1577_);
lean_closure_set(v___f_1598_, 4, v_forbidden_1563_);
lean_closure_set(v___f_1598_, 5, v_n_1579_);
v___x_1606_ = l_Lean_Expr_isRawNatLit(v_a_1595_);
lean_dec(v_a_1595_);
if (v___x_1606_ == 0)
{
lean_dec(v_a_1597_);
v___y_1600_ = v___x_1606_;
goto v___jp_1599_;
}
else
{
uint8_t v___x_1607_; 
v___x_1607_ = l_Lean_Expr_isRawNatLit(v_a_1597_);
lean_dec(v_a_1597_);
v___y_1600_ = v___x_1607_;
goto v___jp_1599_;
}
v___jp_1599_:
{
if (v___y_1600_ == 0)
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_commitIfNoEx___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__1___redArg(v___f_1598_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_);
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_dec(v___x_1580_);
lean_dec(v_tail_1577_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
return v___x_1601_;
}
else
{
lean_object* v_a_1602_; uint8_t v___x_1603_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
v___x_1603_ = l_Lean_Exception_isInterrupt(v_a_1602_);
if (v___x_1603_ == 0)
{
uint8_t v___x_1604_; 
v___x_1604_ = l_Lean_Exception_isRuntime(v_a_1602_);
v___y_1582_ = v___x_1601_;
v___y_1583_ = v___x_1604_;
goto v___jp_1581_;
}
else
{
lean_dec(v_a_1602_);
v___y_1582_ = v___x_1601_;
v___y_1583_ = v___x_1603_;
goto v___jp_1581_;
}
}
}
else
{
lean_dec_ref(v___f_1598_);
v_depth_1559_ = v___x_1580_;
v_fvarIds_1560_ = v_tail_1577_;
goto _start;
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_a_1595_);
lean_dec(v___x_1580_);
lean_dec(v_n_1579_);
lean_dec(v_tail_1577_);
lean_dec(v_head_1576_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
v_a_1608_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1596_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1596_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec(v_snd_1593_);
lean_dec(v___x_1580_);
lean_dec(v_n_1579_);
lean_dec(v_tail_1577_);
lean_dec(v_head_1576_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
v_a_1616_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1594_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1594_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
else
{
lean_dec(v_a_1589_);
lean_dec(v_n_1579_);
lean_dec(v_head_1576_);
v_depth_1559_ = v___x_1580_;
v_fvarIds_1560_ = v_tail_1577_;
goto _start;
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v___x_1580_);
lean_dec(v_n_1579_);
lean_dec(v_tail_1577_);
lean_dec(v_head_1576_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
v_a_1625_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1588_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1588_);
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
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v___x_1580_);
lean_dec(v_n_1579_);
lean_dec(v_tail_1577_);
lean_dec(v_head_1576_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
v_a_1633_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1586_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1586_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
else
{
lean_dec(v_n_1579_);
lean_dec(v_head_1576_);
v_depth_1559_ = v___x_1580_;
v_fvarIds_1560_ = v_tail_1577_;
goto _start;
}
v___jp_1581_:
{
if (v___y_1583_ == 0)
{
lean_dec_ref(v___y_1582_);
v_depth_1559_ = v___x_1580_;
v_fvarIds_1560_ = v_tail_1577_;
goto _start;
}
else
{
lean_dec(v___x_1580_);
lean_dec(v_tail_1577_);
lean_dec(v_forbidden_1563_);
lean_dec(v_newNames_1562_);
lean_dec(v_mvarId_1561_);
return v___y_1582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___boxed(lean_object* v_depth_1642_, lean_object* v_fvarIds_1643_, lean_object* v_mvarId_1644_, lean_object* v_newNames_1645_, lean_object* v_forbidden_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go(v_depth_1642_, v_fvarIds_1643_, v_mvarId_1644_, v_newNames_1645_, v_forbidden_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___lam__0(lean_object* v_mvarId_1653_, lean_object* v_head_1654_, lean_object* v_newNames_1655_, lean_object* v_tail_1656_, lean_object* v_forbidden_1657_, lean_object* v_n_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v___x_1664_; 
lean_inc(v_head_1654_);
v___x_1664_ = l_Lean_Meta_injection(v_mvarId_1653_, v_head_1654_, v_newNames_1655_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1681_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1667_ = v___x_1664_;
v_isShared_1668_ = v_isSharedCheck_1681_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1664_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1681_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
if (lean_obj_tag(v_a_1665_) == 0)
{
lean_object* v___x_1669_; lean_object* v___x_1671_; 
lean_dec(v_n_1658_);
lean_dec(v_forbidden_1657_);
lean_dec(v_tail_1656_);
lean_dec(v_head_1654_);
v___x_1669_ = lean_box(0);
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1669_);
v___x_1671_ = v___x_1667_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
else
{
lean_object* v_mvarId_1673_; lean_object* v_newEqs_1674_; lean_object* v_remainingNames_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
lean_del_object(v___x_1667_);
v_mvarId_1673_ = lean_ctor_get(v_a_1665_, 0);
lean_inc_n(v_mvarId_1673_, 2);
v_newEqs_1674_ = lean_ctor_get(v_a_1665_, 1);
lean_inc_ref(v_newEqs_1674_);
v_remainingNames_1675_ = lean_ctor_get(v_a_1665_, 2);
lean_inc(v_remainingNames_1675_);
lean_dec_ref(v_a_1665_);
v___x_1676_ = lean_array_to_list(v_newEqs_1674_);
v___x_1677_ = l_List_appendTR___redArg(v___x_1676_, v_tail_1656_);
v___x_1678_ = l_Lean_FVarIdSet_insert(v_forbidden_1657_, v_head_1654_);
v___x_1679_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go___boxed), 10, 5);
lean_closure_set(v___x_1679_, 0, v_n_1658_);
lean_closure_set(v___x_1679_, 1, v___x_1677_);
lean_closure_set(v___x_1679_, 2, v_mvarId_1673_);
lean_closure_set(v___x_1679_, 3, v_remainingNames_1675_);
lean_closure_set(v___x_1679_, 4, v___x_1678_);
v___x_1680_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(v_mvarId_1673_, v___x_1679_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
return v___x_1680_;
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
lean_dec(v_n_1658_);
lean_dec(v_forbidden_1657_);
lean_dec(v_tail_1656_);
lean_dec(v_head_1654_);
v_a_1682_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1664_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1664_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0(lean_object* v_00_u03b2_1690_, lean_object* v_k_1691_, lean_object* v_t_1692_){
_start:
{
uint8_t v___x_1693_; 
v___x_1693_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___redArg(v_k_1691_, v_t_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0___boxed(lean_object* v_00_u03b2_1694_, lean_object* v_k_1695_, lean_object* v_t_1696_){
_start:
{
uint8_t v_res_1697_; lean_object* v_r_1698_; 
v_res_1697_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go_spec__0(v_00_u03b2_1694_, v_k_1695_, v_t_1696_);
lean_dec(v_t_1696_);
lean_dec(v_k_1695_);
v_r_1698_ = lean_box(v_res_1697_);
return v_r_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injections___lam__0(lean_object* v_maxDepth_1699_, lean_object* v_mvarId_1700_, lean_object* v_newNames_1701_, lean_object* v_forbidden_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_lctx_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_lctx_1708_ = lean_ctor_get(v___y_1703_, 2);
v___x_1709_ = l_Lean_LocalContext_getFVarIds(v_lctx_1708_);
v___x_1710_ = lean_array_to_list(v___x_1709_);
v___x_1711_ = l___private_Lean_Meta_Tactic_Injection_0__Lean_Meta_injections_go(v_maxDepth_1699_, v___x_1710_, v_mvarId_1700_, v_newNames_1701_, v_forbidden_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injections___lam__0___boxed(lean_object* v_maxDepth_1712_, lean_object* v_mvarId_1713_, lean_object* v_newNames_1714_, lean_object* v_forbidden_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Meta_injections___lam__0(v_maxDepth_1712_, v_mvarId_1713_, v_newNames_1714_, v_forbidden_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injections(lean_object* v_mvarId_1722_, lean_object* v_newNames_1723_, lean_object* v_maxDepth_1724_, lean_object* v_forbidden_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v___f_1731_; lean_object* v___x_1732_; 
lean_inc(v_mvarId_1722_);
v___f_1731_ = lean_alloc_closure((void*)(l_Lean_Meta_injections___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1731_, 0, v_maxDepth_1724_);
lean_closure_set(v___f_1731_, 1, v_mvarId_1722_);
lean_closure_set(v___f_1731_, 2, v_newNames_1723_);
lean_closure_set(v___f_1731_, 3, v_forbidden_1725_);
v___x_1732_ = l_Lean_MVarId_withContext___at___00Lean_Meta_injectionCore_spec__2___redArg(v_mvarId_1722_, v___f_1731_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_injections___boxed(lean_object* v_mvarId_1733_, lean_object* v_newNames_1734_, lean_object* v_maxDepth_1735_, lean_object* v_forbidden_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lean_Meta_injections(v_mvarId_1733_, v_newNames_1734_, v_maxDepth_1735_, v_forbidden_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_);
lean_dec(v_a_1740_);
lean_dec_ref(v_a_1739_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
return v_res_1742_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_1743_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__0_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1745_ = lean_box(0);
v___x_1746_ = l_Lean_Name_str___override(v___x_1745_, v___x_1744_);
return v___x_1746_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1747_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1748_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1749_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__1_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1750_ = l_Lean_Name_str___override(v___x_1749_, v___x_1748_);
return v___x_1750_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1751_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__25, &l_Lean_Meta_injectionCore___lam__1___closed__25_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__25);
v___x_1752_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__3_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1753_ = l_Lean_Name_str___override(v___x_1752_, v___x_1751_);
return v___x_1753_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1754_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__26, &l_Lean_Meta_injectionCore___lam__1___closed__26_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__26);
v___x_1755_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__4_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1756_ = l_Lean_Name_str___override(v___x_1755_, v___x_1754_);
return v___x_1756_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_mk_string_unchecked("Injection", 9, 9);
return v___x_1757_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1759_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__5_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1760_ = l_Lean_Name_str___override(v___x_1759_, v___x_1758_);
return v___x_1760_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1761_ = lean_unsigned_to_nat(0u);
v___x_1762_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__7_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1763_ = l_Lean_Name_num___override(v___x_1762_, v___x_1761_);
return v___x_1763_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_1764_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__9_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1766_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__8_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1767_ = l_Lean_Name_str___override(v___x_1766_, v___x_1765_);
return v___x_1767_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_1768_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__11_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1770_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__10_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1771_ = l_Lean_Name_str___override(v___x_1770_, v___x_1769_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1772_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__2_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1773_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__12_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1774_ = l_Lean_Name_str___override(v___x_1773_, v___x_1772_);
return v___x_1774_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1775_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__25, &l_Lean_Meta_injectionCore___lam__1___closed__25_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__25);
v___x_1776_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__13_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1777_ = l_Lean_Name_str___override(v___x_1776_, v___x_1775_);
return v___x_1777_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1778_ = lean_obj_once(&l_Lean_Meta_injectionCore___lam__1___closed__26, &l_Lean_Meta_injectionCore___lam__1___closed__26_once, _init_l_Lean_Meta_injectionCore___lam__1___closed__26);
v___x_1779_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__14_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1780_ = l_Lean_Name_str___override(v___x_1779_, v___x_1778_);
return v___x_1780_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__6_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1782_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__15_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1783_ = l_Lean_Name_str___override(v___x_1782_, v___x_1781_);
return v___x_1783_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_unsigned_to_nat(3052487328u);
v___x_1785_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__16_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1786_ = l_Lean_Name_num___override(v___x_1785_, v___x_1784_);
return v___x_1786_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_1787_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1788_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__18_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1789_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__17_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1790_ = l_Lean_Name_str___override(v___x_1789_, v___x_1788_);
return v___x_1790_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_1791_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1792_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__20_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1793_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__19_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1794_ = l_Lean_Name_str___override(v___x_1793_, v___x_1792_);
return v___x_1794_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_unsigned_to_nat(2u);
v___x_1796_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__21_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1797_ = l_Lean_Name_num___override(v___x_1796_, v___x_1795_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1799_ = lean_obj_once(&l_Lean_Meta_injectionIntro___closed__1, &l_Lean_Meta_injectionIntro___closed__1_once, _init_l_Lean_Meta_injectionIntro___closed__1);
v___x_1800_ = 0;
v___x_1801_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Injection_0__initFn___closed__22_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_);
v___x_1802_ = l_Lean_registerTraceClass(v___x_1799_, v___x_1800_, v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2____boxed(lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_();
return v_res_1804_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Injection_0__initFn_00___x40_Lean_Meta_Tactic_Injection_3052487328____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Injection(builtin);
}
#ifdef __cplusplus
}
#endif
