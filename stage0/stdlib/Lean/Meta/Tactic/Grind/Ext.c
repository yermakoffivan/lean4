// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Ext
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.SynthInstance
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
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceAndAssign___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getMaxGeneration___redArg(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addNewRawFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_e_34_, v___y_42_, v___y_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___boxed(lean_object* v_e_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(v_e_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec(v___y_48_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(lean_object* v_k_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___x_72_; 
lean_inc(v___y_66_);
lean_inc_ref(v___y_65_);
lean_inc(v___y_64_);
lean_inc_ref(v___y_63_);
lean_inc(v___y_62_);
lean_inc(v___y_61_);
v___x_72_ = lean_apply_11(v_k_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, lean_box(0));
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed(lean_object* v_k_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(v_k_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec(v___y_74_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(lean_object* v_k_86_, uint8_t v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___f_99_; lean_object* v___x_100_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc(v___y_89_);
lean_inc(v___y_88_);
v___f_99_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_99_, 0, v_k_86_);
lean_closure_set(v___f_99_, 1, v___y_88_);
lean_closure_set(v___f_99_, 2, v___y_89_);
lean_closure_set(v___f_99_, 3, v___y_90_);
lean_closure_set(v___f_99_, 4, v___y_91_);
lean_closure_set(v___f_99_, 5, v___y_92_);
lean_closure_set(v___f_99_, 6, v___y_93_);
v___x_100_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_87_, v___f_99_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
return v___x_100_;
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___boxed(lean_object* v_k_109_, lean_object* v_allowLevelAssignments_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_122_; lean_object* v_res_123_; 
v_allowLevelAssignments_boxed_122_ = lean_unbox(v_allowLevelAssignments_110_);
v_res_123_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v_k_109_, v_allowLevelAssignments_boxed_122_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec(v___y_111_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(lean_object* v_00_u03b1_124_, lean_object* v_k_125_, uint8_t v_allowLevelAssignments_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v_k_125_, v_allowLevelAssignments_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___boxed(lean_object* v_00_u03b1_139_, lean_object* v_k_140_, lean_object* v_allowLevelAssignments_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_153_; lean_object* v_res_154_; 
v_allowLevelAssignments_boxed_153_ = lean_unbox(v_allowLevelAssignments_141_);
v_res_154_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(v_00_u03b1_139_, v_k_140_, v_allowLevelAssignments_boxed_153_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec(v___y_142_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11___redArg(lean_object* v_x_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
lean_object* v_ks_159_; lean_object* v_vs_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_184_; 
v_ks_159_ = lean_ctor_get(v_x_155_, 0);
v_vs_160_ = lean_ctor_get(v_x_155_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_184_ == 0)
{
v___x_162_ = v_x_155_;
v_isShared_163_ = v_isSharedCheck_184_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_vs_160_);
lean_inc(v_ks_159_);
lean_dec(v_x_155_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_184_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_array_get_size(v_ks_159_);
v___x_165_ = lean_nat_dec_lt(v_x_156_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_169_; 
lean_dec(v_x_156_);
v___x_166_ = lean_array_push(v_ks_159_, v_x_157_);
v___x_167_ = lean_array_push(v_vs_160_, v_x_158_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_167_);
lean_ctor_set(v___x_162_, 0, v___x_166_);
v___x_169_ = v___x_162_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
else
{
lean_object* v_k_x27_171_; uint8_t v___x_172_; 
v_k_x27_171_ = lean_array_fget_borrowed(v_ks_159_, v_x_156_);
v___x_172_ = l_Lean_instBEqMVarId_beq(v_x_157_, v_k_x27_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_174_; 
if (v_isShared_163_ == 0)
{
v___x_174_ = v___x_162_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_ks_159_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_vs_160_);
v___x_174_ = v_reuseFailAlloc_178_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_x_156_, v___x_175_);
lean_dec(v_x_156_);
v_x_155_ = v___x_174_;
v_x_156_ = v___x_176_;
goto _start;
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_179_ = lean_array_fset(v_ks_159_, v_x_156_, v_x_157_);
v___x_180_ = lean_array_fset(v_vs_160_, v_x_156_, v_x_158_);
lean_dec(v_x_156_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_180_);
lean_ctor_set(v___x_162_, 0, v___x_179_);
v___x_182_ = v___x_162_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_n_185_, lean_object* v_k_186_, lean_object* v_v_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11___redArg(v_n_185_, v___x_188_, v_k_186_, v_v_187_);
return v___x_189_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; 
v___x_190_ = ((size_t)5ULL);
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_shift_left(v___x_191_, v___x_190_);
return v___x_192_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_193_; size_t v___x_194_; size_t v___x_195_; 
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_195_ = lean_usize_sub(v___x_194_, v___x_193_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(lean_object* v_x_197_, size_t v_x_198_, size_t v_x_199_, lean_object* v_x_200_, lean_object* v_x_201_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v_es_202_; size_t v___x_203_; size_t v___x_204_; size_t v___x_205_; size_t v___x_206_; lean_object* v_j_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_es_202_ = lean_ctor_get(v_x_197_, 0);
v___x_203_ = ((size_t)5ULL);
v___x_204_ = ((size_t)1ULL);
v___x_205_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1);
v___x_206_ = lean_usize_land(v_x_198_, v___x_205_);
v_j_207_ = lean_usize_to_nat(v___x_206_);
v___x_208_ = lean_array_get_size(v_es_202_);
v___x_209_ = lean_nat_dec_lt(v_j_207_, v___x_208_);
if (v___x_209_ == 0)
{
lean_dec(v_j_207_);
lean_dec(v_x_201_);
lean_dec(v_x_200_);
return v_x_197_;
}
else
{
lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_246_; 
lean_inc_ref(v_es_202_);
v_isSharedCheck_246_ = !lean_is_exclusive(v_x_197_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v_x_197_, 0);
lean_dec(v_unused_247_);
v___x_211_ = v_x_197_;
v_isShared_212_ = v_isSharedCheck_246_;
goto v_resetjp_210_;
}
else
{
lean_dec(v_x_197_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_246_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_v_213_; lean_object* v___x_214_; lean_object* v_xs_x27_215_; lean_object* v___y_217_; 
v_v_213_ = lean_array_fget(v_es_202_, v_j_207_);
v___x_214_ = lean_box(0);
v_xs_x27_215_ = lean_array_fset(v_es_202_, v_j_207_, v___x_214_);
switch(lean_obj_tag(v_v_213_))
{
case 0:
{
lean_object* v_key_222_; lean_object* v_val_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_233_; 
v_key_222_ = lean_ctor_get(v_v_213_, 0);
v_val_223_ = lean_ctor_get(v_v_213_, 1);
v_isSharedCheck_233_ = !lean_is_exclusive(v_v_213_);
if (v_isSharedCheck_233_ == 0)
{
v___x_225_ = v_v_213_;
v_isShared_226_ = v_isSharedCheck_233_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_val_223_);
lean_inc(v_key_222_);
lean_dec(v_v_213_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_233_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint8_t v___x_227_; 
v___x_227_ = l_Lean_instBEqMVarId_beq(v_x_200_, v_key_222_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_del_object(v___x_225_);
v___x_228_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_222_, v_val_223_, v_x_200_, v_x_201_);
v___x_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___y_217_ = v___x_229_;
goto v___jp_216_;
}
else
{
lean_object* v___x_231_; 
lean_dec(v_val_223_);
lean_dec(v_key_222_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 1, v_x_201_);
lean_ctor_set(v___x_225_, 0, v_x_200_);
v___x_231_ = v___x_225_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_x_200_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_x_201_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
v___y_217_ = v___x_231_;
goto v___jp_216_;
}
}
}
}
case 1:
{
lean_object* v_node_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_244_; 
v_node_234_ = lean_ctor_get(v_v_213_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v_v_213_);
if (v_isSharedCheck_244_ == 0)
{
v___x_236_ = v_v_213_;
v_isShared_237_ = v_isSharedCheck_244_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_node_234_);
lean_dec(v_v_213_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_244_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
size_t v___x_238_; size_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_238_ = lean_usize_shift_right(v_x_198_, v___x_203_);
v___x_239_ = lean_usize_add(v_x_199_, v___x_204_);
v___x_240_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_node_234_, v___x_238_, v___x_239_, v_x_200_, v_x_201_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_240_);
v___x_242_ = v___x_236_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
v___y_217_ = v___x_242_;
goto v___jp_216_;
}
}
}
default: 
{
lean_object* v___x_245_; 
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v_x_200_);
lean_ctor_set(v___x_245_, 1, v_x_201_);
v___y_217_ = v___x_245_;
goto v___jp_216_;
}
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_218_ = lean_array_fset(v_xs_x27_215_, v_j_207_, v___y_217_);
lean_dec(v_j_207_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_218_);
v___x_220_ = v___x_211_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
else
{
lean_object* v_ks_248_; lean_object* v_vs_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_269_; 
v_ks_248_ = lean_ctor_get(v_x_197_, 0);
v_vs_249_ = lean_ctor_get(v_x_197_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_x_197_);
if (v_isSharedCheck_269_ == 0)
{
v___x_251_ = v_x_197_;
v_isShared_252_ = v_isSharedCheck_269_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_vs_249_);
lean_inc(v_ks_248_);
lean_dec(v_x_197_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_269_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_ks_248_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_vs_249_);
v___x_254_ = v_reuseFailAlloc_268_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v_newNode_255_; uint8_t v___y_257_; size_t v___x_263_; uint8_t v___x_264_; 
v_newNode_255_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(v___x_254_, v_x_200_, v_x_201_);
v___x_263_ = ((size_t)7ULL);
v___x_264_ = lean_usize_dec_le(v___x_263_, v_x_199_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_255_);
v___x_266_ = lean_unsigned_to_nat(4u);
v___x_267_ = lean_nat_dec_lt(v___x_265_, v___x_266_);
lean_dec(v___x_265_);
v___y_257_ = v___x_267_;
goto v___jp_256_;
}
else
{
v___y_257_ = v___x_264_;
goto v___jp_256_;
}
v___jp_256_:
{
if (v___y_257_ == 0)
{
lean_object* v_ks_258_; lean_object* v_vs_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_ks_258_ = lean_ctor_get(v_newNode_255_, 0);
lean_inc_ref(v_ks_258_);
v_vs_259_ = lean_ctor_get(v_newNode_255_, 1);
lean_inc_ref(v_vs_259_);
lean_dec_ref(v_newNode_255_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_262_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg(v_x_199_, v_ks_258_, v_vs_259_, v___x_260_, v___x_261_);
lean_dec_ref(v_vs_259_);
lean_dec_ref(v_ks_258_);
return v___x_262_;
}
else
{
return v_newNode_255_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg(size_t v_depth_270_, lean_object* v_keys_271_, lean_object* v_vals_272_, lean_object* v_i_273_, lean_object* v_entries_274_){
_start:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_array_get_size(v_keys_271_);
v___x_276_ = lean_nat_dec_lt(v_i_273_, v___x_275_);
if (v___x_276_ == 0)
{
lean_dec(v_i_273_);
return v_entries_274_;
}
else
{
lean_object* v_k_277_; lean_object* v_v_278_; uint64_t v___x_279_; size_t v_h_280_; size_t v___x_281_; lean_object* v___x_282_; size_t v___x_283_; size_t v___x_284_; size_t v___x_285_; size_t v_h_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_k_277_ = lean_array_fget_borrowed(v_keys_271_, v_i_273_);
v_v_278_ = lean_array_fget_borrowed(v_vals_272_, v_i_273_);
v___x_279_ = l_Lean_instHashableMVarId_hash(v_k_277_);
v_h_280_ = lean_uint64_to_usize(v___x_279_);
v___x_281_ = ((size_t)5ULL);
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = ((size_t)1ULL);
v___x_284_ = lean_usize_sub(v_depth_270_, v___x_283_);
v___x_285_ = lean_usize_mul(v___x_281_, v___x_284_);
v_h_286_ = lean_usize_shift_right(v_h_280_, v___x_285_);
v___x_287_ = lean_nat_add(v_i_273_, v___x_282_);
lean_dec(v_i_273_);
lean_inc(v_v_278_);
lean_inc(v_k_277_);
v___x_288_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_entries_274_, v_h_286_, v_depth_270_, v_k_277_, v_v_278_);
v_i_273_ = v___x_287_;
v_entries_274_ = v___x_288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object* v_depth_290_, lean_object* v_keys_291_, lean_object* v_vals_292_, lean_object* v_i_293_, lean_object* v_entries_294_){
_start:
{
size_t v_depth_boxed_295_; lean_object* v_res_296_; 
v_depth_boxed_295_ = lean_unbox_usize(v_depth_290_);
lean_dec(v_depth_290_);
v_res_296_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg(v_depth_boxed_295_, v_keys_291_, v_vals_292_, v_i_293_, v_entries_294_);
lean_dec_ref(v_vals_292_);
lean_dec_ref(v_keys_291_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_x_301_){
_start:
{
size_t v_x_214940__boxed_302_; size_t v_x_214941__boxed_303_; lean_object* v_res_304_; 
v_x_214940__boxed_302_ = lean_unbox_usize(v_x_298_);
lean_dec(v_x_298_);
v_x_214941__boxed_303_ = lean_unbox_usize(v_x_299_);
lean_dec(v_x_299_);
v_res_304_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_297_, v_x_214940__boxed_302_, v_x_214941__boxed_303_, v_x_300_, v_x_301_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
uint64_t v___x_308_; size_t v___x_309_; size_t v___x_310_; lean_object* v___x_311_; 
v___x_308_ = l_Lean_instHashableMVarId_hash(v_x_306_);
v___x_309_ = lean_uint64_to_usize(v___x_308_);
v___x_310_ = ((size_t)1ULL);
v___x_311_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_305_, v___x_309_, v___x_310_, v_x_306_, v_x_307_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(lean_object* v_mvarId_312_, lean_object* v_val_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_mctx_319_; lean_object* v_cache_320_; lean_object* v_zetaDeltaFVarIds_321_; lean_object* v_postponed_322_; lean_object* v_diag_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_351_; 
v___x_317_ = lean_st_ref_get(v___y_315_);
lean_dec(v___x_317_);
v___x_318_ = lean_st_ref_take(v___y_314_);
v_mctx_319_ = lean_ctor_get(v___x_318_, 0);
v_cache_320_ = lean_ctor_get(v___x_318_, 1);
v_zetaDeltaFVarIds_321_ = lean_ctor_get(v___x_318_, 2);
v_postponed_322_ = lean_ctor_get(v___x_318_, 3);
v_diag_323_ = lean_ctor_get(v___x_318_, 4);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_351_ == 0)
{
v___x_325_ = v___x_318_;
v_isShared_326_ = v_isSharedCheck_351_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_diag_323_);
lean_inc(v_postponed_322_);
lean_inc(v_zetaDeltaFVarIds_321_);
lean_inc(v_cache_320_);
lean_inc(v_mctx_319_);
lean_dec(v___x_318_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_351_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v_depth_327_; lean_object* v_levelAssignDepth_328_; lean_object* v_lmvarCounter_329_; lean_object* v_mvarCounter_330_; lean_object* v_lDecls_331_; lean_object* v_decls_332_; lean_object* v_userNames_333_; lean_object* v_lAssignment_334_; lean_object* v_eAssignment_335_; lean_object* v_dAssignment_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_350_; 
v_depth_327_ = lean_ctor_get(v_mctx_319_, 0);
v_levelAssignDepth_328_ = lean_ctor_get(v_mctx_319_, 1);
v_lmvarCounter_329_ = lean_ctor_get(v_mctx_319_, 2);
v_mvarCounter_330_ = lean_ctor_get(v_mctx_319_, 3);
v_lDecls_331_ = lean_ctor_get(v_mctx_319_, 4);
v_decls_332_ = lean_ctor_get(v_mctx_319_, 5);
v_userNames_333_ = lean_ctor_get(v_mctx_319_, 6);
v_lAssignment_334_ = lean_ctor_get(v_mctx_319_, 7);
v_eAssignment_335_ = lean_ctor_get(v_mctx_319_, 8);
v_dAssignment_336_ = lean_ctor_get(v_mctx_319_, 9);
v_isSharedCheck_350_ = !lean_is_exclusive(v_mctx_319_);
if (v_isSharedCheck_350_ == 0)
{
v___x_338_ = v_mctx_319_;
v_isShared_339_ = v_isSharedCheck_350_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_dAssignment_336_);
lean_inc(v_eAssignment_335_);
lean_inc(v_lAssignment_334_);
lean_inc(v_userNames_333_);
lean_inc(v_decls_332_);
lean_inc(v_lDecls_331_);
lean_inc(v_mvarCounter_330_);
lean_inc(v_lmvarCounter_329_);
lean_inc(v_levelAssignDepth_328_);
lean_inc(v_depth_327_);
lean_dec(v_mctx_319_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_350_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_340_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(v_eAssignment_335_, v_mvarId_312_, v_val_313_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 8, v___x_340_);
v___x_342_ = v___x_338_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_depth_327_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_levelAssignDepth_328_);
lean_ctor_set(v_reuseFailAlloc_349_, 2, v_lmvarCounter_329_);
lean_ctor_set(v_reuseFailAlloc_349_, 3, v_mvarCounter_330_);
lean_ctor_set(v_reuseFailAlloc_349_, 4, v_lDecls_331_);
lean_ctor_set(v_reuseFailAlloc_349_, 5, v_decls_332_);
lean_ctor_set(v_reuseFailAlloc_349_, 6, v_userNames_333_);
lean_ctor_set(v_reuseFailAlloc_349_, 7, v_lAssignment_334_);
lean_ctor_set(v_reuseFailAlloc_349_, 8, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_349_, 9, v_dAssignment_336_);
v___x_342_ = v_reuseFailAlloc_349_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_344_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_342_);
v___x_344_ = v___x_325_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_cache_320_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v_zetaDeltaFVarIds_321_);
lean_ctor_set(v_reuseFailAlloc_348_, 3, v_postponed_322_);
lean_ctor_set(v_reuseFailAlloc_348_, 4, v_diag_323_);
v___x_344_ = v_reuseFailAlloc_348_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_st_ref_set(v___y_314_, v___x_344_);
v___x_346_ = lean_box(0);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg___boxed(lean_object* v_mvarId_352_, lean_object* v_val_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v_mvarId_352_, v_val_353_, v___y_354_, v___y_355_);
lean_dec(v___y_355_);
lean_dec(v___y_354_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(uint8_t v___x_358_, lean_object* v_p_359_, lean_object* v_e_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
uint8_t v___x_372_; 
v___x_372_ = l_Lean_Expr_isMVar(v_p_359_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Meta_isExprDefEq(v_p_359_, v_e_360_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_383_; 
v___x_374_ = l_Lean_Expr_mvarId_x21(v_p_359_);
lean_dec_ref(v_p_359_);
v___x_375_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v___x_374_, v_e_360_, v___y_368_, v___y_370_);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v___x_375_, 0);
lean_dec(v_unused_384_);
v___x_377_ = v___x_375_;
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
else
{
lean_dec(v___x_375_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_383_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_379_ = lean_box(v___x_358_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_379_);
v___x_381_ = v___x_377_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0___boxed(lean_object* v___x_385_, lean_object* v_p_386_, lean_object* v_e_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
uint8_t v___x_215164__boxed_399_; lean_object* v_res_400_; 
v___x_215164__boxed_399_ = lean_unbox(v___x_385_);
v_res_400_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_215164__boxed_399_, v_p_386_, v_e_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec(v___y_388_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(lean_object* v_msgData_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; lean_object* v_env_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v_mctx_411_; lean_object* v_lctx_412_; lean_object* v_options_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_407_ = lean_st_ref_get(v___y_405_);
v_env_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc_ref(v_env_408_);
lean_dec(v___x_407_);
v___x_409_ = lean_st_ref_get(v___y_405_);
lean_dec(v___x_409_);
v___x_410_ = lean_st_ref_get(v___y_403_);
v_mctx_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc_ref(v_mctx_411_);
lean_dec(v___x_410_);
v_lctx_412_ = lean_ctor_get(v___y_402_, 2);
v_options_413_ = lean_ctor_get(v___y_404_, 2);
lean_inc_ref(v_options_413_);
lean_inc_ref(v_lctx_412_);
v___x_414_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_414_, 0, v_env_408_);
lean_ctor_set(v___x_414_, 1, v_mctx_411_);
lean_ctor_set(v___x_414_, 2, v_lctx_412_);
lean_ctor_set(v___x_414_, 3, v_options_413_);
v___x_415_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v_msgData_401_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6___boxed(lean_object* v_msgData_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(v_msgData_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_424_; double v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_float_of_nat(v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = lean_mk_string_unchecked("", 0, 0);
return v___x_426_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_mk_empty_array_with_capacity(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(lean_object* v_cls_429_, lean_object* v_msg_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_ref_436_; lean_object* v___x_437_; lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_482_; 
v_ref_436_ = lean_ctor_get(v___y_433_, 5);
v___x_437_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(v_msg_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
v_a_438_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_482_ == 0)
{
v___x_440_ = v___x_437_;
v_isShared_441_ = v_isSharedCheck_482_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_482_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v_traceState_443_; lean_object* v_env_444_; lean_object* v_nextMacroScope_445_; lean_object* v_ngen_446_; lean_object* v_auxDeclNGen_447_; lean_object* v_cache_448_; lean_object* v_messages_449_; lean_object* v_infoState_450_; lean_object* v_snapshotTasks_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_481_; 
v___x_442_ = lean_st_ref_take(v___y_434_);
v_traceState_443_ = lean_ctor_get(v___x_442_, 4);
v_env_444_ = lean_ctor_get(v___x_442_, 0);
v_nextMacroScope_445_ = lean_ctor_get(v___x_442_, 1);
v_ngen_446_ = lean_ctor_get(v___x_442_, 2);
v_auxDeclNGen_447_ = lean_ctor_get(v___x_442_, 3);
v_cache_448_ = lean_ctor_get(v___x_442_, 5);
v_messages_449_ = lean_ctor_get(v___x_442_, 6);
v_infoState_450_ = lean_ctor_get(v___x_442_, 7);
v_snapshotTasks_451_ = lean_ctor_get(v___x_442_, 8);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_481_ == 0)
{
v___x_453_ = v___x_442_;
v_isShared_454_ = v_isSharedCheck_481_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_snapshotTasks_451_);
lean_inc(v_infoState_450_);
lean_inc(v_messages_449_);
lean_inc(v_cache_448_);
lean_inc(v_traceState_443_);
lean_inc(v_auxDeclNGen_447_);
lean_inc(v_ngen_446_);
lean_inc(v_nextMacroScope_445_);
lean_inc(v_env_444_);
lean_dec(v___x_442_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_481_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
uint64_t v_tid_455_; lean_object* v_traces_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_480_; 
v_tid_455_ = lean_ctor_get_uint64(v_traceState_443_, sizeof(void*)*1);
v_traces_456_ = lean_ctor_get(v_traceState_443_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v_traceState_443_);
if (v_isSharedCheck_480_ == 0)
{
v___x_458_ = v_traceState_443_;
v_isShared_459_ = v_isSharedCheck_480_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_traces_456_);
lean_dec(v_traceState_443_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_480_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; double v___x_461_; uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_460_ = lean_box(0);
v___x_461_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0);
v___x_462_ = 0;
v___x_463_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1);
v___x_464_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_464_, 0, v_cls_429_);
lean_ctor_set(v___x_464_, 1, v___x_460_);
lean_ctor_set(v___x_464_, 2, v___x_463_);
lean_ctor_set_float(v___x_464_, sizeof(void*)*3, v___x_461_);
lean_ctor_set_float(v___x_464_, sizeof(void*)*3 + 8, v___x_461_);
lean_ctor_set_uint8(v___x_464_, sizeof(void*)*3 + 16, v___x_462_);
v___x_465_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2, &l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2);
v___x_466_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v_a_438_);
lean_ctor_set(v___x_466_, 2, v___x_465_);
lean_inc(v_ref_436_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v_ref_436_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = l_Lean_PersistentArray_push___redArg(v_traces_456_, v___x_467_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_468_);
v___x_470_ = v___x_458_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_468_);
lean_ctor_set_uint64(v_reuseFailAlloc_479_, sizeof(void*)*1, v_tid_455_);
v___x_470_ = v_reuseFailAlloc_479_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_472_; 
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 4, v___x_470_);
v___x_472_ = v___x_453_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_env_444_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_nextMacroScope_445_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v_ngen_446_);
lean_ctor_set(v_reuseFailAlloc_478_, 3, v_auxDeclNGen_447_);
lean_ctor_set(v_reuseFailAlloc_478_, 4, v___x_470_);
lean_ctor_set(v_reuseFailAlloc_478_, 5, v_cache_448_);
lean_ctor_set(v_reuseFailAlloc_478_, 6, v_messages_449_);
lean_ctor_set(v_reuseFailAlloc_478_, 7, v_infoState_450_);
lean_ctor_set(v_reuseFailAlloc_478_, 8, v_snapshotTasks_451_);
v___x_472_ = v_reuseFailAlloc_478_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = lean_st_ref_set(v___y_434_, v___x_472_);
v___x_474_ = lean_box(0);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_474_);
v___x_476_ = v___x_440_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___boxed(lean_object* v_cls_483_, lean_object* v_msg_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v_cls_483_, v_msg_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_490_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(lean_object* v_keys_491_, lean_object* v_i_492_, lean_object* v_k_493_){
_start:
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = lean_array_get_size(v_keys_491_);
v___x_495_ = lean_nat_dec_lt(v_i_492_, v___x_494_);
if (v___x_495_ == 0)
{
lean_dec(v_i_492_);
return v___x_495_;
}
else
{
lean_object* v_k_x27_496_; uint8_t v___x_497_; 
v_k_x27_496_ = lean_array_fget_borrowed(v_keys_491_, v_i_492_);
v___x_497_ = l_Lean_instBEqMVarId_beq(v_k_493_, v_k_x27_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_nat_add(v_i_492_, v___x_498_);
lean_dec(v_i_492_);
v_i_492_ = v___x_499_;
goto _start;
}
else
{
lean_dec(v_i_492_);
return v___x_497_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg___boxed(lean_object* v_keys_501_, lean_object* v_i_502_, lean_object* v_k_503_){
_start:
{
uint8_t v_res_504_; lean_object* v_r_505_; 
v_res_504_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_keys_501_, v_i_502_, v_k_503_);
lean_dec(v_k_503_);
lean_dec_ref(v_keys_501_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(lean_object* v_x_506_, size_t v_x_507_, lean_object* v_x_508_){
_start:
{
if (lean_obj_tag(v_x_506_) == 0)
{
lean_object* v_es_509_; lean_object* v___x_510_; size_t v___x_511_; size_t v___x_512_; size_t v___x_513_; lean_object* v_j_514_; lean_object* v___x_515_; 
v_es_509_ = lean_ctor_get(v_x_506_, 0);
v___x_510_ = lean_box(2);
v___x_511_ = ((size_t)5ULL);
v___x_512_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___closed__1);
v___x_513_ = lean_usize_land(v_x_507_, v___x_512_);
v_j_514_ = lean_usize_to_nat(v___x_513_);
v___x_515_ = lean_array_get_borrowed(v___x_510_, v_es_509_, v_j_514_);
lean_dec(v_j_514_);
switch(lean_obj_tag(v___x_515_))
{
case 0:
{
lean_object* v_key_516_; uint8_t v___x_517_; 
v_key_516_ = lean_ctor_get(v___x_515_, 0);
v___x_517_ = l_Lean_instBEqMVarId_beq(v_x_508_, v_key_516_);
return v___x_517_;
}
case 1:
{
lean_object* v_node_518_; size_t v___x_519_; 
v_node_518_ = lean_ctor_get(v___x_515_, 0);
v___x_519_ = lean_usize_shift_right(v_x_507_, v___x_511_);
v_x_506_ = v_node_518_;
v_x_507_ = v___x_519_;
goto _start;
}
default: 
{
uint8_t v___x_521_; 
v___x_521_ = 0;
return v___x_521_;
}
}
}
else
{
lean_object* v_ks_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v_ks_522_ = lean_ctor_get(v_x_506_, 0);
v___x_523_ = lean_unsigned_to_nat(0u);
v___x_524_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_ks_522_, v___x_523_, v_x_508_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_x_525_, lean_object* v_x_526_, lean_object* v_x_527_){
_start:
{
size_t v_x_215375__boxed_528_; uint8_t v_res_529_; lean_object* v_r_530_; 
v_x_215375__boxed_528_ = lean_unbox_usize(v_x_526_);
lean_dec(v_x_526_);
v_res_529_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_525_, v_x_215375__boxed_528_, v_x_527_);
lean_dec(v_x_527_);
lean_dec_ref(v_x_525_);
v_r_530_ = lean_box(v_res_529_);
return v_r_530_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
uint64_t v___x_533_; size_t v___x_534_; uint8_t v___x_535_; 
v___x_533_ = l_Lean_instHashableMVarId_hash(v_x_532_);
v___x_534_ = lean_uint64_to_usize(v___x_533_);
v___x_535_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_531_, v___x_534_, v_x_532_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg___boxed(lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
uint8_t v_res_538_; lean_object* v_r_539_; 
v_res_538_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(v_x_536_, v_x_537_);
lean_dec(v_x_537_);
lean_dec_ref(v_x_536_);
v_r_539_ = lean_box(v_res_538_);
return v_r_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(lean_object* v_mvarId_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_mctx_546_; lean_object* v_eAssignment_547_; uint8_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_544_ = lean_st_ref_get(v___y_542_);
lean_dec(v___x_544_);
v___x_545_ = lean_st_ref_get(v___y_541_);
v_mctx_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc_ref(v_mctx_546_);
lean_dec(v___x_545_);
v_eAssignment_547_ = lean_ctor_get(v_mctx_546_, 8);
lean_inc_ref(v_eAssignment_547_);
lean_dec_ref(v_mctx_546_);
v___x_548_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(v_eAssignment_547_, v_mvarId_540_);
lean_dec_ref(v_eAssignment_547_);
v___x_549_ = lean_box(v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg___boxed(lean_object* v_mvarId_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v_mvarId_551_, v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec(v___y_552_);
lean_dec(v_mvarId_551_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(lean_object* v_as_556_, size_t v_i_557_, size_t v_stop_558_, lean_object* v_b_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_a_572_; uint8_t v___x_576_; 
v___x_576_ = lean_usize_dec_eq(v_i_557_, v_stop_558_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_577_ = lean_array_uget_borrowed(v_as_556_, v_i_557_);
v___x_580_ = l_Lean_Expr_mvarId_x21(v___x_577_);
v___x_581_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v___x_580_, v___y_567_, v___y_569_);
lean_dec(v___x_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; uint8_t v___x_583_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref(v___x_581_);
v___x_583_ = lean_unbox(v_a_582_);
lean_dec(v_a_582_);
if (v___x_583_ == 0)
{
goto v___jp_578_;
}
else
{
v_a_572_ = v_b_559_;
goto v___jp_571_;
}
}
else
{
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_584_; uint8_t v___x_585_; 
v_a_584_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_584_);
lean_dec_ref(v___x_581_);
v___x_585_ = lean_unbox(v_a_584_);
lean_dec(v_a_584_);
if (v___x_585_ == 0)
{
v_a_572_ = v_b_559_;
goto v___jp_571_;
}
else
{
goto v___jp_578_;
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec_ref(v_b_559_);
v_a_586_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_581_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_581_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
v___jp_578_:
{
lean_object* v___x_579_; 
lean_inc(v___x_577_);
v___x_579_ = lean_array_push(v_b_559_, v___x_577_);
v_a_572_ = v___x_579_;
goto v___jp_571_;
}
}
else
{
lean_object* v___x_594_; 
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v_b_559_);
return v___x_594_;
}
v___jp_571_:
{
size_t v___x_573_; size_t v___x_574_; 
v___x_573_ = ((size_t)1ULL);
v___x_574_ = lean_usize_add(v_i_557_, v___x_573_);
v_i_557_ = v___x_574_;
v_b_559_ = v_a_572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5___boxed(lean_object* v_as_595_, lean_object* v_i_596_, lean_object* v_stop_597_, lean_object* v_b_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
size_t v_i_boxed_610_; size_t v_stop_boxed_611_; lean_object* v_res_612_; 
v_i_boxed_610_ = lean_unbox_usize(v_i_596_);
lean_dec(v_i_596_);
v_stop_boxed_611_ = lean_unbox_usize(v_stop_597_);
lean_dec(v_stop_597_);
v_res_612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v_as_595_, v_i_boxed_610_, v_stop_boxed_611_, v_b_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v_as_595_);
return v_res_612_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_box(0);
v___x_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1(void){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_mk_string_unchecked("failed to synthesize instance when instantiating extensionality theorem `", 73, 73);
return v___x_615_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1);
v___x_617_ = l_Lean_stringToMessageData(v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3(void){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_mk_string_unchecked("` for ", 6, 6);
return v___x_618_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3);
v___x_620_ = l_Lean_stringToMessageData(v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(lean_object* v___x_621_, lean_object* v_e_622_, lean_object* v_as_623_, size_t v_sz_624_, size_t v_i_625_, lean_object* v_b_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_a_639_; uint8_t v___x_643_; 
v___x_643_ = lean_usize_dec_lt(v_i_625_, v_sz_624_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v_b_626_);
return v___x_644_;
}
else
{
lean_object* v_snd_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_751_; 
v_snd_645_ = lean_ctor_get(v_b_626_, 1);
v_isSharedCheck_751_ = !lean_is_exclusive(v_b_626_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; 
v_unused_752_ = lean_ctor_get(v_b_626_, 0);
lean_dec(v_unused_752_);
v___x_647_ = v_b_626_;
v_isShared_648_ = v_isSharedCheck_751_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_snd_645_);
lean_dec(v_b_626_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_751_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_array_649_; lean_object* v_start_650_; lean_object* v_stop_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v_array_649_ = lean_ctor_get(v_snd_645_, 0);
v_start_650_ = lean_ctor_get(v_snd_645_, 1);
v_stop_651_ = lean_ctor_get(v_snd_645_, 2);
v___x_652_ = lean_box(0);
v___x_653_ = lean_nat_dec_lt(v_start_650_, v_stop_651_);
if (v___x_653_ == 0)
{
lean_object* v___x_655_; 
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_652_);
v___x_655_ = v___x_647_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_snd_645_);
v___x_655_ = v_reuseFailAlloc_657_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_747_; 
lean_inc(v_stop_651_);
lean_inc(v_start_650_);
lean_inc_ref(v_array_649_);
v_isSharedCheck_747_ = !lean_is_exclusive(v_snd_645_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; lean_object* v_unused_749_; lean_object* v_unused_750_; 
v_unused_748_ = lean_ctor_get(v_snd_645_, 2);
lean_dec(v_unused_748_);
v_unused_749_ = lean_ctor_get(v_snd_645_, 1);
lean_dec(v_unused_749_);
v_unused_750_ = lean_ctor_get(v_snd_645_, 0);
lean_dec(v_unused_750_);
v___x_659_ = v_snd_645_;
v_isShared_660_ = v_isSharedCheck_747_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_snd_645_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_747_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_a_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v_a_661_ = lean_array_uget_borrowed(v_as_623_, v_i_625_);
v___x_662_ = l_Lean_Expr_mvarId_x21(v_a_661_);
v___x_663_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v___x_662_, v___y_634_, v___y_636_);
lean_dec(v___x_662_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_738_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_738_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_738_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_738_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_668_ = lean_array_fget(v_array_649_, v_start_650_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_add(v_start_650_, v___x_669_);
lean_dec(v_start_650_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v___x_670_);
v___x_672_ = v___x_659_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_array_649_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_stop_651_);
v___x_672_ = v_reuseFailAlloc_737_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
uint8_t v___y_684_; uint8_t v___x_734_; uint8_t v___x_735_; 
v___x_734_ = lean_unbox(v___x_668_);
lean_dec(v___x_668_);
v___x_735_ = l_Lean_BinderInfo_isInstImplicit(v___x_734_);
if (v___x_735_ == 0)
{
lean_dec(v_a_664_);
v___y_684_ = v___x_735_;
goto v___jp_683_;
}
else
{
uint8_t v___x_736_; 
v___x_736_ = lean_unbox(v_a_664_);
lean_dec(v_a_664_);
if (v___x_736_ == 0)
{
v___y_684_ = v___x_735_;
goto v___jp_683_;
}
else
{
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
goto v___jp_681_;
}
}
v___jp_673_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_674_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v___x_672_);
lean_ctor_set(v___x_647_, 0, v___x_674_);
v___x_676_ = v___x_647_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v___x_672_);
v___x_676_ = v_reuseFailAlloc_680_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_678_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_676_);
v___x_678_ = v___x_666_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
v___jp_681_:
{
lean_object* v___x_682_; 
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_652_);
lean_ctor_set(v___x_682_, 1, v___x_672_);
v_a_639_ = v___x_682_;
goto v___jp_638_;
}
v___jp_683_:
{
if (v___y_684_ == 0)
{
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
goto v___jp_681_;
}
else
{
lean_object* v___x_685_; 
lean_inc(v___y_636_);
lean_inc_ref(v___y_635_);
lean_inc(v___y_634_);
lean_inc_ref(v___y_633_);
lean_inc(v_a_661_);
v___x_685_ = lean_infer_type(v_a_661_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_687_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref(v___x_685_);
lean_inc(v_a_661_);
v___x_687_ = l_Lean_Meta_Sym_synthInstanceAndAssign___redArg(v_a_661_, v_a_686_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; uint8_t v___x_689_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref(v___x_687_);
v___x_689_ = lean_unbox(v_a_688_);
lean_dec(v_a_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_631_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; uint8_t v___x_692_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref(v___x_690_);
v___x_692_ = lean_unbox(v_a_691_);
lean_dec(v_a_691_);
if (v___x_692_ == 0)
{
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
goto v___jp_673_;
}
else
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_693_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2);
v___x_694_ = l_Lean_MessageData_ofName(v___x_621_);
v___x_695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lean_indentExpr(v_e_622_);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = l_Lean_Meta_Sym_reportIssue(v___x_699_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_dec_ref(v___x_700_);
goto v___jp_673_;
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v___x_672_);
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec_ref(v___x_672_);
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
v_a_709_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_690_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_690_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
else
{
lean_object* v___x_717_; 
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_652_);
lean_ctor_set(v___x_717_, 1, v___x_672_);
v_a_639_ = v___x_717_;
goto v___jp_638_;
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v___x_672_);
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
v_a_718_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_687_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_687_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec_ref(v___x_672_);
lean_del_object(v___x_666_);
lean_del_object(v___x_647_);
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
v_a_726_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_685_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_685_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
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
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_del_object(v___x_659_);
lean_dec(v_stop_651_);
lean_dec(v_start_650_);
lean_dec_ref(v_array_649_);
lean_del_object(v___x_647_);
lean_dec_ref(v_e_622_);
lean_dec(v___x_621_);
v_a_739_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_663_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_663_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
}
v___jp_638_:
{
size_t v___x_640_; size_t v___x_641_; 
v___x_640_ = ((size_t)1ULL);
v___x_641_ = lean_usize_add(v_i_625_, v___x_640_);
v_i_625_ = v___x_641_;
v_b_626_ = v_a_639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___boxed(lean_object** _args){
lean_object* v___x_753_ = _args[0];
lean_object* v_e_754_ = _args[1];
lean_object* v_as_755_ = _args[2];
lean_object* v_sz_756_ = _args[3];
lean_object* v_i_757_ = _args[4];
lean_object* v_b_758_ = _args[5];
lean_object* v___y_759_ = _args[6];
lean_object* v___y_760_ = _args[7];
lean_object* v___y_761_ = _args[8];
lean_object* v___y_762_ = _args[9];
lean_object* v___y_763_ = _args[10];
lean_object* v___y_764_ = _args[11];
lean_object* v___y_765_ = _args[12];
lean_object* v___y_766_ = _args[13];
lean_object* v___y_767_ = _args[14];
lean_object* v___y_768_ = _args[15];
lean_object* v___y_769_ = _args[16];
_start:
{
size_t v_sz_boxed_770_; size_t v_i_boxed_771_; lean_object* v_res_772_; 
v_sz_boxed_770_ = lean_unbox_usize(v_sz_756_);
lean_dec(v_sz_756_);
v_i_boxed_771_ = lean_unbox_usize(v_i_757_);
lean_dec(v_i_757_);
v_res_772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(v___x_753_, v_e_754_, v_as_755_, v_sz_boxed_770_, v_i_boxed_771_, v_b_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v_as_755_);
return v_res_772_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0(void){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0);
v___x_775_ = l_Lean_Name_mkStr1(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_776_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3(void){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = lean_mk_string_unchecked("ext", 3, 3);
return v___x_777_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3);
v___x_779_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2);
v___x_780_ = l_Lean_Name_mkStr2(v___x_779_, v___x_778_);
return v___x_780_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5(void){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5);
v___x_783_ = l_Lean_Name_mkStr1(v___x_782_);
return v___x_783_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4);
v___x_785_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6);
v___x_786_ = l_Lean_Name_append(v___x_785_, v___x_784_);
return v___x_786_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8(void){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = lean_mk_string_unchecked(": ", 2, 2);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8);
v___x_789_ = l_Lean_stringToMessageData(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10(void){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = lean_mk_string_unchecked("failed to apply extensionality theorem `", 40, 40);
return v___x_790_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10);
v___x_792_ = l_Lean_stringToMessageData(v___x_791_);
return v___x_792_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12(void){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = lean_mk_string_unchecked("\nresulting terms contain metavariables", 38, 38);
return v___x_793_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12);
v___x_795_ = l_Lean_stringToMessageData(v___x_794_);
return v___x_795_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14(void){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = lean_mk_string_unchecked("\nis not definitionally equal to", 31, 31);
return v___x_796_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15(void){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14);
v___x_798_ = l_Lean_stringToMessageData(v___x_797_);
return v___x_798_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16(void){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = lean_mk_string_unchecked("mp", 2, 2);
return v___x_799_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17(void){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16);
v___x_801_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0);
v___x_802_ = l_Lean_Name_mkStr2(v___x_801_, v___x_800_);
return v___x_802_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = lean_box(0);
v___x_804_ = lean_box(0);
v___x_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18);
v___x_807_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17);
v___x_808_ = l_Lean_mkConst(v___x_807_, v___x_806_);
return v___x_808_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_mk_empty_array_with_capacity(v___x_809_);
return v___x_810_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21(void){
_start:
{
uint8_t v___x_811_; uint64_t v___x_812_; 
v___x_811_ = 1;
v___x_812_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(lean_object* v_e_813_, lean_object* v_thm_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_813_, v___y_815_, v___y_824_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_840_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_a_839_);
lean_dec_ref(v___x_838_);
v___x_840_ = l_Lean_Meta_Grind_getMaxGeneration___redArg(v___y_817_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_1180_; 
v_a_841_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_843_ = v___x_840_;
v_isShared_844_ = v_isSharedCheck_1180_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_840_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_1180_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
uint8_t v___x_845_; 
v___x_845_ = lean_nat_dec_lt(v_a_839_, v_a_841_);
lean_dec(v_a_841_);
lean_dec(v_a_839_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_848_; 
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
v___x_846_ = lean_box(0);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 0, v___x_846_);
v___x_848_ = v___x_843_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
else
{
lean_object* v___x_850_; uint8_t v___x_851_; 
lean_del_object(v___x_843_);
lean_inc_ref(v_e_813_);
v___x_850_ = l_Lean_Expr_cleanupAnnotations(v_e_813_);
v___x_851_ = l_Lean_Expr_isApp(v___x_850_);
if (v___x_851_ == 0)
{
lean_dec_ref(v___x_850_);
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
goto v___jp_835_;
}
else
{
lean_object* v_arg_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v_arg_852_ = lean_ctor_get(v___x_850_, 1);
lean_inc_ref(v_arg_852_);
v___x_853_ = l_Lean_Expr_appFnCleanup___redArg(v___x_850_);
v___x_854_ = l_Lean_Expr_isApp(v___x_853_);
if (v___x_854_ == 0)
{
lean_dec_ref(v___x_853_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
goto v___jp_835_;
}
else
{
lean_object* v_arg_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_arg_855_ = lean_ctor_get(v___x_853_, 1);
lean_inc_ref(v_arg_855_);
v___x_856_ = l_Lean_Expr_appFnCleanup___redArg(v___x_853_);
v___x_857_ = l_Lean_Expr_isApp(v___x_856_);
if (v___x_857_ == 0)
{
lean_dec_ref(v___x_856_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
goto v___jp_835_;
}
else
{
lean_object* v_arg_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_arg_858_ = lean_ctor_get(v___x_856_, 1);
lean_inc_ref(v_arg_858_);
v___x_859_ = l_Lean_Expr_appFnCleanup___redArg(v___x_856_);
v___x_860_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1);
v___x_861_ = l_Lean_Expr_isConstOf(v___x_859_, v___x_860_);
lean_dec_ref(v___x_859_);
if (v___x_861_ == 0)
{
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
goto v___jp_835_;
}
else
{
lean_object* v_declName_862_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_891_; lean_object* v___y_892_; uint8_t v___y_893_; lean_object* v___y_928_; uint8_t v___y_929_; lean_object* v_a_930_; lean_object* v___y_958_; uint8_t v___y_959_; lean_object* v___y_960_; lean_object* v___y_971_; lean_object* v___x_995_; 
v_declName_862_ = lean_ctor_get(v_thm_814_, 0);
lean_inc_n(v_declName_862_, 2);
lean_dec_ref(v_thm_814_);
v___x_995_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_862_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; uint8_t v___y_1001_; lean_object* v___y_1002_; lean_object* v_a_1073_; lean_object* v___x_1104_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc_n(v_a_996_, 2);
lean_dec_ref(v___x_995_);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
v___x_1104_ = lean_infer_type(v_a_996_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; uint8_t v_foApprox_1107_; uint8_t v_ctxApprox_1108_; uint8_t v_quasiPatternApprox_1109_; uint8_t v_constApprox_1110_; uint8_t v_isDefEqStuckEx_1111_; uint8_t v_unificationHints_1112_; uint8_t v_proofIrrelevance_1113_; uint8_t v_assignSyntheticOpaque_1114_; uint8_t v_offsetCnstrs_1115_; uint8_t v_etaStruct_1116_; uint8_t v_univApprox_1117_; uint8_t v_iota_1118_; uint8_t v_beta_1119_; uint8_t v_proj_1120_; uint8_t v_zeta_1121_; uint8_t v_zetaDelta_1122_; uint8_t v_zetaUnused_1123_; uint8_t v_zetaHave_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1163_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref(v___x_1104_);
v___x_1106_ = l_Lean_Meta_Context_config(v___y_821_);
v_foApprox_1107_ = lean_ctor_get_uint8(v___x_1106_, 0);
v_ctxApprox_1108_ = lean_ctor_get_uint8(v___x_1106_, 1);
v_quasiPatternApprox_1109_ = lean_ctor_get_uint8(v___x_1106_, 2);
v_constApprox_1110_ = lean_ctor_get_uint8(v___x_1106_, 3);
v_isDefEqStuckEx_1111_ = lean_ctor_get_uint8(v___x_1106_, 4);
v_unificationHints_1112_ = lean_ctor_get_uint8(v___x_1106_, 5);
v_proofIrrelevance_1113_ = lean_ctor_get_uint8(v___x_1106_, 6);
v_assignSyntheticOpaque_1114_ = lean_ctor_get_uint8(v___x_1106_, 7);
v_offsetCnstrs_1115_ = lean_ctor_get_uint8(v___x_1106_, 8);
v_etaStruct_1116_ = lean_ctor_get_uint8(v___x_1106_, 10);
v_univApprox_1117_ = lean_ctor_get_uint8(v___x_1106_, 11);
v_iota_1118_ = lean_ctor_get_uint8(v___x_1106_, 12);
v_beta_1119_ = lean_ctor_get_uint8(v___x_1106_, 13);
v_proj_1120_ = lean_ctor_get_uint8(v___x_1106_, 14);
v_zeta_1121_ = lean_ctor_get_uint8(v___x_1106_, 15);
v_zetaDelta_1122_ = lean_ctor_get_uint8(v___x_1106_, 16);
v_zetaUnused_1123_ = lean_ctor_get_uint8(v___x_1106_, 17);
v_zetaHave_1124_ = lean_ctor_get_uint8(v___x_1106_, 18);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1126_ = v___x_1106_;
v_isShared_1127_ = v_isSharedCheck_1163_;
goto v_resetjp_1125_;
}
else
{
lean_dec(v___x_1106_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1163_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
uint8_t v_trackZetaDelta_1128_; lean_object* v_zetaDeltaSet_1129_; lean_object* v_lctx_1130_; lean_object* v_localInstances_1131_; lean_object* v_defEqCtx_x3f_1132_; lean_object* v_synthPendingDepth_1133_; lean_object* v_canUnfold_x3f_1134_; uint8_t v_univApprox_1135_; uint8_t v_inTypeClassResolution_1136_; uint8_t v_cacheInferType_1137_; uint8_t v___x_1138_; lean_object* v_config_1140_; 
v_trackZetaDelta_1128_ = lean_ctor_get_uint8(v___y_821_, sizeof(void*)*7);
v_zetaDeltaSet_1129_ = lean_ctor_get(v___y_821_, 1);
v_lctx_1130_ = lean_ctor_get(v___y_821_, 2);
v_localInstances_1131_ = lean_ctor_get(v___y_821_, 3);
v_defEqCtx_x3f_1132_ = lean_ctor_get(v___y_821_, 4);
v_synthPendingDepth_1133_ = lean_ctor_get(v___y_821_, 5);
v_canUnfold_x3f_1134_ = lean_ctor_get(v___y_821_, 6);
v_univApprox_1135_ = lean_ctor_get_uint8(v___y_821_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1136_ = lean_ctor_get_uint8(v___y_821_, sizeof(void*)*7 + 2);
v_cacheInferType_1137_ = lean_ctor_get_uint8(v___y_821_, sizeof(void*)*7 + 3);
v___x_1138_ = 1;
if (v_isShared_1127_ == 0)
{
v_config_1140_ = v___x_1126_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 0, v_foApprox_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 1, v_ctxApprox_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 2, v_quasiPatternApprox_1109_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 3, v_constApprox_1110_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 4, v_isDefEqStuckEx_1111_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 5, v_unificationHints_1112_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 6, v_proofIrrelevance_1113_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 7, v_assignSyntheticOpaque_1114_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 8, v_offsetCnstrs_1115_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 10, v_etaStruct_1116_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 11, v_univApprox_1117_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 12, v_iota_1118_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 13, v_beta_1119_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 14, v_proj_1120_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 15, v_zeta_1121_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 16, v_zetaDelta_1122_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 17, v_zetaUnused_1123_);
lean_ctor_set_uint8(v_reuseFailAlloc_1162_, 18, v_zetaHave_1124_);
v_config_1140_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
uint64_t v___x_1141_; uint64_t v___x_1142_; uint64_t v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; uint64_t v___x_1146_; uint64_t v___x_1147_; uint64_t v_key_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_ctor_set_uint8(v_config_1140_, 9, v___x_1138_);
v___x_1141_ = l_Lean_Meta_Context_configKey(v___y_821_);
v___x_1142_ = 2ULL;
v___x_1143_ = lean_uint64_shift_right(v___x_1141_, v___x_1142_);
v___x_1144_ = lean_box(0);
v___x_1145_ = 0;
v___x_1146_ = lean_uint64_shift_left(v___x_1143_, v___x_1142_);
v___x_1147_ = lean_uint64_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21);
v_key_1148_ = lean_uint64_lor(v___x_1146_, v___x_1147_);
v___x_1149_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1149_, 0, v_config_1140_);
lean_ctor_set_uint64(v___x_1149_, sizeof(void*)*1, v_key_1148_);
lean_inc(v_canUnfold_x3f_1134_);
lean_inc(v_synthPendingDepth_1133_);
lean_inc(v_defEqCtx_x3f_1132_);
lean_inc_ref(v_localInstances_1131_);
lean_inc_ref(v_lctx_1130_);
lean_inc(v_zetaDeltaSet_1129_);
v___x_1150_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v_zetaDeltaSet_1129_);
lean_ctor_set(v___x_1150_, 2, v_lctx_1130_);
lean_ctor_set(v___x_1150_, 3, v_localInstances_1131_);
lean_ctor_set(v___x_1150_, 4, v_defEqCtx_x3f_1132_);
lean_ctor_set(v___x_1150_, 5, v_synthPendingDepth_1133_);
lean_ctor_set(v___x_1150_, 6, v_canUnfold_x3f_1134_);
lean_ctor_set_uint8(v___x_1150_, sizeof(void*)*7, v_trackZetaDelta_1128_);
lean_ctor_set_uint8(v___x_1150_, sizeof(void*)*7 + 1, v_univApprox_1135_);
lean_ctor_set_uint8(v___x_1150_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1136_);
lean_ctor_set_uint8(v___x_1150_, sizeof(void*)*7 + 3, v_cacheInferType_1137_);
v___x_1151_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1105_, v___x_1144_, v___x_1145_, v___x_1150_, v___y_822_, v___y_823_, v___y_824_);
lean_dec_ref(v___x_1150_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref(v___x_1151_);
v_a_1073_ = v_a_1152_;
goto v___jp_1072_;
}
else
{
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1153_; 
v_a_1153_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1153_);
lean_dec_ref(v___x_1151_);
v_a_1073_ = v_a_1153_;
goto v___jp_1072_;
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
v_a_1154_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1151_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1151_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
v_a_1164_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1104_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1104_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
v___jp_997_:
{
if (lean_obj_tag(v___y_1002_) == 0)
{
lean_object* v_a_1003_; uint8_t v___x_1004_; 
v_a_1003_ = lean_ctor_get(v___y_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref(v___y_1002_);
v___x_1004_ = lean_unbox(v_a_1003_);
lean_dec(v_a_1003_);
if (v___x_1004_ == 0)
{
lean_dec_ref(v___y_1000_);
lean_dec_ref(v___y_998_);
lean_dec(v_a_996_);
v___y_971_ = v___y_999_;
goto v___jp_970_;
}
else
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; size_t v_sz_1010_; size_t v___x_1011_; lean_object* v___x_1012_; 
lean_dec_ref(v___y_999_);
v___x_1005_ = lean_unsigned_to_nat(0u);
v___x_1006_ = lean_array_get_size(v___y_998_);
v___x_1007_ = l_Array_toSubarray___redArg(v___y_998_, v___x_1005_, v___x_1006_);
v___x_1008_ = lean_box(0);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v___x_1007_);
v_sz_1010_ = lean_array_size(v___y_1000_);
v___x_1011_ = ((size_t)0ULL);
lean_inc_ref(v_e_813_);
lean_inc(v_declName_862_);
v___x_1012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(v_declName_862_, v_e_813_, v___y_1000_, v_sz_1010_, v___x_1011_, v___x_1009_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1055_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1055_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1055_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v_fst_1017_; 
v_fst_1017_ = lean_ctor_get(v_a_1013_, 0);
lean_inc(v_fst_1017_);
lean_dec(v_a_1013_);
if (lean_obj_tag(v_fst_1017_) == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_a_1020_; lean_object* v___x_1021_; 
lean_del_object(v___x_1015_);
v___x_1018_ = l_Lean_mkAppN(v_a_996_, v___y_1000_);
v___x_1019_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v___x_1018_, v___y_822_, v___y_824_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref(v___x_1019_);
lean_inc_ref(v_e_813_);
v___x_1021_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_813_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1023_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
v___x_1023_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_819_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19);
lean_inc_ref(v_e_813_);
v___x_1026_ = l_Lean_mkApp4(v___x_1025_, v_e_813_, v_a_1024_, v_a_1022_, v_a_1020_);
v___x_1027_ = lean_array_get_size(v___y_1000_);
v___x_1028_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20);
v___x_1029_ = lean_nat_dec_lt(v___x_1005_, v___x_1027_);
if (v___x_1029_ == 0)
{
lean_dec_ref(v___y_1000_);
v___y_928_ = v___x_1026_;
v___y_929_ = v___y_1001_;
v_a_930_ = v___x_1028_;
goto v___jp_927_;
}
else
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_nat_dec_le(v___x_1027_, v___x_1027_);
if (v___x_1030_ == 0)
{
if (v___x_1029_ == 0)
{
lean_dec_ref(v___y_1000_);
v___y_928_ = v___x_1026_;
v___y_929_ = v___y_1001_;
v_a_930_ = v___x_1028_;
goto v___jp_927_;
}
else
{
size_t v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_usize_of_nat(v___x_1027_);
v___x_1032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v___y_1000_, v___x_1011_, v___x_1031_, v___x_1028_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec_ref(v___y_1000_);
v___y_958_ = v___x_1026_;
v___y_959_ = v___y_1001_;
v___y_960_ = v___x_1032_;
goto v___jp_957_;
}
}
else
{
size_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_usize_of_nat(v___x_1027_);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v___y_1000_, v___x_1011_, v___x_1033_, v___x_1028_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec_ref(v___y_1000_);
v___y_958_ = v___x_1026_;
v___y_959_ = v___y_1001_;
v___y_960_ = v___x_1034_;
goto v___jp_957_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1022_);
lean_dec(v_a_1020_);
lean_dec_ref(v___y_1000_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_1035_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1023_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1023_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_dec(v_a_1020_);
lean_dec_ref(v___y_1000_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_1043_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1021_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1021_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
else
{
lean_object* v_val_1051_; lean_object* v___x_1053_; 
lean_dec_ref(v___y_1000_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_val_1051_ = lean_ctor_get(v_fst_1017_, 0);
lean_inc(v_val_1051_);
lean_dec_ref(v_fst_1017_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v_val_1051_);
v___x_1053_ = v___x_1015_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_val_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v___y_1000_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_1056_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1012_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1012_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec_ref(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_1064_ = lean_ctor_get(v___y_1002_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___y_1002_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___y_1002_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___y_1002_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
v___jp_1072_:
{
lean_object* v_snd_1074_; lean_object* v_fst_1075_; lean_object* v_fst_1076_; lean_object* v_snd_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v_snd_1074_ = lean_ctor_get(v_a_1073_, 1);
lean_inc(v_snd_1074_);
v_fst_1075_ = lean_ctor_get(v_a_1073_, 0);
lean_inc(v_fst_1075_);
lean_dec_ref(v_a_1073_);
v_fst_1076_ = lean_ctor_get(v_snd_1074_, 0);
lean_inc(v_fst_1076_);
v_snd_1077_ = lean_ctor_get(v_snd_1074_, 1);
lean_inc_n(v_snd_1077_, 2);
lean_dec(v_snd_1074_);
v___x_1078_ = l_Lean_Expr_cleanupAnnotations(v_snd_1077_);
v___x_1079_ = l_Lean_Expr_isApp(v___x_1078_);
if (v___x_1079_ == 0)
{
lean_dec_ref(v___x_1078_);
lean_dec(v_snd_1077_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
goto v___jp_832_;
}
else
{
lean_object* v_arg_1080_; lean_object* v___x_1081_; uint8_t v___x_1082_; 
v_arg_1080_ = lean_ctor_get(v___x_1078_, 1);
lean_inc_ref(v_arg_1080_);
v___x_1081_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1078_);
v___x_1082_ = l_Lean_Expr_isApp(v___x_1081_);
if (v___x_1082_ == 0)
{
lean_dec_ref(v___x_1081_);
lean_dec_ref(v_arg_1080_);
lean_dec(v_snd_1077_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
goto v___jp_832_;
}
else
{
lean_object* v_arg_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v_arg_1083_ = lean_ctor_get(v___x_1081_, 1);
lean_inc_ref(v_arg_1083_);
v___x_1084_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1081_);
v___x_1085_ = l_Lean_Expr_isApp(v___x_1084_);
if (v___x_1085_ == 0)
{
lean_dec_ref(v___x_1084_);
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v_arg_1080_);
lean_dec(v_snd_1077_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
goto v___jp_832_;
}
else
{
lean_object* v_arg_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; 
v_arg_1086_ = lean_ctor_get(v___x_1084_, 1);
lean_inc_ref(v_arg_1086_);
v___x_1087_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1084_);
v___x_1088_ = l_Lean_Expr_isConstOf(v___x_1087_, v___x_860_);
lean_dec_ref(v___x_1087_);
if (v___x_1088_ == 0)
{
lean_dec_ref(v_arg_1086_);
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v_arg_1080_);
lean_dec(v_snd_1077_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
goto v___jp_832_;
}
else
{
lean_object* v___x_1089_; 
v___x_1089_ = l_Lean_Meta_isExprDefEq(v_arg_858_, v_arg_1086_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; uint8_t v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
v___x_1091_ = lean_unbox(v_a_1090_);
lean_dec(v_a_1090_);
if (v___x_1091_ == 0)
{
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v_arg_1080_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
v___y_998_ = v_fst_1076_;
v___y_999_ = v_snd_1077_;
v___y_1000_ = v_fst_1075_;
v___y_1001_ = v___x_1088_;
v___y_1002_ = v___x_1089_;
goto v___jp_997_;
}
else
{
lean_object* v___x_1092_; 
lean_dec_ref(v___x_1089_);
v___x_1092_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_1088_, v_arg_1083_, v_arg_855_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; uint8_t v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref(v___x_1092_);
v___x_1094_ = lean_unbox(v_a_1093_);
lean_dec(v_a_1093_);
if (v___x_1094_ == 0)
{
lean_dec_ref(v_arg_1080_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec_ref(v_arg_852_);
v___y_971_ = v_snd_1077_;
goto v___jp_970_;
}
else
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_1088_, v_arg_1080_, v_arg_852_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
v___y_998_ = v_fst_1076_;
v___y_999_ = v_snd_1077_;
v___y_1000_ = v_fst_1075_;
v___y_1001_ = v___x_1088_;
v___y_1002_ = v___x_1095_;
goto v___jp_997_;
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec_ref(v_arg_1080_);
lean_dec(v_snd_1077_);
lean_dec(v_fst_1076_);
lean_dec(v_fst_1075_);
lean_dec(v_a_996_);
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
v_a_1096_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1092_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_1083_);
lean_dec_ref(v_arg_1080_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
v___y_998_ = v_fst_1076_;
v___y_999_ = v_snd_1077_;
v___y_1000_ = v_fst_1075_;
v___y_1001_ = v___x_1088_;
v___y_1002_ = v___x_1089_;
goto v___jp_997_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_declName_862_);
lean_dec_ref(v_arg_858_);
lean_dec_ref(v_arg_855_);
lean_dec_ref(v_arg_852_);
lean_dec_ref(v_e_813_);
v_a_1172_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_995_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_995_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
v___jp_863_:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_813_, v___y_866_, v___y_875_);
lean_dec_ref(v_e_813_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref(v___x_876_);
v___x_878_ = lean_unsigned_to_nat(1u);
v___x_879_ = lean_nat_add(v_a_877_, v___x_878_);
lean_dec(v_a_877_);
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v_declName_862_);
v___x_881_ = l_Lean_Meta_Grind_addNewRawFact(v___y_864_, v___y_865_, v___x_879_, v___x_880_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v_declName_862_);
v_a_882_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_876_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_876_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
v___jp_890_:
{
if (v___y_893_ == 0)
{
lean_object* v_options_894_; uint8_t v_hasTrace_895_; 
v_options_894_ = lean_ctor_get(v___y_823_, 2);
v_hasTrace_895_ = lean_ctor_get_uint8(v_options_894_, sizeof(void*)*1);
if (v_hasTrace_895_ == 0)
{
v___y_864_ = v___y_891_;
v___y_865_ = v___y_892_;
v___y_866_ = v___y_815_;
v___y_867_ = v___y_816_;
v___y_868_ = v___y_817_;
v___y_869_ = v___y_818_;
v___y_870_ = v___y_819_;
v___y_871_ = v___y_820_;
v___y_872_ = v___y_821_;
v___y_873_ = v___y_822_;
v___y_874_ = v___y_823_;
v___y_875_ = v___y_824_;
goto v___jp_863_;
}
else
{
lean_object* v_inheritedTraceOptions_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v_inheritedTraceOptions_896_ = lean_ctor_get(v___y_823_, 13);
v___x_897_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4);
v___x_898_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7);
v___x_899_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_896_, v_options_894_, v___x_898_);
if (v___x_899_ == 0)
{
v___y_864_ = v___y_891_;
v___y_865_ = v___y_892_;
v___y_866_ = v___y_815_;
v___y_867_ = v___y_816_;
v___y_868_ = v___y_817_;
v___y_869_ = v___y_818_;
v___y_870_ = v___y_819_;
v___y_871_ = v___y_820_;
v___y_872_ = v___y_821_;
v___y_873_ = v___y_822_;
v___y_874_ = v___y_823_;
v___y_875_ = v___y_824_;
goto v___jp_863_;
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_inc(v_declName_862_);
v___x_900_ = l_Lean_MessageData_ofName(v_declName_862_);
v___x_901_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
lean_inc_ref(v___y_892_);
v___x_903_ = l_Lean_MessageData_ofExpr(v___y_892_);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v___x_897_, v___x_904_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_dec_ref(v___x_905_);
v___y_864_ = v___y_891_;
v___y_865_ = v___y_892_;
v___y_866_ = v___y_815_;
v___y_867_ = v___y_816_;
v___y_868_ = v___y_817_;
v___y_869_ = v___y_818_;
v___y_870_ = v___y_819_;
v___y_871_ = v___y_820_;
v___y_872_ = v___y_821_;
v___y_873_ = v___y_822_;
v___y_874_ = v___y_823_;
v___y_875_ = v___y_824_;
goto v___jp_863_;
}
else
{
lean_dec_ref(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
return v___x_905_;
}
}
}
}
else
{
lean_object* v___x_906_; 
lean_dec_ref(v___y_892_);
lean_dec_ref(v___y_891_);
v___x_906_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_819_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; uint8_t v___x_908_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref(v___x_906_);
v___x_908_ = lean_unbox(v_a_907_);
lean_dec(v_a_907_);
if (v___x_908_ == 0)
{
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
goto v___jp_826_;
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_909_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11);
v___x_910_ = l_Lean_MessageData_ofName(v_declName_862_);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Lean_indentExpr(v_e_813_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13);
v___x_917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = l_Lean_Meta_Sym_reportIssue(v___x_917_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_dec_ref(v___x_918_);
goto v___jp_826_;
}
else
{
return v___x_918_;
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_919_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_906_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_906_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
v___jp_927_:
{
uint8_t v___x_931_; uint8_t v___x_932_; lean_object* v___x_933_; 
v___x_931_ = 0;
v___x_932_ = 1;
v___x_933_ = l_Lean_Meta_mkLambdaFVars(v_a_930_, v___y_928_, v___x_931_, v___y_929_, v___x_931_, v___y_929_, v___x_932_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec_ref(v_a_930_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_935_; lean_object* v_a_936_; lean_object* v___x_937_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref(v___x_933_);
v___x_935_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_a_934_, v___y_822_, v___y_824_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc_n(v_a_936_, 2);
lean_dec_ref(v___x_935_);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___y_822_);
lean_inc_ref(v___y_821_);
v___x_937_ = lean_infer_type(v_a_936_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; uint8_t v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref(v___x_937_);
v___x_939_ = l_Lean_Expr_hasMVar(v_a_936_);
if (v___x_939_ == 0)
{
uint8_t v___x_940_; 
v___x_940_ = l_Lean_Expr_hasMVar(v_a_938_);
v___y_891_ = v_a_936_;
v___y_892_ = v_a_938_;
v___y_893_ = v___x_940_;
goto v___jp_890_;
}
else
{
v___y_891_ = v_a_936_;
v___y_892_ = v_a_938_;
v___y_893_ = v___y_929_;
goto v___jp_890_;
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_a_936_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_941_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_937_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_949_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_933_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_933_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
v___jp_957_:
{
if (lean_obj_tag(v___y_960_) == 0)
{
lean_object* v_a_961_; 
v_a_961_ = lean_ctor_get(v___y_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref(v___y_960_);
v___y_928_ = v___y_958_;
v___y_929_ = v___y_959_;
v_a_930_ = v_a_961_;
goto v___jp_927_;
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v___y_958_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_962_ = lean_ctor_get(v___y_960_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___y_960_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___y_960_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___y_960_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
v___jp_970_:
{
lean_object* v___x_972_; 
v___x_972_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_819_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; uint8_t v___x_974_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = lean_unbox(v_a_973_);
lean_dec(v_a_973_);
if (v___x_974_ == 0)
{
lean_dec_ref(v___y_971_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
goto v___jp_829_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_975_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11);
v___x_976_ = l_Lean_MessageData_ofName(v_declName_862_);
v___x_977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = l_Lean_indentExpr(v_e_813_);
v___x_981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_979_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = l_Lean_indentExpr(v___y_971_);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_Meta_Sym_reportIssue(v___x_985_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_dec_ref(v___x_986_);
goto v___jp_829_;
}
else
{
return v___x_986_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref(v___y_971_);
lean_dec(v_declName_862_);
lean_dec_ref(v_e_813_);
v_a_987_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_972_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_972_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
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
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
lean_dec(v_a_839_);
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
v_a_1181_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_840_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_840_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec_ref(v_thm_814_);
lean_dec_ref(v_e_813_);
v_a_1189_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_838_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_838_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
v___jp_826_:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_box(0);
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
return v___x_828_;
}
v___jp_829_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_box(0);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
v___jp_832_:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_box(0);
v___x_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
return v___x_834_;
}
v___jp_835_:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_box(0);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed(lean_object* v_e_1197_, lean_object* v_thm_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(v_e_1197_, v_thm_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec(v___y_1199_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object* v_thm_1211_, lean_object* v_e_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v___f_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; 
v___f_1224_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed), 13, 2);
lean_closure_set(v___f_1224_, 0, v_e_1212_);
lean_closure_set(v___f_1224_, 1, v_thm_1211_);
v___x_1225_ = 0;
v___x_1226_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v___f_1224_, v___x_1225_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___boxed(lean_object* v_thm_1227_, lean_object* v_e_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Meta_Grind_instantiateExtTheorem(v_thm_1227_, v_e_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
lean_dec(v_a_1229_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(lean_object* v_mvarId_1241_, lean_object* v_val_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v_mvarId_1241_, v_val_1242_, v___y_1250_, v___y_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___boxed(lean_object* v_mvarId_1255_, lean_object* v_val_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(v_mvarId_1255_, v_val_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec(v___y_1257_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(lean_object* v_mvarId_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v_mvarId_1269_, v___y_1277_, v___y_1279_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___boxed(lean_object* v_mvarId_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(v_mvarId_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec(v_mvarId_1282_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(lean_object* v_cls_1295_, lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v_cls_1295_, v_msg_1296_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___boxed(lean_object* v_cls_1309_, lean_object* v_msg_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(v_cls_1309_, v_msg_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec(v___y_1311_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(v_x_1324_, v_x_1325_, v_x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2(lean_object* v_00_u03b2_1328_, lean_object* v_x_1329_, lean_object* v_x_1330_){
_start:
{
uint8_t v___x_1331_; 
v___x_1331_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(v_x_1329_, v_x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1332_, lean_object* v_x_1333_, lean_object* v_x_1334_){
_start:
{
uint8_t v_res_1335_; lean_object* v_r_1336_; 
v_res_1335_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2(v_00_u03b2_1332_, v_x_1333_, v_x_1334_);
lean_dec(v_x_1334_);
lean_dec_ref(v_x_1333_);
v_r_1336_ = lean_box(v_res_1335_);
return v_r_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1337_, lean_object* v_x_1338_, size_t v_x_1339_, size_t v_x_1340_, lean_object* v_x_1341_, lean_object* v_x_1342_){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_1338_, v_x_1339_, v_x_1340_, v_x_1341_, v_x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1344_, lean_object* v_x_1345_, lean_object* v_x_1346_, lean_object* v_x_1347_, lean_object* v_x_1348_, lean_object* v_x_1349_){
_start:
{
size_t v_x_216788__boxed_1350_; size_t v_x_216789__boxed_1351_; lean_object* v_res_1352_; 
v_x_216788__boxed_1350_ = lean_unbox_usize(v_x_1346_);
lean_dec(v_x_1346_);
v_x_216789__boxed_1351_ = lean_unbox_usize(v_x_1347_);
lean_dec(v_x_1347_);
v_res_1352_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(v_00_u03b2_1344_, v_x_1345_, v_x_216788__boxed_1350_, v_x_216789__boxed_1351_, v_x_1348_, v_x_1349_);
return v_res_1352_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1353_, lean_object* v_x_1354_, size_t v_x_1355_, lean_object* v_x_1356_){
_start:
{
uint8_t v___x_1357_; 
v___x_1357_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_1354_, v_x_1355_, v_x_1356_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1358_, lean_object* v_x_1359_, lean_object* v_x_1360_, lean_object* v_x_1361_){
_start:
{
size_t v_x_216805__boxed_1362_; uint8_t v_res_1363_; lean_object* v_r_1364_; 
v_x_216805__boxed_1362_ = lean_unbox_usize(v_x_1360_);
lean_dec(v_x_1360_);
v_res_1363_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(v_00_u03b2_1358_, v_x_1359_, v_x_216805__boxed_1362_, v_x_1361_);
lean_dec(v_x_1361_);
lean_dec_ref(v_x_1359_);
v_r_1364_ = lean_box(v_res_1363_);
return v_r_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03b2_1365_, lean_object* v_n_1366_, lean_object* v_k_1367_, lean_object* v_v_1368_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(v_n_1366_, v_k_1367_, v_v_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10(lean_object* v_00_u03b2_1370_, size_t v_depth_1371_, lean_object* v_keys_1372_, lean_object* v_vals_1373_, lean_object* v_heq_1374_, lean_object* v_i_1375_, lean_object* v_entries_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___redArg(v_depth_1371_, v_keys_1372_, v_vals_1373_, v_i_1375_, v_entries_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10___boxed(lean_object* v_00_u03b2_1378_, lean_object* v_depth_1379_, lean_object* v_keys_1380_, lean_object* v_vals_1381_, lean_object* v_heq_1382_, lean_object* v_i_1383_, lean_object* v_entries_1384_){
_start:
{
size_t v_depth_boxed_1385_; lean_object* v_res_1386_; 
v_depth_boxed_1385_ = lean_unbox_usize(v_depth_1379_);
lean_dec(v_depth_1379_);
v_res_1386_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__10(v_00_u03b2_1378_, v_depth_boxed_1385_, v_keys_1380_, v_vals_1381_, v_heq_1382_, v_i_1383_, v_entries_1384_);
lean_dec_ref(v_vals_1381_);
lean_dec_ref(v_keys_1380_);
return v_res_1386_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(lean_object* v_00_u03b2_1387_, lean_object* v_keys_1388_, lean_object* v_vals_1389_, lean_object* v_heq_1390_, lean_object* v_i_1391_, lean_object* v_k_1392_){
_start:
{
uint8_t v___x_1393_; 
v___x_1393_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_keys_1388_, v_i_1391_, v_k_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___boxed(lean_object* v_00_u03b2_1394_, lean_object* v_keys_1395_, lean_object* v_vals_1396_, lean_object* v_heq_1397_, lean_object* v_i_1398_, lean_object* v_k_1399_){
_start:
{
uint8_t v_res_1400_; lean_object* v_r_1401_; 
v_res_1400_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(v_00_u03b2_1394_, v_keys_1395_, v_vals_1396_, v_heq_1397_, v_i_1398_, v_k_1399_);
lean_dec(v_k_1399_);
lean_dec_ref(v_vals_1396_);
lean_dec_ref(v_keys_1395_);
v_r_1401_ = lean_box(v_res_1400_);
return v_r_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11(lean_object* v_00_u03b2_1402_, lean_object* v_x_1403_, lean_object* v_x_1404_, lean_object* v_x_1405_, lean_object* v_x_1406_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9_spec__11___redArg(v_x_1403_, v_x_1404_, v_x_1405_, v_x_1406_);
return v___x_1407_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
}
#ifdef __cplusplus
}
#endif
