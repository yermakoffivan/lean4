// Lean compiler output
// Module: Lean.Meta.Closure
// Imports: public import Lean.Meta.Check public import Lean.Meta.Tactic.AuxLemma import Lean.Util.ForEachExpr
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
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Level_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement;
static lean_once_cell_t l_Lean_Meta_Closure_visitLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_visitLevel___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_visitLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_visitLevel___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_visitExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_visitExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_visitExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_visitExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__2;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__3;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__4;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__5;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__6;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__7;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__8;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__9;
static lean_once_cell_t l_Lean_Meta_Closure_mkBinding___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkBinding___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__2;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__3;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__4;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__5;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2_, 0, v___x_1_);
lean_ctor_set(v___x_2_, 1, v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0, &l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_once, _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_visitLevel___closed__0(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_closure((void*)(l_Lean_Level_beq___boxed), 2, 0);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_visitLevel___closed__1(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_closure((void*)(l_Lean_Level_hash___boxed), 1, 0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object* v_f_7_, lean_object* v_u_8_, uint8_t v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
uint8_t v___x_64_; 
v___x_64_ = l_Lean_Level_hasMVar(v_u_8_);
if (v___x_64_ == 0)
{
uint8_t v___x_65_; 
v___x_65_ = l_Lean_Level_hasParam(v_u_8_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; 
lean_dec_ref(v_f_7_);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v_u_8_);
return v___x_66_;
}
else
{
goto v___jp_16_;
}
}
else
{
goto v___jp_16_;
}
v___jp_16_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v_visitedLevel_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_17_ = lean_st_ref_get(v_a_14_);
lean_dec(v___x_17_);
v___x_18_ = lean_st_ref_get(v_a_10_);
v_visitedLevel_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc_ref(v_visitedLevel_19_);
lean_dec(v___x_18_);
v___x_20_ = lean_obj_once(&l_Lean_Meta_Closure_visitLevel___closed__0, &l_Lean_Meta_Closure_visitLevel___closed__0_once, _init_l_Lean_Meta_Closure_visitLevel___closed__0);
v___x_21_ = lean_obj_once(&l_Lean_Meta_Closure_visitLevel___closed__1, &l_Lean_Meta_Closure_visitLevel___closed__1_once, _init_l_Lean_Meta_Closure_visitLevel___closed__1);
lean_inc(v_u_8_);
v___x_22_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_20_, v___x_21_, v_visitedLevel_19_, v_u_8_);
lean_dec_ref(v_visitedLevel_19_);
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_box(v_a_9_);
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc(v_u_8_);
v___x_24_ = lean_apply_8(v_f_7_, v_u_8_, v___x_23_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_24_) == 0)
{
lean_object* v_a_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_55_; 
v_a_25_ = lean_ctor_get(v___x_24_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_24_);
if (v_isSharedCheck_55_ == 0)
{
v___x_27_ = v___x_24_;
v_isShared_28_ = v_isSharedCheck_55_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_a_25_);
lean_dec(v___x_24_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_55_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v_visitedLevel_31_; lean_object* v_visitedExpr_32_; lean_object* v_levelParams_33_; lean_object* v_nextLevelIdx_34_; lean_object* v_levelArgs_35_; lean_object* v_newLocalDecls_36_; lean_object* v_newLocalDeclsForMVars_37_; lean_object* v_newLetDecls_38_; lean_object* v_nextExprIdx_39_; lean_object* v_exprMVarArgs_40_; lean_object* v_exprFVarArgs_41_; lean_object* v_toProcess_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_54_; 
v___x_29_ = lean_st_ref_get(v_a_14_);
lean_dec(v___x_29_);
v___x_30_ = lean_st_ref_take(v_a_10_);
v_visitedLevel_31_ = lean_ctor_get(v___x_30_, 0);
v_visitedExpr_32_ = lean_ctor_get(v___x_30_, 1);
v_levelParams_33_ = lean_ctor_get(v___x_30_, 2);
v_nextLevelIdx_34_ = lean_ctor_get(v___x_30_, 3);
v_levelArgs_35_ = lean_ctor_get(v___x_30_, 4);
v_newLocalDecls_36_ = lean_ctor_get(v___x_30_, 5);
v_newLocalDeclsForMVars_37_ = lean_ctor_get(v___x_30_, 6);
v_newLetDecls_38_ = lean_ctor_get(v___x_30_, 7);
v_nextExprIdx_39_ = lean_ctor_get(v___x_30_, 8);
v_exprMVarArgs_40_ = lean_ctor_get(v___x_30_, 9);
v_exprFVarArgs_41_ = lean_ctor_get(v___x_30_, 10);
v_toProcess_42_ = lean_ctor_get(v___x_30_, 11);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_54_ == 0)
{
v___x_44_ = v___x_30_;
v_isShared_45_ = v_isSharedCheck_54_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_toProcess_42_);
lean_inc(v_exprFVarArgs_41_);
lean_inc(v_exprMVarArgs_40_);
lean_inc(v_nextExprIdx_39_);
lean_inc(v_newLetDecls_38_);
lean_inc(v_newLocalDeclsForMVars_37_);
lean_inc(v_newLocalDecls_36_);
lean_inc(v_levelArgs_35_);
lean_inc(v_nextLevelIdx_34_);
lean_inc(v_levelParams_33_);
lean_inc(v_visitedExpr_32_);
lean_inc(v_visitedLevel_31_);
lean_dec(v___x_30_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_54_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v___x_46_; lean_object* v___x_48_; 
lean_inc(v_a_25_);
v___x_46_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_20_, v___x_21_, v_visitedLevel_31_, v_u_8_, v_a_25_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_visitedExpr_32_);
lean_ctor_set(v_reuseFailAlloc_53_, 2, v_levelParams_33_);
lean_ctor_set(v_reuseFailAlloc_53_, 3, v_nextLevelIdx_34_);
lean_ctor_set(v_reuseFailAlloc_53_, 4, v_levelArgs_35_);
lean_ctor_set(v_reuseFailAlloc_53_, 5, v_newLocalDecls_36_);
lean_ctor_set(v_reuseFailAlloc_53_, 6, v_newLocalDeclsForMVars_37_);
lean_ctor_set(v_reuseFailAlloc_53_, 7, v_newLetDecls_38_);
lean_ctor_set(v_reuseFailAlloc_53_, 8, v_nextExprIdx_39_);
lean_ctor_set(v_reuseFailAlloc_53_, 9, v_exprMVarArgs_40_);
lean_ctor_set(v_reuseFailAlloc_53_, 10, v_exprFVarArgs_41_);
lean_ctor_set(v_reuseFailAlloc_53_, 11, v_toProcess_42_);
v___x_48_ = v_reuseFailAlloc_53_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_st_ref_set(v_a_10_, v___x_48_);
if (v_isShared_28_ == 0)
{
v___x_51_ = v___x_27_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_25_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
}
else
{
lean_dec(v_u_8_);
return v___x_24_;
}
}
else
{
lean_object* v_val_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
lean_dec(v_u_8_);
lean_dec_ref(v_f_7_);
v_val_56_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_22_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_val_56_);
lean_dec(v___x_22_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 0);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_val_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object* v_f_67_, lean_object* v_u_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
uint8_t v_a_boxed_76_; lean_object* v_res_77_; 
v_a_boxed_76_ = lean_unbox(v_a_69_);
v_res_77_ = l_Lean_Meta_Closure_visitLevel(v_f_67_, v_u_68_, v_a_boxed_76_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
return v_res_77_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_visitExpr___closed__0(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_beq___boxed), 2, 0);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_visitExpr___closed__1(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_hash___boxed), 1, 0);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object* v_f_80_, lean_object* v_e_81_, uint8_t v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
uint8_t v___x_137_; 
v___x_137_ = l_Lean_Expr_hasLevelParam(v_e_81_);
if (v___x_137_ == 0)
{
uint8_t v___x_138_; 
v___x_138_ = l_Lean_Expr_hasFVar(v_e_81_);
if (v___x_138_ == 0)
{
uint8_t v___x_139_; 
v___x_139_ = l_Lean_Expr_hasMVar(v_e_81_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; 
lean_dec_ref(v_f_80_);
v___x_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_140_, 0, v_e_81_);
return v___x_140_;
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
v___jp_89_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v_visitedExpr_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_90_ = lean_st_ref_get(v_a_87_);
lean_dec(v___x_90_);
v___x_91_ = lean_st_ref_get(v_a_83_);
v_visitedExpr_92_ = lean_ctor_get(v___x_91_, 1);
lean_inc_ref(v_visitedExpr_92_);
lean_dec(v___x_91_);
v___x_93_ = lean_obj_once(&l_Lean_Meta_Closure_visitExpr___closed__0, &l_Lean_Meta_Closure_visitExpr___closed__0_once, _init_l_Lean_Meta_Closure_visitExpr___closed__0);
v___x_94_ = lean_obj_once(&l_Lean_Meta_Closure_visitExpr___closed__1, &l_Lean_Meta_Closure_visitExpr___closed__1_once, _init_l_Lean_Meta_Closure_visitExpr___closed__1);
lean_inc_ref(v_e_81_);
v___x_95_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_93_, v___x_94_, v_visitedExpr_92_, v_e_81_);
lean_dec_ref(v_visitedExpr_92_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_box(v_a_82_);
lean_inc(v_a_87_);
lean_inc_ref(v_a_86_);
lean_inc(v_a_85_);
lean_inc_ref(v_a_84_);
lean_inc(v_a_83_);
lean_inc_ref(v_e_81_);
v___x_97_ = lean_apply_8(v_f_80_, v_e_81_, v___x_96_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, lean_box(0));
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_128_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_128_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_128_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_128_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_visitedLevel_104_; lean_object* v_visitedExpr_105_; lean_object* v_levelParams_106_; lean_object* v_nextLevelIdx_107_; lean_object* v_levelArgs_108_; lean_object* v_newLocalDecls_109_; lean_object* v_newLocalDeclsForMVars_110_; lean_object* v_newLetDecls_111_; lean_object* v_nextExprIdx_112_; lean_object* v_exprMVarArgs_113_; lean_object* v_exprFVarArgs_114_; lean_object* v_toProcess_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_127_; 
v___x_102_ = lean_st_ref_get(v_a_87_);
lean_dec(v___x_102_);
v___x_103_ = lean_st_ref_take(v_a_83_);
v_visitedLevel_104_ = lean_ctor_get(v___x_103_, 0);
v_visitedExpr_105_ = lean_ctor_get(v___x_103_, 1);
v_levelParams_106_ = lean_ctor_get(v___x_103_, 2);
v_nextLevelIdx_107_ = lean_ctor_get(v___x_103_, 3);
v_levelArgs_108_ = lean_ctor_get(v___x_103_, 4);
v_newLocalDecls_109_ = lean_ctor_get(v___x_103_, 5);
v_newLocalDeclsForMVars_110_ = lean_ctor_get(v___x_103_, 6);
v_newLetDecls_111_ = lean_ctor_get(v___x_103_, 7);
v_nextExprIdx_112_ = lean_ctor_get(v___x_103_, 8);
v_exprMVarArgs_113_ = lean_ctor_get(v___x_103_, 9);
v_exprFVarArgs_114_ = lean_ctor_get(v___x_103_, 10);
v_toProcess_115_ = lean_ctor_get(v___x_103_, 11);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_127_ == 0)
{
v___x_117_ = v___x_103_;
v_isShared_118_ = v_isSharedCheck_127_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_toProcess_115_);
lean_inc(v_exprFVarArgs_114_);
lean_inc(v_exprMVarArgs_113_);
lean_inc(v_nextExprIdx_112_);
lean_inc(v_newLetDecls_111_);
lean_inc(v_newLocalDeclsForMVars_110_);
lean_inc(v_newLocalDecls_109_);
lean_inc(v_levelArgs_108_);
lean_inc(v_nextLevelIdx_107_);
lean_inc(v_levelParams_106_);
lean_inc(v_visitedExpr_105_);
lean_inc(v_visitedLevel_104_);
lean_dec(v___x_103_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_127_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_121_; 
lean_inc(v_a_98_);
v___x_119_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_93_, v___x_94_, v_visitedExpr_105_, v_e_81_, v_a_98_);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_119_);
v___x_121_ = v___x_117_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_visitedLevel_104_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v_levelParams_106_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v_nextLevelIdx_107_);
lean_ctor_set(v_reuseFailAlloc_126_, 4, v_levelArgs_108_);
lean_ctor_set(v_reuseFailAlloc_126_, 5, v_newLocalDecls_109_);
lean_ctor_set(v_reuseFailAlloc_126_, 6, v_newLocalDeclsForMVars_110_);
lean_ctor_set(v_reuseFailAlloc_126_, 7, v_newLetDecls_111_);
lean_ctor_set(v_reuseFailAlloc_126_, 8, v_nextExprIdx_112_);
lean_ctor_set(v_reuseFailAlloc_126_, 9, v_exprMVarArgs_113_);
lean_ctor_set(v_reuseFailAlloc_126_, 10, v_exprFVarArgs_114_);
lean_ctor_set(v_reuseFailAlloc_126_, 11, v_toProcess_115_);
v___x_121_ = v_reuseFailAlloc_126_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_122_ = lean_st_ref_set(v_a_83_, v___x_121_);
if (v_isShared_101_ == 0)
{
v___x_124_ = v___x_100_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_98_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_81_);
return v___x_97_;
}
}
else
{
lean_object* v_val_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec_ref(v_e_81_);
lean_dec_ref(v_f_80_);
v_val_129_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_95_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_val_129_);
lean_dec(v___x_95_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
lean_ctor_set_tag(v___x_131_, 0);
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_val_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object* v_f_141_, lean_object* v_e_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
uint8_t v_a_boxed_150_; lean_object* v_res_151_; 
v_a_boxed_150_ = lean_unbox(v_a_143_);
v_res_151_ = l_Lean_Meta_Closure_visitExpr(v_f_141_, v_e_142_, v_a_boxed_150_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
return v_res_151_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_mk_string_unchecked("u", 1, 1);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_obj_once(&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0, &l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_once, _init_l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0);
v___x_154_ = l_Lean_Name_mkStr1(v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object* v_u_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_nextLevelIdx_163_; lean_object* v_visitedLevel_164_; lean_object* v_visitedExpr_165_; lean_object* v_levelParams_166_; lean_object* v_nextLevelIdx_167_; lean_object* v_levelArgs_168_; lean_object* v_newLocalDecls_169_; lean_object* v_newLocalDeclsForMVars_170_; lean_object* v_newLetDecls_171_; lean_object* v_nextExprIdx_172_; lean_object* v_exprMVarArgs_173_; lean_object* v_exprFVarArgs_174_; lean_object* v_toProcess_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_191_; 
v___x_159_ = lean_st_ref_get(v_a_157_);
lean_dec(v___x_159_);
v___x_160_ = lean_st_ref_get(v_a_156_);
v___x_161_ = lean_st_ref_get(v_a_157_);
lean_dec(v___x_161_);
v___x_162_ = lean_st_ref_take(v_a_156_);
v_nextLevelIdx_163_ = lean_ctor_get(v___x_160_, 3);
lean_inc(v_nextLevelIdx_163_);
lean_dec(v___x_160_);
v_visitedLevel_164_ = lean_ctor_get(v___x_162_, 0);
v_visitedExpr_165_ = lean_ctor_get(v___x_162_, 1);
v_levelParams_166_ = lean_ctor_get(v___x_162_, 2);
v_nextLevelIdx_167_ = lean_ctor_get(v___x_162_, 3);
v_levelArgs_168_ = lean_ctor_get(v___x_162_, 4);
v_newLocalDecls_169_ = lean_ctor_get(v___x_162_, 5);
v_newLocalDeclsForMVars_170_ = lean_ctor_get(v___x_162_, 6);
v_newLetDecls_171_ = lean_ctor_get(v___x_162_, 7);
v_nextExprIdx_172_ = lean_ctor_get(v___x_162_, 8);
v_exprMVarArgs_173_ = lean_ctor_get(v___x_162_, 9);
v_exprFVarArgs_174_ = lean_ctor_get(v___x_162_, 10);
v_toProcess_175_ = lean_ctor_get(v___x_162_, 11);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_191_ == 0)
{
v___x_177_ = v___x_162_;
v_isShared_178_ = v_isSharedCheck_191_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_toProcess_175_);
lean_inc(v_exprFVarArgs_174_);
lean_inc(v_exprMVarArgs_173_);
lean_inc(v_nextExprIdx_172_);
lean_inc(v_newLetDecls_171_);
lean_inc(v_newLocalDeclsForMVars_170_);
lean_inc(v_newLocalDecls_169_);
lean_inc(v_levelArgs_168_);
lean_inc(v_nextLevelIdx_167_);
lean_inc(v_levelParams_166_);
lean_inc(v_visitedExpr_165_);
lean_inc(v_visitedLevel_164_);
lean_dec(v___x_162_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_191_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_179_ = lean_obj_once(&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1, &l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_once, _init_l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1);
v___x_180_ = lean_name_append_index_after(v___x_179_, v_nextLevelIdx_163_);
lean_inc(v___x_180_);
v___x_181_ = lean_array_push(v_levelParams_166_, v___x_180_);
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_nat_add(v_nextLevelIdx_167_, v___x_182_);
lean_dec(v_nextLevelIdx_167_);
v___x_184_ = lean_array_push(v_levelArgs_168_, v_u_155_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 4, v___x_184_);
lean_ctor_set(v___x_177_, 3, v___x_183_);
lean_ctor_set(v___x_177_, 2, v___x_181_);
v___x_186_ = v___x_177_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_visitedLevel_164_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_visitedExpr_165_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_190_, 4, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_190_, 5, v_newLocalDecls_169_);
lean_ctor_set(v_reuseFailAlloc_190_, 6, v_newLocalDeclsForMVars_170_);
lean_ctor_set(v_reuseFailAlloc_190_, 7, v_newLetDecls_171_);
lean_ctor_set(v_reuseFailAlloc_190_, 8, v_nextExprIdx_172_);
lean_ctor_set(v_reuseFailAlloc_190_, 9, v_exprMVarArgs_173_);
lean_ctor_set(v_reuseFailAlloc_190_, 10, v_exprFVarArgs_174_);
lean_ctor_set(v_reuseFailAlloc_190_, 11, v_toProcess_175_);
v___x_186_ = v_reuseFailAlloc_190_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = lean_st_ref_set(v_a_156_, v___x_186_);
v___x_188_ = l_Lean_mkLevelParam(v___x_180_);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object* v_u_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_192_, v_a_193_, v_a_194_);
lean_dec(v_a_194_);
lean_dec(v_a_193_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object* v_u_197_, uint8_t v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_197_, v_a_199_, v_a_203_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object* v_u_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
uint8_t v_a_boxed_214_; lean_object* v_res_215_; 
v_a_boxed_214_ = lean_unbox(v_a_207_);
v_res_215_ = l_Lean_Meta_Closure_mkNewLevelParam(v_u_206_, v_a_boxed_214_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
lean_dec(v_a_208_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object* v_msg_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_panic_fn_borrowed(v___x_217_, v_msg_216_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object* v_a_219_, lean_object* v_b_220_, lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
lean_dec(v_b_220_);
lean_dec(v_a_219_);
return v_x_221_;
}
else
{
lean_object* v_key_222_; lean_object* v_value_223_; lean_object* v_tail_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_236_; 
v_key_222_ = lean_ctor_get(v_x_221_, 0);
v_value_223_ = lean_ctor_get(v_x_221_, 1);
v_tail_224_ = lean_ctor_get(v_x_221_, 2);
v_isSharedCheck_236_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_236_ == 0)
{
v___x_226_ = v_x_221_;
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_tail_224_);
lean_inc(v_value_223_);
lean_inc(v_key_222_);
lean_dec(v_x_221_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
uint8_t v___x_228_; 
v___x_228_ = lean_level_eq(v_key_222_, v_a_219_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_231_; 
v___x_229_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_219_, v_b_220_, v_tail_224_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 2, v___x_229_);
v___x_231_ = v___x_226_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_key_222_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_value_223_);
lean_ctor_set(v_reuseFailAlloc_232_, 2, v___x_229_);
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
lean_object* v___x_234_; 
lean_dec(v_value_223_);
lean_dec(v_key_222_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 1, v_b_220_);
lean_ctor_set(v___x_226_, 0, v_a_219_);
v___x_234_ = v___x_226_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_219_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_b_220_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_tail_224_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object* v_a_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
uint8_t v___x_239_; 
v___x_239_ = 0;
return v___x_239_;
}
else
{
lean_object* v_key_240_; lean_object* v_tail_241_; uint8_t v___x_242_; 
v_key_240_ = lean_ctor_get(v_x_238_, 0);
v_tail_241_ = lean_ctor_get(v_x_238_, 2);
v___x_242_ = lean_level_eq(v_key_240_, v_a_237_);
if (v___x_242_ == 0)
{
v_x_238_ = v_tail_241_;
goto _start;
}
else
{
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object* v_a_244_, lean_object* v_x_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_244_, v_x_245_);
lean_dec(v_x_245_);
lean_dec(v_a_244_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
return v_x_248_;
}
else
{
lean_object* v_key_250_; lean_object* v_value_251_; lean_object* v_tail_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_275_; 
v_key_250_ = lean_ctor_get(v_x_249_, 0);
v_value_251_ = lean_ctor_get(v_x_249_, 1);
v_tail_252_ = lean_ctor_get(v_x_249_, 2);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_249_);
if (v_isSharedCheck_275_ == 0)
{
v___x_254_ = v_x_249_;
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_tail_252_);
lean_inc(v_value_251_);
lean_inc(v_key_250_);
lean_dec(v_x_249_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; uint64_t v___x_257_; uint64_t v___x_258_; uint64_t v___x_259_; uint64_t v_fold_260_; uint64_t v___x_261_; uint64_t v___x_262_; uint64_t v___x_263_; size_t v___x_264_; size_t v___x_265_; size_t v___x_266_; size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_256_ = lean_array_get_size(v_x_248_);
v___x_257_ = l_Lean_Level_hash(v_key_250_);
v___x_258_ = 32ULL;
v___x_259_ = lean_uint64_shift_right(v___x_257_, v___x_258_);
v_fold_260_ = lean_uint64_xor(v___x_257_, v___x_259_);
v___x_261_ = 16ULL;
v___x_262_ = lean_uint64_shift_right(v_fold_260_, v___x_261_);
v___x_263_ = lean_uint64_xor(v_fold_260_, v___x_262_);
v___x_264_ = lean_uint64_to_usize(v___x_263_);
v___x_265_ = lean_usize_of_nat(v___x_256_);
v___x_266_ = ((size_t)1ULL);
v___x_267_ = lean_usize_sub(v___x_265_, v___x_266_);
v___x_268_ = lean_usize_land(v___x_264_, v___x_267_);
v___x_269_ = lean_array_uget_borrowed(v_x_248_, v___x_268_);
lean_inc(v___x_269_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 2, v___x_269_);
v___x_271_ = v___x_254_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_key_250_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_value_251_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v___x_269_);
v___x_271_ = v_reuseFailAlloc_274_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; 
v___x_272_ = lean_array_uset(v_x_248_, v___x_268_, v___x_271_);
v_x_248_ = v___x_272_;
v_x_249_ = v_tail_252_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object* v_i_276_, lean_object* v_source_277_, lean_object* v_target_278_){
_start:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_array_get_size(v_source_277_);
v___x_280_ = lean_nat_dec_lt(v_i_276_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_source_277_);
lean_dec(v_i_276_);
return v_target_278_;
}
else
{
lean_object* v_es_281_; lean_object* v___x_282_; lean_object* v_source_283_; lean_object* v_target_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_es_281_ = lean_array_fget(v_source_277_, v_i_276_);
v___x_282_ = lean_box(0);
v_source_283_ = lean_array_fset(v_source_277_, v_i_276_, v___x_282_);
v_target_284_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_target_278_, v_es_281_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_i_276_, v___x_285_);
lean_dec(v_i_276_);
v_i_276_ = v___x_286_;
v_source_277_ = v_source_283_;
v_target_278_ = v_target_284_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object* v_data_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_nbuckets_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_289_ = lean_array_get_size(v_data_288_);
v___x_290_ = lean_unsigned_to_nat(2u);
v_nbuckets_291_ = lean_nat_mul(v___x_289_, v___x_290_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_box(0);
v___x_294_ = lean_mk_array(v_nbuckets_291_, v___x_293_);
v___x_295_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v___x_292_, v_data_288_, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object* v_m_296_, lean_object* v_a_297_, lean_object* v_b_298_){
_start:
{
lean_object* v_size_299_; lean_object* v_buckets_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_343_; 
v_size_299_ = lean_ctor_get(v_m_296_, 0);
v_buckets_300_ = lean_ctor_get(v_m_296_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_m_296_);
if (v_isSharedCheck_343_ == 0)
{
v___x_302_ = v_m_296_;
v_isShared_303_ = v_isSharedCheck_343_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_buckets_300_);
lean_inc(v_size_299_);
lean_dec(v_m_296_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_343_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; uint64_t v___x_305_; uint64_t v___x_306_; uint64_t v___x_307_; uint64_t v_fold_308_; uint64_t v___x_309_; uint64_t v___x_310_; uint64_t v___x_311_; size_t v___x_312_; size_t v___x_313_; size_t v___x_314_; size_t v___x_315_; size_t v___x_316_; lean_object* v_bkt_317_; uint8_t v___x_318_; 
v___x_304_ = lean_array_get_size(v_buckets_300_);
v___x_305_ = l_Lean_Level_hash(v_a_297_);
v___x_306_ = 32ULL;
v___x_307_ = lean_uint64_shift_right(v___x_305_, v___x_306_);
v_fold_308_ = lean_uint64_xor(v___x_305_, v___x_307_);
v___x_309_ = 16ULL;
v___x_310_ = lean_uint64_shift_right(v_fold_308_, v___x_309_);
v___x_311_ = lean_uint64_xor(v_fold_308_, v___x_310_);
v___x_312_ = lean_uint64_to_usize(v___x_311_);
v___x_313_ = lean_usize_of_nat(v___x_304_);
v___x_314_ = ((size_t)1ULL);
v___x_315_ = lean_usize_sub(v___x_313_, v___x_314_);
v___x_316_ = lean_usize_land(v___x_312_, v___x_315_);
v_bkt_317_ = lean_array_uget_borrowed(v_buckets_300_, v___x_316_);
v___x_318_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_297_, v_bkt_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v_size_x27_320_; lean_object* v___x_321_; lean_object* v_buckets_x27_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_319_ = lean_unsigned_to_nat(1u);
v_size_x27_320_ = lean_nat_add(v_size_299_, v___x_319_);
lean_dec(v_size_299_);
lean_inc(v_bkt_317_);
v___x_321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_321_, 0, v_a_297_);
lean_ctor_set(v___x_321_, 1, v_b_298_);
lean_ctor_set(v___x_321_, 2, v_bkt_317_);
v_buckets_x27_322_ = lean_array_uset(v_buckets_300_, v___x_316_, v___x_321_);
v___x_323_ = lean_unsigned_to_nat(4u);
v___x_324_ = lean_nat_mul(v_size_x27_320_, v___x_323_);
v___x_325_ = lean_unsigned_to_nat(3u);
v___x_326_ = lean_nat_div(v___x_324_, v___x_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_array_get_size(v_buckets_x27_322_);
v___x_328_ = lean_nat_dec_le(v___x_326_, v___x_327_);
lean_dec(v___x_326_);
if (v___x_328_ == 0)
{
lean_object* v_val_329_; lean_object* v___x_331_; 
v_val_329_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_buckets_x27_322_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 1, v_val_329_);
lean_ctor_set(v___x_302_, 0, v_size_x27_320_);
v___x_331_ = v___x_302_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_size_x27_320_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_val_329_);
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
lean_object* v___x_334_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 1, v_buckets_x27_322_);
lean_ctor_set(v___x_302_, 0, v_size_x27_320_);
v___x_334_ = v___x_302_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_size_x27_320_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_buckets_x27_322_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
else
{
lean_object* v___x_336_; lean_object* v_buckets_x27_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
lean_inc(v_bkt_317_);
v___x_336_ = lean_box(0);
v_buckets_x27_337_ = lean_array_uset(v_buckets_300_, v___x_316_, v___x_336_);
v___x_338_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_297_, v_b_298_, v_bkt_317_);
v___x_339_ = lean_array_uset(v_buckets_x27_337_, v___x_316_, v___x_338_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 1, v___x_339_);
v___x_341_ = v___x_302_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_size_299_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object* v_a_344_, lean_object* v_x_345_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_object* v___x_346_; 
v___x_346_ = lean_box(0);
return v___x_346_;
}
else
{
lean_object* v_key_347_; lean_object* v_value_348_; lean_object* v_tail_349_; uint8_t v___x_350_; 
v_key_347_ = lean_ctor_get(v_x_345_, 0);
v_value_348_ = lean_ctor_get(v_x_345_, 1);
v_tail_349_ = lean_ctor_get(v_x_345_, 2);
v___x_350_ = lean_level_eq(v_key_347_, v_a_344_);
if (v___x_350_ == 0)
{
v_x_345_ = v_tail_349_;
goto _start;
}
else
{
lean_object* v___x_352_; 
lean_inc(v_value_348_);
v___x_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_352_, 0, v_value_348_);
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object* v_a_353_, lean_object* v_x_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_353_, v_x_354_);
lean_dec(v_x_354_);
lean_dec(v_a_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object* v_m_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_buckets_358_; lean_object* v___x_359_; uint64_t v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint64_t v_fold_363_; uint64_t v___x_364_; uint64_t v___x_365_; uint64_t v___x_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_buckets_358_ = lean_ctor_get(v_m_356_, 1);
v___x_359_ = lean_array_get_size(v_buckets_358_);
v___x_360_ = l_Lean_Level_hash(v_a_357_);
v___x_361_ = 32ULL;
v___x_362_ = lean_uint64_shift_right(v___x_360_, v___x_361_);
v_fold_363_ = lean_uint64_xor(v___x_360_, v___x_362_);
v___x_364_ = 16ULL;
v___x_365_ = lean_uint64_shift_right(v_fold_363_, v___x_364_);
v___x_366_ = lean_uint64_xor(v_fold_363_, v___x_365_);
v___x_367_ = lean_uint64_to_usize(v___x_366_);
v___x_368_ = lean_usize_of_nat(v___x_359_);
v___x_369_ = ((size_t)1ULL);
v___x_370_ = lean_usize_sub(v___x_368_, v___x_369_);
v___x_371_ = lean_usize_land(v___x_367_, v___x_370_);
v___x_372_ = lean_array_uget_borrowed(v_buckets_358_, v___x_371_);
v___x_373_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_357_, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object* v_m_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_m_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object* v_x_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v___y_382_; lean_object* v___y_383_; uint8_t v___y_384_; lean_object* v___y_390_; lean_object* v___y_391_; uint8_t v___y_392_; 
switch(lean_obj_tag(v_x_377_))
{
case 0:
{
lean_object* v___x_397_; 
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_x_377_);
return v___x_397_;
}
case 1:
{
lean_object* v_a_398_; lean_object* v_a_400_; uint8_t v___x_439_; 
v_a_398_ = lean_ctor_get(v_x_377_, 0);
v___x_439_ = l_Lean_Level_hasMVar(v_a_398_);
if (v___x_439_ == 0)
{
uint8_t v___x_440_; 
v___x_440_ = l_Lean_Level_hasParam(v_a_398_);
if (v___x_440_ == 0)
{
lean_inc(v_a_398_);
v_a_400_ = v_a_398_;
goto v___jp_399_;
}
else
{
goto v___jp_407_;
}
}
else
{
goto v___jp_407_;
}
v___jp_399_:
{
size_t v___x_401_; size_t v___x_402_; uint8_t v___x_403_; 
v___x_401_ = lean_ptr_addr(v_a_398_);
v___x_402_ = lean_ptr_addr(v_a_400_);
v___x_403_ = lean_usize_dec_eq(v___x_401_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref(v_x_377_);
v___x_404_ = l_Lean_Level_succ___override(v_a_400_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; 
lean_dec(v_a_400_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v_x_377_);
return v___x_406_;
}
}
v___jp_407_:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v_visitedLevel_410_; lean_object* v___x_411_; 
v___x_408_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_408_);
v___x_409_ = lean_st_ref_get(v_a_378_);
v_visitedLevel_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc_ref(v_visitedLevel_410_);
lean_dec(v___x_409_);
v___x_411_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_410_, v_a_398_);
lean_dec_ref(v_visitedLevel_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; 
lean_inc(v_a_398_);
v___x_412_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_398_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_visitedLevel_416_; lean_object* v_visitedExpr_417_; lean_object* v_levelParams_418_; lean_object* v_nextLevelIdx_419_; lean_object* v_levelArgs_420_; lean_object* v_newLocalDecls_421_; lean_object* v_newLocalDeclsForMVars_422_; lean_object* v_newLetDecls_423_; lean_object* v_nextExprIdx_424_; lean_object* v_exprMVarArgs_425_; lean_object* v_exprFVarArgs_426_; lean_object* v_toProcess_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_436_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref(v___x_412_);
v___x_414_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_414_);
v___x_415_ = lean_st_ref_take(v_a_378_);
v_visitedLevel_416_ = lean_ctor_get(v___x_415_, 0);
v_visitedExpr_417_ = lean_ctor_get(v___x_415_, 1);
v_levelParams_418_ = lean_ctor_get(v___x_415_, 2);
v_nextLevelIdx_419_ = lean_ctor_get(v___x_415_, 3);
v_levelArgs_420_ = lean_ctor_get(v___x_415_, 4);
v_newLocalDecls_421_ = lean_ctor_get(v___x_415_, 5);
v_newLocalDeclsForMVars_422_ = lean_ctor_get(v___x_415_, 6);
v_newLetDecls_423_ = lean_ctor_get(v___x_415_, 7);
v_nextExprIdx_424_ = lean_ctor_get(v___x_415_, 8);
v_exprMVarArgs_425_ = lean_ctor_get(v___x_415_, 9);
v_exprFVarArgs_426_ = lean_ctor_get(v___x_415_, 10);
v_toProcess_427_ = lean_ctor_get(v___x_415_, 11);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_436_ == 0)
{
v___x_429_ = v___x_415_;
v_isShared_430_ = v_isSharedCheck_436_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_toProcess_427_);
lean_inc(v_exprFVarArgs_426_);
lean_inc(v_exprMVarArgs_425_);
lean_inc(v_nextExprIdx_424_);
lean_inc(v_newLetDecls_423_);
lean_inc(v_newLocalDeclsForMVars_422_);
lean_inc(v_newLocalDecls_421_);
lean_inc(v_levelArgs_420_);
lean_inc(v_nextLevelIdx_419_);
lean_inc(v_levelParams_418_);
lean_inc(v_visitedExpr_417_);
lean_inc(v_visitedLevel_416_);
lean_dec(v___x_415_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_436_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
lean_inc(v_a_413_);
lean_inc(v_a_398_);
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_416_, v_a_398_, v_a_413_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_431_);
v___x_433_ = v___x_429_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_visitedExpr_417_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_levelParams_418_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_nextLevelIdx_419_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v_levelArgs_420_);
lean_ctor_set(v_reuseFailAlloc_435_, 5, v_newLocalDecls_421_);
lean_ctor_set(v_reuseFailAlloc_435_, 6, v_newLocalDeclsForMVars_422_);
lean_ctor_set(v_reuseFailAlloc_435_, 7, v_newLetDecls_423_);
lean_ctor_set(v_reuseFailAlloc_435_, 8, v_nextExprIdx_424_);
lean_ctor_set(v_reuseFailAlloc_435_, 9, v_exprMVarArgs_425_);
lean_ctor_set(v_reuseFailAlloc_435_, 10, v_exprFVarArgs_426_);
lean_ctor_set(v_reuseFailAlloc_435_, 11, v_toProcess_427_);
v___x_433_ = v_reuseFailAlloc_435_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; 
v___x_434_ = lean_st_ref_set(v_a_378_, v___x_433_);
v_a_400_ = v_a_413_;
goto v___jp_399_;
}
}
}
else
{
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_437_; 
v_a_437_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_437_);
lean_dec_ref(v___x_412_);
v_a_400_ = v_a_437_;
goto v___jp_399_;
}
else
{
lean_dec_ref(v_x_377_);
return v___x_412_;
}
}
}
else
{
lean_object* v_val_438_; 
v_val_438_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_val_438_);
lean_dec_ref(v___x_411_);
v_a_400_ = v_val_438_;
goto v___jp_399_;
}
}
}
case 2:
{
lean_object* v_a_441_; lean_object* v_a_442_; lean_object* v___y_444_; lean_object* v_a_445_; lean_object* v___y_453_; lean_object* v_a_486_; uint8_t v___x_521_; 
v_a_441_ = lean_ctor_get(v_x_377_, 0);
v_a_442_ = lean_ctor_get(v_x_377_, 1);
v___x_521_ = l_Lean_Level_hasMVar(v_a_441_);
if (v___x_521_ == 0)
{
uint8_t v___x_522_; 
v___x_522_ = l_Lean_Level_hasParam(v_a_441_);
if (v___x_522_ == 0)
{
lean_inc(v_a_441_);
v_a_486_ = v_a_441_;
goto v___jp_485_;
}
else
{
goto v___jp_489_;
}
}
else
{
goto v___jp_489_;
}
v___jp_443_:
{
size_t v___x_446_; size_t v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_ptr_addr(v_a_441_);
v___x_447_ = lean_ptr_addr(v___y_444_);
v___x_448_ = lean_usize_dec_eq(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
v___y_382_ = v___y_444_;
v___y_383_ = v_a_445_;
v___y_384_ = v___x_448_;
goto v___jp_381_;
}
else
{
size_t v___x_449_; size_t v___x_450_; uint8_t v___x_451_; 
v___x_449_ = lean_ptr_addr(v_a_442_);
v___x_450_ = lean_ptr_addr(v_a_445_);
v___x_451_ = lean_usize_dec_eq(v___x_449_, v___x_450_);
v___y_382_ = v___y_444_;
v___y_383_ = v_a_445_;
v___y_384_ = v___x_451_;
goto v___jp_381_;
}
}
v___jp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v_visitedLevel_456_; lean_object* v___x_457_; 
v___x_454_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_454_);
v___x_455_ = lean_st_ref_get(v_a_378_);
v_visitedLevel_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc_ref(v_visitedLevel_456_);
lean_dec(v___x_455_);
v___x_457_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_456_, v_a_442_);
lean_dec_ref(v_visitedLevel_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v___x_458_; 
lean_inc(v_a_442_);
v___x_458_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_442_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v_visitedLevel_462_; lean_object* v_visitedExpr_463_; lean_object* v_levelParams_464_; lean_object* v_nextLevelIdx_465_; lean_object* v_levelArgs_466_; lean_object* v_newLocalDecls_467_; lean_object* v_newLocalDeclsForMVars_468_; lean_object* v_newLetDecls_469_; lean_object* v_nextExprIdx_470_; lean_object* v_exprMVarArgs_471_; lean_object* v_exprFVarArgs_472_; lean_object* v_toProcess_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_482_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref(v___x_458_);
v___x_460_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_460_);
v___x_461_ = lean_st_ref_take(v_a_378_);
v_visitedLevel_462_ = lean_ctor_get(v___x_461_, 0);
v_visitedExpr_463_ = lean_ctor_get(v___x_461_, 1);
v_levelParams_464_ = lean_ctor_get(v___x_461_, 2);
v_nextLevelIdx_465_ = lean_ctor_get(v___x_461_, 3);
v_levelArgs_466_ = lean_ctor_get(v___x_461_, 4);
v_newLocalDecls_467_ = lean_ctor_get(v___x_461_, 5);
v_newLocalDeclsForMVars_468_ = lean_ctor_get(v___x_461_, 6);
v_newLetDecls_469_ = lean_ctor_get(v___x_461_, 7);
v_nextExprIdx_470_ = lean_ctor_get(v___x_461_, 8);
v_exprMVarArgs_471_ = lean_ctor_get(v___x_461_, 9);
v_exprFVarArgs_472_ = lean_ctor_get(v___x_461_, 10);
v_toProcess_473_ = lean_ctor_get(v___x_461_, 11);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_482_ == 0)
{
v___x_475_ = v___x_461_;
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_toProcess_473_);
lean_inc(v_exprFVarArgs_472_);
lean_inc(v_exprMVarArgs_471_);
lean_inc(v_nextExprIdx_470_);
lean_inc(v_newLetDecls_469_);
lean_inc(v_newLocalDeclsForMVars_468_);
lean_inc(v_newLocalDecls_467_);
lean_inc(v_levelArgs_466_);
lean_inc(v_nextLevelIdx_465_);
lean_inc(v_levelParams_464_);
lean_inc(v_visitedExpr_463_);
lean_inc(v_visitedLevel_462_);
lean_dec(v___x_461_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_479_; 
lean_inc(v_a_459_);
lean_inc(v_a_442_);
v___x_477_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_462_, v_a_442_, v_a_459_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_visitedExpr_463_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_levelParams_464_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_nextLevelIdx_465_);
lean_ctor_set(v_reuseFailAlloc_481_, 4, v_levelArgs_466_);
lean_ctor_set(v_reuseFailAlloc_481_, 5, v_newLocalDecls_467_);
lean_ctor_set(v_reuseFailAlloc_481_, 6, v_newLocalDeclsForMVars_468_);
lean_ctor_set(v_reuseFailAlloc_481_, 7, v_newLetDecls_469_);
lean_ctor_set(v_reuseFailAlloc_481_, 8, v_nextExprIdx_470_);
lean_ctor_set(v_reuseFailAlloc_481_, 9, v_exprMVarArgs_471_);
lean_ctor_set(v_reuseFailAlloc_481_, 10, v_exprFVarArgs_472_);
lean_ctor_set(v_reuseFailAlloc_481_, 11, v_toProcess_473_);
v___x_479_ = v_reuseFailAlloc_481_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; 
v___x_480_ = lean_st_ref_set(v_a_378_, v___x_479_);
v___y_444_ = v___y_453_;
v_a_445_ = v_a_459_;
goto v___jp_443_;
}
}
}
else
{
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_483_; 
v_a_483_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_483_);
lean_dec_ref(v___x_458_);
v___y_444_ = v___y_453_;
v_a_445_ = v_a_483_;
goto v___jp_443_;
}
else
{
lean_dec(v___y_453_);
lean_dec_ref(v_x_377_);
return v___x_458_;
}
}
}
else
{
lean_object* v_val_484_; 
v_val_484_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_val_484_);
lean_dec_ref(v___x_457_);
v___y_444_ = v___y_453_;
v_a_445_ = v_val_484_;
goto v___jp_443_;
}
}
v___jp_485_:
{
uint8_t v___x_487_; 
v___x_487_ = l_Lean_Level_hasMVar(v_a_442_);
if (v___x_487_ == 0)
{
uint8_t v___x_488_; 
v___x_488_ = l_Lean_Level_hasParam(v_a_442_);
if (v___x_488_ == 0)
{
lean_inc(v_a_442_);
v___y_444_ = v_a_486_;
v_a_445_ = v_a_442_;
goto v___jp_443_;
}
else
{
v___y_453_ = v_a_486_;
goto v___jp_452_;
}
}
else
{
v___y_453_ = v_a_486_;
goto v___jp_452_;
}
}
v___jp_489_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_visitedLevel_492_; lean_object* v___x_493_; 
v___x_490_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_490_);
v___x_491_ = lean_st_ref_get(v_a_378_);
v_visitedLevel_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc_ref(v_visitedLevel_492_);
lean_dec(v___x_491_);
v___x_493_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_492_, v_a_441_);
lean_dec_ref(v_visitedLevel_492_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v___x_494_; 
lean_inc(v_a_441_);
v___x_494_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_441_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v_visitedLevel_498_; lean_object* v_visitedExpr_499_; lean_object* v_levelParams_500_; lean_object* v_nextLevelIdx_501_; lean_object* v_levelArgs_502_; lean_object* v_newLocalDecls_503_; lean_object* v_newLocalDeclsForMVars_504_; lean_object* v_newLetDecls_505_; lean_object* v_nextExprIdx_506_; lean_object* v_exprMVarArgs_507_; lean_object* v_exprFVarArgs_508_; lean_object* v_toProcess_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_518_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref(v___x_494_);
v___x_496_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_496_);
v___x_497_ = lean_st_ref_take(v_a_378_);
v_visitedLevel_498_ = lean_ctor_get(v___x_497_, 0);
v_visitedExpr_499_ = lean_ctor_get(v___x_497_, 1);
v_levelParams_500_ = lean_ctor_get(v___x_497_, 2);
v_nextLevelIdx_501_ = lean_ctor_get(v___x_497_, 3);
v_levelArgs_502_ = lean_ctor_get(v___x_497_, 4);
v_newLocalDecls_503_ = lean_ctor_get(v___x_497_, 5);
v_newLocalDeclsForMVars_504_ = lean_ctor_get(v___x_497_, 6);
v_newLetDecls_505_ = lean_ctor_get(v___x_497_, 7);
v_nextExprIdx_506_ = lean_ctor_get(v___x_497_, 8);
v_exprMVarArgs_507_ = lean_ctor_get(v___x_497_, 9);
v_exprFVarArgs_508_ = lean_ctor_get(v___x_497_, 10);
v_toProcess_509_ = lean_ctor_get(v___x_497_, 11);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_518_ == 0)
{
v___x_511_ = v___x_497_;
v_isShared_512_ = v_isSharedCheck_518_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_toProcess_509_);
lean_inc(v_exprFVarArgs_508_);
lean_inc(v_exprMVarArgs_507_);
lean_inc(v_nextExprIdx_506_);
lean_inc(v_newLetDecls_505_);
lean_inc(v_newLocalDeclsForMVars_504_);
lean_inc(v_newLocalDecls_503_);
lean_inc(v_levelArgs_502_);
lean_inc(v_nextLevelIdx_501_);
lean_inc(v_levelParams_500_);
lean_inc(v_visitedExpr_499_);
lean_inc(v_visitedLevel_498_);
lean_dec(v___x_497_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_518_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_515_; 
lean_inc(v_a_495_);
lean_inc(v_a_441_);
v___x_513_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_498_, v_a_441_, v_a_495_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_513_);
v___x_515_ = v___x_511_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_visitedExpr_499_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_levelParams_500_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_nextLevelIdx_501_);
lean_ctor_set(v_reuseFailAlloc_517_, 4, v_levelArgs_502_);
lean_ctor_set(v_reuseFailAlloc_517_, 5, v_newLocalDecls_503_);
lean_ctor_set(v_reuseFailAlloc_517_, 6, v_newLocalDeclsForMVars_504_);
lean_ctor_set(v_reuseFailAlloc_517_, 7, v_newLetDecls_505_);
lean_ctor_set(v_reuseFailAlloc_517_, 8, v_nextExprIdx_506_);
lean_ctor_set(v_reuseFailAlloc_517_, 9, v_exprMVarArgs_507_);
lean_ctor_set(v_reuseFailAlloc_517_, 10, v_exprFVarArgs_508_);
lean_ctor_set(v_reuseFailAlloc_517_, 11, v_toProcess_509_);
v___x_515_ = v_reuseFailAlloc_517_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_516_; 
v___x_516_ = lean_st_ref_set(v_a_378_, v___x_515_);
v_a_486_ = v_a_495_;
goto v___jp_485_;
}
}
}
else
{
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_519_; 
v_a_519_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_519_);
lean_dec_ref(v___x_494_);
v_a_486_ = v_a_519_;
goto v___jp_485_;
}
else
{
lean_dec_ref(v_x_377_);
return v___x_494_;
}
}
}
else
{
lean_object* v_val_520_; 
v_val_520_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_val_520_);
lean_dec_ref(v___x_493_);
v_a_486_ = v_val_520_;
goto v___jp_485_;
}
}
}
case 3:
{
lean_object* v_a_523_; lean_object* v_a_524_; lean_object* v___y_526_; lean_object* v_a_527_; lean_object* v___y_535_; lean_object* v_a_568_; uint8_t v___x_603_; 
v_a_523_ = lean_ctor_get(v_x_377_, 0);
v_a_524_ = lean_ctor_get(v_x_377_, 1);
v___x_603_ = l_Lean_Level_hasMVar(v_a_523_);
if (v___x_603_ == 0)
{
uint8_t v___x_604_; 
v___x_604_ = l_Lean_Level_hasParam(v_a_523_);
if (v___x_604_ == 0)
{
lean_inc(v_a_523_);
v_a_568_ = v_a_523_;
goto v___jp_567_;
}
else
{
goto v___jp_571_;
}
}
else
{
goto v___jp_571_;
}
v___jp_525_:
{
size_t v___x_528_; size_t v___x_529_; uint8_t v___x_530_; 
v___x_528_ = lean_ptr_addr(v_a_523_);
v___x_529_ = lean_ptr_addr(v___y_526_);
v___x_530_ = lean_usize_dec_eq(v___x_528_, v___x_529_);
if (v___x_530_ == 0)
{
v___y_390_ = v_a_527_;
v___y_391_ = v___y_526_;
v___y_392_ = v___x_530_;
goto v___jp_389_;
}
else
{
size_t v___x_531_; size_t v___x_532_; uint8_t v___x_533_; 
v___x_531_ = lean_ptr_addr(v_a_524_);
v___x_532_ = lean_ptr_addr(v_a_527_);
v___x_533_ = lean_usize_dec_eq(v___x_531_, v___x_532_);
v___y_390_ = v_a_527_;
v___y_391_ = v___y_526_;
v___y_392_ = v___x_533_;
goto v___jp_389_;
}
}
v___jp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v_visitedLevel_538_; lean_object* v___x_539_; 
v___x_536_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_536_);
v___x_537_ = lean_st_ref_get(v_a_378_);
v_visitedLevel_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc_ref(v_visitedLevel_538_);
lean_dec(v___x_537_);
v___x_539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_538_, v_a_524_);
lean_dec_ref(v_visitedLevel_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v___x_540_; 
lean_inc(v_a_524_);
v___x_540_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_524_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v_visitedLevel_544_; lean_object* v_visitedExpr_545_; lean_object* v_levelParams_546_; lean_object* v_nextLevelIdx_547_; lean_object* v_levelArgs_548_; lean_object* v_newLocalDecls_549_; lean_object* v_newLocalDeclsForMVars_550_; lean_object* v_newLetDecls_551_; lean_object* v_nextExprIdx_552_; lean_object* v_exprMVarArgs_553_; lean_object* v_exprFVarArgs_554_; lean_object* v_toProcess_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_564_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref(v___x_540_);
v___x_542_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_542_);
v___x_543_ = lean_st_ref_take(v_a_378_);
v_visitedLevel_544_ = lean_ctor_get(v___x_543_, 0);
v_visitedExpr_545_ = lean_ctor_get(v___x_543_, 1);
v_levelParams_546_ = lean_ctor_get(v___x_543_, 2);
v_nextLevelIdx_547_ = lean_ctor_get(v___x_543_, 3);
v_levelArgs_548_ = lean_ctor_get(v___x_543_, 4);
v_newLocalDecls_549_ = lean_ctor_get(v___x_543_, 5);
v_newLocalDeclsForMVars_550_ = lean_ctor_get(v___x_543_, 6);
v_newLetDecls_551_ = lean_ctor_get(v___x_543_, 7);
v_nextExprIdx_552_ = lean_ctor_get(v___x_543_, 8);
v_exprMVarArgs_553_ = lean_ctor_get(v___x_543_, 9);
v_exprFVarArgs_554_ = lean_ctor_get(v___x_543_, 10);
v_toProcess_555_ = lean_ctor_get(v___x_543_, 11);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_564_ == 0)
{
v___x_557_ = v___x_543_;
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_toProcess_555_);
lean_inc(v_exprFVarArgs_554_);
lean_inc(v_exprMVarArgs_553_);
lean_inc(v_nextExprIdx_552_);
lean_inc(v_newLetDecls_551_);
lean_inc(v_newLocalDeclsForMVars_550_);
lean_inc(v_newLocalDecls_549_);
lean_inc(v_levelArgs_548_);
lean_inc(v_nextLevelIdx_547_);
lean_inc(v_levelParams_546_);
lean_inc(v_visitedExpr_545_);
lean_inc(v_visitedLevel_544_);
lean_dec(v___x_543_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_564_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
lean_inc(v_a_541_);
lean_inc(v_a_524_);
v___x_559_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_544_, v_a_524_, v_a_541_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_559_);
v___x_561_ = v___x_557_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_visitedExpr_545_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_levelParams_546_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v_nextLevelIdx_547_);
lean_ctor_set(v_reuseFailAlloc_563_, 4, v_levelArgs_548_);
lean_ctor_set(v_reuseFailAlloc_563_, 5, v_newLocalDecls_549_);
lean_ctor_set(v_reuseFailAlloc_563_, 6, v_newLocalDeclsForMVars_550_);
lean_ctor_set(v_reuseFailAlloc_563_, 7, v_newLetDecls_551_);
lean_ctor_set(v_reuseFailAlloc_563_, 8, v_nextExprIdx_552_);
lean_ctor_set(v_reuseFailAlloc_563_, 9, v_exprMVarArgs_553_);
lean_ctor_set(v_reuseFailAlloc_563_, 10, v_exprFVarArgs_554_);
lean_ctor_set(v_reuseFailAlloc_563_, 11, v_toProcess_555_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = lean_st_ref_set(v_a_378_, v___x_561_);
v___y_526_ = v___y_535_;
v_a_527_ = v_a_541_;
goto v___jp_525_;
}
}
}
else
{
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_565_; 
v_a_565_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_565_);
lean_dec_ref(v___x_540_);
v___y_526_ = v___y_535_;
v_a_527_ = v_a_565_;
goto v___jp_525_;
}
else
{
lean_dec(v___y_535_);
lean_dec_ref(v_x_377_);
return v___x_540_;
}
}
}
else
{
lean_object* v_val_566_; 
v_val_566_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_val_566_);
lean_dec_ref(v___x_539_);
v___y_526_ = v___y_535_;
v_a_527_ = v_val_566_;
goto v___jp_525_;
}
}
v___jp_567_:
{
uint8_t v___x_569_; 
v___x_569_ = l_Lean_Level_hasMVar(v_a_524_);
if (v___x_569_ == 0)
{
uint8_t v___x_570_; 
v___x_570_ = l_Lean_Level_hasParam(v_a_524_);
if (v___x_570_ == 0)
{
lean_inc(v_a_524_);
v___y_526_ = v_a_568_;
v_a_527_ = v_a_524_;
goto v___jp_525_;
}
else
{
v___y_535_ = v_a_568_;
goto v___jp_534_;
}
}
else
{
v___y_535_ = v_a_568_;
goto v___jp_534_;
}
}
v___jp_571_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v_visitedLevel_574_; lean_object* v___x_575_; 
v___x_572_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_572_);
v___x_573_ = lean_st_ref_get(v_a_378_);
v_visitedLevel_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc_ref(v_visitedLevel_574_);
lean_dec(v___x_573_);
v___x_575_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_574_, v_a_523_);
lean_dec_ref(v_visitedLevel_574_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v___x_576_; 
lean_inc(v_a_523_);
v___x_576_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_523_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_visitedLevel_580_; lean_object* v_visitedExpr_581_; lean_object* v_levelParams_582_; lean_object* v_nextLevelIdx_583_; lean_object* v_levelArgs_584_; lean_object* v_newLocalDecls_585_; lean_object* v_newLocalDeclsForMVars_586_; lean_object* v_newLetDecls_587_; lean_object* v_nextExprIdx_588_; lean_object* v_exprMVarArgs_589_; lean_object* v_exprFVarArgs_590_; lean_object* v_toProcess_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_600_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_577_);
lean_dec_ref(v___x_576_);
v___x_578_ = lean_st_ref_get(v_a_379_);
lean_dec(v___x_578_);
v___x_579_ = lean_st_ref_take(v_a_378_);
v_visitedLevel_580_ = lean_ctor_get(v___x_579_, 0);
v_visitedExpr_581_ = lean_ctor_get(v___x_579_, 1);
v_levelParams_582_ = lean_ctor_get(v___x_579_, 2);
v_nextLevelIdx_583_ = lean_ctor_get(v___x_579_, 3);
v_levelArgs_584_ = lean_ctor_get(v___x_579_, 4);
v_newLocalDecls_585_ = lean_ctor_get(v___x_579_, 5);
v_newLocalDeclsForMVars_586_ = lean_ctor_get(v___x_579_, 6);
v_newLetDecls_587_ = lean_ctor_get(v___x_579_, 7);
v_nextExprIdx_588_ = lean_ctor_get(v___x_579_, 8);
v_exprMVarArgs_589_ = lean_ctor_get(v___x_579_, 9);
v_exprFVarArgs_590_ = lean_ctor_get(v___x_579_, 10);
v_toProcess_591_ = lean_ctor_get(v___x_579_, 11);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_600_ == 0)
{
v___x_593_ = v___x_579_;
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_toProcess_591_);
lean_inc(v_exprFVarArgs_590_);
lean_inc(v_exprMVarArgs_589_);
lean_inc(v_nextExprIdx_588_);
lean_inc(v_newLetDecls_587_);
lean_inc(v_newLocalDeclsForMVars_586_);
lean_inc(v_newLocalDecls_585_);
lean_inc(v_levelArgs_584_);
lean_inc(v_nextLevelIdx_583_);
lean_inc(v_levelParams_582_);
lean_inc(v_visitedExpr_581_);
lean_inc(v_visitedLevel_580_);
lean_dec(v___x_579_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; lean_object* v___x_597_; 
lean_inc(v_a_577_);
lean_inc(v_a_523_);
v___x_595_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_580_, v_a_523_, v_a_577_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_595_);
v___x_597_ = v___x_593_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_visitedExpr_581_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_levelParams_582_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_nextLevelIdx_583_);
lean_ctor_set(v_reuseFailAlloc_599_, 4, v_levelArgs_584_);
lean_ctor_set(v_reuseFailAlloc_599_, 5, v_newLocalDecls_585_);
lean_ctor_set(v_reuseFailAlloc_599_, 6, v_newLocalDeclsForMVars_586_);
lean_ctor_set(v_reuseFailAlloc_599_, 7, v_newLetDecls_587_);
lean_ctor_set(v_reuseFailAlloc_599_, 8, v_nextExprIdx_588_);
lean_ctor_set(v_reuseFailAlloc_599_, 9, v_exprMVarArgs_589_);
lean_ctor_set(v_reuseFailAlloc_599_, 10, v_exprFVarArgs_590_);
lean_ctor_set(v_reuseFailAlloc_599_, 11, v_toProcess_591_);
v___x_597_ = v_reuseFailAlloc_599_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; 
v___x_598_ = lean_st_ref_set(v_a_378_, v___x_597_);
v_a_568_ = v_a_577_;
goto v___jp_567_;
}
}
}
else
{
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_601_; 
v_a_601_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_601_);
lean_dec_ref(v___x_576_);
v_a_568_ = v_a_601_;
goto v___jp_567_;
}
else
{
lean_dec_ref(v_x_377_);
return v___x_576_;
}
}
}
else
{
lean_object* v_val_602_; 
v_val_602_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_val_602_);
lean_dec_ref(v___x_575_);
v_a_568_ = v_val_602_;
goto v___jp_567_;
}
}
}
default: 
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_x_377_, v_a_378_, v_a_379_);
return v___x_605_;
}
}
v___jp_381_:
{
if (v___y_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec(v_x_377_);
v___x_385_ = l_Lean_mkLevelMax_x27(v___y_382_, v___y_383_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
else
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = l_Lean_simpLevelMax_x27(v___y_382_, v___y_383_, v_x_377_);
lean_dec(v_x_377_);
lean_dec(v___y_383_);
lean_dec(v___y_382_);
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
return v___x_388_;
}
}
v___jp_389_:
{
if (v___y_392_ == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec(v_x_377_);
v___x_393_ = l_Lean_mkLevelIMax_x27(v___y_391_, v___y_390_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = l_Lean_simpLevelIMax_x27(v___y_391_, v___y_390_, v_x_377_);
lean_dec(v_x_377_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object* v_x_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_606_, v_a_607_, v_a_608_);
lean_dec(v_a_608_);
lean_dec(v_a_607_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object* v_x_611_, uint8_t v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_611_, v_a_613_, v_a_617_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object* v_x_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
uint8_t v_a_boxed_628_; lean_object* v_res_629_; 
v_a_boxed_628_ = lean_unbox(v_a_621_);
v_res_629_ = l_Lean_Meta_Closure_collectLevelAux(v_x_620_, v_a_boxed_628_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
lean_dec(v_a_622_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object* v_00_u03b2_630_, lean_object* v_m_631_, lean_object* v_a_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_631_, v_a_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object* v_00_u03b2_634_, lean_object* v_m_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(v_00_u03b2_634_, v_m_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_m_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object* v_00_u03b2_638_, lean_object* v_m_639_, lean_object* v_a_640_, lean_object* v_b_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_m_639_, v_a_640_, v_b_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object* v_00_u03b2_643_, lean_object* v_a_644_, lean_object* v_x_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_644_, v_x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object* v_00_u03b2_647_, lean_object* v_a_648_, lean_object* v_x_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(v_00_u03b2_647_, v_a_648_, v_x_649_);
lean_dec(v_x_649_);
lean_dec(v_a_648_);
return v_res_650_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object* v_00_u03b2_651_, lean_object* v_a_652_, lean_object* v_x_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object* v_00_u03b2_655_, lean_object* v_a_656_, lean_object* v_x_657_){
_start:
{
uint8_t v_res_658_; lean_object* v_r_659_; 
v_res_658_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(v_00_u03b2_655_, v_a_656_, v_x_657_);
lean_dec(v_x_657_);
lean_dec(v_a_656_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object* v_00_u03b2_660_, lean_object* v_data_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_data_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object* v_00_u03b2_663_, lean_object* v_a_664_, lean_object* v_b_665_, lean_object* v_x_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_664_, v_b_665_, v_x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_668_, lean_object* v_i_669_, lean_object* v_source_670_, lean_object* v_target_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v_i_669_, v_source_670_, v_target_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_673_, lean_object* v_x_674_, lean_object* v_x_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_x_674_, v_x_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object* v_u_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
uint8_t v___x_726_; 
v___x_726_ = l_Lean_Level_hasMVar(v_u_677_);
if (v___x_726_ == 0)
{
uint8_t v___x_727_; 
v___x_727_ = l_Lean_Level_hasParam(v_u_677_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; 
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_u_677_);
return v___x_728_;
}
else
{
goto v___jp_681_;
}
}
else
{
goto v___jp_681_;
}
v___jp_681_:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_visitedLevel_684_; lean_object* v___x_685_; 
v___x_682_ = lean_st_ref_get(v_a_679_);
lean_dec(v___x_682_);
v___x_683_ = lean_st_ref_get(v_a_678_);
v_visitedLevel_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc_ref(v_visitedLevel_684_);
lean_dec(v___x_683_);
v___x_685_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_684_, v_u_677_);
lean_dec_ref(v_visitedLevel_684_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v___x_686_; 
lean_inc(v_u_677_);
v___x_686_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_u_677_, v_a_678_, v_a_679_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_717_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_717_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_717_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_717_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v_visitedLevel_693_; lean_object* v_visitedExpr_694_; lean_object* v_levelParams_695_; lean_object* v_nextLevelIdx_696_; lean_object* v_levelArgs_697_; lean_object* v_newLocalDecls_698_; lean_object* v_newLocalDeclsForMVars_699_; lean_object* v_newLetDecls_700_; lean_object* v_nextExprIdx_701_; lean_object* v_exprMVarArgs_702_; lean_object* v_exprFVarArgs_703_; lean_object* v_toProcess_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_716_; 
v___x_691_ = lean_st_ref_get(v_a_679_);
lean_dec(v___x_691_);
v___x_692_ = lean_st_ref_take(v_a_678_);
v_visitedLevel_693_ = lean_ctor_get(v___x_692_, 0);
v_visitedExpr_694_ = lean_ctor_get(v___x_692_, 1);
v_levelParams_695_ = lean_ctor_get(v___x_692_, 2);
v_nextLevelIdx_696_ = lean_ctor_get(v___x_692_, 3);
v_levelArgs_697_ = lean_ctor_get(v___x_692_, 4);
v_newLocalDecls_698_ = lean_ctor_get(v___x_692_, 5);
v_newLocalDeclsForMVars_699_ = lean_ctor_get(v___x_692_, 6);
v_newLetDecls_700_ = lean_ctor_get(v___x_692_, 7);
v_nextExprIdx_701_ = lean_ctor_get(v___x_692_, 8);
v_exprMVarArgs_702_ = lean_ctor_get(v___x_692_, 9);
v_exprFVarArgs_703_ = lean_ctor_get(v___x_692_, 10);
v_toProcess_704_ = lean_ctor_get(v___x_692_, 11);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_716_ == 0)
{
v___x_706_ = v___x_692_;
v_isShared_707_ = v_isSharedCheck_716_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_toProcess_704_);
lean_inc(v_exprFVarArgs_703_);
lean_inc(v_exprMVarArgs_702_);
lean_inc(v_nextExprIdx_701_);
lean_inc(v_newLetDecls_700_);
lean_inc(v_newLocalDeclsForMVars_699_);
lean_inc(v_newLocalDecls_698_);
lean_inc(v_levelArgs_697_);
lean_inc(v_nextLevelIdx_696_);
lean_inc(v_levelParams_695_);
lean_inc(v_visitedExpr_694_);
lean_inc(v_visitedLevel_693_);
lean_dec(v___x_692_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_716_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v___x_710_; 
lean_inc(v_a_687_);
v___x_708_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_693_, v_u_677_, v_a_687_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_708_);
v___x_710_ = v___x_706_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_708_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v_visitedExpr_694_);
lean_ctor_set(v_reuseFailAlloc_715_, 2, v_levelParams_695_);
lean_ctor_set(v_reuseFailAlloc_715_, 3, v_nextLevelIdx_696_);
lean_ctor_set(v_reuseFailAlloc_715_, 4, v_levelArgs_697_);
lean_ctor_set(v_reuseFailAlloc_715_, 5, v_newLocalDecls_698_);
lean_ctor_set(v_reuseFailAlloc_715_, 6, v_newLocalDeclsForMVars_699_);
lean_ctor_set(v_reuseFailAlloc_715_, 7, v_newLetDecls_700_);
lean_ctor_set(v_reuseFailAlloc_715_, 8, v_nextExprIdx_701_);
lean_ctor_set(v_reuseFailAlloc_715_, 9, v_exprMVarArgs_702_);
lean_ctor_set(v_reuseFailAlloc_715_, 10, v_exprFVarArgs_703_);
lean_ctor_set(v_reuseFailAlloc_715_, 11, v_toProcess_704_);
v___x_710_ = v_reuseFailAlloc_715_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = lean_st_ref_set(v_a_678_, v___x_710_);
if (v_isShared_690_ == 0)
{
v___x_713_ = v___x_689_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_687_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
else
{
lean_dec(v_u_677_);
return v___x_686_;
}
}
else
{
lean_object* v_val_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec(v_u_677_);
v_val_718_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_685_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_val_718_);
lean_dec(v___x_685_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 0);
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_val_718_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object* v_u_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec(v_a_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object* v_u_734_, uint8_t v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_734_, v_a_736_, v_a_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object* v_u_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
uint8_t v_a_boxed_751_; lean_object* v_res_752_; 
v_a_boxed_751_ = lean_unbox(v_a_744_);
v_res_752_ = l_Lean_Meta_Closure_collectLevel(v_u_743_, v_a_boxed_751_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_a_747_);
lean_dec_ref(v_a_746_);
lean_dec(v_a_745_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object* v_e_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
uint8_t v___x_757_; 
v___x_757_ = l_Lean_Expr_hasMVar(v_e_753_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v_e_753_);
return v___x_758_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v_mctx_761_; lean_object* v___x_762_; lean_object* v_fst_763_; lean_object* v_snd_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v_cache_767_; lean_object* v_zetaDeltaFVarIds_768_; lean_object* v_postponed_769_; lean_object* v_diag_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_779_; 
v___x_759_ = lean_st_ref_get(v___y_755_);
lean_dec(v___x_759_);
v___x_760_ = lean_st_ref_get(v___y_754_);
v_mctx_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc_ref(v_mctx_761_);
lean_dec(v___x_760_);
v___x_762_ = l_Lean_instantiateMVarsCore(v_mctx_761_, v_e_753_);
v_fst_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_fst_763_);
v_snd_764_ = lean_ctor_get(v___x_762_, 1);
lean_inc(v_snd_764_);
lean_dec_ref(v___x_762_);
v___x_765_ = lean_st_ref_get(v___y_755_);
lean_dec(v___x_765_);
v___x_766_ = lean_st_ref_take(v___y_754_);
v_cache_767_ = lean_ctor_get(v___x_766_, 1);
v_zetaDeltaFVarIds_768_ = lean_ctor_get(v___x_766_, 2);
v_postponed_769_ = lean_ctor_get(v___x_766_, 3);
v_diag_770_ = lean_ctor_get(v___x_766_, 4);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v___x_766_, 0);
lean_dec(v_unused_780_);
v___x_772_ = v___x_766_;
v_isShared_773_ = v_isSharedCheck_779_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_diag_770_);
lean_inc(v_postponed_769_);
lean_inc(v_zetaDeltaFVarIds_768_);
lean_inc(v_cache_767_);
lean_dec(v___x_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_779_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_snd_764_);
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_snd_764_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_cache_767_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_zetaDeltaFVarIds_768_);
lean_ctor_set(v_reuseFailAlloc_778_, 3, v_postponed_769_);
lean_ctor_set(v_reuseFailAlloc_778_, 4, v_diag_770_);
v___x_775_ = v_reuseFailAlloc_778_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_st_ref_set(v___y_754_, v___x_775_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v_fst_763_);
return v___x_777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object* v_e_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec(v___y_782_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object* v_e_786_, uint8_t v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_786_, v___y_790_, v___y_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object* v_e_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
uint8_t v___y_2320__boxed_803_; lean_object* v_res_804_; 
v___y_2320__boxed_803_ = lean_unbox(v___y_796_);
v_res_804_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(v_e_795_, v___y_2320__boxed_803_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object* v_e_805_, uint8_t v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_805_, v_a_809_, v_a_811_);
if (v_a_806_ == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc_n(v_a_814_, 2);
lean_dec_ref(v___x_813_);
v___x_815_ = l_Lean_Meta_check(v_a_814_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v___x_815_, 0);
lean_dec(v_unused_823_);
v___x_817_ = v___x_815_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_dec(v___x_815_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v_a_814_);
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_814_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_814_);
v_a_824_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_815_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_815_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
else
{
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object* v_e_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
uint8_t v_a_boxed_840_; lean_object* v_res_841_; 
v_a_boxed_840_ = lean_unbox(v_a_833_);
v_res_841_ = l_Lean_Meta_Closure_preprocess(v_e_832_, v_a_boxed_840_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
lean_dec(v_a_834_);
return v_res_841_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_mk_string_unchecked("_x", 2, 2);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_obj_once(&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0, &l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_once, _init_l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0);
v___x_844_ = l_Lean_Name_mkStr1(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object* v_a_845_, lean_object* v_a_846_){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v_visitedLevel_852_; lean_object* v_visitedExpr_853_; lean_object* v_levelParams_854_; lean_object* v_nextLevelIdx_855_; lean_object* v_levelArgs_856_; lean_object* v_newLocalDecls_857_; lean_object* v_newLocalDeclsForMVars_858_; lean_object* v_newLetDecls_859_; lean_object* v_nextExprIdx_860_; lean_object* v_exprMVarArgs_861_; lean_object* v_exprFVarArgs_862_; lean_object* v_toProcess_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_877_; 
v___x_848_ = lean_st_ref_get(v_a_846_);
lean_dec(v___x_848_);
v___x_849_ = lean_st_ref_get(v_a_845_);
v___x_850_ = lean_st_ref_get(v_a_846_);
lean_dec(v___x_850_);
v___x_851_ = lean_st_ref_take(v_a_845_);
v_visitedLevel_852_ = lean_ctor_get(v___x_851_, 0);
v_visitedExpr_853_ = lean_ctor_get(v___x_851_, 1);
v_levelParams_854_ = lean_ctor_get(v___x_851_, 2);
v_nextLevelIdx_855_ = lean_ctor_get(v___x_851_, 3);
v_levelArgs_856_ = lean_ctor_get(v___x_851_, 4);
v_newLocalDecls_857_ = lean_ctor_get(v___x_851_, 5);
v_newLocalDeclsForMVars_858_ = lean_ctor_get(v___x_851_, 6);
v_newLetDecls_859_ = lean_ctor_get(v___x_851_, 7);
v_nextExprIdx_860_ = lean_ctor_get(v___x_851_, 8);
v_exprMVarArgs_861_ = lean_ctor_get(v___x_851_, 9);
v_exprFVarArgs_862_ = lean_ctor_get(v___x_851_, 10);
v_toProcess_863_ = lean_ctor_get(v___x_851_, 11);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_877_ == 0)
{
v___x_865_ = v___x_851_;
v_isShared_866_ = v_isSharedCheck_877_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_toProcess_863_);
lean_inc(v_exprFVarArgs_862_);
lean_inc(v_exprMVarArgs_861_);
lean_inc(v_nextExprIdx_860_);
lean_inc(v_newLetDecls_859_);
lean_inc(v_newLocalDeclsForMVars_858_);
lean_inc(v_newLocalDecls_857_);
lean_inc(v_levelArgs_856_);
lean_inc(v_nextLevelIdx_855_);
lean_inc(v_levelParams_854_);
lean_inc(v_visitedExpr_853_);
lean_inc(v_visitedLevel_852_);
lean_dec(v___x_851_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_877_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_867_ = lean_unsigned_to_nat(1u);
v___x_868_ = lean_nat_add(v_nextExprIdx_860_, v___x_867_);
lean_dec(v_nextExprIdx_860_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 8, v___x_868_);
v___x_870_ = v___x_865_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_visitedLevel_852_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_visitedExpr_853_);
lean_ctor_set(v_reuseFailAlloc_876_, 2, v_levelParams_854_);
lean_ctor_set(v_reuseFailAlloc_876_, 3, v_nextLevelIdx_855_);
lean_ctor_set(v_reuseFailAlloc_876_, 4, v_levelArgs_856_);
lean_ctor_set(v_reuseFailAlloc_876_, 5, v_newLocalDecls_857_);
lean_ctor_set(v_reuseFailAlloc_876_, 6, v_newLocalDeclsForMVars_858_);
lean_ctor_set(v_reuseFailAlloc_876_, 7, v_newLetDecls_859_);
lean_ctor_set(v_reuseFailAlloc_876_, 8, v___x_868_);
lean_ctor_set(v_reuseFailAlloc_876_, 9, v_exprMVarArgs_861_);
lean_ctor_set(v_reuseFailAlloc_876_, 10, v_exprFVarArgs_862_);
lean_ctor_set(v_reuseFailAlloc_876_, 11, v_toProcess_863_);
v___x_870_ = v_reuseFailAlloc_876_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
lean_object* v___x_871_; lean_object* v_nextExprIdx_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_871_ = lean_st_ref_set(v_a_845_, v___x_870_);
v_nextExprIdx_872_ = lean_ctor_get(v___x_849_, 8);
lean_inc(v_nextExprIdx_872_);
lean_dec(v___x_849_);
v___x_873_ = lean_obj_once(&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1, &l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_once, _init_l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1);
v___x_874_ = lean_name_append_index_after(v___x_873_, v_nextExprIdx_872_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_878_, v_a_879_);
lean_dec(v_a_879_);
lean_dec(v_a_878_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_883_, v_a_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
uint8_t v_a_boxed_897_; lean_object* v_res_898_; 
v_a_boxed_897_ = lean_unbox(v_a_890_);
v_res_898_ = l_Lean_Meta_Closure_mkNextUserName(v_a_boxed_897_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
lean_dec(v_a_891_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object* v_elem_899_, lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v_visitedLevel_905_; lean_object* v_visitedExpr_906_; lean_object* v_levelParams_907_; lean_object* v_nextLevelIdx_908_; lean_object* v_levelArgs_909_; lean_object* v_newLocalDecls_910_; lean_object* v_newLocalDeclsForMVars_911_; lean_object* v_newLetDecls_912_; lean_object* v_nextExprIdx_913_; lean_object* v_exprMVarArgs_914_; lean_object* v_exprFVarArgs_915_; lean_object* v_toProcess_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_927_; 
v___x_903_ = lean_st_ref_get(v_a_901_);
lean_dec(v___x_903_);
v___x_904_ = lean_st_ref_take(v_a_900_);
v_visitedLevel_905_ = lean_ctor_get(v___x_904_, 0);
v_visitedExpr_906_ = lean_ctor_get(v___x_904_, 1);
v_levelParams_907_ = lean_ctor_get(v___x_904_, 2);
v_nextLevelIdx_908_ = lean_ctor_get(v___x_904_, 3);
v_levelArgs_909_ = lean_ctor_get(v___x_904_, 4);
v_newLocalDecls_910_ = lean_ctor_get(v___x_904_, 5);
v_newLocalDeclsForMVars_911_ = lean_ctor_get(v___x_904_, 6);
v_newLetDecls_912_ = lean_ctor_get(v___x_904_, 7);
v_nextExprIdx_913_ = lean_ctor_get(v___x_904_, 8);
v_exprMVarArgs_914_ = lean_ctor_get(v___x_904_, 9);
v_exprFVarArgs_915_ = lean_ctor_get(v___x_904_, 10);
v_toProcess_916_ = lean_ctor_get(v___x_904_, 11);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_927_ == 0)
{
v___x_918_ = v___x_904_;
v_isShared_919_ = v_isSharedCheck_927_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_toProcess_916_);
lean_inc(v_exprFVarArgs_915_);
lean_inc(v_exprMVarArgs_914_);
lean_inc(v_nextExprIdx_913_);
lean_inc(v_newLetDecls_912_);
lean_inc(v_newLocalDeclsForMVars_911_);
lean_inc(v_newLocalDecls_910_);
lean_inc(v_levelArgs_909_);
lean_inc(v_nextLevelIdx_908_);
lean_inc(v_levelParams_907_);
lean_inc(v_visitedExpr_906_);
lean_inc(v_visitedLevel_905_);
lean_dec(v___x_904_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_927_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = lean_array_push(v_toProcess_916_, v_elem_899_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 11, v___x_920_);
v___x_922_ = v___x_918_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_visitedLevel_905_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_visitedExpr_906_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_levelParams_907_);
lean_ctor_set(v_reuseFailAlloc_926_, 3, v_nextLevelIdx_908_);
lean_ctor_set(v_reuseFailAlloc_926_, 4, v_levelArgs_909_);
lean_ctor_set(v_reuseFailAlloc_926_, 5, v_newLocalDecls_910_);
lean_ctor_set(v_reuseFailAlloc_926_, 6, v_newLocalDeclsForMVars_911_);
lean_ctor_set(v_reuseFailAlloc_926_, 7, v_newLetDecls_912_);
lean_ctor_set(v_reuseFailAlloc_926_, 8, v_nextExprIdx_913_);
lean_ctor_set(v_reuseFailAlloc_926_, 9, v_exprMVarArgs_914_);
lean_ctor_set(v_reuseFailAlloc_926_, 10, v_exprFVarArgs_915_);
lean_ctor_set(v_reuseFailAlloc_926_, 11, v___x_920_);
v___x_922_ = v_reuseFailAlloc_926_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_923_ = lean_st_ref_set(v_a_900_, v___x_922_);
v___x_924_ = lean_box(0);
v___x_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object* v_elem_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec(v_a_929_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object* v_elem_933_, uint8_t v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_933_, v_a_935_, v_a_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object* v_elem_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
uint8_t v_a_boxed_950_; lean_object* v_res_951_; 
v_a_boxed_950_ = lean_unbox(v_a_943_);
v_res_951_ = l_Lean_Meta_Closure_pushToProcess(v_elem_942_, v_a_boxed_950_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
lean_dec(v_a_944_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object* v_mvarId_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_mctx_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_956_ = lean_st_ref_get(v___y_954_);
lean_dec(v___x_956_);
v___x_957_ = lean_st_ref_get(v___y_953_);
v_mctx_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc_ref(v_mctx_958_);
lean_dec(v___x_957_);
v___x_959_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_958_, v_mvarId_952_);
lean_dec_ref(v_mctx_958_);
v___x_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object* v_mvarId_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_961_, v___y_962_, v___y_963_);
lean_dec(v___y_963_);
lean_dec(v___y_962_);
lean_dec(v_mvarId_961_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object* v_mvarId_966_, uint8_t v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_966_, v___y_970_, v___y_972_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object* v_mvarId_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
uint8_t v___y_18228__boxed_983_; lean_object* v_res_984_; 
v___y_18228__boxed_983_ = lean_unbox(v___y_976_);
v_res_984_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(v_mvarId_975_, v___y_18228__boxed_983_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec(v_mvarId_975_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object* v_k_985_, uint8_t v___y_986_, lean_object* v___y_987_, lean_object* v_b_988_, lean_object* v_c_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_box(v___y_986_);
lean_inc(v___y_993_);
lean_inc_ref(v___y_992_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v___y_987_);
v___x_996_ = lean_apply_9(v_k_985_, v_b_988_, v_c_989_, v___x_995_, v___y_987_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, lean_box(0));
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object* v_k_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v_b_1000_, lean_object* v_c_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
uint8_t v___y_18251__boxed_1007_; lean_object* v_res_1008_; 
v___y_18251__boxed_1007_ = lean_unbox(v___y_998_);
v_res_1008_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(v_k_997_, v___y_18251__boxed_1007_, v___y_999_, v_b_1000_, v_c_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_999_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object* v_type_1009_, lean_object* v_maxFVars_x3f_1010_, lean_object* v_k_1011_, uint8_t v_cleanupAnnotations_1012_, uint8_t v_whnfType_1013_, uint8_t v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; 
v___x_1021_ = lean_box(v___y_1014_);
lean_inc(v___y_1015_);
v___f_1022_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1022_, 0, v_k_1011_);
lean_closure_set(v___f_1022_, 1, v___x_1021_);
lean_closure_set(v___f_1022_, 2, v___y_1015_);
v___x_1023_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1009_, v_maxFVars_x3f_1010_, v___f_1022_, v_cleanupAnnotations_1012_, v_whnfType_1013_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
if (lean_obj_tag(v___x_1023_) == 0)
{
return v___x_1023_;
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object* v_type_1032_, lean_object* v_maxFVars_x3f_1033_, lean_object* v_k_1034_, lean_object* v_cleanupAnnotations_1035_, lean_object* v_whnfType_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1044_; uint8_t v_whnfType_boxed_1045_; uint8_t v___y_18276__boxed_1046_; lean_object* v_res_1047_; 
v_cleanupAnnotations_boxed_1044_ = lean_unbox(v_cleanupAnnotations_1035_);
v_whnfType_boxed_1045_ = lean_unbox(v_whnfType_1036_);
v___y_18276__boxed_1046_ = lean_unbox(v___y_1037_);
v_res_1047_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1032_, v_maxFVars_x3f_1033_, v_k_1034_, v_cleanupAnnotations_boxed_1044_, v_whnfType_boxed_1045_, v___y_18276__boxed_1046_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object* v_00_u03b1_1048_, lean_object* v_type_1049_, lean_object* v_maxFVars_x3f_1050_, lean_object* v_k_1051_, uint8_t v_cleanupAnnotations_1052_, uint8_t v_whnfType_1053_, uint8_t v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1049_, v_maxFVars_x3f_1050_, v_k_1051_, v_cleanupAnnotations_1052_, v_whnfType_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_type_1063_, lean_object* v_maxFVars_x3f_1064_, lean_object* v_k_1065_, lean_object* v_cleanupAnnotations_1066_, lean_object* v_whnfType_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1075_; uint8_t v_whnfType_boxed_1076_; uint8_t v___y_18320__boxed_1077_; lean_object* v_res_1078_; 
v_cleanupAnnotations_boxed_1075_ = lean_unbox(v_cleanupAnnotations_1066_);
v_whnfType_boxed_1076_ = lean_unbox(v_whnfType_1067_);
v___y_18320__boxed_1077_ = lean_unbox(v___y_1068_);
v_res_1078_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(v_00_u03b1_1062_, v_type_1063_, v_maxFVars_x3f_1064_, v_k_1065_, v_cleanupAnnotations_boxed_1075_, v_whnfType_boxed_1076_, v___y_18320__boxed_1077_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object* v_a_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_box(0);
return v___x_1081_;
}
else
{
lean_object* v_key_1082_; lean_object* v_value_1083_; lean_object* v_tail_1084_; uint8_t v___x_1085_; 
v_key_1082_ = lean_ctor_get(v_x_1080_, 0);
v_value_1083_ = lean_ctor_get(v_x_1080_, 1);
v_tail_1084_ = lean_ctor_get(v_x_1080_, 2);
v___x_1085_ = l_Lean_ExprStructEq_beq(v_key_1082_, v_a_1079_);
if (v___x_1085_ == 0)
{
v_x_1080_ = v_tail_1084_;
goto _start;
}
else
{
lean_object* v___x_1087_; 
lean_inc(v_value_1083_);
v___x_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_value_1083_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1088_, v_x_1089_);
lean_dec(v_x_1089_);
lean_dec_ref(v_a_1088_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object* v_m_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_buckets_1093_; lean_object* v___x_1094_; uint64_t v___x_1095_; uint64_t v___x_1096_; uint64_t v___x_1097_; uint64_t v_fold_1098_; uint64_t v___x_1099_; uint64_t v___x_1100_; uint64_t v___x_1101_; size_t v___x_1102_; size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; size_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v_buckets_1093_ = lean_ctor_get(v_m_1091_, 1);
v___x_1094_ = lean_array_get_size(v_buckets_1093_);
v___x_1095_ = l_Lean_ExprStructEq_hash(v_a_1092_);
v___x_1096_ = 32ULL;
v___x_1097_ = lean_uint64_shift_right(v___x_1095_, v___x_1096_);
v_fold_1098_ = lean_uint64_xor(v___x_1095_, v___x_1097_);
v___x_1099_ = 16ULL;
v___x_1100_ = lean_uint64_shift_right(v_fold_1098_, v___x_1099_);
v___x_1101_ = lean_uint64_xor(v_fold_1098_, v___x_1100_);
v___x_1102_ = lean_uint64_to_usize(v___x_1101_);
v___x_1103_ = lean_usize_of_nat(v___x_1094_);
v___x_1104_ = ((size_t)1ULL);
v___x_1105_ = lean_usize_sub(v___x_1103_, v___x_1104_);
v___x_1106_ = lean_usize_land(v___x_1102_, v___x_1105_);
v___x_1107_ = lean_array_uget_borrowed(v_buckets_1093_, v___x_1106_);
v___x_1108_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1092_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object* v_m_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1109_, v_a_1110_);
lean_dec_ref(v_a_1110_);
lean_dec_ref(v_m_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object* v_a_1112_, lean_object* v_x_1113_){
_start:
{
if (lean_obj_tag(v_x_1113_) == 0)
{
uint8_t v___x_1114_; 
v___x_1114_ = 0;
return v___x_1114_;
}
else
{
lean_object* v_key_1115_; lean_object* v_tail_1116_; uint8_t v___x_1117_; 
v_key_1115_ = lean_ctor_get(v_x_1113_, 0);
v_tail_1116_ = lean_ctor_get(v_x_1113_, 2);
v___x_1117_ = l_Lean_ExprStructEq_beq(v_key_1115_, v_a_1112_);
if (v___x_1117_ == 0)
{
v_x_1113_ = v_tail_1116_;
goto _start;
}
else
{
return v___x_1117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object* v_a_1119_, lean_object* v_x_1120_){
_start:
{
uint8_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1119_, v_x_1120_);
lean_dec(v_x_1120_);
lean_dec_ref(v_a_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
if (lean_obj_tag(v_x_1124_) == 0)
{
return v_x_1123_;
}
else
{
lean_object* v_key_1125_; lean_object* v_value_1126_; lean_object* v_tail_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1150_; 
v_key_1125_ = lean_ctor_get(v_x_1124_, 0);
v_value_1126_ = lean_ctor_get(v_x_1124_, 1);
v_tail_1127_ = lean_ctor_get(v_x_1124_, 2);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_x_1124_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1129_ = v_x_1124_;
v_isShared_1130_ = v_isSharedCheck_1150_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_tail_1127_);
lean_inc(v_value_1126_);
lean_inc(v_key_1125_);
lean_dec(v_x_1124_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1150_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; uint64_t v___x_1132_; uint64_t v___x_1133_; uint64_t v___x_1134_; uint64_t v_fold_1135_; uint64_t v___x_1136_; uint64_t v___x_1137_; uint64_t v___x_1138_; size_t v___x_1139_; size_t v___x_1140_; size_t v___x_1141_; size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1131_ = lean_array_get_size(v_x_1123_);
v___x_1132_ = l_Lean_ExprStructEq_hash(v_key_1125_);
v___x_1133_ = 32ULL;
v___x_1134_ = lean_uint64_shift_right(v___x_1132_, v___x_1133_);
v_fold_1135_ = lean_uint64_xor(v___x_1132_, v___x_1134_);
v___x_1136_ = 16ULL;
v___x_1137_ = lean_uint64_shift_right(v_fold_1135_, v___x_1136_);
v___x_1138_ = lean_uint64_xor(v_fold_1135_, v___x_1137_);
v___x_1139_ = lean_uint64_to_usize(v___x_1138_);
v___x_1140_ = lean_usize_of_nat(v___x_1131_);
v___x_1141_ = ((size_t)1ULL);
v___x_1142_ = lean_usize_sub(v___x_1140_, v___x_1141_);
v___x_1143_ = lean_usize_land(v___x_1139_, v___x_1142_);
v___x_1144_ = lean_array_uget_borrowed(v_x_1123_, v___x_1143_);
lean_inc(v___x_1144_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 2, v___x_1144_);
v___x_1146_ = v___x_1129_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_key_1125_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_value_1126_);
lean_ctor_set(v_reuseFailAlloc_1149_, 2, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_array_uset(v_x_1123_, v___x_1143_, v___x_1146_);
v_x_1123_ = v___x_1147_;
v_x_1124_ = v_tail_1127_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object* v_i_1151_, lean_object* v_source_1152_, lean_object* v_target_1153_){
_start:
{
lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = lean_array_get_size(v_source_1152_);
v___x_1155_ = lean_nat_dec_lt(v_i_1151_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_dec_ref(v_source_1152_);
lean_dec(v_i_1151_);
return v_target_1153_;
}
else
{
lean_object* v_es_1156_; lean_object* v___x_1157_; lean_object* v_source_1158_; lean_object* v_target_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_es_1156_ = lean_array_fget(v_source_1152_, v_i_1151_);
v___x_1157_ = lean_box(0);
v_source_1158_ = lean_array_fset(v_source_1152_, v_i_1151_, v___x_1157_);
v_target_1159_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_target_1153_, v_es_1156_);
v___x_1160_ = lean_unsigned_to_nat(1u);
v___x_1161_ = lean_nat_add(v_i_1151_, v___x_1160_);
lean_dec(v_i_1151_);
v_i_1151_ = v___x_1161_;
v_source_1152_ = v_source_1158_;
v_target_1153_ = v_target_1159_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object* v_data_1163_){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v_nbuckets_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1164_ = lean_array_get_size(v_data_1163_);
v___x_1165_ = lean_unsigned_to_nat(2u);
v_nbuckets_1166_ = lean_nat_mul(v___x_1164_, v___x_1165_);
v___x_1167_ = lean_unsigned_to_nat(0u);
v___x_1168_ = lean_box(0);
v___x_1169_ = lean_mk_array(v_nbuckets_1166_, v___x_1168_);
v___x_1170_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v___x_1167_, v_data_1163_, v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object* v_a_1171_, lean_object* v_b_1172_, lean_object* v_x_1173_){
_start:
{
if (lean_obj_tag(v_x_1173_) == 0)
{
lean_dec(v_b_1172_);
lean_dec_ref(v_a_1171_);
return v_x_1173_;
}
else
{
lean_object* v_key_1174_; lean_object* v_value_1175_; lean_object* v_tail_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1188_; 
v_key_1174_ = lean_ctor_get(v_x_1173_, 0);
v_value_1175_ = lean_ctor_get(v_x_1173_, 1);
v_tail_1176_ = lean_ctor_get(v_x_1173_, 2);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_x_1173_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1178_ = v_x_1173_;
v_isShared_1179_ = v_isSharedCheck_1188_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_tail_1176_);
lean_inc(v_value_1175_);
lean_inc(v_key_1174_);
lean_dec(v_x_1173_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1188_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
uint8_t v___x_1180_; 
v___x_1180_ = l_Lean_ExprStructEq_beq(v_key_1174_, v_a_1171_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1171_, v_b_1172_, v_tail_1176_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 2, v___x_1181_);
v___x_1183_ = v___x_1178_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_key_1174_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_value_1175_);
lean_ctor_set(v_reuseFailAlloc_1184_, 2, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
else
{
lean_object* v___x_1186_; 
lean_dec(v_value_1175_);
lean_dec(v_key_1174_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 1, v_b_1172_);
lean_ctor_set(v___x_1178_, 0, v_a_1171_);
v___x_1186_ = v___x_1178_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1171_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_b_1172_);
lean_ctor_set(v_reuseFailAlloc_1187_, 2, v_tail_1176_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object* v_m_1189_, lean_object* v_a_1190_, lean_object* v_b_1191_){
_start:
{
lean_object* v_size_1192_; lean_object* v_buckets_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1236_; 
v_size_1192_ = lean_ctor_get(v_m_1189_, 0);
v_buckets_1193_ = lean_ctor_get(v_m_1189_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_m_1189_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1195_ = v_m_1189_;
v_isShared_1196_ = v_isSharedCheck_1236_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_buckets_1193_);
lean_inc(v_size_1192_);
lean_dec(v_m_1189_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1236_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1197_; uint64_t v___x_1198_; uint64_t v___x_1199_; uint64_t v___x_1200_; uint64_t v_fold_1201_; uint64_t v___x_1202_; uint64_t v___x_1203_; uint64_t v___x_1204_; size_t v___x_1205_; size_t v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; lean_object* v_bkt_1210_; uint8_t v___x_1211_; 
v___x_1197_ = lean_array_get_size(v_buckets_1193_);
v___x_1198_ = l_Lean_ExprStructEq_hash(v_a_1190_);
v___x_1199_ = 32ULL;
v___x_1200_ = lean_uint64_shift_right(v___x_1198_, v___x_1199_);
v_fold_1201_ = lean_uint64_xor(v___x_1198_, v___x_1200_);
v___x_1202_ = 16ULL;
v___x_1203_ = lean_uint64_shift_right(v_fold_1201_, v___x_1202_);
v___x_1204_ = lean_uint64_xor(v_fold_1201_, v___x_1203_);
v___x_1205_ = lean_uint64_to_usize(v___x_1204_);
v___x_1206_ = lean_usize_of_nat(v___x_1197_);
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_sub(v___x_1206_, v___x_1207_);
v___x_1209_ = lean_usize_land(v___x_1205_, v___x_1208_);
v_bkt_1210_ = lean_array_uget_borrowed(v_buckets_1193_, v___x_1209_);
v___x_1211_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1190_, v_bkt_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; lean_object* v_size_x27_1213_; lean_object* v___x_1214_; lean_object* v_buckets_x27_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v___x_1212_ = lean_unsigned_to_nat(1u);
v_size_x27_1213_ = lean_nat_add(v_size_1192_, v___x_1212_);
lean_dec(v_size_1192_);
lean_inc(v_bkt_1210_);
v___x_1214_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1214_, 0, v_a_1190_);
lean_ctor_set(v___x_1214_, 1, v_b_1191_);
lean_ctor_set(v___x_1214_, 2, v_bkt_1210_);
v_buckets_x27_1215_ = lean_array_uset(v_buckets_1193_, v___x_1209_, v___x_1214_);
v___x_1216_ = lean_unsigned_to_nat(4u);
v___x_1217_ = lean_nat_mul(v_size_x27_1213_, v___x_1216_);
v___x_1218_ = lean_unsigned_to_nat(3u);
v___x_1219_ = lean_nat_div(v___x_1217_, v___x_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_array_get_size(v_buckets_x27_1215_);
v___x_1221_ = lean_nat_dec_le(v___x_1219_, v___x_1220_);
lean_dec(v___x_1219_);
if (v___x_1221_ == 0)
{
lean_object* v_val_1222_; lean_object* v___x_1224_; 
v_val_1222_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_buckets_x27_1215_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v_val_1222_);
lean_ctor_set(v___x_1195_, 0, v_size_x27_1213_);
v___x_1224_ = v___x_1195_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_size_x27_1213_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_val_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
else
{
lean_object* v___x_1227_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v_buckets_x27_1215_);
lean_ctor_set(v___x_1195_, 0, v_size_x27_1213_);
v___x_1227_ = v___x_1195_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_size_x27_1213_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_buckets_x27_1215_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
else
{
lean_object* v___x_1229_; lean_object* v_buckets_x27_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1234_; 
lean_inc(v_bkt_1210_);
v___x_1229_ = lean_box(0);
v_buckets_x27_1230_ = lean_array_uset(v_buckets_1193_, v___x_1209_, v___x_1229_);
v___x_1231_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1190_, v_b_1191_, v_bkt_1210_);
v___x_1232_ = lean_array_uset(v_buckets_x27_1230_, v___x_1209_, v___x_1231_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v___x_1232_);
v___x_1234_ = v___x_1195_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_size_1192_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object* v_e_1237_, lean_object* v_args_1238_, lean_object* v_x_1239_, uint8_t v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; uint8_t v___x_1248_; uint8_t v___x_1249_; uint8_t v___x_1250_; lean_object* v___x_1251_; 
v___x_1247_ = l_Lean_mkAppN(v_e_1237_, v_args_1238_);
v___x_1248_ = 0;
v___x_1249_ = 1;
v___x_1250_ = 1;
v___x_1251_ = l_Lean_Meta_mkLambdaFVars(v_args_1238_, v___x_1247_, v___x_1248_, v___x_1249_, v___x_1248_, v___x_1249_, v___x_1250_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object* v_e_1252_, lean_object* v_args_1253_, lean_object* v_x_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___y_18596__boxed_1262_; lean_object* v_res_1263_; 
v___y_18596__boxed_1262_ = lean_unbox(v___y_1255_);
v_res_1263_ = l_Lean_Meta_Closure_collectExprAux___lam__1(v_e_1252_, v_args_1253_, v_x_1254_, v___y_18596__boxed_1262_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v_x_1254_);
lean_dec_ref(v_args_1253_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object* v___y_1264_){
_start:
{
lean_object* v___x_1266_; lean_object* v_ngen_1267_; lean_object* v_namePrefix_1268_; lean_object* v_idx_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1298_; 
v___x_1266_ = lean_st_ref_get(v___y_1264_);
v_ngen_1267_ = lean_ctor_get(v___x_1266_, 2);
lean_inc_ref(v_ngen_1267_);
lean_dec(v___x_1266_);
v_namePrefix_1268_ = lean_ctor_get(v_ngen_1267_, 0);
v_idx_1269_ = lean_ctor_get(v_ngen_1267_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_ngen_1267_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1271_ = v_ngen_1267_;
v_isShared_1272_ = v_isSharedCheck_1298_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_idx_1269_);
lean_inc(v_namePrefix_1268_);
lean_dec(v_ngen_1267_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1298_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v_env_1274_; lean_object* v_nextMacroScope_1275_; lean_object* v_auxDeclNGen_1276_; lean_object* v_traceState_1277_; lean_object* v_cache_1278_; lean_object* v_messages_1279_; lean_object* v_infoState_1280_; lean_object* v_snapshotTasks_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1296_; 
v___x_1273_ = lean_st_ref_take(v___y_1264_);
v_env_1274_ = lean_ctor_get(v___x_1273_, 0);
v_nextMacroScope_1275_ = lean_ctor_get(v___x_1273_, 1);
v_auxDeclNGen_1276_ = lean_ctor_get(v___x_1273_, 3);
v_traceState_1277_ = lean_ctor_get(v___x_1273_, 4);
v_cache_1278_ = lean_ctor_get(v___x_1273_, 5);
v_messages_1279_ = lean_ctor_get(v___x_1273_, 6);
v_infoState_1280_ = lean_ctor_get(v___x_1273_, 7);
v_snapshotTasks_1281_ = lean_ctor_get(v___x_1273_, 8);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1296_ == 0)
{
lean_object* v_unused_1297_; 
v_unused_1297_ = lean_ctor_get(v___x_1273_, 2);
lean_dec(v_unused_1297_);
v___x_1283_ = v___x_1273_;
v_isShared_1284_ = v_isSharedCheck_1296_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_snapshotTasks_1281_);
lean_inc(v_infoState_1280_);
lean_inc(v_messages_1279_);
lean_inc(v_cache_1278_);
lean_inc(v_traceState_1277_);
lean_inc(v_auxDeclNGen_1276_);
lean_inc(v_nextMacroScope_1275_);
lean_inc(v_env_1274_);
lean_dec(v___x_1273_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1296_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v_r_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1289_; 
lean_inc(v_idx_1269_);
lean_inc(v_namePrefix_1268_);
v_r_1285_ = l_Lean_Name_num___override(v_namePrefix_1268_, v_idx_1269_);
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_add(v_idx_1269_, v___x_1286_);
lean_dec(v_idx_1269_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 1, v___x_1287_);
v___x_1289_ = v___x_1271_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_namePrefix_1268_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v___x_1287_);
v___x_1289_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1291_; 
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 2, v___x_1289_);
v___x_1291_ = v___x_1283_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_env_1274_);
lean_ctor_set(v_reuseFailAlloc_1294_, 1, v_nextMacroScope_1275_);
lean_ctor_set(v_reuseFailAlloc_1294_, 2, v___x_1289_);
lean_ctor_set(v_reuseFailAlloc_1294_, 3, v_auxDeclNGen_1276_);
lean_ctor_set(v_reuseFailAlloc_1294_, 4, v_traceState_1277_);
lean_ctor_set(v_reuseFailAlloc_1294_, 5, v_cache_1278_);
lean_ctor_set(v_reuseFailAlloc_1294_, 6, v_messages_1279_);
lean_ctor_set(v_reuseFailAlloc_1294_, 7, v_infoState_1280_);
lean_ctor_set(v_reuseFailAlloc_1294_, 8, v_snapshotTasks_1281_);
v___x_1291_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_st_ref_set(v___y_1264_, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_r_1285_);
return v___x_1293_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1299_);
lean_dec(v___y_1299_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
v___x_1309_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1307_);
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
uint8_t v___y_18677__boxed_1325_; lean_object* v_res_1326_; 
v___y_18677__boxed_1325_ = lean_unbox(v___y_1318_);
v_res_1326_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_18677__boxed_1325_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object* v_x_1327_, lean_object* v_x_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
if (lean_obj_tag(v_x_1327_) == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = l_List_reverse___redArg(v_x_1328_);
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
else
{
lean_object* v_head_1334_; lean_object* v_tail_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1353_; 
v_head_1334_ = lean_ctor_get(v_x_1327_, 0);
v_tail_1335_ = lean_ctor_get(v_x_1327_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_x_1327_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1337_ = v_x_1327_;
v_isShared_1338_ = v_isSharedCheck_1353_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_tail_1335_);
lean_inc(v_head_1334_);
lean_dec(v_x_1327_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1353_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_Meta_Closure_collectLevel___redArg(v_head_1334_, v___y_1329_, v___y_1330_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1340_);
lean_dec_ref(v___x_1339_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 1, v_x_1328_);
lean_ctor_set(v___x_1337_, 0, v_a_1340_);
v___x_1342_ = v___x_1337_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1340_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_x_1328_);
v___x_1342_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
v_x_1327_ = v_tail_1335_;
v_x_1328_ = v___x_1342_;
goto _start;
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_del_object(v___x_1337_);
lean_dec(v_tail_1335_);
lean_dec(v_x_1328_);
v_a_1345_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1339_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1339_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object* v_x_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1354_, v_x_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec(v___y_1356_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object* v_e_1360_, uint8_t v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
switch(lean_obj_tag(v_e_1360_))
{
case 11:
{
lean_object* v_typeName_1368_; lean_object* v_idx_1369_; lean_object* v_struct_1370_; lean_object* v___x_1371_; 
v_typeName_1368_ = lean_ctor_get(v_e_1360_, 0);
v_idx_1369_ = lean_ctor_get(v_e_1360_, 1);
v_struct_1370_ = lean_ctor_get(v_e_1360_, 2);
lean_inc_ref(v_struct_1370_);
v___x_1371_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_struct_1370_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1386_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1374_ = v___x_1371_;
v_isShared_1375_ = v_isSharedCheck_1386_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1386_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
size_t v___x_1376_; size_t v___x_1377_; uint8_t v___x_1378_; 
v___x_1376_ = lean_ptr_addr(v_struct_1370_);
v___x_1377_ = lean_ptr_addr(v_a_1372_);
v___x_1378_ = lean_usize_dec_eq(v___x_1376_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; lean_object* v___x_1381_; 
lean_inc(v_idx_1369_);
lean_inc(v_typeName_1368_);
lean_dec_ref(v_e_1360_);
v___x_1379_ = l_Lean_Expr_proj___override(v_typeName_1368_, v_idx_1369_, v_a_1372_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v___x_1379_);
v___x_1381_ = v___x_1374_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
else
{
lean_object* v___x_1384_; 
lean_dec(v_a_1372_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v_e_1360_);
v___x_1384_ = v___x_1374_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_e_1360_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1371_;
}
}
case 7:
{
lean_object* v_binderName_1387_; lean_object* v_binderType_1388_; lean_object* v_body_1389_; uint8_t v_binderInfo_1390_; lean_object* v___x_1391_; 
v_binderName_1387_ = lean_ctor_get(v_e_1360_, 0);
v_binderType_1388_ = lean_ctor_get(v_e_1360_, 1);
v_body_1389_ = lean_ctor_get(v_e_1360_, 2);
v_binderInfo_1390_ = lean_ctor_get_uint8(v_e_1360_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1388_);
v___x_1391_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1388_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref(v___x_1391_);
lean_inc_ref(v_body_1389_);
v___x_1393_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1389_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1418_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1393_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1396_ = v___x_1393_;
v_isShared_1397_ = v_isSharedCheck_1418_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1393_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1418_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
uint8_t v___y_1399_; size_t v___x_1412_; size_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1412_ = lean_ptr_addr(v_binderType_1388_);
v___x_1413_ = lean_ptr_addr(v_a_1392_);
v___x_1414_ = lean_usize_dec_eq(v___x_1412_, v___x_1413_);
if (v___x_1414_ == 0)
{
v___y_1399_ = v___x_1414_;
goto v___jp_1398_;
}
else
{
size_t v___x_1415_; size_t v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_ptr_addr(v_body_1389_);
v___x_1416_ = lean_ptr_addr(v_a_1394_);
v___x_1417_ = lean_usize_dec_eq(v___x_1415_, v___x_1416_);
v___y_1399_ = v___x_1417_;
goto v___jp_1398_;
}
v___jp_1398_:
{
if (v___y_1399_ == 0)
{
lean_object* v___x_1400_; lean_object* v___x_1402_; 
lean_inc(v_binderName_1387_);
lean_dec_ref(v_e_1360_);
v___x_1400_ = l_Lean_Expr_forallE___override(v_binderName_1387_, v_a_1392_, v_a_1394_, v_binderInfo_1390_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1400_);
v___x_1402_ = v___x_1396_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1400_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
else
{
uint8_t v___x_1404_; 
v___x_1404_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1390_, v_binderInfo_1390_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; lean_object* v___x_1407_; 
lean_inc(v_binderName_1387_);
lean_dec_ref(v_e_1360_);
v___x_1405_ = l_Lean_Expr_forallE___override(v_binderName_1387_, v_a_1392_, v_a_1394_, v_binderInfo_1390_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1405_);
v___x_1407_ = v___x_1396_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
else
{
lean_object* v___x_1410_; 
lean_dec(v_a_1394_);
lean_dec(v_a_1392_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v_e_1360_);
v___x_1410_ = v___x_1396_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_e_1360_);
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
}
else
{
lean_dec(v_a_1392_);
lean_dec_ref(v_e_1360_);
return v___x_1393_;
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1391_;
}
}
case 6:
{
lean_object* v_binderName_1419_; lean_object* v_binderType_1420_; lean_object* v_body_1421_; uint8_t v_binderInfo_1422_; lean_object* v___x_1423_; 
v_binderName_1419_ = lean_ctor_get(v_e_1360_, 0);
v_binderType_1420_ = lean_ctor_get(v_e_1360_, 1);
v_body_1421_ = lean_ctor_get(v_e_1360_, 2);
v_binderInfo_1422_ = lean_ctor_get_uint8(v_e_1360_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1420_);
v___x_1423_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1420_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1425_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref(v___x_1423_);
lean_inc_ref(v_body_1421_);
v___x_1425_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1421_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1450_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1450_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1450_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
uint8_t v___y_1431_; size_t v___x_1444_; size_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1444_ = lean_ptr_addr(v_binderType_1420_);
v___x_1445_ = lean_ptr_addr(v_a_1424_);
v___x_1446_ = lean_usize_dec_eq(v___x_1444_, v___x_1445_);
if (v___x_1446_ == 0)
{
v___y_1431_ = v___x_1446_;
goto v___jp_1430_;
}
else
{
size_t v___x_1447_; size_t v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = lean_ptr_addr(v_body_1421_);
v___x_1448_ = lean_ptr_addr(v_a_1426_);
v___x_1449_ = lean_usize_dec_eq(v___x_1447_, v___x_1448_);
v___y_1431_ = v___x_1449_;
goto v___jp_1430_;
}
v___jp_1430_:
{
if (v___y_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1434_; 
lean_inc(v_binderName_1419_);
lean_dec_ref(v_e_1360_);
v___x_1432_ = l_Lean_Expr_lam___override(v_binderName_1419_, v_a_1424_, v_a_1426_, v_binderInfo_1422_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v___x_1432_);
v___x_1434_ = v___x_1428_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
else
{
uint8_t v___x_1436_; 
v___x_1436_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1422_, v_binderInfo_1422_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
lean_inc(v_binderName_1419_);
lean_dec_ref(v_e_1360_);
v___x_1437_ = l_Lean_Expr_lam___override(v_binderName_1419_, v_a_1424_, v_a_1426_, v_binderInfo_1422_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v___x_1437_);
v___x_1439_ = v___x_1428_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
else
{
lean_object* v___x_1442_; 
lean_dec(v_a_1426_);
lean_dec(v_a_1424_);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v_e_1360_);
v___x_1442_ = v___x_1428_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_e_1360_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1424_);
lean_dec_ref(v_e_1360_);
return v___x_1425_;
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1423_;
}
}
case 8:
{
lean_object* v_declName_1451_; lean_object* v_type_1452_; lean_object* v_value_1453_; lean_object* v_body_1454_; uint8_t v_nondep_1455_; lean_object* v___x_1456_; 
v_declName_1451_ = lean_ctor_get(v_e_1360_, 0);
v_type_1452_ = lean_ctor_get(v_e_1360_, 1);
v_value_1453_ = lean_ctor_get(v_e_1360_, 2);
v_body_1454_ = lean_ctor_get(v_e_1360_, 3);
v_nondep_1455_ = lean_ctor_get_uint8(v_e_1360_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1452_);
v___x_1456_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_type_1452_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1458_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref(v___x_1456_);
lean_inc_ref(v_value_1453_);
v___x_1458_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_value_1453_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1460_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref(v___x_1458_);
lean_inc_ref(v_body_1454_);
v___x_1460_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1454_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1487_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1487_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1487_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
uint8_t v___y_1466_; size_t v___x_1481_; size_t v___x_1482_; uint8_t v___x_1483_; 
v___x_1481_ = lean_ptr_addr(v_type_1452_);
v___x_1482_ = lean_ptr_addr(v_a_1457_);
v___x_1483_ = lean_usize_dec_eq(v___x_1481_, v___x_1482_);
if (v___x_1483_ == 0)
{
v___y_1466_ = v___x_1483_;
goto v___jp_1465_;
}
else
{
size_t v___x_1484_; size_t v___x_1485_; uint8_t v___x_1486_; 
v___x_1484_ = lean_ptr_addr(v_value_1453_);
v___x_1485_ = lean_ptr_addr(v_a_1459_);
v___x_1486_ = lean_usize_dec_eq(v___x_1484_, v___x_1485_);
v___y_1466_ = v___x_1486_;
goto v___jp_1465_;
}
v___jp_1465_:
{
if (v___y_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1469_; 
lean_inc(v_declName_1451_);
lean_dec_ref(v_e_1360_);
v___x_1467_ = l_Lean_Expr_letE___override(v_declName_1451_, v_a_1457_, v_a_1459_, v_a_1461_, v_nondep_1455_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1467_);
v___x_1469_ = v___x_1463_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
else
{
size_t v___x_1471_; size_t v___x_1472_; uint8_t v___x_1473_; 
v___x_1471_ = lean_ptr_addr(v_body_1454_);
v___x_1472_ = lean_ptr_addr(v_a_1461_);
v___x_1473_ = lean_usize_dec_eq(v___x_1471_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
lean_inc(v_declName_1451_);
lean_dec_ref(v_e_1360_);
v___x_1474_ = l_Lean_Expr_letE___override(v_declName_1451_, v_a_1457_, v_a_1459_, v_a_1461_, v_nondep_1455_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1474_);
v___x_1476_ = v___x_1463_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
else
{
lean_object* v___x_1479_; 
lean_dec(v_a_1461_);
lean_dec(v_a_1459_);
lean_dec(v_a_1457_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v_e_1360_);
v___x_1479_ = v___x_1463_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_e_1360_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1459_);
lean_dec(v_a_1457_);
lean_dec_ref(v_e_1360_);
return v___x_1460_;
}
}
else
{
lean_dec(v_a_1457_);
lean_dec_ref(v_e_1360_);
return v___x_1458_;
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1456_;
}
}
case 5:
{
lean_object* v_fn_1488_; lean_object* v_arg_1489_; lean_object* v___x_1490_; 
v_fn_1488_ = lean_ctor_get(v_e_1360_, 0);
v_arg_1489_ = lean_ctor_get(v_e_1360_, 1);
lean_inc_ref(v_fn_1488_);
v___x_1490_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_fn_1488_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1492_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
lean_dec_ref(v___x_1490_);
lean_inc_ref(v_arg_1489_);
v___x_1492_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_arg_1489_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1512_; 
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1495_ = v___x_1492_;
v_isShared_1496_ = v_isSharedCheck_1512_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1492_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1512_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
uint8_t v___y_1498_; size_t v___x_1506_; size_t v___x_1507_; uint8_t v___x_1508_; 
v___x_1506_ = lean_ptr_addr(v_fn_1488_);
v___x_1507_ = lean_ptr_addr(v_a_1491_);
v___x_1508_ = lean_usize_dec_eq(v___x_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
v___y_1498_ = v___x_1508_;
goto v___jp_1497_;
}
else
{
size_t v___x_1509_; size_t v___x_1510_; uint8_t v___x_1511_; 
v___x_1509_ = lean_ptr_addr(v_arg_1489_);
v___x_1510_ = lean_ptr_addr(v_a_1493_);
v___x_1511_ = lean_usize_dec_eq(v___x_1509_, v___x_1510_);
v___y_1498_ = v___x_1511_;
goto v___jp_1497_;
}
v___jp_1497_:
{
if (v___y_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1501_; 
lean_dec_ref(v_e_1360_);
v___x_1499_ = l_Lean_Expr_app___override(v_a_1491_, v_a_1493_);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 0, v___x_1499_);
v___x_1501_ = v___x_1495_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
else
{
lean_object* v___x_1504_; 
lean_dec(v_a_1493_);
lean_dec(v_a_1491_);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 0, v_e_1360_);
v___x_1504_ = v___x_1495_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_e_1360_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
else
{
lean_dec(v_a_1491_);
lean_dec_ref(v_e_1360_);
return v___x_1492_;
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1490_;
}
}
case 10:
{
lean_object* v_data_1513_; lean_object* v_expr_1514_; lean_object* v___x_1515_; 
v_data_1513_ = lean_ctor_get(v_e_1360_, 0);
v_expr_1514_ = lean_ctor_get(v_e_1360_, 1);
lean_inc_ref(v_expr_1514_);
v___x_1515_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_expr_1514_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1530_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1518_ = v___x_1515_;
v_isShared_1519_ = v_isSharedCheck_1530_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1515_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1530_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
size_t v___x_1520_; size_t v___x_1521_; uint8_t v___x_1522_; 
v___x_1520_ = lean_ptr_addr(v_expr_1514_);
v___x_1521_ = lean_ptr_addr(v_a_1516_);
v___x_1522_ = lean_usize_dec_eq(v___x_1520_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
lean_inc(v_data_1513_);
lean_dec_ref(v_e_1360_);
v___x_1523_ = l_Lean_Expr_mdata___override(v_data_1513_, v_a_1516_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 0, v___x_1523_);
v___x_1525_ = v___x_1518_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
else
{
lean_object* v___x_1528_; 
lean_dec(v_a_1516_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 0, v_e_1360_);
v___x_1528_ = v___x_1518_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_e_1360_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
else
{
lean_dec_ref(v_e_1360_);
return v___x_1515_;
}
}
case 3:
{
lean_object* v_u_1531_; lean_object* v___x_1532_; 
v_u_1531_ = lean_ctor_get(v_e_1360_, 0);
lean_inc(v_u_1531_);
v___x_1532_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_1531_, v_a_1362_, v_a_1366_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1547_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1547_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1547_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
size_t v___x_1537_; size_t v___x_1538_; uint8_t v___x_1539_; 
v___x_1537_ = lean_ptr_addr(v_u_1531_);
v___x_1538_ = lean_ptr_addr(v_a_1533_);
v___x_1539_ = lean_usize_dec_eq(v___x_1537_, v___x_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
lean_dec_ref(v_e_1360_);
v___x_1540_ = l_Lean_Expr_sort___override(v_a_1533_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1540_);
v___x_1542_ = v___x_1535_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
else
{
lean_object* v___x_1545_; 
lean_dec(v_a_1533_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v_e_1360_);
v___x_1545_ = v___x_1535_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_e_1360_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec_ref(v_e_1360_);
v_a_1548_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1532_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1532_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
case 4:
{
lean_object* v_declName_1556_; lean_object* v_us_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_declName_1556_ = lean_ctor_get(v_e_1360_, 0);
v_us_1557_ = lean_ctor_get(v_e_1360_, 1);
v___x_1558_ = lean_box(0);
lean_inc(v_us_1557_);
v___x_1559_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_us_1557_, v___x_1558_, v_a_1362_, v_a_1366_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1572_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1572_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1572_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
uint8_t v___x_1564_; 
v___x_1564_ = l_ptrEqList___redArg(v_us_1557_, v_a_1560_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1567_; 
lean_inc(v_declName_1556_);
lean_dec_ref(v_e_1360_);
v___x_1565_ = l_Lean_Expr_const___override(v_declName_1556_, v_a_1560_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1565_);
v___x_1567_ = v___x_1562_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
else
{
lean_object* v___x_1570_; 
lean_dec(v_a_1560_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v_e_1360_);
v___x_1570_ = v___x_1562_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_e_1360_);
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
lean_dec_ref(v_e_1360_);
v_a_1573_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1559_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1559_);
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
case 2:
{
lean_object* v_mvarId_1581_; lean_object* v___x_1582_; 
v_mvarId_1581_ = lean_ctor_get(v_e_1360_, 0);
lean_inc(v_mvarId_1581_);
v___x_1582_ = l_Lean_MVarId_getDecl(v_mvarId_1581_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v_type_1584_; lean_object* v___x_1585_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref(v___x_1582_);
v_type_1584_ = lean_ctor_get(v_a_1583_, 2);
lean_inc_ref_n(v_type_1584_, 2);
lean_dec(v_a_1583_);
v___x_1585_ = l_Lean_Meta_Closure_preprocess(v_type_1584_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref(v___x_1585_);
v___x_1587_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1586_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1589_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref(v___x_1587_);
v___x_1589_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1591_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref(v___x_1589_);
v___x_1591_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_1362_, v_a_1366_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1656_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1656_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1656_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v_e_x27_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_1581_, v_a_1364_, v_a_1366_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref(v___x_1632_);
if (lean_obj_tag(v_a_1633_) == 1)
{
lean_object* v_val_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1647_; 
v_val_1634_ = lean_ctor_get(v_a_1633_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_a_1633_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1636_ = v_a_1633_;
v_isShared_1637_ = v_isSharedCheck_1647_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_val_1634_);
lean_dec(v_a_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1647_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v_fvars_1638_; lean_object* v___f_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
v_fvars_1638_ = lean_ctor_get(v_val_1634_, 0);
lean_inc_ref(v_fvars_1638_);
lean_dec(v_val_1634_);
v___f_1639_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1639_, 0, v_e_1360_);
v___x_1640_ = lean_array_get_size(v_fvars_1638_);
lean_dec_ref(v_fvars_1638_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1640_);
v___x_1642_ = v___x_1636_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
uint8_t v___x_1643_; lean_object* v___x_1644_; 
v___x_1643_ = 0;
v___x_1644_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1584_, v___x_1642_, v___f_1639_, v___x_1643_, v___x_1643_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref(v___x_1644_);
v_e_x27_1597_ = v_a_1645_;
v___y_1598_ = v_a_1362_;
v___y_1599_ = v_a_1366_;
goto v___jp_1596_;
}
else
{
lean_del_object(v___x_1594_);
lean_dec(v_a_1592_);
lean_dec(v_a_1590_);
lean_dec(v_a_1588_);
return v___x_1644_;
}
}
}
}
else
{
lean_dec(v_a_1633_);
lean_dec_ref(v_type_1584_);
v_e_x27_1597_ = v_e_1360_;
v___y_1598_ = v_a_1362_;
v___y_1599_ = v_a_1366_;
goto v___jp_1596_;
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_del_object(v___x_1594_);
lean_dec(v_a_1592_);
lean_dec(v_a_1590_);
lean_dec(v_a_1588_);
lean_dec_ref(v_type_1584_);
lean_dec_ref(v_e_1360_);
v_a_1648_ = lean_ctor_get(v___x_1632_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1632_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1632_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
v___jp_1596_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v_visitedLevel_1602_; lean_object* v_visitedExpr_1603_; lean_object* v_levelParams_1604_; lean_object* v_nextLevelIdx_1605_; lean_object* v_levelArgs_1606_; lean_object* v_newLocalDecls_1607_; lean_object* v_newLocalDeclsForMVars_1608_; lean_object* v_newLetDecls_1609_; lean_object* v_nextExprIdx_1610_; lean_object* v_exprMVarArgs_1611_; lean_object* v_exprFVarArgs_1612_; lean_object* v_toProcess_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1631_; 
v___x_1600_ = lean_st_ref_get(v___y_1599_);
lean_dec(v___x_1600_);
v___x_1601_ = lean_st_ref_take(v___y_1598_);
v_visitedLevel_1602_ = lean_ctor_get(v___x_1601_, 0);
v_visitedExpr_1603_ = lean_ctor_get(v___x_1601_, 1);
v_levelParams_1604_ = lean_ctor_get(v___x_1601_, 2);
v_nextLevelIdx_1605_ = lean_ctor_get(v___x_1601_, 3);
v_levelArgs_1606_ = lean_ctor_get(v___x_1601_, 4);
v_newLocalDecls_1607_ = lean_ctor_get(v___x_1601_, 5);
v_newLocalDeclsForMVars_1608_ = lean_ctor_get(v___x_1601_, 6);
v_newLetDecls_1609_ = lean_ctor_get(v___x_1601_, 7);
v_nextExprIdx_1610_ = lean_ctor_get(v___x_1601_, 8);
v_exprMVarArgs_1611_ = lean_ctor_get(v___x_1601_, 9);
v_exprFVarArgs_1612_ = lean_ctor_get(v___x_1601_, 10);
v_toProcess_1613_ = lean_ctor_get(v___x_1601_, 11);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1615_ = v___x_1601_;
v_isShared_1616_ = v_isSharedCheck_1631_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_toProcess_1613_);
lean_inc(v_exprFVarArgs_1612_);
lean_inc(v_exprMVarArgs_1611_);
lean_inc(v_nextExprIdx_1610_);
lean_inc(v_newLetDecls_1609_);
lean_inc(v_newLocalDeclsForMVars_1608_);
lean_inc(v_newLocalDecls_1607_);
lean_inc(v_levelArgs_1606_);
lean_inc(v_nextLevelIdx_1605_);
lean_inc(v_levelParams_1604_);
lean_inc(v_visitedExpr_1603_);
lean_inc(v_visitedLevel_1602_);
lean_dec(v___x_1601_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1631_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; uint8_t v___x_1618_; uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1624_; 
v___x_1617_ = lean_unsigned_to_nat(0u);
v___x_1618_ = 0;
v___x_1619_ = 0;
lean_inc(v_a_1590_);
v___x_1620_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1620_, 0, v___x_1617_);
lean_ctor_set(v___x_1620_, 1, v_a_1590_);
lean_ctor_set(v___x_1620_, 2, v_a_1592_);
lean_ctor_set(v___x_1620_, 3, v_a_1588_);
lean_ctor_set_uint8(v___x_1620_, sizeof(void*)*4, v___x_1618_);
lean_ctor_set_uint8(v___x_1620_, sizeof(void*)*4 + 1, v___x_1619_);
v___x_1621_ = lean_array_push(v_newLocalDeclsForMVars_1608_, v___x_1620_);
v___x_1622_ = lean_array_push(v_exprMVarArgs_1611_, v_e_x27_1597_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 9, v___x_1622_);
lean_ctor_set(v___x_1615_, 6, v___x_1621_);
v___x_1624_ = v___x_1615_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_visitedLevel_1602_);
lean_ctor_set(v_reuseFailAlloc_1630_, 1, v_visitedExpr_1603_);
lean_ctor_set(v_reuseFailAlloc_1630_, 2, v_levelParams_1604_);
lean_ctor_set(v_reuseFailAlloc_1630_, 3, v_nextLevelIdx_1605_);
lean_ctor_set(v_reuseFailAlloc_1630_, 4, v_levelArgs_1606_);
lean_ctor_set(v_reuseFailAlloc_1630_, 5, v_newLocalDecls_1607_);
lean_ctor_set(v_reuseFailAlloc_1630_, 6, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1630_, 7, v_newLetDecls_1609_);
lean_ctor_set(v_reuseFailAlloc_1630_, 8, v_nextExprIdx_1610_);
lean_ctor_set(v_reuseFailAlloc_1630_, 9, v___x_1622_);
lean_ctor_set(v_reuseFailAlloc_1630_, 10, v_exprFVarArgs_1612_);
lean_ctor_set(v_reuseFailAlloc_1630_, 11, v_toProcess_1613_);
v___x_1624_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1628_; 
v___x_1625_ = lean_st_ref_set(v___y_1598_, v___x_1624_);
v___x_1626_ = l_Lean_mkFVar(v_a_1590_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1626_);
v___x_1628_ = v___x_1594_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec(v_a_1590_);
lean_dec(v_a_1588_);
lean_dec_ref(v_type_1584_);
lean_dec_ref(v_e_1360_);
v_a_1657_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1591_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1591_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
else
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
lean_dec(v_a_1588_);
lean_dec_ref(v_type_1584_);
lean_dec_ref(v_e_1360_);
v_a_1665_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v___x_1589_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1589_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
else
{
lean_dec_ref(v_type_1584_);
lean_dec_ref(v_e_1360_);
return v___x_1587_;
}
}
else
{
lean_dec_ref(v_type_1584_);
lean_dec_ref(v_e_1360_);
return v___x_1585_;
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec_ref(v_e_1360_);
v_a_1673_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1582_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1582_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_1681_; uint8_t v___x_1682_; lean_object* v___x_1683_; 
v_fvarId_1681_ = lean_ctor_get(v_e_1360_, 0);
lean_inc_n(v_fvarId_1681_, 2);
lean_dec_ref(v_e_1360_);
v___x_1682_ = 0;
v___x_1683_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_1681_, v___x_1682_, v_a_1363_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; uint8_t v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref(v___x_1683_);
if (v_a_1361_ == 1)
{
if (lean_obj_tag(v_a_1684_) == 1)
{
lean_object* v_val_1721_; lean_object* v___x_1722_; 
lean_dec(v_fvarId_1681_);
v_val_1721_ = lean_ctor_get(v_a_1684_, 0);
lean_inc(v_val_1721_);
lean_dec_ref(v_a_1684_);
v___x_1722_ = l_Lean_Meta_Closure_preprocess(v_val_1721_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1724_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref(v___x_1722_);
v___x_1724_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1723_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_);
return v___x_1724_;
}
else
{
return v___x_1722_;
}
}
else
{
lean_dec(v_a_1684_);
v___y_1686_ = v_a_1361_;
v___y_1687_ = v_a_1362_;
v___y_1688_ = v_a_1363_;
v___y_1689_ = v_a_1364_;
v___y_1690_ = v_a_1365_;
v___y_1691_ = v_a_1366_;
goto v___jp_1685_;
}
}
else
{
lean_dec(v_a_1684_);
v___y_1686_ = v_a_1361_;
v___y_1687_ = v_a_1362_;
v___y_1688_ = v_a_1363_;
v___y_1689_ = v_a_1364_;
v___y_1690_ = v_a_1365_;
v___y_1691_ = v_a_1366_;
goto v___jp_1685_;
}
v___jp_1685_:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc_n(v_a_1693_, 2);
lean_dec_ref(v___x_1692_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_fvarId_1681_);
lean_ctor_set(v___x_1694_, 1, v_a_1693_);
v___x_1695_ = l_Lean_Meta_Closure_pushToProcess___redArg(v___x_1694_, v___y_1687_, v___y_1691_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1703_; 
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1703_ == 0)
{
lean_object* v_unused_1704_; 
v_unused_1704_ = lean_ctor_get(v___x_1695_, 0);
lean_dec(v_unused_1704_);
v___x_1697_ = v___x_1695_;
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
else
{
lean_dec(v___x_1695_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1699_ = l_Lean_mkFVar(v_a_1693_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1699_);
v___x_1701_ = v___x_1697_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
lean_dec(v_a_1693_);
v_a_1705_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1695_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1695_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v_fvarId_1681_);
v_a_1713_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1692_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1692_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec(v_fvarId_1681_);
v_a_1725_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1683_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1683_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
default: 
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_e_1360_);
return v___x_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object* v_e_1734_, uint8_t v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
uint8_t v___x_1787_; 
v___x_1787_ = l_Lean_Expr_hasLevelParam(v_e_1734_);
if (v___x_1787_ == 0)
{
uint8_t v___x_1788_; 
v___x_1788_ = l_Lean_Expr_hasFVar(v_e_1734_);
if (v___x_1788_ == 0)
{
uint8_t v___x_1789_; 
v___x_1789_ = l_Lean_Expr_hasMVar(v_e_1734_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1790_, 0, v_e_1734_);
return v___x_1790_;
}
else
{
goto v___jp_1742_;
}
}
else
{
goto v___jp_1742_;
}
}
else
{
goto v___jp_1742_;
}
v___jp_1742_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v_visitedExpr_1745_; lean_object* v___x_1746_; 
v___x_1743_ = lean_st_ref_get(v___y_1740_);
lean_dec(v___x_1743_);
v___x_1744_ = lean_st_ref_get(v___y_1736_);
v_visitedExpr_1745_ = lean_ctor_get(v___x_1744_, 1);
lean_inc_ref(v_visitedExpr_1745_);
lean_dec(v___x_1744_);
v___x_1746_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1745_, v_e_1734_);
lean_dec_ref(v_visitedExpr_1745_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v___x_1747_; 
lean_inc_ref(v_e_1734_);
v___x_1747_ = l_Lean_Meta_Closure_collectExprAux(v_e_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1778_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1778_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1778_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v_visitedLevel_1754_; lean_object* v_visitedExpr_1755_; lean_object* v_levelParams_1756_; lean_object* v_nextLevelIdx_1757_; lean_object* v_levelArgs_1758_; lean_object* v_newLocalDecls_1759_; lean_object* v_newLocalDeclsForMVars_1760_; lean_object* v_newLetDecls_1761_; lean_object* v_nextExprIdx_1762_; lean_object* v_exprMVarArgs_1763_; lean_object* v_exprFVarArgs_1764_; lean_object* v_toProcess_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1777_; 
v___x_1752_ = lean_st_ref_get(v___y_1740_);
lean_dec(v___x_1752_);
v___x_1753_ = lean_st_ref_take(v___y_1736_);
v_visitedLevel_1754_ = lean_ctor_get(v___x_1753_, 0);
v_visitedExpr_1755_ = lean_ctor_get(v___x_1753_, 1);
v_levelParams_1756_ = lean_ctor_get(v___x_1753_, 2);
v_nextLevelIdx_1757_ = lean_ctor_get(v___x_1753_, 3);
v_levelArgs_1758_ = lean_ctor_get(v___x_1753_, 4);
v_newLocalDecls_1759_ = lean_ctor_get(v___x_1753_, 5);
v_newLocalDeclsForMVars_1760_ = lean_ctor_get(v___x_1753_, 6);
v_newLetDecls_1761_ = lean_ctor_get(v___x_1753_, 7);
v_nextExprIdx_1762_ = lean_ctor_get(v___x_1753_, 8);
v_exprMVarArgs_1763_ = lean_ctor_get(v___x_1753_, 9);
v_exprFVarArgs_1764_ = lean_ctor_get(v___x_1753_, 10);
v_toProcess_1765_ = lean_ctor_get(v___x_1753_, 11);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1767_ = v___x_1753_;
v_isShared_1768_ = v_isSharedCheck_1777_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_toProcess_1765_);
lean_inc(v_exprFVarArgs_1764_);
lean_inc(v_exprMVarArgs_1763_);
lean_inc(v_nextExprIdx_1762_);
lean_inc(v_newLetDecls_1761_);
lean_inc(v_newLocalDeclsForMVars_1760_);
lean_inc(v_newLocalDecls_1759_);
lean_inc(v_levelArgs_1758_);
lean_inc(v_nextLevelIdx_1757_);
lean_inc(v_levelParams_1756_);
lean_inc(v_visitedExpr_1755_);
lean_inc(v_visitedLevel_1754_);
lean_dec(v___x_1753_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1777_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
lean_inc(v_a_1748_);
v___x_1769_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1755_, v_e_1734_, v_a_1748_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 1, v___x_1769_);
v___x_1771_ = v___x_1767_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_visitedLevel_1754_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___x_1769_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_levelParams_1756_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_nextLevelIdx_1757_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_levelArgs_1758_);
lean_ctor_set(v_reuseFailAlloc_1776_, 5, v_newLocalDecls_1759_);
lean_ctor_set(v_reuseFailAlloc_1776_, 6, v_newLocalDeclsForMVars_1760_);
lean_ctor_set(v_reuseFailAlloc_1776_, 7, v_newLetDecls_1761_);
lean_ctor_set(v_reuseFailAlloc_1776_, 8, v_nextExprIdx_1762_);
lean_ctor_set(v_reuseFailAlloc_1776_, 9, v_exprMVarArgs_1763_);
lean_ctor_set(v_reuseFailAlloc_1776_, 10, v_exprFVarArgs_1764_);
lean_ctor_set(v_reuseFailAlloc_1776_, 11, v_toProcess_1765_);
v___x_1771_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1772_ = lean_st_ref_set(v___y_1736_, v___x_1771_);
if (v_isShared_1751_ == 0)
{
v___x_1774_ = v___x_1750_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1748_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_1734_);
return v___x_1747_;
}
}
else
{
lean_object* v_val_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref(v_e_1734_);
v_val_1779_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1746_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_val_1779_);
lean_dec(v___x_1746_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set_tag(v___x_1781_, 0);
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_val_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object* v_e_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
uint8_t v___y_18776__boxed_1799_; lean_object* v_res_1800_; 
v___y_18776__boxed_1799_ = lean_unbox(v___y_1792_);
v_res_1800_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_e_1791_, v___y_18776__boxed_1799_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object* v_e_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
uint8_t v_a_boxed_1809_; lean_object* v_res_1810_; 
v_a_boxed_1809_ = lean_unbox(v_a_1802_);
v_res_1810_ = l_Lean_Meta_Closure_collectExprAux(v_e_1801_, v_a_boxed_1809_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object* v_00_u03b2_1811_, lean_object* v_m_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1812_, v_a_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object* v_00_u03b2_1815_, lean_object* v_m_1816_, lean_object* v_a_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(v_00_u03b2_1815_, v_m_1816_, v_a_1817_);
lean_dec_ref(v_a_1817_);
lean_dec_ref(v_m_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object* v_00_u03b2_1819_, lean_object* v_m_1820_, lean_object* v_a_1821_, lean_object* v_b_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_m_1820_, v_a_1821_, v_b_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object* v_x_1824_, lean_object* v_x_1825_, uint8_t v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1824_, v_x_1825_, v___y_1827_, v___y_1831_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object* v_x_1834_, lean_object* v_x_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
uint8_t v___y_19600__boxed_1843_; lean_object* v_res_1844_; 
v___y_19600__boxed_1843_ = lean_unbox(v___y_1836_);
v_res_1844_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(v_x_1834_, v_x_1835_, v___y_19600__boxed_1843_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1850_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
uint8_t v___y_19627__boxed_1860_; lean_object* v_res_1861_; 
v___y_19627__boxed_1860_ = lean_unbox(v___y_1853_);
v_res_1861_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(v___y_19627__boxed_1860_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object* v_00_u03b2_1862_, lean_object* v_a_1863_, lean_object* v_x_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1863_, v_x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1866_, lean_object* v_a_1867_, lean_object* v_x_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(v_00_u03b2_1866_, v_a_1867_, v_x_1868_);
lean_dec(v_x_1868_);
lean_dec_ref(v_a_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object* v_00_u03b2_1870_, lean_object* v_a_1871_, lean_object* v_x_1872_){
_start:
{
uint8_t v___x_1873_; 
v___x_1873_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1871_, v_x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1874_, lean_object* v_a_1875_, lean_object* v_x_1876_){
_start:
{
uint8_t v_res_1877_; lean_object* v_r_1878_; 
v_res_1877_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(v_00_u03b2_1874_, v_a_1875_, v_x_1876_);
lean_dec(v_x_1876_);
lean_dec_ref(v_a_1875_);
v_r_1878_ = lean_box(v_res_1877_);
return v_r_1878_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object* v_00_u03b2_1879_, lean_object* v_data_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_data_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object* v_00_u03b2_1882_, lean_object* v_a_1883_, lean_object* v_b_1884_, lean_object* v_x_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1883_, v_b_1884_, v_x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_1887_, lean_object* v_i_1888_, lean_object* v_source_1889_, lean_object* v_target_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v_i_1888_, v_source_1889_, v_target_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_1892_, lean_object* v_x_1893_, lean_object* v_x_1894_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_x_1893_, v_x_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object* v_e_1896_, uint8_t v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lean_Meta_Closure_preprocess(v_e_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; uint8_t v___x_1951_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
v___x_1951_ = l_Lean_Expr_hasLevelParam(v_a_1905_);
if (v___x_1951_ == 0)
{
uint8_t v___x_1952_; 
v___x_1952_ = l_Lean_Expr_hasFVar(v_a_1905_);
if (v___x_1952_ == 0)
{
uint8_t v___x_1953_; 
v___x_1953_ = l_Lean_Expr_hasMVar(v_a_1905_);
if (v___x_1953_ == 0)
{
lean_dec(v_a_1905_);
return v___x_1904_;
}
else
{
lean_dec_ref(v___x_1904_);
goto v___jp_1906_;
}
}
else
{
lean_dec_ref(v___x_1904_);
goto v___jp_1906_;
}
}
else
{
lean_dec_ref(v___x_1904_);
goto v___jp_1906_;
}
v___jp_1906_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_visitedExpr_1909_; lean_object* v___x_1910_; 
v___x_1907_ = lean_st_ref_get(v_a_1902_);
lean_dec(v___x_1907_);
v___x_1908_ = lean_st_ref_get(v_a_1898_);
v_visitedExpr_1909_ = lean_ctor_get(v___x_1908_, 1);
lean_inc_ref(v_visitedExpr_1909_);
lean_dec(v___x_1908_);
v___x_1910_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1909_, v_a_1905_);
lean_dec_ref(v_visitedExpr_1909_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v___x_1911_; 
lean_inc(v_a_1905_);
v___x_1911_ = l_Lean_Meta_Closure_collectExprAux(v_a_1905_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1942_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1942_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1942_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v_visitedLevel_1918_; lean_object* v_visitedExpr_1919_; lean_object* v_levelParams_1920_; lean_object* v_nextLevelIdx_1921_; lean_object* v_levelArgs_1922_; lean_object* v_newLocalDecls_1923_; lean_object* v_newLocalDeclsForMVars_1924_; lean_object* v_newLetDecls_1925_; lean_object* v_nextExprIdx_1926_; lean_object* v_exprMVarArgs_1927_; lean_object* v_exprFVarArgs_1928_; lean_object* v_toProcess_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1941_; 
v___x_1916_ = lean_st_ref_get(v_a_1902_);
lean_dec(v___x_1916_);
v___x_1917_ = lean_st_ref_take(v_a_1898_);
v_visitedLevel_1918_ = lean_ctor_get(v___x_1917_, 0);
v_visitedExpr_1919_ = lean_ctor_get(v___x_1917_, 1);
v_levelParams_1920_ = lean_ctor_get(v___x_1917_, 2);
v_nextLevelIdx_1921_ = lean_ctor_get(v___x_1917_, 3);
v_levelArgs_1922_ = lean_ctor_get(v___x_1917_, 4);
v_newLocalDecls_1923_ = lean_ctor_get(v___x_1917_, 5);
v_newLocalDeclsForMVars_1924_ = lean_ctor_get(v___x_1917_, 6);
v_newLetDecls_1925_ = lean_ctor_get(v___x_1917_, 7);
v_nextExprIdx_1926_ = lean_ctor_get(v___x_1917_, 8);
v_exprMVarArgs_1927_ = lean_ctor_get(v___x_1917_, 9);
v_exprFVarArgs_1928_ = lean_ctor_get(v___x_1917_, 10);
v_toProcess_1929_ = lean_ctor_get(v___x_1917_, 11);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1931_ = v___x_1917_;
v_isShared_1932_ = v_isSharedCheck_1941_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_toProcess_1929_);
lean_inc(v_exprFVarArgs_1928_);
lean_inc(v_exprMVarArgs_1927_);
lean_inc(v_nextExprIdx_1926_);
lean_inc(v_newLetDecls_1925_);
lean_inc(v_newLocalDeclsForMVars_1924_);
lean_inc(v_newLocalDecls_1923_);
lean_inc(v_levelArgs_1922_);
lean_inc(v_nextLevelIdx_1921_);
lean_inc(v_levelParams_1920_);
lean_inc(v_visitedExpr_1919_);
lean_inc(v_visitedLevel_1918_);
lean_dec(v___x_1917_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1941_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1933_; lean_object* v___x_1935_; 
lean_inc(v_a_1912_);
v___x_1933_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1919_, v_a_1905_, v_a_1912_);
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 1, v___x_1933_);
v___x_1935_ = v___x_1931_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_visitedLevel_1918_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v___x_1933_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v_levelParams_1920_);
lean_ctor_set(v_reuseFailAlloc_1940_, 3, v_nextLevelIdx_1921_);
lean_ctor_set(v_reuseFailAlloc_1940_, 4, v_levelArgs_1922_);
lean_ctor_set(v_reuseFailAlloc_1940_, 5, v_newLocalDecls_1923_);
lean_ctor_set(v_reuseFailAlloc_1940_, 6, v_newLocalDeclsForMVars_1924_);
lean_ctor_set(v_reuseFailAlloc_1940_, 7, v_newLetDecls_1925_);
lean_ctor_set(v_reuseFailAlloc_1940_, 8, v_nextExprIdx_1926_);
lean_ctor_set(v_reuseFailAlloc_1940_, 9, v_exprMVarArgs_1927_);
lean_ctor_set(v_reuseFailAlloc_1940_, 10, v_exprFVarArgs_1928_);
lean_ctor_set(v_reuseFailAlloc_1940_, 11, v_toProcess_1929_);
v___x_1935_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1936_; lean_object* v___x_1938_; 
v___x_1936_ = lean_st_ref_set(v_a_1898_, v___x_1935_);
if (v_isShared_1915_ == 0)
{
v___x_1938_ = v___x_1914_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1912_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
}
else
{
lean_dec(v_a_1905_);
return v___x_1911_;
}
}
else
{
lean_object* v_val_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec(v_a_1905_);
v_val_1943_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1910_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_val_1943_);
lean_dec(v___x_1910_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 0);
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_val_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
}
else
{
return v___x_1904_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object* v_e_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_){
_start:
{
uint8_t v_a_boxed_1962_; lean_object* v_res_1963_; 
v_a_boxed_1962_ = lean_unbox(v_a_1955_);
v_res_1963_ = l_Lean_Meta_Closure_collectExpr(v_e_1954_, v_a_boxed_1962_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object* v_lctx_1964_, lean_object* v_i_1965_, lean_object* v_toProcess_1966_, lean_object* v_elem_1967_){
_start:
{
lean_object* v___x_1968_; uint8_t v___x_1969_; 
v___x_1968_ = lean_array_get_size(v_toProcess_1966_);
v___x_1969_ = lean_nat_dec_lt(v_i_1965_, v___x_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; 
lean_dec(v_i_1965_);
lean_dec_ref(v_lctx_1964_);
v___x_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1970_, 0, v_elem_1967_);
lean_ctor_set(v___x_1970_, 1, v_toProcess_1966_);
return v___x_1970_;
}
else
{
lean_object* v_fvarId_1971_; lean_object* v_elem_x27_1972_; lean_object* v_fvarId_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; uint8_t v___x_1978_; 
v_fvarId_1971_ = lean_ctor_get(v_elem_1967_, 0);
v_elem_x27_1972_ = lean_array_fget_borrowed(v_toProcess_1966_, v_i_1965_);
v_fvarId_1973_ = lean_ctor_get(v_elem_x27_1972_, 0);
lean_inc(v_fvarId_1971_);
lean_inc_ref_n(v_lctx_1964_, 2);
v___x_1974_ = l_Lean_LocalContext_get_x21(v_lctx_1964_, v_fvarId_1971_);
v___x_1975_ = l_Lean_LocalDecl_index(v___x_1974_);
lean_dec_ref(v___x_1974_);
lean_inc(v_fvarId_1973_);
v___x_1976_ = l_Lean_LocalContext_get_x21(v_lctx_1964_, v_fvarId_1973_);
v___x_1977_ = l_Lean_LocalDecl_index(v___x_1976_);
lean_dec_ref(v___x_1976_);
v___x_1978_ = lean_nat_dec_lt(v___x_1975_, v___x_1977_);
lean_dec(v___x_1977_);
lean_dec(v___x_1975_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = lean_unsigned_to_nat(1u);
v___x_1980_ = lean_nat_add(v_i_1965_, v___x_1979_);
lean_dec(v_i_1965_);
v_i_1965_ = v___x_1980_;
goto _start;
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
lean_inc(v_elem_x27_1972_);
v___x_1982_ = lean_unsigned_to_nat(1u);
v___x_1983_ = lean_nat_add(v_i_1965_, v___x_1982_);
v___x_1984_ = lean_array_fset(v_toProcess_1966_, v_i_1965_, v_elem_1967_);
lean_dec(v_i_1965_);
v_i_1965_ = v___x_1983_;
v_toProcess_1966_ = v___x_1984_;
v_elem_1967_ = v_elem_x27_1972_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v_toProcess_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v___x_1990_ = lean_st_ref_get(v_a_1988_);
lean_dec(v___x_1990_);
v___x_1991_ = lean_st_ref_get(v_a_1986_);
v_toProcess_1992_ = lean_ctor_get(v___x_1991_, 11);
lean_inc_ref(v_toProcess_1992_);
lean_dec(v___x_1991_);
v___x_1993_ = lean_array_get_size(v_toProcess_1992_);
lean_dec_ref(v_toProcess_1992_);
v___x_1994_ = lean_unsigned_to_nat(0u);
v___x_1995_ = lean_nat_dec_eq(v___x_1993_, v___x_1994_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v_lctx_1998_; lean_object* v_visitedLevel_1999_; lean_object* v_visitedExpr_2000_; lean_object* v_levelParams_2001_; lean_object* v_nextLevelIdx_2002_; lean_object* v_levelArgs_2003_; lean_object* v_newLocalDecls_2004_; lean_object* v_newLocalDeclsForMVars_2005_; lean_object* v_newLetDecls_2006_; lean_object* v_nextExprIdx_2007_; lean_object* v_exprMVarArgs_2008_; lean_object* v_exprFVarArgs_2009_; lean_object* v_toProcess_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2029_; 
v___x_1996_ = lean_st_ref_get(v_a_1988_);
lean_dec(v___x_1996_);
v___x_1997_ = lean_st_ref_take(v_a_1986_);
v_lctx_1998_ = lean_ctor_get(v_a_1987_, 2);
v_visitedLevel_1999_ = lean_ctor_get(v___x_1997_, 0);
v_visitedExpr_2000_ = lean_ctor_get(v___x_1997_, 1);
v_levelParams_2001_ = lean_ctor_get(v___x_1997_, 2);
v_nextLevelIdx_2002_ = lean_ctor_get(v___x_1997_, 3);
v_levelArgs_2003_ = lean_ctor_get(v___x_1997_, 4);
v_newLocalDecls_2004_ = lean_ctor_get(v___x_1997_, 5);
v_newLocalDeclsForMVars_2005_ = lean_ctor_get(v___x_1997_, 6);
v_newLetDecls_2006_ = lean_ctor_get(v___x_1997_, 7);
v_nextExprIdx_2007_ = lean_ctor_get(v___x_1997_, 8);
v_exprMVarArgs_2008_ = lean_ctor_get(v___x_1997_, 9);
v_exprFVarArgs_2009_ = lean_ctor_get(v___x_1997_, 10);
v_toProcess_2010_ = lean_ctor_get(v___x_1997_, 11);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2012_ = v___x_1997_;
v_isShared_2013_ = v_isSharedCheck_2029_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_toProcess_2010_);
lean_inc(v_exprFVarArgs_2009_);
lean_inc(v_exprMVarArgs_2008_);
lean_inc(v_nextExprIdx_2007_);
lean_inc(v_newLetDecls_2006_);
lean_inc(v_newLocalDeclsForMVars_2005_);
lean_inc(v_newLocalDecls_2004_);
lean_inc(v_levelArgs_2003_);
lean_inc(v_nextLevelIdx_2002_);
lean_inc(v_levelParams_2001_);
lean_inc(v_visitedExpr_2000_);
lean_inc(v_visitedLevel_1999_);
lean_dec(v___x_1997_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2029_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v_fst_2021_; lean_object* v_snd_2022_; lean_object* v___x_2024_; 
v___x_2014_ = l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
v___x_2015_ = lean_array_get_size(v_toProcess_2010_);
v___x_2016_ = lean_unsigned_to_nat(1u);
v___x_2017_ = lean_nat_sub(v___x_2015_, v___x_2016_);
v___x_2018_ = lean_array_get(v___x_2014_, v_toProcess_2010_, v___x_2017_);
lean_dec(v___x_2017_);
v___x_2019_ = lean_array_pop(v_toProcess_2010_);
lean_inc_ref(v_lctx_1998_);
v___x_2020_ = l_Lean_Meta_Closure_pickNextToProcessAux(v_lctx_1998_, v___x_1994_, v___x_2019_, v___x_2018_);
v_fst_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_fst_2021_);
v_snd_2022_ = lean_ctor_get(v___x_2020_, 1);
lean_inc(v_snd_2022_);
lean_dec_ref(v___x_2020_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 11, v_snd_2022_);
v___x_2024_ = v___x_2012_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_visitedLevel_1999_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v_visitedExpr_2000_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_levelParams_2001_);
lean_ctor_set(v_reuseFailAlloc_2028_, 3, v_nextLevelIdx_2002_);
lean_ctor_set(v_reuseFailAlloc_2028_, 4, v_levelArgs_2003_);
lean_ctor_set(v_reuseFailAlloc_2028_, 5, v_newLocalDecls_2004_);
lean_ctor_set(v_reuseFailAlloc_2028_, 6, v_newLocalDeclsForMVars_2005_);
lean_ctor_set(v_reuseFailAlloc_2028_, 7, v_newLetDecls_2006_);
lean_ctor_set(v_reuseFailAlloc_2028_, 8, v_nextExprIdx_2007_);
lean_ctor_set(v_reuseFailAlloc_2028_, 9, v_exprMVarArgs_2008_);
lean_ctor_set(v_reuseFailAlloc_2028_, 10, v_exprFVarArgs_2009_);
lean_ctor_set(v_reuseFailAlloc_2028_, 11, v_snd_2022_);
v___x_2024_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2025_ = lean_st_ref_set(v_a_1986_, v___x_2024_);
v___x_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2026_, 0, v_fst_2021_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
return v___x_2027_;
}
}
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_2032_, v_a_2033_, v_a_2034_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_2038_, v_a_2039_, v_a_2042_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_){
_start:
{
uint8_t v_a_boxed_2052_; lean_object* v_res_2053_; 
v_a_boxed_2052_ = lean_unbox(v_a_2045_);
v_res_2053_ = l_Lean_Meta_Closure_pickNextToProcess_x3f(v_a_boxed_2052_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_);
lean_dec(v_a_2050_);
lean_dec_ref(v_a_2049_);
lean_dec(v_a_2048_);
lean_dec_ref(v_a_2047_);
lean_dec(v_a_2046_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object* v_e_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v_visitedLevel_2060_; lean_object* v_visitedExpr_2061_; lean_object* v_levelParams_2062_; lean_object* v_nextLevelIdx_2063_; lean_object* v_levelArgs_2064_; lean_object* v_newLocalDecls_2065_; lean_object* v_newLocalDeclsForMVars_2066_; lean_object* v_newLetDecls_2067_; lean_object* v_nextExprIdx_2068_; lean_object* v_exprMVarArgs_2069_; lean_object* v_exprFVarArgs_2070_; lean_object* v_toProcess_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2082_; 
v___x_2058_ = lean_st_ref_get(v_a_2056_);
lean_dec(v___x_2058_);
v___x_2059_ = lean_st_ref_take(v_a_2055_);
v_visitedLevel_2060_ = lean_ctor_get(v___x_2059_, 0);
v_visitedExpr_2061_ = lean_ctor_get(v___x_2059_, 1);
v_levelParams_2062_ = lean_ctor_get(v___x_2059_, 2);
v_nextLevelIdx_2063_ = lean_ctor_get(v___x_2059_, 3);
v_levelArgs_2064_ = lean_ctor_get(v___x_2059_, 4);
v_newLocalDecls_2065_ = lean_ctor_get(v___x_2059_, 5);
v_newLocalDeclsForMVars_2066_ = lean_ctor_get(v___x_2059_, 6);
v_newLetDecls_2067_ = lean_ctor_get(v___x_2059_, 7);
v_nextExprIdx_2068_ = lean_ctor_get(v___x_2059_, 8);
v_exprMVarArgs_2069_ = lean_ctor_get(v___x_2059_, 9);
v_exprFVarArgs_2070_ = lean_ctor_get(v___x_2059_, 10);
v_toProcess_2071_ = lean_ctor_get(v___x_2059_, 11);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2073_ = v___x_2059_;
v_isShared_2074_ = v_isSharedCheck_2082_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_toProcess_2071_);
lean_inc(v_exprFVarArgs_2070_);
lean_inc(v_exprMVarArgs_2069_);
lean_inc(v_nextExprIdx_2068_);
lean_inc(v_newLetDecls_2067_);
lean_inc(v_newLocalDeclsForMVars_2066_);
lean_inc(v_newLocalDecls_2065_);
lean_inc(v_levelArgs_2064_);
lean_inc(v_nextLevelIdx_2063_);
lean_inc(v_levelParams_2062_);
lean_inc(v_visitedExpr_2061_);
lean_inc(v_visitedLevel_2060_);
lean_dec(v___x_2059_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2082_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2075_; lean_object* v___x_2077_; 
v___x_2075_ = lean_array_push(v_exprFVarArgs_2070_, v_e_2054_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 10, v___x_2075_);
v___x_2077_ = v___x_2073_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_visitedLevel_2060_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_visitedExpr_2061_);
lean_ctor_set(v_reuseFailAlloc_2081_, 2, v_levelParams_2062_);
lean_ctor_set(v_reuseFailAlloc_2081_, 3, v_nextLevelIdx_2063_);
lean_ctor_set(v_reuseFailAlloc_2081_, 4, v_levelArgs_2064_);
lean_ctor_set(v_reuseFailAlloc_2081_, 5, v_newLocalDecls_2065_);
lean_ctor_set(v_reuseFailAlloc_2081_, 6, v_newLocalDeclsForMVars_2066_);
lean_ctor_set(v_reuseFailAlloc_2081_, 7, v_newLetDecls_2067_);
lean_ctor_set(v_reuseFailAlloc_2081_, 8, v_nextExprIdx_2068_);
lean_ctor_set(v_reuseFailAlloc_2081_, 9, v_exprMVarArgs_2069_);
lean_ctor_set(v_reuseFailAlloc_2081_, 10, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2081_, 11, v_toProcess_2071_);
v___x_2077_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_st_ref_set(v_a_2055_, v___x_2077_);
v___x_2079_ = lean_box(0);
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object* v_e_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2083_, v_a_2084_, v_a_2085_);
lean_dec(v_a_2085_);
lean_dec(v_a_2084_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object* v_e_2088_, uint8_t v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2088_, v_a_2090_, v_a_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object* v_e_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_){
_start:
{
uint8_t v_a_boxed_2105_; lean_object* v_res_2106_; 
v_a_boxed_2105_ = lean_unbox(v_a_2098_);
v_res_2106_ = l_Lean_Meta_Closure_pushFVarArg(v_e_2097_, v_a_boxed_2105_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
lean_dec(v_a_2101_);
lean_dec_ref(v_a_2100_);
lean_dec(v_a_2099_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object* v_newFVarId_2107_, lean_object* v_userName_2108_, lean_object* v_type_2109_, uint8_t v_bi_2110_, uint8_t v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_Meta_Closure_collectExpr(v_type_2109_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2153_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2153_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2153_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v_visitedLevel_2125_; lean_object* v_visitedExpr_2126_; lean_object* v_levelParams_2127_; lean_object* v_nextLevelIdx_2128_; lean_object* v_levelArgs_2129_; lean_object* v_newLocalDecls_2130_; lean_object* v_newLocalDeclsForMVars_2131_; lean_object* v_newLetDecls_2132_; lean_object* v_nextExprIdx_2133_; lean_object* v_exprMVarArgs_2134_; lean_object* v_exprFVarArgs_2135_; lean_object* v_toProcess_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2152_; 
v___x_2123_ = lean_st_ref_get(v_a_2116_);
lean_dec(v___x_2123_);
v___x_2124_ = lean_st_ref_take(v_a_2112_);
v_visitedLevel_2125_ = lean_ctor_get(v___x_2124_, 0);
v_visitedExpr_2126_ = lean_ctor_get(v___x_2124_, 1);
v_levelParams_2127_ = lean_ctor_get(v___x_2124_, 2);
v_nextLevelIdx_2128_ = lean_ctor_get(v___x_2124_, 3);
v_levelArgs_2129_ = lean_ctor_get(v___x_2124_, 4);
v_newLocalDecls_2130_ = lean_ctor_get(v___x_2124_, 5);
v_newLocalDeclsForMVars_2131_ = lean_ctor_get(v___x_2124_, 6);
v_newLetDecls_2132_ = lean_ctor_get(v___x_2124_, 7);
v_nextExprIdx_2133_ = lean_ctor_get(v___x_2124_, 8);
v_exprMVarArgs_2134_ = lean_ctor_get(v___x_2124_, 9);
v_exprFVarArgs_2135_ = lean_ctor_get(v___x_2124_, 10);
v_toProcess_2136_ = lean_ctor_get(v___x_2124_, 11);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2138_ = v___x_2124_;
v_isShared_2139_ = v_isSharedCheck_2152_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_toProcess_2136_);
lean_inc(v_exprFVarArgs_2135_);
lean_inc(v_exprMVarArgs_2134_);
lean_inc(v_nextExprIdx_2133_);
lean_inc(v_newLetDecls_2132_);
lean_inc(v_newLocalDeclsForMVars_2131_);
lean_inc(v_newLocalDecls_2130_);
lean_inc(v_levelArgs_2129_);
lean_inc(v_nextLevelIdx_2128_);
lean_inc(v_levelParams_2127_);
lean_inc(v_visitedExpr_2126_);
lean_inc(v_visitedLevel_2125_);
lean_dec(v___x_2124_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2152_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; uint8_t v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2140_ = lean_unsigned_to_nat(0u);
v___x_2141_ = 0;
v___x_2142_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v_newFVarId_2107_);
lean_ctor_set(v___x_2142_, 2, v_userName_2108_);
lean_ctor_set(v___x_2142_, 3, v_a_2119_);
lean_ctor_set_uint8(v___x_2142_, sizeof(void*)*4, v_bi_2110_);
lean_ctor_set_uint8(v___x_2142_, sizeof(void*)*4 + 1, v___x_2141_);
v___x_2143_ = lean_array_push(v_newLocalDecls_2130_, v___x_2142_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 5, v___x_2143_);
v___x_2145_ = v___x_2138_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_visitedLevel_2125_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_visitedExpr_2126_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_levelParams_2127_);
lean_ctor_set(v_reuseFailAlloc_2151_, 3, v_nextLevelIdx_2128_);
lean_ctor_set(v_reuseFailAlloc_2151_, 4, v_levelArgs_2129_);
lean_ctor_set(v_reuseFailAlloc_2151_, 5, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2151_, 6, v_newLocalDeclsForMVars_2131_);
lean_ctor_set(v_reuseFailAlloc_2151_, 7, v_newLetDecls_2132_);
lean_ctor_set(v_reuseFailAlloc_2151_, 8, v_nextExprIdx_2133_);
lean_ctor_set(v_reuseFailAlloc_2151_, 9, v_exprMVarArgs_2134_);
lean_ctor_set(v_reuseFailAlloc_2151_, 10, v_exprFVarArgs_2135_);
lean_ctor_set(v_reuseFailAlloc_2151_, 11, v_toProcess_2136_);
v___x_2145_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2149_; 
v___x_2146_ = lean_st_ref_set(v_a_2112_, v___x_2145_);
v___x_2147_ = lean_box(0);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2147_);
v___x_2149_ = v___x_2121_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v_userName_2108_);
lean_dec(v_newFVarId_2107_);
v_a_2154_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2118_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2118_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object* v_newFVarId_2162_, lean_object* v_userName_2163_, lean_object* v_type_2164_, lean_object* v_bi_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
uint8_t v_bi_boxed_2173_; uint8_t v_a_boxed_2174_; lean_object* v_res_2175_; 
v_bi_boxed_2173_ = lean_unbox(v_bi_2165_);
v_a_boxed_2174_ = lean_unbox(v_a_2166_);
v_res_2175_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2162_, v_userName_2163_, v_type_2164_, v_bi_boxed_2173_, v_a_boxed_2174_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
lean_dec(v_a_2169_);
lean_dec_ref(v_a_2168_);
lean_dec(v_a_2167_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object* v_newFVarId_2176_, lean_object* v_a_2177_, size_t v_sz_2178_, size_t v_i_2179_, lean_object* v_bs_2180_){
_start:
{
uint8_t v___x_2181_; 
v___x_2181_ = lean_usize_dec_lt(v_i_2179_, v_sz_2178_);
if (v___x_2181_ == 0)
{
lean_dec(v_newFVarId_2176_);
return v_bs_2180_;
}
else
{
lean_object* v_v_2182_; lean_object* v___x_2183_; lean_object* v_bs_x27_2184_; lean_object* v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v_v_2182_ = lean_array_uget(v_bs_2180_, v_i_2179_);
v___x_2183_ = lean_unsigned_to_nat(0u);
v_bs_x27_2184_ = lean_array_uset(v_bs_2180_, v_i_2179_, v___x_2183_);
lean_inc(v_newFVarId_2176_);
v___x_2185_ = l_Lean_LocalDecl_replaceFVarId(v_newFVarId_2176_, v_a_2177_, v_v_2182_);
v___x_2186_ = ((size_t)1ULL);
v___x_2187_ = lean_usize_add(v_i_2179_, v___x_2186_);
v___x_2188_ = lean_array_uset(v_bs_x27_2184_, v_i_2179_, v___x_2185_);
v_i_2179_ = v___x_2187_;
v_bs_2180_ = v___x_2188_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object* v_newFVarId_2190_, lean_object* v_a_2191_, lean_object* v_sz_2192_, lean_object* v_i_2193_, lean_object* v_bs_2194_){
_start:
{
size_t v_sz_boxed_2195_; size_t v_i_boxed_2196_; lean_object* v_res_2197_; 
v_sz_boxed_2195_ = lean_unbox_usize(v_sz_2192_);
lean_dec(v_sz_2192_);
v_i_boxed_2196_ = lean_unbox_usize(v_i_2193_);
lean_dec(v_i_2193_);
v_res_2197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2190_, v_a_2191_, v_sz_boxed_2195_, v_i_boxed_2196_, v_bs_2194_);
lean_dec_ref(v_a_2191_);
return v_res_2197_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object* v_k_2198_, lean_object* v_t_2199_){
_start:
{
if (lean_obj_tag(v_t_2199_) == 0)
{
lean_object* v_k_2200_; lean_object* v_l_2201_; lean_object* v_r_2202_; uint8_t v___x_2203_; 
v_k_2200_ = lean_ctor_get(v_t_2199_, 1);
v_l_2201_ = lean_ctor_get(v_t_2199_, 3);
v_r_2202_ = lean_ctor_get(v_t_2199_, 4);
v___x_2203_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2198_, v_k_2200_);
switch(v___x_2203_)
{
case 0:
{
v_t_2199_ = v_l_2201_;
goto _start;
}
case 1:
{
uint8_t v___x_2205_; 
v___x_2205_ = 1;
return v___x_2205_;
}
default: 
{
v_t_2199_ = v_r_2202_;
goto _start;
}
}
}
else
{
uint8_t v___x_2207_; 
v___x_2207_ = 0;
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object* v_k_2208_, lean_object* v_t_2209_){
_start:
{
uint8_t v_res_2210_; lean_object* v_r_2211_; 
v_res_2210_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2208_, v_t_2209_);
lean_dec(v_t_2209_);
lean_dec(v_k_2208_);
v_r_2211_ = lean_box(v_res_2210_);
return v_r_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_2213_, v_a_2214_, v_a_2217_);
if (lean_obj_tag(v___x_2219_) == 0)
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2349_; 
v_a_2220_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2222_ = v___x_2219_;
v_isShared_2223_ = v_isSharedCheck_2349_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2219_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2349_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
if (lean_obj_tag(v_a_2220_) == 0)
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2224_ = lean_box(0);
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v___x_2224_);
v___x_2226_ = v___x_2222_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
else
{
lean_object* v_val_2228_; lean_object* v_fvarId_2229_; lean_object* v_newFVarId_2230_; lean_object* v___x_2231_; 
lean_del_object(v___x_2222_);
v_val_2228_ = lean_ctor_get(v_a_2220_, 0);
lean_inc(v_val_2228_);
lean_dec_ref(v_a_2220_);
v_fvarId_2229_ = lean_ctor_get(v_val_2228_, 0);
lean_inc_n(v_fvarId_2229_, 2);
v_newFVarId_2230_ = lean_ctor_get(v_val_2228_, 1);
lean_inc(v_newFVarId_2230_);
lean_dec(v_val_2228_);
v___x_2231_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_2229_, v_a_2214_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v_a_2232_; 
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_a_2232_);
lean_dec_ref(v___x_2231_);
if (lean_obj_tag(v_a_2232_) == 0)
{
lean_object* v_userName_2233_; lean_object* v_type_2234_; uint8_t v_bi_2235_; lean_object* v___x_2236_; 
v_userName_2233_ = lean_ctor_get(v_a_2232_, 2);
lean_inc(v_userName_2233_);
v_type_2234_ = lean_ctor_get(v_a_2232_, 3);
lean_inc_ref(v_type_2234_);
v_bi_2235_ = lean_ctor_get_uint8(v_a_2232_, sizeof(void*)*4);
lean_dec_ref(v_a_2232_);
v___x_2236_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2230_, v_userName_2233_, v_type_2234_, v_bi_2235_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref(v___x_2236_);
v___x_2237_ = l_Lean_mkFVar(v_fvarId_2229_);
v___x_2238_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2237_, v_a_2213_, v_a_2217_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_dec_ref(v___x_2238_);
goto _start;
}
else
{
return v___x_2238_;
}
}
else
{
lean_dec(v_fvarId_2229_);
return v___x_2236_;
}
}
else
{
lean_object* v_userName_2240_; lean_object* v_type_2241_; lean_object* v_value_2242_; uint8_t v_nondep_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2338_; 
v_userName_2240_ = lean_ctor_get(v_a_2232_, 2);
v_type_2241_ = lean_ctor_get(v_a_2232_, 3);
v_value_2242_ = lean_ctor_get(v_a_2232_, 4);
v_nondep_2243_ = lean_ctor_get_uint8(v_a_2232_, sizeof(void*)*5);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_a_2232_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; lean_object* v_unused_2340_; 
v_unused_2339_ = lean_ctor_get(v_a_2232_, 1);
lean_dec(v_unused_2339_);
v_unused_2340_ = lean_ctor_get(v_a_2232_, 0);
lean_dec(v_unused_2340_);
v___x_2245_ = v_a_2232_;
v_isShared_2246_ = v_isSharedCheck_2338_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_value_2242_);
lean_inc(v_type_2241_);
lean_inc(v_userName_2240_);
lean_dec(v_a_2232_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2338_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v_a_2215_, v_a_2217_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref(v___x_2247_);
if (v_nondep_2243_ == 0)
{
uint8_t v___x_2255_; 
v___x_2255_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_fvarId_2229_, v_a_2248_);
lean_dec(v_a_2248_);
if (v___x_2255_ == 0)
{
lean_del_object(v___x_2245_);
lean_dec_ref(v_value_2242_);
goto v___jp_2249_;
}
else
{
lean_object* v___x_2256_; 
lean_dec(v_fvarId_2229_);
v___x_2256_ = l_Lean_Meta_Closure_collectExpr(v_type_2241_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_a_2257_; lean_object* v___x_2258_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref(v___x_2256_);
v___x_2258_ = l_Lean_Meta_Closure_collectExpr(v_value_2242_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v_visitedLevel_2262_; lean_object* v_visitedExpr_2263_; lean_object* v_levelParams_2264_; lean_object* v_nextLevelIdx_2265_; lean_object* v_levelArgs_2266_; lean_object* v_newLocalDecls_2267_; lean_object* v_newLocalDeclsForMVars_2268_; lean_object* v_newLetDecls_2269_; lean_object* v_nextExprIdx_2270_; lean_object* v_exprMVarArgs_2271_; lean_object* v_exprFVarArgs_2272_; lean_object* v_toProcess_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2313_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref(v___x_2258_);
v___x_2260_ = lean_st_ref_get(v_a_2217_);
lean_dec(v___x_2260_);
v___x_2261_ = lean_st_ref_take(v_a_2213_);
v_visitedLevel_2262_ = lean_ctor_get(v___x_2261_, 0);
v_visitedExpr_2263_ = lean_ctor_get(v___x_2261_, 1);
v_levelParams_2264_ = lean_ctor_get(v___x_2261_, 2);
v_nextLevelIdx_2265_ = lean_ctor_get(v___x_2261_, 3);
v_levelArgs_2266_ = lean_ctor_get(v___x_2261_, 4);
v_newLocalDecls_2267_ = lean_ctor_get(v___x_2261_, 5);
v_newLocalDeclsForMVars_2268_ = lean_ctor_get(v___x_2261_, 6);
v_newLetDecls_2269_ = lean_ctor_get(v___x_2261_, 7);
v_nextExprIdx_2270_ = lean_ctor_get(v___x_2261_, 8);
v_exprMVarArgs_2271_ = lean_ctor_get(v___x_2261_, 9);
v_exprFVarArgs_2272_ = lean_ctor_get(v___x_2261_, 10);
v_toProcess_2273_ = lean_ctor_get(v___x_2261_, 11);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2275_ = v___x_2261_;
v_isShared_2276_ = v_isSharedCheck_2313_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_toProcess_2273_);
lean_inc(v_exprFVarArgs_2272_);
lean_inc(v_exprMVarArgs_2271_);
lean_inc(v_nextExprIdx_2270_);
lean_inc(v_newLetDecls_2269_);
lean_inc(v_newLocalDeclsForMVars_2268_);
lean_inc(v_newLocalDecls_2267_);
lean_inc(v_levelArgs_2266_);
lean_inc(v_nextLevelIdx_2265_);
lean_inc(v_levelParams_2264_);
lean_inc(v_visitedExpr_2263_);
lean_inc(v_visitedLevel_2262_);
lean_dec(v___x_2261_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2313_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; uint8_t v___x_2278_; lean_object* v___x_2280_; 
v___x_2277_ = lean_unsigned_to_nat(0u);
v___x_2278_ = 0;
lean_inc(v_a_2259_);
lean_inc(v_newFVarId_2230_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 4, v_a_2259_);
lean_ctor_set(v___x_2245_, 3, v_a_2257_);
lean_ctor_set(v___x_2245_, 1, v_newFVarId_2230_);
lean_ctor_set(v___x_2245_, 0, v___x_2277_);
v___x_2280_ = v___x_2245_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2277_);
lean_ctor_set(v_reuseFailAlloc_2312_, 1, v_newFVarId_2230_);
lean_ctor_set(v_reuseFailAlloc_2312_, 2, v_userName_2240_);
lean_ctor_set(v_reuseFailAlloc_2312_, 3, v_a_2257_);
lean_ctor_set(v_reuseFailAlloc_2312_, 4, v_a_2259_);
lean_ctor_set_uint8(v_reuseFailAlloc_2312_, sizeof(void*)*5, v_nondep_2243_);
v___x_2280_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2283_; 
lean_ctor_set_uint8(v___x_2280_, sizeof(void*)*5 + 1, v___x_2278_);
v___x_2281_ = lean_array_push(v_newLetDecls_2269_, v___x_2280_);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 7, v___x_2281_);
v___x_2283_ = v___x_2275_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_visitedLevel_2262_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v_visitedExpr_2263_);
lean_ctor_set(v_reuseFailAlloc_2311_, 2, v_levelParams_2264_);
lean_ctor_set(v_reuseFailAlloc_2311_, 3, v_nextLevelIdx_2265_);
lean_ctor_set(v_reuseFailAlloc_2311_, 4, v_levelArgs_2266_);
lean_ctor_set(v_reuseFailAlloc_2311_, 5, v_newLocalDecls_2267_);
lean_ctor_set(v_reuseFailAlloc_2311_, 6, v_newLocalDeclsForMVars_2268_);
lean_ctor_set(v_reuseFailAlloc_2311_, 7, v___x_2281_);
lean_ctor_set(v_reuseFailAlloc_2311_, 8, v_nextExprIdx_2270_);
lean_ctor_set(v_reuseFailAlloc_2311_, 9, v_exprMVarArgs_2271_);
lean_ctor_set(v_reuseFailAlloc_2311_, 10, v_exprFVarArgs_2272_);
lean_ctor_set(v_reuseFailAlloc_2311_, 11, v_toProcess_2273_);
v___x_2283_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v_visitedLevel_2287_; lean_object* v_visitedExpr_2288_; lean_object* v_levelParams_2289_; lean_object* v_nextLevelIdx_2290_; lean_object* v_levelArgs_2291_; lean_object* v_newLocalDecls_2292_; lean_object* v_newLocalDeclsForMVars_2293_; lean_object* v_newLetDecls_2294_; lean_object* v_nextExprIdx_2295_; lean_object* v_exprMVarArgs_2296_; lean_object* v_exprFVarArgs_2297_; lean_object* v_toProcess_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2310_; 
v___x_2284_ = lean_st_ref_set(v_a_2213_, v___x_2283_);
v___x_2285_ = lean_st_ref_get(v_a_2217_);
lean_dec(v___x_2285_);
v___x_2286_ = lean_st_ref_take(v_a_2213_);
v_visitedLevel_2287_ = lean_ctor_get(v___x_2286_, 0);
v_visitedExpr_2288_ = lean_ctor_get(v___x_2286_, 1);
v_levelParams_2289_ = lean_ctor_get(v___x_2286_, 2);
v_nextLevelIdx_2290_ = lean_ctor_get(v___x_2286_, 3);
v_levelArgs_2291_ = lean_ctor_get(v___x_2286_, 4);
v_newLocalDecls_2292_ = lean_ctor_get(v___x_2286_, 5);
v_newLocalDeclsForMVars_2293_ = lean_ctor_get(v___x_2286_, 6);
v_newLetDecls_2294_ = lean_ctor_get(v___x_2286_, 7);
v_nextExprIdx_2295_ = lean_ctor_get(v___x_2286_, 8);
v_exprMVarArgs_2296_ = lean_ctor_get(v___x_2286_, 9);
v_exprFVarArgs_2297_ = lean_ctor_get(v___x_2286_, 10);
v_toProcess_2298_ = lean_ctor_get(v___x_2286_, 11);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2286_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2300_ = v___x_2286_;
v_isShared_2301_ = v_isSharedCheck_2310_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_toProcess_2298_);
lean_inc(v_exprFVarArgs_2297_);
lean_inc(v_exprMVarArgs_2296_);
lean_inc(v_nextExprIdx_2295_);
lean_inc(v_newLetDecls_2294_);
lean_inc(v_newLocalDeclsForMVars_2293_);
lean_inc(v_newLocalDecls_2292_);
lean_inc(v_levelArgs_2291_);
lean_inc(v_nextLevelIdx_2290_);
lean_inc(v_levelParams_2289_);
lean_inc(v_visitedExpr_2288_);
lean_inc(v_visitedLevel_2287_);
lean_dec(v___x_2286_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2310_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
size_t v_sz_2302_; size_t v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2306_; 
v_sz_2302_ = lean_array_size(v_newLocalDecls_2292_);
v___x_2303_ = ((size_t)0ULL);
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2230_, v_a_2259_, v_sz_2302_, v___x_2303_, v_newLocalDecls_2292_);
lean_dec(v_a_2259_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 5, v___x_2304_);
v___x_2306_ = v___x_2300_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_visitedLevel_2287_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_visitedExpr_2288_);
lean_ctor_set(v_reuseFailAlloc_2309_, 2, v_levelParams_2289_);
lean_ctor_set(v_reuseFailAlloc_2309_, 3, v_nextLevelIdx_2290_);
lean_ctor_set(v_reuseFailAlloc_2309_, 4, v_levelArgs_2291_);
lean_ctor_set(v_reuseFailAlloc_2309_, 5, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2309_, 6, v_newLocalDeclsForMVars_2293_);
lean_ctor_set(v_reuseFailAlloc_2309_, 7, v_newLetDecls_2294_);
lean_ctor_set(v_reuseFailAlloc_2309_, 8, v_nextExprIdx_2295_);
lean_ctor_set(v_reuseFailAlloc_2309_, 9, v_exprMVarArgs_2296_);
lean_ctor_set(v_reuseFailAlloc_2309_, 10, v_exprFVarArgs_2297_);
lean_ctor_set(v_reuseFailAlloc_2309_, 11, v_toProcess_2298_);
v___x_2306_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_st_ref_set(v_a_2213_, v___x_2306_);
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec(v_a_2257_);
lean_del_object(v___x_2245_);
lean_dec(v_userName_2240_);
lean_dec(v_newFVarId_2230_);
v_a_2314_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2258_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2258_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_del_object(v___x_2245_);
lean_dec_ref(v_value_2242_);
lean_dec(v_userName_2240_);
lean_dec(v_newFVarId_2230_);
v_a_2322_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2256_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2256_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
else
{
lean_dec(v_a_2248_);
lean_del_object(v___x_2245_);
lean_dec_ref(v_value_2242_);
goto v___jp_2249_;
}
v___jp_2249_:
{
uint8_t v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = 0;
v___x_2251_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2230_, v_userName_2240_, v_type_2241_, v___x_2250_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
lean_dec_ref(v___x_2251_);
v___x_2252_ = l_Lean_mkFVar(v_fvarId_2229_);
v___x_2253_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2252_, v_a_2213_, v_a_2217_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_dec_ref(v___x_2253_);
goto _start;
}
else
{
return v___x_2253_;
}
}
else
{
lean_dec(v_fvarId_2229_);
return v___x_2251_;
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_del_object(v___x_2245_);
lean_dec_ref(v_value_2242_);
lean_dec_ref(v_type_2241_);
lean_dec(v_userName_2240_);
lean_dec(v_newFVarId_2230_);
lean_dec(v_fvarId_2229_);
v_a_2330_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2247_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2247_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_newFVarId_2230_);
lean_dec(v_fvarId_2229_);
v_a_2341_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2231_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2231_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
v_a_2350_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2219_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2219_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_){
_start:
{
uint8_t v_a_boxed_2365_; lean_object* v_res_2366_; 
v_a_boxed_2365_ = lean_unbox(v_a_2358_);
v_res_2366_ = l_Lean_Meta_Closure_process(v_a_boxed_2365_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_);
lean_dec(v_a_2363_);
lean_dec_ref(v_a_2362_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
return v_res_2366_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object* v_00_u03b2_2367_, lean_object* v_k_2368_, lean_object* v_t_2369_){
_start:
{
uint8_t v___x_2370_; 
v___x_2370_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2368_, v_t_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object* v_00_u03b2_2371_, lean_object* v_k_2372_, lean_object* v_t_2373_){
_start:
{
uint8_t v_res_2374_; lean_object* v_r_2375_; 
v_res_2374_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(v_00_u03b2_2371_, v_k_2372_, v_t_2373_);
lean_dec(v_t_2373_);
lean_dec(v_k_2372_);
v_r_2375_ = lean_box(v_res_2374_);
return v_r_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object* v_decls_2376_, lean_object* v_xs_2377_, uint8_t v_isLambda_2378_, lean_object* v_i_2379_, lean_object* v_x_2380_, lean_object* v_b_2381_){
_start:
{
lean_object* v_decl_2382_; 
v_decl_2382_ = lean_array_fget_borrowed(v_decls_2376_, v_i_2379_);
if (lean_obj_tag(v_decl_2382_) == 0)
{
lean_object* v_userName_2383_; lean_object* v_type_2384_; uint8_t v_bi_2385_; lean_object* v_ty_2386_; 
v_userName_2383_ = lean_ctor_get(v_decl_2382_, 2);
v_type_2384_ = lean_ctor_get(v_decl_2382_, 3);
v_bi_2385_ = lean_ctor_get_uint8(v_decl_2382_, sizeof(void*)*4);
v_ty_2386_ = lean_expr_abstract_range(v_type_2384_, v_i_2379_, v_xs_2377_);
if (v_isLambda_2378_ == 0)
{
lean_object* v___x_2387_; 
lean_inc(v_userName_2383_);
v___x_2387_ = l_Lean_mkForall(v_userName_2383_, v_bi_2385_, v_ty_2386_, v_b_2381_);
return v___x_2387_;
}
else
{
lean_object* v___x_2388_; 
lean_inc(v_userName_2383_);
v___x_2388_ = l_Lean_mkLambda(v_userName_2383_, v_bi_2385_, v_ty_2386_, v_b_2381_);
return v___x_2388_;
}
}
else
{
lean_object* v_userName_2389_; lean_object* v_type_2390_; lean_object* v_value_2391_; uint8_t v_nondep_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v_userName_2389_ = lean_ctor_get(v_decl_2382_, 2);
v_type_2390_ = lean_ctor_get(v_decl_2382_, 3);
v_value_2391_ = lean_ctor_get(v_decl_2382_, 4);
v_nondep_2392_ = lean_ctor_get_uint8(v_decl_2382_, sizeof(void*)*5);
v___x_2393_ = lean_unsigned_to_nat(0u);
v___x_2394_ = lean_expr_has_loose_bvar(v_b_2381_, v___x_2393_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = lean_unsigned_to_nat(1u);
v___x_2396_ = lean_expr_lower_loose_bvars(v_b_2381_, v___x_2395_, v___x_2395_);
lean_dec_ref(v_b_2381_);
return v___x_2396_;
}
else
{
lean_object* v_ty_2397_; lean_object* v_val_2398_; lean_object* v___x_2399_; 
v_ty_2397_ = lean_expr_abstract_range(v_type_2390_, v_i_2379_, v_xs_2377_);
v_val_2398_ = lean_expr_abstract_range(v_value_2391_, v_i_2379_, v_xs_2377_);
lean_inc(v_userName_2389_);
v___x_2399_ = l_Lean_Expr_letE___override(v_userName_2389_, v_ty_2397_, v_val_2398_, v_b_2381_, v_nondep_2392_);
return v___x_2399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object* v_decls_2400_, lean_object* v_xs_2401_, lean_object* v_isLambda_2402_, lean_object* v_i_2403_, lean_object* v_x_2404_, lean_object* v_b_2405_){
_start:
{
uint8_t v_isLambda_boxed_2406_; lean_object* v_res_2407_; 
v_isLambda_boxed_2406_ = lean_unbox(v_isLambda_2402_);
v_res_2407_ = l_Lean_Meta_Closure_mkBinding___lam__0(v_decls_2400_, v_xs_2401_, v_isLambda_boxed_2406_, v_i_2403_, v_x_2404_, v_b_2405_);
lean_dec(v_i_2403_);
lean_dec_ref(v_xs_2401_);
lean_dec_ref(v_decls_2400_);
return v_res_2407_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__0(void){
_start:
{
lean_object* v___f_2408_; 
v___f_2408_ = lean_alloc_closure((void*)(l_Lean_LocalDecl_toExpr), 1, 0);
return v___f_2408_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__1(void){
_start:
{
lean_object* v___f_2409_; 
v___f_2409_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_2409_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__2(void){
_start:
{
lean_object* v___f_2410_; 
v___f_2410_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_2410_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__3(void){
_start:
{
lean_object* v___f_2411_; 
v___f_2411_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_2411_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__4(void){
_start:
{
lean_object* v___f_2412_; 
v___f_2412_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_2412_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__5(void){
_start:
{
lean_object* v___f_2413_; 
v___f_2413_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_2413_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__6(void){
_start:
{
lean_object* v___f_2414_; 
v___f_2414_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_2414_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__7(void){
_start:
{
lean_object* v___f_2415_; 
v___f_2415_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_2415_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__8(void){
_start:
{
lean_object* v___f_2416_; lean_object* v___f_2417_; lean_object* v___x_2418_; 
v___f_2416_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__2, &l_Lean_Meta_Closure_mkBinding___closed__2_once, _init_l_Lean_Meta_Closure_mkBinding___closed__2);
v___f_2417_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__1, &l_Lean_Meta_Closure_mkBinding___closed__1_once, _init_l_Lean_Meta_Closure_mkBinding___closed__1);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___f_2417_);
lean_ctor_set(v___x_2418_, 1, v___f_2416_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__9(void){
_start:
{
lean_object* v___f_2419_; lean_object* v___f_2420_; lean_object* v___f_2421_; lean_object* v___f_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___f_2419_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__6, &l_Lean_Meta_Closure_mkBinding___closed__6_once, _init_l_Lean_Meta_Closure_mkBinding___closed__6);
v___f_2420_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__5, &l_Lean_Meta_Closure_mkBinding___closed__5_once, _init_l_Lean_Meta_Closure_mkBinding___closed__5);
v___f_2421_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__4, &l_Lean_Meta_Closure_mkBinding___closed__4_once, _init_l_Lean_Meta_Closure_mkBinding___closed__4);
v___f_2422_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__3, &l_Lean_Meta_Closure_mkBinding___closed__3_once, _init_l_Lean_Meta_Closure_mkBinding___closed__3);
v___x_2423_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__8, &l_Lean_Meta_Closure_mkBinding___closed__8_once, _init_l_Lean_Meta_Closure_mkBinding___closed__8);
v___x_2424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
lean_ctor_set(v___x_2424_, 1, v___f_2422_);
lean_ctor_set(v___x_2424_, 2, v___f_2421_);
lean_ctor_set(v___x_2424_, 3, v___f_2420_);
lean_ctor_set(v___x_2424_, 4, v___f_2419_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkBinding___closed__10(void){
_start:
{
lean_object* v___f_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___f_2425_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__7, &l_Lean_Meta_Closure_mkBinding___closed__7_once, _init_l_Lean_Meta_Closure_mkBinding___closed__7);
v___x_2426_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__9, &l_Lean_Meta_Closure_mkBinding___closed__9_once, _init_l_Lean_Meta_Closure_mkBinding___closed__9);
v___x_2427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
lean_ctor_set(v___x_2427_, 1, v___f_2425_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t v_isLambda_2428_, lean_object* v_decls_2429_, lean_object* v_b_2430_){
_start:
{
lean_object* v___f_2431_; lean_object* v___x_2432_; size_t v_sz_2433_; size_t v___x_2434_; lean_object* v_xs_2435_; lean_object* v___x_2436_; lean_object* v___f_2437_; lean_object* v_b_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___f_2431_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__0, &l_Lean_Meta_Closure_mkBinding___closed__0_once, _init_l_Lean_Meta_Closure_mkBinding___closed__0);
v___x_2432_ = lean_obj_once(&l_Lean_Meta_Closure_mkBinding___closed__10, &l_Lean_Meta_Closure_mkBinding___closed__10_once, _init_l_Lean_Meta_Closure_mkBinding___closed__10);
v_sz_2433_ = lean_array_size(v_decls_2429_);
v___x_2434_ = ((size_t)0ULL);
lean_inc_ref_n(v_decls_2429_, 2);
v_xs_2435_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2432_, v___f_2431_, v_sz_2433_, v___x_2434_, v_decls_2429_);
v___x_2436_ = lean_box(v_isLambda_2428_);
lean_inc(v_xs_2435_);
v___f_2437_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkBinding___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2437_, 0, v_decls_2429_);
lean_closure_set(v___f_2437_, 1, v_xs_2435_);
lean_closure_set(v___f_2437_, 2, v___x_2436_);
v_b_2438_ = lean_expr_abstract(v_b_2430_, v_xs_2435_);
lean_dec(v_xs_2435_);
v___x_2439_ = lean_array_get_size(v_decls_2429_);
lean_dec_ref(v_decls_2429_);
v___x_2440_ = l_Nat_foldRev___redArg(v___x_2439_, v___f_2437_, v_b_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object* v_isLambda_2441_, lean_object* v_decls_2442_, lean_object* v_b_2443_){
_start:
{
uint8_t v_isLambda_boxed_2444_; lean_object* v_res_2445_; 
v_isLambda_boxed_2444_ = lean_unbox(v_isLambda_2441_);
v_res_2445_ = l_Lean_Meta_Closure_mkBinding(v_isLambda_boxed_2444_, v_decls_2442_, v_b_2443_);
lean_dec_ref(v_b_2443_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t v_sz_2446_, size_t v_i_2447_, lean_object* v_bs_2448_){
_start:
{
uint8_t v___x_2449_; 
v___x_2449_ = lean_usize_dec_lt(v_i_2447_, v_sz_2446_);
if (v___x_2449_ == 0)
{
return v_bs_2448_;
}
else
{
lean_object* v_v_2450_; lean_object* v___x_2451_; lean_object* v_bs_x27_2452_; lean_object* v___x_2453_; size_t v___x_2454_; size_t v___x_2455_; lean_object* v___x_2456_; 
v_v_2450_ = lean_array_uget(v_bs_2448_, v_i_2447_);
v___x_2451_ = lean_unsigned_to_nat(0u);
v_bs_x27_2452_ = lean_array_uset(v_bs_2448_, v_i_2447_, v___x_2451_);
v___x_2453_ = l_Lean_LocalDecl_toExpr(v_v_2450_);
v___x_2454_ = ((size_t)1ULL);
v___x_2455_ = lean_usize_add(v_i_2447_, v___x_2454_);
v___x_2456_ = lean_array_uset(v_bs_x27_2452_, v_i_2447_, v___x_2453_);
v_i_2447_ = v___x_2455_;
v_bs_2448_ = v___x_2456_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object* v_sz_2458_, lean_object* v_i_2459_, lean_object* v_bs_2460_){
_start:
{
size_t v_sz_boxed_2461_; size_t v_i_boxed_2462_; lean_object* v_res_2463_; 
v_sz_boxed_2461_ = lean_unbox_usize(v_sz_2458_);
lean_dec(v_sz_2458_);
v_i_boxed_2462_ = lean_unbox_usize(v_i_2459_);
lean_dec(v_i_2459_);
v_res_2463_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_boxed_2461_, v_i_boxed_2462_, v_bs_2460_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object* v_decls_2464_, lean_object* v_xs_2465_, lean_object* v_x_2466_, lean_object* v_x_2467_){
_start:
{
lean_object* v_zero_2468_; uint8_t v_isZero_2469_; 
v_zero_2468_ = lean_unsigned_to_nat(0u);
v_isZero_2469_ = lean_nat_dec_eq(v_x_2466_, v_zero_2468_);
if (v_isZero_2469_ == 1)
{
lean_dec(v_x_2466_);
return v_x_2467_;
}
else
{
lean_object* v_one_2470_; lean_object* v_n_2471_; lean_object* v_decl_2472_; 
v_one_2470_ = lean_unsigned_to_nat(1u);
v_n_2471_ = lean_nat_sub(v_x_2466_, v_one_2470_);
lean_dec(v_x_2466_);
v_decl_2472_ = lean_array_fget_borrowed(v_decls_2464_, v_n_2471_);
if (lean_obj_tag(v_decl_2472_) == 0)
{
lean_object* v_userName_2473_; lean_object* v_type_2474_; uint8_t v_bi_2475_; lean_object* v_ty_2476_; lean_object* v___x_2477_; 
v_userName_2473_ = lean_ctor_get(v_decl_2472_, 2);
v_type_2474_ = lean_ctor_get(v_decl_2472_, 3);
v_bi_2475_ = lean_ctor_get_uint8(v_decl_2472_, sizeof(void*)*4);
v_ty_2476_ = lean_expr_abstract_range(v_type_2474_, v_n_2471_, v_xs_2465_);
lean_inc(v_userName_2473_);
v___x_2477_ = l_Lean_mkLambda(v_userName_2473_, v_bi_2475_, v_ty_2476_, v_x_2467_);
v_x_2466_ = v_n_2471_;
v_x_2467_ = v___x_2477_;
goto _start;
}
else
{
lean_object* v_userName_2479_; lean_object* v_type_2480_; lean_object* v_value_2481_; uint8_t v_nondep_2482_; uint8_t v___x_2483_; 
v_userName_2479_ = lean_ctor_get(v_decl_2472_, 2);
v_type_2480_ = lean_ctor_get(v_decl_2472_, 3);
v_value_2481_ = lean_ctor_get(v_decl_2472_, 4);
v_nondep_2482_ = lean_ctor_get_uint8(v_decl_2472_, sizeof(void*)*5);
v___x_2483_ = lean_expr_has_loose_bvar(v_x_2467_, v_zero_2468_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_expr_lower_loose_bvars(v_x_2467_, v_one_2470_, v_one_2470_);
lean_dec_ref(v_x_2467_);
v_x_2466_ = v_n_2471_;
v_x_2467_ = v___x_2484_;
goto _start;
}
else
{
lean_object* v_ty_2486_; lean_object* v_val_2487_; lean_object* v___x_2488_; 
v_ty_2486_ = lean_expr_abstract_range(v_type_2480_, v_n_2471_, v_xs_2465_);
v_val_2487_ = lean_expr_abstract_range(v_value_2481_, v_n_2471_, v_xs_2465_);
lean_inc(v_userName_2479_);
v___x_2488_ = l_Lean_Expr_letE___override(v_userName_2479_, v_ty_2486_, v_val_2487_, v_x_2467_, v_nondep_2482_);
v_x_2466_ = v_n_2471_;
v_x_2467_ = v___x_2488_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object* v_decls_2490_, lean_object* v_xs_2491_, lean_object* v_x_2492_, lean_object* v_x_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2490_, v_xs_2491_, v_x_2492_, v_x_2493_);
lean_dec_ref(v_xs_2491_);
lean_dec_ref(v_decls_2490_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object* v_decls_2495_, lean_object* v_xs_2496_, lean_object* v_x_2497_, lean_object* v_x_2498_){
_start:
{
lean_object* v_zero_2499_; uint8_t v_isZero_2500_; 
v_zero_2499_ = lean_unsigned_to_nat(0u);
v_isZero_2500_ = lean_nat_dec_eq(v_x_2497_, v_zero_2499_);
if (v_isZero_2500_ == 1)
{
return v_x_2498_;
}
else
{
lean_object* v_one_2501_; lean_object* v_n_2502_; lean_object* v_decl_2503_; 
v_one_2501_ = lean_unsigned_to_nat(1u);
v_n_2502_ = lean_nat_sub(v_x_2497_, v_one_2501_);
v_decl_2503_ = lean_array_fget_borrowed(v_decls_2495_, v_n_2502_);
if (lean_obj_tag(v_decl_2503_) == 0)
{
lean_object* v_userName_2504_; lean_object* v_type_2505_; uint8_t v_bi_2506_; lean_object* v_ty_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v_userName_2504_ = lean_ctor_get(v_decl_2503_, 2);
v_type_2505_ = lean_ctor_get(v_decl_2503_, 3);
v_bi_2506_ = lean_ctor_get_uint8(v_decl_2503_, sizeof(void*)*4);
v_ty_2507_ = lean_expr_abstract_range(v_type_2505_, v_n_2502_, v_xs_2496_);
lean_inc(v_userName_2504_);
v___x_2508_ = l_Lean_mkLambda(v_userName_2504_, v_bi_2506_, v_ty_2507_, v_x_2498_);
v___x_2509_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2495_, v_xs_2496_, v_n_2502_, v___x_2508_);
return v___x_2509_;
}
else
{
lean_object* v_userName_2510_; lean_object* v_type_2511_; lean_object* v_value_2512_; uint8_t v_nondep_2513_; uint8_t v___x_2514_; 
v_userName_2510_ = lean_ctor_get(v_decl_2503_, 2);
v_type_2511_ = lean_ctor_get(v_decl_2503_, 3);
v_value_2512_ = lean_ctor_get(v_decl_2503_, 4);
v_nondep_2513_ = lean_ctor_get_uint8(v_decl_2503_, sizeof(void*)*5);
v___x_2514_ = lean_expr_has_loose_bvar(v_x_2498_, v_zero_2499_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lean_expr_lower_loose_bvars(v_x_2498_, v_one_2501_, v_one_2501_);
lean_dec_ref(v_x_2498_);
v___x_2516_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2495_, v_xs_2496_, v_n_2502_, v___x_2515_);
return v___x_2516_;
}
else
{
lean_object* v_ty_2517_; lean_object* v_val_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v_ty_2517_ = lean_expr_abstract_range(v_type_2511_, v_n_2502_, v_xs_2496_);
v_val_2518_ = lean_expr_abstract_range(v_value_2512_, v_n_2502_, v_xs_2496_);
lean_inc(v_userName_2510_);
v___x_2519_ = l_Lean_Expr_letE___override(v_userName_2510_, v_ty_2517_, v_val_2518_, v_x_2498_, v_nondep_2513_);
v___x_2520_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2495_, v_xs_2496_, v_n_2502_, v___x_2519_);
return v___x_2520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object* v_decls_2521_, lean_object* v_xs_2522_, lean_object* v_x_2523_, lean_object* v_x_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2521_, v_xs_2522_, v_x_2523_, v_x_2524_);
lean_dec(v_x_2523_);
lean_dec_ref(v_xs_2522_);
lean_dec_ref(v_decls_2521_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object* v_decls_2526_, lean_object* v_b_2527_){
_start:
{
size_t v_sz_2528_; size_t v___x_2529_; lean_object* v_xs_2530_; lean_object* v_b_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v_sz_2528_ = lean_array_size(v_decls_2526_);
v___x_2529_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2526_);
v_xs_2530_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2528_, v___x_2529_, v_decls_2526_);
v_b_2531_ = lean_expr_abstract(v_b_2527_, v_xs_2530_);
v___x_2532_ = lean_array_get_size(v_decls_2526_);
v___x_2533_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2526_, v_xs_2530_, v___x_2532_, v_b_2531_);
lean_dec_ref(v_xs_2530_);
lean_dec_ref(v_decls_2526_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object* v_decls_2534_, lean_object* v_b_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lean_Meta_Closure_mkLambda(v_decls_2534_, v_b_2535_);
lean_dec_ref(v_b_2535_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object* v_decls_2537_, lean_object* v_xs_2538_, lean_object* v_x_2539_, lean_object* v_x_2540_){
_start:
{
lean_object* v_zero_2541_; uint8_t v_isZero_2542_; 
v_zero_2541_ = lean_unsigned_to_nat(0u);
v_isZero_2542_ = lean_nat_dec_eq(v_x_2539_, v_zero_2541_);
if (v_isZero_2542_ == 1)
{
lean_dec(v_x_2539_);
return v_x_2540_;
}
else
{
lean_object* v_one_2543_; lean_object* v_n_2544_; lean_object* v_decl_2545_; 
v_one_2543_ = lean_unsigned_to_nat(1u);
v_n_2544_ = lean_nat_sub(v_x_2539_, v_one_2543_);
lean_dec(v_x_2539_);
v_decl_2545_ = lean_array_fget_borrowed(v_decls_2537_, v_n_2544_);
if (lean_obj_tag(v_decl_2545_) == 0)
{
lean_object* v_userName_2546_; lean_object* v_type_2547_; uint8_t v_bi_2548_; lean_object* v_ty_2549_; lean_object* v___x_2550_; 
v_userName_2546_ = lean_ctor_get(v_decl_2545_, 2);
v_type_2547_ = lean_ctor_get(v_decl_2545_, 3);
v_bi_2548_ = lean_ctor_get_uint8(v_decl_2545_, sizeof(void*)*4);
v_ty_2549_ = lean_expr_abstract_range(v_type_2547_, v_n_2544_, v_xs_2538_);
lean_inc(v_userName_2546_);
v___x_2550_ = l_Lean_mkForall(v_userName_2546_, v_bi_2548_, v_ty_2549_, v_x_2540_);
v_x_2539_ = v_n_2544_;
v_x_2540_ = v___x_2550_;
goto _start;
}
else
{
lean_object* v_userName_2552_; lean_object* v_type_2553_; lean_object* v_value_2554_; uint8_t v_nondep_2555_; uint8_t v___x_2556_; 
v_userName_2552_ = lean_ctor_get(v_decl_2545_, 2);
v_type_2553_ = lean_ctor_get(v_decl_2545_, 3);
v_value_2554_ = lean_ctor_get(v_decl_2545_, 4);
v_nondep_2555_ = lean_ctor_get_uint8(v_decl_2545_, sizeof(void*)*5);
v___x_2556_ = lean_expr_has_loose_bvar(v_x_2540_, v_zero_2541_);
if (v___x_2556_ == 0)
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_expr_lower_loose_bvars(v_x_2540_, v_one_2543_, v_one_2543_);
lean_dec_ref(v_x_2540_);
v_x_2539_ = v_n_2544_;
v_x_2540_ = v___x_2557_;
goto _start;
}
else
{
lean_object* v_ty_2559_; lean_object* v_val_2560_; lean_object* v___x_2561_; 
v_ty_2559_ = lean_expr_abstract_range(v_type_2553_, v_n_2544_, v_xs_2538_);
v_val_2560_ = lean_expr_abstract_range(v_value_2554_, v_n_2544_, v_xs_2538_);
lean_inc(v_userName_2552_);
v___x_2561_ = l_Lean_Expr_letE___override(v_userName_2552_, v_ty_2559_, v_val_2560_, v_x_2540_, v_nondep_2555_);
v_x_2539_ = v_n_2544_;
v_x_2540_ = v___x_2561_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object* v_decls_2563_, lean_object* v_xs_2564_, lean_object* v_x_2565_, lean_object* v_x_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2563_, v_xs_2564_, v_x_2565_, v_x_2566_);
lean_dec_ref(v_xs_2564_);
lean_dec_ref(v_decls_2563_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object* v_decls_2568_, lean_object* v_xs_2569_, lean_object* v_x_2570_, lean_object* v_x_2571_){
_start:
{
lean_object* v_zero_2572_; uint8_t v_isZero_2573_; 
v_zero_2572_ = lean_unsigned_to_nat(0u);
v_isZero_2573_ = lean_nat_dec_eq(v_x_2570_, v_zero_2572_);
if (v_isZero_2573_ == 1)
{
return v_x_2571_;
}
else
{
lean_object* v_one_2574_; lean_object* v_n_2575_; lean_object* v_decl_2576_; 
v_one_2574_ = lean_unsigned_to_nat(1u);
v_n_2575_ = lean_nat_sub(v_x_2570_, v_one_2574_);
v_decl_2576_ = lean_array_fget_borrowed(v_decls_2568_, v_n_2575_);
if (lean_obj_tag(v_decl_2576_) == 0)
{
lean_object* v_userName_2577_; lean_object* v_type_2578_; uint8_t v_bi_2579_; lean_object* v_ty_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v_userName_2577_ = lean_ctor_get(v_decl_2576_, 2);
v_type_2578_ = lean_ctor_get(v_decl_2576_, 3);
v_bi_2579_ = lean_ctor_get_uint8(v_decl_2576_, sizeof(void*)*4);
v_ty_2580_ = lean_expr_abstract_range(v_type_2578_, v_n_2575_, v_xs_2569_);
lean_inc(v_userName_2577_);
v___x_2581_ = l_Lean_mkForall(v_userName_2577_, v_bi_2579_, v_ty_2580_, v_x_2571_);
v___x_2582_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2568_, v_xs_2569_, v_n_2575_, v___x_2581_);
return v___x_2582_;
}
else
{
lean_object* v_userName_2583_; lean_object* v_type_2584_; lean_object* v_value_2585_; uint8_t v_nondep_2586_; uint8_t v___x_2587_; 
v_userName_2583_ = lean_ctor_get(v_decl_2576_, 2);
v_type_2584_ = lean_ctor_get(v_decl_2576_, 3);
v_value_2585_ = lean_ctor_get(v_decl_2576_, 4);
v_nondep_2586_ = lean_ctor_get_uint8(v_decl_2576_, sizeof(void*)*5);
v___x_2587_ = lean_expr_has_loose_bvar(v_x_2571_, v_zero_2572_);
if (v___x_2587_ == 0)
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_expr_lower_loose_bvars(v_x_2571_, v_one_2574_, v_one_2574_);
lean_dec_ref(v_x_2571_);
v___x_2589_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2568_, v_xs_2569_, v_n_2575_, v___x_2588_);
return v___x_2589_;
}
else
{
lean_object* v_ty_2590_; lean_object* v_val_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_ty_2590_ = lean_expr_abstract_range(v_type_2584_, v_n_2575_, v_xs_2569_);
v_val_2591_ = lean_expr_abstract_range(v_value_2585_, v_n_2575_, v_xs_2569_);
lean_inc(v_userName_2583_);
v___x_2592_ = l_Lean_Expr_letE___override(v_userName_2583_, v_ty_2590_, v_val_2591_, v_x_2571_, v_nondep_2586_);
v___x_2593_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2568_, v_xs_2569_, v_n_2575_, v___x_2592_);
return v___x_2593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object* v_decls_2594_, lean_object* v_xs_2595_, lean_object* v_x_2596_, lean_object* v_x_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2594_, v_xs_2595_, v_x_2596_, v_x_2597_);
lean_dec(v_x_2596_);
lean_dec_ref(v_xs_2595_);
lean_dec_ref(v_decls_2594_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object* v_decls_2599_, lean_object* v_b_2600_){
_start:
{
size_t v_sz_2601_; size_t v___x_2602_; lean_object* v_xs_2603_; lean_object* v_b_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_sz_2601_ = lean_array_size(v_decls_2599_);
v___x_2602_ = ((size_t)0ULL);
lean_inc_ref(v_decls_2599_);
v_xs_2603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2601_, v___x_2602_, v_decls_2599_);
v_b_2604_ = lean_expr_abstract(v_b_2600_, v_xs_2603_);
v___x_2605_ = lean_array_get_size(v_decls_2599_);
v___x_2606_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2599_, v_xs_2603_, v___x_2605_, v_b_2604_);
lean_dec_ref(v_xs_2603_);
lean_dec_ref(v_decls_2599_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object* v_decls_2607_, lean_object* v_b_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l_Lean_Meta_Closure_mkForall(v_decls_2607_, v_b_2608_);
lean_dec_ref(v_b_2608_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_zetaDeltaFVarIds_2612_, lean_object* v_a_x3f_2613_){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v_mctx_2617_; lean_object* v_cache_2618_; lean_object* v_postponed_2619_; lean_object* v_diag_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2630_; 
v___x_2615_ = lean_st_ref_get(v_a_2610_);
lean_dec(v___x_2615_);
v___x_2616_ = lean_st_ref_take(v_a_2611_);
v_mctx_2617_ = lean_ctor_get(v___x_2616_, 0);
v_cache_2618_ = lean_ctor_get(v___x_2616_, 1);
v_postponed_2619_ = lean_ctor_get(v___x_2616_, 3);
v_diag_2620_ = lean_ctor_get(v___x_2616_, 4);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2630_ == 0)
{
lean_object* v_unused_2631_; 
v_unused_2631_ = lean_ctor_get(v___x_2616_, 2);
lean_dec(v_unused_2631_);
v___x_2622_ = v___x_2616_;
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_diag_2620_);
lean_inc(v_postponed_2619_);
lean_inc(v_cache_2618_);
lean_inc(v_mctx_2617_);
lean_dec(v___x_2616_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 2, v_zetaDeltaFVarIds_2612_);
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_mctx_2617_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_cache_2618_);
lean_ctor_set(v_reuseFailAlloc_2629_, 2, v_zetaDeltaFVarIds_2612_);
lean_ctor_set(v_reuseFailAlloc_2629_, 3, v_postponed_2619_);
lean_ctor_set(v_reuseFailAlloc_2629_, 4, v_diag_2620_);
v___x_2625_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2626_ = lean_st_ref_set(v_a_2611_, v___x_2625_);
v___x_2627_ = lean_box(0);
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2627_);
return v___x_2628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_zetaDeltaFVarIds_2634_, lean_object* v_a_x3f_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2632_, v_a_2633_, v_zetaDeltaFVarIds_2634_, v_a_x3f_2635_);
lean_dec(v_a_x3f_2635_);
lean_dec(v_a_2633_);
lean_dec(v_a_2632_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_cache_2640_, lean_object* v_a_x3f_2641_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v_mctx_2645_; lean_object* v_zetaDeltaFVarIds_2646_; lean_object* v_postponed_2647_; lean_object* v_diag_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2658_; 
v___x_2643_ = lean_st_ref_get(v_a_2638_);
lean_dec(v___x_2643_);
v___x_2644_ = lean_st_ref_take(v_a_2639_);
v_mctx_2645_ = lean_ctor_get(v___x_2644_, 0);
v_zetaDeltaFVarIds_2646_ = lean_ctor_get(v___x_2644_, 2);
v_postponed_2647_ = lean_ctor_get(v___x_2644_, 3);
v_diag_2648_ = lean_ctor_get(v___x_2644_, 4);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2658_ == 0)
{
lean_object* v_unused_2659_; 
v_unused_2659_ = lean_ctor_get(v___x_2644_, 1);
lean_dec(v_unused_2659_);
v___x_2650_ = v___x_2644_;
v_isShared_2651_ = v_isSharedCheck_2658_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_diag_2648_);
lean_inc(v_postponed_2647_);
lean_inc(v_zetaDeltaFVarIds_2646_);
lean_inc(v_mctx_2645_);
lean_dec(v___x_2644_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2658_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2653_; 
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 1, v_cache_2640_);
v___x_2653_ = v___x_2650_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_mctx_2645_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v_cache_2640_);
lean_ctor_set(v_reuseFailAlloc_2657_, 2, v_zetaDeltaFVarIds_2646_);
lean_ctor_set(v_reuseFailAlloc_2657_, 3, v_postponed_2647_);
lean_ctor_set(v_reuseFailAlloc_2657_, 4, v_diag_2648_);
v___x_2653_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_st_ref_set(v_a_2639_, v___x_2653_);
v___x_2655_ = lean_box(0);
v___x_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
return v___x_2656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_cache_2662_, lean_object* v_a_x3f_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2660_, v_a_2661_, v_cache_2662_, v_a_x3f_2663_);
lean_dec(v_a_x3f_2663_);
lean_dec(v_a_2661_);
lean_dec(v_a_2660_);
return v_res_2665_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0(void){
_start:
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2666_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1(void){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2669_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1);
v___x_2670_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
lean_ctor_set(v___x_2670_, 2, v___x_2669_);
lean_ctor_set(v___x_2670_, 3, v___x_2669_);
lean_ctor_set(v___x_2670_, 4, v___x_2669_);
lean_ctor_set(v___x_2670_, 5, v___x_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object* v_type_2671_, lean_object* v_value_2672_, uint8_t v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v_mctx_2684_; lean_object* v_zetaDeltaFVarIds_2685_; lean_object* v_postponed_2686_; lean_object* v_diag_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2768_; 
v___x_2680_ = lean_st_ref_get(v_a_2678_);
lean_dec(v___x_2680_);
v___x_2681_ = lean_st_ref_get(v_a_2676_);
v___x_2682_ = lean_st_ref_get(v_a_2678_);
lean_dec(v___x_2682_);
v___x_2683_ = lean_st_ref_take(v_a_2676_);
v_mctx_2684_ = lean_ctor_get(v___x_2683_, 0);
v_zetaDeltaFVarIds_2685_ = lean_ctor_get(v___x_2683_, 2);
v_postponed_2686_ = lean_ctor_get(v___x_2683_, 3);
v_diag_2687_ = lean_ctor_get(v___x_2683_, 4);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v___x_2683_, 1);
lean_dec(v_unused_2769_);
v___x_2689_ = v___x_2683_;
v_isShared_2690_ = v_isSharedCheck_2768_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_diag_2687_);
lean_inc(v_postponed_2686_);
lean_inc(v_zetaDeltaFVarIds_2685_);
lean_inc(v_mctx_2684_);
lean_dec(v___x_2683_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2768_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2691_; lean_object* v___x_2693_; 
v___x_2691_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2);
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 1, v___x_2691_);
v___x_2693_ = v___x_2689_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_mctx_2684_);
lean_ctor_set(v_reuseFailAlloc_2767_, 1, v___x_2691_);
lean_ctor_set(v_reuseFailAlloc_2767_, 2, v_zetaDeltaFVarIds_2685_);
lean_ctor_set(v_reuseFailAlloc_2767_, 3, v_postponed_2686_);
lean_ctor_set(v_reuseFailAlloc_2767_, 4, v_diag_2687_);
v___x_2693_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v_mctx_2697_; lean_object* v_cache_2698_; lean_object* v_zetaDeltaFVarIds_2699_; lean_object* v_postponed_2700_; lean_object* v_diag_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2766_; 
v___x_2694_ = lean_st_ref_set(v_a_2676_, v___x_2693_);
v___x_2695_ = lean_st_ref_get(v_a_2678_);
lean_dec(v___x_2695_);
v___x_2696_ = lean_st_ref_take(v_a_2676_);
v_mctx_2697_ = lean_ctor_get(v___x_2696_, 0);
v_cache_2698_ = lean_ctor_get(v___x_2696_, 1);
v_zetaDeltaFVarIds_2699_ = lean_ctor_get(v___x_2696_, 2);
v_postponed_2700_ = lean_ctor_get(v___x_2696_, 3);
v_diag_2701_ = lean_ctor_get(v___x_2696_, 4);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2703_ = v___x_2696_;
v_isShared_2704_ = v_isSharedCheck_2766_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_diag_2701_);
lean_inc(v_postponed_2700_);
lean_inc(v_zetaDeltaFVarIds_2699_);
lean_inc(v_cache_2698_);
lean_inc(v_mctx_2697_);
lean_dec(v___x_2696_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2766_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2705_; lean_object* v___x_2707_; 
v___x_2705_ = lean_box(1);
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 2, v___x_2705_);
v___x_2707_ = v___x_2703_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_mctx_2697_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v_cache_2698_);
lean_ctor_set(v_reuseFailAlloc_2765_, 2, v___x_2705_);
lean_ctor_set(v_reuseFailAlloc_2765_, 3, v_postponed_2700_);
lean_ctor_set(v_reuseFailAlloc_2765_, 4, v_diag_2701_);
v___x_2707_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2708_; lean_object* v_cache_2709_; lean_object* v_keyedConfig_2710_; lean_object* v_zetaDeltaSet_2711_; lean_object* v_lctx_2712_; lean_object* v_localInstances_2713_; lean_object* v_defEqCtx_x3f_2714_; lean_object* v_synthPendingDepth_2715_; lean_object* v_canUnfold_x3f_2716_; uint8_t v_univApprox_2717_; uint8_t v_inTypeClassResolution_2718_; uint8_t v_cacheInferType_2719_; lean_object* v_a_2721_; lean_object* v_a_2733_; uint8_t v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2708_ = lean_st_ref_set(v_a_2676_, v___x_2707_);
v_cache_2709_ = lean_ctor_get(v___x_2681_, 1);
lean_inc_ref(v_cache_2709_);
lean_dec(v___x_2681_);
v_keyedConfig_2710_ = lean_ctor_get(v_a_2675_, 0);
v_zetaDeltaSet_2711_ = lean_ctor_get(v_a_2675_, 1);
v_lctx_2712_ = lean_ctor_get(v_a_2675_, 2);
v_localInstances_2713_ = lean_ctor_get(v_a_2675_, 3);
v_defEqCtx_x3f_2714_ = lean_ctor_get(v_a_2675_, 4);
v_synthPendingDepth_2715_ = lean_ctor_get(v_a_2675_, 5);
v_canUnfold_x3f_2716_ = lean_ctor_get(v_a_2675_, 6);
v_univApprox_2717_ = lean_ctor_get_uint8(v_a_2675_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2718_ = lean_ctor_get_uint8(v_a_2675_, sizeof(void*)*7 + 2);
v_cacheInferType_2719_ = lean_ctor_get_uint8(v_a_2675_, sizeof(void*)*7 + 3);
v___x_2736_ = 1;
lean_inc(v_canUnfold_x3f_2716_);
lean_inc(v_synthPendingDepth_2715_);
lean_inc(v_defEqCtx_x3f_2714_);
lean_inc_ref(v_localInstances_2713_);
lean_inc_ref(v_lctx_2712_);
lean_inc(v_zetaDeltaSet_2711_);
lean_inc_ref(v_keyedConfig_2710_);
v___x_2737_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2737_, 0, v_keyedConfig_2710_);
lean_ctor_set(v___x_2737_, 1, v_zetaDeltaSet_2711_);
lean_ctor_set(v___x_2737_, 2, v_lctx_2712_);
lean_ctor_set(v___x_2737_, 3, v_localInstances_2713_);
lean_ctor_set(v___x_2737_, 4, v_defEqCtx_x3f_2714_);
lean_ctor_set(v___x_2737_, 5, v_synthPendingDepth_2715_);
lean_ctor_set(v___x_2737_, 6, v_canUnfold_x3f_2716_);
lean_ctor_set_uint8(v___x_2737_, sizeof(void*)*7, v___x_2736_);
lean_ctor_set_uint8(v___x_2737_, sizeof(void*)*7 + 1, v_univApprox_2717_);
lean_ctor_set_uint8(v___x_2737_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2718_);
lean_ctor_set_uint8(v___x_2737_, sizeof(void*)*7 + 3, v_cacheInferType_2719_);
v___x_2738_ = l_Lean_Meta_Closure_collectExpr(v_type_2671_, v_a_2673_, v_a_2674_, v___x_2737_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2739_);
lean_dec_ref(v___x_2738_);
v___x_2740_ = l_Lean_Meta_Closure_collectExpr(v_value_2672_, v_a_2673_, v_a_2674_, v___x_2737_, v_a_2676_, v_a_2677_, v_a_2678_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2742_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2741_);
lean_dec_ref(v___x_2740_);
v___x_2742_ = l_Lean_Meta_Closure_process(v_a_2673_, v_a_2674_, v___x_2737_, v_a_2676_, v_a_2677_, v_a_2678_);
lean_dec_ref(v___x_2737_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2760_; 
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2760_ == 0)
{
lean_object* v_unused_2761_; 
v_unused_2761_ = lean_ctor_get(v___x_2742_, 0);
lean_dec(v_unused_2761_);
v___x_2744_ = v___x_2742_;
v_isShared_2745_ = v_isSharedCheck_2760_;
goto v_resetjp_2743_;
}
else
{
lean_dec(v___x_2742_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2760_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2746_; lean_object* v___x_2748_; 
v___x_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2746_, 0, v_a_2739_);
lean_ctor_set(v___x_2746_, 1, v_a_2741_);
lean_inc_ref(v___x_2746_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set_tag(v___x_2744_, 1);
lean_ctor_set(v___x_2744_, 0, v___x_2746_);
v___x_2748_ = v___x_2744_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2746_);
v___x_2748_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
v___x_2749_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2678_, v_a_2676_, v_zetaDeltaFVarIds_2699_, v___x_2748_);
lean_dec_ref(v___x_2749_);
v___x_2750_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2678_, v_a_2676_, v_cache_2709_, v___x_2748_);
lean_dec_ref(v___x_2748_);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2757_ == 0)
{
lean_object* v_unused_2758_; 
v_unused_2758_ = lean_ctor_get(v___x_2750_, 0);
lean_dec(v_unused_2758_);
v___x_2752_ = v___x_2750_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_dec(v___x_2750_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
lean_ctor_set(v___x_2752_, 0, v___x_2746_);
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v___x_2746_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
}
else
{
lean_object* v_a_2762_; 
lean_dec(v_a_2741_);
lean_dec(v_a_2739_);
v_a_2762_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2762_);
lean_dec_ref(v___x_2742_);
v_a_2733_ = v_a_2762_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2763_; 
lean_dec(v_a_2739_);
lean_dec_ref(v___x_2737_);
v_a_2763_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2763_);
lean_dec_ref(v___x_2740_);
v_a_2733_ = v_a_2763_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2764_; 
lean_dec_ref(v___x_2737_);
lean_dec_ref(v_value_2672_);
v_a_2764_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2764_);
lean_dec_ref(v___x_2738_);
v_a_2733_ = v_a_2764_;
goto v___jp_2732_;
}
v___jp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2678_, v_a_2676_, v_cache_2709_, v___x_2722_);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2730_ == 0)
{
lean_object* v_unused_2731_; 
v_unused_2731_ = lean_ctor_get(v___x_2723_, 0);
lean_dec(v_unused_2731_);
v___x_2725_ = v___x_2723_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_dec(v___x_2723_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
lean_ctor_set_tag(v___x_2725_, 1);
lean_ctor_set(v___x_2725_, 0, v_a_2721_);
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2721_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
v___jp_2732_:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2734_ = lean_box(0);
v___x_2735_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2678_, v_a_2676_, v_zetaDeltaFVarIds_2699_, v___x_2734_);
lean_dec_ref(v___x_2735_);
v_a_2721_ = v_a_2733_;
goto v___jp_2720_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object* v_type_2770_, lean_object* v_value_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_){
_start:
{
uint8_t v_a_boxed_2779_; lean_object* v_res_2780_; 
v_a_boxed_2779_ = lean_unbox(v_a_2772_);
v_res_2780_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_2770_, v_value_2771_, v_a_boxed_2779_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_);
lean_dec(v_a_2777_);
lean_dec_ref(v_a_2776_);
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
lean_dec(v_a_2773_);
return v_res_2780_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_instMonadEIO(lean_box(0));
return v___x_2781_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1(void){
_start:
{
lean_object* v___f_2782_; 
v___f_2782_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_2782_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2(void){
_start:
{
lean_object* v___f_2783_; 
v___f_2783_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_2783_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object* v_msg_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v_toApplicative_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2832_; 
v___x_2789_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0);
v___x_2790_ = l_StateRefT_x27_instMonad___redArg(v___x_2789_);
v_toApplicative_2791_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; 
v_unused_2833_ = lean_ctor_get(v___x_2790_, 1);
lean_dec(v_unused_2833_);
v___x_2793_ = v___x_2790_;
v_isShared_2794_ = v_isSharedCheck_2832_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_toApplicative_2791_);
lean_dec(v___x_2790_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2832_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v_toFunctor_2795_; lean_object* v_toSeq_2796_; lean_object* v_toSeqLeft_2797_; lean_object* v_toSeqRight_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2830_; 
v_toFunctor_2795_ = lean_ctor_get(v_toApplicative_2791_, 0);
v_toSeq_2796_ = lean_ctor_get(v_toApplicative_2791_, 2);
v_toSeqLeft_2797_ = lean_ctor_get(v_toApplicative_2791_, 3);
v_toSeqRight_2798_ = lean_ctor_get(v_toApplicative_2791_, 4);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_toApplicative_2791_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v_toApplicative_2791_, 1);
lean_dec(v_unused_2831_);
v___x_2800_ = v_toApplicative_2791_;
v_isShared_2801_ = v_isSharedCheck_2830_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_toSeqRight_2798_);
lean_inc(v_toSeqLeft_2797_);
lean_inc(v_toSeq_2796_);
lean_inc(v_toFunctor_2795_);
lean_dec(v_toApplicative_2791_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2830_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___f_2802_; lean_object* v___f_2803_; lean_object* v___f_2804_; lean_object* v___f_2805_; lean_object* v___x_2806_; lean_object* v___f_2807_; lean_object* v___f_2808_; lean_object* v___f_2809_; lean_object* v___x_2811_; 
v___f_2802_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1);
v___f_2803_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2);
lean_inc_ref(v_toFunctor_2795_);
v___f_2804_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2804_, 0, v_toFunctor_2795_);
v___f_2805_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2805_, 0, v_toFunctor_2795_);
v___x_2806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___f_2804_);
lean_ctor_set(v___x_2806_, 1, v___f_2805_);
v___f_2807_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2807_, 0, v_toSeqRight_2798_);
v___f_2808_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2808_, 0, v_toSeqLeft_2797_);
v___f_2809_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2809_, 0, v_toSeq_2796_);
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 4, v___f_2807_);
lean_ctor_set(v___x_2800_, 3, v___f_2808_);
lean_ctor_set(v___x_2800_, 2, v___f_2809_);
lean_ctor_set(v___x_2800_, 1, v___f_2802_);
lean_ctor_set(v___x_2800_, 0, v___x_2806_);
v___x_2811_ = v___x_2800_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2806_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v___f_2802_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v___f_2809_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v___f_2808_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v___f_2807_);
v___x_2811_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2813_; 
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 1, v___f_2803_);
lean_ctor_set(v___x_2793_, 0, v___x_2811_);
v___x_2813_ = v___x_2793_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2828_, 1, v___f_2803_);
v___x_2813_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
lean_object* v___f_2814_; lean_object* v___f_2815_; lean_object* v___f_2816_; lean_object* v___f_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_15212__overap_2826_; lean_object* v___x_2827_; 
lean_inc_ref_n(v___x_2813_, 6);
v___f_2814_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2814_, 0, v___x_2813_);
v___f_2815_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2815_, 0, v___x_2813_);
v___f_2816_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2816_, 0, v___x_2813_);
v___f_2817_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2817_, 0, v___x_2813_);
v___x_2818_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2818_, 0, lean_box(0));
lean_closure_set(v___x_2818_, 1, lean_box(0));
lean_closure_set(v___x_2818_, 2, v___x_2813_);
v___x_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2818_);
lean_ctor_set(v___x_2819_, 1, v___f_2814_);
v___x_2820_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2820_, 0, lean_box(0));
lean_closure_set(v___x_2820_, 1, lean_box(0));
lean_closure_set(v___x_2820_, 2, v___x_2813_);
v___x_2821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2819_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
lean_ctor_set(v___x_2821_, 2, v___f_2815_);
lean_ctor_set(v___x_2821_, 3, v___f_2816_);
lean_ctor_set(v___x_2821_, 4, v___f_2817_);
v___x_2822_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2822_, 0, lean_box(0));
lean_closure_set(v___x_2822_, 1, lean_box(0));
lean_closure_set(v___x_2822_, 2, v___x_2813_);
v___x_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = lean_box(0);
v___x_2825_ = l_instInhabitedOfMonad___redArg(v___x_2823_, v___x_2824_);
v___x_15212__overap_2826_ = lean_panic_fn_borrowed(v___x_2825_, v_msg_2784_);
lean_dec(v___x_2825_);
lean_inc(v___y_2787_);
lean_inc_ref(v___y_2786_);
v___x_2827_ = lean_apply_4(v___x_15212__overap_2826_, v___y_2785_, v___y_2786_, v___y_2787_, lean_box(0));
return v___x_2827_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object* v_msg_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v_msg_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
return v_res_2839_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2840_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1(void){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0);
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
return v___x_2842_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2843_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1);
v___x_2844_ = lean_unsigned_to_nat(0u);
v___x_2845_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
lean_ctor_set(v___x_2845_, 2, v___x_2844_);
lean_ctor_set(v___x_2845_, 3, v___x_2844_);
lean_ctor_set(v___x_2845_, 4, v___x_2843_);
lean_ctor_set(v___x_2845_, 5, v___x_2843_);
lean_ctor_set(v___x_2845_, 6, v___x_2843_);
lean_ctor_set(v___x_2845_, 7, v___x_2843_);
lean_ctor_set(v___x_2845_, 8, v___x_2843_);
lean_ctor_set(v___x_2845_, 9, v___x_2843_);
return v___x_2845_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3(void){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2846_ = lean_unsigned_to_nat(32u);
v___x_2847_ = lean_mk_empty_array_with_capacity(v___x_2846_);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
return v___x_2848_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4(void){
_start:
{
size_t v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2849_ = ((size_t)5ULL);
v___x_2850_ = lean_unsigned_to_nat(0u);
v___x_2851_ = lean_unsigned_to_nat(32u);
v___x_2852_ = lean_mk_empty_array_with_capacity(v___x_2851_);
v___x_2853_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3);
v___x_2854_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
lean_ctor_set(v___x_2854_, 1, v___x_2852_);
lean_ctor_set(v___x_2854_, 2, v___x_2850_);
lean_ctor_set(v___x_2854_, 3, v___x_2850_);
lean_ctor_set_usize(v___x_2854_, 4, v___x_2849_);
return v___x_2854_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5(void){
_start:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2855_ = lean_box(1);
v___x_2856_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4);
v___x_2857_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1);
v___x_2858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
lean_ctor_set(v___x_2858_, 1, v___x_2856_);
lean_ctor_set(v___x_2858_, 2, v___x_2855_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object* v_msgData_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v___x_2863_; lean_object* v_env_2864_; lean_object* v_options_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2863_ = lean_st_ref_get(v___y_2861_);
v_env_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc_ref(v_env_2864_);
lean_dec(v___x_2863_);
v_options_2865_ = lean_ctor_get(v___y_2860_, 2);
v___x_2866_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2);
v___x_2867_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__5);
lean_inc_ref(v_options_2865_);
v___x_2868_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2868_, 0, v_env_2864_);
lean_ctor_set(v___x_2868_, 1, v___x_2866_);
lean_ctor_set(v___x_2868_, 2, v___x_2867_);
lean_ctor_set(v___x_2868_, 3, v_options_2865_);
v___x_2869_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
lean_ctor_set(v___x_2869_, 1, v_msgData_2859_);
v___x_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2869_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object* v_msgData_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msgData_2871_, v___y_2872_, v___y_2873_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
return v_res_2875_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2876_; double v___x_2877_; 
v___x_2876_ = lean_unsigned_to_nat(0u);
v___x_2877_ = lean_float_of_nat(v___x_2876_);
return v___x_2877_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1(void){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_mk_string_unchecked("", 0, 0);
return v___x_2878_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_unsigned_to_nat(0u);
v___x_2880_ = lean_mk_empty_array_with_capacity(v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object* v_cls_2881_, lean_object* v_msg_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_ref_2887_; lean_object* v___x_2888_; lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2934_; 
v_ref_2887_ = lean_ctor_get(v___y_2884_, 5);
v___x_2888_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_2882_, v___y_2884_, v___y_2885_);
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2891_ = v___x_2888_;
v_isShared_2892_ = v_isSharedCheck_2934_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2888_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2934_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v_traceState_2894_; lean_object* v_env_2895_; lean_object* v_nextMacroScope_2896_; lean_object* v_ngen_2897_; lean_object* v_auxDeclNGen_2898_; lean_object* v_cache_2899_; lean_object* v_messages_2900_; lean_object* v_infoState_2901_; lean_object* v_snapshotTasks_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2933_; 
v___x_2893_ = lean_st_ref_take(v___y_2885_);
v_traceState_2894_ = lean_ctor_get(v___x_2893_, 4);
v_env_2895_ = lean_ctor_get(v___x_2893_, 0);
v_nextMacroScope_2896_ = lean_ctor_get(v___x_2893_, 1);
v_ngen_2897_ = lean_ctor_get(v___x_2893_, 2);
v_auxDeclNGen_2898_ = lean_ctor_get(v___x_2893_, 3);
v_cache_2899_ = lean_ctor_get(v___x_2893_, 5);
v_messages_2900_ = lean_ctor_get(v___x_2893_, 6);
v_infoState_2901_ = lean_ctor_get(v___x_2893_, 7);
v_snapshotTasks_2902_ = lean_ctor_get(v___x_2893_, 8);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2904_ = v___x_2893_;
v_isShared_2905_ = v_isSharedCheck_2933_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_snapshotTasks_2902_);
lean_inc(v_infoState_2901_);
lean_inc(v_messages_2900_);
lean_inc(v_cache_2899_);
lean_inc(v_traceState_2894_);
lean_inc(v_auxDeclNGen_2898_);
lean_inc(v_ngen_2897_);
lean_inc(v_nextMacroScope_2896_);
lean_inc(v_env_2895_);
lean_dec(v___x_2893_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2933_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
uint64_t v_tid_2906_; lean_object* v_traces_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2932_; 
v_tid_2906_ = lean_ctor_get_uint64(v_traceState_2894_, sizeof(void*)*1);
v_traces_2907_ = lean_ctor_get(v_traceState_2894_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_traceState_2894_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2909_ = v_traceState_2894_;
v_isShared_2910_ = v_isSharedCheck_2932_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_traces_2907_);
lean_dec(v_traceState_2894_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2932_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; double v___x_2912_; uint8_t v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2921_; 
v___x_2911_ = lean_box(0);
v___x_2912_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_2913_ = 0;
v___x_2914_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1);
v___x_2915_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2915_, 0, v_cls_2881_);
lean_ctor_set(v___x_2915_, 1, v___x_2911_);
lean_ctor_set(v___x_2915_, 2, v___x_2914_);
lean_ctor_set_float(v___x_2915_, sizeof(void*)*3, v___x_2912_);
lean_ctor_set_float(v___x_2915_, sizeof(void*)*3 + 8, v___x_2912_);
lean_ctor_set_uint8(v___x_2915_, sizeof(void*)*3 + 16, v___x_2913_);
v___x_2916_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2);
v___x_2917_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2915_);
lean_ctor_set(v___x_2917_, 1, v_a_2889_);
lean_ctor_set(v___x_2917_, 2, v___x_2916_);
lean_inc(v_ref_2887_);
v___x_2918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2918_, 0, v_ref_2887_);
lean_ctor_set(v___x_2918_, 1, v___x_2917_);
v___x_2919_ = l_Lean_PersistentArray_push___redArg(v_traces_2907_, v___x_2918_);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 0, v___x_2919_);
v___x_2921_ = v___x_2909_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2919_);
lean_ctor_set_uint64(v_reuseFailAlloc_2931_, sizeof(void*)*1, v_tid_2906_);
v___x_2921_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v___x_2923_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 4, v___x_2921_);
v___x_2923_ = v___x_2904_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_env_2895_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_nextMacroScope_2896_);
lean_ctor_set(v_reuseFailAlloc_2930_, 2, v_ngen_2897_);
lean_ctor_set(v_reuseFailAlloc_2930_, 3, v_auxDeclNGen_2898_);
lean_ctor_set(v_reuseFailAlloc_2930_, 4, v___x_2921_);
lean_ctor_set(v_reuseFailAlloc_2930_, 5, v_cache_2899_);
lean_ctor_set(v_reuseFailAlloc_2930_, 6, v_messages_2900_);
lean_ctor_set(v_reuseFailAlloc_2930_, 7, v_infoState_2901_);
lean_ctor_set(v_reuseFailAlloc_2930_, 8, v_snapshotTasks_2902_);
v___x_2923_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2924_ = lean_st_ref_set(v___y_2885_, v___x_2923_);
v___x_2925_ = lean_box(0);
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
lean_ctor_set(v___x_2926_, 1, v___y_2883_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v___x_2926_);
v___x_2928_ = v___x_2891_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object* v_cls_2935_, lean_object* v_msg_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_2935_, v_msg_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
return v_res_2941_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object* v_a_2942_, lean_object* v_x_2943_){
_start:
{
if (lean_obj_tag(v_x_2943_) == 0)
{
uint8_t v___x_2944_; 
v___x_2944_ = 0;
return v___x_2944_;
}
else
{
lean_object* v_key_2945_; lean_object* v_tail_2946_; uint8_t v___x_2947_; 
v_key_2945_ = lean_ctor_get(v_x_2943_, 0);
v_tail_2946_ = lean_ctor_get(v_x_2943_, 2);
v___x_2947_ = l_Lean_instBEqFVarId_beq(v_key_2945_, v_a_2942_);
if (v___x_2947_ == 0)
{
v_x_2943_ = v_tail_2946_;
goto _start;
}
else
{
return v___x_2947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object* v_a_2949_, lean_object* v_x_2950_){
_start:
{
uint8_t v_res_2951_; lean_object* v_r_2952_; 
v_res_2951_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2949_, v_x_2950_);
lean_dec(v_x_2950_);
lean_dec(v_a_2949_);
v_r_2952_ = lean_box(v_res_2951_);
return v_r_2952_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object* v_m_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v_buckets_2955_; lean_object* v___x_2956_; uint64_t v___x_2957_; uint64_t v___x_2958_; uint64_t v___x_2959_; uint64_t v_fold_2960_; uint64_t v___x_2961_; uint64_t v___x_2962_; uint64_t v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; size_t v___x_2966_; size_t v___x_2967_; size_t v___x_2968_; lean_object* v___x_2969_; uint8_t v___x_2970_; 
v_buckets_2955_ = lean_ctor_get(v_m_2953_, 1);
v___x_2956_ = lean_array_get_size(v_buckets_2955_);
v___x_2957_ = l_Lean_instHashableFVarId_hash(v_a_2954_);
v___x_2958_ = 32ULL;
v___x_2959_ = lean_uint64_shift_right(v___x_2957_, v___x_2958_);
v_fold_2960_ = lean_uint64_xor(v___x_2957_, v___x_2959_);
v___x_2961_ = 16ULL;
v___x_2962_ = lean_uint64_shift_right(v_fold_2960_, v___x_2961_);
v___x_2963_ = lean_uint64_xor(v_fold_2960_, v___x_2962_);
v___x_2964_ = lean_uint64_to_usize(v___x_2963_);
v___x_2965_ = lean_usize_of_nat(v___x_2956_);
v___x_2966_ = ((size_t)1ULL);
v___x_2967_ = lean_usize_sub(v___x_2965_, v___x_2966_);
v___x_2968_ = lean_usize_land(v___x_2964_, v___x_2967_);
v___x_2969_ = lean_array_uget_borrowed(v_buckets_2955_, v___x_2968_);
v___x_2970_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2954_, v___x_2969_);
return v___x_2970_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object* v_m_2971_, lean_object* v_a_2972_){
_start:
{
uint8_t v_res_2973_; lean_object* v_r_2974_; 
v_res_2973_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_2971_, v_a_2972_);
lean_dec(v_a_2972_);
lean_dec_ref(v_m_2971_);
v_r_2974_ = lean_box(v_res_2973_);
return v_r_2974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object* v_a_2975_, lean_object* v_x_2976_){
_start:
{
if (lean_obj_tag(v_x_2976_) == 0)
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_box(0);
return v___x_2977_;
}
else
{
lean_object* v_key_2978_; lean_object* v_value_2979_; lean_object* v_tail_2980_; uint8_t v___x_2981_; 
v_key_2978_ = lean_ctor_get(v_x_2976_, 0);
v_value_2979_ = lean_ctor_get(v_x_2976_, 1);
v_tail_2980_ = lean_ctor_get(v_x_2976_, 2);
v___x_2981_ = lean_expr_eqv(v_key_2978_, v_a_2975_);
if (v___x_2981_ == 0)
{
v_x_2976_ = v_tail_2980_;
goto _start;
}
else
{
lean_object* v___x_2983_; 
lean_inc(v_value_2979_);
v___x_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2983_, 0, v_value_2979_);
return v___x_2983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_a_2984_, lean_object* v_x_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2984_, v_x_2985_);
lean_dec(v_x_2985_);
lean_dec_ref(v_a_2984_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object* v_m_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v_buckets_2989_; lean_object* v___x_2990_; uint64_t v___x_2991_; uint64_t v___x_2992_; uint64_t v___x_2993_; uint64_t v_fold_2994_; uint64_t v___x_2995_; uint64_t v___x_2996_; uint64_t v___x_2997_; size_t v___x_2998_; size_t v___x_2999_; size_t v___x_3000_; size_t v___x_3001_; size_t v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v_buckets_2989_ = lean_ctor_get(v_m_2987_, 1);
v___x_2990_ = lean_array_get_size(v_buckets_2989_);
v___x_2991_ = l_Lean_Expr_hash(v_a_2988_);
v___x_2992_ = 32ULL;
v___x_2993_ = lean_uint64_shift_right(v___x_2991_, v___x_2992_);
v_fold_2994_ = lean_uint64_xor(v___x_2991_, v___x_2993_);
v___x_2995_ = 16ULL;
v___x_2996_ = lean_uint64_shift_right(v_fold_2994_, v___x_2995_);
v___x_2997_ = lean_uint64_xor(v_fold_2994_, v___x_2996_);
v___x_2998_ = lean_uint64_to_usize(v___x_2997_);
v___x_2999_ = lean_usize_of_nat(v___x_2990_);
v___x_3000_ = ((size_t)1ULL);
v___x_3001_ = lean_usize_sub(v___x_2999_, v___x_3000_);
v___x_3002_ = lean_usize_land(v___x_2998_, v___x_3001_);
v___x_3003_ = lean_array_uget_borrowed(v_buckets_2989_, v___x_3002_);
v___x_3004_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2988_, v___x_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object* v_m_3005_, lean_object* v_a_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_3005_, v_a_3006_);
lean_dec_ref(v_a_3006_);
lean_dec_ref(v_m_3005_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object* v_x_3008_, lean_object* v_x_3009_){
_start:
{
if (lean_obj_tag(v_x_3009_) == 0)
{
return v_x_3008_;
}
else
{
lean_object* v_key_3010_; lean_object* v_value_3011_; lean_object* v_tail_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3035_; 
v_key_3010_ = lean_ctor_get(v_x_3009_, 0);
v_value_3011_ = lean_ctor_get(v_x_3009_, 1);
v_tail_3012_ = lean_ctor_get(v_x_3009_, 2);
v_isSharedCheck_3035_ = !lean_is_exclusive(v_x_3009_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3014_ = v_x_3009_;
v_isShared_3015_ = v_isSharedCheck_3035_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_tail_3012_);
lean_inc(v_value_3011_);
lean_inc(v_key_3010_);
lean_dec(v_x_3009_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3035_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; uint64_t v___x_3017_; uint64_t v___x_3018_; uint64_t v___x_3019_; uint64_t v_fold_3020_; uint64_t v___x_3021_; uint64_t v___x_3022_; uint64_t v___x_3023_; size_t v___x_3024_; size_t v___x_3025_; size_t v___x_3026_; size_t v___x_3027_; size_t v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3031_; 
v___x_3016_ = lean_array_get_size(v_x_3008_);
v___x_3017_ = l_Lean_Expr_hash(v_key_3010_);
v___x_3018_ = 32ULL;
v___x_3019_ = lean_uint64_shift_right(v___x_3017_, v___x_3018_);
v_fold_3020_ = lean_uint64_xor(v___x_3017_, v___x_3019_);
v___x_3021_ = 16ULL;
v___x_3022_ = lean_uint64_shift_right(v_fold_3020_, v___x_3021_);
v___x_3023_ = lean_uint64_xor(v_fold_3020_, v___x_3022_);
v___x_3024_ = lean_uint64_to_usize(v___x_3023_);
v___x_3025_ = lean_usize_of_nat(v___x_3016_);
v___x_3026_ = ((size_t)1ULL);
v___x_3027_ = lean_usize_sub(v___x_3025_, v___x_3026_);
v___x_3028_ = lean_usize_land(v___x_3024_, v___x_3027_);
v___x_3029_ = lean_array_uget_borrowed(v_x_3008_, v___x_3028_);
lean_inc(v___x_3029_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 2, v___x_3029_);
v___x_3031_ = v___x_3014_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_key_3010_);
lean_ctor_set(v_reuseFailAlloc_3034_, 1, v_value_3011_);
lean_ctor_set(v_reuseFailAlloc_3034_, 2, v___x_3029_);
v___x_3031_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_array_uset(v_x_3008_, v___x_3028_, v___x_3031_);
v_x_3008_ = v___x_3032_;
v_x_3009_ = v_tail_3012_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object* v_i_3036_, lean_object* v_source_3037_, lean_object* v_target_3038_){
_start:
{
lean_object* v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = lean_array_get_size(v_source_3037_);
v___x_3040_ = lean_nat_dec_lt(v_i_3036_, v___x_3039_);
if (v___x_3040_ == 0)
{
lean_dec_ref(v_source_3037_);
lean_dec(v_i_3036_);
return v_target_3038_;
}
else
{
lean_object* v_es_3041_; lean_object* v___x_3042_; lean_object* v_source_3043_; lean_object* v_target_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_es_3041_ = lean_array_fget(v_source_3037_, v_i_3036_);
v___x_3042_ = lean_box(0);
v_source_3043_ = lean_array_fset(v_source_3037_, v_i_3036_, v___x_3042_);
v_target_3044_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_target_3038_, v_es_3041_);
v___x_3045_ = lean_unsigned_to_nat(1u);
v___x_3046_ = lean_nat_add(v_i_3036_, v___x_3045_);
lean_dec(v_i_3036_);
v_i_3036_ = v___x_3046_;
v_source_3037_ = v_source_3043_;
v_target_3038_ = v_target_3044_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object* v_data_3048_){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v_nbuckets_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3049_ = lean_array_get_size(v_data_3048_);
v___x_3050_ = lean_unsigned_to_nat(2u);
v_nbuckets_3051_ = lean_nat_mul(v___x_3049_, v___x_3050_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = lean_box(0);
v___x_3054_ = lean_mk_array(v_nbuckets_3051_, v___x_3053_);
v___x_3055_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v___x_3052_, v_data_3048_, v___x_3054_);
return v___x_3055_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object* v_a_3056_, lean_object* v_x_3057_){
_start:
{
if (lean_obj_tag(v_x_3057_) == 0)
{
uint8_t v___x_3058_; 
v___x_3058_ = 0;
return v___x_3058_;
}
else
{
lean_object* v_key_3059_; lean_object* v_tail_3060_; uint8_t v___x_3061_; 
v_key_3059_ = lean_ctor_get(v_x_3057_, 0);
v_tail_3060_ = lean_ctor_get(v_x_3057_, 2);
v___x_3061_ = lean_expr_eqv(v_key_3059_, v_a_3056_);
if (v___x_3061_ == 0)
{
v_x_3057_ = v_tail_3060_;
goto _start;
}
else
{
return v___x_3061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object* v_a_3063_, lean_object* v_x_3064_){
_start:
{
uint8_t v_res_3065_; lean_object* v_r_3066_; 
v_res_3065_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3063_, v_x_3064_);
lean_dec(v_x_3064_);
lean_dec_ref(v_a_3063_);
v_r_3066_ = lean_box(v_res_3065_);
return v_r_3066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object* v_a_3067_, lean_object* v_b_3068_, lean_object* v_x_3069_){
_start:
{
if (lean_obj_tag(v_x_3069_) == 0)
{
lean_dec(v_b_3068_);
lean_dec_ref(v_a_3067_);
return v_x_3069_;
}
else
{
lean_object* v_key_3070_; lean_object* v_value_3071_; lean_object* v_tail_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3084_; 
v_key_3070_ = lean_ctor_get(v_x_3069_, 0);
v_value_3071_ = lean_ctor_get(v_x_3069_, 1);
v_tail_3072_ = lean_ctor_get(v_x_3069_, 2);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_x_3069_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3074_ = v_x_3069_;
v_isShared_3075_ = v_isSharedCheck_3084_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_tail_3072_);
lean_inc(v_value_3071_);
lean_inc(v_key_3070_);
lean_dec(v_x_3069_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3084_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
uint8_t v___x_3076_; 
v___x_3076_ = lean_expr_eqv(v_key_3070_, v_a_3067_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3077_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3067_, v_b_3068_, v_tail_3072_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 2, v___x_3077_);
v___x_3079_ = v___x_3074_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_key_3070_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v_value_3071_);
lean_ctor_set(v_reuseFailAlloc_3080_, 2, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
else
{
lean_object* v___x_3082_; 
lean_dec(v_value_3071_);
lean_dec(v_key_3070_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 1, v_b_3068_);
lean_ctor_set(v___x_3074_, 0, v_a_3067_);
v___x_3082_ = v___x_3074_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3067_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v_b_3068_);
lean_ctor_set(v_reuseFailAlloc_3083_, 2, v_tail_3072_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object* v_m_3085_, lean_object* v_a_3086_, lean_object* v_b_3087_){
_start:
{
lean_object* v_size_3088_; lean_object* v_buckets_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3132_; 
v_size_3088_ = lean_ctor_get(v_m_3085_, 0);
v_buckets_3089_ = lean_ctor_get(v_m_3085_, 1);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_m_3085_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3091_ = v_m_3085_;
v_isShared_3092_ = v_isSharedCheck_3132_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_buckets_3089_);
lean_inc(v_size_3088_);
lean_dec(v_m_3085_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3132_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3093_; uint64_t v___x_3094_; uint64_t v___x_3095_; uint64_t v___x_3096_; uint64_t v_fold_3097_; uint64_t v___x_3098_; uint64_t v___x_3099_; uint64_t v___x_3100_; size_t v___x_3101_; size_t v___x_3102_; size_t v___x_3103_; size_t v___x_3104_; size_t v___x_3105_; lean_object* v_bkt_3106_; uint8_t v___x_3107_; 
v___x_3093_ = lean_array_get_size(v_buckets_3089_);
v___x_3094_ = l_Lean_Expr_hash(v_a_3086_);
v___x_3095_ = 32ULL;
v___x_3096_ = lean_uint64_shift_right(v___x_3094_, v___x_3095_);
v_fold_3097_ = lean_uint64_xor(v___x_3094_, v___x_3096_);
v___x_3098_ = 16ULL;
v___x_3099_ = lean_uint64_shift_right(v_fold_3097_, v___x_3098_);
v___x_3100_ = lean_uint64_xor(v_fold_3097_, v___x_3099_);
v___x_3101_ = lean_uint64_to_usize(v___x_3100_);
v___x_3102_ = lean_usize_of_nat(v___x_3093_);
v___x_3103_ = ((size_t)1ULL);
v___x_3104_ = lean_usize_sub(v___x_3102_, v___x_3103_);
v___x_3105_ = lean_usize_land(v___x_3101_, v___x_3104_);
v_bkt_3106_ = lean_array_uget_borrowed(v_buckets_3089_, v___x_3105_);
v___x_3107_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3086_, v_bkt_3106_);
if (v___x_3107_ == 0)
{
lean_object* v___x_3108_; lean_object* v_size_x27_3109_; lean_object* v___x_3110_; lean_object* v_buckets_x27_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3108_ = lean_unsigned_to_nat(1u);
v_size_x27_3109_ = lean_nat_add(v_size_3088_, v___x_3108_);
lean_dec(v_size_3088_);
lean_inc(v_bkt_3106_);
v___x_3110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3110_, 0, v_a_3086_);
lean_ctor_set(v___x_3110_, 1, v_b_3087_);
lean_ctor_set(v___x_3110_, 2, v_bkt_3106_);
v_buckets_x27_3111_ = lean_array_uset(v_buckets_3089_, v___x_3105_, v___x_3110_);
v___x_3112_ = lean_unsigned_to_nat(4u);
v___x_3113_ = lean_nat_mul(v_size_x27_3109_, v___x_3112_);
v___x_3114_ = lean_unsigned_to_nat(3u);
v___x_3115_ = lean_nat_div(v___x_3113_, v___x_3114_);
lean_dec(v___x_3113_);
v___x_3116_ = lean_array_get_size(v_buckets_x27_3111_);
v___x_3117_ = lean_nat_dec_le(v___x_3115_, v___x_3116_);
lean_dec(v___x_3115_);
if (v___x_3117_ == 0)
{
lean_object* v_val_3118_; lean_object* v___x_3120_; 
v_val_3118_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_buckets_x27_3111_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v_val_3118_);
lean_ctor_set(v___x_3091_, 0, v_size_x27_3109_);
v___x_3120_ = v___x_3091_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_size_x27_3109_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_val_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
else
{
lean_object* v___x_3123_; 
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v_buckets_x27_3111_);
lean_ctor_set(v___x_3091_, 0, v_size_x27_3109_);
v___x_3123_ = v___x_3091_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_size_x27_3109_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v_buckets_x27_3111_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
else
{
lean_object* v___x_3125_; lean_object* v_buckets_x27_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3130_; 
lean_inc(v_bkt_3106_);
v___x_3125_ = lean_box(0);
v_buckets_x27_3126_ = lean_array_uset(v_buckets_3089_, v___x_3105_, v___x_3125_);
v___x_3127_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3086_, v_b_3087_, v_bkt_3106_);
v___x_3128_ = lean_array_uset(v_buckets_x27_3126_, v___x_3105_, v___x_3127_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v___x_3128_);
v___x_3130_ = v___x_3091_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_size_3088_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v___x_3128_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object* v_g_3133_, lean_object* v_e_3134_, lean_object* v_a_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_a_3141_; lean_object* v_fst_3142_; lean_object* v___y_3149_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3152_ = lean_st_ref_get(v___y_3138_);
lean_dec(v___x_3152_);
v___x_3153_ = lean_st_ref_get(v_a_3135_);
v___x_3154_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v___x_3153_, v_e_3134_);
lean_dec(v___x_3153_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_object* v___x_3155_; 
lean_inc_ref(v_g_3133_);
lean_inc(v___y_3138_);
lean_inc_ref(v___y_3137_);
lean_inc_ref(v_e_3134_);
v___x_3155_ = lean_apply_5(v_g_3133_, v_e_3134_, v___y_3136_, v___y_3137_, v___y_3138_, lean_box(0));
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v_a_3156_; lean_object* v_fst_3157_; lean_object* v_snd_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3203_; 
v_a_3156_ = lean_ctor_get(v___x_3155_, 0);
lean_inc(v_a_3156_);
lean_dec_ref(v___x_3155_);
v_fst_3157_ = lean_ctor_get(v_a_3156_, 0);
v_snd_3158_ = lean_ctor_get(v_a_3156_, 1);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_a_3156_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3160_ = v_a_3156_;
v_isShared_3161_ = v_isSharedCheck_3203_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_snd_3158_);
lean_inc(v_fst_3157_);
lean_dec(v_a_3156_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3203_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v_d_3163_; lean_object* v_b_3164_; lean_object* v___y_3165_; uint8_t v___x_3170_; 
v___x_3170_ = lean_unbox(v_fst_3157_);
lean_dec(v_fst_3157_);
if (v___x_3170_ == 0)
{
lean_object* v___x_3171_; lean_object* v___x_3173_; 
lean_dec_ref(v_g_3133_);
v___x_3171_ = lean_box(0);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v___x_3171_);
v___x_3173_ = v___x_3160_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v___x_3171_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v_snd_3158_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
v_a_3141_ = v___x_3173_;
v_fst_3142_ = v___x_3171_;
goto v___jp_3140_;
}
}
else
{
switch(lean_obj_tag(v_e_3134_))
{
case 7:
{
lean_object* v_binderType_3175_; lean_object* v_body_3176_; 
lean_del_object(v___x_3160_);
v_binderType_3175_ = lean_ctor_get(v_e_3134_, 1);
v_body_3176_ = lean_ctor_get(v_e_3134_, 2);
lean_inc_ref(v_body_3176_);
lean_inc_ref(v_binderType_3175_);
v_d_3163_ = v_binderType_3175_;
v_b_3164_ = v_body_3176_;
v___y_3165_ = v_a_3135_;
goto v___jp_3162_;
}
case 6:
{
lean_object* v_binderType_3177_; lean_object* v_body_3178_; 
lean_del_object(v___x_3160_);
v_binderType_3177_ = lean_ctor_get(v_e_3134_, 1);
v_body_3178_ = lean_ctor_get(v_e_3134_, 2);
lean_inc_ref(v_body_3178_);
lean_inc_ref(v_binderType_3177_);
v_d_3163_ = v_binderType_3177_;
v_b_3164_ = v_body_3178_;
v___y_3165_ = v_a_3135_;
goto v___jp_3162_;
}
case 8:
{
lean_object* v_type_3179_; lean_object* v_value_3180_; lean_object* v_body_3181_; lean_object* v___x_3182_; 
lean_del_object(v___x_3160_);
v_type_3179_ = lean_ctor_get(v_e_3134_, 1);
v_value_3180_ = lean_ctor_get(v_e_3134_, 2);
v_body_3181_ = lean_ctor_get(v_e_3134_, 3);
lean_inc_ref(v_type_3179_);
lean_inc_ref(v_g_3133_);
v___x_3182_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_type_3179_, v_a_3135_, v_snd_3158_, v___y_3137_, v___y_3138_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v_snd_3184_; lean_object* v___x_3185_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref(v___x_3182_);
v_snd_3184_ = lean_ctor_get(v_a_3183_, 1);
lean_inc(v_snd_3184_);
lean_dec(v_a_3183_);
lean_inc_ref(v_value_3180_);
lean_inc_ref(v_g_3133_);
v___x_3185_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_value_3180_, v_a_3135_, v_snd_3184_, v___y_3137_, v___y_3138_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; lean_object* v_snd_3187_; lean_object* v___x_3188_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
lean_inc(v_a_3186_);
lean_dec_ref(v___x_3185_);
v_snd_3187_ = lean_ctor_get(v_a_3186_, 1);
lean_inc(v_snd_3187_);
lean_dec(v_a_3186_);
lean_inc_ref(v_body_3181_);
v___x_3188_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_body_3181_, v_a_3135_, v_snd_3187_, v___y_3137_, v___y_3138_);
v___y_3149_ = v___x_3188_;
goto v___jp_3148_;
}
else
{
lean_dec_ref(v_g_3133_);
v___y_3149_ = v___x_3185_;
goto v___jp_3148_;
}
}
else
{
lean_dec_ref(v_g_3133_);
v___y_3149_ = v___x_3182_;
goto v___jp_3148_;
}
}
case 5:
{
lean_object* v_fn_3189_; lean_object* v_arg_3190_; lean_object* v___x_3191_; 
lean_del_object(v___x_3160_);
v_fn_3189_ = lean_ctor_get(v_e_3134_, 0);
v_arg_3190_ = lean_ctor_get(v_e_3134_, 1);
lean_inc_ref(v_fn_3189_);
lean_inc_ref(v_g_3133_);
v___x_3191_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_fn_3189_, v_a_3135_, v_snd_3158_, v___y_3137_, v___y_3138_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; lean_object* v_snd_3193_; lean_object* v___x_3194_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
lean_dec_ref(v___x_3191_);
v_snd_3193_ = lean_ctor_get(v_a_3192_, 1);
lean_inc(v_snd_3193_);
lean_dec(v_a_3192_);
lean_inc_ref(v_arg_3190_);
v___x_3194_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_arg_3190_, v_a_3135_, v_snd_3193_, v___y_3137_, v___y_3138_);
v___y_3149_ = v___x_3194_;
goto v___jp_3148_;
}
else
{
lean_dec_ref(v_g_3133_);
v___y_3149_ = v___x_3191_;
goto v___jp_3148_;
}
}
case 10:
{
lean_object* v_expr_3195_; lean_object* v___x_3196_; 
lean_del_object(v___x_3160_);
v_expr_3195_ = lean_ctor_get(v_e_3134_, 1);
lean_inc_ref(v_expr_3195_);
v___x_3196_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_expr_3195_, v_a_3135_, v_snd_3158_, v___y_3137_, v___y_3138_);
v___y_3149_ = v___x_3196_;
goto v___jp_3148_;
}
case 11:
{
lean_object* v_struct_3197_; lean_object* v___x_3198_; 
lean_del_object(v___x_3160_);
v_struct_3197_ = lean_ctor_get(v_e_3134_, 2);
lean_inc_ref(v_struct_3197_);
v___x_3198_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_struct_3197_, v_a_3135_, v_snd_3158_, v___y_3137_, v___y_3138_);
v___y_3149_ = v___x_3198_;
goto v___jp_3148_;
}
default: 
{
lean_object* v___x_3199_; lean_object* v___x_3201_; 
lean_dec_ref(v_g_3133_);
v___x_3199_ = lean_box(0);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v___x_3199_);
v___x_3201_ = v___x_3160_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3199_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v_snd_3158_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
v_a_3141_ = v___x_3201_;
v_fst_3142_ = v___x_3199_;
goto v___jp_3140_;
}
}
}
}
v___jp_3162_:
{
lean_object* v___x_3166_; 
lean_inc_ref(v_g_3133_);
v___x_3166_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_d_3163_, v___y_3165_, v_snd_3158_, v___y_3137_, v___y_3138_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v_snd_3168_; lean_object* v___x_3169_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref(v___x_3166_);
v_snd_3168_ = lean_ctor_get(v_a_3167_, 1);
lean_inc(v_snd_3168_);
lean_dec(v_a_3167_);
v___x_3169_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3133_, v_b_3164_, v___y_3165_, v_snd_3168_, v___y_3137_, v___y_3138_);
v___y_3149_ = v___x_3169_;
goto v___jp_3148_;
}
else
{
lean_dec_ref(v_b_3164_);
lean_dec_ref(v_g_3133_);
v___y_3149_ = v___x_3166_;
goto v___jp_3148_;
}
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
lean_dec_ref(v_e_3134_);
lean_dec_ref(v_g_3133_);
v_a_3204_ = lean_ctor_get(v___x_3155_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___x_3155_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3155_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v_val_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3220_; 
lean_dec_ref(v_e_3134_);
lean_dec_ref(v_g_3133_);
v_val_3212_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3214_ = v___x_3154_;
v_isShared_3215_ = v_isSharedCheck_3220_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_val_3212_);
lean_dec(v___x_3154_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3220_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3216_; lean_object* v___x_3218_; 
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_val_3212_);
lean_ctor_set(v___x_3216_, 1, v___y_3136_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set_tag(v___x_3214_, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3216_);
v___x_3218_ = v___x_3214_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v___x_3216_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
v___jp_3140_:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3143_ = lean_st_ref_get(v___y_3138_);
lean_dec(v___x_3143_);
v___x_3144_ = lean_st_ref_take(v_a_3135_);
v___x_3145_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v___x_3144_, v_e_3134_, v_fst_3142_);
v___x_3146_ = lean_st_ref_set(v_a_3135_, v___x_3145_);
v___x_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3147_, 0, v_a_3141_);
return v___x_3147_;
}
v___jp_3148_:
{
if (lean_obj_tag(v___y_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v_fst_3151_; 
v_a_3150_ = lean_ctor_get(v___y_3149_, 0);
lean_inc(v_a_3150_);
lean_dec_ref(v___y_3149_);
v_fst_3151_ = lean_ctor_get(v_a_3150_, 0);
lean_inc(v_fst_3151_);
v_a_3141_ = v_a_3150_;
v_fst_3142_ = v_fst_3151_;
goto v___jp_3140_;
}
else
{
lean_dec_ref(v_e_3134_);
return v___y_3149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object* v_g_3221_, lean_object* v_e_3222_, lean_object* v_a_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3221_, v_e_3222_, v_a_3223_, v___y_3224_, v___y_3225_, v___y_3226_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v_a_3223_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object* v_x_3229_, lean_object* v_x_3230_){
_start:
{
if (lean_obj_tag(v_x_3230_) == 0)
{
return v_x_3229_;
}
else
{
lean_object* v_key_3231_; lean_object* v_value_3232_; lean_object* v_tail_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3256_; 
v_key_3231_ = lean_ctor_get(v_x_3230_, 0);
v_value_3232_ = lean_ctor_get(v_x_3230_, 1);
v_tail_3233_ = lean_ctor_get(v_x_3230_, 2);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_x_3230_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3235_ = v_x_3230_;
v_isShared_3236_ = v_isSharedCheck_3256_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_tail_3233_);
lean_inc(v_value_3232_);
lean_inc(v_key_3231_);
lean_dec(v_x_3230_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3256_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; uint64_t v___x_3238_; uint64_t v___x_3239_; uint64_t v___x_3240_; uint64_t v_fold_3241_; uint64_t v___x_3242_; uint64_t v___x_3243_; uint64_t v___x_3244_; size_t v___x_3245_; size_t v___x_3246_; size_t v___x_3247_; size_t v___x_3248_; size_t v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3252_; 
v___x_3237_ = lean_array_get_size(v_x_3229_);
v___x_3238_ = l_Lean_instHashableFVarId_hash(v_key_3231_);
v___x_3239_ = 32ULL;
v___x_3240_ = lean_uint64_shift_right(v___x_3238_, v___x_3239_);
v_fold_3241_ = lean_uint64_xor(v___x_3238_, v___x_3240_);
v___x_3242_ = 16ULL;
v___x_3243_ = lean_uint64_shift_right(v_fold_3241_, v___x_3242_);
v___x_3244_ = lean_uint64_xor(v_fold_3241_, v___x_3243_);
v___x_3245_ = lean_uint64_to_usize(v___x_3244_);
v___x_3246_ = lean_usize_of_nat(v___x_3237_);
v___x_3247_ = ((size_t)1ULL);
v___x_3248_ = lean_usize_sub(v___x_3246_, v___x_3247_);
v___x_3249_ = lean_usize_land(v___x_3245_, v___x_3248_);
v___x_3250_ = lean_array_uget_borrowed(v_x_3229_, v___x_3249_);
lean_inc(v___x_3250_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 2, v___x_3250_);
v___x_3252_ = v___x_3235_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_key_3231_);
lean_ctor_set(v_reuseFailAlloc_3255_, 1, v_value_3232_);
lean_ctor_set(v_reuseFailAlloc_3255_, 2, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3253_; 
v___x_3253_ = lean_array_uset(v_x_3229_, v___x_3249_, v___x_3252_);
v_x_3229_ = v___x_3253_;
v_x_3230_ = v_tail_3233_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object* v_i_3257_, lean_object* v_source_3258_, lean_object* v_target_3259_){
_start:
{
lean_object* v___x_3260_; uint8_t v___x_3261_; 
v___x_3260_ = lean_array_get_size(v_source_3258_);
v___x_3261_ = lean_nat_dec_lt(v_i_3257_, v___x_3260_);
if (v___x_3261_ == 0)
{
lean_dec_ref(v_source_3258_);
lean_dec(v_i_3257_);
return v_target_3259_;
}
else
{
lean_object* v_es_3262_; lean_object* v___x_3263_; lean_object* v_source_3264_; lean_object* v_target_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; 
v_es_3262_ = lean_array_fget(v_source_3258_, v_i_3257_);
v___x_3263_ = lean_box(0);
v_source_3264_ = lean_array_fset(v_source_3258_, v_i_3257_, v___x_3263_);
v_target_3265_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_target_3259_, v_es_3262_);
v___x_3266_ = lean_unsigned_to_nat(1u);
v___x_3267_ = lean_nat_add(v_i_3257_, v___x_3266_);
lean_dec(v_i_3257_);
v_i_3257_ = v___x_3267_;
v_source_3258_ = v_source_3264_;
v_target_3259_ = v_target_3265_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object* v_data_3269_){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v_nbuckets_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3270_ = lean_array_get_size(v_data_3269_);
v___x_3271_ = lean_unsigned_to_nat(2u);
v_nbuckets_3272_ = lean_nat_mul(v___x_3270_, v___x_3271_);
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_mk_array(v_nbuckets_3272_, v___x_3274_);
v___x_3276_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v___x_3273_, v_data_3269_, v___x_3275_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object* v_m_3277_, lean_object* v_a_3278_, lean_object* v_b_3279_){
_start:
{
lean_object* v_size_3280_; lean_object* v_buckets_3281_; lean_object* v___x_3282_; uint64_t v___x_3283_; uint64_t v___x_3284_; uint64_t v___x_3285_; uint64_t v_fold_3286_; uint64_t v___x_3287_; uint64_t v___x_3288_; uint64_t v___x_3289_; size_t v___x_3290_; size_t v___x_3291_; size_t v___x_3292_; size_t v___x_3293_; size_t v___x_3294_; lean_object* v_bkt_3295_; uint8_t v___x_3296_; 
v_size_3280_ = lean_ctor_get(v_m_3277_, 0);
v_buckets_3281_ = lean_ctor_get(v_m_3277_, 1);
v___x_3282_ = lean_array_get_size(v_buckets_3281_);
v___x_3283_ = l_Lean_instHashableFVarId_hash(v_a_3278_);
v___x_3284_ = 32ULL;
v___x_3285_ = lean_uint64_shift_right(v___x_3283_, v___x_3284_);
v_fold_3286_ = lean_uint64_xor(v___x_3283_, v___x_3285_);
v___x_3287_ = 16ULL;
v___x_3288_ = lean_uint64_shift_right(v_fold_3286_, v___x_3287_);
v___x_3289_ = lean_uint64_xor(v_fold_3286_, v___x_3288_);
v___x_3290_ = lean_uint64_to_usize(v___x_3289_);
v___x_3291_ = lean_usize_of_nat(v___x_3282_);
v___x_3292_ = ((size_t)1ULL);
v___x_3293_ = lean_usize_sub(v___x_3291_, v___x_3292_);
v___x_3294_ = lean_usize_land(v___x_3290_, v___x_3293_);
v_bkt_3295_ = lean_array_uget_borrowed(v_buckets_3281_, v___x_3294_);
v___x_3296_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3278_, v_bkt_3295_);
if (v___x_3296_ == 0)
{
lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3317_; 
lean_inc_ref(v_buckets_3281_);
lean_inc(v_size_3280_);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_m_3277_);
if (v_isSharedCheck_3317_ == 0)
{
lean_object* v_unused_3318_; lean_object* v_unused_3319_; 
v_unused_3318_ = lean_ctor_get(v_m_3277_, 1);
lean_dec(v_unused_3318_);
v_unused_3319_ = lean_ctor_get(v_m_3277_, 0);
lean_dec(v_unused_3319_);
v___x_3298_ = v_m_3277_;
v_isShared_3299_ = v_isSharedCheck_3317_;
goto v_resetjp_3297_;
}
else
{
lean_dec(v_m_3277_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3317_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3300_; lean_object* v_size_x27_3301_; lean_object* v___x_3302_; lean_object* v_buckets_x27_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; 
v___x_3300_ = lean_unsigned_to_nat(1u);
v_size_x27_3301_ = lean_nat_add(v_size_3280_, v___x_3300_);
lean_dec(v_size_3280_);
lean_inc(v_bkt_3295_);
v___x_3302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3302_, 0, v_a_3278_);
lean_ctor_set(v___x_3302_, 1, v_b_3279_);
lean_ctor_set(v___x_3302_, 2, v_bkt_3295_);
v_buckets_x27_3303_ = lean_array_uset(v_buckets_3281_, v___x_3294_, v___x_3302_);
v___x_3304_ = lean_unsigned_to_nat(4u);
v___x_3305_ = lean_nat_mul(v_size_x27_3301_, v___x_3304_);
v___x_3306_ = lean_unsigned_to_nat(3u);
v___x_3307_ = lean_nat_div(v___x_3305_, v___x_3306_);
lean_dec(v___x_3305_);
v___x_3308_ = lean_array_get_size(v_buckets_x27_3303_);
v___x_3309_ = lean_nat_dec_le(v___x_3307_, v___x_3308_);
lean_dec(v___x_3307_);
if (v___x_3309_ == 0)
{
lean_object* v_val_3310_; lean_object* v___x_3312_; 
v_val_3310_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_3303_);
if (v_isShared_3299_ == 0)
{
lean_ctor_set(v___x_3298_, 1, v_val_3310_);
lean_ctor_set(v___x_3298_, 0, v_size_x27_3301_);
v___x_3312_ = v___x_3298_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_size_x27_3301_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v_val_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
else
{
lean_object* v___x_3315_; 
if (v_isShared_3299_ == 0)
{
lean_ctor_set(v___x_3298_, 1, v_buckets_x27_3303_);
lean_ctor_set(v___x_3298_, 0, v_size_x27_3301_);
v___x_3315_ = v___x_3298_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_size_x27_3301_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_buckets_x27_3303_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
else
{
lean_dec(v_b_3279_);
lean_dec(v_a_3278_);
return v_m_3277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object* v_msg_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_){
_start:
{
lean_object* v_ref_3324_; lean_object* v___x_3325_; lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3334_; 
v_ref_3324_ = lean_ctor_get(v___y_3321_, 5);
v___x_3325_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3320_, v___y_3321_, v___y_3322_);
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3328_ = v___x_3325_;
v_isShared_3329_ = v_isSharedCheck_3334_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3325_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3334_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3330_; lean_object* v___x_3332_; 
lean_inc(v_ref_3324_);
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v_ref_3324_);
lean_ctor_set(v___x_3330_, 1, v_a_3326_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set_tag(v___x_3328_, 1);
lean_ctor_set(v___x_3328_, 0, v___x_3330_);
v___x_3332_ = v___x_3328_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v___x_3330_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object* v_msg_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object* v_a_3340_, lean_object* v_x_3341_){
_start:
{
if (lean_obj_tag(v_x_3341_) == 0)
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_box(0);
return v___x_3342_;
}
else
{
lean_object* v_key_3343_; lean_object* v_value_3344_; lean_object* v_tail_3345_; uint8_t v___x_3346_; 
v_key_3343_ = lean_ctor_get(v_x_3341_, 0);
v_value_3344_ = lean_ctor_get(v_x_3341_, 1);
v_tail_3345_ = lean_ctor_get(v_x_3341_, 2);
v___x_3346_ = l_Lean_instBEqFVarId_beq(v_key_3343_, v_a_3340_);
if (v___x_3346_ == 0)
{
v_x_3341_ = v_tail_3345_;
goto _start;
}
else
{
lean_object* v___x_3348_; 
lean_inc(v_value_3344_);
v___x_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3348_, 0, v_value_3344_);
return v___x_3348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_3349_, lean_object* v_x_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3349_, v_x_3350_);
lean_dec(v_x_3350_);
lean_dec(v_a_3349_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object* v_m_3352_, lean_object* v_a_3353_){
_start:
{
lean_object* v_buckets_3354_; lean_object* v___x_3355_; uint64_t v___x_3356_; uint64_t v___x_3357_; uint64_t v___x_3358_; uint64_t v_fold_3359_; uint64_t v___x_3360_; uint64_t v___x_3361_; uint64_t v___x_3362_; size_t v___x_3363_; size_t v___x_3364_; size_t v___x_3365_; size_t v___x_3366_; size_t v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v_buckets_3354_ = lean_ctor_get(v_m_3352_, 1);
v___x_3355_ = lean_array_get_size(v_buckets_3354_);
v___x_3356_ = l_Lean_instHashableFVarId_hash(v_a_3353_);
v___x_3357_ = 32ULL;
v___x_3358_ = lean_uint64_shift_right(v___x_3356_, v___x_3357_);
v_fold_3359_ = lean_uint64_xor(v___x_3356_, v___x_3358_);
v___x_3360_ = 16ULL;
v___x_3361_ = lean_uint64_shift_right(v_fold_3359_, v___x_3360_);
v___x_3362_ = lean_uint64_xor(v_fold_3359_, v___x_3361_);
v___x_3363_ = lean_uint64_to_usize(v___x_3362_);
v___x_3364_ = lean_usize_of_nat(v___x_3355_);
v___x_3365_ = ((size_t)1ULL);
v___x_3366_ = lean_usize_sub(v___x_3364_, v___x_3365_);
v___x_3367_ = lean_usize_land(v___x_3363_, v___x_3366_);
v___x_3368_ = lean_array_uget_borrowed(v_buckets_3354_, v___x_3367_);
v___x_3369_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3353_, v___x_3368_);
return v___x_3369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object* v_m_3370_, lean_object* v_a_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3370_, v_a_3371_);
lean_dec(v_a_3371_);
lean_dec_ref(v_m_3370_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object* v___x_3373_, lean_object* v_m_3374_, lean_object* v_e_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
uint8_t v___x_20407__boxed_3380_; lean_object* v_res_3381_; 
v___x_20407__boxed_3380_ = lean_unbox(v___x_3373_);
v_res_3381_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(v___x_20407__boxed_3380_, v_m_3374_, v_e_3375_, v___y_3376_, v___y_3377_, v___y_3378_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec_ref(v_e_3375_);
return v_res_3381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = lean_box(0);
v___x_3383_ = lean_unsigned_to_nat(16u);
v___x_3384_ = lean_mk_array(v___x_3383_, v___x_3382_);
return v___x_3384_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1(void){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3385_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0);
v___x_3386_ = lean_unsigned_to_nat(0u);
v___x_3387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3386_);
lean_ctor_set(v___x_3387_, 1, v___x_3385_);
return v___x_3387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4(void){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_mk_string_unchecked("assertion violation: !decl.isLet (allowNondep := true) -- should all be cdecls\n    ", 83, 83);
return v___x_3388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3(void){
_start:
{
lean_object* v___x_3389_; 
v___x_3389_ = lean_mk_string_unchecked("_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls.visit", 62, 62);
return v___x_3389_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2(void){
_start:
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_mk_string_unchecked("Lean.Meta.Closure", 17, 17);
return v___x_3390_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3391_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4);
v___x_3392_ = lean_unsigned_to_nat(4u);
v___x_3393_ = lean_unsigned_to_nat(384u);
v___x_3394_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3);
v___x_3395_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2);
v___x_3396_ = l_mkPanicMessageWithDecl(v___x_3395_, v___x_3394_, v___x_3393_, v___x_3392_, v___x_3391_);
return v___x_3396_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6(void){
_start:
{
lean_object* v___x_3397_; 
v___x_3397_ = lean_mk_string_unchecked("cycle detected in sorting abstracted variables", 46, 46);
return v___x_3397_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7(void){
_start:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6);
v___x_3399_ = l_Lean_stringToMessageData(v___x_3398_);
return v___x_3399_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9(void){
_start:
{
lean_object* v___x_3400_; 
v___x_3400_ = lean_mk_string_unchecked("Closure", 7, 7);
return v___x_3400_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8(void){
_start:
{
lean_object* v___x_3401_; 
v___x_3401_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_3401_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10(void){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3402_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9);
v___x_3403_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8);
v___x_3404_ = l_Lean_Name_mkStr2(v___x_3403_, v___x_3402_);
return v___x_3404_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11(void){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_3405_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3406_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11);
v___x_3407_ = l_Lean_Name_mkStr1(v___x_3406_);
return v___x_3407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3408_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10);
v___x_3409_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12);
v___x_3410_ = l_Lean_Name_append(v___x_3409_, v___x_3408_);
return v___x_3410_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14(void){
_start:
{
lean_object* v___x_3411_; 
v___x_3411_ = lean_mk_string_unchecked("Sorting decl ", 13, 13);
return v___x_3411_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15(void){
_start:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14);
v___x_3413_ = l_Lean_stringToMessageData(v___x_3412_);
return v___x_3413_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16(void){
_start:
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_3414_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17(void){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16);
v___x_3416_ = l_Lean_stringToMessageData(v___x_3415_);
return v___x_3416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object* v_m_3417_, lean_object* v_fvarId_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3417_, v_fvarId_3418_);
if (lean_obj_tag(v___x_3423_) == 1)
{
lean_object* v_val_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3539_; 
v_val_3424_ = lean_ctor_get(v___x_3423_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3423_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3426_ = v___x_3423_;
v_isShared_3427_ = v_isSharedCheck_3539_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_val_3424_);
lean_dec(v___x_3423_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3539_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v_fst_3428_; lean_object* v_snd_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3538_; 
v_fst_3428_ = lean_ctor_get(v_val_3424_, 0);
v_snd_3429_ = lean_ctor_get(v_val_3424_, 1);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_val_3424_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3431_ = v_val_3424_;
v_isShared_3432_ = v_isSharedCheck_3538_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_snd_3429_);
lean_inc(v_fst_3428_);
lean_dec(v_val_3424_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3538_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v_tempMark_3433_; lean_object* v_doneMark_3434_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
v_tempMark_3433_ = lean_ctor_get(v_a_3419_, 0);
v_doneMark_3434_ = lean_ctor_get(v_a_3419_, 1);
v___x_3435_ = l_Lean_LocalDecl_fvarId(v_fst_3428_);
v___x_3436_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_doneMark_3434_, v___x_3435_);
if (v___x_3436_ == 0)
{
lean_object* v_options_3437_; lean_object* v_inheritedTraceOptions_3438_; uint8_t v_hasTrace_3439_; uint8_t v___x_3440_; lean_object* v___x_3441_; lean_object* v___f_3442_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3506_; lean_object* v_tempMark_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; 
lean_del_object(v___x_3431_);
lean_del_object(v___x_3426_);
v_options_3437_ = lean_ctor_get(v_a_3420_, 2);
v_inheritedTraceOptions_3438_ = lean_ctor_get(v_a_3420_, 13);
v_hasTrace_3439_ = lean_ctor_get_uint8(v_options_3437_, sizeof(void*)*1);
v___x_3440_ = 1;
v___x_3441_ = lean_box(v___x_3440_);
v___f_3442_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3442_, 0, v___x_3441_);
lean_closure_set(v___f_3442_, 1, v_m_3417_);
if (v_hasTrace_3439_ == 0)
{
lean_inc_ref(v_tempMark_3433_);
v___y_3506_ = v_a_3419_;
v_tempMark_3507_ = v_tempMark_3433_;
v___y_3508_ = v_a_3420_;
v___y_3509_ = v_a_3421_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3515_; lean_object* v___x_3516_; uint8_t v___x_3517_; 
v___x_3515_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10);
v___x_3516_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3517_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3438_, v_options_3437_, v___x_3516_);
if (v___x_3517_ == 0)
{
lean_inc_ref(v_tempMark_3433_);
v___y_3506_ = v_a_3419_;
v_tempMark_3507_ = v_tempMark_3433_;
v___y_3508_ = v_a_3420_;
v___y_3509_ = v_a_3421_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3518_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15);
lean_inc(v___x_3435_);
v___x_3519_ = l_Lean_mkFVar(v___x_3435_);
v___x_3520_ = l_Lean_MessageData_ofExpr(v___x_3519_);
v___x_3521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3518_);
lean_ctor_set(v___x_3521_, 1, v___x_3520_);
v___x_3522_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17);
v___x_3523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3521_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = l_Lean_LocalDecl_type(v_fst_3428_);
v___x_3525_ = l_Lean_MessageData_ofExpr(v___x_3524_);
v___x_3526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3523_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v___x_3515_, v___x_3526_, v_a_3419_, v_a_3420_, v_a_3421_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; lean_object* v_snd_3529_; lean_object* v_tempMark_3530_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3528_);
lean_dec_ref(v___x_3527_);
v_snd_3529_ = lean_ctor_get(v_a_3528_, 1);
lean_inc(v_snd_3529_);
lean_dec(v_a_3528_);
v_tempMark_3530_ = lean_ctor_get(v_snd_3529_, 0);
lean_inc_ref(v_tempMark_3530_);
v___y_3506_ = v_snd_3529_;
v_tempMark_3507_ = v_tempMark_3530_;
v___y_3508_ = v_a_3420_;
v___y_3509_ = v_a_3421_;
goto v___jp_3505_;
}
else
{
lean_dec_ref(v___f_3442_);
lean_dec(v___x_3435_);
lean_dec(v_snd_3429_);
lean_dec(v_fst_3428_);
return v___x_3527_;
}
}
}
v___jp_3443_:
{
lean_object* v_tempMark_3447_; lean_object* v_doneMark_3448_; lean_object* v_newDecls_3449_; lean_object* v_newArgs_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3497_; 
v_tempMark_3447_ = lean_ctor_get(v___y_3444_, 0);
v_doneMark_3448_ = lean_ctor_get(v___y_3444_, 1);
v_newDecls_3449_ = lean_ctor_get(v___y_3444_, 2);
v_newArgs_3450_ = lean_ctor_get(v___y_3444_, 3);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___y_3444_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3452_ = v___y_3444_;
v_isShared_3453_ = v_isSharedCheck_3497_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_newArgs_3450_);
lean_inc(v_newDecls_3449_);
lean_inc(v_doneMark_3448_);
lean_inc(v_tempMark_3447_);
lean_dec(v___y_3444_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3497_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3460_; 
v___x_3454_ = lean_st_ref_get(v___y_3446_);
lean_dec(v___x_3454_);
v___x_3455_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1);
v___x_3456_ = lean_st_mk_ref(v___x_3455_);
v___x_3457_ = lean_box(0);
lean_inc(v___x_3435_);
v___x_3458_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_tempMark_3447_, v___x_3435_, v___x_3457_);
if (v_isShared_3453_ == 0)
{
lean_ctor_set(v___x_3452_, 0, v___x_3458_);
v___x_3460_ = v___x_3452_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v___x_3458_);
lean_ctor_set(v_reuseFailAlloc_3496_, 1, v_doneMark_3448_);
lean_ctor_set(v_reuseFailAlloc_3496_, 2, v_newDecls_3449_);
lean_ctor_set(v_reuseFailAlloc_3496_, 3, v_newArgs_3450_);
v___x_3460_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3461_ = l_Lean_LocalDecl_type(v_fst_3428_);
v___x_3462_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v___f_3442_, v___x_3461_, v___x_3456_, v___x_3460_, v___y_3445_, v___y_3446_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3495_; 
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3465_ = v___x_3462_;
v_isShared_3466_ = v_isSharedCheck_3495_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3462_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3495_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v_snd_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3493_; 
v_snd_3467_ = lean_ctor_get(v_a_3463_, 1);
v_isSharedCheck_3493_ = !lean_is_exclusive(v_a_3463_);
if (v_isSharedCheck_3493_ == 0)
{
lean_object* v_unused_3494_; 
v_unused_3494_ = lean_ctor_get(v_a_3463_, 0);
lean_dec(v_unused_3494_);
v___x_3469_ = v_a_3463_;
v_isShared_3470_ = v_isSharedCheck_3493_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_snd_3467_);
lean_dec(v_a_3463_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3493_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v_tempMark_3473_; lean_object* v_doneMark_3474_; lean_object* v_newDecls_3475_; lean_object* v_newArgs_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3492_; 
v___x_3471_ = lean_st_ref_get(v___y_3446_);
lean_dec(v___x_3471_);
v___x_3472_ = lean_st_ref_get(v___x_3456_);
lean_dec(v___x_3456_);
lean_dec(v___x_3472_);
v_tempMark_3473_ = lean_ctor_get(v_snd_3467_, 0);
v_doneMark_3474_ = lean_ctor_get(v_snd_3467_, 1);
v_newDecls_3475_ = lean_ctor_get(v_snd_3467_, 2);
v_newArgs_3476_ = lean_ctor_get(v_snd_3467_, 3);
v_isSharedCheck_3492_ = !lean_is_exclusive(v_snd_3467_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3478_ = v_snd_3467_;
v_isShared_3479_ = v_isSharedCheck_3492_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_newArgs_3476_);
lean_inc(v_newDecls_3475_);
lean_inc(v_doneMark_3474_);
lean_inc(v_tempMark_3473_);
lean_dec(v_snd_3467_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3492_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v___x_3480_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_doneMark_3474_, v___x_3435_, v___x_3457_);
v___x_3481_ = lean_array_push(v_newDecls_3475_, v_fst_3428_);
v___x_3482_ = lean_array_push(v_newArgs_3476_, v_snd_3429_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 3, v___x_3482_);
lean_ctor_set(v___x_3478_, 2, v___x_3481_);
lean_ctor_set(v___x_3478_, 1, v___x_3480_);
v___x_3484_ = v___x_3478_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_tempMark_3473_);
lean_ctor_set(v_reuseFailAlloc_3491_, 1, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3491_, 2, v___x_3481_);
lean_ctor_set(v_reuseFailAlloc_3491_, 3, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3486_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 1, v___x_3484_);
lean_ctor_set(v___x_3469_, 0, v___x_3457_);
v___x_3486_ = v___x_3469_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3457_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 0, v___x_3486_);
v___x_3488_ = v___x_3465_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3456_);
lean_dec(v___x_3435_);
lean_dec(v_snd_3429_);
lean_dec(v_fst_3428_);
return v___x_3462_;
}
}
}
}
v___jp_3498_:
{
uint8_t v___x_3502_; 
v___x_3502_ = l_Lean_LocalDecl_isLet(v_fst_3428_, v___x_3440_);
if (v___x_3502_ == 0)
{
v___y_3444_ = v___y_3499_;
v___y_3445_ = v___y_3500_;
v___y_3446_ = v___y_3501_;
goto v___jp_3443_;
}
else
{
if (v___x_3436_ == 0)
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_dec_ref(v___f_3442_);
lean_dec(v___x_3435_);
lean_dec(v_snd_3429_);
lean_dec(v_fst_3428_);
v___x_3503_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5);
v___x_3504_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v___x_3503_, v___y_3499_, v___y_3500_, v___y_3501_);
return v___x_3504_;
}
else
{
v___y_3444_ = v___y_3499_;
v___y_3445_ = v___y_3500_;
v___y_3446_ = v___y_3501_;
goto v___jp_3443_;
}
}
}
v___jp_3505_:
{
uint8_t v___x_3510_; 
v___x_3510_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_tempMark_3507_, v___x_3435_);
lean_dec_ref(v_tempMark_3507_);
if (v___x_3510_ == 0)
{
v___y_3499_ = v___y_3506_;
v___y_3500_ = v___y_3508_;
v___y_3501_ = v___y_3509_;
goto v___jp_3498_;
}
else
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec_ref(v___y_3506_);
v___x_3511_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7);
v___x_3512_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v___x_3511_, v___y_3508_, v___y_3509_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v_snd_3514_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref(v___x_3512_);
v_snd_3514_ = lean_ctor_get(v_a_3513_, 1);
lean_inc(v_snd_3514_);
lean_dec(v_a_3513_);
v___y_3499_ = v_snd_3514_;
v___y_3500_ = v___y_3508_;
v___y_3501_ = v___y_3509_;
goto v___jp_3498_;
}
else
{
lean_dec_ref(v___f_3442_);
lean_dec(v___x_3435_);
lean_dec(v_snd_3429_);
lean_dec(v_fst_3428_);
return v___x_3512_;
}
}
}
}
else
{
lean_object* v___x_3531_; lean_object* v___x_3533_; 
lean_dec(v___x_3435_);
lean_dec(v_snd_3429_);
lean_dec(v_fst_3428_);
lean_dec_ref(v_m_3417_);
v___x_3531_ = lean_box(0);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 1, v_a_3419_);
lean_ctor_set(v___x_3431_, 0, v___x_3531_);
v___x_3533_ = v___x_3431_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3531_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_a_3419_);
v___x_3533_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3535_; 
if (v_isShared_3427_ == 0)
{
lean_ctor_set_tag(v___x_3426_, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3533_);
v___x_3535_ = v___x_3426_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
lean_dec(v___x_3423_);
lean_dec_ref(v_m_3417_);
v___x_3540_ = lean_box(0);
v___x_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
lean_ctor_set(v___x_3541_, 1, v_a_3419_);
v___x_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
return v___x_3542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t v___x_3543_, lean_object* v_m_3544_, lean_object* v_e_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
lean_object* v___y_3551_; uint8_t v___x_3555_; 
v___x_3555_ = l_Lean_Expr_hasFVar(v_e_3545_);
if (v___x_3555_ == 0)
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_dec_ref(v_m_3544_);
v___x_3556_ = lean_box(v___x_3555_);
v___x_3557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
lean_ctor_set(v___x_3557_, 1, v___y_3546_);
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
else
{
uint8_t v___x_3559_; 
v___x_3559_ = l_Lean_Expr_isFVar(v_e_3545_);
if (v___x_3559_ == 0)
{
lean_dec_ref(v_m_3544_);
v___y_3551_ = v___y_3546_;
goto v___jp_3550_;
}
else
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = l_Lean_Expr_fvarId_x21(v_e_3545_);
v___x_3561_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3544_, v___x_3560_, v___y_3546_, v___y_3547_, v___y_3548_);
lean_dec(v___x_3560_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v_a_3562_; lean_object* v_snd_3563_; 
v_a_3562_ = lean_ctor_get(v___x_3561_, 0);
lean_inc(v_a_3562_);
lean_dec_ref(v___x_3561_);
v_snd_3563_ = lean_ctor_get(v_a_3562_, 1);
lean_inc(v_snd_3563_);
lean_dec(v_a_3562_);
v___y_3551_ = v_snd_3563_;
goto v___jp_3550_;
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
v_a_3564_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3561_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3561_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
v___jp_3550_:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3552_ = lean_box(v___x_3543_);
v___x_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3552_);
lean_ctor_set(v___x_3553_, 1, v___y_3551_);
v___x_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
return v___x_3554_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object* v_m_3572_, lean_object* v_fvarId_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3572_, v_fvarId_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
lean_dec(v_a_3576_);
lean_dec_ref(v_a_3575_);
lean_dec(v_fvarId_3573_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object* v_00_u03b2_3579_, lean_object* v_m_3580_, lean_object* v_a_3581_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3580_, v_a_3581_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object* v_00_u03b2_3583_, lean_object* v_m_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(v_00_u03b2_3583_, v_m_3584_, v_a_3585_);
lean_dec(v_a_3585_);
lean_dec_ref(v_m_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object* v_00_u03b2_3587_, lean_object* v_m_3588_, lean_object* v_a_3589_){
_start:
{
uint8_t v___x_3590_; 
v___x_3590_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_3588_, v_a_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object* v_00_u03b2_3591_, lean_object* v_m_3592_, lean_object* v_a_3593_){
_start:
{
uint8_t v_res_3594_; lean_object* v_r_3595_; 
v_res_3594_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_00_u03b2_3591_, v_m_3592_, v_a_3593_);
lean_dec(v_a_3593_);
lean_dec_ref(v_m_3592_);
v_r_3595_ = lean_box(v_res_3594_);
return v_r_3595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object* v_00_u03b2_3596_, lean_object* v_m_3597_, lean_object* v_a_3598_, lean_object* v_b_3599_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_m_3597_, v_a_3598_, v_b_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object* v_00_u03b1_3601_, lean_object* v_msg_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v___x_3607_; 
v___x_3607_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3602_, v___y_3604_, v___y_3605_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object* v_00_u03b1_3608_, lean_object* v_msg_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(v_00_u03b1_3608_, v_msg_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec_ref(v___y_3610_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object* v_00_u03b2_3615_, lean_object* v_a_3616_, lean_object* v_x_3617_){
_start:
{
lean_object* v___x_3618_; 
v___x_3618_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3616_, v_x_3617_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3619_, lean_object* v_a_3620_, lean_object* v_x_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(v_00_u03b2_3619_, v_a_3620_, v_x_3621_);
lean_dec(v_x_3621_);
lean_dec(v_a_3620_);
return v_res_3622_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object* v_00_u03b2_3623_, lean_object* v_a_3624_, lean_object* v_x_3625_){
_start:
{
uint8_t v___x_3626_; 
v___x_3626_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3624_, v_x_3625_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3627_, lean_object* v_a_3628_, lean_object* v_x_3629_){
_start:
{
uint8_t v_res_3630_; lean_object* v_r_3631_; 
v_res_3630_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(v_00_u03b2_3627_, v_a_3628_, v_x_3629_);
lean_dec(v_x_3629_);
lean_dec(v_a_3628_);
v_r_3631_ = lean_box(v_res_3630_);
return v_r_3631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object* v_00_u03b2_3632_, lean_object* v_data_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_data_3633_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object* v_00_u03b2_3635_, lean_object* v_m_3636_, lean_object* v_a_3637_){
_start:
{
lean_object* v___x_3638_; 
v___x_3638_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_3636_, v_a_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3639_, lean_object* v_m_3640_, lean_object* v_a_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_00_u03b2_3639_, v_m_3640_, v_a_3641_);
lean_dec_ref(v_a_3641_);
lean_dec_ref(v_m_3640_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object* v_00_u03b2_3643_, lean_object* v_m_3644_, lean_object* v_a_3645_, lean_object* v_b_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v_m_3644_, v_a_3645_, v_b_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_3648_, lean_object* v_i_3649_, lean_object* v_source_3650_, lean_object* v_target_3651_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v_i_3649_, v_source_3650_, v_target_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_3653_, lean_object* v_a_3654_, lean_object* v_x_3655_){
_start:
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_3654_, v_x_3655_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_3657_, lean_object* v_a_3658_, lean_object* v_x_3659_){
_start:
{
lean_object* v_res_3660_; 
v_res_3660_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(v_00_u03b2_3657_, v_a_3658_, v_x_3659_);
lean_dec(v_x_3659_);
lean_dec_ref(v_a_3658_);
return v_res_3660_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object* v_00_u03b2_3661_, lean_object* v_a_3662_, lean_object* v_x_3663_){
_start:
{
uint8_t v___x_3664_; 
v___x_3664_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3662_, v_x_3663_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object* v_00_u03b2_3665_, lean_object* v_a_3666_, lean_object* v_x_3667_){
_start:
{
uint8_t v_res_3668_; lean_object* v_r_3669_; 
v_res_3668_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(v_00_u03b2_3665_, v_a_3666_, v_x_3667_);
lean_dec(v_x_3667_);
lean_dec_ref(v_a_3666_);
v_r_3669_ = lean_box(v_res_3668_);
return v_r_3669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object* v_00_u03b2_3670_, lean_object* v_data_3671_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_data_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object* v_00_u03b2_3673_, lean_object* v_a_3674_, lean_object* v_b_3675_, lean_object* v_x_3676_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3674_, v_b_3675_, v_x_3676_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_3678_, lean_object* v_x_3679_, lean_object* v_x_3680_){
_start:
{
lean_object* v___x_3681_; 
v___x_3681_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_x_3679_, v_x_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object* v_00_u03b2_3682_, lean_object* v_i_3683_, lean_object* v_source_3684_, lean_object* v_target_3685_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v_i_3683_, v_source_3684_, v_target_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object* v_00_u03b2_3687_, lean_object* v_x_3688_, lean_object* v_x_3689_){
_start:
{
lean_object* v___x_3690_; 
v___x_3690_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_x_3688_, v_x_3689_);
return v___x_3690_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0(void){
_start:
{
lean_object* v___f_3691_; 
v___f_3691_ = lean_alloc_closure((void*)(l_Lean_Core_instInhabitedCoreM___lam__0___boxed), 3, 0);
return v___f_3691_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object* v_msg_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_){
_start:
{
lean_object* v___f_3696_; lean_object* v___x_8561__overap_3697_; lean_object* v___x_3698_; 
v___f_3696_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___closed__0);
v___x_8561__overap_3697_ = lean_panic_fn_borrowed(v___f_3696_, v_msg_3692_);
lean_inc(v___y_3694_);
lean_inc_ref(v___y_3693_);
v___x_3698_ = lean_apply_3(v___x_8561__overap_3697_, v___y_3693_, v___y_3694_, lean_box(0));
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___boxed(lean_object* v_msg_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(v_msg_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object* v_newDecls_3704_, lean_object* v_newArgs_3705_, lean_object* v_____r_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3711_, 0, v_newDecls_3704_);
lean_ctor_set(v___x_3711_, 1, v_newArgs_3705_);
v___x_3712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
lean_ctor_set(v___x_3712_, 1, v___y_3707_);
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object* v_newDecls_3714_, lean_object* v_newArgs_3715_, lean_object* v_____r_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3714_, v_newArgs_3715_, v_____r_3716_, v___y_3717_, v___y_3718_, v___y_3719_);
lean_dec(v___y_3719_);
lean_dec_ref(v___y_3718_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object* v___x_3722_, lean_object* v_as_3723_, size_t v_sz_3724_, size_t v_i_3725_, lean_object* v_b_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
uint8_t v___x_3731_; 
v___x_3731_ = lean_usize_dec_lt(v_i_3725_, v_sz_3724_);
if (v___x_3731_ == 0)
{
lean_object* v___x_3732_; lean_object* v___x_3733_; 
lean_dec_ref(v___x_3722_);
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v_b_3726_);
lean_ctor_set(v___x_3732_, 1, v___y_3727_);
v___x_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
return v___x_3733_;
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v_a_3734_ = lean_array_uget_borrowed(v_as_3723_, v_i_3725_);
v___x_3735_ = l_Lean_LocalDecl_fvarId(v_a_3734_);
lean_inc_ref(v___x_3722_);
v___x_3736_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v___x_3722_, v___x_3735_, v___y_3727_, v___y_3728_, v___y_3729_);
lean_dec(v___x_3735_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v_snd_3738_; lean_object* v___x_3739_; size_t v___x_3740_; size_t v___x_3741_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref(v___x_3736_);
v_snd_3738_ = lean_ctor_get(v_a_3737_, 1);
lean_inc(v_snd_3738_);
lean_dec(v_a_3737_);
v___x_3739_ = lean_box(0);
v___x_3740_ = ((size_t)1ULL);
v___x_3741_ = lean_usize_add(v_i_3725_, v___x_3740_);
v_i_3725_ = v___x_3741_;
v_b_3726_ = v___x_3739_;
v___y_3727_ = v_snd_3738_;
goto _start;
}
else
{
lean_dec_ref(v___x_3722_);
return v___x_3736_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object* v___x_3743_, lean_object* v_as_3744_, lean_object* v_sz_3745_, lean_object* v_i_3746_, lean_object* v_b_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
size_t v_sz_boxed_3752_; size_t v_i_boxed_3753_; lean_object* v_res_3754_; 
v_sz_boxed_3752_ = lean_unbox_usize(v_sz_3745_);
lean_dec(v_sz_3745_);
v_i_boxed_3753_ = lean_unbox_usize(v_i_3746_);
lean_dec(v_i_3746_);
v_res_3754_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v___x_3743_, v_as_3744_, v_sz_boxed_3752_, v_i_boxed_3753_, v_b_3747_, v___y_3748_, v___y_3749_, v___y_3750_);
lean_dec(v___y_3750_);
lean_dec_ref(v___y_3749_);
lean_dec_ref(v_as_3744_);
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t v_sz_3755_, size_t v_i_3756_, lean_object* v_bs_3757_){
_start:
{
uint8_t v___x_3758_; 
v___x_3758_ = lean_usize_dec_lt(v_i_3756_, v_sz_3755_);
if (v___x_3758_ == 0)
{
return v_bs_3757_;
}
else
{
lean_object* v_v_3759_; lean_object* v___x_3760_; lean_object* v_bs_x27_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; size_t v___x_3764_; size_t v___x_3765_; lean_object* v___x_3766_; 
v_v_3759_ = lean_array_uget(v_bs_3757_, v_i_3756_);
v___x_3760_ = lean_unsigned_to_nat(0u);
v_bs_x27_3761_ = lean_array_uset(v_bs_3757_, v_i_3756_, v___x_3760_);
v___x_3762_ = l_Lean_LocalDecl_fvarId(v_v_3759_);
lean_dec(v_v_3759_);
v___x_3763_ = l_Lean_mkFVar(v___x_3762_);
v___x_3764_ = ((size_t)1ULL);
v___x_3765_ = lean_usize_add(v_i_3756_, v___x_3764_);
v___x_3766_ = lean_array_uset(v_bs_x27_3761_, v_i_3756_, v___x_3763_);
v_i_3756_ = v___x_3765_;
v_bs_3757_ = v___x_3766_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object* v_sz_3768_, lean_object* v_i_3769_, lean_object* v_bs_3770_){
_start:
{
size_t v_sz_boxed_3771_; size_t v_i_boxed_3772_; lean_object* v_res_3773_; 
v_sz_boxed_3771_ = lean_unbox_usize(v_sz_3768_);
lean_dec(v_sz_3768_);
v_i_boxed_3772_ = lean_unbox_usize(v_i_3769_);
lean_dec(v_i_3769_);
v_res_3773_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_boxed_3771_, v_i_boxed_3772_, v_bs_3770_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object* v_a_3774_, lean_object* v_a_3775_){
_start:
{
if (lean_obj_tag(v_a_3774_) == 0)
{
lean_object* v___x_3776_; 
v___x_3776_ = l_List_reverse___redArg(v_a_3775_);
return v___x_3776_;
}
else
{
lean_object* v_head_3777_; lean_object* v_tail_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3787_; 
v_head_3777_ = lean_ctor_get(v_a_3774_, 0);
v_tail_3778_ = lean_ctor_get(v_a_3774_, 1);
v_isSharedCheck_3787_ = !lean_is_exclusive(v_a_3774_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3780_ = v_a_3774_;
v_isShared_3781_ = v_isSharedCheck_3787_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_tail_3778_);
lean_inc(v_head_3777_);
lean_dec(v_a_3774_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3787_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3782_; lean_object* v___x_3784_; 
v___x_3782_ = l_Lean_MessageData_ofExpr(v_head_3777_);
if (v_isShared_3781_ == 0)
{
lean_ctor_set(v___x_3780_, 1, v_a_3775_);
lean_ctor_set(v___x_3780_, 0, v___x_3782_);
v___x_3784_ = v___x_3780_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3782_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_a_3775_);
v___x_3784_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
v_a_3774_ = v_tail_3778_;
v_a_3775_ = v___x_3784_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object* v_cls_3788_, lean_object* v_msg_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v_ref_3793_; lean_object* v___x_3794_; lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3839_; 
v_ref_3793_ = lean_ctor_get(v___y_3790_, 5);
v___x_3794_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3789_, v___y_3790_, v___y_3791_);
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3797_ = v___x_3794_;
v_isShared_3798_ = v_isSharedCheck_3839_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3794_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3839_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3799_; lean_object* v_traceState_3800_; lean_object* v_env_3801_; lean_object* v_nextMacroScope_3802_; lean_object* v_ngen_3803_; lean_object* v_auxDeclNGen_3804_; lean_object* v_cache_3805_; lean_object* v_messages_3806_; lean_object* v_infoState_3807_; lean_object* v_snapshotTasks_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3838_; 
v___x_3799_ = lean_st_ref_take(v___y_3791_);
v_traceState_3800_ = lean_ctor_get(v___x_3799_, 4);
v_env_3801_ = lean_ctor_get(v___x_3799_, 0);
v_nextMacroScope_3802_ = lean_ctor_get(v___x_3799_, 1);
v_ngen_3803_ = lean_ctor_get(v___x_3799_, 2);
v_auxDeclNGen_3804_ = lean_ctor_get(v___x_3799_, 3);
v_cache_3805_ = lean_ctor_get(v___x_3799_, 5);
v_messages_3806_ = lean_ctor_get(v___x_3799_, 6);
v_infoState_3807_ = lean_ctor_get(v___x_3799_, 7);
v_snapshotTasks_3808_ = lean_ctor_get(v___x_3799_, 8);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3810_ = v___x_3799_;
v_isShared_3811_ = v_isSharedCheck_3838_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_snapshotTasks_3808_);
lean_inc(v_infoState_3807_);
lean_inc(v_messages_3806_);
lean_inc(v_cache_3805_);
lean_inc(v_traceState_3800_);
lean_inc(v_auxDeclNGen_3804_);
lean_inc(v_ngen_3803_);
lean_inc(v_nextMacroScope_3802_);
lean_inc(v_env_3801_);
lean_dec(v___x_3799_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3838_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
uint64_t v_tid_3812_; lean_object* v_traces_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3837_; 
v_tid_3812_ = lean_ctor_get_uint64(v_traceState_3800_, sizeof(void*)*1);
v_traces_3813_ = lean_ctor_get(v_traceState_3800_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v_traceState_3800_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3815_ = v_traceState_3800_;
v_isShared_3816_ = v_isSharedCheck_3837_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_traces_3813_);
lean_dec(v_traceState_3800_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3837_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3817_; double v___x_3818_; uint8_t v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3817_ = lean_box(0);
v___x_3818_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_3819_ = 0;
v___x_3820_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1);
v___x_3821_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3821_, 0, v_cls_3788_);
lean_ctor_set(v___x_3821_, 1, v___x_3817_);
lean_ctor_set(v___x_3821_, 2, v___x_3820_);
lean_ctor_set_float(v___x_3821_, sizeof(void*)*3, v___x_3818_);
lean_ctor_set_float(v___x_3821_, sizeof(void*)*3 + 8, v___x_3818_);
lean_ctor_set_uint8(v___x_3821_, sizeof(void*)*3 + 16, v___x_3819_);
v___x_3822_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2);
v___x_3823_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3821_);
lean_ctor_set(v___x_3823_, 1, v_a_3795_);
lean_ctor_set(v___x_3823_, 2, v___x_3822_);
lean_inc(v_ref_3793_);
v___x_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3824_, 0, v_ref_3793_);
lean_ctor_set(v___x_3824_, 1, v___x_3823_);
v___x_3825_ = l_Lean_PersistentArray_push___redArg(v_traces_3813_, v___x_3824_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3825_);
v___x_3827_ = v___x_3815_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v___x_3825_);
lean_ctor_set_uint64(v_reuseFailAlloc_3836_, sizeof(void*)*1, v_tid_3812_);
v___x_3827_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
lean_object* v___x_3829_; 
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 4, v___x_3827_);
v___x_3829_ = v___x_3810_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_env_3801_);
lean_ctor_set(v_reuseFailAlloc_3835_, 1, v_nextMacroScope_3802_);
lean_ctor_set(v_reuseFailAlloc_3835_, 2, v_ngen_3803_);
lean_ctor_set(v_reuseFailAlloc_3835_, 3, v_auxDeclNGen_3804_);
lean_ctor_set(v_reuseFailAlloc_3835_, 4, v___x_3827_);
lean_ctor_set(v_reuseFailAlloc_3835_, 5, v_cache_3805_);
lean_ctor_set(v_reuseFailAlloc_3835_, 6, v_messages_3806_);
lean_ctor_set(v_reuseFailAlloc_3835_, 7, v_infoState_3807_);
lean_ctor_set(v_reuseFailAlloc_3835_, 8, v_snapshotTasks_3808_);
v___x_3829_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3833_; 
v___x_3830_ = lean_st_ref_set(v___y_3791_, v___x_3829_);
v___x_3831_ = lean_box(0);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v___x_3831_);
v___x_3833_ = v___x_3797_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3831_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object* v_cls_3840_, lean_object* v_msg_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v_res_3845_; 
v_res_3845_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3840_, v_msg_3841_, v___y_3842_, v___y_3843_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1___redArg(lean_object* v_a_3846_, lean_object* v_b_3847_, lean_object* v_x_3848_){
_start:
{
if (lean_obj_tag(v_x_3848_) == 0)
{
lean_dec(v_b_3847_);
lean_dec(v_a_3846_);
return v_x_3848_;
}
else
{
lean_object* v_key_3849_; lean_object* v_value_3850_; lean_object* v_tail_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3863_; 
v_key_3849_ = lean_ctor_get(v_x_3848_, 0);
v_value_3850_ = lean_ctor_get(v_x_3848_, 1);
v_tail_3851_ = lean_ctor_get(v_x_3848_, 2);
v_isSharedCheck_3863_ = !lean_is_exclusive(v_x_3848_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3853_ = v_x_3848_;
v_isShared_3854_ = v_isSharedCheck_3863_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_tail_3851_);
lean_inc(v_value_3850_);
lean_inc(v_key_3849_);
lean_dec(v_x_3848_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3863_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
uint8_t v___x_3855_; 
v___x_3855_ = l_Lean_instBEqFVarId_beq(v_key_3849_, v_a_3846_);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; lean_object* v___x_3858_; 
v___x_3856_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1___redArg(v_a_3846_, v_b_3847_, v_tail_3851_);
if (v_isShared_3854_ == 0)
{
lean_ctor_set(v___x_3853_, 2, v___x_3856_);
v___x_3858_ = v___x_3853_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_key_3849_);
lean_ctor_set(v_reuseFailAlloc_3859_, 1, v_value_3850_);
lean_ctor_set(v_reuseFailAlloc_3859_, 2, v___x_3856_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
else
{
lean_object* v___x_3861_; 
lean_dec(v_value_3850_);
lean_dec(v_key_3849_);
if (v_isShared_3854_ == 0)
{
lean_ctor_set(v___x_3853_, 1, v_b_3847_);
lean_ctor_set(v___x_3853_, 0, v_a_3846_);
v___x_3861_ = v___x_3853_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3846_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v_b_3847_);
lean_ctor_set(v_reuseFailAlloc_3862_, 2, v_tail_3851_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___redArg(lean_object* v_m_3864_, lean_object* v_a_3865_, lean_object* v_b_3866_){
_start:
{
lean_object* v_size_3867_; lean_object* v_buckets_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3911_; 
v_size_3867_ = lean_ctor_get(v_m_3864_, 0);
v_buckets_3868_ = lean_ctor_get(v_m_3864_, 1);
v_isSharedCheck_3911_ = !lean_is_exclusive(v_m_3864_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3870_ = v_m_3864_;
v_isShared_3871_ = v_isSharedCheck_3911_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_buckets_3868_);
lean_inc(v_size_3867_);
lean_dec(v_m_3864_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3911_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3872_; uint64_t v___x_3873_; uint64_t v___x_3874_; uint64_t v___x_3875_; uint64_t v_fold_3876_; uint64_t v___x_3877_; uint64_t v___x_3878_; uint64_t v___x_3879_; size_t v___x_3880_; size_t v___x_3881_; size_t v___x_3882_; size_t v___x_3883_; size_t v___x_3884_; lean_object* v_bkt_3885_; uint8_t v___x_3886_; 
v___x_3872_ = lean_array_get_size(v_buckets_3868_);
v___x_3873_ = l_Lean_instHashableFVarId_hash(v_a_3865_);
v___x_3874_ = 32ULL;
v___x_3875_ = lean_uint64_shift_right(v___x_3873_, v___x_3874_);
v_fold_3876_ = lean_uint64_xor(v___x_3873_, v___x_3875_);
v___x_3877_ = 16ULL;
v___x_3878_ = lean_uint64_shift_right(v_fold_3876_, v___x_3877_);
v___x_3879_ = lean_uint64_xor(v_fold_3876_, v___x_3878_);
v___x_3880_ = lean_uint64_to_usize(v___x_3879_);
v___x_3881_ = lean_usize_of_nat(v___x_3872_);
v___x_3882_ = ((size_t)1ULL);
v___x_3883_ = lean_usize_sub(v___x_3881_, v___x_3882_);
v___x_3884_ = lean_usize_land(v___x_3880_, v___x_3883_);
v_bkt_3885_ = lean_array_uget_borrowed(v_buckets_3868_, v___x_3884_);
v___x_3886_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3865_, v_bkt_3885_);
if (v___x_3886_ == 0)
{
lean_object* v___x_3887_; lean_object* v_size_x27_3888_; lean_object* v___x_3889_; lean_object* v_buckets_x27_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; uint8_t v___x_3896_; 
v___x_3887_ = lean_unsigned_to_nat(1u);
v_size_x27_3888_ = lean_nat_add(v_size_3867_, v___x_3887_);
lean_dec(v_size_3867_);
lean_inc(v_bkt_3885_);
v___x_3889_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3889_, 0, v_a_3865_);
lean_ctor_set(v___x_3889_, 1, v_b_3866_);
lean_ctor_set(v___x_3889_, 2, v_bkt_3885_);
v_buckets_x27_3890_ = lean_array_uset(v_buckets_3868_, v___x_3884_, v___x_3889_);
v___x_3891_ = lean_unsigned_to_nat(4u);
v___x_3892_ = lean_nat_mul(v_size_x27_3888_, v___x_3891_);
v___x_3893_ = lean_unsigned_to_nat(3u);
v___x_3894_ = lean_nat_div(v___x_3892_, v___x_3893_);
lean_dec(v___x_3892_);
v___x_3895_ = lean_array_get_size(v_buckets_x27_3890_);
v___x_3896_ = lean_nat_dec_le(v___x_3894_, v___x_3895_);
lean_dec(v___x_3894_);
if (v___x_3896_ == 0)
{
lean_object* v_val_3897_; lean_object* v___x_3899_; 
v_val_3897_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_3890_);
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 1, v_val_3897_);
lean_ctor_set(v___x_3870_, 0, v_size_x27_3888_);
v___x_3899_ = v___x_3870_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_size_x27_3888_);
lean_ctor_set(v_reuseFailAlloc_3900_, 1, v_val_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
else
{
lean_object* v___x_3902_; 
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 1, v_buckets_x27_3890_);
lean_ctor_set(v___x_3870_, 0, v_size_x27_3888_);
v___x_3902_ = v___x_3870_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_size_x27_3888_);
lean_ctor_set(v_reuseFailAlloc_3903_, 1, v_buckets_x27_3890_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
else
{
lean_object* v___x_3904_; lean_object* v_buckets_x27_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3909_; 
lean_inc(v_bkt_3885_);
v___x_3904_ = lean_box(0);
v_buckets_x27_3905_ = lean_array_uset(v_buckets_3868_, v___x_3884_, v___x_3904_);
v___x_3906_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1___redArg(v_a_3865_, v_b_3866_, v_bkt_3885_);
v___x_3907_ = lean_array_uset(v_buckets_x27_3905_, v___x_3884_, v___x_3906_);
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 1, v___x_3907_);
v___x_3909_ = v___x_3870_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_size_3867_);
lean_ctor_set(v_reuseFailAlloc_3910_, 1, v___x_3907_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object* v_as_3912_, size_t v_sz_3913_, size_t v_i_3914_, lean_object* v_b_3915_){
_start:
{
uint8_t v___x_3917_; 
v___x_3917_ = lean_usize_dec_lt(v_i_3914_, v_sz_3913_);
if (v___x_3917_ == 0)
{
lean_object* v___x_3918_; 
v___x_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3918_, 0, v_b_3915_);
return v___x_3918_;
}
else
{
lean_object* v_snd_3919_; lean_object* v_fst_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3955_; 
v_snd_3919_ = lean_ctor_get(v_b_3915_, 1);
v_fst_3920_ = lean_ctor_get(v_b_3915_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v_b_3915_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3922_ = v_b_3915_;
v_isShared_3923_ = v_isSharedCheck_3955_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_snd_3919_);
lean_inc(v_fst_3920_);
lean_dec(v_b_3915_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3955_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_array_3924_; lean_object* v_start_3925_; lean_object* v_stop_3926_; uint8_t v___x_3927_; 
v_array_3924_ = lean_ctor_get(v_snd_3919_, 0);
v_start_3925_ = lean_ctor_get(v_snd_3919_, 1);
v_stop_3926_ = lean_ctor_get(v_snd_3919_, 2);
v___x_3927_ = lean_nat_dec_lt(v_start_3925_, v_stop_3926_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3929_; 
if (v_isShared_3923_ == 0)
{
v___x_3929_ = v___x_3922_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_fst_3920_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v_snd_3919_);
v___x_3929_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
lean_object* v___x_3930_; 
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
return v___x_3930_;
}
}
else
{
lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3951_; 
lean_inc(v_stop_3926_);
lean_inc(v_start_3925_);
lean_inc_ref(v_array_3924_);
v_isSharedCheck_3951_ = !lean_is_exclusive(v_snd_3919_);
if (v_isSharedCheck_3951_ == 0)
{
lean_object* v_unused_3952_; lean_object* v_unused_3953_; lean_object* v_unused_3954_; 
v_unused_3952_ = lean_ctor_get(v_snd_3919_, 2);
lean_dec(v_unused_3952_);
v_unused_3953_ = lean_ctor_get(v_snd_3919_, 1);
lean_dec(v_unused_3953_);
v_unused_3954_ = lean_ctor_get(v_snd_3919_, 0);
lean_dec(v_unused_3954_);
v___x_3933_ = v_snd_3919_;
v_isShared_3934_ = v_isSharedCheck_3951_;
goto v_resetjp_3932_;
}
else
{
lean_dec(v_snd_3919_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3951_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v_a_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3940_; 
v_a_3935_ = lean_array_uget_borrowed(v_as_3912_, v_i_3914_);
v___x_3936_ = lean_array_fget(v_array_3924_, v_start_3925_);
v___x_3937_ = lean_unsigned_to_nat(1u);
v___x_3938_ = lean_nat_add(v_start_3925_, v___x_3937_);
lean_dec(v_start_3925_);
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 1, v___x_3938_);
v___x_3940_ = v___x_3933_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_array_3924_);
lean_ctor_set(v_reuseFailAlloc_3950_, 1, v___x_3938_);
lean_ctor_set(v_reuseFailAlloc_3950_, 2, v_stop_3926_);
v___x_3940_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
lean_object* v___x_3941_; lean_object* v___x_3943_; 
v___x_3941_ = l_Lean_LocalDecl_fvarId(v_a_3935_);
lean_inc(v_a_3935_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 1, v___x_3936_);
lean_ctor_set(v___x_3922_, 0, v_a_3935_);
v___x_3943_ = v___x_3922_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3935_);
lean_ctor_set(v_reuseFailAlloc_3949_, 1, v___x_3936_);
v___x_3943_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
lean_object* v___x_3944_; lean_object* v___x_3945_; size_t v___x_3946_; size_t v___x_3947_; 
v___x_3944_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___redArg(v_fst_3920_, v___x_3941_, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
lean_ctor_set(v___x_3945_, 1, v___x_3940_);
v___x_3946_ = ((size_t)1ULL);
v___x_3947_ = lean_usize_add(v_i_3914_, v___x_3946_);
v_i_3914_ = v___x_3947_;
v_b_3915_ = v___x_3945_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object* v_as_3956_, lean_object* v_sz_3957_, lean_object* v_i_3958_, lean_object* v_b_3959_, lean_object* v___y_3960_){
_start:
{
size_t v_sz_boxed_3961_; size_t v_i_boxed_3962_; lean_object* v_res_3963_; 
v_sz_boxed_3961_ = lean_unbox_usize(v_sz_3957_);
lean_dec(v_sz_3957_);
v_i_boxed_3962_ = lean_unbox_usize(v_i_3958_);
lean_dec(v_i_3958_);
v_res_3963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_3956_, v_sz_boxed_3961_, v_i_boxed_3962_, v_b_3959_);
lean_dec_ref(v_as_3956_);
return v_res_3963_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0(void){
_start:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_mk_string_unchecked("_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls", 56, 56);
return v___x_3964_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1(void){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_mk_string_unchecked("assertion violation: sortedDecls.size = sortedArgs.size\n  ", 58, 58);
return v___x_3965_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2(void){
_start:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3966_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1);
v___x_3967_ = lean_unsigned_to_nat(2u);
v___x_3968_ = lean_unsigned_to_nat(366u);
v___x_3969_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0);
v___x_3970_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2);
v___x_3971_ = l_mkPanicMessageWithDecl(v___x_3970_, v___x_3969_, v___x_3968_, v___x_3967_, v___x_3966_);
return v___x_3971_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3(void){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_mk_string_unchecked("assertion violation: toSortDecls.size = toSortArgs.size\n  ", 58, 58);
return v___x_3972_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4(void){
_start:
{
lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3973_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3);
v___x_3974_ = lean_unsigned_to_nat(2u);
v___x_3975_ = lean_unsigned_to_nat(367u);
v___x_3976_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0);
v___x_3977_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2);
v___x_3978_ = l_mkPanicMessageWithDecl(v___x_3977_, v___x_3976_, v___x_3975_, v___x_3974_, v___x_3973_);
return v___x_3978_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5(void){
_start:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3979_ = lean_box(0);
v___x_3980_ = lean_unsigned_to_nat(16u);
v___x_3981_ = lean_mk_array(v___x_3980_, v___x_3979_);
return v___x_3981_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6(void){
_start:
{
lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3982_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5);
v___x_3983_ = lean_unsigned_to_nat(0u);
v___x_3984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3983_);
lean_ctor_set(v___x_3984_, 1, v___x_3982_);
return v___x_3984_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7(void){
_start:
{
lean_object* v___x_3985_; 
v___x_3985_ = lean_mk_string_unchecked("Sorted fvars: ", 14, 14);
return v___x_3985_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8(void){
_start:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3986_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7);
v___x_3987_ = l_Lean_stringToMessageData(v___x_3986_);
return v___x_3987_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9(void){
_start:
{
lean_object* v___x_3988_; 
v___x_3988_ = lean_mk_string_unchecked("MVars to abstract, topologically sorting the abstracted variables", 65, 65);
return v___x_3988_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10(void){
_start:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9);
v___x_3990_ = l_Lean_stringToMessageData(v___x_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object* v_sortedDecls_3991_, lean_object* v_sortedArgs_3992_, lean_object* v_toSortDecls_3993_, lean_object* v_toSortArgs_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_){
_start:
{
lean_object* v___y_3999_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v_snd_4022_; lean_object* v___x_4024_; lean_object* v___x_4025_; uint8_t v___x_4026_; 
v___x_4024_ = lean_array_get_size(v_sortedDecls_3991_);
v___x_4025_ = lean_array_get_size(v_sortedArgs_3992_);
v___x_4026_ = lean_nat_dec_eq(v___x_4024_, v___x_4025_);
if (v___x_4026_ == 0)
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
lean_dec_ref(v_toSortArgs_3994_);
lean_dec_ref(v_sortedArgs_3992_);
lean_dec_ref(v_sortedDecls_3991_);
v___x_4027_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2);
v___x_4028_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(v___x_4027_, v_a_3995_, v_a_3996_);
return v___x_4028_;
}
else
{
lean_object* v___x_4029_; lean_object* v___x_4030_; uint8_t v___x_4031_; 
v___x_4029_ = lean_array_get_size(v_toSortDecls_3993_);
v___x_4030_ = lean_array_get_size(v_toSortArgs_3994_);
v___x_4031_ = lean_nat_dec_eq(v___x_4029_, v___x_4030_);
if (v___x_4031_ == 0)
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
lean_dec_ref(v_toSortArgs_3994_);
lean_dec_ref(v_sortedArgs_3992_);
lean_dec_ref(v_sortedDecls_3991_);
v___x_4032_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4);
v___x_4033_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(v___x_4032_, v_a_3995_, v_a_3996_);
return v___x_4033_;
}
else
{
lean_object* v___x_4034_; uint8_t v___x_4035_; 
v___x_4034_ = lean_unsigned_to_nat(0u);
v___x_4035_ = lean_nat_dec_eq(v___x_4029_, v___x_4034_);
if (v___x_4035_ == 0)
{
lean_object* v_options_4036_; lean_object* v_inheritedTraceOptions_4037_; uint8_t v_hasTrace_4038_; lean_object* v_cls_4039_; lean_object* v___y_4041_; lean_object* v___y_4042_; 
v_options_4036_ = lean_ctor_get(v_a_3995_, 2);
v_inheritedTraceOptions_4037_ = lean_ctor_get(v_a_3995_, 13);
v_hasTrace_4038_ = lean_ctor_get_uint8(v_options_4036_, sizeof(void*)*1);
v_cls_4039_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10);
if (v_hasTrace_4038_ == 0)
{
v___y_4041_ = v_a_3995_;
v___y_4042_ = v_a_3996_;
goto v___jp_4040_;
}
else
{
lean_object* v___x_4143_; uint8_t v___x_4144_; 
v___x_4143_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4144_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4037_, v_options_4036_, v___x_4143_);
if (v___x_4144_ == 0)
{
v___y_4041_ = v_a_3995_;
v___y_4042_ = v_a_3996_;
goto v___jp_4040_;
}
else
{
lean_object* v___x_4145_; lean_object* v___x_4146_; 
v___x_4145_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10);
v___x_4146_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_4039_, v___x_4145_, v_a_3995_, v_a_3996_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_dec_ref(v___x_4146_);
v___y_4041_ = v_a_3995_;
v___y_4042_ = v_a_3996_;
goto v___jp_4040_;
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
lean_dec_ref(v_toSortArgs_3994_);
lean_dec_ref(v_sortedArgs_3992_);
lean_dec_ref(v_sortedDecls_3991_);
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4146_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4146_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
}
v___jp_4040_:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; size_t v_sz_4046_; size_t v___x_4047_; lean_object* v___x_4048_; 
v___x_4043_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6);
v___x_4044_ = l_Array_toSubarray___redArg(v_sortedArgs_3992_, v___x_4034_, v___x_4025_);
v___x_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4043_);
lean_ctor_set(v___x_4045_, 1, v___x_4044_);
v_sz_4046_ = lean_array_size(v_sortedDecls_3991_);
v___x_4047_ = ((size_t)0ULL);
v___x_4048_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_sortedDecls_3991_, v_sz_4046_, v___x_4047_, v___x_4045_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; lean_object* v_fst_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4133_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4049_);
lean_dec_ref(v___x_4048_);
v_fst_4050_ = lean_ctor_get(v_a_4049_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v_a_4049_);
if (v_isSharedCheck_4133_ == 0)
{
lean_object* v_unused_4134_; 
v_unused_4134_ = lean_ctor_get(v_a_4049_, 1);
lean_dec(v_unused_4134_);
v___x_4052_ = v_a_4049_;
v_isShared_4053_ = v_isSharedCheck_4133_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_fst_4050_);
lean_dec(v_a_4049_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4133_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4054_; lean_object* v___x_4056_; 
v___x_4054_ = l_Array_toSubarray___redArg(v_toSortArgs_3994_, v___x_4034_, v___x_4030_);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 1, v___x_4054_);
v___x_4056_ = v___x_4052_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_fst_4050_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v___x_4054_);
v___x_4056_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
size_t v_sz_4057_; lean_object* v___x_4058_; 
v_sz_4057_ = lean_array_size(v_toSortDecls_3993_);
v___x_4058_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_toSortDecls_3993_, v_sz_4057_, v___x_4047_, v___x_4056_);
if (lean_obj_tag(v___x_4058_) == 0)
{
lean_object* v_a_4059_; lean_object* v_fst_4060_; lean_object* v_size_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v_a_4059_ = lean_ctor_get(v___x_4058_, 0);
lean_inc(v_a_4059_);
lean_dec_ref(v___x_4058_);
v_fst_4060_ = lean_ctor_get(v_a_4059_, 0);
lean_inc_n(v_fst_4060_, 2);
lean_dec(v_a_4059_);
v_size_4061_ = lean_ctor_get(v_fst_4060_, 0);
v___x_4062_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_4063_ = lean_mk_empty_array_with_capacity(v_size_4061_);
lean_inc_ref(v___x_4063_);
v___x_4064_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4062_);
lean_ctor_set(v___x_4064_, 1, v___x_4062_);
lean_ctor_set(v___x_4064_, 2, v___x_4063_);
lean_ctor_set(v___x_4064_, 3, v___x_4063_);
v___x_4065_ = lean_box(0);
v___x_4066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_4060_, v_sortedDecls_3991_, v_sz_4046_, v___x_4047_, v___x_4065_, v___x_4064_, v___y_4041_, v___y_4042_);
lean_dec_ref(v_sortedDecls_3991_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v_snd_4068_; lean_object* v___x_4069_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref(v___x_4066_);
v_snd_4068_ = lean_ctor_get(v_a_4067_, 1);
lean_inc(v_snd_4068_);
lean_dec(v_a_4067_);
v___x_4069_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_4060_, v_toSortDecls_3993_, v_sz_4057_, v___x_4047_, v___x_4065_, v_snd_4068_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v_snd_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4106_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4070_);
lean_dec_ref(v___x_4069_);
v_snd_4071_ = lean_ctor_get(v_a_4070_, 1);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_a_4070_);
if (v_isSharedCheck_4106_ == 0)
{
lean_object* v_unused_4107_; 
v_unused_4107_ = lean_ctor_get(v_a_4070_, 0);
lean_dec(v_unused_4107_);
v___x_4073_ = v_a_4070_;
v_isShared_4074_ = v_isSharedCheck_4106_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_snd_4071_);
lean_dec(v_a_4070_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4106_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v_options_4075_; lean_object* v_newDecls_4076_; lean_object* v_newArgs_4077_; lean_object* v_inheritedTraceOptions_4078_; uint8_t v_hasTrace_4079_; lean_object* v___f_4080_; 
v_options_4075_ = lean_ctor_get(v___y_4041_, 2);
v_newDecls_4076_ = lean_ctor_get(v_snd_4071_, 2);
v_newArgs_4077_ = lean_ctor_get(v_snd_4071_, 3);
v_inheritedTraceOptions_4078_ = lean_ctor_get(v___y_4041_, 13);
v_hasTrace_4079_ = lean_ctor_get_uint8(v_options_4075_, sizeof(void*)*1);
lean_inc_ref(v_newArgs_4077_);
lean_inc_ref(v_newDecls_4076_);
v___f_4080_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4080_, 0, v_newDecls_4076_);
lean_closure_set(v___f_4080_, 1, v_newArgs_4077_);
if (v_hasTrace_4079_ == 0)
{
lean_del_object(v___x_4073_);
v___y_4018_ = v___y_4042_;
v___y_4019_ = v___y_4041_;
v___y_4020_ = v___x_4065_;
v___y_4021_ = v___f_4080_;
v_snd_4022_ = v_snd_4071_;
goto v___jp_4017_;
}
else
{
lean_object* v___x_4081_; uint8_t v___x_4082_; 
v___x_4081_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4082_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4078_, v_options_4075_, v___x_4081_);
if (v___x_4082_ == 0)
{
lean_del_object(v___x_4073_);
v___y_4018_ = v___y_4042_;
v___y_4019_ = v___y_4041_;
v___y_4020_ = v___x_4065_;
v___y_4021_ = v___f_4080_;
v_snd_4022_ = v_snd_4071_;
goto v___jp_4017_;
}
else
{
lean_object* v___x_4083_; size_t v_sz_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4091_; 
lean_inc_ref(v_newArgs_4077_);
lean_inc_ref_n(v_newDecls_4076_, 2);
lean_dec_ref(v___f_4080_);
v___x_4083_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8);
v_sz_4084_ = lean_array_size(v_newDecls_4076_);
v___x_4085_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_4084_, v___x_4047_, v_newDecls_4076_);
v___x_4086_ = lean_array_to_list(v___x_4085_);
v___x_4087_ = lean_box(0);
v___x_4088_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(v___x_4086_, v___x_4087_);
v___x_4089_ = l_Lean_MessageData_ofList(v___x_4088_);
if (v_isShared_4074_ == 0)
{
lean_ctor_set_tag(v___x_4073_, 7);
lean_ctor_set(v___x_4073_, 1, v___x_4089_);
lean_ctor_set(v___x_4073_, 0, v___x_4083_);
v___x_4091_ = v___x_4073_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v___x_4083_);
lean_ctor_set(v_reuseFailAlloc_4105_, 1, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
lean_object* v___x_4092_; 
v___x_4092_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_4039_, v___x_4091_, v_snd_4071_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v_fst_4094_; lean_object* v_snd_4095_; lean_object* v___x_4096_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_a_4093_);
lean_dec_ref(v___x_4092_);
v_fst_4094_ = lean_ctor_get(v_a_4093_, 0);
lean_inc(v_fst_4094_);
v_snd_4095_ = lean_ctor_get(v_a_4093_, 1);
lean_inc(v_snd_4095_);
lean_dec(v_a_4093_);
v___x_4096_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_4076_, v_newArgs_4077_, v_fst_4094_, v_snd_4095_, v___y_4041_, v___y_4042_);
v___y_3999_ = v___x_4096_;
goto v___jp_3998_;
}
else
{
lean_object* v_a_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v_newArgs_4077_);
lean_dec_ref(v_newDecls_4076_);
v_a_4097_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4099_ = v___x_4092_;
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_a_4097_);
lean_dec(v___x_4092_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v___x_4102_; 
if (v_isShared_4100_ == 0)
{
v___x_4102_ = v___x_4099_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4097_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
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
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
v_a_4108_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4069_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4069_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4123_; 
lean_dec(v_fst_4060_);
v_a_4116_ = lean_ctor_get(v___x_4066_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4118_ = v___x_4066_;
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v___x_4066_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4131_; 
lean_dec_ref(v_sortedDecls_3991_);
v_a_4124_ = lean_ctor_get(v___x_4058_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4058_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4126_ = v___x_4058_;
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v___x_4058_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v___x_4129_; 
if (v_isShared_4127_ == 0)
{
v___x_4129_ = v___x_4126_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4124_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
return v___x_4129_;
}
}
}
}
}
}
else
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4142_; 
lean_dec_ref(v_toSortArgs_3994_);
lean_dec_ref(v_sortedDecls_3991_);
v_a_4135_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4137_ = v___x_4048_;
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v___x_4048_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4140_; 
if (v_isShared_4138_ == 0)
{
v___x_4140_ = v___x_4137_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v_a_4135_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
}
}
else
{
lean_object* v___x_4155_; lean_object* v___x_4156_; 
lean_dec_ref(v_toSortArgs_3994_);
v___x_4155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4155_, 0, v_sortedDecls_3991_);
lean_ctor_set(v___x_4155_, 1, v_sortedArgs_3992_);
v___x_4156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4155_);
return v___x_4156_;
}
}
}
v___jp_3998_:
{
if (lean_obj_tag(v___y_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4008_; 
v_a_4000_ = lean_ctor_get(v___y_3999_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___y_3999_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4002_ = v___y_3999_;
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___y_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v_fst_4004_; lean_object* v___x_4006_; 
v_fst_4004_ = lean_ctor_get(v_a_4000_, 0);
lean_inc(v_fst_4004_);
lean_dec(v_a_4000_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v_fst_4004_);
v___x_4006_ = v___x_4002_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v_fst_4004_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
else
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4016_; 
v_a_4009_ = lean_ctor_get(v___y_3999_, 0);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___y_3999_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4011_ = v___y_3999_;
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v___y_3999_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4014_; 
if (v_isShared_4012_ == 0)
{
v___x_4014_ = v___x_4011_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_a_4009_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
v___jp_4017_:
{
lean_object* v___x_4023_; 
lean_inc(v___y_4018_);
lean_inc_ref(v___y_4019_);
v___x_4023_ = lean_apply_5(v___y_4021_, v___y_4020_, v_snd_4022_, v___y_4019_, v___y_4018_, lean_box(0));
v___y_3999_ = v___x_4023_;
goto v___jp_3998_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object* v_sortedDecls_4157_, lean_object* v_sortedArgs_4158_, lean_object* v_toSortDecls_4159_, lean_object* v_toSortArgs_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v_sortedDecls_4157_, v_sortedArgs_4158_, v_toSortDecls_4159_, v_toSortArgs_4160_, v_a_4161_, v_a_4162_);
lean_dec(v_a_4162_);
lean_dec_ref(v_a_4161_);
lean_dec_ref(v_toSortDecls_4159_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object* v_00_u03b2_4165_, lean_object* v_m_4166_, lean_object* v_a_4167_, lean_object* v_b_4168_){
_start:
{
lean_object* v___x_4169_; 
v___x_4169_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___redArg(v_m_4166_, v_a_4167_, v_b_4168_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object* v_as_4170_, size_t v_sz_4171_, size_t v_i_4172_, lean_object* v_b_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v___x_4177_; 
v___x_4177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_4170_, v_sz_4171_, v_i_4172_, v_b_4173_);
return v___x_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object* v_as_4178_, lean_object* v_sz_4179_, lean_object* v_i_4180_, lean_object* v_b_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_){
_start:
{
size_t v_sz_boxed_4185_; size_t v_i_boxed_4186_; lean_object* v_res_4187_; 
v_sz_boxed_4185_ = lean_unbox_usize(v_sz_4179_);
lean_dec(v_sz_4179_);
v_i_boxed_4186_ = lean_unbox_usize(v_i_4180_);
lean_dec(v_i_4180_);
v_res_4187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(v_as_4178_, v_sz_boxed_4185_, v_i_boxed_4186_, v_b_4181_, v___y_4182_, v___y_4183_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
lean_dec_ref(v_as_4178_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1(lean_object* v_00_u03b2_4188_, lean_object* v_a_4189_, lean_object* v_b_4190_, lean_object* v_x_4191_){
_start:
{
lean_object* v___x_4192_; 
v___x_4192_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1_spec__1___redArg(v_a_4189_, v_b_4190_, v_x_4191_);
return v___x_4192_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0(void){
_start:
{
lean_object* v___f_4193_; 
v___f_4193_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_4193_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object* v_msg_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_){
_start:
{
lean_object* v___f_4200_; lean_object* v___x_1502__overap_4201_; lean_object* v___x_4202_; 
v___f_4200_ = lean_obj_once(&l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0, &l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0);
v___x_1502__overap_4201_ = lean_panic_fn_borrowed(v___f_4200_, v_msg_4194_);
lean_inc(v___y_4198_);
lean_inc_ref(v___y_4197_);
lean_inc(v___y_4196_);
lean_inc_ref(v___y_4195_);
v___x_4202_ = lean_apply_5(v___x_1502__overap_4201_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_, lean_box(0));
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object* v_msg_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v_msg_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
return v_res_4209_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0(void){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4210_ = lean_box(0);
v___x_4211_ = lean_unsigned_to_nat(16u);
v___x_4212_ = lean_mk_array(v___x_4211_, v___x_4210_);
return v___x_4212_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1(void){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4213_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0);
v___x_4214_ = lean_unsigned_to_nat(0u);
v___x_4215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
lean_ctor_set(v___x_4215_, 1, v___x_4213_);
return v___x_4215_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__2(void){
_start:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4216_ = lean_unsigned_to_nat(0u);
v___x_4217_ = lean_mk_empty_array_with_capacity(v___x_4216_);
return v___x_4217_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3(void){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4218_ = lean_unsigned_to_nat(1u);
v___x_4219_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__2, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__2);
v___x_4220_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1);
v___x_4221_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4220_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
lean_ctor_set(v___x_4221_, 2, v___x_4219_);
lean_ctor_set(v___x_4221_, 3, v___x_4218_);
lean_ctor_set(v___x_4221_, 4, v___x_4219_);
lean_ctor_set(v___x_4221_, 5, v___x_4219_);
lean_ctor_set(v___x_4221_, 6, v___x_4219_);
lean_ctor_set(v___x_4221_, 7, v___x_4219_);
lean_ctor_set(v___x_4221_, 8, v___x_4218_);
lean_ctor_set(v___x_4221_, 9, v___x_4219_);
lean_ctor_set(v___x_4221_, 10, v___x_4219_);
lean_ctor_set(v___x_4221_, 11, v___x_4219_);
return v___x_4221_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__4(void){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = lean_mk_string_unchecked("Lean.Meta.Closure.mkValueTypeClosure", 36, 36);
return v___x_4222_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__5(void){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_mk_string_unchecked("assertion violation: !value.hasFVar  -- In case https://github.com/leanprover/lean4/issues/10705 resurfaces in a new way\n  ", 123, 123);
return v___x_4223_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6(void){
_start:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4224_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__5, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__5);
v___x_4225_ = lean_unsigned_to_nat(2u);
v___x_4226_ = lean_unsigned_to_nat(417u);
v___x_4227_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__4, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__4);
v___x_4228_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2);
v___x_4229_ = l_mkPanicMessageWithDecl(v___x_4228_, v___x_4227_, v___x_4226_, v___x_4225_, v___x_4224_);
return v___x_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object* v_type_4230_, lean_object* v_value_4231_, uint8_t v_zetaDelta_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_){
_start:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___x_4238_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__3, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3);
v___x_4239_ = lean_st_ref_get(v_a_4236_);
lean_dec(v___x_4239_);
v___x_4240_ = lean_st_mk_ref(v___x_4238_);
v___x_4241_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_4230_, v_value_4231_, v_zetaDelta_4232_, v___x_4240_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v_fst_4245_; lean_object* v_snd_4246_; lean_object* v_levelParams_4247_; lean_object* v_levelArgs_4248_; lean_object* v_newLocalDecls_4249_; lean_object* v_newLocalDeclsForMVars_4250_; lean_object* v_newLetDecls_4251_; lean_object* v_exprMVarArgs_4252_; lean_object* v_exprFVarArgs_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref(v___x_4241_);
v___x_4243_ = lean_st_ref_get(v_a_4236_);
lean_dec(v___x_4243_);
v___x_4244_ = lean_st_ref_get(v___x_4240_);
lean_dec(v___x_4240_);
v_fst_4245_ = lean_ctor_get(v_a_4242_, 0);
lean_inc(v_fst_4245_);
v_snd_4246_ = lean_ctor_get(v_a_4242_, 1);
lean_inc(v_snd_4246_);
lean_dec(v_a_4242_);
v_levelParams_4247_ = lean_ctor_get(v___x_4244_, 2);
lean_inc_ref(v_levelParams_4247_);
v_levelArgs_4248_ = lean_ctor_get(v___x_4244_, 4);
lean_inc_ref(v_levelArgs_4248_);
v_newLocalDecls_4249_ = lean_ctor_get(v___x_4244_, 5);
lean_inc_ref(v_newLocalDecls_4249_);
v_newLocalDeclsForMVars_4250_ = lean_ctor_get(v___x_4244_, 6);
lean_inc_ref(v_newLocalDeclsForMVars_4250_);
v_newLetDecls_4251_ = lean_ctor_get(v___x_4244_, 7);
lean_inc_ref(v_newLetDecls_4251_);
v_exprMVarArgs_4252_ = lean_ctor_get(v___x_4244_, 9);
lean_inc_ref(v_exprMVarArgs_4252_);
v_exprFVarArgs_4253_ = lean_ctor_get(v___x_4244_, 10);
lean_inc_ref(v_exprFVarArgs_4253_);
lean_dec(v___x_4244_);
v___x_4254_ = l_Array_reverse___redArg(v_newLocalDecls_4249_);
v___x_4255_ = l_Array_reverse___redArg(v_exprFVarArgs_4253_);
v___x_4256_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v___x_4254_, v___x_4255_, v_newLocalDeclsForMVars_4250_, v_exprMVarArgs_4252_, v_a_4235_, v_a_4236_);
lean_dec_ref(v_newLocalDeclsForMVars_4250_);
if (lean_obj_tag(v___x_4256_) == 0)
{
lean_object* v_a_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4275_; 
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4259_ = v___x_4256_;
v_isShared_4260_ = v_isSharedCheck_4275_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_a_4257_);
lean_dec(v___x_4256_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4275_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v_fst_4261_; lean_object* v_snd_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; 
v_fst_4261_ = lean_ctor_get(v_a_4257_, 0);
lean_inc_n(v_fst_4261_, 2);
v_snd_4262_ = lean_ctor_get(v_a_4257_, 1);
lean_inc(v_snd_4262_);
lean_dec(v_a_4257_);
v___x_4263_ = l_Array_reverse___redArg(v_newLetDecls_4251_);
lean_inc_ref(v___x_4263_);
v___x_4264_ = l_Lean_Meta_Closure_mkForall(v___x_4263_, v_fst_4245_);
lean_dec(v_fst_4245_);
v___x_4265_ = l_Lean_Meta_Closure_mkForall(v_fst_4261_, v___x_4264_);
lean_dec_ref(v___x_4264_);
v___x_4266_ = l_Lean_Meta_Closure_mkLambda(v___x_4263_, v_snd_4246_);
lean_dec(v_snd_4246_);
v___x_4267_ = l_Lean_Meta_Closure_mkLambda(v_fst_4261_, v___x_4266_);
lean_dec_ref(v___x_4266_);
v___x_4268_ = l_Lean_Expr_hasFVar(v___x_4267_);
if (v___x_4268_ == 0)
{
lean_object* v___x_4269_; lean_object* v___x_4271_; 
v___x_4269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4269_, 0, v_levelParams_4247_);
lean_ctor_set(v___x_4269_, 1, v___x_4265_);
lean_ctor_set(v___x_4269_, 2, v___x_4267_);
lean_ctor_set(v___x_4269_, 3, v_levelArgs_4248_);
lean_ctor_set(v___x_4269_, 4, v_snd_4262_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 0, v___x_4269_);
v___x_4271_ = v___x_4259_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v___x_4269_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
else
{
lean_object* v___x_4273_; lean_object* v___x_4274_; 
lean_dec_ref(v___x_4267_);
lean_dec_ref(v___x_4265_);
lean_dec(v_snd_4262_);
lean_del_object(v___x_4259_);
lean_dec_ref(v_levelArgs_4248_);
lean_dec_ref(v_levelParams_4247_);
v___x_4273_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__6, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6);
v___x_4274_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v___x_4273_, v_a_4233_, v_a_4234_, v_a_4235_, v_a_4236_);
return v___x_4274_;
}
}
}
else
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4283_; 
lean_dec_ref(v_newLetDecls_4251_);
lean_dec_ref(v_levelArgs_4248_);
lean_dec_ref(v_levelParams_4247_);
lean_dec(v_snd_4246_);
lean_dec(v_fst_4245_);
v_a_4276_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4278_ = v___x_4256_;
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4256_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
else
{
lean_object* v_a_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4291_; 
lean_dec(v___x_4240_);
v_a_4284_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4291_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4286_ = v___x_4241_;
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_a_4284_);
lean_dec(v___x_4241_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4289_; 
if (v_isShared_4287_ == 0)
{
v___x_4289_ = v___x_4286_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v_a_4284_);
v___x_4289_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
return v___x_4289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object* v_type_4292_, lean_object* v_value_4293_, lean_object* v_zetaDelta_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_, lean_object* v_a_4297_, lean_object* v_a_4298_, lean_object* v_a_4299_){
_start:
{
uint8_t v_zetaDelta_boxed_4300_; lean_object* v_res_4301_; 
v_zetaDelta_boxed_4300_ = lean_unbox(v_zetaDelta_4294_);
v_res_4301_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4292_, v_value_4293_, v_zetaDelta_boxed_4300_, v_a_4295_, v_a_4296_, v_a_4297_, v_a_4298_);
lean_dec(v_a_4298_);
lean_dec_ref(v_a_4297_);
lean_dec(v_a_4296_);
lean_dec_ref(v_a_4295_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object* v_name_4302_, lean_object* v_levelParams_4303_, lean_object* v_type_4304_, lean_object* v_value_4305_, lean_object* v_hints_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v___x_4309_; uint8_t v___y_4311_; uint8_t v___y_4318_; lean_object* v_env_4321_; uint8_t v___x_4322_; 
v___x_4309_ = lean_st_ref_get(v___y_4307_);
v_env_4321_ = lean_ctor_get(v___x_4309_, 0);
lean_inc_ref_n(v_env_4321_, 2);
lean_dec(v___x_4309_);
v___x_4322_ = l_Lean_Environment_hasUnsafe(v_env_4321_, v_type_4304_);
if (v___x_4322_ == 0)
{
uint8_t v___x_4323_; 
v___x_4323_ = l_Lean_Environment_hasUnsafe(v_env_4321_, v_value_4305_);
v___y_4318_ = v___x_4323_;
goto v___jp_4317_;
}
else
{
lean_dec_ref(v_env_4321_);
v___y_4318_ = v___x_4322_;
goto v___jp_4317_;
}
v___jp_4310_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
lean_inc(v_name_4302_);
v___x_4312_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4312_, 0, v_name_4302_);
lean_ctor_set(v___x_4312_, 1, v_levelParams_4303_);
lean_ctor_set(v___x_4312_, 2, v_type_4304_);
v___x_4313_ = lean_box(0);
v___x_4314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4314_, 0, v_name_4302_);
lean_ctor_set(v___x_4314_, 1, v___x_4313_);
v___x_4315_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4315_, 0, v___x_4312_);
lean_ctor_set(v___x_4315_, 1, v_value_4305_);
lean_ctor_set(v___x_4315_, 2, v_hints_4306_);
lean_ctor_set(v___x_4315_, 3, v___x_4314_);
lean_ctor_set_uint8(v___x_4315_, sizeof(void*)*4, v___y_4311_);
v___x_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
return v___x_4316_;
}
v___jp_4317_:
{
if (v___y_4318_ == 0)
{
uint8_t v___x_4319_; 
v___x_4319_ = 1;
v___y_4311_ = v___x_4319_;
goto v___jp_4310_;
}
else
{
uint8_t v___x_4320_; 
v___x_4320_ = 0;
v___y_4311_ = v___x_4320_;
goto v___jp_4310_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object* v_name_4324_, lean_object* v_levelParams_4325_, lean_object* v_type_4326_, lean_object* v_value_4327_, lean_object* v_hints_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4324_, v_levelParams_4325_, v_type_4326_, v_value_4327_, v_hints_4328_, v___y_4329_);
lean_dec(v___y_4329_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object* v_name_4332_, lean_object* v_levelParams_4333_, lean_object* v_type_4334_, lean_object* v_value_4335_, lean_object* v_hints_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4332_, v_levelParams_4333_, v_type_4334_, v_value_4335_, v_hints_4336_, v___y_4340_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object* v_name_4343_, lean_object* v_levelParams_4344_, lean_object* v_type_4345_, lean_object* v_value_4346_, lean_object* v_hints_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(v_name_4343_, v_levelParams_4344_, v_type_4345_, v_value_4346_, v_hints_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object* v_name_4354_, lean_object* v_type_4355_, lean_object* v_value_4356_, uint8_t v_zetaDelta_4357_, uint8_t v_compile_4358_, uint8_t v_logCompileErrors_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_){
_start:
{
lean_object* v___x_4365_; 
v___x_4365_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4355_, v_value_4356_, v_zetaDelta_4357_, v_a_4360_, v_a_4361_, v_a_4362_, v_a_4363_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4417_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4368_ = v___x_4365_;
v_isShared_4369_ = v_isSharedCheck_4417_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4365_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4417_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4370_; lean_object* v_env_4371_; lean_object* v_levelParams_4372_; lean_object* v_type_4373_; lean_object* v_value_4374_; lean_object* v_levelArgs_4375_; lean_object* v_exprArgs_4376_; uint32_t v___x_4384_; uint32_t v___x_4385_; uint32_t v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4416_; 
v___x_4370_ = lean_st_ref_get(v_a_4363_);
v_env_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc_ref(v_env_4371_);
lean_dec(v___x_4370_);
v_levelParams_4372_ = lean_ctor_get(v_a_4366_, 0);
lean_inc_ref(v_levelParams_4372_);
v_type_4373_ = lean_ctor_get(v_a_4366_, 1);
lean_inc_ref(v_type_4373_);
v_value_4374_ = lean_ctor_get(v_a_4366_, 2);
lean_inc_ref_n(v_value_4374_, 2);
v_levelArgs_4375_ = lean_ctor_get(v_a_4366_, 3);
lean_inc_ref(v_levelArgs_4375_);
v_exprArgs_4376_ = lean_ctor_get(v_a_4366_, 4);
lean_inc_ref(v_exprArgs_4376_);
lean_dec(v_a_4366_);
v___x_4384_ = l_Lean_getMaxHeight(v_env_4371_, v_value_4374_);
v___x_4385_ = 1;
v___x_4386_ = lean_uint32_add(v___x_4384_, v___x_4385_);
v___x_4387_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_4387_, 0, v___x_4386_);
v___x_4388_ = lean_array_to_list(v_levelParams_4372_);
lean_inc(v_name_4354_);
v___x_4389_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4354_, v___x_4388_, v_type_4373_, v_value_4374_, v___x_4387_, v_a_4363_);
v_a_4390_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4392_ = v___x_4389_;
v_isShared_4393_ = v_isSharedCheck_4416_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_dec(v___x_4389_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4416_;
goto v_resetjp_4391_;
}
v___jp_4377_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4382_; 
v___x_4378_ = lean_array_to_list(v_levelArgs_4375_);
v___x_4379_ = l_Lean_mkConst(v_name_4354_, v___x_4378_);
v___x_4380_ = l_Lean_mkAppN(v___x_4379_, v_exprArgs_4376_);
lean_dec_ref(v_exprArgs_4376_);
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 0, v___x_4380_);
v___x_4382_ = v___x_4368_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v___x_4380_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
return v___x_4382_;
}
}
v_resetjp_4391_:
{
lean_object* v___x_4395_; 
if (v_isShared_4393_ == 0)
{
lean_ctor_set_tag(v___x_4392_, 1);
v___x_4395_ = v___x_4392_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4390_);
v___x_4395_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
uint8_t v___x_4396_; lean_object* v___x_4397_; 
v___x_4396_ = 0;
lean_inc_ref(v___x_4395_);
v___x_4397_ = l_Lean_addDecl(v___x_4395_, v___x_4396_, v_a_4362_, v_a_4363_);
if (lean_obj_tag(v___x_4397_) == 0)
{
lean_dec_ref(v___x_4397_);
if (v_compile_4358_ == 0)
{
lean_dec_ref(v___x_4395_);
goto v___jp_4377_;
}
else
{
lean_object* v___x_4398_; 
v___x_4398_ = l_Lean_compileDecl(v___x_4395_, v_logCompileErrors_4359_, v_a_4362_, v_a_4363_);
if (lean_obj_tag(v___x_4398_) == 0)
{
lean_dec_ref(v___x_4398_);
goto v___jp_4377_;
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v_exprArgs_4376_);
lean_dec_ref(v_levelArgs_4375_);
lean_del_object(v___x_4368_);
lean_dec(v_name_4354_);
v_a_4399_ = lean_ctor_get(v___x_4398_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4398_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4398_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4398_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec_ref(v___x_4395_);
lean_dec_ref(v_exprArgs_4376_);
lean_dec_ref(v_levelArgs_4375_);
lean_del_object(v___x_4368_);
lean_dec(v_name_4354_);
v_a_4407_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4397_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4397_);
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
}
}
}
else
{
lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4425_; 
lean_dec(v_name_4354_);
v_a_4418_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4420_ = v___x_4365_;
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_dec(v___x_4365_);
v___x_4420_ = lean_box(0);
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
v_resetjp_4419_:
{
lean_object* v___x_4423_; 
if (v_isShared_4421_ == 0)
{
v___x_4423_ = v___x_4420_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v_a_4418_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object* v_name_4426_, lean_object* v_type_4427_, lean_object* v_value_4428_, lean_object* v_zetaDelta_4429_, lean_object* v_compile_4430_, lean_object* v_logCompileErrors_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_){
_start:
{
uint8_t v_zetaDelta_boxed_4437_; uint8_t v_compile_boxed_4438_; uint8_t v_logCompileErrors_boxed_4439_; lean_object* v_res_4440_; 
v_zetaDelta_boxed_4437_ = lean_unbox(v_zetaDelta_4429_);
v_compile_boxed_4438_ = lean_unbox(v_compile_4430_);
v_logCompileErrors_boxed_4439_ = lean_unbox(v_logCompileErrors_4431_);
v_res_4440_ = l_Lean_Meta_mkAuxDefinition(v_name_4426_, v_type_4427_, v_value_4428_, v_zetaDelta_boxed_4437_, v_compile_boxed_4438_, v_logCompileErrors_boxed_4439_, v_a_4432_, v_a_4433_, v_a_4434_, v_a_4435_);
lean_dec(v_a_4435_);
lean_dec_ref(v_a_4434_);
lean_dec(v_a_4433_);
lean_dec_ref(v_a_4432_);
return v_res_4440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object* v_name_4441_, lean_object* v_value_4442_, uint8_t v_zetaDelta_4443_, uint8_t v_compile_4444_, uint8_t v_logCompileErrors_4445_, lean_object* v_a_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_){
_start:
{
lean_object* v___x_4451_; 
lean_inc(v_a_4449_);
lean_inc_ref(v_a_4448_);
lean_inc(v_a_4447_);
lean_inc_ref(v_a_4446_);
lean_inc_ref(v_value_4442_);
v___x_4451_ = lean_infer_type(v_value_4442_, v_a_4446_, v_a_4447_, v_a_4448_, v_a_4449_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v_a_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v_a_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_a_4452_);
lean_dec_ref(v___x_4451_);
v___x_4453_ = l_Lean_Expr_headBeta(v_a_4452_);
v___x_4454_ = l_Lean_Meta_mkAuxDefinition(v_name_4441_, v___x_4453_, v_value_4442_, v_zetaDelta_4443_, v_compile_4444_, v_logCompileErrors_4445_, v_a_4446_, v_a_4447_, v_a_4448_, v_a_4449_);
return v___x_4454_;
}
else
{
lean_dec_ref(v_value_4442_);
lean_dec(v_name_4441_);
return v___x_4451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object* v_name_4455_, lean_object* v_value_4456_, lean_object* v_zetaDelta_4457_, lean_object* v_compile_4458_, lean_object* v_logCompileErrors_4459_, lean_object* v_a_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_){
_start:
{
uint8_t v_zetaDelta_boxed_4465_; uint8_t v_compile_boxed_4466_; uint8_t v_logCompileErrors_boxed_4467_; lean_object* v_res_4468_; 
v_zetaDelta_boxed_4465_ = lean_unbox(v_zetaDelta_4457_);
v_compile_boxed_4466_ = lean_unbox(v_compile_4458_);
v_logCompileErrors_boxed_4467_ = lean_unbox(v_logCompileErrors_4459_);
v_res_4468_ = l_Lean_Meta_mkAuxDefinitionFor(v_name_4455_, v_value_4456_, v_zetaDelta_boxed_4465_, v_compile_boxed_4466_, v_logCompileErrors_boxed_4467_, v_a_4460_, v_a_4461_, v_a_4462_, v_a_4463_);
lean_dec(v_a_4463_);
lean_dec_ref(v_a_4462_);
lean_dec(v_a_4461_);
lean_dec_ref(v_a_4460_);
return v_res_4468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object* v_type_4469_, lean_object* v_value_4470_, uint8_t v_zetaDelta_4471_, lean_object* v_kind_x3f_4472_, uint8_t v_cache_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_){
_start:
{
lean_object* v___x_4479_; 
v___x_4479_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4469_, v_value_4470_, v_zetaDelta_4471_, v_a_4474_, v_a_4475_, v_a_4476_, v_a_4477_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v_levelParams_4481_; lean_object* v_type_4482_; lean_object* v_value_4483_; lean_object* v_levelArgs_4484_; lean_object* v_exprArgs_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; lean_object* v___x_4488_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4480_);
lean_dec_ref(v___x_4479_);
v_levelParams_4481_ = lean_ctor_get(v_a_4480_, 0);
lean_inc_ref(v_levelParams_4481_);
v_type_4482_ = lean_ctor_get(v_a_4480_, 1);
lean_inc_ref(v_type_4482_);
v_value_4483_ = lean_ctor_get(v_a_4480_, 2);
lean_inc_ref(v_value_4483_);
v_levelArgs_4484_ = lean_ctor_get(v_a_4480_, 3);
lean_inc_ref(v_levelArgs_4484_);
v_exprArgs_4485_ = lean_ctor_get(v_a_4480_, 4);
lean_inc_ref(v_exprArgs_4485_);
lean_dec(v_a_4480_);
v___x_4486_ = lean_array_to_list(v_levelParams_4481_);
v___x_4487_ = 0;
v___x_4488_ = l_Lean_Meta_mkAuxLemma(v___x_4486_, v_type_4482_, v_value_4483_, v_kind_x3f_4472_, v_cache_4473_, v___x_4487_, v___x_4487_, v___x_4487_, v_a_4474_, v_a_4475_, v_a_4476_, v_a_4477_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v_a_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4499_; 
v_a_4489_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4491_ = v___x_4488_;
v_isShared_4492_ = v_isSharedCheck_4499_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_a_4489_);
lean_dec(v___x_4488_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4499_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4497_; 
v___x_4493_ = lean_array_to_list(v_levelArgs_4484_);
v___x_4494_ = l_Lean_mkConst(v_a_4489_, v___x_4493_);
v___x_4495_ = l_Lean_mkAppN(v___x_4494_, v_exprArgs_4485_);
lean_dec_ref(v_exprArgs_4485_);
if (v_isShared_4492_ == 0)
{
lean_ctor_set(v___x_4491_, 0, v___x_4495_);
v___x_4497_ = v___x_4491_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___x_4495_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
return v___x_4497_;
}
}
}
else
{
lean_object* v_a_4500_; lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4507_; 
lean_dec_ref(v_exprArgs_4485_);
lean_dec_ref(v_levelArgs_4484_);
v_a_4500_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4507_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4507_ == 0)
{
v___x_4502_ = v___x_4488_;
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
else
{
lean_inc(v_a_4500_);
lean_dec(v___x_4488_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v___x_4505_; 
if (v_isShared_4503_ == 0)
{
v___x_4505_ = v___x_4502_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4500_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
return v___x_4505_;
}
}
}
}
else
{
lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
lean_dec(v_kind_x3f_4472_);
v_a_4508_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4510_ = v___x_4479_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_dec(v___x_4479_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4508_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object* v_type_4516_, lean_object* v_value_4517_, lean_object* v_zetaDelta_4518_, lean_object* v_kind_x3f_4519_, lean_object* v_cache_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_){
_start:
{
uint8_t v_zetaDelta_boxed_4526_; uint8_t v_cache_boxed_4527_; lean_object* v_res_4528_; 
v_zetaDelta_boxed_4526_ = lean_unbox(v_zetaDelta_4518_);
v_cache_boxed_4527_ = lean_unbox(v_cache_4520_);
v_res_4528_ = l_Lean_Meta_mkAuxTheorem(v_type_4516_, v_value_4517_, v_zetaDelta_boxed_4526_, v_kind_x3f_4519_, v_cache_boxed_4527_, v_a_4521_, v_a_4522_, v_a_4523_, v_a_4524_);
lean_dec(v_a_4524_);
lean_dec_ref(v_a_4523_);
lean_dec(v_a_4522_);
lean_dec_ref(v_a_4521_);
return v_res_4528_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_4529_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4530_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4531_ = lean_box(0);
v___x_4532_ = l_Lean_Name_str___override(v___x_4531_, v___x_4530_);
return v___x_4532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4533_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4534_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4535_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4536_ = l_Lean_Name_str___override(v___x_4535_, v___x_4534_);
return v___x_4536_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4537_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8);
v___x_4538_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4539_ = l_Lean_Name_str___override(v___x_4538_, v___x_4537_);
return v___x_4539_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4540_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9);
v___x_4541_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4542_ = l_Lean_Name_str___override(v___x_4541_, v___x_4540_);
return v___x_4542_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4543_ = lean_unsigned_to_nat(0u);
v___x_4544_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4545_ = l_Lean_Name_num___override(v___x_4544_, v___x_4543_);
return v___x_4545_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4546_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4547_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4548_ = l_Lean_Name_str___override(v___x_4547_, v___x_4546_);
return v___x_4548_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4549_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8);
v___x_4550_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4551_ = l_Lean_Name_str___override(v___x_4550_, v___x_4549_);
return v___x_4551_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4552_; 
v___x_4552_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_4552_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4553_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4554_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4555_ = l_Lean_Name_str___override(v___x_4554_, v___x_4553_);
return v___x_4555_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4556_; 
v___x_4556_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_4556_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4557_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4558_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4559_ = l_Lean_Name_str___override(v___x_4558_, v___x_4557_);
return v___x_4559_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4560_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4561_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4562_ = l_Lean_Name_str___override(v___x_4561_, v___x_4560_);
return v___x_4562_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4563_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8);
v___x_4564_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4565_ = l_Lean_Name_str___override(v___x_4564_, v___x_4563_);
return v___x_4565_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4566_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9);
v___x_4567_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4568_ = l_Lean_Name_str___override(v___x_4567_, v___x_4566_);
return v___x_4568_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4569_ = lean_unsigned_to_nat(482266140u);
v___x_4570_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4571_ = l_Lean_Name_num___override(v___x_4570_, v___x_4569_);
return v___x_4571_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4572_; 
v___x_4572_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_4572_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v___x_4573_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4574_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4575_ = l_Lean_Name_str___override(v___x_4574_, v___x_4573_);
return v___x_4575_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4576_; 
v___x_4576_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_4576_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___x_4577_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4578_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4579_ = l_Lean_Name_str___override(v___x_4578_, v___x_4577_);
return v___x_4579_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; 
v___x_4580_ = lean_unsigned_to_nat(2u);
v___x_4581_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4582_ = l_Lean_Name_num___override(v___x_4581_, v___x_4580_);
return v___x_4582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4584_; uint8_t v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4584_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10);
v___x_4585_ = 0;
v___x_4586_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_);
v___x_4587_ = l_Lean_registerTraceClass(v___x_4584_, v___x_4585_, v___x_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2____boxed(lean_object* v_a_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_();
return v_res_4589_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Closure_instInhabitedToProcessElement_default = _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default();
lean_mark_persistent(l_Lean_Meta_Closure_instInhabitedToProcessElement_default);
l_Lean_Meta_Closure_instInhabitedToProcessElement = _init_l_Lean_Meta_Closure_instInhabitedToProcessElement();
lean_mark_persistent(l_Lean_Meta_Closure_instInhabitedToProcessElement);
res = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_482266140____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Closure(builtin);
}
#ifdef __cplusplus
}
#endif
