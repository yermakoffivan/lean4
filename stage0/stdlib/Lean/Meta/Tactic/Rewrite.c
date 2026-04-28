// Lean compiler output
// Module: Lean.Meta.Tactic.Rewrite
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.KAbstract public import Lean.Meta.Tactic.Apply public import Lean.Meta.BinderNameHint
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_skipAssignedInstances;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_hasBinderNameHint(lean_object*);
lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_MVarId_rewrite_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__0;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__1;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__2;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__3;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__4;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__5;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__6;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__7;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__8;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__9;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__10;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__11;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__12;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__13;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__14;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__15;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__16;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__17;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__18;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__19;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__20;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__21;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__22;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__23;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__24;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__25;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__26;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__27;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__28;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__29;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__30;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__31;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__32;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__33;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__34;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__35;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__36;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__37;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__38;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__39;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__40;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__41;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__42;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__43;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__44;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__45;
static lean_once_cell_t l_Lean_MVarId_rewrite___lam__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___lam__1___closed__46;
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_rewrite___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___closed__0;
static lean_once_cell_t l_Lean_MVarId_rewrite___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_rewrite___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(lean_object* v_opts_48_, lean_object* v_opt_49_){
_start:
{
lean_object* v_name_50_; lean_object* v_defValue_51_; lean_object* v_map_52_; lean_object* v___x_53_; 
v_name_50_ = lean_ctor_get(v_opt_49_, 0);
v_defValue_51_ = lean_ctor_get(v_opt_49_, 1);
v_map_52_ = lean_ctor_get(v_opts_48_, 0);
v___x_53_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_52_, v_name_50_);
if (lean_obj_tag(v___x_53_) == 0)
{
uint8_t v___x_54_; 
v___x_54_ = lean_unbox(v_defValue_51_);
return v___x_54_;
}
else
{
lean_object* v_val_55_; 
v_val_55_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_val_55_);
lean_dec_ref(v___x_53_);
if (lean_obj_tag(v_val_55_) == 1)
{
uint8_t v_v_56_; 
v_v_56_ = lean_ctor_get_uint8(v_val_55_, 0);
lean_dec_ref(v_val_55_);
return v_v_56_;
}
else
{
uint8_t v___x_57_; 
lean_dec(v_val_55_);
v___x_57_ = lean_unbox(v_defValue_51_);
return v___x_57_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7___boxed(lean_object* v_opts_58_, lean_object* v_opt_59_){
_start:
{
uint8_t v_res_60_; lean_object* v_r_61_; 
v_res_60_ = l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(v_opts_58_, v_opt_59_);
lean_dec_ref(v_opt_59_);
lean_dec_ref(v_opts_58_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(lean_object* v_mvarId_62_, lean_object* v_x_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_62_, v_x_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
v_a_70_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
else
{
lean_object* v_a_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_a_78_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v___x_69_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_a_78_);
lean_dec(v___x_69_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_a_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg___boxed(lean_object* v_mvarId_86_, lean_object* v_x_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_86_, v_x_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(lean_object* v_00_u03b1_94_, lean_object* v_mvarId_95_, lean_object* v_x_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_95_, v_x_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___boxed(lean_object* v_00_u03b1_103_, lean_object* v_mvarId_104_, lean_object* v_x_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9(v_00_u03b1_103_, v_mvarId_104_, v_x_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0(lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_expr_instantiate1(v_a_112_, v_a_114_);
lean_inc(v___y_118_);
lean_inc_ref(v___y_117_);
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
v___x_121_ = lean_infer_type(v___x_120_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_123_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref(v___x_121_);
v___x_123_ = l_Lean_Meta_isExprDefEq(v_a_122_, v_a_113_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
return v___x_123_;
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref(v_a_113_);
v_a_124_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_121_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_121_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__0___boxed(lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_MVarId_rewrite___lam__0(v_a_132_, v_a_133_, v_a_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v_a_134_);
lean_dec_ref(v_a_132_);
return v_res_140_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(lean_object* v_a_141_, lean_object* v_as_142_, size_t v_i_143_, size_t v_stop_144_){
_start:
{
uint8_t v___x_145_; 
v___x_145_ = lean_usize_dec_eq(v_i_143_, v_stop_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_146_ = lean_array_uget_borrowed(v_as_142_, v_i_143_);
v___x_147_ = l_Lean_instBEqMVarId_beq(v_a_141_, v___x_146_);
if (v___x_147_ == 0)
{
size_t v___x_148_; size_t v___x_149_; 
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_add(v_i_143_, v___x_148_);
v_i_143_ = v___x_149_;
goto _start;
}
else
{
return v___x_147_;
}
}
else
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6___boxed(lean_object* v_a_152_, lean_object* v_as_153_, lean_object* v_i_154_, lean_object* v_stop_155_){
_start:
{
size_t v_i_boxed_156_; size_t v_stop_boxed_157_; uint8_t v_res_158_; lean_object* v_r_159_; 
v_i_boxed_156_ = lean_unbox_usize(v_i_154_);
lean_dec(v_i_154_);
v_stop_boxed_157_ = lean_unbox_usize(v_stop_155_);
lean_dec(v_stop_155_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(v_a_152_, v_as_153_, v_i_boxed_156_, v_stop_boxed_157_);
lean_dec_ref(v_as_153_);
lean_dec(v_a_152_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(lean_object* v_as_160_, lean_object* v_a_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_array_get_size(v_as_160_);
v___x_164_ = lean_nat_dec_lt(v___x_162_, v___x_163_);
if (v___x_164_ == 0)
{
return v___x_164_;
}
else
{
if (v___x_164_ == 0)
{
return v___x_164_;
}
else
{
size_t v___x_165_; size_t v___x_166_; uint8_t v___x_167_; 
v___x_165_ = ((size_t)0ULL);
v___x_166_ = lean_usize_of_nat(v___x_163_);
v___x_167_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_MVarId_rewrite_spec__4_spec__6(v_a_161_, v_as_160_, v___x_165_, v___x_166_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_MVarId_rewrite_spec__4___boxed(lean_object* v_as_168_, lean_object* v_a_169_){
_start:
{
uint8_t v_res_170_; lean_object* v_r_171_; 
v_res_170_ = l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(v_as_168_, v_a_169_);
lean_dec(v_a_169_);
lean_dec_ref(v_as_168_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(lean_object* v_a_172_, lean_object* v_as_173_, size_t v_i_174_, size_t v_stop_175_, lean_object* v_b_176_){
_start:
{
lean_object* v___y_178_; uint8_t v___x_182_; 
v___x_182_ = lean_usize_dec_eq(v_i_174_, v_stop_175_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_array_uget_borrowed(v_as_173_, v_i_174_);
v___x_184_ = l_Array_contains___at___00Lean_MVarId_rewrite_spec__4(v_a_172_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_inc(v___x_183_);
v___x_185_ = lean_array_push(v_b_176_, v___x_183_);
v___y_178_ = v___x_185_;
goto v___jp_177_;
}
else
{
v___y_178_ = v_b_176_;
goto v___jp_177_;
}
}
else
{
return v_b_176_;
}
v___jp_177_:
{
size_t v___x_179_; size_t v___x_180_; 
v___x_179_ = ((size_t)1ULL);
v___x_180_ = lean_usize_add(v_i_174_, v___x_179_);
v_i_174_ = v___x_180_;
v_b_176_ = v___y_178_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5___boxed(lean_object* v_a_186_, lean_object* v_as_187_, lean_object* v_i_188_, lean_object* v_stop_189_, lean_object* v_b_190_){
_start:
{
size_t v_i_boxed_191_; size_t v_stop_boxed_192_; lean_object* v_res_193_; 
v_i_boxed_191_ = lean_unbox_usize(v_i_188_);
lean_dec(v_i_188_);
v_stop_boxed_192_ = lean_unbox_usize(v_stop_189_);
lean_dec(v_stop_189_);
v_res_193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_186_, v_as_187_, v_i_boxed_191_, v_stop_boxed_192_, v_b_190_);
lean_dec_ref(v_as_187_);
lean_dec_ref(v_a_186_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(lean_object* v_k_194_, lean_object* v_b_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; 
lean_inc(v___y_199_);
lean_inc_ref(v___y_198_);
lean_inc(v___y_197_);
lean_inc_ref(v___y_196_);
v___x_201_ = lean_apply_6(v_k_194_, v_b_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, lean_box(0));
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed(lean_object* v_k_202_, lean_object* v_b_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0(v_k_202_, v_b_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(lean_object* v_name_210_, uint8_t v_bi_211_, lean_object* v_type_212_, lean_object* v_k_213_, uint8_t v_kind_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___f_220_; lean_object* v___x_221_; 
v___f_220_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_220_, 0, v_k_213_);
v___x_221_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_210_, v_bi_211_, v_type_212_, v___f_220_, v_kind_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_221_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
v_a_230_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_221_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_221_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg___boxed(lean_object* v_name_238_, lean_object* v_bi_239_, lean_object* v_type_240_, lean_object* v_k_241_, lean_object* v_kind_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
uint8_t v_bi_boxed_248_; uint8_t v_kind_boxed_249_; lean_object* v_res_250_; 
v_bi_boxed_248_ = lean_unbox(v_bi_239_);
v_kind_boxed_249_ = lean_unbox(v_kind_242_);
v_res_250_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_238_, v_bi_boxed_248_, v_type_240_, v_k_241_, v_kind_boxed_249_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(lean_object* v_name_251_, lean_object* v_type_252_, lean_object* v_k_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
uint8_t v___x_259_; uint8_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = 0;
v___x_260_ = 0;
v___x_261_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_251_, v___x_259_, v_type_252_, v_k_253_, v___x_260_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg___boxed(lean_object* v_name_262_, lean_object* v_type_263_, lean_object* v_k_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v_name_262_, v_type_263_, v_k_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
return v_res_270_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(lean_object* v_keys_271_, lean_object* v_i_272_, lean_object* v_k_273_){
_start:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_array_get_size(v_keys_271_);
v___x_275_ = lean_nat_dec_lt(v_i_272_, v___x_274_);
if (v___x_275_ == 0)
{
lean_dec(v_i_272_);
return v___x_275_;
}
else
{
lean_object* v_k_x27_276_; uint8_t v___x_277_; 
v_k_x27_276_ = lean_array_fget_borrowed(v_keys_271_, v_i_272_);
v___x_277_ = l_Lean_instBEqMVarId_beq(v_k_273_, v_k_x27_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_nat_add(v_i_272_, v___x_278_);
lean_dec(v_i_272_);
v_i_272_ = v___x_279_;
goto _start;
}
else
{
lean_dec(v_i_272_);
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg___boxed(lean_object* v_keys_281_, lean_object* v_i_282_, lean_object* v_k_283_){
_start:
{
uint8_t v_res_284_; lean_object* v_r_285_; 
v_res_284_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_keys_281_, v_i_282_, v_k_283_);
lean_dec(v_k_283_);
lean_dec_ref(v_keys_281_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; 
v___x_286_ = ((size_t)5ULL);
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_shift_left(v___x_287_, v___x_286_);
return v___x_288_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_289_; size_t v___x_290_; size_t v___x_291_; 
v___x_289_ = ((size_t)1ULL);
v___x_290_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__0);
v___x_291_ = lean_usize_sub(v___x_290_, v___x_289_);
return v___x_291_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(lean_object* v_x_292_, size_t v_x_293_, lean_object* v_x_294_){
_start:
{
if (lean_obj_tag(v_x_292_) == 0)
{
lean_object* v_es_295_; lean_object* v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; lean_object* v_j_300_; lean_object* v___x_301_; 
v_es_295_ = lean_ctor_get(v_x_292_, 0);
v___x_296_ = lean_box(2);
v___x_297_ = ((size_t)5ULL);
v___x_298_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___closed__1);
v___x_299_ = lean_usize_land(v_x_293_, v___x_298_);
v_j_300_ = lean_usize_to_nat(v___x_299_);
v___x_301_ = lean_array_get_borrowed(v___x_296_, v_es_295_, v_j_300_);
lean_dec(v_j_300_);
switch(lean_obj_tag(v___x_301_))
{
case 0:
{
lean_object* v_key_302_; uint8_t v___x_303_; 
v_key_302_ = lean_ctor_get(v___x_301_, 0);
v___x_303_ = l_Lean_instBEqMVarId_beq(v_x_294_, v_key_302_);
return v___x_303_;
}
case 1:
{
lean_object* v_node_304_; size_t v___x_305_; 
v_node_304_ = lean_ctor_get(v___x_301_, 0);
v___x_305_ = lean_usize_shift_right(v_x_293_, v___x_297_);
v_x_292_ = v_node_304_;
v_x_293_ = v___x_305_;
goto _start;
}
default: 
{
uint8_t v___x_307_; 
v___x_307_ = 0;
return v___x_307_;
}
}
}
else
{
lean_object* v_ks_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v_ks_308_ = lean_ctor_get(v_x_292_, 0);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_ks_308_, v___x_309_, v_x_294_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_){
_start:
{
size_t v_x_18526__boxed_314_; uint8_t v_res_315_; lean_object* v_r_316_; 
v_x_18526__boxed_314_ = lean_unbox_usize(v_x_312_);
lean_dec(v_x_312_);
v_res_315_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_311_, v_x_18526__boxed_314_, v_x_313_);
lean_dec(v_x_313_);
lean_dec_ref(v_x_311_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
uint64_t v___x_319_; size_t v___x_320_; uint8_t v___x_321_; 
v___x_319_ = l_Lean_instHashableMVarId_hash(v_x_318_);
v___x_320_ = lean_uint64_to_usize(v___x_319_);
v___x_321_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_317_, v___x_320_, v_x_318_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg___boxed(lean_object* v_x_322_, lean_object* v_x_323_){
_start:
{
uint8_t v_res_324_; lean_object* v_r_325_; 
v_res_324_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_x_322_, v_x_323_);
lean_dec(v_x_323_);
lean_dec_ref(v_x_322_);
v_r_325_ = lean_box(v_res_324_);
return v_r_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(lean_object* v_mvarId_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v_mctx_332_; lean_object* v_eAssignment_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_330_ = lean_st_ref_get(v___y_328_);
lean_dec(v___x_330_);
v___x_331_ = lean_st_ref_get(v___y_327_);
v_mctx_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc_ref(v_mctx_332_);
lean_dec(v___x_331_);
v_eAssignment_333_ = lean_ctor_get(v_mctx_332_, 8);
lean_inc_ref(v_eAssignment_333_);
lean_dec_ref(v_mctx_332_);
v___x_334_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_eAssignment_333_, v_mvarId_326_);
lean_dec_ref(v_eAssignment_333_);
v___x_335_ = lean_box(v___x_334_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg___boxed(lean_object* v_mvarId_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v_mvarId_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec(v___y_338_);
lean_dec(v_mvarId_337_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(lean_object* v_as_342_, size_t v_i_343_, size_t v_stop_344_, lean_object* v_b_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v_a_352_; uint8_t v___x_356_; 
v___x_356_ = lean_usize_dec_eq(v_i_343_, v_stop_344_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; lean_object* v___x_360_; 
v___x_357_ = lean_array_uget_borrowed(v_as_342_, v_i_343_);
v___x_360_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v___x_357_, v___y_347_, v___y_349_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; uint8_t v___x_362_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref(v___x_360_);
v___x_362_ = lean_unbox(v_a_361_);
lean_dec(v_a_361_);
if (v___x_362_ == 0)
{
goto v___jp_358_;
}
else
{
v_a_352_ = v_b_345_;
goto v___jp_351_;
}
}
else
{
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_363_; uint8_t v___x_364_; 
v_a_363_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_363_);
lean_dec_ref(v___x_360_);
v___x_364_ = lean_unbox(v_a_363_);
lean_dec(v_a_363_);
if (v___x_364_ == 0)
{
v_a_352_ = v_b_345_;
goto v___jp_351_;
}
else
{
goto v___jp_358_;
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec_ref(v_b_345_);
v_a_365_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_360_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_360_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
v___jp_358_:
{
lean_object* v___x_359_; 
lean_inc(v___x_357_);
v___x_359_ = lean_array_push(v_b_345_, v___x_357_);
v_a_352_ = v___x_359_;
goto v___jp_351_;
}
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v_b_345_);
return v___x_373_;
}
v___jp_351_:
{
size_t v___x_353_; size_t v___x_354_; 
v___x_353_ = ((size_t)1ULL);
v___x_354_ = lean_usize_add(v_i_343_, v___x_353_);
v_i_343_ = v___x_354_;
v_b_345_ = v_a_352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6___boxed(lean_object* v_as_374_, lean_object* v_i_375_, lean_object* v_stop_376_, lean_object* v_b_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
size_t v_i_boxed_383_; size_t v_stop_boxed_384_; lean_object* v_res_385_; 
v_i_boxed_383_ = lean_unbox_usize(v_i_375_);
lean_dec(v_i_375_);
v_stop_boxed_384_ = lean_unbox_usize(v_stop_376_);
lean_dec(v_stop_376_);
v_res_385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v_as_374_, v_i_boxed_383_, v_stop_boxed_384_, v_b_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec_ref(v_as_374_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(size_t v_sz_386_, size_t v_i_387_, lean_object* v_bs_388_){
_start:
{
uint8_t v___x_389_; 
v___x_389_ = lean_usize_dec_lt(v_i_387_, v_sz_386_);
if (v___x_389_ == 0)
{
return v_bs_388_;
}
else
{
lean_object* v_v_390_; lean_object* v___x_391_; lean_object* v_bs_x27_392_; lean_object* v___x_393_; size_t v___x_394_; size_t v___x_395_; lean_object* v___x_396_; 
v_v_390_ = lean_array_uget(v_bs_388_, v_i_387_);
v___x_391_ = lean_unsigned_to_nat(0u);
v_bs_x27_392_ = lean_array_uset(v_bs_388_, v_i_387_, v___x_391_);
v___x_393_ = l_Lean_Expr_mvarId_x21(v_v_390_);
lean_dec(v_v_390_);
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_add(v_i_387_, v___x_394_);
v___x_396_ = lean_array_uset(v_bs_x27_392_, v_i_387_, v___x_393_);
v_i_387_ = v___x_395_;
v_bs_388_ = v___x_396_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3___boxed(lean_object* v_sz_398_, lean_object* v_i_399_, lean_object* v_bs_400_){
_start:
{
size_t v_sz_boxed_401_; size_t v_i_boxed_402_; lean_object* v_res_403_; 
v_sz_boxed_401_ = lean_unbox_usize(v_sz_398_);
lean_dec(v_sz_398_);
v_i_boxed_402_ = lean_unbox_usize(v_i_399_);
lean_dec(v_i_399_);
v_res_403_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(v_sz_boxed_401_, v_i_boxed_402_, v_bs_400_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(lean_object* v_msgData_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v___x_410_; lean_object* v_env_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v_mctx_414_; lean_object* v_lctx_415_; lean_object* v_options_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_410_ = lean_st_ref_get(v___y_408_);
v_env_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc_ref(v_env_411_);
lean_dec(v___x_410_);
v___x_412_ = lean_st_ref_get(v___y_408_);
lean_dec(v___x_412_);
v___x_413_ = lean_st_ref_get(v___y_406_);
v_mctx_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc_ref(v_mctx_414_);
lean_dec(v___x_413_);
v_lctx_415_ = lean_ctor_get(v___y_405_, 2);
v_options_416_ = lean_ctor_get(v___y_407_, 2);
lean_inc_ref(v_options_416_);
lean_inc_ref(v_lctx_415_);
v___x_417_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_417_, 0, v_env_411_);
lean_ctor_set(v___x_417_, 1, v_mctx_414_);
lean_ctor_set(v___x_417_, 2, v_lctx_415_);
lean_ctor_set(v___x_417_, 3, v_options_416_);
v___x_418_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v_msgData_404_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3___boxed(lean_object* v_msgData_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(v_msgData_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(lean_object* v_msg_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_ref_433_; lean_object* v___x_434_; lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
v_ref_433_ = lean_ctor_get(v___y_430_, 5);
v___x_434_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_rewrite_spec__2_spec__3(v_msg_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_443_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
lean_inc(v_ref_433_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v_ref_433_);
lean_ctor_set(v___x_439_, 1, v_a_435_);
if (v_isShared_438_ == 0)
{
lean_ctor_set_tag(v___x_437_, 1);
lean_ctor_set(v___x_437_, 0, v___x_439_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg___boxed(lean_object* v_msg_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v_msg_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_450_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__0(void){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = lean_mk_string_unchecked("Invalid rewrite argument: Expected an equality or iff proof or definition name, but", 83, 83);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__1(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__0, &l_Lean_MVarId_rewrite___lam__1___closed__0_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__0);
v___x_453_ = l_Lean_stringToMessageData(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__2(void){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_mk_string_unchecked("is ", 3, 3);
return v___x_454_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__3(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__2, &l_Lean_MVarId_rewrite___lam__1___closed__2_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__2);
v___x_456_ = l_Lean_stringToMessageData(v___x_455_);
return v___x_456_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__4(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_unsigned_to_nat(0u);
v___x_458_ = lean_mk_empty_array_with_capacity(v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__5(void){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = lean_mk_string_unchecked("congrArg", 8, 8);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__6(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__5, &l_Lean_MVarId_rewrite___lam__1___closed__5_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__5);
v___x_461_ = l_Lean_Name_mkStr1(v___x_460_);
return v___x_461_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__7(void){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_mk_string_unchecked("Motive is dependent:", 20, 20);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__8(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__7, &l_Lean_MVarId_rewrite___lam__1___closed__7_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__7);
v___x_464_ = l_Lean_stringToMessageData(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__9(void){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lean_mk_string_unchecked("The rewrite tactic cannot substitute terms on which the type of the target expression depends. The type of the expression", 121, 121);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__10(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__9, &l_Lean_MVarId_rewrite___lam__1___closed__9_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__9);
v___x_467_ = l_Lean_stringToMessageData(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__11(void){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = lean_mk_string_unchecked("\ndepends on the value", 21, 21);
return v___x_468_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__12(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__11, &l_Lean_MVarId_rewrite___lam__1___closed__11_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__11);
v___x_470_ = l_Lean_stringToMessageData(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__13(void){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = lean_mk_string_unchecked("motive is not type correct:", 27, 27);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__14(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__13, &l_Lean_MVarId_rewrite___lam__1___closed__13_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__13);
v___x_473_ = l_Lean_stringToMessageData(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__15(void){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_mk_string_unchecked("\nError: ", 8, 8);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__16(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__15, &l_Lean_MVarId_rewrite___lam__1___closed__15_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__15);
v___x_476_ = l_Lean_stringToMessageData(v___x_475_);
return v___x_476_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__17(void){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = lean_mk_string_unchecked("\n\nExplanation: The rewrite tactic rewrites an expression 'e' using an equality 'a = b' by the following process. First, it looks for all 'a' in 'e'. Second, it tries to abstract these occurrences of 'a' to create a function 'm := fun _a => ...', called the *motive*, with the property that 'm a' is definitionally equal to 'e'. Third, we observe that '", 352, 352);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__18(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__17, &l_Lean_MVarId_rewrite___lam__1___closed__17_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__17);
v___x_479_ = l_Lean_stringToMessageData(v___x_478_);
return v___x_479_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__19(void){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_mk_string_unchecked("' implies that 'm a = m b', which can be used with lemmas such as '", 67, 67);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__20(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__19, &l_Lean_MVarId_rewrite___lam__1___closed__19_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__19);
v___x_482_ = l_Lean_stringToMessageData(v___x_481_);
return v___x_482_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__21(void){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__22(void){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_mk_string_unchecked("mpr", 3, 3);
return v___x_484_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__23(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_485_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__22, &l_Lean_MVarId_rewrite___lam__1___closed__22_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__22);
v___x_486_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__21, &l_Lean_MVarId_rewrite___lam__1___closed__21_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__21);
v___x_487_ = l_Lean_Name_mkStr2(v___x_486_, v___x_485_);
return v___x_487_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__24(void){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_mk_string_unchecked("' to change the goal. However, if 'e' depends on specific properties of 'a', then the motive 'm' might not typecheck.\n\nPossible solutions: use rewrite's 'occs' configuration option to limit which occurrences are rewritten, or use 'simp' or 'conv' mode, which have strategies for certain kinds of dependencies (these tactics can handle proofs and '", 347, 347);
return v___x_488_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__25(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__24, &l_Lean_MVarId_rewrite___lam__1___closed__24_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__24);
v___x_490_ = l_Lean_stringToMessageData(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__26(void){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = lean_mk_string_unchecked("Decidable", 9, 9);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__27(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__26, &l_Lean_MVarId_rewrite___lam__1___closed__26_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__26);
v___x_493_ = l_Lean_Name_mkStr1(v___x_492_);
return v___x_493_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__28(void){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = lean_mk_string_unchecked("' instances whose types depend on the rewritten term, and 'simp' can apply user-defined '@[congr]' theorems as well).", 117, 117);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__29(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__28, &l_Lean_MVarId_rewrite___lam__1___closed__28_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__28);
v___x_496_ = l_Lean_stringToMessageData(v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__30(void){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_mk_string_unchecked("_a", 2, 2);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__31(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__30, &l_Lean_MVarId_rewrite___lam__1___closed__30_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__30);
v___x_499_ = l_Lean_Name_mkStr1(v___x_498_);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__32(void){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = lean_mk_string_unchecked("Did not find an occurrence of the pattern", 41, 41);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__33(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__32, &l_Lean_MVarId_rewrite___lam__1___closed__32_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__32);
v___x_502_ = l_Lean_stringToMessageData(v___x_501_);
return v___x_502_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__34(void){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_mk_string_unchecked("\nin the target expression", 25, 25);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__35(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__34, &l_Lean_MVarId_rewrite___lam__1___closed__34_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__34);
v___x_505_ = l_Lean_stringToMessageData(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__36(void){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = lean_mk_string_unchecked("Invalid rewrite argument: The pattern to be substituted is a metavariable (`", 76, 76);
return v___x_506_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__37(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__36, &l_Lean_MVarId_rewrite___lam__1___closed__36_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__36);
v___x_508_ = l_Lean_stringToMessageData(v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__38(void){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_mk_string_unchecked("`) in this equality", 19, 19);
return v___x_509_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__39(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__38, &l_Lean_MVarId_rewrite___lam__1___closed__38_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__38);
v___x_511_ = l_Lean_stringToMessageData(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__40(void){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = lean_mk_string_unchecked("a value of type", 15, 15);
return v___x_512_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__41(void){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = lean_mk_string_unchecked("a proof of", 10, 10);
return v___x_513_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__42(void){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_mk_string_unchecked("Iff", 3, 3);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__43(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__42, &l_Lean_MVarId_rewrite___lam__1___closed__42_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__42);
v___x_516_ = l_Lean_Name_mkStr1(v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__44(void){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = lean_mk_string_unchecked("propext", 7, 7);
return v___x_517_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__45(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__44, &l_Lean_MVarId_rewrite___lam__1___closed__44_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__44);
v___x_519_ = l_Lean_Name_mkStr1(v___x_518_);
return v___x_519_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___lam__1___closed__46(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_520_ = lean_box(0);
v___x_521_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__45, &l_Lean_MVarId_rewrite___lam__1___closed__45_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__45);
v___x_522_ = l_Lean_mkConst(v___x_521_, v___x_520_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1(lean_object* v_mvarId_523_, lean_object* v___x_524_, lean_object* v_heq_525_, lean_object* v_e_526_, lean_object* v_config_527_, uint8_t v_symm_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___x_562_; 
lean_inc(v___x_524_);
lean_inc(v_mvarId_523_);
v___x_562_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_523_, v___x_524_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
lean_dec_ref(v___x_562_);
lean_inc(v___y_532_);
lean_inc_ref(v___y_531_);
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc_ref(v_heq_525_);
v___x_563_ = lean_infer_type(v_heq_525_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_1097_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref(v___x_563_);
v___x_565_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_a_564_, v___y_530_, v___y_532_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_1097_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_1097_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; uint8_t v___x_571_; lean_object* v___x_572_; 
v___x_570_ = lean_box(0);
v___x_571_ = 0;
v___x_572_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_566_, v___x_570_, v___x_571_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v_snd_574_; lean_object* v_fst_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_1088_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref(v___x_572_);
v_snd_574_ = lean_ctor_get(v_a_573_, 1);
v_fst_575_ = lean_ctor_get(v_a_573_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_a_573_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_577_ = v_a_573_;
v_isShared_578_ = v_isSharedCheck_1088_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_snd_574_);
lean_inc(v_fst_575_);
lean_dec(v_a_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_1088_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v_fst_579_; lean_object* v_snd_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_1087_; 
v_fst_579_ = lean_ctor_get(v_snd_574_, 0);
v_snd_580_ = lean_ctor_get(v_snd_574_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_snd_574_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_582_ = v_snd_574_;
v_isShared_583_ = v_isSharedCheck_1087_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snd_580_);
lean_inc(v_fst_579_);
lean_dec(v_snd_574_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_1087_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; size_t v___y_591_; lean_object* v___y_592_; lean_object* v_a_593_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; size_t v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; uint8_t v___y_647_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v___y_724_; lean_object* v___y_725_; lean_object* v___y_726_; lean_object* v___y_727_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; uint8_t v___y_794_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v_eNew_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_983_; lean_object* v_heq_984_; lean_object* v_heqType_985_; lean_object* v_lhs_986_; lean_object* v_rhs_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v_heq_1011_; lean_object* v_heqType_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; 
lean_inc_ref(v_heq_525_);
v___x_1068_ = l_Lean_mkAppN(v_heq_525_, v_fst_575_);
v___x_1069_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__43, &l_Lean_MVarId_rewrite___lam__1___closed__43_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__43);
v___x_1070_ = lean_unsigned_to_nat(2u);
v___x_1071_ = l_Lean_Expr_isAppOfArity(v_snd_580_, v___x_1069_, v___x_1070_);
if (v___x_1071_ == 0)
{
v_heq_1011_ = v___x_1068_;
v_heqType_1012_ = v_snd_580_;
v___y_1013_ = v___y_529_;
v___y_1014_ = v___y_530_;
v___y_1015_ = v___y_531_;
v___y_1016_ = v___y_532_;
goto v___jp_1010_;
}
else
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1072_ = l_Lean_Expr_appFn_x21(v_snd_580_);
v___x_1073_ = l_Lean_Expr_appArg_x21(v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = l_Lean_Expr_appArg_x21(v_snd_580_);
lean_dec(v_snd_580_);
lean_inc_ref(v___x_1074_);
lean_inc_ref(v___x_1073_);
v___x_1075_ = l_Lean_Meta_mkEq(v___x_1073_, v___x_1074_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref(v___x_1075_);
v___x_1077_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__46, &l_Lean_MVarId_rewrite___lam__1___closed__46_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__46);
v___x_1078_ = l_Lean_mkApp3(v___x_1077_, v___x_1073_, v___x_1074_, v___x_1068_);
v_heq_1011_ = v___x_1078_;
v_heqType_1012_ = v_a_1076_;
v___y_1013_ = v___y_529_;
v___y_1014_ = v___y_530_;
v___y_1015_ = v___y_531_;
v___y_1016_ = v___y_532_;
goto v___jp_1010_;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v___x_1074_);
lean_dec_ref(v___x_1073_);
lean_dec_ref(v___x_1068_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1079_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1075_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1075_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
v___jp_584_:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Meta_appendParentTag(v_mvarId_523_, v_fst_575_, v_fst_579_, v___y_589_, v___y_586_, v___y_590_, v___y_588_);
lean_dec(v_fst_579_);
lean_dec(v_fst_575_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v___x_595_; 
lean_dec_ref(v___x_594_);
v___x_595_ = l_Lean_Meta_getMVarsNoDelayed(v_heq_525_, v___y_589_, v___y_586_, v___y_590_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_589_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref(v___x_595_);
v___x_597_ = lean_array_get_size(v_a_596_);
v___x_598_ = lean_mk_empty_array_with_capacity(v___y_592_);
v___x_599_ = lean_nat_dec_lt(v___y_592_, v___x_597_);
if (v___x_599_ == 0)
{
lean_dec(v_a_596_);
v___y_554_ = v___y_585_;
v___y_555_ = v___y_587_;
v___y_556_ = v_a_593_;
v___y_557_ = v___x_598_;
goto v___jp_553_;
}
else
{
uint8_t v___x_600_; 
v___x_600_ = lean_nat_dec_le(v___x_597_, v___x_597_);
if (v___x_600_ == 0)
{
if (v___x_599_ == 0)
{
lean_dec(v_a_596_);
v___y_554_ = v___y_585_;
v___y_555_ = v___y_587_;
v___y_556_ = v_a_593_;
v___y_557_ = v___x_598_;
goto v___jp_553_;
}
else
{
size_t v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_usize_of_nat(v___x_597_);
v___x_602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_593_, v_a_596_, v___y_591_, v___x_601_, v___x_598_);
lean_dec(v_a_596_);
v___y_554_ = v___y_585_;
v___y_555_ = v___y_587_;
v___y_556_ = v_a_593_;
v___y_557_ = v___x_602_;
goto v___jp_553_;
}
}
else
{
size_t v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_usize_of_nat(v___x_597_);
v___x_604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__5(v_a_593_, v_a_596_, v___y_591_, v___x_603_, v___x_598_);
lean_dec(v_a_596_);
v___y_554_ = v___y_585_;
v___y_555_ = v___y_587_;
v___y_556_ = v_a_593_;
v___y_557_ = v___x_604_;
goto v___jp_553_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v_a_593_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v___y_585_);
v_a_605_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_595_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_595_);
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
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_a_593_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec_ref(v_heq_525_);
v_a_613_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_594_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_594_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
v___jp_621_:
{
if (lean_obj_tag(v___y_630_) == 0)
{
lean_object* v_a_631_; 
v_a_631_ = lean_ctor_get(v___y_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref(v___y_630_);
v___y_585_ = v___y_622_;
v___y_586_ = v___y_623_;
v___y_587_ = v___y_624_;
v___y_588_ = v___y_626_;
v___y_589_ = v___y_625_;
v___y_590_ = v___y_627_;
v___y_591_ = v___y_628_;
v___y_592_ = v___y_629_;
v_a_593_ = v_a_631_;
goto v___jp_584_;
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v_fst_579_);
lean_dec(v_fst_575_);
lean_dec_ref(v_heq_525_);
lean_dec(v_mvarId_523_);
v_a_632_ = lean_ctor_get(v___y_630_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___y_630_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___y_630_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___y_630_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
v___jp_640_:
{
uint8_t v___x_648_; lean_object* v___x_649_; 
v___x_648_ = 0;
lean_inc(v_fst_579_);
lean_inc(v_mvarId_523_);
v___x_649_ = l_Lean_Meta_postprocessAppMVars(v___x_524_, v_mvarId_523_, v_fst_575_, v_fst_579_, v___y_647_, v___x_648_, v___y_645_, v___y_642_, v___y_646_, v___y_644_);
if (lean_obj_tag(v___x_649_) == 0)
{
size_t v_sz_650_; size_t v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
lean_dec_ref(v___x_649_);
v_sz_650_ = lean_array_size(v_fst_575_);
v___x_651_ = ((size_t)0ULL);
lean_inc(v_fst_575_);
v___x_652_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_rewrite_spec__3(v_sz_650_, v___x_651_, v_fst_575_);
v___x_653_ = lean_unsigned_to_nat(0u);
v___x_654_ = lean_array_get_size(v___x_652_);
v___x_655_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__4, &l_Lean_MVarId_rewrite___lam__1___closed__4_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__4);
v___x_656_ = lean_nat_dec_lt(v___x_653_, v___x_654_);
if (v___x_656_ == 0)
{
lean_dec_ref(v___x_652_);
v___y_585_ = v___y_641_;
v___y_586_ = v___y_642_;
v___y_587_ = v___y_643_;
v___y_588_ = v___y_644_;
v___y_589_ = v___y_645_;
v___y_590_ = v___y_646_;
v___y_591_ = v___x_651_;
v___y_592_ = v___x_653_;
v_a_593_ = v___x_655_;
goto v___jp_584_;
}
else
{
uint8_t v___x_657_; 
v___x_657_ = lean_nat_dec_le(v___x_654_, v___x_654_);
if (v___x_657_ == 0)
{
if (v___x_656_ == 0)
{
lean_dec_ref(v___x_652_);
v___y_585_ = v___y_641_;
v___y_586_ = v___y_642_;
v___y_587_ = v___y_643_;
v___y_588_ = v___y_644_;
v___y_589_ = v___y_645_;
v___y_590_ = v___y_646_;
v___y_591_ = v___x_651_;
v___y_592_ = v___x_653_;
v_a_593_ = v___x_655_;
goto v___jp_584_;
}
else
{
size_t v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_usize_of_nat(v___x_654_);
v___x_659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v___x_652_, v___x_651_, v___x_658_, v___x_655_, v___y_645_, v___y_642_, v___y_646_, v___y_644_);
lean_dec_ref(v___x_652_);
v___y_622_ = v___y_641_;
v___y_623_ = v___y_642_;
v___y_624_ = v___y_643_;
v___y_625_ = v___y_645_;
v___y_626_ = v___y_644_;
v___y_627_ = v___y_646_;
v___y_628_ = v___x_651_;
v___y_629_ = v___x_653_;
v___y_630_ = v___x_659_;
goto v___jp_621_;
}
}
else
{
size_t v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_usize_of_nat(v___x_654_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_rewrite_spec__6(v___x_652_, v___x_651_, v___x_660_, v___x_655_, v___y_645_, v___y_642_, v___y_646_, v___y_644_);
lean_dec_ref(v___x_652_);
v___y_622_ = v___y_641_;
v___y_623_ = v___y_642_;
v___y_624_ = v___y_643_;
v___y_625_ = v___y_645_;
v___y_626_ = v___y_644_;
v___y_627_ = v___y_646_;
v___y_628_ = v___x_651_;
v___y_629_ = v___x_653_;
v___y_630_ = v___x_661_;
goto v___jp_621_;
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v_fst_579_);
lean_dec(v_fst_575_);
lean_dec_ref(v_heq_525_);
lean_dec(v_mvarId_523_);
v_a_662_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_649_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_649_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
v___jp_670_:
{
lean_object* v___x_682_; 
lean_inc_ref(v___y_673_);
v___x_682_ = l_Lean_Meta_getLevel(v___y_673_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_684_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref(v___x_682_);
lean_inc_ref(v___y_676_);
v___x_684_ = l_Lean_Meta_getLevel(v___y_676_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v_options_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref(v___x_684_);
v_options_686_ = lean_ctor_get(v___y_680_, 2);
v___x_687_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__6, &l_Lean_MVarId_rewrite___lam__1___closed__6_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__6);
v___x_688_ = lean_box(0);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 1);
lean_ctor_set(v___x_582_, 1, v___x_688_);
lean_ctor_set(v___x_582_, 0, v_a_685_);
v___x_690_ = v___x_582_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_685_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_688_);
v___x_690_ = v_reuseFailAlloc_700_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_692_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set_tag(v___x_577_, 1);
lean_ctor_set(v___x_577_, 1, v___x_690_);
lean_ctor_set(v___x_577_, 0, v_a_683_);
v___x_692_ = v___x_577_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_683_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_690_);
v___x_692_ = v_reuseFailAlloc_699_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_693_ = l_Lean_Expr_const___override(v___x_687_, v___x_692_);
v___x_694_ = l_Lean_mkApp6(v___x_693_, v___y_673_, v___y_676_, v___y_677_, v___y_675_, v___y_672_, v___y_674_);
v___x_695_ = l_Lean_Meta_tactic_skipAssignedInstances;
v___x_696_ = l_Lean_Option_get___at___00Lean_MVarId_rewrite_spec__7(v_options_686_, v___x_695_);
if (v___x_696_ == 0)
{
uint8_t v___x_697_; 
v___x_697_ = 1;
v___y_641_ = v___y_671_;
v___y_642_ = v___y_679_;
v___y_643_ = v___x_694_;
v___y_644_ = v___y_681_;
v___y_645_ = v___y_678_;
v___y_646_ = v___y_680_;
v___y_647_ = v___x_697_;
goto v___jp_640_;
}
else
{
uint8_t v___x_698_; 
v___x_698_ = 0;
v___y_641_ = v___y_671_;
v___y_642_ = v___y_679_;
v___y_643_ = v___x_694_;
v___y_644_ = v___y_681_;
v___y_645_ = v___y_678_;
v___y_646_ = v___y_680_;
v___y_647_ = v___x_698_;
goto v___jp_640_;
}
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v_a_683_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec_ref(v___y_671_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_701_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_684_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_684_);
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
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec_ref(v___y_671_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_709_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_682_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_682_);
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
v___jp_717_:
{
if (lean_obj_tag(v___y_732_) == 0)
{
lean_object* v___x_733_; 
lean_dec_ref(v___y_732_);
lean_inc_ref(v___y_719_);
v___x_733_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v___y_727_, v___y_719_, v___y_720_, v___y_723_, v___y_724_, v___y_726_, v___y_728_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; uint8_t v___x_735_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref(v___x_733_);
v___x_735_ = lean_unbox(v_a_734_);
lean_dec(v_a_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_736_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__8, &l_Lean_MVarId_rewrite___lam__1___closed__8_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__8);
lean_inc_ref(v___y_725_);
v___x_737_ = l_Lean_MessageData_ofExpr(v___y_725_);
v___x_738_ = l_Lean_indentD(v___x_737_);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_736_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__10, &l_Lean_MVarId_rewrite___lam__1___closed__10_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__10);
v___x_741_ = l_Lean_indentExpr(v___y_731_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_740_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__12, &l_Lean_MVarId_rewrite___lam__1___closed__12_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__12);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
lean_inc_ref(v___y_730_);
v___x_745_ = l_Lean_indentExpr(v___y_730_);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = l_Lean_MessageData_note(v___x_746_);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_739_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
if (v_isShared_569_ == 0)
{
lean_ctor_set_tag(v___x_568_, 1);
lean_ctor_set(v___x_568_, 0, v___x_748_);
v___x_750_ = v___x_568_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_760_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_751_; 
lean_inc(v_mvarId_523_);
lean_inc(v___x_524_);
v___x_751_ = l_Lean_Meta_throwTacticEx___redArg(v___x_524_, v_mvarId_523_, v___x_750_, v___y_723_, v___y_724_, v___y_726_, v___y_728_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_dec_ref(v___x_751_);
v___y_671_ = v___y_718_;
v___y_672_ = v___y_725_;
v___y_673_ = v___y_719_;
v___y_674_ = v___y_721_;
v___y_675_ = v___y_722_;
v___y_676_ = v___y_729_;
v___y_677_ = v___y_730_;
v___y_678_ = v___y_723_;
v___y_679_ = v___y_724_;
v___y_680_ = v___y_726_;
v___y_681_ = v___y_728_;
goto v___jp_670_;
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec_ref(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v___y_719_);
lean_dec_ref(v___y_718_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_752_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_751_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_751_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_731_);
lean_del_object(v___x_568_);
v___y_671_ = v___y_718_;
v___y_672_ = v___y_725_;
v___y_673_ = v___y_719_;
v___y_674_ = v___y_721_;
v___y_675_ = v___y_722_;
v___y_676_ = v___y_729_;
v___y_677_ = v___y_730_;
v___y_678_ = v___y_723_;
v___y_679_ = v___y_724_;
v___y_680_ = v___y_726_;
v___y_681_ = v___y_728_;
goto v___jp_670_;
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec_ref(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v___y_719_);
lean_dec_ref(v___y_718_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_761_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_733_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_733_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec_ref(v___y_718_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_769_ = lean_ctor_get(v___y_732_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___y_732_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___y_732_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___y_732_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
v___jp_777_:
{
if (v___y_794_ == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
lean_dec_ref(v___y_785_);
v___x_795_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__14, &l_Lean_MVarId_rewrite___lam__1___closed__14_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__14);
lean_inc_ref(v___y_787_);
v___x_796_ = l_Lean_MessageData_ofExpr(v___y_787_);
v___x_797_ = l_Lean_indentD(v___x_796_);
v___x_798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_795_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__16, &l_Lean_MVarId_rewrite___lam__1___closed__16_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__16);
v___x_800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = l_Lean_Exception_toMessageData(v___y_778_);
v___x_802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__18, &l_Lean_MVarId_rewrite___lam__1___closed__18_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__18);
v___x_804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__6, &l_Lean_MVarId_rewrite___lam__1___closed__6_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__6);
v___x_806_ = l_Lean_MessageData_ofConstName(v___x_805_, v___y_794_);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__20, &l_Lean_MVarId_rewrite___lam__1___closed__20_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__20);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__23, &l_Lean_MVarId_rewrite___lam__1___closed__23_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__23);
v___x_811_ = l_Lean_MessageData_ofConstName(v___x_810_, v___y_794_);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_809_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__25, &l_Lean_MVarId_rewrite___lam__1___closed__25_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__25);
v___x_814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__27, &l_Lean_MVarId_rewrite___lam__1___closed__27_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__27);
v___x_816_ = l_Lean_MessageData_ofConstName(v___x_815_, v___y_794_);
v___x_817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_814_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__29, &l_Lean_MVarId_rewrite___lam__1___closed__29_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__29);
v___x_819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
lean_inc(v_mvarId_523_);
lean_inc(v___x_524_);
v___x_821_ = l_Lean_Meta_throwTacticEx___redArg(v___x_524_, v_mvarId_523_, v___x_820_, v___y_784_, v___y_786_, v___y_788_, v___y_790_);
v___y_718_ = v___y_779_;
v___y_719_ = v___y_780_;
v___y_720_ = v___y_781_;
v___y_721_ = v___y_782_;
v___y_722_ = v___y_783_;
v___y_723_ = v___y_784_;
v___y_724_ = v___y_786_;
v___y_725_ = v___y_787_;
v___y_726_ = v___y_788_;
v___y_727_ = v___y_789_;
v___y_728_ = v___y_790_;
v___y_729_ = v___y_791_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_793_;
v___y_732_ = v___x_821_;
goto v___jp_717_;
}
else
{
lean_dec_ref(v___y_778_);
v___y_718_ = v___y_779_;
v___y_719_ = v___y_780_;
v___y_720_ = v___y_781_;
v___y_721_ = v___y_782_;
v___y_722_ = v___y_783_;
v___y_723_ = v___y_784_;
v___y_724_ = v___y_786_;
v___y_725_ = v___y_787_;
v___y_726_ = v___y_788_;
v___y_727_ = v___y_789_;
v___y_728_ = v___y_790_;
v___y_729_ = v___y_791_;
v___y_730_ = v___y_792_;
v___y_731_ = v___y_793_;
v___y_732_ = v___y_785_;
goto v___jp_717_;
}
}
v___jp_822_:
{
lean_object* v___x_835_; 
lean_inc(v___y_834_);
lean_inc_ref(v___y_833_);
lean_inc(v___y_832_);
lean_inc_ref(v___y_831_);
lean_inc_ref(v___y_829_);
v___x_835_ = lean_infer_type(v___y_829_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v___f_837_; lean_object* v___x_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc_n(v_a_836_, 2);
lean_dec_ref(v___x_835_);
v___f_837_ = lean_alloc_closure((void*)(l_Lean_MVarId_rewrite___lam__0___boxed), 8, 2);
lean_closure_set(v___f_837_, 0, v___y_823_);
lean_closure_set(v___f_837_, 1, v_a_836_);
v___x_838_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__31, &l_Lean_MVarId_rewrite___lam__1___closed__31_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__31);
v___x_839_ = 0;
lean_inc_ref(v___y_824_);
v___x_840_ = l_Lean_mkLambda(v___x_838_, v___x_839_, v___y_824_, v___y_828_);
lean_inc_ref(v___x_840_);
v___x_841_ = l_Lean_Meta_check(v___x_840_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
if (lean_obj_tag(v___x_841_) == 0)
{
v___y_718_ = v_eNew_830_;
v___y_719_ = v___y_824_;
v___y_720_ = v___f_837_;
v___y_721_ = v___y_825_;
v___y_722_ = v___y_826_;
v___y_723_ = v___y_831_;
v___y_724_ = v___y_832_;
v___y_725_ = v___x_840_;
v___y_726_ = v___y_833_;
v___y_727_ = v___x_838_;
v___y_728_ = v___y_834_;
v___y_729_ = v_a_836_;
v___y_730_ = v___y_827_;
v___y_731_ = v___y_829_;
v___y_732_ = v___x_841_;
goto v___jp_717_;
}
else
{
lean_object* v_a_842_; uint8_t v___x_843_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
v___x_843_ = l_Lean_Exception_isInterrupt(v_a_842_);
if (v___x_843_ == 0)
{
uint8_t v___x_844_; 
lean_inc(v_a_842_);
v___x_844_ = l_Lean_Exception_isRuntime(v_a_842_);
v___y_778_ = v_a_842_;
v___y_779_ = v_eNew_830_;
v___y_780_ = v___y_824_;
v___y_781_ = v___f_837_;
v___y_782_ = v___y_825_;
v___y_783_ = v___y_826_;
v___y_784_ = v___y_831_;
v___y_785_ = v___x_841_;
v___y_786_ = v___y_832_;
v___y_787_ = v___x_840_;
v___y_788_ = v___y_833_;
v___y_789_ = v___x_838_;
v___y_790_ = v___y_834_;
v___y_791_ = v_a_836_;
v___y_792_ = v___y_827_;
v___y_793_ = v___y_829_;
v___y_794_ = v___x_844_;
goto v___jp_777_;
}
else
{
v___y_778_ = v_a_842_;
v___y_779_ = v_eNew_830_;
v___y_780_ = v___y_824_;
v___y_781_ = v___f_837_;
v___y_782_ = v___y_825_;
v___y_783_ = v___y_826_;
v___y_784_ = v___y_831_;
v___y_785_ = v___x_841_;
v___y_786_ = v___y_832_;
v___y_787_ = v___x_840_;
v___y_788_ = v___y_833_;
v___y_789_ = v___x_838_;
v___y_790_ = v___y_834_;
v___y_791_ = v_a_836_;
v___y_792_ = v___y_827_;
v___y_793_ = v___y_829_;
v___y_794_ = v___x_843_;
goto v___jp_777_;
}
}
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec_ref(v_eNew_830_);
lean_dec_ref(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_823_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
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
v___jp_853_:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v_a_866_; uint8_t v___x_867_; 
v___x_864_ = lean_expr_instantiate1(v___y_854_, v___y_857_);
v___x_865_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v___x_864_, v___y_861_, v___y_863_);
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref(v___x_865_);
v___x_867_ = l_Lean_Expr_hasBinderNameHint(v___y_857_);
if (v___x_867_ == 0)
{
lean_inc_ref(v___y_854_);
v___y_823_ = v___y_854_;
v___y_824_ = v___y_855_;
v___y_825_ = v___y_856_;
v___y_826_ = v___y_857_;
v___y_827_ = v___y_858_;
v___y_828_ = v___y_854_;
v___y_829_ = v___y_859_;
v_eNew_830_ = v_a_866_;
v___y_831_ = v___y_860_;
v___y_832_ = v___y_861_;
v___y_833_ = v___y_862_;
v___y_834_ = v___y_863_;
goto v___jp_822_;
}
else
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_Expr_resolveBinderNameHint(v_a_866_, v___y_862_, v___y_863_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref(v___x_868_);
lean_inc_ref(v___y_854_);
v___y_823_ = v___y_854_;
v___y_824_ = v___y_855_;
v___y_825_ = v___y_856_;
v___y_826_ = v___y_857_;
v___y_827_ = v___y_858_;
v___y_828_ = v___y_854_;
v___y_829_ = v___y_859_;
v_eNew_830_ = v_a_869_;
v___y_831_ = v___y_860_;
v___y_832_ = v___y_861_;
v___y_833_ = v___y_862_;
v___y_834_ = v___y_863_;
goto v___jp_822_;
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec_ref(v___y_854_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_870_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_868_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_868_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
}
v___jp_878_:
{
lean_object* v___x_887_; lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_981_; 
v___x_887_ = l_Lean_instantiateMVars___at___00Lean_MVarId_rewrite_spec__1___redArg(v_e_526_, v___y_884_, v___y_886_);
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_981_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_981_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_981_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
uint8_t v_transparency_892_; uint8_t v_offsetCnstrs_893_; lean_object* v_occs_894_; lean_object* v___x_895_; uint8_t v_foApprox_896_; uint8_t v_ctxApprox_897_; uint8_t v_quasiPatternApprox_898_; uint8_t v_constApprox_899_; uint8_t v_isDefEqStuckEx_900_; uint8_t v_unificationHints_901_; uint8_t v_proofIrrelevance_902_; uint8_t v_assignSyntheticOpaque_903_; uint8_t v_etaStruct_904_; uint8_t v_univApprox_905_; uint8_t v_iota_906_; uint8_t v_beta_907_; uint8_t v_proj_908_; uint8_t v_zeta_909_; uint8_t v_zetaDelta_910_; uint8_t v_zetaUnused_911_; uint8_t v_zetaHave_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_980_; 
v_transparency_892_ = lean_ctor_get_uint8(v_config_527_, sizeof(void*)*1);
v_offsetCnstrs_893_ = lean_ctor_get_uint8(v_config_527_, sizeof(void*)*1 + 1);
v_occs_894_ = lean_ctor_get(v_config_527_, 0);
lean_inc(v_occs_894_);
lean_dec_ref(v_config_527_);
v___x_895_ = l_Lean_Meta_Context_config(v___y_883_);
v_foApprox_896_ = lean_ctor_get_uint8(v___x_895_, 0);
v_ctxApprox_897_ = lean_ctor_get_uint8(v___x_895_, 1);
v_quasiPatternApprox_898_ = lean_ctor_get_uint8(v___x_895_, 2);
v_constApprox_899_ = lean_ctor_get_uint8(v___x_895_, 3);
v_isDefEqStuckEx_900_ = lean_ctor_get_uint8(v___x_895_, 4);
v_unificationHints_901_ = lean_ctor_get_uint8(v___x_895_, 5);
v_proofIrrelevance_902_ = lean_ctor_get_uint8(v___x_895_, 6);
v_assignSyntheticOpaque_903_ = lean_ctor_get_uint8(v___x_895_, 7);
v_etaStruct_904_ = lean_ctor_get_uint8(v___x_895_, 10);
v_univApprox_905_ = lean_ctor_get_uint8(v___x_895_, 11);
v_iota_906_ = lean_ctor_get_uint8(v___x_895_, 12);
v_beta_907_ = lean_ctor_get_uint8(v___x_895_, 13);
v_proj_908_ = lean_ctor_get_uint8(v___x_895_, 14);
v_zeta_909_ = lean_ctor_get_uint8(v___x_895_, 15);
v_zetaDelta_910_ = lean_ctor_get_uint8(v___x_895_, 16);
v_zetaUnused_911_ = lean_ctor_get_uint8(v___x_895_, 17);
v_zetaHave_912_ = lean_ctor_get_uint8(v___x_895_, 18);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_980_ == 0)
{
v___x_914_ = v___x_895_;
v_isShared_915_ = v_isSharedCheck_980_;
goto v_resetjp_913_;
}
else
{
lean_dec(v___x_895_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_980_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
uint8_t v_trackZetaDelta_916_; lean_object* v_zetaDeltaSet_917_; lean_object* v_lctx_918_; lean_object* v_localInstances_919_; lean_object* v_defEqCtx_x3f_920_; lean_object* v_synthPendingDepth_921_; lean_object* v_canUnfold_x3f_922_; uint8_t v_univApprox_923_; uint8_t v_inTypeClassResolution_924_; uint8_t v_cacheInferType_925_; lean_object* v___x_927_; 
v_trackZetaDelta_916_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*7);
v_zetaDeltaSet_917_ = lean_ctor_get(v___y_883_, 1);
v_lctx_918_ = lean_ctor_get(v___y_883_, 2);
v_localInstances_919_ = lean_ctor_get(v___y_883_, 3);
v_defEqCtx_x3f_920_ = lean_ctor_get(v___y_883_, 4);
v_synthPendingDepth_921_ = lean_ctor_get(v___y_883_, 5);
v_canUnfold_x3f_922_ = lean_ctor_get(v___y_883_, 6);
v_univApprox_923_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_924_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*7 + 2);
v_cacheInferType_925_ = lean_ctor_get_uint8(v___y_883_, sizeof(void*)*7 + 3);
if (v_isShared_915_ == 0)
{
v___x_927_ = v___x_914_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 0, v_foApprox_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 1, v_ctxApprox_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 2, v_quasiPatternApprox_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 3, v_constApprox_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 4, v_isDefEqStuckEx_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 5, v_unificationHints_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 6, v_proofIrrelevance_902_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 7, v_assignSyntheticOpaque_903_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 10, v_etaStruct_904_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 11, v_univApprox_905_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 12, v_iota_906_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 13, v_beta_907_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 14, v_proj_908_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 15, v_zeta_909_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 16, v_zetaDelta_910_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 17, v_zetaUnused_911_);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 18, v_zetaHave_912_);
v___x_927_ = v_reuseFailAlloc_979_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
uint64_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
lean_ctor_set_uint8(v___x_927_, 8, v_offsetCnstrs_893_);
lean_ctor_set_uint8(v___x_927_, 9, v_transparency_892_);
v___x_928_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_927_);
v___x_929_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_929_, 0, v___x_927_);
lean_ctor_set_uint64(v___x_929_, sizeof(void*)*1, v___x_928_);
lean_inc(v_canUnfold_x3f_922_);
lean_inc(v_synthPendingDepth_921_);
lean_inc(v_defEqCtx_x3f_920_);
lean_inc_ref(v_localInstances_919_);
lean_inc_ref(v_lctx_918_);
lean_inc(v_zetaDeltaSet_917_);
v___x_930_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_930_, 0, v___x_929_);
lean_ctor_set(v___x_930_, 1, v_zetaDeltaSet_917_);
lean_ctor_set(v___x_930_, 2, v_lctx_918_);
lean_ctor_set(v___x_930_, 3, v_localInstances_919_);
lean_ctor_set(v___x_930_, 4, v_defEqCtx_x3f_920_);
lean_ctor_set(v___x_930_, 5, v_synthPendingDepth_921_);
lean_ctor_set(v___x_930_, 6, v_canUnfold_x3f_922_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*7, v_trackZetaDelta_916_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*7 + 1, v_univApprox_923_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*7 + 2, v_inTypeClassResolution_924_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*7 + 3, v_cacheInferType_925_);
lean_inc_ref(v___y_882_);
lean_inc(v_a_888_);
v___x_931_ = l_Lean_Meta_kabstract(v_a_888_, v___y_882_, v_occs_894_, v___x_930_, v___y_884_, v___y_885_, v___y_886_);
lean_dec_ref(v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; uint8_t v___x_933_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
lean_dec_ref(v___x_931_);
v___x_933_ = l_Lean_Expr_hasLooseBVars(v_a_932_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
lean_inc_ref(v___y_882_);
lean_inc(v_a_888_);
v___x_934_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_888_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v_fst_936_; lean_object* v_snd_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_962_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_a_935_);
lean_dec_ref(v___x_934_);
v_fst_936_ = lean_ctor_get(v_a_935_, 0);
v_snd_937_ = lean_ctor_get(v_a_935_, 1);
v_isSharedCheck_962_ = !lean_is_exclusive(v_a_935_);
if (v_isSharedCheck_962_ == 0)
{
v___x_939_ = v_a_935_;
v_isShared_940_ = v_isSharedCheck_962_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_snd_937_);
lean_inc(v_fst_936_);
lean_dec(v_a_935_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_962_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_941_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__33, &l_Lean_MVarId_rewrite___lam__1___closed__33_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__33);
v___x_942_ = l_Lean_indentExpr(v_snd_937_);
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 7);
lean_ctor_set(v___x_939_, 1, v___x_942_);
lean_ctor_set(v___x_939_, 0, v___x_941_);
v___x_944_ = v___x_939_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___x_942_);
v___x_944_ = v_reuseFailAlloc_961_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_945_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__35, &l_Lean_MVarId_rewrite___lam__1___closed__35_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__35);
v___x_946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = l_Lean_indentExpr(v_fst_936_);
v___x_948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
if (v_isShared_891_ == 0)
{
lean_ctor_set_tag(v___x_890_, 1);
lean_ctor_set(v___x_890_, 0, v___x_948_);
v___x_950_ = v___x_890_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_960_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_951_; 
lean_inc(v_mvarId_523_);
lean_inc(v___x_524_);
v___x_951_ = l_Lean_Meta_throwTacticEx___redArg(v___x_524_, v_mvarId_523_, v___x_950_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_dec_ref(v___x_951_);
v___y_854_ = v_a_932_;
v___y_855_ = v___y_879_;
v___y_856_ = v___y_880_;
v___y_857_ = v___y_881_;
v___y_858_ = v___y_882_;
v___y_859_ = v_a_888_;
v___y_860_ = v___y_883_;
v___y_861_ = v___y_884_;
v___y_862_ = v___y_885_;
v___y_863_ = v___y_886_;
goto v___jp_853_;
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec(v_a_932_);
lean_dec(v_a_888_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
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
else
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
lean_dec(v_a_932_);
lean_del_object(v___x_890_);
lean_dec(v_a_888_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_963_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_934_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_934_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
else
{
lean_del_object(v___x_890_);
v___y_854_ = v_a_932_;
v___y_855_ = v___y_879_;
v___y_856_ = v___y_880_;
v___y_857_ = v___y_881_;
v___y_858_ = v___y_882_;
v___y_859_ = v_a_888_;
v___y_860_ = v___y_883_;
v___y_861_ = v___y_884_;
v___y_862_ = v___y_885_;
v___y_863_ = v___y_886_;
goto v___jp_853_;
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_del_object(v___x_890_);
lean_dec(v_a_888_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_971_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_931_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_931_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
}
}
v___jp_982_:
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = l_Lean_Expr_getAppFn(v_lhs_986_);
v___x_993_ = l_Lean_Expr_isMVar(v___x_992_);
lean_dec_ref(v___x_992_);
if (v___x_993_ == 0)
{
lean_dec_ref(v_heqType_985_);
v___y_879_ = v___y_983_;
v___y_880_ = v_heq_984_;
v___y_881_ = v_rhs_987_;
v___y_882_ = v_lhs_986_;
v___y_883_ = v___y_988_;
v___y_884_ = v___y_989_;
v___y_885_ = v___y_990_;
v___y_886_ = v___y_991_;
goto v___jp_878_;
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec_ref(v_rhs_987_);
lean_dec_ref(v_heq_984_);
lean_dec_ref(v___y_983_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v___x_994_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__37, &l_Lean_MVarId_rewrite___lam__1___closed__37_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__37);
v___x_995_ = l_Lean_MessageData_ofExpr(v_lhs_986_);
v___x_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__39, &l_Lean_MVarId_rewrite___lam__1___closed__39_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__39);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Lean_indentExpr(v_heqType_985_);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v___x_1000_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
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
v___jp_1010_:
{
lean_object* v___x_1017_; 
lean_inc_ref(v_heqType_1012_);
v___x_1017_ = l_Lean_Meta_matchEq_x3f(v_heqType_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref(v___x_1017_);
if (lean_obj_tag(v_a_1018_) == 0)
{
lean_object* v___x_1019_; 
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
lean_inc_ref(v_heqType_1012_);
v___x_1019_ = l_Lean_Meta_isProp(v_heqType_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; uint8_t v___x_1021_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref(v___x_1019_);
v___x_1021_ = lean_unbox(v_a_1020_);
lean_dec(v_a_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__40, &l_Lean_MVarId_rewrite___lam__1___closed__40_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__40);
v___y_535_ = v___y_1015_;
v___y_536_ = v___y_1016_;
v___y_537_ = v_heq_1011_;
v___y_538_ = v___y_1013_;
v___y_539_ = v___y_1014_;
v___y_540_ = v_heqType_1012_;
v___y_541_ = v___x_1022_;
goto v___jp_534_;
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__41, &l_Lean_MVarId_rewrite___lam__1___closed__41_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__41);
v___y_535_ = v___y_1015_;
v___y_536_ = v___y_1016_;
v___y_537_ = v_heq_1011_;
v___y_538_ = v___y_1013_;
v___y_539_ = v___y_1014_;
v___y_540_ = v_heqType_1012_;
v___y_541_ = v___x_1023_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec_ref(v_heqType_1012_);
lean_dec_ref(v_heq_1011_);
v_a_1024_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1019_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1019_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_val_1032_; lean_object* v_snd_1033_; 
v_val_1032_ = lean_ctor_get(v_a_1018_, 0);
lean_inc(v_val_1032_);
lean_dec_ref(v_a_1018_);
v_snd_1033_ = lean_ctor_get(v_val_1032_, 1);
lean_inc(v_snd_1033_);
if (v_symm_528_ == 0)
{
lean_object* v_fst_1034_; lean_object* v_fst_1035_; lean_object* v_snd_1036_; 
v_fst_1034_ = lean_ctor_get(v_val_1032_, 0);
lean_inc(v_fst_1034_);
lean_dec(v_val_1032_);
v_fst_1035_ = lean_ctor_get(v_snd_1033_, 0);
lean_inc(v_fst_1035_);
v_snd_1036_ = lean_ctor_get(v_snd_1033_, 1);
lean_inc(v_snd_1036_);
lean_dec(v_snd_1033_);
v___y_983_ = v_fst_1034_;
v_heq_984_ = v_heq_1011_;
v_heqType_985_ = v_heqType_1012_;
v_lhs_986_ = v_fst_1035_;
v_rhs_987_ = v_snd_1036_;
v___y_988_ = v___y_1013_;
v___y_989_ = v___y_1014_;
v___y_990_ = v___y_1015_;
v___y_991_ = v___y_1016_;
goto v___jp_982_;
}
else
{
lean_object* v_fst_1037_; lean_object* v_fst_1038_; lean_object* v_snd_1039_; lean_object* v___x_1040_; 
lean_dec_ref(v_heqType_1012_);
v_fst_1037_ = lean_ctor_get(v_val_1032_, 0);
lean_inc(v_fst_1037_);
lean_dec(v_val_1032_);
v_fst_1038_ = lean_ctor_get(v_snd_1033_, 0);
lean_inc(v_fst_1038_);
v_snd_1039_ = lean_ctor_get(v_snd_1033_, 1);
lean_inc(v_snd_1039_);
lean_dec(v_snd_1033_);
v___x_1040_ = l_Lean_Meta_mkEqSymm(v_heq_1011_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref(v___x_1040_);
lean_inc(v_fst_1038_);
lean_inc(v_snd_1039_);
v___x_1042_ = l_Lean_Meta_mkEq(v_snd_1039_, v_fst_1038_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___y_983_ = v_fst_1037_;
v_heq_984_ = v_a_1041_;
v_heqType_985_ = v_a_1043_;
v_lhs_986_ = v_snd_1039_;
v_rhs_987_ = v_fst_1038_;
v___y_988_ = v___y_1013_;
v___y_989_ = v___y_1014_;
v___y_990_ = v___y_1015_;
v___y_991_ = v___y_1016_;
goto v___jp_982_;
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
lean_dec(v_a_1041_);
lean_dec(v_snd_1039_);
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1044_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1042_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1042_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec(v_snd_1039_);
lean_dec(v_fst_1038_);
lean_dec(v_fst_1037_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1052_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1040_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1040_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
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
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec_ref(v_heqType_1012_);
lean_dec_ref(v_heq_1011_);
lean_del_object(v___x_582_);
lean_dec(v_fst_579_);
lean_del_object(v___x_577_);
lean_dec(v_fst_575_);
lean_del_object(v___x_568_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1060_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1017_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1017_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_del_object(v___x_568_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1089_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_572_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_572_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1098_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_563_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_563_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec_ref(v_config_527_);
lean_dec_ref(v_e_526_);
lean_dec_ref(v_heq_525_);
lean_dec(v___x_524_);
lean_dec(v_mvarId_523_);
v_a_1106_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_562_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_562_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
v___jp_534_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_542_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__1, &l_Lean_MVarId_rewrite___lam__1___closed__1_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__1);
v___x_543_ = lean_unsigned_to_nat(30u);
v___x_544_ = l_Lean_inlineExpr(v___y_537_, v___x_543_);
v___x_545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_542_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_obj_once(&l_Lean_MVarId_rewrite___lam__1___closed__3, &l_Lean_MVarId_rewrite___lam__1___closed__3_once, _init_l_Lean_MVarId_rewrite___lam__1___closed__3);
v___x_547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_545_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
lean_inc_ref(v___y_541_);
v___x_548_ = l_Lean_stringToMessageData(v___y_541_);
v___x_549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = l_Lean_indentExpr(v___y_540_);
v___x_551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v___x_551_, v___y_538_, v___y_539_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
return v___x_552_;
}
v___jp_553_:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_558_ = l_Array_append___redArg(v___y_556_, v___y_557_);
lean_dec_ref(v___y_557_);
v___x_559_ = lean_array_to_list(v___x_558_);
v___x_560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_560_, 0, v___y_554_);
lean_ctor_set(v___x_560_, 1, v___y_555_);
lean_ctor_set(v___x_560_, 2, v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___lam__1___boxed(lean_object* v_mvarId_1114_, lean_object* v___x_1115_, lean_object* v_heq_1116_, lean_object* v_e_1117_, lean_object* v_config_1118_, lean_object* v_symm_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v_symm_boxed_1125_; lean_object* v_res_1126_; 
v_symm_boxed_1125_ = lean_unbox(v_symm_1119_);
v_res_1126_ = l_Lean_MVarId_rewrite___lam__1(v_mvarId_1114_, v___x_1115_, v_heq_1116_, v_e_1117_, v_config_1118_, v_symm_boxed_1125_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
return v_res_1126_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___closed__0(void){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_mk_string_unchecked("rewrite", 7, 7);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_MVarId_rewrite___closed__1(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_obj_once(&l_Lean_MVarId_rewrite___closed__0, &l_Lean_MVarId_rewrite___closed__0_once, _init_l_Lean_MVarId_rewrite___closed__0);
v___x_1129_ = l_Lean_Name_mkStr1(v___x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite(lean_object* v_mvarId_1130_, lean_object* v_e_1131_, lean_object* v_heq_1132_, uint8_t v_symm_1133_, lean_object* v_config_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___f_1142_; lean_object* v___x_1143_; 
v___x_1140_ = lean_obj_once(&l_Lean_MVarId_rewrite___closed__1, &l_Lean_MVarId_rewrite___closed__1_once, _init_l_Lean_MVarId_rewrite___closed__1);
v___x_1141_ = lean_box(v_symm_1133_);
lean_inc(v_mvarId_1130_);
v___f_1142_ = lean_alloc_closure((void*)(l_Lean_MVarId_rewrite___lam__1___boxed), 11, 6);
lean_closure_set(v___f_1142_, 0, v_mvarId_1130_);
lean_closure_set(v___f_1142_, 1, v___x_1140_);
lean_closure_set(v___f_1142_, 2, v_heq_1132_);
lean_closure_set(v___f_1142_, 3, v_e_1131_);
lean_closure_set(v___f_1142_, 4, v_config_1134_);
lean_closure_set(v___f_1142_, 5, v___x_1141_);
v___x_1143_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_rewrite_spec__9___redArg(v_mvarId_1130_, v___f_1142_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_rewrite___boxed(lean_object* v_mvarId_1144_, lean_object* v_e_1145_, lean_object* v_heq_1146_, lean_object* v_symm_1147_, lean_object* v_config_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
uint8_t v_symm_boxed_1154_; lean_object* v_res_1155_; 
v_symm_boxed_1154_ = lean_unbox(v_symm_1147_);
v_res_1155_ = l_Lean_MVarId_rewrite(v_mvarId_1144_, v_e_1145_, v_heq_1146_, v_symm_boxed_1154_, v_config_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(lean_object* v_mvarId_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___redArg(v_mvarId_1156_, v___y_1158_, v___y_1160_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0___boxed(lean_object* v_mvarId_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0(v_mvarId_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v_mvarId_1163_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(lean_object* v_00_u03b1_1170_, lean_object* v_msg_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___redArg(v_msg_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_msg_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_throwError___at___00Lean_MVarId_rewrite_spec__2(v_00_u03b1_1178_, v_msg_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(lean_object* v_00_u03b1_1186_, lean_object* v_name_1187_, uint8_t v_bi_1188_, lean_object* v_type_1189_, lean_object* v_k_1190_, uint8_t v_kind_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___redArg(v_name_1187_, v_bi_1188_, v_type_1189_, v_k_1190_, v_kind_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11___boxed(lean_object* v_00_u03b1_1198_, lean_object* v_name_1199_, lean_object* v_bi_1200_, lean_object* v_type_1201_, lean_object* v_k_1202_, lean_object* v_kind_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
uint8_t v_bi_boxed_1209_; uint8_t v_kind_boxed_1210_; lean_object* v_res_1211_; 
v_bi_boxed_1209_ = lean_unbox(v_bi_1200_);
v_kind_boxed_1210_ = lean_unbox(v_kind_1203_);
v_res_1211_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8_spec__11(v_00_u03b1_1198_, v_name_1199_, v_bi_boxed_1209_, v_type_1201_, v_k_1202_, v_kind_boxed_1210_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(lean_object* v_00_u03b1_1212_, lean_object* v_name_1213_, lean_object* v_type_1214_, lean_object* v_k_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___redArg(v_name_1213_, v_type_1214_, v_k_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8___boxed(lean_object* v_00_u03b1_1222_, lean_object* v_name_1223_, lean_object* v_type_1224_, lean_object* v_k_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_Meta_withLocalDeclD___at___00Lean_MVarId_rewrite_spec__8(v_00_u03b1_1222_, v_name_1223_, v_type_1224_, v_k_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1231_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(lean_object* v_00_u03b2_1232_, lean_object* v_x_1233_, lean_object* v_x_1234_){
_start:
{
uint8_t v___x_1235_; 
v___x_1235_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___redArg(v_x_1233_, v_x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1236_, lean_object* v_x_1237_, lean_object* v_x_1238_){
_start:
{
uint8_t v_res_1239_; lean_object* v_r_1240_; 
v_res_1239_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0(v_00_u03b2_1236_, v_x_1237_, v_x_1238_);
lean_dec(v_x_1238_);
lean_dec_ref(v_x_1237_);
v_r_1240_ = lean_box(v_res_1239_);
return v_r_1240_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_1241_, lean_object* v_x_1242_, size_t v_x_1243_, lean_object* v_x_1244_){
_start:
{
uint8_t v___x_1245_; 
v___x_1245_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___redArg(v_x_1242_, v_x_1243_, v_x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_, lean_object* v_x_1249_){
_start:
{
size_t v_x_20170__boxed_1250_; uint8_t v_res_1251_; lean_object* v_r_1252_; 
v_x_20170__boxed_1250_ = lean_unbox_usize(v_x_1248_);
lean_dec(v_x_1248_);
v_res_1251_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4(v_00_u03b2_1246_, v_x_1247_, v_x_20170__boxed_1250_, v_x_1249_);
lean_dec(v_x_1249_);
lean_dec_ref(v_x_1247_);
v_r_1252_ = lean_box(v_res_1251_);
return v_r_1252_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(lean_object* v_00_u03b2_1253_, lean_object* v_keys_1254_, lean_object* v_vals_1255_, lean_object* v_heq_1256_, lean_object* v_i_1257_, lean_object* v_k_1258_){
_start:
{
uint8_t v___x_1259_; 
v___x_1259_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___redArg(v_keys_1254_, v_i_1257_, v_k_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13___boxed(lean_object* v_00_u03b2_1260_, lean_object* v_keys_1261_, lean_object* v_vals_1262_, lean_object* v_heq_1263_, lean_object* v_i_1264_, lean_object* v_k_1265_){
_start:
{
uint8_t v_res_1266_; lean_object* v_r_1267_; 
v_res_1266_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_rewrite_spec__0_spec__0_spec__4_spec__13(v_00_u03b2_1260_, v_keys_1261_, v_vals_1262_, v_heq_1263_, v_i_1264_, v_k_1265_);
lean_dec(v_k_1265_);
lean_dec_ref(v_vals_1262_);
lean_dec_ref(v_keys_1261_);
v_r_1267_ = lean_box(v_res_1266_);
return v_r_1267_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_BinderNameHint(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_BinderNameHint(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_BinderNameHint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
